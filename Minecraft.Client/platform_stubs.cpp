#if !defined(_WIN32)

#include "stdafx.h"
#include "Common/UI/UIBackend.h"
#include "Windows64/Windows64_UIController.h"
#include "KeyboardMouseInput.h"
#include "Common/UI/IUIScene_AbstractContainerMenu.h"
#include "Common/Audio/SoundEngine.h"
#include "Windows_Libs/Dev/Render/Renderer.h"
#include "../Minecraft.World/Item.h"
#include "../Minecraft.World/Tile.h"
#include "../Minecraft.World/RemoveEntitiesPacket.h"

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include "Windows64/4JLibs/inc/4J_Render.h"
#include "Minecraft.h"
#include "../Minecraft.World/AABB.h"
#include "../Minecraft.World/Vec3.h"
#include "../Minecraft.World/IntCache.h"
#include "../Minecraft.World/compression.h"
#include "../Minecraft.World/OldChunkStorage.h"
#include "../Minecraft.World/Level.h"
#include "Tesselator.h"
#include "Common/Network/GameNetworkManager.h"
#include "PlayerRenderer.h"

// ---- ConsoleUIController ----

ConsoleUIController ui;

void ConsoleUIController::init(ID3D11Device*, ID3D11DeviceContext*, ID3D11RenderTargetView*, ID3D11DepthStencilView*, S32, S32) {}
void ConsoleUIController::render() {}
void ConsoleUIController::beginIggyCustomDraw4J(IggyCustomDrawCallbackRegion*, CustomDrawData*) {}
CustomDrawData* ConsoleUIController::setupCustomDraw(UIScene*, IggyCustomDrawCallbackRegion*) { return nullptr; }
CustomDrawData* ConsoleUIController::calculateCustomDraw(IggyCustomDrawCallbackRegion*) { return nullptr; }
void ConsoleUIController::endCustomDraw(IggyCustomDrawCallbackRegion*) {}
void ConsoleUIController::setTileOrigin(S32, S32) {}
GDrawTexture* ConsoleUIController::getSubstitutionTexture(int) { return nullptr; }
void ConsoleUIController::destroySubstitutionTexture(void*, GDrawTexture*) {}
void ConsoleUIController::shutdown() {}

// ---- globals ----

KeyboardMouseInput g_KBMInput;
char g_Win64Username[256] = {};
wchar_t g_Win64UsernameW[256] = {};
SavedInventoryCursorPos g_savedInventoryCursorPos = { 0.0f, 0.0f, false };

// ---- main ----

static int g_iScreenWidth  = 1920;
static int g_iScreenHeight = 1080;
static GLFWwindow *g_window = nullptr;

static void glfwErrorCB(int code, const char *desc) {
    fprintf(stderr, "GLFW error %d: %s\n", code, desc);
}

static void glfwResizeCB(GLFWwindow *, int w, int h) {
    g_iScreenWidth  = w;
    g_iScreenHeight = h;
}

int main(int argc, char* argv[])
{
    const char *playerName = "Player";
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-name") == 0 && i + 1 < argc)
            playerName = argv[++i];
    }

    snprintf(g_Win64Username, sizeof(g_Win64Username), "%.*s", (int)sizeof(g_Win64Username) - 1, playerName);
    for (int i = 0; playerName[i] && i < 255; i++)
        g_Win64UsernameW[i] = (wchar_t)playerName[i];

    glfwSetErrorCallback(glfwErrorCB);
    if (!glfwInit()) {
        fprintf(stderr, "glfwInit failed\n");
        return 1;
    }

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);

    g_window = glfwCreateWindow(g_iScreenWidth, g_iScreenHeight, "Minecraft Legacy Console", nullptr, nullptr);
    if (!g_window) {
        fprintf(stderr, "glfwCreateWindow failed\n");
        glfwTerminate();
        return 1;
    }
    glfwSetFramebufferSizeCallback(g_window, glfwResizeCB);

    RenderManager.Initialise(g_window, g_iScreenWidth, g_iScreenHeight);
    fprintf(stderr, "Renderer init done, calling InitialiseContext...\n");
    RenderManager.InitialiseContext();
    fprintf(stderr, "InitialiseContext done\n");

    app.loadMediaArchive();
    fprintf(stderr, "Media archive loaded\n");
    app.loadStringTable();
    fprintf(stderr, "String table loaded\n");

    InputManager.Initialise(1, 3, MINECRAFT_ACTION_MAX, ACTION_MAX_MENU);
    g_KBMInput.Init();
    fprintf(stderr, "Input init done\n");

    Tesselator::CreateNewThreadStorage(1024 * 1024);
    AABB::CreateNewThreadStorage();
    Vec3::CreateNewThreadStorage();
    IntCache::CreateNewThreadStorage();
    Compression::CreateNewThreadStorage();
    OldChunkStorage::CreateNewThreadStorage();
    Level::enableLightingCache();
    Tile::CreateNewThreadStorage();
    fprintf(stderr, "Thread storage init done\n");

    g_NetworkManager.Initialise();
    PlayerRenderer::InitNametagColors();
    fprintf(stderr, "Network + PlayerRenderer done\n");

    fprintf(stderr, "Calling Minecraft::main()...\n");
    Minecraft::main();
    fprintf(stderr, "Minecraft::main() returned\n");
    Minecraft *mc = Minecraft::GetInstance();
    fprintf(stderr, "Minecraft instance: %p\n", (void*)mc);

    while (!glfwWindowShouldClose(g_window)) {
        glfwPollEvents();

        g_KBMInput.Tick();
        InputManager.Tick();
        StorageManager.Tick();
        RenderManager.Tick();

        RenderManager.StartFrame();

        if (mc) {
            mc->run_middle();
        }

        ui.tick();
        ui.render();

        RenderManager.Present();

        Vec3::resetPool();
    }

    glfwDestroyWindow(g_window);
    glfwTerminate();
    return 0;
}

// ---- C_4JInput ----

#include "Windows64/4JLibs/inc/4J_Input.h"

C_4JInput InputManager;

void C_4JInput::Initialise(int, unsigned char, unsigned char, unsigned char) {}
void C_4JInput::Tick() {}
void C_4JInput::SetDeadzoneAndMovementRange(unsigned int, unsigned int) {}
void C_4JInput::SetGameJoypadMaps(unsigned char, unsigned char, unsigned int) {}
unsigned int C_4JInput::GetGameJoypadMaps(unsigned char, unsigned char) { return 0; }
void C_4JInput::SetJoypadMapVal(int, unsigned char) {}
unsigned char C_4JInput::GetJoypadMapVal(int) { return 0; }
void C_4JInput::SetJoypadSensitivity(int, float) {}
unsigned int C_4JInput::GetValue(int, unsigned char, bool) { return 0; }
bool C_4JInput::ButtonPressed(int, unsigned char) { return false; }
bool C_4JInput::ButtonReleased(int, unsigned char) { return false; }
bool C_4JInput::ButtonDown(int, unsigned char) { return false; }
void C_4JInput::SetJoypadStickAxisMap(int, unsigned int, unsigned int) {}
void C_4JInput::SetJoypadStickTriggerMap(int, unsigned int, unsigned int) {}
void C_4JInput::SetKeyRepeatRate(float, float) {}
void C_4JInput::SetDebugSequence(const char*, int(*)(LPVOID), LPVOID) {}
FLOAT C_4JInput::GetIdleSeconds(int) { return 0.0f; }
bool C_4JInput::IsPadConnected(int) { return false; }
float C_4JInput::GetJoypadStick_LX(int, bool) { return 0.0f; }
float C_4JInput::GetJoypadStick_LY(int, bool) { return 0.0f; }
float C_4JInput::GetJoypadStick_RX(int, bool) { return 0.0f; }
float C_4JInput::GetJoypadStick_RY(int, bool) { return 0.0f; }
unsigned char C_4JInput::GetJoypadLTrigger(int, bool) { return 0; }
unsigned char C_4JInput::GetJoypadRTrigger(int, bool) { return 0; }
void C_4JInput::SetMenuDisplayed(int, bool) {}
EKeyboardResult C_4JInput::RequestKeyboard(LPCWSTR, LPCWSTR, DWORD, UINT, int(*)(LPVOID, const bool), LPVOID, C_4JInput::EKeyboardMode) { return EKeyboard_Cancelled; }
void C_4JInput::GetText(uint16_t*) {}
bool C_4JInput::VerifyStrings(WCHAR**, int, int(*)(LPVOID, STRING_VERIFY_RESPONSE*), LPVOID) { return true; }
void C_4JInput::CancelQueuedVerifyStrings(int(*)(LPVOID, STRING_VERIFY_RESPONSE*), LPVOID) {}
void C_4JInput::CancelAllVerifyInProgress() {}

// ---- C_4JProfile ----

#include "Windows64/4JLibs/inc/4J_Profile.h"

C_4JProfile ProfileManager;

void C_4JProfile::Initialise(DWORD, DWORD, unsigned short, UINT, UINT, DWORD*, int, unsigned int*) {}
void C_4JProfile::SetTrialTextStringTable(CXuiStringTable*, int, int) {}
void C_4JProfile::SetTrialAwardText(eAwardType, int, int) {}
int C_4JProfile::GetLockedProfile() { return 0; }
void C_4JProfile::SetLockedProfile(int) {}
bool C_4JProfile::IsSignedIn(int iQuadrant) { return (iQuadrant >= 0 && iQuadrant < XUSER_MAX_COUNT); }
bool C_4JProfile::IsSignedInLive(int) { return true; }
bool C_4JProfile::IsGuest(int) { return false; }
UINT C_4JProfile::RequestSignInUI(bool, bool, bool, bool, bool, int(*)(LPVOID, const bool, const int), LPVOID, int) { return 0; }
UINT C_4JProfile::DisplayOfflineProfile(int(*)(LPVOID, const bool, const int), LPVOID, int) { return 0; }
UINT C_4JProfile::RequestConvertOfflineToGuestUI(int(*)(LPVOID, const bool, const int), LPVOID, int) { return 0; }
void C_4JProfile::SetPrimaryPlayerChanged(bool) {}
bool C_4JProfile::QuerySigninStatus() { return true; }
void C_4JProfile::GetXUID(int, PlayerUID*, bool) {}
BOOL C_4JProfile::AreXUIDSEqual(PlayerUID a, PlayerUID b) { return a == b; }
BOOL C_4JProfile::XUIDIsGuest(PlayerUID) { return false; }
bool C_4JProfile::AllowedToPlayMultiplayer(int) { return true; }
bool C_4JProfile::GetChatAndContentRestrictions(int, bool* pbChatRestricted, bool* pbContent, int* piAge) {
	if (pbChatRestricted) *pbChatRestricted = false;
	if (pbContent) *pbContent = false;
	if (piAge) *piAge = 99;
	return true;
}
void C_4JProfile::StartTrialGame() {}
void C_4JProfile::AllowedPlayerCreatedContent(int, bool, BOOL* allAllowed, BOOL* friendsAllowed) {
	if (allAllowed) *allAllowed = TRUE;
	if (friendsAllowed) *friendsAllowed = TRUE;
}
BOOL C_4JProfile::CanViewPlayerCreatedContent(int, bool, PPlayerUID, DWORD) { return TRUE; }
void C_4JProfile::ShowProfileCard(int, PlayerUID) {}
bool C_4JProfile::GetProfileAvatar(int, int(*)(LPVOID, PBYTE, DWORD), LPVOID) { return false; }
void C_4JProfile::CancelProfileAvatarRequest() {}
int C_4JProfile::GetPrimaryPad() { return 0; }
void C_4JProfile::SetPrimaryPad(int) {}
char* C_4JProfile::GetGamertag(int) { static char tag[] = "Player"; return tag; }
wstring C_4JProfile::GetDisplayName(int) { return L"Player"; }
bool C_4JProfile::IsFullVersion() { return true; }
void C_4JProfile::SetSignInChangeCallback(void(*)(LPVOID, bool, unsigned int), LPVOID) {}
void C_4JProfile::SetNotificationsCallback(void(*)(LPVOID, DWORD, unsigned int), LPVOID) {}
bool C_4JProfile::RegionIsNorthAmerica() { return true; }
bool C_4JProfile::LocaleIsUSorCanada() { return true; }
HRESULT C_4JProfile::GetLiveConnectionStatus() { return S_OK; }
bool C_4JProfile::IsSystemUIDisplayed() { return false; }
void C_4JProfile::SetProfileReadErrorCallback(void(*)(LPVOID), LPVOID) {}
int C_4JProfile::SetDefaultOptionsCallback(int(*)(LPVOID, PROFILESETTINGS*, const int), LPVOID) { return 0; }
int C_4JProfile::SetOldProfileVersionCallback(int(*)(LPVOID, unsigned char*, const unsigned short, const int), LPVOID) { return 0; }
C_4JProfile::PROFILESETTINGS* C_4JProfile::GetDashboardProfileSettings(int) { static PROFILESETTINGS ps = {}; return &ps; }
void C_4JProfile::WriteToProfile(int, bool, bool) {}
void C_4JProfile::ForceQueuedProfileWrites(int) {}
void* C_4JProfile::GetGameDefinedProfileData(int) { return nullptr; }
void C_4JProfile::ResetProfileProcessState() {}
void C_4JProfile::Tick() {}
void C_4JProfile::RegisterAward(int, int, eAwardType, bool, CXuiStringTable*, int, int, int, char*, unsigned int) {}
int C_4JProfile::GetAwardId(int) { return 0; }
eAwardType C_4JProfile::GetAwardType(int) { return eAwardType_Achievement; }
bool C_4JProfile::CanBeAwarded(int, int) { return false; }
void C_4JProfile::Award(int, int, bool) {}
bool C_4JProfile::IsAwardsFlagSet(int, int) { return false; }
void C_4JProfile::RichPresenceInit(int, int) {}
void C_4JProfile::RegisterRichPresenceContext(int) {}
void C_4JProfile::SetRichPresenceContextValue(int, int, int) {}
void C_4JProfile::SetCurrentGameActivity(int, int, bool) {}
void C_4JProfile::DisplayFullVersionPurchase(bool, int, int) {}
void C_4JProfile::SetUpsellCallback(void(*)(LPVOID, eUpsellType, eUpsellResponse, int), LPVOID) {}
void C_4JProfile::SetDebugFullOverride(bool) {}

// ---- C4JStorage ----

#include "Windows64/4JLibs/inc/4J_Storage.h"

C4JStorage StorageManager;

C4JStorage::C4JStorage() {}
void C4JStorage::Tick() {}
C4JStorage::EMessageResult C4JStorage::RequestMessageBox(UINT, UINT, UINT*, UINT, DWORD, int(*)(LPVOID, int, const C4JStorage::EMessageResult), LPVOID, C4JStringTable*, WCHAR*, DWORD) { return EMessage_Undefined; }
C4JStorage::EMessageResult C4JStorage::GetMessageBoxResult() { return EMessage_Undefined; }
bool C4JStorage::SetSaveDevice(int(*)(LPVOID, const bool), LPVOID, bool) { return true; }
void C4JStorage::Init(unsigned int, LPCWSTR, char*, int, int(*)(LPVOID, const ESavingMessage, int), LPVOID, LPCSTR) {}
void C4JStorage::ResetSaveData() {}
void C4JStorage::SetDefaultSaveNameForKeyboardDisplay(LPCWSTR) {}
void C4JStorage::SetSaveTitle(LPCWSTR) {}
LPCWSTR C4JStorage::GetSaveTitle() { return L""; }
bool C4JStorage::GetSaveUniqueNumber(INT* piVal) { if (piVal) *piVal = 0; return true; }
bool C4JStorage::GetSaveUniqueFilename(char*) { return true; }
void C4JStorage::SetSaveUniqueFilename(char*) {}
void C4JStorage::SetState(ESaveGameControlState, int(*)(LPVOID, const bool), LPVOID) {}
void C4JStorage::SetSaveDisabled(bool) {}
bool C4JStorage::GetSaveDisabled() { return false; }
unsigned int C4JStorage::GetSaveSize() { return 0; }
void C4JStorage::GetSaveData(void*, unsigned int*) {}
PVOID C4JStorage::AllocateSaveData(unsigned int uiBytes) { return new char[uiBytes]; }
void C4JStorage::SetSaveImages(PBYTE, DWORD, PBYTE, DWORD, PBYTE, DWORD) {}
void C4JStorage::SetDefaultImages(PBYTE, DWORD, PBYTE, DWORD, PBYTE, DWORD) {}
void C4JStorage::GetDefaultSaveImage(PBYTE* ppb, DWORD* pdw) { if (ppb) *ppb = nullptr; if (pdw) *pdw = 0; }
void C4JStorage::GetDefaultSaveThumbnail(PBYTE* ppb, DWORD* pdw) { if (ppb) *ppb = nullptr; if (pdw) *pdw = 0; }
C4JStorage::ESaveGameState C4JStorage::SaveSaveData(int(*)(LPVOID, const bool), LPVOID) { return ESaveGame_Idle; }
void C4JStorage::CopySaveDataToNewSave(PBYTE, DWORD, WCHAR*, int(*)(LPVOID, bool), LPVOID) {}
void C4JStorage::SetSaveDeviceSelected(unsigned int, bool) {}
bool C4JStorage::GetSaveDeviceSelected(unsigned int) { return true; }
C4JStorage::ESaveGameState C4JStorage::DoesSaveExist(bool* pbExists) { if (pbExists) *pbExists = false; return ESaveGame_Idle; }
bool C4JStorage::EnoughSpaceForAMinSaveGame() { return true; }
void C4JStorage::SetMaxSaves(int) {}
void C4JStorage::SetIncompleteSaveCallback(void(*)(LPVOID, const ESaveIncompleteType, int), LPVOID) {}
void C4JStorage::ContinueIncompleteOperation() {}
C4JStorage::ESaveGameState C4JStorage::GetSaveState() { return ESaveGame_Idle; }
void C4JStorage::SetSaveMessageVPosition(float) {}
C4JStorage::ESaveGameState C4JStorage::GetSavesInfo(int, int(*)(LPVOID, SAVE_DETAILS*, const bool), LPVOID, char*) { return ESaveGame_Idle; }
PSAVE_DETAILS C4JStorage::ReturnSavesInfo() { return nullptr; }
void C4JStorage::ClearSavesInfo() {}
C4JStorage::ESaveGameState C4JStorage::LoadSaveDataThumbnail(PSAVE_INFO, int(*)(LPVOID, PBYTE, DWORD), LPVOID) { return ESaveGame_Idle; }
void C4JStorage::GetSaveCacheFileInfo(DWORD, XCONTENT_DATA&) {}
void C4JStorage::GetSaveCacheFileInfo(DWORD, PBYTE*, DWORD*) {}
C4JStorage::ESaveGameState C4JStorage::LoadSaveData(PSAVE_INFO, int(*)(LPVOID, const bool, const bool), LPVOID) { return ESaveGame_Idle; }
C4JStorage::ESaveGameState C4JStorage::DeleteSaveData(PSAVE_INFO, int(*)(LPVOID, const bool), LPVOID) { return ESaveGame_Idle; }
C4JStorage::ESaveGameState C4JStorage::RenameSaveData(int, uint16_t*, int(*)(LPVOID, const bool), LPVOID) { return ESaveGame_Idle; }
void C4JStorage::RegisterMarketplaceCountsCallback(int(*)(LPVOID, C4JStorage::DLC_TMS_DETAILS*, int), LPVOID) {}
void C4JStorage::SetDLCPackageRoot(char*) {}
C4JStorage::EDLCStatus C4JStorage::GetDLCOffers(int, int(*)(LPVOID, int, DWORD, int), LPVOID, DWORD) { return EDLC_Idle; }
DWORD C4JStorage::CancelGetDLCOffers() { return 0; }
void C4JStorage::ClearDLCOffers() {}
XMARKETPLACE_CONTENTOFFER_INFO& C4JStorage::GetOffer(DWORD) { static XMARKETPLACE_CONTENTOFFER_INFO info = {}; return info; }
int C4JStorage::GetOfferCount() { return 0; }
DWORD C4JStorage::InstallOffer(int, __uint64*, int(*)(LPVOID, int, int), LPVOID, bool) { return 0; }
DWORD C4JStorage::GetAvailableDLCCount(int) { return 0; }
C4JStorage::EDLCStatus C4JStorage::GetInstalledDLC(int, int(*)(LPVOID, int, int), LPVOID) { return EDLC_Idle; }
XCONTENT_DATA& C4JStorage::GetDLC(DWORD) { static XCONTENT_DATA data = {}; return data; }
DWORD C4JStorage::MountInstalledDLC(int, DWORD, int(*)(LPVOID, int, DWORD, DWORD), LPVOID, LPCSTR) { return 0; }
DWORD C4JStorage::UnmountInstalledDLC(LPCSTR) { return 0; }
void C4JStorage::GetMountedDLCFileList(const char*, std::vector<std::string>&) {}
std::string C4JStorage::GetMountedPath(std::string) { return ""; }
C4JStorage::ETMSStatus C4JStorage::ReadTMSFile(int, eGlobalStorage, C4JStorage::eTMS_FileType, WCHAR*, BYTE**, DWORD*, int(*)(LPVOID, WCHAR*, int, bool, int), LPVOID, int) { return ETMSStatus_Idle; }
bool C4JStorage::WriteTMSFile(int, eGlobalStorage, WCHAR*, BYTE*, DWORD) { return true; }
bool C4JStorage::DeleteTMSFile(int, eGlobalStorage, WCHAR*) { return true; }
void C4JStorage::StoreTMSPathName(WCHAR*) {}
C4JStorage::ETMSStatus C4JStorage::TMSPP_ReadFile(int, C4JStorage::eGlobalStorage, C4JStorage::eTMS_FILETYPEVAL, LPCSTR, int(*)(LPVOID, int, int, PTMSPP_FILEDATA, LPCSTR), LPVOID, int) { return ETMSStatus_Idle; }
unsigned int C4JStorage::CRC(unsigned char* buf, int len) { return 0; }

// ---- Item static IDs ----

const int Item::apple_Id;
const int Item::arrow_Id;
const int Item::beef_cooked_Id;
const int Item::beef_raw_Id;
const int Item::book_Id;
const int Item::boots_chain_Id;
const int Item::boots_cloth_Id;
const int Item::boots_diamond_Id;
const int Item::boots_iron_Id;
const int Item::bread_Id;
const int Item::chestplate_chain_Id;
const int Item::chestplate_cloth_Id;
const int Item::chestplate_diamond_Id;
const int Item::chestplate_iron_Id;
const int Item::chicken_cooked_Id;
const int Item::chicken_raw_Id;
const int Item::clock_Id;
const int Item::coal_Id;
const int Item::compass_Id;
const int Item::cookie_Id;
const int Item::diamond_Id;
const int Item::enderPearl_Id;
const int Item::expBottle_Id;
const int Item::eyeOfEnder_Id;
const int Item::fish_cooked_Id;
const int Item::flintAndSteel_Id;
const int Item::goldIngot_Id;
const int Item::hatchet_diamond_Id;
const int Item::hatchet_iron_Id;
const int Item::helmet_chain_Id;
const int Item::helmet_cloth_Id;
const int Item::helmet_diamond_Id;
const int Item::helmet_iron_Id;
const int Item::hoe_diamond_Id;
const int Item::hoe_iron_Id;
const int Item::ironIngot_Id;
const int Item::leggings_chain_Id;
const int Item::leggings_cloth_Id;
const int Item::leggings_diamond_Id;
const int Item::leggings_iron_Id;
const int Item::melon_Id;
const int Item::paper_Id;
const int Item::pickAxe_diamond_Id;
const int Item::pickAxe_iron_Id;
const int Item::porkChop_cooked_Id;
const int Item::porkChop_raw_Id;
const int Item::redStone_Id;
const int Item::rotten_flesh_Id;
const int Item::saddle_Id;
const int Item::seeds_melon_Id;
const int Item::seeds_pumpkin_Id;
const int Item::seeds_wheat_Id;
const int Item::shears_Id;
const int Item::shovel_diamond_Id;
const int Item::shovel_iron_Id;
const int Item::sword_diamond_Id;
const int Item::sword_iron_Id;
const int Item::wheat_Id;

// ---- Tile static IDs ----

const int Tile::bookshelf_Id;
const int Tile::cloth_Id;
const int Tile::glass_Id;
const int Tile::lightGem_Id;

// ---- RemoveEntitiesPacket ----

const int RemoveEntitiesPacket::MAX_PER_PACKET;

// ---- Renderer ----

void Renderer::TransitionImageLayout(VkImage, VkFormat, VkImageLayout, VkImageLayout, uint32_t) {}

// ---- platform-specific ----

bool Win64_HasSavedProfile(int) { return false; }

int Mouse::getX() { return 0; }
int Mouse::getY() { return 0; }
bool Mouse::isButtonDown(int) { return false; }

void MemSect(int) {}

void KeyboardMouseInput::SetCursorHiddenForUI(bool) {}
void KeyboardMouseInput::Init() {}
void KeyboardMouseInput::Tick() {}

#endif
