// Category: render - 241 functions
// Decompiled from Minecraft.Client.exe

// ===== FUN_140001000 @ 0x140001000 [render] =====

void FUN_140001000(void)

{
  FUN_140001168(&DAT_140783070);
  return;
}



// ===== FUN_14000100c @ 0x14000100c [render] =====

void FUN_14000100c(void)

{
  FUN_1400011cc(&DAT_140783070);
  return;
}



// ===== FUN_140001048 @ 0x140001048 [render] =====

void FUN_140001048(void)

{
  FUN_1400012f0(&DAT_140783070);
  return;
}



// ===== FUN_140001054 @ 0x140001054 [render] =====

void FUN_140001054(void)

{
  FUN_140001324(&DAT_140783070);
  return;
}



// ===== FUN_140001060 @ 0x140001060 [render] =====

void FUN_140001060(void)

{
  FUN_140001358(&DAT_140783070);
  return;
}



// ===== FUN_14000106c @ 0x14000106c [render] =====

void FUN_14000106c(void)

{
  FUN_14000138c(&DAT_140783070);
  return;
}



// ===== FUN_140001090 @ 0x140001090 [storage,render] =====

void FUN_140001090(void)

{
  FUN_140001718(&DAT_140783070);
  return;
}



// ===== FUN_1400010e4 @ 0x1400010e4 [render] =====

void FUN_1400010e4(void)

{
  FUN_140001c1c(&DAT_140783070);
  return;
}



// ===== FUN_1400025cc @ 0x1400025cc [storage,render] =====

void FUN_1400025cc(void)

{
  FUN_140002848(&DAT_140784088);
  return;
}



// ===== FUN_140002614 @ 0x140002614 [render] =====

void FUN_140002614(void)

{
  FUN_1400038b4(&DAT_1407841c0);
  return;
}



// ===== FUN_140004430 @ 0x140004430 [render] =====

void FUN_140004430(void)

{
  FUN_140004f68(&DAT_140784760);
  return;
}



// ===== FUN_14000443c @ 0x14000443c [render] =====

void FUN_14000443c(void)

{
  FUN_1400056f4(&DAT_140784760);
  return;
}



// ===== FUN_1400044c4 @ 0x1400044c4 [render] =====

void FUN_1400044c4(void)

{
  FUN_140006c50(&DAT_140784760);
  return;
}



// ===== FUN_1400044d0 @ 0x1400044d0 [render] =====

void FUN_1400044d0(void)

{
  FUN_140006c7c(&DAT_140784760);
  return;
}



// ===== FUN_1400044dc @ 0x1400044dc [render] =====

void FUN_1400044dc(void)

{
  FUN_140006cf4(&DAT_140784760);
  return;
}



// ===== FUN_1400044e8 @ 0x1400044e8 [render] =====

void FUN_1400044e8(void)

{
  FUN_140006d8c(&DAT_140784760);
  return;
}



// ===== FUN_140004500 @ 0x140004500 [render] =====

void FUN_140004500(void)

{
  FUN_140006e84(&DAT_140784760);
  return;
}



// ===== FUN_140004518 @ 0x140004518 [render] =====

void FUN_140004518(void)

{
  FUN_1400061f8(&DAT_140784760);
  return;
}



// ===== FUN_140004524 @ 0x140004524 [render] =====

void FUN_140004524(void)

{
  FUN_140006200(&DAT_140784760);
  return;
}



// ===== FUN_140004554 @ 0x140004554 [storage,ui,render] =====

void FUN_140004554(void)

{
  FUN_14000ab5c(&DAT_140784760);
  return;
}



// ===== FUN_140004584 @ 0x140004584 [render] =====

void FUN_140004584(void)

{
  FUN_14000add8(&DAT_140784760);
  return;
}



// ===== FUN_14000459c @ 0x14000459c [render] =====

void FUN_14000459c(void)

{
  FUN_14000af14(&DAT_140784760);
  return;
}



// ===== FUN_1400045cc @ 0x1400045cc [render] =====

void FUN_1400045cc(void)

{
  FUN_14000b0a4(&DAT_140784760);
  return;
}



// ===== FUN_140004668 @ 0x140004668 [render] =====

void FUN_140004668(void)

{
  FUN_14000b53c(&DAT_140784760);
  return;
}



// ===== FUN_140004674 @ 0x140004674 [render] =====

void FUN_140004674(void)

{
  FUN_14000b574(&DAT_140784760);
  return;
}



// ===== FUN_140004698 @ 0x140004698 [render] =====

void FUN_140004698(void)

{
  FUN_14000b9e4(&DAT_140784760);
  return;
}



// ===== FUN_1400046b0 @ 0x1400046b0 [render] =====

void FUN_1400046b0(void)

{
  FUN_140006760(&DAT_140784760);
  return;
}



// ===== FUN_1400046bc @ 0x1400046bc [render] =====

void FUN_1400046bc(void)

{
  FUN_140006768(&DAT_140784760);
  return;
}



// ===== FUN_140012898 @ 0x140012898 [render] =====

bool FUN_140012898(undefined8 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  int local_res10 [2];
  
  if (((*(byte *)((longlong)param_2 + 0x4a) & 1) == 0) ||
     ((iVar1 = FUN_14001440c(local_res10,*param_2,100000,param_3), iVar1 != 0 &&
      (local_res10[0] - 95000U < 0x2711)))) {
    bVar2 = true;
  }
  else if (((*(byte *)((longlong)param_2 + 0x4a) & 0x20) == 0) && (param_4 != 2)) {
    FUN_1400197cc(param_1,"gamma value does not match libpng estimate",0);
    bVar2 = param_4 == 1;
  }
  else {
    FUN_1400197cc(param_1,"gamma value does not match sRGB",2);
    bVar2 = param_4 == 2;
  }
  return bVar2;
}



// ===== FUN_14001299c @ 0x14001299c [render] =====

undefined8 FUN_14001299c(int *param_1,int *param_2,int param_3)

{
  if (((((param_2[6] - param_3 <= param_1[6]) && (param_1[6] <= param_2[6] + param_3)) &&
       (param_2[7] - param_3 <= param_1[7])) &&
      (((param_1[7] <= param_2[7] + param_3 && (*param_2 - param_3 <= *param_1)) &&
       ((*param_1 <= *param_2 + param_3 &&
        ((param_2[1] - param_3 <= param_1[1] && (param_1[1] <= param_2[1] + param_3)))))))) &&
     ((param_2[2] - param_3 <= param_1[2] &&
      (((((param_1[2] <= param_2[2] + param_3 && (param_2[3] - param_3 <= param_1[3])) &&
         (param_1[3] <= param_2[3] + param_3)) &&
        ((param_2[4] - param_3 <= param_1[4] && (param_1[4] <= param_2[4] + param_3)))) &&
       ((param_2[5] - param_3 <= param_1[5] && (param_1[5] <= param_2[5] + param_3)))))))) {
    return 1;
  }
  return 0;
}



// ===== FUN_140020610 @ 0x140020610 [render] =====

void FUN_140020610(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  if (param_1 != 0) {
    if (0x7fffffff < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_140019868(param_1,"length exceeds PNG maxima");
    }
    FUN_140020564(param_1,param_2,(int)param_4);
    FUN_1400204c8(param_1,param_3,param_4);
    FUN_140020514(param_1);
  }
  return;
}



// ===== FUN_140021e10 @ 0x140021e10 [render] =====

void FUN_140021e10(undefined8 param_1,int param_2)

{
  undefined1 local_res10 [24];
  
  if (3 < param_2) {
    FUN_140019e38(param_1,"Invalid sRGB rendering intent specified");
  }
  local_res10[0] = (undefined1)param_2;
  FUN_140020610(param_1,0x73524742,local_res10,1);
  return;
}



// ===== FUN_1400237d0 @ 0x1400237d0 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400237d0(void)

{
  undefined1 auStackY_98 [32];
  ulonglong local_68 [12];
  
  local_68[8] = DAT_1407502c0 ^ (ulonglong)auStackY_98;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  FUN_140054cf0(local_68,L"options.music");
  _DAT_1407baab0 = 1;
  FUN_140055000(&DAT_1407baab8,local_68);
  if (7 < local_68[3]) {
    if (0xfff < local_68[3] * 2 + 2) {
      if (0x1f < (local_68[0] - *(longlong *)(local_68[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_68[2] = 0;
  local_68[3] = 7;
  local_68[0] = local_68[0] & 0xffffffffffff0000;
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[6] = 0;
  local_68[7] = 0;
  FUN_140054cf0(local_68 + 4,L"options.sound");
  _DAT_1407baad8 = 1;
  FUN_140055000(&DAT_1407baae0,local_68 + 4);
  if (7 < local_68[7]) {
    if (0xfff < local_68[7] * 2 + 2) {
      if (0x1f < (local_68[4] - *(longlong *)(local_68[4] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_68[6] = 0;
  local_68[7] = 7;
  local_68[4] = local_68[4] & 0xffffffffffff0000;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  FUN_140054cf0(local_68,L"options.invertMouse");
  _DAT_1407bab00 = 0x100;
  FUN_140055000(&DAT_1407bab08,local_68);
  if (7 < local_68[3]) {
    if (0xfff < local_68[3] * 2 + 2) {
      if (0x1f < (local_68[0] - *(longlong *)(local_68[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_68[2] = 0;
  local_68[3] = 7;
  local_68[0] = local_68[0] & 0xffffffffffff0000;
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[6] = 0;
  local_68[7] = 0;
  FUN_140054cf0(local_68 + 4,L"options.sensitivity");
  _DAT_1407bab28 = 1;
  FUN_140055000(&DAT_1407bab30,local_68 + 4);
  if (7 < local_68[7]) {
    if (0xfff < local_68[7] * 2 + 2) {
      if (0x1f < (local_68[4] - *(longlong *)(local_68[4] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_68[6] = 0;
  local_68[7] = 7;
  local_68[4] = local_68[4] & 0xffffffffffff0000;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  FUN_140054cf0(local_68,L"options.renderDistance");
  _DAT_1407bab50 = 0;
  FUN_140055000(&DAT_1407bab58,local_68);
  if (7 < local_68[3]) {
    if (0xfff < local_68[3] * 2 + 2) {
      if (0x1f < (local_68[0] - *(longlong *)(local_68[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_68[2] = 0;
  local_68[3] = 7;
  local_68[0] = local_68[0] & 0xffffffffffff0000;
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[6] = 0;
  local_68[7] = 0;
  FUN_140054cf0(local_68 + 4,L"options.viewBobbing");
  _DAT_1407bab78 = 0x100;
  FUN_140055000(&DAT_1407bab80,local_68 + 4);
  if (7 < local_68[7]) {
    if (0xfff < local_68[7] * 2 + 2) {
      if (0x1f < (local_68[4] - *(longlong *)(local_68[4] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_68[6] = 0;
  local_68[7] = 7;
  local_68[4] = local_68[4] & 0xffffffffffff0000;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  FUN_140054cf0(local_68,L"options.anaglyph");
  _DAT_1407baba0 = 0x100;
  FUN_140055000(&DAT_1407baba8,local_68);
  if (7 < local_68[3]) {
    if (0xfff < local_68[3] * 2 + 2) {
      if (0x1f < (local_68[0] - *(longlong *)(local_68[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_68[2] = 0;
  local_68[3] = 7;
  local_68[0] = local_68[0] & 0xffffffffffff0000;
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[6] = 0;
  local_68[7] = 0;
  FUN_140054cf0(local_68 + 4,L"options.advancedOpengl");
  _DAT_1407babc8 = 0x100;
  FUN_140055000(&DAT_1407babd0,local_68 + 4);
  if (7 < local_68[7]) {
    if (0xfff < local_68[7] * 2 + 2) {
      if (0x1f < (local_68[4] - *(longlong *)(local_68[4] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_68[6] = 0;
  local_68[7] = 7;
  local_68[4] = local_68[4] & 0xffffffffffff0000;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  FUN_140054cf0(local_68,L"options.framerateLimit");
  _DAT_1407babf0 = 0;
  FUN_140055000(&DAT_1407babf8,local_68);
  if (7 < local_68[3]) {
    if (0xfff < local_68[3] * 2 + 2) {
      if (0x1f < (local_68[0] - *(longlong *)(local_68[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_68[2] = 0;
  local_68[3] = 7;
  local_68[0] = local_68[0] & 0xffffffffffff0000;
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[6] = 0;
  local_68[7] = 0;
  FUN_140054cf0(local_68 + 4,L"options.difficulty");
  _DAT_1407bac18 = 0;
  FUN_140055000(&DAT_1407bac20,local_68 + 4);
  if (7 < local_68[7]) {
    if (0xfff < local_68[7] * 2 + 2) {
      if (0x1f < (local_68[4] - *(longlong *)(local_68[4] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_68[6] = 0;
  local_68[7] = 7;
  local_68[4] = local_68[4] & 0xffffffffffff0000;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  FUN_140054cf0(local_68,L"options.graphics");
  _DAT_1407bac40 = 0;
  FUN_140055000(&DAT_1407bac48,local_68);
  if (7 < local_68[3]) {
    if (0xfff < local_68[3] * 2 + 2) {
      if (0x1f < (local_68[0] - *(longlong *)(local_68[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_68[2] = 0;
  local_68[3] = 7;
  local_68[0] = local_68[0] & 0xffffffffffff0000;
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[6] = 0;
  local_68[7] = 0;
  FUN_140054cf0(local_68 + 4,L"options.ao");
  _DAT_1407bac68 = 0x100;
  FUN_140055000(&DAT_1407bac70,local_68 + 4);
  if (7 < local_68[7]) {
    if (0xfff < local_68[7] * 2 + 2) {
      if (0x1f < (local_68[4] - *(longlong *)(local_68[4] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_68[6] = 0;
  local_68[7] = 7;
  local_68[4] = local_68[4] & 0xffffffffffff0000;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  FUN_140054cf0(local_68,L"options.guiScale");
  _DAT_1407bac90 = 0;
  FUN_140055000(&DAT_1407bac98,local_68);
  if (7 < local_68[3]) {
    if (0xfff < local_68[3] * 2 + 2) {
      if (0x1f < (local_68[0] - *(longlong *)(local_68[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_68[2] = 0;
  local_68[3] = 7;
  local_68[0] = local_68[0] & 0xffffffffffff0000;
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[6] = 0;
  local_68[7] = 0;
  FUN_140054cf0(local_68 + 4,L"options.fov");
  _DAT_1407bacb8 = 1;
  FUN_140055000(&DAT_1407bacc0,local_68 + 4);
  if (7 < local_68[7]) {
    if (0xfff < local_68[7] * 2 + 2) {
      if (0x1f < (local_68[4] - *(longlong *)(local_68[4] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_68[6] = 0;
  local_68[7] = 7;
  local_68[4] = local_68[4] & 0xffffffffffff0000;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  FUN_140054cf0(local_68,L"options.gamma");
  _DAT_1407bace0 = 1;
  FUN_140055000(&DAT_1407bace8,local_68);
  if (7 < local_68[3]) {
    if (0xfff < local_68[3] * 2 + 2) {
      if (0x1f < (local_68[0] - *(longlong *)(local_68[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_68[2] = 0;
  local_68[3] = 7;
  local_68[0] = local_68[0] & 0xffffffffffff0000;
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[6] = 0;
  local_68[7] = 0;
  FUN_140054cf0(local_68 + 4,L"options.renderClouds");
  _DAT_1407bad08 = 0x100;
  FUN_140055000(&DAT_1407bad10,local_68 + 4);
  if (7 < local_68[7]) {
    if (0xfff < local_68[7] * 2 + 2) {
      if (0x1f < (local_68[4] - *(longlong *)(local_68[4] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_68[6] = 0;
  local_68[7] = 7;
  local_68[4] = local_68[4] & 0xffffffffffff0000;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  FUN_140054cf0(local_68,L"options.particles");
  _DAT_1407bad30 = 0;
  FUN_140055000(&DAT_1407bad38,local_68);
  if (7 < local_68[3]) {
    if (0xfff < local_68[3] * 2 + 2) {
      if (0x1f < (local_68[0] - *(longlong *)(local_68[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  atexit((_func_5014 *)&LAB_1405e9d90);
  return;
}



// ===== FUN_1400242b0 @ 0x1400242b0 [render] =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400242b0(void)

{
  FUN_140054cf0(&DAT_1407bad60,L"options.renderDistance.far",0x1a);
  _DAT_1407bad80 = 0;
  uRam00000001407bad88 = 0;
  _DAT_1407bad90 = 0;
  uRam00000001407bad98 = 0;
  FUN_140054cf0(&DAT_1407bad80,L"options.renderDistance.normal",0x1d);
  _DAT_1407bada0 = 0;
  uRam00000001407bada8 = 0;
  _DAT_1407badb0 = 0;
  uRam00000001407badb8 = 0;
  FUN_140054cf0(&DAT_1407bada0,L"options.renderDistance.short",0x1c);
  _DAT_1407badc0 = 0;
  uRam00000001407badc8 = 0;
  _DAT_1407badd0 = 0;
  uRam00000001407badd8 = 0;
  FUN_140054cf0(&DAT_1407badc0,L"options.renderDistance.tiny",0x1b);
  atexit((_func_5014 *)&LAB_1405e9db0);
  return;
}



// ===== FUN_140033e40 @ 0x140033e40 [ui,render] =====

void FUN_140033e40(longlong param_1,int param_2,undefined4 param_3,uint param_4)

{
  ushort *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  
  bVar9 = (byte)param_4;
  switch(param_3) {
  case 0:
    lVar8 = param_1 + (longlong)param_2 * 8;
    if (*(byte *)(*(longlong *)(lVar8 + 0x1e0) + 1) == bVar9) {
      return;
    }
    *(byte *)(*(longlong *)(lVar8 + 0x1e0) + 1) = bVar9;
    goto joined_r0x000140033eea;
  case 1:
    lVar8 = param_1 + (longlong)param_2 * 8;
    if (*(byte *)(*(longlong *)(lVar8 + 0x1e0) + 2) == bVar9) {
      return;
    }
    *(byte *)(*(longlong *)(lVar8 + 0x1e0) + 2) = bVar9;
    goto joined_r0x000140033eea;
  case 2:
    lVar8 = param_1 + (longlong)param_2 * 8;
    *(undefined1 *)(*(longlong *)(lVar8 + 0x1e0) + 0x56) = 0;
    puVar2 = (uint *)(*(longlong *)(lVar8 + 0x1e0) + 0x54);
    *puVar2 = *puVar2 | (param_4 & 0xff) << 0x10;
    goto joined_r0x000140033eea;
  case 3:
    lVar8 = param_1 + (longlong)param_2 * 8;
    if (*(byte *)(*(longlong *)(lVar8 + 0x1e0) + 4) == bVar9) {
      return;
    }
    *(byte *)(*(longlong *)(lVar8 + 0x1e0) + 4) = bVar9;
    goto joined_r0x000140033eea;
  case 4:
    lVar8 = param_1 + (longlong)param_2 * 8;
    if (*(byte *)(*(longlong *)(lVar8 + 0x1e0) + 0x53) == bVar9) {
      return;
    }
    *(byte *)(*(longlong *)(lVar8 + 0x1e0) + 0x53) = bVar9;
    goto joined_r0x000140033eea;
  case 5:
    lVar8 = param_1 + (longlong)param_2 * 8;
    uVar4 = *(ushort *)(*(longlong *)(lVar8 + 0x1e0) + 6);
    if ((uVar4 & 3) == (ushort)(bVar9 & 3)) {
      return;
    }
    *(ushort *)(*(longlong *)(lVar8 + 0x1e0) + 6) = uVar4 & 0xfffc;
    puVar1 = (ushort *)(*(longlong *)(lVar8 + 0x1e0) + 6);
    *puVar1 = *puVar1 | (ushort)(bVar9 & 3);
joined_r0x000140033eea:
    if (param_2 == 0) break;
    goto LAB_14003467c;
  case 6:
    lVar8 = param_1 + (longlong)param_2 * 8;
    if (*(byte *)(*(longlong *)(lVar8 + 0x1e0) + 3) == bVar9) {
      return;
    }
    *(byte *)(*(longlong *)(lVar8 + 0x1e0) + 3) = bVar9;
    break;
  case 7:
    lVar8 = param_1 + (longlong)param_2 * 8;
    if (*(byte *)(*(longlong *)(lVar8 + 0x1e0) + 0x50) == bVar9) {
      return;
    }
    *(byte *)(*(longlong *)(lVar8 + 0x1e0) + 0x50) = bVar9;
    break;
  case 8:
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    uVar4 = *(ushort *)(lVar7 + 6);
    if ((((param_4 & 0xff) << 2 ^ (uint)uVar4) & 4) == 0) {
      return;
    }
    if (bVar9 == 0) {
      *(ushort *)(lVar7 + 6) = uVar4 & 0xfffb;
    }
    else {
      *(ushort *)(lVar7 + 6) = uVar4 | 4;
    }
    break;
  case 9:
    lVar8 = param_1 + (longlong)param_2 * 8;
    uVar4 = *(ushort *)(*(longlong *)(lVar8 + 0x1e0) + 6);
    if ((((param_4 & 0xff) << 4 ^ (uint)uVar4) & 0x30) == 0) {
      return;
    }
    *(ushort *)(*(longlong *)(lVar8 + 0x1e0) + 6) = uVar4 & 0xffcf;
    if (bVar9 != 0) {
      puVar1 = (ushort *)(*(longlong *)(lVar8 + 0x1e0) + 6);
      *puVar1 = *puVar1 | ((ushort)param_4 & 3) << 4;
    }
    break;
  case 10:
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    uVar4 = *(ushort *)(lVar7 + 6);
    if ((((param_4 & 0xff) << 6 ^ (uint)uVar4) & 0x40) == 0) {
      return;
    }
    if (bVar9 == 0) {
      *(ushort *)(lVar7 + 6) = uVar4 & 0xffbf;
    }
    else {
      *(ushort *)(lVar7 + 6) = uVar4 | 0x40;
    }
    break;
  case 0xb:
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    uVar4 = *(ushort *)(lVar7 + 6);
    if (-1 < (char)((byte)((param_4 & 0xff) << 7) ^ (byte)uVar4)) {
      return;
    }
    if (bVar9 == 0) {
      *(ushort *)(lVar7 + 6) = uVar4 & 0xff7f;
    }
    else {
      *(ushort *)(lVar7 + 6) = uVar4 | 0x80;
    }
    break;
  case 0xc:
    uVar3 = 0x100;
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    uVar4 = *(ushort *)(lVar7 + 6);
    if ((((param_4 & 0xff) << 8 ^ (uint)uVar4) & 0x100) == 0) {
      return;
    }
    if (bVar9 == 0) {
      uVar3 = 0xfeff;
      goto LAB_140034126;
    }
LAB_14003411b:
    uVar4 = uVar4 | uVar3;
    goto LAB_140034129;
  case 0xd:
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    uVar4 = *(ushort *)(lVar7 + 6);
    if ((((param_4 & 0xff) << 3 ^ (uint)uVar4) & 8) == 0) {
      return;
    }
    if (bVar9 == 0) {
      *(ushort *)(lVar7 + 6) = uVar4 & 0xfff7;
    }
    else {
      *(ushort *)(lVar7 + 6) = uVar4 | 8;
    }
    break;
  case 0xe:
    lVar8 = param_1 + (longlong)param_2 * 8;
    uVar4 = *(ushort *)(*(longlong *)(lVar8 + 0x1e0) + 6);
    if ((((param_4 & 0xff) << 0xb ^ (uint)uVar4) & 0x7800) == 0) {
      return;
    }
    *(ushort *)(*(longlong *)(lVar8 + 0x1e0) + 6) = uVar4 & 0x87ff;
    if (bVar9 != 0) {
      puVar1 = (ushort *)(*(longlong *)(lVar8 + 0x1e0) + 6);
      *puVar1 = *puVar1 | ((ushort)param_4 & 0xf) << 0xb;
    }
    break;
  case 0xf:
    uVar3 = 0x200;
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    uVar4 = *(ushort *)(lVar7 + 6);
    if ((((param_4 & 0xff) << 9 ^ (uint)uVar4) & 0x200) == 0) {
      return;
    }
    if (bVar9 != 0) goto LAB_14003411b;
    uVar3 = 0xfdff;
    goto LAB_140034126;
  case 0x10:
    uVar3 = 0x400;
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    uVar4 = *(ushort *)(lVar7 + 6);
    if ((((param_4 & 0xff) << 10 ^ (uint)uVar4) & 0x400) == 0) {
      return;
    }
    if (bVar9 != 0) goto LAB_14003411b;
    uVar3 = 0xfbff;
    goto LAB_140034126;
  case 0x11:
    lVar8 = param_1 + (longlong)param_2 * 8;
    if (*(byte *)(*(longlong *)(lVar8 + 0x1e0) + 0x51) == bVar9) {
      return;
    }
    *(byte *)(*(longlong *)(lVar8 + 0x1e0) + 0x51) = bVar9;
    break;
  case 0x12:
    uVar3 = 0x8000;
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    uVar4 = *(ushort *)(lVar7 + 6);
    if ((((param_4 & 0xff) << 0xf ^ (uint)uVar4) & 0x8000) == 0) {
      return;
    }
    if (bVar9 != 0) goto LAB_14003411b;
    uVar3 = 0x7fff;
LAB_140034126:
    uVar4 = uVar4 & uVar3;
LAB_140034129:
    *(ushort *)(lVar7 + 6) = uVar4;
    goto LAB_14003412d;
  case 0x13:
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    uVar6 = *(uint *)(lVar7 + 0x54);
    if (((param_4 & 0xff ^ uVar6) & 1) == 0) {
      return;
    }
    if (bVar9 == 1) {
      uVar6 = uVar6 | 1;
    }
    else {
      uVar6 = uVar6 & 0xfffffffe;
    }
    goto LAB_140034670;
  case 0x14:
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    uVar6 = *(uint *)(lVar7 + 0x54);
    if ((((param_4 & 0xff) * 2 ^ uVar6) & 2) == 0) {
      return;
    }
    if (bVar9 == 1) {
      uVar6 = uVar6 | 2;
    }
    else {
      uVar6 = uVar6 & 0xfffffffd;
    }
    goto LAB_140034670;
  case 0x15:
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    uVar6 = *(uint *)(lVar7 + 0x54);
    if ((((param_4 & 0xff) << 2 ^ uVar6) & 4) == 0) {
      return;
    }
    if (bVar9 == 1) {
      uVar6 = uVar6 | 4;
    }
    else {
      uVar6 = uVar6 & 0xfffffffb;
    }
    goto LAB_140034670;
  case 0x16:
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    uVar6 = *(uint *)(lVar7 + 0x54);
    if ((((param_4 & 0xff) << 3 ^ uVar6) & 8) == 0) {
      return;
    }
    if (bVar9 == 1) {
      uVar6 = uVar6 | 8;
    }
    else {
      uVar6 = uVar6 & 0xfffffff7;
    }
    goto LAB_140034670;
  case 0x17:
    uVar6 = (param_4 & 3) << 4;
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    if ((*(uint *)(lVar7 + 0x54) & 0x30) == uVar6) {
      return;
    }
    uVar5 = *(uint *)(lVar7 + 0x54) & 0xffffffcf;
    goto LAB_1400343f6;
  case 0x18:
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    uVar6 = *(uint *)(lVar7 + 0x54);
    if ((((param_4 & 0xff) << 6 ^ uVar6) & 0x40) == 0) {
      return;
    }
    if (bVar9 == 1) {
      uVar6 = uVar6 | 0x40;
    }
    else {
      uVar6 = uVar6 & 0xffffffbf;
    }
    goto LAB_140034670;
  case 0x19:
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    uVar6 = *(uint *)(lVar7 + 0x54);
    if (-1 < (char)((byte)((param_4 & 0xff) << 7) ^ (byte)uVar6)) {
      return;
    }
    if (bVar9 == 1) {
      uVar6 = uVar6 | 0x80;
    }
    else {
      uVar6 = uVar6 & 0xffffff7f;
    }
    goto LAB_140034670;
  case 0x1a:
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    uVar6 = *(uint *)(lVar7 + 0x54);
    if ((((param_4 & 0xff) << 8 ^ uVar6) & 0x100) == 0) {
      return;
    }
    if (bVar9 == 1) {
      *(uint *)(lVar7 + 0x54) = uVar6 | 0x100;
    }
    else {
      *(uint *)(lVar7 + 0x54) = uVar6 & 0xfffffeff;
    }
    goto LAB_14003412d;
  case 0x1b:
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    uVar6 = *(uint *)(lVar7 + 0x54);
    if ((((param_4 & 0xff) << 9 ^ uVar6) & 0x200) == 0) {
      return;
    }
    if (bVar9 == 1) {
      *(uint *)(lVar7 + 0x54) = uVar6 | 0x200;
    }
    else {
      *(uint *)(lVar7 + 0x54) = uVar6 & 0xfffffdff;
    }
    goto LAB_14003412d;
  case 0x1c:
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    uVar6 = *(uint *)(lVar7 + 0x54);
    if ((((param_4 & 0xff) << 10 ^ uVar6) & 0x400) == 0) {
      return;
    }
    if (bVar9 == 1) {
      *(uint *)(lVar7 + 0x54) = uVar6 | 0x400;
    }
    else {
      *(uint *)(lVar7 + 0x54) = uVar6 & 0xfffffbff;
    }
    goto LAB_14003412d;
  case 0x1d:
    uVar6 = (param_4 & 3) << 0xb;
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    if ((*(uint *)(lVar7 + 0x54) & 0x1800) == uVar6) {
      return;
    }
    uVar5 = *(uint *)(lVar7 + 0x54) & 0xffffe7ff;
    goto LAB_1400343f6;
  case 0x1e:
    uVar6 = (param_4 & 3) << 0xd;
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    if ((*(uint *)(lVar7 + 0x54) & 0x6000) == uVar6) {
      return;
    }
    uVar5 = *(uint *)(lVar7 + 0x54) & 0xffff9fff;
LAB_1400343f6:
    *(uint *)(lVar7 + 0x54) = uVar5;
    if (bVar9 != 0) {
      puVar2 = (uint *)(*(longlong *)(lVar8 + 0x1e0) + 0x54);
      *puVar2 = *puVar2 | uVar6;
    }
    break;
  case 0x1f:
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    uVar6 = *(uint *)(lVar7 + 0x54);
    if ((((param_4 & 0xff) << 0xf ^ uVar6) & 0x8000) == 0) {
      return;
    }
    if (bVar9 == 1) {
      *(uint *)(lVar7 + 0x54) = uVar6 | 0x8000;
    }
    else {
      *(uint *)(lVar7 + 0x54) = uVar6 & 0xffff7fff;
    }
LAB_14003412d:
    FUN_140033080(param_1);
    **(undefined1 **)(lVar8 + 0x1e0) = 1;
    return;
  case 0x20:
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    uVar6 = *(uint *)(lVar7 + 0x54);
    if ((((param_4 & 0xff) << 0x10 ^ uVar6) >> 0x10 & 1) == 0) {
      return;
    }
    if (bVar9 == 1) {
      uVar6 = uVar6 | 0x10000;
    }
    else {
      uVar6 = uVar6 & 0xfffeffff;
    }
    goto LAB_140034670;
  case 0x21:
    lVar8 = param_1 + (longlong)param_2 * 8;
    lVar7 = *(longlong *)(lVar8 + 0x1e0);
    uVar6 = *(uint *)(lVar7 + 0x54);
    if ((((param_4 & 0xff) << 0x11 ^ uVar6) >> 0x11 & 1) == 0) {
      return;
    }
    if (bVar9 == 1) {
      uVar6 = uVar6 | 0x20000;
    }
    else {
      uVar6 = uVar6 & 0xfffdffff;
    }
LAB_140034670:
    *(uint *)(lVar7 + 0x54) = uVar6;
    break;
  default:
    goto switchD_140033e70_default;
  }
  FUN_140033080(param_1);
LAB_14003467c:
  **(undefined1 **)(lVar8 + 0x1e0) = 1;
switchD_140033e70_default:
  return;
}



// ===== FUN_140038bf0 @ 0x140038bf0 [render] =====

void FUN_140038bf0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 local_18 [16];
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1407bb6f8);
  puVar3 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar3 = (undefined8 *)*param_2;
  }
  uVar5 = 0;
  uVar7 = 0xcbf29ce484222325;
  if (param_2[2] * 2 != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar3 + uVar5);
      uVar5 = uVar5 + 1;
      uVar7 = (uVar7 ^ *pbVar1) * 0x100000001b3;
    } while (uVar5 < (ulonglong)(param_2[2] * 2));
  }
  lVar2 = FUN_1400490c0(&DAT_1407bb678,local_18,param_2,uVar7);
  lVar6 = DAT_1407bb680;
  if (*(longlong *)(lVar2 + 8) != 0) {
    lVar6 = *(longlong *)(lVar2 + 8);
  }
  if (lVar6 == DAT_1407bb680) {
    puVar3 = (undefined8 *)thunk_FUN_140558c80(0x10);
    *puVar3 = 0;
    puVar3[1] = 0;
    *puVar3 = param_3;
    *(undefined4 *)(puVar3 + 1) = param_4;
    *(undefined1 *)((longlong)puVar3 + 0xc) = 1;
    plVar4 = (longlong *)FUN_140047d70(&DAT_1407bb678,local_18,param_2);
    *(undefined8 **)(*plVar4 + 0x30) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x000140038d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1407bb6f8);
    return;
  }
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140054650(L"Incrementing the memory texture file count for %ls\n",param_2);
}



// ===== FUN_140038e70 @ 0x140038e70 [storage,render] =====

bool FUN_140038e70(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 local_18 [16];
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1407bb6f8);
  puVar5 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar5 = (undefined8 *)*param_2;
  }
  uVar2 = 0;
  uVar6 = 0xcbf29ce484222325;
  if (param_2[2] * 2 != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar5 + uVar2);
      uVar2 = uVar2 + 1;
      uVar6 = (uVar6 ^ *pbVar1) * 0x100000001b3;
    } while (uVar2 < (ulonglong)(param_2[2] * 2));
  }
  lVar3 = FUN_1400490c0(&DAT_1407bb678,local_18,param_2,uVar6);
  lVar4 = DAT_1407bb680;
  if (*(longlong *)(lVar3 + 8) != 0) {
    lVar4 = *(longlong *)(lVar3 + 8);
  }
  bVar7 = lVar4 != DAT_1407bb680;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1407bb6f8);
  return bVar7;
}



// ===== FUN_14003e640 @ 0x14003e640 [ui,render] =====

void FUN_14003e640(undefined8 param_1,uint *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  switch(param_3) {
  case 0:
    *param_2 = *param_2 ^ (*param_2 ^ param_4) & 3;
    return;
  case 3:
    uVar1 = *param_2 | 4;
    if (param_4 == 0) {
      uVar1 = *param_2 & 0xfffffffb;
    }
    *param_2 = uVar1;
    return;
  case 4:
    uVar1 = *param_2 | 8;
    if (param_4 == 0) {
      uVar1 = *param_2 & 0xfffffff7;
    }
    *param_2 = uVar1;
    return;
  case 6:
    *param_2 = *param_2 ^ (param_4 << 4 ^ *param_2) & 0x30;
    return;
  case 7:
    uVar1 = *param_2 | 0x40;
    if (param_4 == 0) {
      uVar1 = *param_2 & 0xffffffbf;
    }
    *param_2 = uVar1;
    return;
  case 8:
    uVar1 = *param_2 | 0x80;
    if (param_4 == 0) {
      uVar1 = *param_2 & 0xffffff7f;
    }
    *param_2 = uVar1;
    return;
  case 9:
    uVar1 = *param_2 | 0x100;
    if (param_4 == 0) {
      uVar1 = *param_2 & 0xfffffeff;
    }
    *param_2 = uVar1;
    return;
  case 10:
    uVar1 = *param_2 | 0x200;
    if (param_4 == 0) {
      uVar1 = *param_2 & 0xfffffdff;
    }
    *param_2 = uVar1;
    return;
  case 0xb:
    uVar1 = *param_2 | 0x400;
    if (param_4 == 0) {
      uVar1 = *param_2 & 0xfffffbff;
    }
    *param_2 = uVar1;
    return;
  case 0xc:
    uVar1 = *param_2 | 0x800;
    if (param_4 == 0) {
      uVar1 = *param_2 & 0xfffff7ff;
    }
    *param_2 = uVar1;
    return;
  case 0xd:
    uVar1 = *param_2 | 0x1000;
    if (param_4 == 0) {
      uVar1 = *param_2 & 0xffffefff;
    }
    *param_2 = uVar1;
    return;
  case 0xe:
    uVar1 = *param_2 | 0x2000;
    if (param_4 == 0) {
      uVar1 = *param_2 & 0xffffdfff;
    }
    *param_2 = uVar1;
    return;
  case 0xf:
    uVar1 = *param_2 & 0xfffe3fff;
    if (param_4 != 0) {
      uVar1 = *param_2 | 0x1c000;
    }
    *param_2 = uVar1;
    return;
  case 0x10:
    uVar1 = *param_2 | 0x4000;
    if (param_4 == 0) {
      uVar1 = *param_2 & 0xffffbfff;
    }
    *param_2 = uVar1;
    return;
  case 0x11:
    uVar1 = *param_2 | 0x8000;
    if (param_4 == 0) {
      uVar1 = *param_2 & 0xffff7fff;
    }
    *param_2 = uVar1;
    return;
  case 0x12:
    uVar1 = *param_2 | 0x10000;
    if (param_4 == 0) {
      uVar1 = *param_2 & 0xfffeffff;
    }
    *param_2 = uVar1;
    return;
  case 0x13:
    uVar1 = *param_2 | 0x20000;
    if (param_4 == 0) {
      uVar1 = *param_2 & 0xfffdffff;
    }
    *param_2 = uVar1;
    return;
  case 0x15:
    *param_2 = *param_2 ^ (param_4 << 0x14 ^ *param_2) & 0x700000;
    return;
  case 0x16:
    *param_2 = param_4;
    break;
  case 0x17:
    uVar1 = *param_2 | 0x40000;
    if (param_4 == 0) {
      uVar1 = *param_2 & 0xfffbffff;
    }
    *param_2 = uVar1;
    return;
  case 0x18:
    uVar1 = *param_2 | 0x80000;
    if (param_4 == 0) {
      uVar1 = *param_2 & 0xfff7ffff;
    }
    *param_2 = uVar1;
    return;
  case 0x19:
    uVar1 = *param_2 | 0x800000;
    if (param_4 == 1) {
      uVar1 = *param_2 & 0xff7fffff;
    }
    *param_2 = uVar1;
    return;
  case 0x1a:
    uVar1 = *param_2 | 0x1000000;
    if (param_4 == 0) {
      uVar1 = *param_2 & 0xfeffffff;
    }
    *param_2 = uVar1;
    return;
  case 0x1b:
    uVar1 = *param_2 | 0x2000000;
    if (param_4 == 1) {
      uVar1 = *param_2 & 0xfdffffff;
    }
    *param_2 = uVar1;
    return;
  case 0x1c:
    uVar1 = *param_2 | 0x4000000;
    if (param_4 == 1) {
      uVar1 = *param_2 & 0xfbffffff;
    }
    *param_2 = uVar1;
    return;
  case 0x1d:
    uVar1 = *param_2 | 0x8000000;
    if (param_4 == 1) {
      uVar1 = *param_2 & 0xf7ffffff;
    }
    *param_2 = uVar1;
    return;
  case 0x1e:
    uVar1 = *param_2 | 0x10000000;
    if (param_4 == 1) {
      uVar1 = *param_2 & 0xefffffff;
    }
    *param_2 = uVar1;
    return;
  case 0x1f:
    uVar1 = *param_2 | 0x20000000;
    if (param_4 == 1) {
      uVar1 = *param_2 & 0xdfffffff;
    }
    *param_2 = uVar1;
    return;
  }
  return;
}



// ===== FUN_14003eab0 @ 0x14003eab0 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14003eab0(undefined8 param_1,longlong param_2,uint param_3,longlong param_4,
                  undefined4 *param_5,undefined1 *param_6,undefined8 param_7)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_1e8 [32];
  uint local_1c8;
  uint local_1c4;
  undefined4 *local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  longlong local_1a8 [2];
  undefined1 local_198 [8];
  uint auStack_190 [58];
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1407502c0 ^ (ulonglong)auStack_1e8;
  local_1c0 = param_5;
  local_1b8 = param_7;
  lVar10 = 0;
  do {
    if ((&DAT_140608d90)[lVar10] != (&DAT_140608d90 + lVar10)[param_2 + -0x140608d90]) {
      return;
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 < 8);
  uVar12 = 8;
  local_1c4 = param_3;
  local_1b0 = param_2;
  if (8 < param_3) {
    do {
      uVar5 = local_1b8;
      puVar4 = local_1c0;
      iVar11 = (int)uVar12;
      uVar3 = *(uint *)(uVar12 + param_2);
      local_1c8 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      uVar3 = *(uint *)((ulonglong)(iVar11 + 4) + param_2);
      if ((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) ==
          0x74455874) {
        pcVar8 = (char *)((ulonglong)(iVar11 + 8) + param_2);
        pcVar9 = (char *)((ulonglong)local_1c8 + (ulonglong)(iVar11 + 8) + param_2);
        if (pcVar8 < pcVar9) {
LAB_14003ebb0:
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          uStack_50 = 0;
          local_48 = 0;
          uStack_40 = 0;
          uVar12 = 0;
          cVar2 = *pcVar8;
          while (cVar2 != '\0') {
            *(char *)((longlong)&local_88 + uVar12) = cVar2;
            uVar12 = (ulonglong)((int)uVar12 + 1);
            pcVar8 = pcVar8 + 1;
            cVar2 = *pcVar8;
          }
          pcVar8 = pcVar8 + 1;
          lVar10 = 0;
LAB_14003ec00:
          lVar7 = lVar10 + 1;
          if (*(char *)((longlong)&local_88 + lVar10) == (&DAT_140608448)[lVar10])
          goto code_r0x00014003ec0e;
          iVar6 = strcmp((char *)&local_88,"4J_HOSTOPTIONS");
          if (iVar6 == 0) {
            *param_6 = 1;
            local_a8 = 0;
            local_a0 = 0;
            cVar2 = *pcVar8;
            for (uVar12 = 0; ((cVar2 != '\0' && (pcVar8 < pcVar9)) && ((uint)uVar12 < 8));
                uVar12 = (ulonglong)((uint)uVar12 + 1)) {
              *(char *)((longlong)&local_a8 + uVar12) = cVar2;
              pcVar8 = pcVar8 + 1;
              cVar2 = *pcVar8;
            }
            *puVar4 = 0;
            FUN_1400461d0(local_1a8);
            FUN_140047070(local_198,&local_a8);
            iVar6 = *(int *)(local_1a8[0] + 4);
            puVar1 = (uint *)((longlong)auStack_190 + (longlong)iVar6);
            *puVar1 = *puVar1 & 0xfffff9ff;
            puVar1 = (uint *)((longlong)auStack_190 + (longlong)iVar6);
            *puVar1 = *puVar1 | 0x800;
            FUN_1400488e0(local_1a8,puVar4);
          }
          else {
            iVar6 = strcmp((char *)&local_88,"4J_TEXTUREPACK");
            if (iVar6 != 0) goto LAB_14003ed6b;
            local_98 = 0;
            local_90 = 0;
            cVar2 = *pcVar8;
            for (uVar12 = 0; ((cVar2 != '\0' && (pcVar8 < pcVar9)) && ((uint)uVar12 < 8));
                uVar12 = (ulonglong)((uint)uVar12 + 1)) {
              *(char *)((longlong)&local_98 + uVar12) = cVar2;
              pcVar8 = pcVar8 + 1;
              cVar2 = *pcVar8;
            }
            FUN_1400461d0(local_1a8);
            FUN_140047070(local_198,&local_98);
            iVar6 = *(int *)(local_1a8[0] + 4);
            puVar1 = (uint *)((longlong)auStack_190 + (longlong)iVar6);
            *puVar1 = *puVar1 & 0xfffff9ff;
            puVar1 = (uint *)((longlong)auStack_190 + (longlong)iVar6);
            *puVar1 = *puVar1 | 0x800;
            FUN_140048700(local_1a8,uVar5);
          }
          FUN_14003edd0();
          goto LAB_14003ed6b;
        }
      }
LAB_14003ed83:
      local_1c8 = iVar11 + 0xc + local_1c8;
      uVar12 = (ulonglong)local_1c8;
    } while (local_1c8 < param_3);
  }
  return;
code_r0x00014003ec0e:
  lVar10 = lVar7;
  if (lVar7 == 8) goto code_r0x00014003ec14;
  goto LAB_14003ec00;
code_r0x00014003ec14:
  uVar12 = 0;
  cVar2 = *pcVar8;
  while (cVar2 != '\0') {
    param_2 = local_1b0;
    param_3 = local_1c4;
    if (pcVar9 <= pcVar8) goto LAB_14003ed83;
    *(char *)(uVar12 + param_4) = cVar2;
    uVar12 = (ulonglong)((int)uVar12 + 1);
    pcVar8 = pcVar8 + 1;
    cVar2 = *pcVar8;
  }
LAB_14003ed6b:
  param_2 = local_1b0;
  param_3 = local_1c4;
  if (pcVar9 <= pcVar8) goto LAB_14003ed83;
  goto LAB_14003ebb0;
}



// ===== FUN_14003edd0 @ 0x14003edd0 [render] =====

void FUN_14003edd0(longlong *param_1)

{
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
       vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x98;
  param_1[3] = (longlong)
               std::basic_stringbuf<char,struct_std::char_traits<char>,class_std::allocator<char>_>
               ::vftable;
  FUN_140048fa0(param_1 + 3);
  FUN_140046b80(param_1 + 3);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_iostream<char,struct_std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x20;
  *(undefined ***)((longlong)*(int *)(param_1[2] + 4) + 0x10 + (longlong)param_1) =
       std::basic_ostream<char,struct_std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(param_1[2] + 4) + 0xc + (longlong)param_1) =
       *(int *)(param_1[2] + 4) + -0x10;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_istream<char,struct_std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  *(undefined ***)(param_1 + 0x13) = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)(param_1 + 0x13));
  return;
}



// ===== FUN_140040360 @ 0x140040360 [storage,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_140040360(undefined8 *param_1)

{
  uint uVar1;
  undefined8 ******ppppppuVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStackY_1a8 [32];
  uint local_178 [4];
  undefined1 local_168 [16];
  longlong local_158 [3];
  uint auStack_140 [54];
  undefined8 *****local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  undefined8 *****local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1407502c0 ^ (ulonglong)auStackY_1a8;
  uVar6 = 0;
  local_178[0] = 0;
  if (0xd < (ulonglong)param_1[2]) {
    local_48 = (undefined8 ******)0x0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    puVar4 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar4 = (undefined8 *)*param_1;
    }
    FUN_140054cf0(&local_48,puVar4,3);
    uVar5 = local_38;
    ppppppuVar2 = &local_48;
    if (7 < uStack_30) {
      ppppppuVar2 = (undefined8 ******)local_48;
    }
    uVar1 = FUN_140054430(ppppppuVar2,&DAT_140608500);
    if (uVar1 == 0) {
      if (uVar5 < 3) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = (uint)(3 < uVar5);
      }
    }
    if (7 < uStack_30) {
      if ((0xfff < uStack_30 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)local_48[-1]))))
      goto LAB_140040652;
      thunk_FUN_1401fe000();
    }
    uVar5 = param_1[2];
    local_68 = (undefined8 ******)0x0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    if (uVar5 < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_140051220();
    }
    if (uVar5 - 7 < uVar5) {
      uVar5 = uVar5 - 7;
    }
    if (7 < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    FUN_140054cf0(&local_68,(longlong)param_1 + 0xe,uVar5);
    ppppppuVar2 = &local_68;
    if (7 < uStack_50) {
      ppppppuVar2 = (undefined8 ******)local_68;
    }
    if (local_58 != 0) {
      thunk_FUN_140556dc0(ppppppuVar2,(longlong)ppppppuVar2 + local_58 * 2,0x2e);
    }
    local_48 = (undefined8 ******)0x0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    ppppppuVar2 = &local_68;
    if (7 < uStack_50) {
      ppppppuVar2 = (undefined8 ******)local_68;
    }
    FUN_140054cf0(&local_48,ppppppuVar2);
    if (7 < uStack_50) {
      if ((0xfff < uStack_50 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)local_68[-1])))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
    local_68 = local_48;
    uStack_60 = uStack_40;
    local_58 = local_38;
    uStack_50 = uStack_30;
    FUN_140045710(local_168);
    lVar3 = (longlong)*(int *)(local_158[0] + 4);
    if (uVar1 == 0) {
      *(uint *)((longlong)auStack_140 + lVar3) =
           *(uint *)((longlong)auStack_140 + lVar3) & 0xfffff3ff;
      *(uint *)((longlong)auStack_140 + lVar3) = *(uint *)((longlong)auStack_140 + lVar3) | 0x200;
    }
    else {
      *(uint *)((longlong)auStack_140 + lVar3) =
           *(uint *)((longlong)auStack_140 + lVar3) & 0xfffff9ff;
      *(uint *)((longlong)auStack_140 + lVar3) = *(uint *)((longlong)auStack_140 + lVar3) | 0x800;
    }
    ppppppuVar2 = &local_68;
    if (7 < uStack_50) {
      ppppppuVar2 = (undefined8 ******)local_68;
    }
    FUN_140044db0(local_158,ppppppuVar2);
    FUN_140048520(local_168,local_178);
    if (uVar1 == 0) {
      uVar6 = 0x80000000;
    }
    local_178[0] = uVar6 | local_178[0] & 0x7fffffff;
    FUN_140040690(local_168);
    if (7 < uStack_50) {
      if ((0xfff < uStack_50 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)local_68[-1])))) {
LAB_140040652:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
  }
  return local_178[0];
}



// ===== FUN_140040850 @ 0x140040850 [ui,render] =====

bool FUN_140040850(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 local_28 [16];
  
  uVar10 = 0;
  uVar8 = 0xcbf29ce484222325;
  if ((DAT_140790e60 != 0) && (lVar3 = *(longlong *)(DAT_140790e60 + 0x238), lVar3 != 0)) {
    cVar2 = (**(code **)**(undefined8 **)(lVar3 + 0xb8))();
    plVar9 = DAT_1407915a8;
    if (cVar2 != '\0') {
      plVar9 = *(longlong **)(lVar3 + 0xb8);
    }
    if (((plVar9 != (longlong *)0x0) && (cVar2 = (**(code **)*plVar9)(plVar9), cVar2 != '\0')) &&
       (lVar3 = (**(code **)(*plVar9 + 0xe0))(plVar9), lVar3 != 0)) {
      lVar3 = (**(code **)(*plVar9 + 0xe0))(plVar9);
      puVar7 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        puVar7 = (undefined8 *)*param_2;
      }
      uVar11 = 0xcbf29ce484222325;
      uVar5 = uVar10;
      if (param_2[2] * 2 != 0) {
        do {
          uVar6 = uVar5 + 1;
          uVar11 = (uVar11 ^ *(byte *)((longlong)puVar7 + uVar5)) * 0x100000001b3;
          uVar5 = uVar6;
        } while (uVar6 < (ulonglong)(param_2[2] * 2));
      }
      lVar4 = FUN_1400490c0(lVar3 + 0x28,local_28,param_2,uVar11);
      lVar4 = *(longlong *)(lVar4 + 8);
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(lVar3 + 0x30);
      }
      if (lVar4 != *(longlong *)(lVar3 + 0x30)) {
        return true;
      }
    }
  }
  lVar3 = DAT_1407bb778;
  puVar7 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar7 = (undefined8 *)*param_2;
  }
  if (param_2[2] * 2 != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar7 + uVar10);
      uVar10 = uVar10 + 1;
      uVar8 = (uVar8 ^ *pbVar1) * 0x100000001b3;
    } while (uVar10 < (ulonglong)(param_2[2] * 2));
  }
  lVar4 = FUN_1400490c0(DAT_1407bb778 + 0x28,local_28,param_2,uVar8);
  lVar4 = *(longlong *)(lVar4 + 8);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(lVar3 + 0x30);
  }
  return lVar4 != *(longlong *)(lVar3 + 0x30);
}



// ===== FUN_1400409e0 @ 0x1400409e0 [ui,render] =====

undefined8 FUN_1400409e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 local_18 [16];
  
  uVar5 = DAT_1407bb778;
  if ((DAT_140790e60 != 0) && (lVar3 = *(longlong *)(DAT_140790e60 + 0x238), lVar3 != 0)) {
    cVar2 = (**(code **)**(undefined8 **)(lVar3 + 0xb8))();
    plVar8 = DAT_1407915a8;
    if (cVar2 != '\0') {
      plVar8 = *(longlong **)(lVar3 + 0xb8);
    }
    uVar5 = DAT_1407bb778;
    if (((plVar8 != (longlong *)0x0) &&
        (cVar2 = (**(code **)*plVar8)(plVar8), uVar5 = DAT_1407bb778, cVar2 != '\0')) &&
       (lVar3 = (**(code **)(*plVar8 + 0xe0))(plVar8), uVar5 = DAT_1407bb778, lVar3 != 0)) {
      lVar3 = (**(code **)(*plVar8 + 0xe0))();
      puVar7 = param_3;
      if (7 < (ulonglong)param_3[3]) {
        puVar7 = (undefined8 *)*param_3;
      }
      uVar6 = 0;
      uVar9 = 0xcbf29ce484222325;
      if (param_3[2] * 2 != 0) {
        do {
          pbVar1 = (byte *)((longlong)puVar7 + uVar6);
          uVar6 = uVar6 + 1;
          uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
        } while (uVar6 < (ulonglong)(param_3[2] * 2));
      }
      lVar4 = FUN_1400490c0(lVar3 + 0x28,local_18,param_3,uVar9);
      lVar4 = *(longlong *)(lVar4 + 8);
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(lVar3 + 0x30);
      }
      uVar5 = DAT_1407bb778;
      if (lVar4 != *(longlong *)(lVar3 + 0x30)) {
        uVar5 = (**(code **)(*plVar8 + 0xe0))(plVar8);
      }
    }
  }
  FUN_14008ab40(uVar5,param_2,param_3);
  return param_2;
}



// ===== FUN_1400449b0 @ 0x1400449b0 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1400449b0(undefined8 param_1,undefined8 param_2,int param_3,char param_4,undefined8 param_5,
             undefined8 *param_6)

{
  DWORD DVar1;
  LPCSTR lpFileName;
  undefined8 *puVar2;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  wchar_t *local_b0;
  undefined8 local_a8;
  undefined8 *local_90;
  undefined8 local_88 [2];
  longlong local_78;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1407502c0 ^ (ulonglong)auStack_d8;
  local_90 = param_6;
  FUN_140055000(local_88,param_6);
  if (param_4 != '\0') {
    if (param_3 == 0x804) {
      if (0x7ffffffffffffffeU - DAT_1407ba7a0 < 0x16) {
                    /* WARNING: Subroutine does not return */
        FUN_140054e40();
      }
      local_a8 = 0x16;
      local_b0 = L"Halloween Texture Pack";
      local_b8 = DAT_1407ba7a0;
      FUN_140048da0(local_68);
      FUN_1400546d0(local_88,local_68);
      FUN_140055150(local_68);
    }
    FUN_140317110(local_48,local_88);
    FUN_140055000(local_68,local_48);
    lpFileName = (LPCSTR)FUN_140315d00(local_68);
    DVar1 = GetFileAttributesA(lpFileName);
    FUN_140055150(local_68);
    if ((DVar1 == 0xffffffff) && (local_88 != param_6)) {
      puVar2 = param_6;
      if (7 < (ulonglong)param_6[3]) {
        puVar2 = (undefined8 *)*param_6;
      }
      FUN_1400549d0(local_88,puVar2,param_6[2]);
    }
    FUN_140055150(local_48);
  }
  if (5 < 0x7ffffffffffffffeU - local_78) {
    local_a8 = 6;
    local_b0 = L"\\Data\\";
    local_b8 = local_78;
    FUN_140048da0(param_2);
    FUN_140055150(local_88);
    FUN_140055150(param_6);
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140054e40();
}



// ===== FUN_1400454c0 @ 0x1400454c0 [storage,render] =====

undefined4 * FUN_1400454c0(undefined4 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar1 = FUN_140558c80(0x38);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(param_1 + 2) = lVar1;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  FUN_14004bae0(param_1 + 6,0x10,*(undefined8 *)(param_1 + 2));
  return param_1;
}



// ===== FUN_1400461d0 @ 0x1400461d0 [render] =====

longlong * FUN_1400461d0(longlong *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  char *pcVar6;
  undefined1 local_58 [16];
  undefined1 local_48 [48];
  
  *param_1 = (longlong)&DAT_140608c18;
  param_1[2] = (longlong)&DAT_140608c10;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x13] = (longlong)std::basic_ios<char,struct_std::char_traits<char>_>::vftable;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_istream<char,struct_std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  param_1[1] = 0;
  lVar5 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  FUN_140053060(lVar5);
  plVar1 = param_1 + 3;
  *(longlong **)(lVar5 + 0x48) = plVar1;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  uVar2 = FUN_140052340(lVar5,0x20);
  *(undefined1 *)(lVar5 + 0x58) = uVar2;
  if (*(longlong *)(lVar5 + 0x48) == 0) {
    *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) & 0x13;
    *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 4;
    uVar3 = *(uint *)(lVar5 + 0x10) & *(uint *)(lVar5 + 0x14);
    if (uVar3 != 0) {
      if ((uVar3 & 4) == 0) {
        pcVar6 = "ios_base::failbit set";
        if ((uVar3 & 2) == 0) {
          pcVar6 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar6 = "ios_base::badbit set";
      }
      uVar4 = FUN_140053c00(local_58,1);
      FUN_1400539e0(local_48,pcVar6,uVar4);
                    /* WARNING: Subroutine does not return */
      FUN_14055b910(local_48,&DAT_14074e1a8);
    }
  }
  *(undefined ***)((longlong)*(int *)(param_1[2] + 4) + 0x10 + (longlong)param_1) =
       std::basic_ostream<char,struct_std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(param_1[2] + 4) + 0xc + (longlong)param_1) =
       *(int *)(param_1[2] + 4) + -0x10;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_iostream<char,struct_std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x20;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
       vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x98;
  FUN_14004c160(plVar1);
  *plVar1 = (longlong)
            std::basic_stringbuf<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            vftable;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  return param_1;
}



// ===== FUN_140047070 @ 0x140047070 [render] =====

longlong * FUN_140047070(longlong *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  byte *pbVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 uVar15;
  undefined1 local_68 [16];
  undefined1 local_58 [48];
  
  lVar10 = 0;
  uVar9 = 0;
  lVar12 = -1;
  do {
    lVar12 = lVar12 + 1;
  } while (*(char *)(param_2 + lVar12) != '\0');
  lVar7 = *(longlong *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1);
  if ((0 < lVar7) && (lVar12 < lVar7)) {
    lVar10 = lVar7 - lVar12;
  }
  plVar3 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  plVar13 = param_1;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  lVar7 = *param_1;
  if (*(int *)((longlong)*(int *)(lVar7 + 4) + 0x10 + (longlong)param_1) == 0) {
    plVar3 = *(longlong **)((longlong)*(int *)(lVar7 + 4) + 0x50 + (longlong)param_1);
    if ((plVar3 == (longlong *)0x0) || (plVar3 == param_1)) {
      bVar14 = true;
    }
    else {
      FUN_14004be70(plVar3);
      lVar7 = *param_1;
      bVar14 = *(int *)((longlong)*(int *)(lVar7 + 4) + 0x10 + (longlong)param_1) == 0;
    }
  }
  else {
    bVar14 = false;
  }
  if (bVar14) {
    uVar15 = 1;
    if ((*(uint *)((longlong)*(int *)(lVar7 + 4) + 0x18 + (longlong)param_1) & 0x1c0) != 0x40) {
      for (; 0 < lVar10; lVar10 = lVar10 + -1) {
        plVar3 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
        bVar1 = *(byte *)((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1);
        if (*(longlong *)plVar3[8] == 0) {
LAB_140047199:
          uVar6 = (**(code **)(*plVar3 + 0x18))(plVar3,bVar1,plVar3,bVar1,plVar13,uVar15);
        }
        else {
          iVar2 = *(int *)plVar3[0xb];
          if (iVar2 < 1) goto LAB_140047199;
          *(int *)plVar3[0xb] = iVar2 + -1;
          pbVar4 = *(byte **)plVar3[8];
          *(byte **)plVar3[8] = pbVar4 + 1;
          *pbVar4 = bVar1;
          uVar6 = (uint)bVar1;
        }
        if (uVar6 == 0xffffffff) {
          uVar9 = 4;
          goto LAB_140047260;
        }
      }
    }
    plVar3 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    lVar7 = (**(code **)(*plVar3 + 0x48))(plVar3,param_2,lVar12);
    if (lVar7 == lVar12) {
      for (; 0 < lVar10; lVar10 = lVar10 + -1) {
        plVar3 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
        bVar1 = *(byte *)((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1);
        if (*(longlong *)plVar3[8] == 0) {
LAB_140047235:
          uVar6 = (**(code **)(*plVar3 + 0x18))(plVar3,bVar1);
        }
        else {
          iVar2 = *(int *)plVar3[0xb];
          if (iVar2 < 1) goto LAB_140047235;
          *(int *)plVar3[0xb] = iVar2 + -1;
          pbVar4 = *(byte **)plVar3[8];
          *(byte **)plVar3[8] = pbVar4 + 1;
          *pbVar4 = bVar1;
          uVar6 = (uint)bVar1;
        }
        if (uVar6 == 0xffffffff) {
          uVar9 = 4;
          break;
        }
      }
    }
    else {
      uVar9 = 4;
    }
LAB_140047260:
    *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1) = 0;
  }
  else {
    uVar9 = 4;
  }
  lVar10 = (longlong)*(int *)(*param_1 + 4);
  uVar6 = 4;
  if (*(longlong *)(lVar10 + 0x48 + (longlong)param_1) != 0) {
    uVar6 = 0;
  }
  uVar9 = uVar6 | *(uint *)(lVar10 + 0x10 + (longlong)param_1) & 0x17 | uVar9;
  *(uint *)(lVar10 + 0x10 + (longlong)param_1) = uVar9;
  uVar9 = uVar9 & *(uint *)(lVar10 + 0x14 + (longlong)param_1);
  if (uVar9 != 0) {
    if ((uVar9 & 4) == 0) {
      pcVar11 = "ios_base::failbit set";
      if ((uVar9 & 2) == 0) {
        pcVar11 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar11 = "ios_base::badbit set";
    }
    uVar8 = FUN_140053c00(local_68,1);
    FUN_1400539e0(local_58,pcVar11,uVar8);
                    /* WARNING: Subroutine does not return */
    FUN_14055b910(local_58,&DAT_14074e1a8);
  }
  cVar5 = __uncaught_exception();
  if (cVar5 == '\0') {
    FUN_14004bfc0(param_1);
  }
  plVar3 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  return param_1;
}



// ===== FUN_140047d70 @ 0x140047d70 [render] =====

longlong * FUN_140047d70(float *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  float fVar10;
  longlong local_38;
  longlong lStack_30;
  float *local_28;
  longlong *local_20;
  
  puVar9 = param_3;
  if (7 < (ulonglong)param_3[3]) {
    puVar9 = (undefined8 *)*param_3;
  }
  uVar7 = 0xcbf29ce484222325;
  uVar6 = 0;
  if (param_3[2] * 2 != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)((longlong)puVar9 + uVar6)) * 0x100000001b3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)(param_3[2] * 2));
  }
  FUN_1400490c0(param_1,&local_38,param_3,uVar7);
  if (lStack_30 != 0) {
    *param_2 = lStack_30;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_140555c84("unordered_map/set too long");
  }
  local_20 = (longlong *)0x0;
  local_28 = param_1 + 2;
  plVar2 = (longlong *)FUN_140558c80(0x38);
  local_20 = plVar2;
  FUN_140055000(plVar2 + 2,param_3);
  plVar2[6] = 0;
  uVar6 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar6) {
    fVar10 = (float)FUN_140590160((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar4 = 0;
    if ((9.223372e+18 <= fVar10) && (fVar10 = fVar10 - 9.223372e+18, fVar10 < 9.223372e+18)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar4)) {
      uVar5 = (longlong)fVar10 + lVar4;
    }
    uVar8 = uVar6;
    if ((uVar6 < uVar5) && ((0x1ff < uVar6 || (uVar8 = uVar6 * 8, uVar6 * 8 < uVar5)))) {
      uVar8 = uVar5;
    }
    FUN_140050d80(param_1,uVar8);
    plVar3 = (longlong *)FUN_1400490c0(param_1,&local_28,plVar2 + 2,uVar7);
    local_38 = *plVar3;
  }
  plVar3 = *(longlong **)(local_38 + 8);
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *plVar2 = local_38;
  plVar2[1] = (longlong)plVar3;
  *plVar3 = (longlong)plVar2;
  *(longlong **)(local_38 + 8) = plVar2;
  uVar7 = *(ulonglong *)(param_1 + 0xc) & uVar7;
  lVar4 = *(longlong *)(param_1 + 6);
  lVar1 = *(longlong *)(lVar4 + uVar7 * 0x10);
  if (lVar1 == *(longlong *)(param_1 + 2)) {
    *(longlong **)(lVar4 + uVar7 * 0x10) = plVar2;
  }
  else {
    if (lVar1 == local_38) {
      *(longlong **)(lVar4 + uVar7 * 0x10) = plVar2;
      goto LAB_140047f8c;
    }
    if (*(longlong **)(lVar4 + 8 + uVar7 * 0x10) != plVar3) goto LAB_140047f8c;
  }
  *(longlong **)(lVar4 + 8 + uVar7 * 0x10) = plVar2;
LAB_140047f8c:
  *param_2 = (longlong)plVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// ===== FUN_140048700 @ 0x140048700 [render] =====

longlong * FUN_140048700(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  uint local_res18 [4];
  undefined8 local_98;
  undefined2 uStack_90;
  undefined2 uStack_8e;
  longlong local_88;
  ushort uStack_80;
  undefined2 uStack_7e;
  longlong *local_78;
  char local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [48];
  
  local_res18[0] = 0;
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  local_78 = param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  local_70 = FUN_1400516b0(param_1,0);
  if (local_70 != '\0') {
    plVar1 = *(longlong **)
              (*(longlong *)((longlong)*(int *)(*param_1 + 4) + 0x40 + (longlong)param_1) + 8);
    local_60 = plVar1;
    (**(code **)(*plVar1 + 8))(plVar1);
    plVar3 = (longlong *)FUN_140049400(local_68);
    _uStack_90 = CONCAT22(uStack_8e,1);
    lVar7 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
    local_88 = *(longlong *)(lVar7 + 0x48);
    uStack_80 = (ushort)(local_88 == 0);
    local_98 = 0;
    (**(code **)(*plVar3 + 0x48))(plVar3,local_58,&local_88,&local_98,lVar7,local_res18,param_2);
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  lVar7 = (longlong)*(int *)(*param_1 + 4);
  uVar2 = 4;
  if (*(longlong *)(lVar7 + 0x48 + (longlong)param_1) != 0) {
    uVar2 = 0;
  }
  uVar2 = (uVar2 | *(uint *)(lVar7 + 0x10 + (longlong)param_1) | local_res18[0]) & 0x17;
  *(uint *)(lVar7 + 0x10 + (longlong)param_1) = uVar2;
  uVar2 = uVar2 & *(uint *)(lVar7 + 0x14 + (longlong)param_1);
  if (uVar2 != 0) {
    if ((uVar2 & 4) == 0) {
      pcVar6 = "ios_base::failbit set";
      if ((uVar2 & 2) == 0) {
        pcVar6 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar6 = "ios_base::badbit set";
    }
    uVar5 = FUN_140053c00(local_58,1);
    FUN_1400539e0(local_48,pcVar6,uVar5);
                    /* WARNING: Subroutine does not return */
    FUN_14055b910(local_48,&DAT_14074e1a8);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return param_1;
}



// ===== FUN_1400488e0 @ 0x1400488e0 [render] =====

longlong * FUN_1400488e0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  uint local_res18 [4];
  undefined8 local_98;
  undefined2 uStack_90;
  undefined2 uStack_8e;
  longlong local_88;
  ushort uStack_80;
  undefined2 uStack_7e;
  longlong *local_78;
  char local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [48];
  
  local_res18[0] = 0;
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  local_78 = param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  local_70 = FUN_1400516b0(param_1,0);
  if (local_70 != '\0') {
    plVar1 = *(longlong **)
              (*(longlong *)((longlong)*(int *)(*param_1 + 4) + 0x40 + (longlong)param_1) + 8);
    local_60 = plVar1;
    (**(code **)(*plVar1 + 8))(plVar1);
    plVar3 = (longlong *)FUN_140049400(local_68);
    _uStack_90 = CONCAT22(uStack_8e,1);
    lVar7 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
    local_88 = *(longlong *)(lVar7 + 0x48);
    uStack_80 = (ushort)(local_88 == 0);
    local_98 = 0;
    (**(code **)(*plVar3 + 0x58))(plVar3,local_58,&local_88,&local_98,lVar7,local_res18,param_2);
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  lVar7 = (longlong)*(int *)(*param_1 + 4);
  uVar2 = 4;
  if (*(longlong *)(lVar7 + 0x48 + (longlong)param_1) != 0) {
    uVar2 = 0;
  }
  uVar2 = (uVar2 | *(uint *)(lVar7 + 0x10 + (longlong)param_1) | local_res18[0]) & 0x17;
  *(uint *)(lVar7 + 0x10 + (longlong)param_1) = uVar2;
  uVar2 = uVar2 & *(uint *)(lVar7 + 0x14 + (longlong)param_1);
  if (uVar2 != 0) {
    if ((uVar2 & 4) == 0) {
      pcVar6 = "ios_base::failbit set";
      if ((uVar2 & 2) == 0) {
        pcVar6 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar6 = "ios_base::badbit set";
    }
    uVar5 = FUN_140053c00(local_58,1);
    FUN_1400539e0(local_48,pcVar6,uVar5);
                    /* WARNING: Subroutine does not return */
    FUN_14055b910(local_48,&DAT_14074e1a8);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return param_1;
}



// ===== FUN_1400490c0 @ 0x1400490c0 [storage,ui,render] =====

longlong * FUN_1400490c0(longlong param_1,longlong *param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  puVar3 = (undefined8 *)
           ((*(ulonglong *)(param_1 + 0x30) & param_4) * 0x10 + *(longlong *)(param_1 + 0x18));
  plVar5 = (longlong *)puVar3[1];
  if (plVar5 == *(longlong **)(param_1 + 8)) {
    *param_2 = (longlong)*(longlong **)(param_1 + 8);
    param_2[1] = 0;
    return param_2;
  }
  plVar1 = (longlong *)*puVar3;
  while( true ) {
    plVar4 = plVar5 + 2;
    if (7 < (ulonglong)plVar5[5]) {
      plVar4 = (longlong *)*plVar4;
    }
    puVar3 = param_3;
    if (7 < (ulonglong)param_3[3]) {
      puVar3 = (undefined8 *)*param_3;
    }
    if (param_3[2] == plVar5[4]) {
      if (param_3[2] == 0) {
        bVar6 = false;
      }
      else {
        iVar2 = FUN_140054430(puVar3,plVar4);
        bVar6 = iVar2 != 0;
      }
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) break;
    if (plVar5 == plVar1) {
      *param_2 = (longlong)plVar5;
      param_2[1] = 0;
      return param_2;
    }
    plVar5 = (longlong *)plVar5[1];
  }
  *param_2 = *plVar5;
  param_2[1] = (longlong)plVar5;
  return param_2;
}



// ===== FUN_14004b9e0 @ 0x14004b9e0 [render] =====

void FUN_14004b9e0(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)*param_1;
  lVar3 = (longlong)param_1[1] - (longlong)puVar2;
  if ((ulonglong)(lVar3 >> 3) < 0x10) {
    puVar2 = (undefined8 *)FUN_140054e60(0x80);
    uVar5 = *param_1;
    lVar3 = (longlong)(param_1[2] - uVar5) >> 3;
    if (lVar3 != 0) {
      uVar4 = uVar5;
      if ((0xfff < (ulonglong)(lVar3 * 8)) &&
         (uVar4 = *(ulonglong *)(uVar5 - 8), 0x1f < (uVar5 - uVar4) - 8)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000(uVar4);
    }
    puVar1 = puVar2 + 0x10;
    *param_1 = (ulonglong)puVar2;
    param_1[1] = (ulonglong)puVar1;
    param_1[2] = (ulonglong)puVar1;
    if (puVar2 != puVar1) {
      do {
        *puVar2 = param_3;
        puVar2 = puVar2 + 1;
      } while (puVar2 != puVar1);
      return;
    }
  }
  else {
    uVar5 = lVar3 + 7U >> 3;
    if ((undefined8 *)param_1[1] < puVar2) {
      uVar5 = 0;
    }
    if (uVar5 != 0) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar2 = param_3;
        puVar2 = puVar2 + 1;
      }
    }
  }
  return;
}



// ===== FUN_14004bae0 @ 0x14004bae0 [ui,render] =====

void FUN_14004bae0(longlong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_res18;
  
  local_res18 = param_3;
  if (param_2 <= (ulonglong)(param_1[1] - *param_1 >> 3)) {
    FUN_140050640(*param_1,param_1[1],&local_res18);
    return;
  }
  if (param_2 < 0x2000000000000000) {
    puVar3 = (undefined8 *)FUN_140054e60(param_2 * 8);
    lVar2 = *param_1;
    lVar5 = param_1[2] - lVar2 >> 3;
    if (lVar5 != 0) {
      lVar4 = lVar2;
      if ((0xfff < (ulonglong)(lVar5 * 8)) &&
         (lVar4 = *(longlong *)(lVar2 + -8), 0x1f < (lVar2 - lVar4) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000(lVar4);
    }
    puVar1 = puVar3 + param_2;
    *param_1 = (longlong)puVar3;
    param_1[1] = (longlong)puVar1;
    param_1[2] = (longlong)puVar1;
    for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
      *puVar3 = param_3;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140054fe0();
}



// ===== FUN_140050870 @ 0x140050870 [storage,render] =====

void FUN_140050870(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_140555c84("vector too long");
}



// ===== FUN_140051010 @ 0x140051010 [storage,render] =====

void FUN_140051010(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (param_1[2] - lVar1 & 0xfffffffffffffff8U)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}



// ===== FUN_140054430 @ 0x140054430 [storage,ui,render] =====

undefined8 FUN_140054430(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined8 uVar8;
  undefined1 (*pauVar9) [32];
  undefined1 (*pauVar10) [32];
  ulonglong uVar11;
  undefined1 auVar12 [16];
  
  uVar3 = 0;
  pauVar9 = param_1;
  pauVar10 = param_2;
  uVar4 = uVar3;
  if ((DAT_140790318 != 0) && (0xf < param_3)) {
    uVar11 = 0x10;
    do {
      auVar2 = vpcmpeqw_avx2(*pauVar9,*pauVar10);
      uVar5 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f
      ;
      if (uVar5 != 0xffffffff) {
        uVar5 = ~uVar5;
        uVar6 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        uVar8 = 1;
        if (*(ushort *)(*param_1 + ((uVar6 >> 1) + uVar3) * 2) <
            *(ushort *)(*param_2 + (uVar3 + (uVar6 >> 1)) * 2)) {
          uVar8 = 0xffffffff;
        }
        return uVar8;
      }
      uVar3 = uVar3 + 0x10;
      uVar11 = uVar11 + 0x10;
      pauVar9 = pauVar9 + 1;
      pauVar10 = pauVar10 + 1;
      uVar4 = uVar3;
    } while (uVar11 <= param_3);
  }
  while (uVar4 + 8 <= param_3) {
    auVar12._0_2_ = -(ushort)(*(short *)*pauVar10 == *(short *)*pauVar9);
    auVar12._2_2_ = -(ushort)(*(short *)(*pauVar10 + 2) == *(short *)(*pauVar9 + 2));
    auVar12._4_2_ = -(ushort)(*(short *)(*pauVar10 + 4) == *(short *)(*pauVar9 + 4));
    auVar12._6_2_ = -(ushort)(*(short *)(*pauVar10 + 6) == *(short *)(*pauVar9 + 6));
    auVar12._8_2_ = -(ushort)(*(short *)(*pauVar10 + 8) == *(short *)(*pauVar9 + 8));
    auVar12._10_2_ = -(ushort)(*(short *)(*pauVar10 + 10) == *(short *)(*pauVar9 + 10));
    auVar12._12_2_ = -(ushort)(*(short *)(*pauVar10 + 0xc) == *(short *)(*pauVar9 + 0xc));
    auVar12._14_2_ = -(ushort)(*(short *)(*pauVar10 + 0xe) == *(short *)(*pauVar9 + 0xe));
    uVar1 = (ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
            (ushort)((byte)(auVar12._14_2_ >> 7) & 1) << 0xe | auVar12._14_2_ & 0x8000;
    if (uVar1 != 0xffff) {
      uVar6 = ~(uint)uVar1;
      uVar5 = 0;
      if (uVar6 != 0) {
        for (; (uVar6 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      uVar8 = 1;
      if (*(ushort *)(*param_1 + ((uVar5 >> 1) + uVar3) * 2) <
          *(ushort *)(*param_2 + (uVar3 + (uVar5 >> 1)) * 2)) {
        uVar8 = 0xffffffff;
      }
      return uVar8;
    }
    uVar3 = uVar3 + 8;
    pauVar9 = (undefined1 (*) [32])(*pauVar9 + 0x10);
    pauVar10 = (undefined1 (*) [32])(*pauVar10 + 0x10);
    uVar4 = uVar4 + 8;
  }
  uVar4 = uVar3;
  if (uVar3 + 4 <= param_3) {
    uVar4 = uVar3 + 4;
    if (*(ulonglong *)*pauVar9 != *(ulonglong *)*pauVar10) {
      uVar11 = *(ulonglong *)*pauVar10 ^ *(ulonglong *)*pauVar9;
      uVar4 = 0;
      if (uVar11 != 0) {
        for (; (uVar11 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      uVar8 = 1;
      if (*(ushort *)(*param_1 + ((uVar4 >> 4) + uVar3) * 2) <
          *(ushort *)(*param_2 + (uVar3 + (uVar4 >> 4)) * 2)) {
        uVar8 = 0xffffffff;
      }
      return uVar8;
    }
  }
  if (uVar4 < param_3) {
    puVar7 = (ushort *)(*param_2 + uVar4 * 2);
    do {
      uVar1 = *(ushort *)(((longlong)param_1 - (longlong)param_2) + (longlong)puVar7);
      if (uVar1 != *puVar7) {
        uVar8 = 1;
        if (uVar1 < *puVar7) {
          uVar8 = 0xffffffff;
        }
        return uVar8;
      }
      uVar4 = uVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar4 < param_3);
  }
  return 0;
}



// ===== FUN_140054650 @ 0x140054650 [storage,render] =====

void FUN_140054650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = FUN_140567918(1);
  puVar2 = (undefined8 *)FUN_140054850();
  FUN_1405661dc(*puVar2,uVar1,param_1,0,&local_res10);
  return;
}



// ===== FUN_140054fe0 @ 0x140054fe0 [storage,render] =====

void FUN_140054fe0(void)

{
  undefined1 local_28 [40];
  
  FUN_140054ed0(local_28);
                    /* WARNING: Subroutine does not return */
  FUN_14055b910(local_28,&DAT_14074e2c0);
}



// ===== FUN_140057cc0 @ 0x140057cc0 [ui,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140057cc0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 ****ppppuVar5;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 *local_178;
  undefined4 local_170;
  undefined1 local_168;
  undefined4 local_158 [2];
  undefined8 ***local_150 [3];
  ulonglong local_138;
  undefined1 local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_1407502c0 ^ (ulonglong)auStack_1b8;
  lVar2 = 0;
  iVar3 = *(int *)((longlong)param_1 + 0x1c);
  for (plVar1 = (longlong *)*param_1; plVar1 != (longlong *)param_1[1]; plVar1 = plVar1 + 1) {
    if ((*(char *)(*plVar1 + 0x1c0) != '\0') && (iVar3 = iVar3 + 1, lVar2 == 0)) {
      lVar2 = *plVar1;
    }
  }
  if (iVar3 != 0) {
    local_158[0] = 0x59b;
    if ((iVar3 == 1) && (lVar2 != 0)) {
      FUN_140055000(local_150,lVar2 + 0x168);
      ppppuVar5 = local_150;
      if (7 < local_138) {
        ppppuVar5 = (undefined8 ****)local_150[0];
      }
      FUN_1400547f0(local_128,0x84,L"%ls\n\n%%ls",ppppuVar5);
      FUN_140055150(local_150);
      local_178 = local_128;
      uVar4 = 0x661;
    }
    else {
      uVar4 = 0x662;
      local_178 = (undefined1 *)0x0;
    }
    local_168 = 1;
    local_170 = 0;
    local_180 = 0;
    local_188 = 0;
    local_190 = 0;
    local_198 = 1;
    (**(code **)(DAT_1407bc300 + 0x210))(&DAT_1407bc300,0x660,uVar4,local_158);
  }
  *(undefined1 *)(param_1 + 3) = 0;
  return iVar3;
}



// ===== FUN_140059350 @ 0x140059350 [render] =====

undefined4 FUN_140059350(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x120) != 0) {
    do {
      lVar2 = lVar1;
      lVar1 = *(longlong *)(lVar2 + 0x120);
    } while (lVar1 != 0);
    return *(undefined4 *)(lVar2 + 0x1ac);
  }
  return *(undefined4 *)(param_1 + 0x1ac);
}



// ===== FUN_140059a30 @ 0x140059a30 [storage,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140059a30(longlong param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_88 [40];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_1407502c0 ^ (ulonglong)auStack_88;
  lVar5 = (longlong)param_2;
  iVar3 = 0;
  if (param_2 == 0xc) {
    do {
      uVar2 = FUN_140059a30(param_1,iVar3,param_3);
      if ((char)uVar2 != '\0') {
        return uVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xb);
  }
  else {
    plVar1 = *(longlong **)(param_1 + 8 + lVar5 * 0x18);
    DAT_1407c05d0 = param_3;
    for (plVar4 = *(longlong **)(param_1 + lVar5 * 0x18); plVar4 != plVar1; plVar4 = plVar4 + 1) {
      FUN_140055000(local_60,*plVar4 + 0x10);
      iVar3 = FUN_1400545e0(DAT_1407c05d0,local_60);
      FUN_140055150(local_60);
      if (iVar3 == 0) break;
    }
    bVar6 = plVar4 != *(longlong **)(param_1 + lVar5 * 0x18 + 8);
    if ((bVar6) || (*(longlong *)(param_1 + 0x120) == 0)) {
      uVar2 = (ulonglong)bVar6;
    }
    else {
      uVar2 = FUN_140059a30(*(longlong *)(param_1 + 0x120),param_2,param_3);
    }
  }
  return uVar2;
}



// ===== FUN_140059bf0 @ 0x140059bf0 [storage,ui,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140059bf0(longlong param_1,int param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong *puVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  undefined1 local_60 [32];
  ulonglong local_40;
  ulonglong uVar5;
  
  local_40 = DAT_1407502c0 ^ (ulonglong)auStack_88;
  lVar7 = (longlong)param_2;
  uVar3 = 0;
  uVar5 = uVar3;
  if (param_2 == 0xc) {
    do {
      uVar3 = FUN_140059bf0(param_1,uVar5,param_3);
      if (uVar3 != 0) {
        return uVar3;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar3 = 0;
    } while ((int)uVar4 < 0xb);
  }
  else {
    puVar1 = *(ulonglong **)(param_1 + 8 + lVar7 * 0x18);
    DAT_1407c05d0 = param_3;
    for (puVar6 = *(ulonglong **)(param_1 + lVar7 * 0x18); puVar6 != puVar1; puVar6 = puVar6 + 1) {
      FUN_140055000(local_60,*puVar6 + 0x10);
      iVar2 = FUN_1400545e0(DAT_1407c05d0,local_60);
      FUN_140055150(local_60);
      if (iVar2 == 0) break;
    }
    if (((puVar6 == *(ulonglong **)(param_1 + lVar7 * 0x18 + 8)) || (uVar3 = *puVar6, uVar3 == 0))
       && (*(longlong *)(param_1 + 0x120) != 0)) {
      uVar3 = FUN_140059bf0(*(longlong *)(param_1 + 0x120),param_2,param_3);
    }
  }
  return uVar3;
}



// ===== FUN_140059d90 @ 0x140059d90 [storage,render] =====

undefined4 FUN_140059d90(undefined8 param_1)

{
  undefined4 local_res10 [6];
  int iStack_fc;
  longlong local_f8 [2];
  undefined **local_e8 [16];
  undefined **local_68 [12];
  
  FUN_1400559a0(local_f8,param_1);
  FUN_140048520(local_f8,local_res10);
  *(undefined ***)((longlong)local_f8 + (longlong)*(int *)(local_f8[0] + 4)) =
       std::
       basic_istringstream<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
       ::vftable;
  *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8[0] + 4)) =
       *(int *)(local_f8[0] + 4) + -0x90;
  local_e8[0] = std::
                basic_stringbuf<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                ::vftable;
  FUN_140048ea0(local_e8);
  FUN_140046150(local_e8);
  *(undefined ***)((longlong)local_f8 + (longlong)*(int *)(local_f8[0] + 4)) =
       std::basic_istream<wchar_t,struct_std::char_traits<wchar_t>_>::vftable;
  *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8[0] + 4)) =
       *(int *)(local_f8[0] + 4) + -0x18;
  local_68[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_68);
  return local_res10[0];
}



// ===== FUN_14005e330 @ 0x14005e330 [render] =====

void FUN_14005e330(void)

{
  return;
}



// ===== FUN_14005e770 @ 0x14005e770 [storage,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14005e770(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  short *psVar3;
  short *psVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  short local_22 [5];
  ulonglong local_18;
  
  local_18 = DAT_1407502c0 ^ (ulonglong)auStack_78;
  psVar4 = local_22 + 2;
  uVar2 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
    param_2 = -param_2;
    do {
      psVar3 = psVar4;
      psVar4 = psVar3 + -1;
      *psVar4 = (short)param_2 + (short)((ulonglong)param_2 / 10) * -10 + 0x30;
      param_2 = (uint)((ulonglong)param_2 / 10);
    } while (param_2 != 0);
    psVar4 = psVar3 + -2;
    *psVar4 = 0x2d;
  }
  else {
    do {
      psVar4 = psVar4 + -1;
      uVar1 = uVar2 / 10;
      *psVar4 = (short)uVar2 + (short)uVar1 * -10 + 0x30;
      uVar2 = uVar1;
    } while ((int)uVar1 != 0);
  }
  local_50 = param_1;
  FUN_14005e650(param_1,psVar4,local_22 + 2);
  return param_1;
}



// ===== FUN_1400660d0 @ 0x1400660d0 [storage,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1400660d0(longlong param_1,undefined8 *param_2,undefined8 ****param_3)

{
  ulonglong uVar1;
  undefined8 ***pppuVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 ****ppppuVar8;
  ulonglong uVar9;
  undefined8 ***pppuVar10;
  char *pcVar11;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 ***local_80 [2];
  longlong local_70;
  ulonglong local_68;
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_1407502c0 ^ (ulonglong)auStack_a8;
  uVar1 = param_2[2];
  puVar7 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar7 = (undefined8 *)*param_2;
  }
  uVar9 = uVar1;
  if (4 < uVar1) {
    uVar9 = 4;
  }
  iVar4 = FUN_140054430(puVar7,L"seed",uVar9);
  if ((iVar4 == 0) && (uVar1 == 4)) {
    uVar6 = FUN_140067c10(param_3);
    *(undefined8 *)(param_1 + 0x80) = uVar6;
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"LevelGenerationOptions: Adding parameter m_seed=%I64d\n",uVar6);
  }
  uVar1 = param_2[2];
  puVar7 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar7 = (undefined8 *)*param_2;
  }
  uVar9 = uVar1;
  if (6 < uVar1) {
    uVar9 = 6;
  }
  iVar4 = FUN_140054430(puVar7,L"spawnX",uVar9);
  if ((iVar4 == 0) && (uVar1 == 6)) {
    if (*(longlong *)(param_1 + 0x90) == 0) {
      local_88 = (undefined4 *)FUN_140558c80(0xc);
      *(undefined8 *)(local_88 + 1) = 0;
      *local_88 = 0;
      *(undefined4 **)(param_1 + 0x90) = local_88;
    }
    uVar5 = FUN_14005e1a0(param_3);
    **(undefined4 **)(param_1 + 0x90) = uVar5;
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"LevelGenerationOptions: Adding parameter spawnX=%d\n",uVar5);
  }
  uVar1 = param_2[2];
  puVar7 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar7 = (undefined8 *)*param_2;
  }
  uVar9 = uVar1;
  if (6 < uVar1) {
    uVar9 = 6;
  }
  iVar4 = FUN_140054430(puVar7,L"spawnY",uVar9);
  if ((iVar4 == 0) && (uVar1 == 6)) {
    if (*(longlong *)(param_1 + 0x90) == 0) {
      local_88 = (undefined4 *)FUN_140558c80(0xc);
      *(undefined8 *)(local_88 + 1) = 0;
      *local_88 = 0;
      *(undefined4 **)(param_1 + 0x90) = local_88;
    }
    uVar5 = FUN_14005e1a0(param_3);
    *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 4) = uVar5;
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"LevelGenerationOptions: Adding parameter spawnY=%d\n",uVar5);
  }
  uVar1 = param_2[2];
  puVar7 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar7 = (undefined8 *)*param_2;
  }
  uVar9 = uVar1;
  if (6 < uVar1) {
    uVar9 = 6;
  }
  iVar4 = FUN_140054430(puVar7,L"spawnZ",uVar9);
  if ((iVar4 == 0) && (uVar1 == 6)) {
    if (*(longlong *)(param_1 + 0x90) == 0) {
      local_88 = (undefined4 *)FUN_140558c80(0xc);
      *(undefined8 *)(local_88 + 1) = 0;
      *local_88 = 0;
      *(undefined4 **)(param_1 + 0x90) = local_88;
    }
    uVar5 = FUN_14005e1a0(param_3);
    *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 8) = uVar5;
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"LevelGenerationOptions: Adding parameter spawnZ=%d\n",uVar5);
  }
  uVar1 = param_2[2];
  puVar7 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar7 = (undefined8 *)*param_2;
  }
  uVar9 = uVar1;
  if (9 < uVar1) {
    uVar9 = 9;
  }
  iVar4 = FUN_140054430(puVar7,L"flatworld",uVar9);
  if ((iVar4 == 0) && (uVar1 == 9)) {
    pppuVar2 = param_3[2];
    if ((undefined8 ***)0x7 < param_3[3]) {
      param_3 = (undefined8 ****)*param_3;
    }
    pppuVar10 = pppuVar2;
    if ((undefined8 ***)0x4 < pppuVar2) {
      pppuVar10 = (undefined8 ***)0x4;
    }
    iVar4 = FUN_140054430(param_3,&DAT_1406164c8,pppuVar10);
    if ((iVar4 == 0) && (pppuVar2 == (undefined8 ***)0x4)) {
      *(undefined1 *)(param_1 + 0x88) = 1;
    }
    pcVar11 = "FALSE";
    if (*(char *)(param_1 + 0x88) != '\0') {
      pcVar11 = "TRUE";
    }
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"LevelGenerationOptions: Adding parameter flatworld=%s\n",pcVar11);
  }
  uVar1 = param_2[2];
  puVar7 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar7 = (undefined8 *)*param_2;
  }
  uVar9 = uVar1;
  if (8 < uVar1) {
    uVar9 = 8;
  }
  iVar4 = FUN_140054430(puVar7,L"saveName",uVar9);
  if ((iVar4 == 0) && (uVar1 == 8)) {
    FUN_140055000(local_80,param_3);
    ppppuVar8 = local_80;
    if (local_70 == 0) {
      ppppuVar8 = param_3;
    }
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x50))(*(longlong **)(param_1 + 0x60),ppppuVar8);
    puVar7 = (undefined8 *)FUN_140067670(param_1,local_60);
    if (7 < (ulonglong)puVar7[3]) {
      puVar7 = (undefined8 *)*puVar7;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"LevelGenerationOptions: Adding parameter saveName=%ls\n",puVar7);
  }
  uVar1 = param_2[2];
  puVar7 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar7 = (undefined8 *)*param_2;
  }
  uVar9 = uVar1;
  if (9 < uVar1) {
    uVar9 = 9;
  }
  iVar4 = FUN_140054430(puVar7,L"worldName",uVar9);
  if ((iVar4 == 0) && (uVar1 == 9)) {
    FUN_140055000(local_80,param_3);
    ppppuVar8 = local_80;
    if (local_70 == 0) {
      ppppuVar8 = param_3;
    }
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x58))(*(longlong **)(param_1 + 0x60),ppppuVar8);
    uVar6 = FUN_140067840(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"LevelGenerationOptions: Adding parameter worldName=%ls\n",uVar6);
  }
  uVar1 = param_2[2];
  puVar7 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar7 = (undefined8 *)*param_2;
  }
  uVar9 = uVar1;
  if (0xb < uVar1) {
    uVar9 = 0xb;
  }
  iVar4 = FUN_140054430(puVar7,L"displayName",uVar9);
  if ((iVar4 == 0) && (uVar1 == 0xb)) {
    FUN_140055000(local_80,param_3);
    ppppuVar8 = local_80;
    if (local_70 == 0) {
      ppppuVar8 = param_3;
    }
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x60))(*(longlong **)(param_1 + 0x60),ppppuVar8);
    uVar6 = FUN_140067a50(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"LevelGenerationOptions: Adding parameter displayName=%ls\n",uVar6)
    ;
  }
  uVar1 = param_2[2];
  puVar7 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar7 = (undefined8 *)*param_2;
  }
  uVar9 = uVar1;
  if (0xd < uVar1) {
    uVar9 = 0xd;
  }
  iVar4 = FUN_140054430(puVar7,L"texturePackId",uVar9);
  if ((iVar4 == 0) && (uVar1 == 0xd)) {
    uVar5 = FUN_140059d90(param_3);
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x48))(*(longlong **)(param_1 + 0x60),uVar5);
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x40))(*(longlong **)(param_1 + 0x60),1);
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x60) + 8))();
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"LevelGenerationOptions: Adding parameter texturePackId=%0x\n",
                  uVar5);
  }
  uVar1 = param_2[2];
  puVar7 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar7 = (undefined8 *)*param_2;
  }
  uVar9 = uVar1;
  if (10 < uVar1) {
    uVar9 = 10;
  }
  iVar4 = FUN_140054430(puVar7,L"isTutorial",uVar9);
  if ((iVar4 == 0) && (uVar1 == 10)) {
    pppuVar2 = param_3[2];
    if ((undefined8 ***)0x7 < param_3[3]) {
      param_3 = (undefined8 ****)*param_3;
    }
    pppuVar10 = pppuVar2;
    if ((undefined8 ***)0x4 < pppuVar2) {
      pppuVar10 = (undefined8 ***)0x4;
    }
    iVar4 = FUN_140054430(param_3,&DAT_1406164c8,pppuVar10);
    if ((iVar4 == 0) && (pppuVar2 == (undefined8 ***)0x4)) {
      *(undefined4 *)(param_1 + 0x58) = 3;
    }
    pcVar11 = "FALSE";
    if (*(int *)(param_1 + 0x58) == 3) {
      pcVar11 = "TRUE";
    }
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"LevelGenerationOptions: Adding parameter isTutorial=%s\n",pcVar11)
    ;
  }
  uVar1 = param_2[2];
  puVar7 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar7 = (undefined8 *)*param_2;
  }
  uVar9 = uVar1;
  if (0xc < uVar1) {
    uVar9 = 0xc;
  }
  iVar4 = FUN_140054430(puVar7,L"baseSaveName",uVar9);
  if ((iVar4 == 0) && (uVar1 == 0xc)) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x70))(*(longlong **)(param_1 + 0x60),param_3);
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x38))(*(longlong **)(param_1 + 0x60),local_80);
    ppppuVar8 = local_80;
    if (7 < local_68) {
      ppppuVar8 = (undefined8 ****)local_80[0];
    }
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"LevelGenerationOptions: Adding parameter baseSaveName=%ls\n",
                  ppppuVar8);
  }
  uVar1 = param_2[2];
  puVar7 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar7 = (undefined8 *)*param_2;
  }
  uVar9 = uVar1;
  if (0x11 < uVar1) {
    uVar9 = 0x11;
  }
  iVar4 = FUN_140054430(puVar7,L"hasBeenInCreative",uVar9);
  if ((iVar4 == 0) && (uVar1 == 0x11)) {
    bVar3 = FUN_140067ce0(param_3);
    *(uint *)(param_1 + 0x98) = (uint)bVar3;
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"LevelGenerationOptions: Adding parameter gameMode=%d\n");
  }
  FUN_14006c930(param_1,param_2,param_3);
  return;
}



// ===== FUN_140067670 @ 0x140067670 [storage,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140067670(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1407502c0 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x58);
  local_40 = param_2;
  if (iVar1 == 1) {
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))
                      (*(longlong **)(param_1 + 0x60),local_38);
    if (*(longlong *)(param_1 + 0x158) == 0) {
      ppuVar4 = &PTR_140610690;
    }
    else {
      ppuVar4 = (undefined **)FUN_14006ffc0(*(longlong *)(param_1 + 0x158),uVar5);
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(short *)((longlong)ppuVar4 + lVar6 * 2) != 0);
    FUN_140054cf0(param_2,ppuVar4);
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        FUN_140054cf0(param_2,&PTR_140610690,0);
        return param_2;
      }
      if (*DAT_1407bb780 != '\0') {
        lVar6 = *(longlong *)(DAT_1407bb780 + 0x48);
        if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar6 >> 5) < 0x5af) {
          ppuVar4 = &PTR_140610690;
        }
        else {
          ppuVar4 = (undefined **)(lVar6 + 0xb5c0);
          if (7 < *(ulonglong *)(lVar6 + 0xb5d8)) {
            ppuVar4 = (undefined **)*ppuVar4;
          }
        }
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (*(short *)((longlong)ppuVar4 + lVar6 * 2) != 0);
        FUN_140054cf0(param_2,ppuVar4);
        return param_2;
      }
      pcVar2 = (code *)swi(3);
      puVar3 = (undefined8 *)(*pcVar2)();
      return puVar3;
    }
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))
                      (*(longlong **)(param_1 + 0x60),local_38);
    if (*(longlong *)(param_1 + 0x158) == 0) {
      ppuVar4 = &PTR_140610690;
    }
    else {
      ppuVar4 = (undefined **)FUN_14006ffc0(*(longlong *)(param_1 + 0x158),uVar5);
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(short *)((longlong)ppuVar4 + lVar6 * 2) != 0);
    FUN_140054cf0(param_2,ppuVar4);
  }
  FUN_140055150(local_38);
  return param_2;
}



// ===== FUN_140067840 @ 0x140067840 [storage,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined ** FUN_140067840(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  undefined **ppuVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStackY_68 [32];
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1407502c0 ^ (ulonglong)auStackY_68;
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 1) {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
    local_38 = 0;
    uStack_30 = 0;
    lVar5 = -1;
    local_28 = 0;
    uStack_20 = 0;
    do {
      lVar5 = lVar5 + 1;
    } while (*(short *)(lVar4 + lVar5 * 2) != 0);
    FUN_140054cf0(&local_38,lVar4);
    if (*(longlong *)(param_1 + 0x158) == 0) {
      ppuVar3 = &PTR_140610690;
    }
    else {
      ppuVar3 = (undefined **)FUN_14006ffc0(*(longlong *)(param_1 + 0x158),&local_38);
    }
    if (uStack_20 < 8) {
      return ppuVar3;
    }
    if (uStack_20 * 2 + 2 < 0x1000) goto LAB_14006796b;
    lVar4 = local_38 - *(longlong *)(local_38 + -8);
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return &PTR_140610690;
      }
      if (*DAT_1407bb780 == '\0') {
        pcVar2 = (code *)swi(3);
        ppuVar3 = (undefined **)(*pcVar2)();
        return ppuVar3;
      }
      lVar4 = *(longlong *)(DAT_1407bb780 + 0x48);
      if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar4 >> 5) < 0x5ae) {
        return &PTR_140610690;
      }
      if (*(ulonglong *)(lVar4 + 0xb5b8) < 8) {
        return (undefined **)(lVar4 + 0xb5a0);
      }
      return *(undefined ***)(lVar4 + 0xb5a0);
    }
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
    local_38 = 0;
    uStack_30 = 0;
    lVar5 = -1;
    local_28 = 0;
    uStack_20 = 0;
    do {
      lVar5 = lVar5 + 1;
    } while (*(short *)(lVar4 + lVar5 * 2) != 0);
    FUN_140054cf0(&local_38,lVar4);
    if (*(longlong *)(param_1 + 0x158) == 0) {
      ppuVar3 = &PTR_140610690;
    }
    else {
      ppuVar3 = (undefined **)FUN_14006ffc0(*(longlong *)(param_1 + 0x158),&local_38);
    }
    if (uStack_20 < 8) {
      return ppuVar3;
    }
    if (uStack_20 * 2 + 2 < 0x1000) goto LAB_14006796b;
    lVar4 = local_38 - *(longlong *)(local_38 + -8);
  }
  if (0x1f < lVar4 - 8U) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
LAB_14006796b:
  thunk_FUN_1401fe000();
  return ppuVar3;
}



// ===== FUN_140067a50 @ 0x140067a50 [storage,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined ** FUN_140067a50(longlong param_1)

{
  longlong lVar1;
  undefined **ppuVar2;
  longlong lVar3;
  undefined1 auStackY_68 [32];
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1407502c0 ^ (ulonglong)auStackY_68;
  if (*(int *)(param_1 + 0x58) == 1) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x20))();
    local_38 = 0;
    uStack_30 = 0;
    lVar3 = -1;
    local_28 = 0;
    uStack_20 = 0;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(lVar1 + lVar3 * 2) != 0);
    FUN_140054cf0(&local_38,lVar1);
    if (*(longlong *)(param_1 + 0x158) == 0) {
      ppuVar2 = &PTR_140610690;
    }
    else {
      ppuVar2 = (undefined **)FUN_14006ffc0(*(longlong *)(param_1 + 0x158),&local_38);
    }
    if (uStack_20 < 8) {
      return ppuVar2;
    }
    if (uStack_20 * 2 + 2 < 0x1000) goto LAB_140067b2c;
    lVar1 = local_38 - *(longlong *)(local_38 + -8);
  }
  else {
    if (*(int *)(param_1 + 0x58) != 2) {
      return &PTR_140610690;
    }
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x20))();
    local_38 = 0;
    uStack_30 = 0;
    lVar3 = -1;
    local_28 = 0;
    uStack_20 = 0;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(lVar1 + lVar3 * 2) != 0);
    FUN_140054cf0(&local_38,lVar1);
    if (*(longlong *)(param_1 + 0x158) == 0) {
      ppuVar2 = &PTR_140610690;
    }
    else {
      ppuVar2 = (undefined **)FUN_14006ffc0(*(longlong *)(param_1 + 0x158),&local_38);
    }
    if (uStack_20 < 8) {
      return ppuVar2;
    }
    if (uStack_20 * 2 + 2 < 0x1000) goto LAB_140067b2c;
    lVar1 = local_38 - *(longlong *)(local_38 + -8);
  }
  if (0x1f < lVar1 - 8U) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
LAB_140067b2c:
  thunk_FUN_1401fe000();
  return ppuVar2;
}



// ===== FUN_140067c10 @ 0x140067c10 [storage,render] =====

undefined8 FUN_140067c10(undefined8 param_1)

{
  undefined8 local_res10 [3];
  int iStack_fc;
  longlong local_f8 [2];
  undefined **local_e8 [16];
  undefined **local_68 [12];
  
  FUN_1400559a0(local_f8,param_1);
  FUN_1400685f0(local_f8,local_res10);
  *(undefined ***)((longlong)local_f8 + (longlong)*(int *)(local_f8[0] + 4)) =
       std::
       basic_istringstream<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
       ::vftable;
  *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8[0] + 4)) =
       *(int *)(local_f8[0] + 4) + -0x90;
  local_e8[0] = std::
                basic_stringbuf<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                ::vftable;
  FUN_140048ea0(local_e8);
  FUN_140046150(local_e8);
  *(undefined ***)((longlong)local_f8 + (longlong)*(int *)(local_f8[0] + 4)) =
       std::basic_istream<wchar_t,struct_std::char_traits<wchar_t>_>::vftable;
  *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8[0] + 4)) =
       *(int *)(local_f8[0] + 4) + -0x18;
  local_68[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_68);
  return local_res10[0];
}



// ===== FUN_140067ce0 @ 0x140067ce0 [storage,render] =====

undefined1 FUN_140067ce0(undefined8 param_1)

{
  undefined1 local_res10 [24];
  int iStack_fc;
  longlong local_f8 [2];
  undefined **local_e8 [16];
  undefined **local_68 [12];
  
  FUN_1400559a0(local_f8,param_1);
  FUN_1400687d0(local_f8,local_res10);
  *(undefined ***)((longlong)local_f8 + (longlong)*(int *)(local_f8[0] + 4)) =
       std::
       basic_istringstream<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
       ::vftable;
  *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8[0] + 4)) =
       *(int *)(local_f8[0] + 4) + -0x90;
  local_e8[0] = std::
                basic_stringbuf<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                ::vftable;
  FUN_140048ea0(local_e8);
  FUN_140046150(local_e8);
  *(undefined ***)((longlong)local_f8 + (longlong)*(int *)(local_f8[0] + 4)) =
       std::basic_istream<wchar_t,struct_std::char_traits<wchar_t>_>::vftable;
  *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8[0] + 4)) =
       *(int *)(local_f8[0] + 4) + -0x18;
  local_68[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_68);
  return local_res10[0];
}



// ===== FUN_140068410 @ 0x140068410 [storage,render] =====

longlong *
FUN_140068410(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_3[2];
  uVar3 = param_4[2];
  uVar1 = uVar3 + uVar2;
  if ((param_3[3] - uVar2 < uVar3) || ((ulonglong)param_3[3] < (ulonglong)param_4[3])) {
    if (param_4[3] - uVar3 < uVar2) {
      if (0x7ffffffffffffffe - uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_140054e40();
      }
      uVar8 = uVar1 | 7;
      if (uVar8 < 0x7fffffffffffffff) {
        if (uVar8 < 10) {
          uVar8 = 10;
        }
        uVar10 = uVar8 + 1;
        if (0x7fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_140054fe0();
        }
      }
      else {
        uVar10 = 0x7fffffffffffffff;
        uVar8 = 0x7ffffffffffffffe;
      }
      lVar9 = FUN_140054e60(uVar10 * 2);
      *param_1 = lVar9;
      param_1[2] = uVar1;
      param_1[3] = uVar8;
      if (7 < (ulonglong)param_3[3]) {
        param_3 = (undefined8 *)*param_3;
      }
      FUN_140596110(lVar9,param_3,uVar2 * 2);
      if (7 < (ulonglong)param_4[3]) {
        param_4 = (undefined8 *)*param_4;
      }
      FUN_140596110(uVar2 * 2 + lVar9,param_4,uVar3 * 2 + 2);
    }
    else {
      uVar4 = *(undefined4 *)((longlong)param_4 + 4);
      uVar5 = *(undefined4 *)(param_4 + 1);
      uVar6 = *(undefined4 *)((longlong)param_4 + 0xc);
      *(undefined4 *)param_1 = *(undefined4 *)param_4;
      *(undefined4 *)((longlong)param_1 + 4) = uVar4;
      *(undefined4 *)(param_1 + 1) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
      uVar4 = *(undefined4 *)((longlong)param_4 + 0x14);
      uVar5 = *(undefined4 *)(param_4 + 3);
      uVar6 = *(undefined4 *)((longlong)param_4 + 0x1c);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_4 + 2);
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
      *(undefined4 *)(param_1 + 3) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
      param_4[2] = 0;
      *(undefined2 *)param_4 = 0;
      param_4[3] = 7;
      lVar9 = *param_1;
      FUN_140596110(uVar2 * 2 + lVar9,lVar9,uVar3 * 2 + 2);
      if (7 < (ulonglong)param_3[3]) {
        param_3 = (undefined8 *)*param_3;
      }
      FUN_140596110(lVar9,param_3,uVar2 * 2);
      param_1[2] = uVar1;
    }
  }
  else {
    uVar4 = *(undefined4 *)((longlong)param_3 + 4);
    uVar5 = *(undefined4 *)(param_3 + 1);
    uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)param_3;
    *(undefined4 *)((longlong)param_1 + 4) = uVar4;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
    uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
    uVar5 = *(undefined4 *)(param_3 + 3);
    uVar6 = *(undefined4 *)((longlong)param_3 + 0x1c);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
    *(undefined4 *)(param_1 + 3) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
    param_3[2] = 0;
    param_3[3] = 7;
    *(undefined2 *)param_3 = 0;
    plVar7 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      plVar7 = (longlong *)*param_1;
    }
    if (7 < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    FUN_140596110((longlong)plVar7 + uVar2 * 2,param_4,uVar3 * 2 + 2);
    param_1[2] = uVar1;
  }
  return param_1;
}



// ===== FUN_14006aaa0 @ 0x14006aaa0 [render] =====

undefined8 *
FUN_14006aaa0(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  puVar9 = (undefined8 *)FUN_140558c80(0x58);
  plVar7 = puVar9 + 2;
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined4 *)(puVar9 + 1) = 1;
  *(undefined4 *)((longlong)puVar9 + 0xc) = 1;
  *puVar9 = std::_Ref_count_obj2<class_ItemInstance>::vftable;
  uVar3 = *param_4;
  uVar4 = *param_3;
  uVar5 = *param_2;
  *plVar7 = (longlong)ItemInstance::vftable;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[9] = 0;
  puVar9[10] = 0;
  FUN_140359e80(plVar7,uVar5,uVar4,uVar3);
  if (*(int *)(puVar9 + 8) < 0) {
    *(undefined4 *)(puVar9 + 8) = 0;
  }
  *param_1 = plVar7;
  param_1[1] = puVar9;
  if ((plVar7 != (longlong *)0x0) && ((puVar9[4] == 0 || (*(int *)(puVar9[4] + 8) == 0)))) {
    LOCK();
    *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
    UNLOCK();
    plVar6 = (longlong *)param_1[1];
    plVar10 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar10 = plVar6;
      plVar11 = plVar7;
    }
    plVar7 = (longlong *)puVar9[4];
    puVar9[3] = plVar11;
    puVar9[4] = plVar10;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
  }
  return param_1;
}



// ===== FUN_14006b790 @ 0x14006b790 [render] =====

void FUN_14006b790(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_140055150(param_1 + 0x40);
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014006b7c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))();
      return;
    }
  }
  return;
}



// ===== FUN_14006c930 @ 0x14006c930 [storage,render] =====

void FUN_14006c930(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  wchar_t *pwVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  uVar1 = param_2[2];
  plVar5 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    plVar5 = (longlong *)*param_2;
  }
  uVar6 = uVar1;
  if (0xf < uVar1) {
    uVar6 = 0xf;
  }
  iVar2 = FUN_140054430(plVar5,L"descriptionName",uVar6);
  if ((iVar2 == 0) && (uVar1 == 0xf)) {
    param_2 = (longlong *)(param_1 + 0x10);
    if (param_2 != param_3) {
      plVar5 = param_3 + 2;
      if (7 < (ulonglong)param_3[3]) {
        param_3 = (longlong *)*param_3;
      }
      FUN_1400549d0(param_2,param_3,*plVar5);
    }
    if (7 < *(ulonglong *)(param_1 + 0x28)) {
      param_2 = (longlong *)*param_2;
    }
    pwVar4 = L"GameRuleDefinition: Adding parameter descriptionId=%ls\n";
  }
  else {
    uVar1 = param_2[2];
    plVar5 = param_2;
    if (7 < (ulonglong)param_2[3]) {
      plVar5 = (longlong *)*param_2;
    }
    uVar6 = uVar1;
    if (10 < uVar1) {
      uVar6 = 10;
    }
    iVar2 = FUN_140054430(plVar5,L"promptName",uVar6);
    if ((iVar2 == 0) && (uVar1 == 10)) {
      param_2 = (longlong *)(param_1 + 0x30);
      if (param_2 != param_3) {
        plVar5 = param_3 + 2;
        if (7 < (ulonglong)param_3[3]) {
          param_3 = (longlong *)*param_3;
        }
        FUN_1400549d0(param_2,param_3,*plVar5);
      }
      if (7 < *(ulonglong *)(param_1 + 0x48)) {
        param_2 = (longlong *)*param_2;
      }
      pwVar4 = L"GameRuleDefinition: Adding parameter m_promptId=%ls\n";
    }
    else {
      uVar1 = param_2[2];
      plVar5 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        plVar5 = (longlong *)*param_2;
      }
      uVar6 = uVar1;
      if (7 < uVar1) {
        uVar6 = 7;
      }
      iVar2 = FUN_140054430(plVar5,L"dataTag",uVar6);
      if ((iVar2 == 0) && (uVar1 == 7)) {
        uVar3 = FUN_14005e1a0(param_3);
        *(undefined4 *)(param_1 + 0x50) = uVar3;
                    /* WARNING: Subroutine does not return */
        FUN_14002fe50(&DAT_1407bb5d0,"GameRuleDefinition: Adding parameter m_4JDataValue=%d\n",uVar3
                     );
      }
      if (7 < (ulonglong)param_2[3]) {
        param_2 = (longlong *)*param_2;
      }
      pwVar4 = L"GameRuleDefinition: Attempted to add invalid attribute: %ls\n";
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140054650(pwVar4,param_2);
}



// ===== FUN_140070d40 @ 0x140070d40 [ui,render] =====

ulonglong FUN_140070d40(ulonglong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    return param_1;
  }
  param_1 = param_1 + (longlong)param_2 + -0x61c8864680b583eb;
  uVar1 = (param_1 >> 0x1e ^ param_1) * -0x40a7b892e31b1a47;
  uVar1 = (uVar1 >> 0x1b ^ uVar1) * -0x6b2fb644ecceee15;
  uVar2 = uVar1 >> 0x1f ^ uVar1 | 0x8000000000000000;
  uVar1 = uVar2 ^ 0x100000000000001;
  if (0xff < uVar2 + 0x1fff2badb7dbd0d2) {
    uVar1 = uVar2;
  }
  uVar2 = (longlong)param_2 + 0xd15ea5e000000001;
  if (0xff < uVar1 + 0x1fff2badb7dbd0d2) {
    uVar2 = uVar1;
  }
  return uVar2;
}



// ===== FUN_140070df0 @ 0x140070df0 [ui,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140070df0(void)

{
  char cVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD DVar4;
  errno_t eVar5;
  HMODULE pHVar6;
  _FILETIME _Var7;
  ulonglong uVar8;
  _FILETIME _Var9;
  ulonglong uVar10;
  _FILETIME _Var11;
  undefined1 auStack_158 [32];
  _FILETIME local_138;
  LARGE_INTEGER local_130;
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_1407502c0 ^ (ulonglong)auStack_158;
  if (DAT_1407c16a8 == '\0') {
    local_138.dwLowDateTime = 0;
    local_138.dwHighDateTime = 0;
    cVar1 = FUN_140070b60(&local_138);
    _Var7 = local_138;
    if (cVar1 == '\0') {
      local_138.dwLowDateTime = 0;
      local_138.dwHighDateTime = 0;
      GetSystemTimeAsFileTime(&local_138);
      _Var7 = local_138;
      local_130.QuadPart = 0;
      QueryPerformanceCounter(&local_130);
      uVar10 = (ulonglong)_Var7 ^ local_130.QuadPart;
      DVar2 = GetCurrentProcessId();
      DVar3 = GetCurrentThreadId();
      DVar4 = GetTickCount();
      pHVar6 = GetModuleHandleA((LPCSTR)0x0);
      uVar10 = (ulonglong)pHVar6 ^
               (ulonglong)(DVar4 ^ DVar3) ^ (ulonglong)DVar2 << 0x20 ^ uVar10 ^
               (ulonglong)&local_130;
      _Var11.dwLowDateTime = 1;
      _Var11.dwHighDateTime = 0xd15ea5e0;
      uVar8 = uVar10 + 0x9e3779b97f4a7c15;
      uVar10 = uVar10 + 0x3ead971df807e044;
      uVar8 = (uVar8 >> 0x1e ^ uVar8) * -0x40a7b892e31b1a47;
      uVar8 = (uVar8 >> 0x1b ^ uVar8) * -0x6b2fb644ecceee15;
      uVar10 = (uVar10 >> 0x1e ^ uVar10) * -0x40a7b892e31b1a47;
      uVar10 = (uVar10 >> 0x1b ^ uVar10) * -0x6b2fb644ecceee15;
      _Var9 = (_FILETIME)
              ((uVar10 ^ uVar8) >> 0x1f ^ uVar10 ^ uVar8 ^ 0xf4b2d6c1a93e705 | 0x8000000000000000);
      _Var7 = (_FILETIME)((ulonglong)_Var9 ^ 0x100000000000001);
      if (0xff < (longlong)_Var9 + 0x1fff2badb7dbd0d2U) {
        _Var7 = _Var9;
      }
      if (0xff < (longlong)_Var7 + 0x1fff2badb7dbd0d2U) {
        _Var11 = _Var7;
      }
      DAT_1407c16a0 = _Var11;
      FUN_140595d50(local_128,0,0x104);
      cVar1 = FUN_140070aa0(local_128);
      _Var7 = DAT_1407c16a0;
      if (cVar1 != '\0') {
        local_138.dwLowDateTime = 0;
        local_138.dwHighDateTime = 0;
        eVar5 = fopen_s((FILE **)&local_138,local_128,"wb");
        _Var7 = DAT_1407c16a0;
        if ((eVar5 == 0) && (local_138 != (_FILETIME)0x0)) {
          FUN_140073da0(local_138,"0x%016llX\n",_Var11);
          FUN_14056742c(local_138);
          _Var7 = DAT_1407c16a0;
        }
      }
    }
    DAT_1407c16a8 = 1;
    DAT_1407c16a0 = _Var7;
    return (ulonglong)_Var7;
  }
  return (ulonglong)DAT_1407c16a0;
}



// ===== FUN_140089cb0 @ 0x140089cb0 [storage,ui,render] =====

undefined8 * FUN_140089cb0(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar7 = FUN_140558c80(0x88);
  uVar7 = FUN_1400898e0(uVar7,param_2);
  puVar8 = (undefined8 *)FUN_14008a140(local_18,uVar7);
  uVar7 = *puVar8;
  uVar4 = puVar8[1];
  *puVar8 = 0;
  puVar8[1] = 0;
  *param_1 = uVar7;
  plVar5 = (longlong *)param_1[1];
  param_1[1] = uVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_10 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10);
      }
    }
  }
  return param_1;
}



// ===== FUN_1400a4d10 @ 0x1400a4d10 [render] =====

/* WARNING: Removing unreachable block (ram,0x0001400a4e7c) */
/* WARNING: Removing unreachable block (ram,0x0001400a4ec1) */
/* WARNING: Removing unreachable block (ram,0x0001400a4ed9) */
/* WARNING: Removing unreachable block (ram,0x0001400a5381) */
/* WARNING: Removing unreachable block (ram,0x0001400a4ef2) */
/* WARNING: Removing unreachable block (ram,0x0001400a4ef7) */

void FUN_1400a4d10(undefined8 *param_1,undefined8 *****param_2,char param_3,char param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  ulonglong *puVar3;
  longlong *plVar4;
  undefined8 *****pppppuVar5;
  short sVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStackY_1b8 [32];
  undefined8 ****local_170;
  ulonglong uStack_168;
  longlong local_160;
  longlong lStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 ****local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  ulonglong uStack_118;
  undefined8 ****local_110;
  undefined8 uStack_108;
  ulonglong local_100;
  ulonglong uStack_f8;
  undefined8 ****local_f0;
  ulonglong uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  longlong local_d0 [4];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  ulonglong local_70;
  
  local_70 = DAT_1407502c0 ^ (ulonglong)auStackY_1b8;
  uVar10 = 0;
  uStack_148 = 0;
  local_140 = 0;
  local_138 = 7;
  local_150 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 7;
  local_110 = (undefined8 *****)0x0;
  if (&local_110 != param_2) {
    pppppuVar5 = param_2 + 2;
    if ((undefined8 ****)0x7 < param_2[3]) {
      param_2 = (undefined8 *****)*param_2;
    }
    FUN_1400549d0(&local_110,param_2,*pppppuVar5);
  }
  if (&local_150 != param_5) {
    puVar1 = param_5 + 2;
    if (7 < (ulonglong)param_5[3]) {
      param_5 = (undefined8 *)*param_5;
    }
    FUN_1400549d0(&local_150,param_5,*puVar1);
  }
  if (local_140 == 0) {
    if (param_4 == '\0') {
      uVar8 = 7;
      pwVar7 = L"Common/";
    }
    else {
      uVar8 = 0x17;
      pwVar7 = L"Common\\res\\TitleUpdate\\";
    }
    FUN_1400549d0(&local_150,pwVar7,uVar8);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uStack_168 = 0;
  local_160 = 0;
  lStack_158 = 7;
  local_170 = (undefined8 ****)0x0;
  local_130 = (undefined8 *****)0x0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  FUN_140054cf0(&local_130,&PTR_140610690,0);
  local_d0[0] = 0;
  local_d0[1] = 0;
  local_d0[2] = 0;
  local_d0[3] = 0;
  if (param_3 == '\0') {
    uVar9 = local_100 - 4;
    if (local_100 < local_100 - 4) {
      uVar9 = local_100;
    }
    pppppuVar5 = &local_110;
    if (7 < uStack_f8) {
      pppppuVar5 = (undefined8 *****)local_110;
    }
    FUN_140054cf0(local_d0,pppppuVar5,uVar9);
    if (0x7ffffffffffffffeU - local_140 < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_140054e40();
    }
    FUN_140048da0(local_90);
    FUN_140068410(local_b0);
    pppppuVar5 = &local_130;
    if (7 < uStack_118) {
      pppppuVar5 = (undefined8 *****)local_130;
    }
    puVar3 = (ulonglong *)FUN_140048d20(local_b0,pppppuVar5,local_120);
    local_f0 = (undefined8 ****)*puVar3;
    uStack_e8 = puVar3[1];
    local_e0 = puVar3[2];
    uStack_d8 = puVar3[3];
    puVar3[2] = 0;
    puVar3[3] = 7;
    *(undefined2 *)puVar3 = 0;
    plVar4 = (longlong *)FUN_140048d20(&local_f0,L".png");
    local_170 = (undefined8 ****)*plVar4;
    uStack_168 = plVar4[1];
    uVar11 = (undefined4)plVar4[2];
    uVar12 = *(undefined4 *)((longlong)plVar4 + 0x14);
    local_160 = plVar4[2];
    uVar13 = (undefined4)plVar4[3];
    uVar14 = *(undefined4 *)((longlong)plVar4 + 0x1c);
    lStack_158 = plVar4[3];
    plVar4[2] = 0;
    plVar4[3] = 7;
    *(undefined2 *)plVar4 = 0;
    if (7 < uStack_d8) {
      if ((0xfff < uStack_d8 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_f0 + (-8 - (longlong)local_f0[-1])))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
    local_e0 = 0;
    uStack_d8 = 7;
    local_f0 = (undefined8 ****)((ulonglong)local_f0 & 0xffffffffffff0000);
    FUN_140055150(local_b0);
    FUN_140055150(local_90);
    FUN_140055150(local_d0);
  }
  else {
    pppppuVar5 = &local_110;
    if (7 < uStack_f8) {
      pppppuVar5 = (undefined8 *****)local_110;
    }
    FUN_140054cf0(local_d0,pppppuVar5,local_100);
    if (0x7ffffffffffffffeU - local_140 < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_140054e40();
    }
    FUN_140048da0(local_b0);
    FUN_140068410(&local_f0);
    local_170 = local_f0;
    uStack_168 = uStack_e8;
    uVar11 = (undefined4)local_e0;
    uVar12 = local_e0._4_4_;
    uVar13 = (undefined4)uStack_d8;
    uVar14 = uStack_d8._4_4_;
    local_160 = local_e0;
    lStack_158 = uStack_d8;
    local_e0 = 0;
    uStack_d8 = 7;
    local_f0 = (undefined8 ****)((ulonglong)local_f0 & 0xffffffffffff0000);
    FUN_140055150(&local_f0);
    FUN_140055150(local_b0);
    if (7 < (ulonglong)local_d0[3]) {
      if ((0xfff < local_d0[3] * 2 + 2U) &&
         (0x1f < (local_d0[0] - *(longlong *)(local_d0[0] + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
  }
  auVar2._4_4_ = uVar12;
  auVar2._0_4_ = uVar11;
  auVar2._8_4_ = uVar13;
  auVar2._12_4_ = uVar14;
  uVar9 = CONCAT44(uVar12,uVar11);
  if (uVar9 != 0) {
    do {
      pppppuVar5 = &local_170;
      if (7 < auVar2._8_8_) {
        pppppuVar5 = (undefined8 *****)local_170;
      }
      sVar6 = *(short *)((longlong)pppppuVar5 + uVar10 * 2);
      if (sVar6 == 0x2f) {
        sVar6 = 0x5c;
      }
      (&DAT_1407c1d60)[uVar10] = (char)sVar6;
      uVar10 = (ulonglong)((int)uVar10 + 1);
    } while (uVar10 < uVar9);
  }
  if (0xff < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_140559180();
  }
  (&DAT_1407c1d60)[uVar9] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"\n--- Loading TEXTURE - %s\n\n",&DAT_1407c1d60);
}



// ===== FUN_1400a5bb0 @ 0x1400a5bb0 [render] =====

void FUN_1400a5bb0(longlong param_1,int param_2,int param_3,int param_4,int param_5,
                  longlong *param_6,undefined8 param_7,int param_8,int param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar7 = *(int *)(param_1 + 0x50) >> ((byte)param_9 & 0x1f);
  if (0 < param_5) {
    lVar3 = (longlong)(iVar7 * param_3);
    do {
      if (0 < (longlong)param_4) {
        uVar4 = iVar6 * param_8;
        lVar1 = *param_6;
        lVar2 = (param_2 + lVar3) * 4;
        lVar5 = (longlong)param_4;
        do {
          *(undefined4 *)(lVar1 + (ulonglong)uVar4 * 4) =
               *(undefined4 *)(lVar2 + *(longlong *)(param_1 + (longlong)param_9 * 8));
          uVar4 = uVar4 + 1;
          lVar5 = lVar5 + -1;
          lVar2 = lVar2 + 4;
        } while (lVar5 != 0);
      }
      iVar6 = iVar6 + 1;
      lVar3 = lVar3 + iVar7;
    } while (iVar6 < param_5);
  }
  return;
}



// ===== FUN_1400a5c90 @ 0x1400a5c90 [render] =====

undefined8 * FUN_1400a5c90(longlong param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  undefined1 auVar1 [16];
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  byte bVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined8 local_48;
  int iStack_40;
  
  puVar4 = (undefined8 *)FUN_140558c80(0x58);
  local_48 = thunk_FUN_140558c80();
  *puVar4 = local_48;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  *(int *)(puVar4 + 10) = param_4;
  *(int *)((longlong)puVar4 + 0x54) = param_5;
  iStack_40 = param_4 * param_5;
  FUN_1400a5bb0(param_1,0,param_3,param_4,param_5,&local_48);
  bVar12 = 1;
  plVar7 = (longlong *)(param_1 + 8);
  if (*plVar7 != 0) {
    lVar13 = 8;
    do {
      iVar14 = param_4 >> (bVar12 & 0x1f);
      iVar15 = param_5 >> (bVar12 & 0x1f);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (longlong)(iVar15 * iVar14);
      uVar5 = SUB168(ZEXT816(4) * auVar1,0);
      if (SUB168(ZEXT816(4) * auVar1,8) != 0) {
        uVar5 = 0xffffffffffffffff;
      }
      lVar6 = thunk_FUN_140558c80(uVar5);
      *(longlong *)(lVar13 + (longlong)puVar4) = lVar6;
      iVar2 = *(int *)(param_1 + 0x50) >> (bVar12 & 0x1f);
      iVar11 = 0;
      if (0 < iVar15) {
        lVar8 = (longlong)(iVar2 * (param_3 >> (bVar12 & 0x1f)));
        do {
          if (0 < iVar14) {
            uVar3 = iVar11 * iVar14;
            lVar9 = lVar8 * 4;
            lVar10 = (longlong)iVar14;
            do {
              *(undefined4 *)(lVar6 + (ulonglong)uVar3 * 4) = *(undefined4 *)(lVar9 + *plVar7);
              uVar3 = uVar3 + 1;
              lVar9 = lVar9 + 4;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
          iVar11 = iVar11 + 1;
          lVar8 = lVar8 + iVar2;
        } while (iVar11 < iVar15);
      }
      bVar12 = bVar12 + 1;
      lVar13 = lVar13 + 8;
      plVar7 = (longlong *)(param_1 + lVar13);
    } while (*plVar7 != 0);
  }
  return puVar4;
}



// ===== FUN_1400aa580 @ 0x1400aa580 [render] =====

undefined8 * FUN_1400aa580(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140558c80(0x30);
  *(undefined4 *)(puVar1 + 1) = param_1;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 2) = param_1;
  *puVar1 = ByteBuffer::vftable;
  *(undefined1 *)(puVar1 + 3) = 0;
  uVar2 = thunk_FUN_140558c80(param_1);
  puVar1[4] = uVar2;
  FUN_140595d50(uVar2,0,param_1);
  *(undefined4 *)(puVar1 + 5) = 0;
  return puVar1;
}



// ===== FUN_1400abcd0 @ 0x1400abcd0 [ui,render] =====

undefined8 FUN_1400abcd0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)param_2;
  *(int *)(param_1 + 0x1a) = param_2;
  plVar1 = param_1 + (lVar3 + 7) * 2;
  if (*plVar1 != 0) {
    if (param_1[lVar3 + 0x16] != 0) {
      *param_1 = param_1[lVar3 + 0x16];
      FUN_140045590(param_1 + 10,plVar1);
      FUN_140045590(param_1 + 0x29,plVar1);
      *(longlong *)(param_1[0x3a] + 0x10) = param_1[lVar3 + 0x1b];
      if (*(int *)(*plVar1 + 0x184) == -1) {
        lVar3 = *(longlong *)(param_1[0xc] + 8);
      }
      else if (*(int *)(*plVar1 + 0x184) == 1) {
        lVar3 = ((longlong *)param_1[0xc])[2];
      }
      else {
        lVar3 = *(longlong *)param_1[0xc];
      }
      param_1[8] = lVar3;
      plVar1 = (longlong *)param_1[0x2d];
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        plVar1 = plVar1 + 1;
        lVar3 = 3;
        do {
          lVar2 = 5;
          do {
            lVar4 = 2;
            do {
              FUN_14010c3e0(plVar1);
              plVar1 = plVar1 + 5;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
            lVar2 = lVar2 + -1;
          } while (lVar2 != 0);
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1400ac120 @ 0x1400ac120 [render] =====

void FUN_1400ac120(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_2;
  lVar1 = *(longlong *)(param_1 + 0x120 + lVar4 * 8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 8) == '\0')) {
    *(undefined1 *)(lVar1 + 8) = 1;
    FUN_1400f5690(lVar1 + 0x60);
    FUN_1400f55e0(lVar1 + 0xa0);
    lVar2 = *(longlong *)(lVar1 + 0x10);
    SetEvent(*(HANDLE *)(*(longlong *)(lVar2 + 0x100) + 8));
    SetEvent(*(HANDLE *)(*(longlong *)(lVar2 + 0x108) + 8));
    FUN_140365fb0(*(undefined8 *)(lVar1 + 0x10),2);
  }
  *(undefined1 *)(param_1 + 0x108 + lVar4) = 0;
  *(undefined8 *)(param_1 + 0x120 + lVar4 * 8) = 0;
  cVar3 = (**(code **)(*DAT_140790368 + 0x40))(DAT_140790368,param_2);
  if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"Adding temp local player on pad %d\n",param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"g_NetworkManager.AddLocalPlayerByUserIndex failed\n");
}



// ===== FUN_1400ad160 @ 0x1400ad160 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1400ad160(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  undefined2 uVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  DWORD DVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  uint uVar17;
  longlong lVar18;
  short sVar19;
  uint uVar20;
  ulonglong uVar21;
  LARGE_INTEGER LVar22;
  char *pcVar23;
  short *psVar24;
  short *psVar25;
  ulonglong uVar26;
  LARGE_INTEGER LVar27;
  bool bVar28;
  byte bVar29;
  undefined4 uVar30;
  float fVar31;
  undefined1 auStackY_178 [32];
  uint local_148;
  longlong local_130;
  longlong lStack_128;
  longlong local_120;
  ulonglong uStack_118;
  LARGE_INTEGER local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  LARGE_INTEGER local_90;
  longlong *plStack_88;
  short local_5a [5];
  ulonglong local_50;
  
  local_50 = DAT_1407502c0 ^ (ulonglong)auStackY_178;
  uVar17 = 0;
  if (DAT_1407c1750 == 0) {
    if (DAT_1407c1b00 == 0) {
      QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_1407c1b00);
    }
    QueryPerformanceCounter(&local_110);
    DAT_1407c1750 = (longlong)(((double)local_110.QuadPart * 1000000000.0) / (double)DAT_1407c1b00);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2e8));
  if (*(char *)(param_1 + 0x2b4) != '\0') {
    if (*(char *)(param_1 + 0x30) != '\0') {
      *(undefined1 *)(param_1 + 0x30) = 0;
      FUN_140136e50(*(undefined8 *)(param_1 + 0x1a8));
    }
    if ((((*(longlong *)(param_1 + 0x40) != 0) && (DAT_1407baaa8 != '\0')) &&
        (cVar7 = (**(code **)(*DAT_140790368 + 0x80))(), cVar7 == '\x01')) &&
       ((cVar7 = FUN_1400025cc(&DAT_140784008), cVar7 == '\0' && (DAT_1407bb7dc == 0)))) {
      if (((*(char *)(*(longlong *)
                       ((longlong)&DAT_1407bda58 + (ulonglong)(-(uint)(DAT_1407bb76c != '\0') & 8))
                     + 0x75) == '\0') && (*(char *)(DAT_1407bda58 + 0x77) == '\0')) &&
         ((DAT_1407bb76c == '\0' || (*(char *)(DAT_1407bda60 + 0x77) == '\0')))) {
        uVar4 = *(undefined2 *)(DAT_1407bb7b0 + 6);
        lVar10 = *(longlong *)(DAT_140790e60 + 0x238);
        plVar13 = *(longlong **)(lVar10 + 0xb8);
        if (plVar13 != DAT_1407915a8) {
          cVar7 = (**(code **)*plVar13)();
          plVar13 = DAT_1407915a8;
          if (cVar7 != '\0') {
            plVar13 = *(longlong **)(lVar10 + 0xb8);
          }
          lVar10 = (**(code **)(*plVar13 + 0x128))();
          if (lVar10 != 0) {
            local_130 = 0;
            lStack_128 = 0;
            local_120 = 0;
            uStack_118 = 0;
            FUN_140054cf0(&local_130,&PTR_140610690,0);
            FUN_140055150(&local_130);
          }
        }
        if (((byte)((ushort)uVar4 >> 0xb) & 0xf) != 0) {
          DVar8 = GetTickCount();
          if (DAT_1407bba98 < DVar8) {
            plVar13 = *(longlong **)(DAT_1407bda58 + 0x58);
            if (plVar13 != (longlong *)0x0) {
              *(undefined1 *)((longlong)plVar13 + 0x19a) = 0;
              cVar7 = FUN_140264ab0(&DAT_1407bc300);
              if ((cVar7 == '\0') &&
                 (cVar7 = (**(code **)(*plVar13 + 0x18))(plVar13), cVar7 != '\0')) {
                FUN_14027fe70(plVar13 + 0x3c,0);
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_14002fe50(&DAT_1407bb5d0,"+++++++++++\n");
          }
          DVar8 = GetTickCount();
          uVar20 = (DAT_1407bba98 - DVar8) / 1000;
          if (uVar20 < 6) {
            plVar13 = *(longlong **)(DAT_1407bda58 + 0x58);
            if (plVar13 != (longlong *)0x0) {
              *(undefined1 *)((longlong)plVar13 + 0x19a) = 1;
              cVar7 = FUN_140264ab0(&DAT_1407bc300);
              if ((cVar7 == '\0') &&
                 (cVar7 = (**(code **)(*plVar13 + 0x18))(plVar13), cVar7 != '\0')) {
                FUN_14027fe70(plVar13 + 0x3c,1);
              }
            }
            FUN_140268940(&DAT_1407bc300,uVar20);
          }
        }
      }
      else {
        plVar13 = *(longlong **)(DAT_1407bda58 + 0x58);
        if (plVar13 != (longlong *)0x0) {
          *(undefined1 *)((longlong)plVar13 + 0x19a) = 0;
          cVar7 = FUN_140264ab0(&DAT_1407bc300);
          if ((cVar7 == '\0') && (cVar7 = (**(code **)(*plVar13 + 0x18))(plVar13), cVar7 != '\0')) {
            FUN_14027fe70(plVar13 + 0x3c,0);
          }
        }
      }
    }
    if (((*(longlong *)(param_1 + 0x70) != 0) && (DAT_1407bba92 == '\0')) &&
       (*(char *)(DAT_140790e60 + 0x310) == '\0')) {
      DAT_1407bba92 = '\x01';
    }
    if (((*(longlong *)(param_1 + 0x80) != 0) && (DAT_1407bba93 == '\0')) &&
       (*(char *)(DAT_140790e60 + 0x310) == '\0')) {
      DAT_1407bba93 = '\x01';
    }
    if (((*(longlong *)(param_1 + 0x90) != 0) && (DAT_1407bba94 == '\0')) &&
       (*(char *)(DAT_140790e60 + 0x310) == '\0')) {
      DAT_1407bba94 = '\x01';
    }
    if (((*(longlong *)(param_1 + 0xa0) != 0) && (DAT_1407bba95 == '\0')) &&
       (*(char *)(DAT_140790e60 + 0x310) == '\0')) {
      DAT_1407bba95 = '\x01';
    }
    if (((DAT_1407bb9f1 != '\0') && (DAT_1407bb9f2 == '\0')) && (DAT_1407bb608 != '\0')) {
      FUN_140057cc0(&DAT_1407bb5f0);
    }
    if (((*(longlong *)(param_1 + 0x40) != 0) && (DAT_14076f00c != '\0')) &&
       (cVar7 = (**(code **)(*DAT_140790368 + 0xb8))(DAT_140790368,1), cVar7 != '\0')) {
      if (DAT_14076f008 == 0) {
        DAT_14076f00c = '\0';
        uVar20 = uVar17;
        do {
          cVar7 = FUN_140001090(&DAT_140783060,uVar17);
          if (((cVar7 != '\0') || (uVar17 == 0)) ||
             (cVar7 = FUN_140001090(&DAT_140783060,uVar17), cVar7 != '\0')) {
            uVar20 = uVar20 + 1;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < 4);
        if (1 < uVar20) {
          if (((*(longlong *)(param_1 + 0x70) == 0) &&
              (cVar7 = FUN_140001090(&DAT_140783060,0), cVar7 != '\0')) &&
             ((DAT_1407bd904 & 1) == 0)) {
            DAT_1407bd904 = DAT_1407bd904 | 1;
            if (*(longlong *)(DAT_1407bda58 + 0x58) != 0) {
              FUN_140274a10(*(longlong *)(DAT_1407bda58 + 0x58),0,1);
            }
          }
          if (((*(longlong *)(param_1 + 0x80) == 0) &&
              (cVar7 = FUN_140001090(&DAT_140783060,1), cVar7 != '\0')) &&
             ((DAT_1407bd904 & 2) == 0)) {
            DAT_1407bd904 = DAT_1407bd904 | 2;
            if (*(longlong *)(DAT_1407bda58 + 0x58) != 0) {
              FUN_140274a10(*(longlong *)(DAT_1407bda58 + 0x58),1,1);
            }
          }
          if (((*(longlong *)(param_1 + 0x90) == 0) &&
              (cVar7 = FUN_140001090(&DAT_140783060,2), cVar7 != '\0')) &&
             ((DAT_1407bd904 & 4) == 0)) {
            DAT_1407bd904 = DAT_1407bd904 | 4;
            if (*(longlong *)(DAT_1407bda58 + 0x58) != 0) {
              FUN_140274a10(*(longlong *)(DAT_1407bda58 + 0x58),2,1);
            }
          }
          if (((*(longlong *)(param_1 + 0xa0) == 0) &&
              (cVar7 = FUN_140001090(&DAT_140783060,3), cVar7 != '\0')) &&
             ((DAT_1407bd904 & 8) == 0)) {
            DAT_1407bd904 = DAT_1407bd904 | 8;
            if (*(longlong *)(DAT_1407bda58 + 0x58) != 0) {
              FUN_140274a10(*(longlong *)(DAT_1407bda58 + 0x58),3,1);
            }
          }
        }
      }
      else {
        DAT_14076f008 = DAT_14076f008 + -1;
      }
    }
    uVar21 = 0;
    local_148 = 1;
    local_110.QuadPart = 7;
    uVar26 = uVar21;
    do {
      LVar22 = local_110;
      uVar17 = 0;
      uVar20 = (uint)uVar21;
      if (*(longlong *)(param_1 + local_110.QuadPart * 0x10) == 0) {
        local_110.QuadPart = 0;
        uStack_108 = 0;
        sVar19 = 0;
        iVar9 = XInputGetState(uVar21,&local_110);
        if (iVar9 == 0) {
          sVar19 = local_110.s.HighPart._0_2_;
          if (((local_110.QuadPart & 0x1000000000U) == 0) ||
             ((*(byte *)(uVar26 * 2 + 0x1407c1748) & 0x10) != 0)) {
            iVar9 = *(int *)(uVar26 * 4 + 0x1407c1738);
            if (0 < iVar9) {
              *(int *)(uVar26 * 4 + 0x1407c1738) = iVar9 + -1;
            }
            *(undefined2 *)(uVar26 * 2 + 0x1407c1748) = local_110.s.HighPart._0_2_;
          }
          else {
            *(undefined4 *)(uVar26 * 4 + 0x1407c1738) = 0x78;
            *(undefined2 *)(uVar26 * 2 + 0x1407c1748) = local_110.s.HighPart._0_2_;
          }
        }
        iVar9 = *(int *)(uVar26 * 4 + 0x1407c1738);
        if (*(char *)(param_1 + 0x1a1) == '\0') {
          lVar10 = DAT_1407bda58;
          if (DAT_1407bb76c != '\0') {
            lVar10 = DAT_1407bda60;
          }
          if (((*(char *)(lVar10 + 0x78) == '\0') &&
              (cVar7 = (**(code **)(*DAT_140790368 + 0xb8))(DAT_140790368,1), cVar7 != '\0')) &&
             ((sVar19 != 0 && (DAT_1407aaa23 != '\0')))) {
            if ((DAT_1407bd904 & local_148) == 0) {
              DAT_1407bd904 = DAT_1407bd904 | 1 << (uVar20 & 0x1f);
              if (*(longlong *)(DAT_1407bda58 + 0x58) != 0) {
                FUN_140274a10(*(longlong *)(DAT_1407bda58 + 0x58),uVar21,1);
              }
            }
            else if (0 < iVar9) {
              if (((uVar20 != 0) && (cVar7 = FUN_140001090(&DAT_140783060,uVar21), cVar7 == '\0'))
                 && ((cVar7 = (**(code **)(*DAT_140790368 + 0xf0))(), cVar7 == '\0' ||
                     (cVar7 = FUN_140001090(&DAT_140783060,uVar21), cVar7 == '\0')))) {
LAB_1400ae1dc:
                    /* WARNING: Subroutine does not return */
                FUN_14002fe50(&DAT_1407bb5d0,"Bringing up the sign in ui\n");
              }
              uVar30 = (**(code **)(*DAT_140790368 + 0xf0))();
              if (*(char *)(*(longlong *)(param_1 + 0x40) + 0x268) == '\0') {
                lVar10 = uVar26 + 7;
                lVar18 = *(longlong *)(param_1 + 8 + lVar10 * 0x10);
                if (lVar18 != 0) {
                  LOCK();
                  piVar1 = (int *)(lVar18 + 8);
                  *piVar1 = *piVar1 + 1;
                  UNLOCK();
                }
                local_90 = (LARGE_INTEGER)((LARGE_INTEGER *)(param_1 + lVar10 * 0x10))->QuadPart;
                plVar13 = *(longlong **)(param_1 + 8 + lVar10 * 0x10);
                plStack_88 = plVar13;
                if ((longlong *)local_90.QuadPart == (longlong *)0x0) {
                  lVar10 = FUN_1402fc1b0(uVar30,uVar21);
                  local_130 = 0;
                  lStack_128 = 0;
                  local_120 = 0;
                  uStack_118 = 0;
                  lVar18 = -1;
                  do {
                    lVar18 = lVar18 + 1;
                  } while (*(char *)(lVar10 + lVar18) != '\0');
                  FUN_1400548d0(&local_130,lVar10);
                  puVar14 = (undefined8 *)FUN_140315be0(local_d0,&local_130);
                  if (7 < (ulonglong)puVar14[3]) {
                    puVar14 = (undefined8 *)*puVar14;
                  }
                  local_f0 = 0;
                  uStack_e8 = 0;
                  local_e0 = 0;
                  uStack_d8 = 0;
                  lVar10 = -1;
                  do {
                    lVar10 = lVar10 + 1;
                  } while (*(short *)((longlong)puVar14 + lVar10 * 2) != 0);
                  FUN_140054cf0(&local_f0,puVar14);
                  local_90.QuadPart = 0;
                  plStack_88 = (longlong *)0x0;
                  if (plVar13 != (longlong *)0x0) {
                    LOCK();
                    plVar2 = plVar13 + 1;
                    lVar10 = *plVar2;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)lVar10 == 1) {
                      (**(code **)*plVar13)(plVar13);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar13 + 0xc);
                      iVar9 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar9 == 1) {
                        (**(code **)(*plVar13 + 8))(plVar13);
                      }
                    }
                  }
                  FUN_140055150(&local_f0);
                  FUN_140055150(local_d0);
                  FUN_140054b60(&local_130);
                }
                plVar13 = plStack_88;
                if (plStack_88 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = plStack_88 + 1;
                  lVar10 = *plVar2;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*plStack_88)(plStack_88);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar9 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar9 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13);
                    }
                  }
                }
              }
              else {
                cVar7 = FUN_1400ac120(param_1,uVar21);
                if (cVar7 == '\0') goto LAB_1400ae1dc;
              }
            }
          }
        }
      }
      else {
        cVar7 = FUN_14000100c(&DAT_140783060,uVar21,0x16);
        if (cVar7 != '\0') {
          puVar3 = (ulonglong *)(*(longlong *)(param_1 + (uVar26 + 7) * 0x10) + 0x5a0);
          *puVar3 = *puVar3 | 0x400000;
        }
        lVar10 = uVar26 + 7;
        cVar7 = FUN_14000100c(&DAT_140783060,uVar21,0x1f);
        if (cVar7 != '\0') {
          puVar3 = (ulonglong *)(*(longlong *)(param_1 + lVar10 * 0x10) + 0x5a0);
          *puVar3 = *puVar3 | 0x80000000;
        }
        cVar7 = FUN_14000100c(&DAT_140783060,uVar21,0x23);
        if (cVar7 != '\0') {
          puVar3 = (ulonglong *)(*(longlong *)(param_1 + lVar10 * 0x10) + 0x5a0);
          *puVar3 = *puVar3 | 0x800000000;
        }
        cVar7 = FUN_14000100c(&DAT_140783060,uVar21,0x20);
        if (cVar7 != '\0') {
          puVar3 = (ulonglong *)(*(longlong *)(param_1 + lVar10 * 0x10) + 0x5a0);
          *puVar3 = *puVar3 | 0x100000000;
        }
        cVar7 = FUN_14000100c(&DAT_140783060,uVar21,0x27);
        if (cVar7 != '\0') {
          puVar3 = (ulonglong *)(*(longlong *)(param_1 + lVar10 * 0x10) + 0x5a0);
          *puVar3 = *puVar3 | 0x8000000000;
        }
        cVar7 = FUN_14000100c(&DAT_140783060,uVar21,0x24);
        if (cVar7 != '\0') {
          puVar3 = (ulonglong *)(*(longlong *)(param_1 + (uVar26 + 7) * 0x10) + 0x5a0);
          *puVar3 = *puVar3 | 0x1000000000;
                    /* WARNING: Subroutine does not return */
          FUN_14002fe50(&DAT_1407bb5d0,"PAUSE PRESSED - ipad = %d, Storing press\n",uVar21);
        }
        cVar7 = FUN_14000100c(&DAT_140783060,uVar21,0x25);
        if (cVar7 != '\0') {
          puVar3 = (ulonglong *)(*(longlong *)(param_1 + (uVar26 + 7) * 0x10) + 0x5a0);
          *puVar3 = *puVar3 | 0x2000000000;
        }
        lVar10 = uVar26 + 7;
        if (*(char *)(*(longlong *)(param_1 + lVar10 * 0x10) + 0x4bd) == '\0') {
          cVar7 = FUN_14000100c(&DAT_140783060,uVar21,0x26);
        }
        else {
          cVar7 = FUN_140001000();
        }
        if (cVar7 != '\0') {
          puVar3 = (ulonglong *)(*(longlong *)(param_1 + lVar10 * 0x10) + 0x5a0);
          *puVar3 = *puVar3 | 0x4000000000;
        }
        cVar7 = FUN_14000100c(&DAT_140783060,uVar21,0x28);
        if (cVar7 != '\0') {
          puVar3 = (ulonglong *)(*(longlong *)(param_1 + lVar10 * 0x10) + 0x5a0);
          *puVar3 = *puVar3 | 0x10000000000;
        }
        cVar7 = FUN_14000100c(&DAT_140783060,uVar21,0x29);
        if (cVar7 != '\0') {
          puVar3 = (ulonglong *)(*(longlong *)(param_1 + lVar10 * 0x10) + 0x5a0);
          *puVar3 = *puVar3 | 0x20000000000;
        }
        if (uVar20 == 0) {
          if (DAT_1407aaa25 != (char)uVar21) {
            if (DAT_1407aa9fc != (char)uVar21) {
              puVar3 = (ulonglong *)(*(longlong *)(param_1 + (uVar26 + 7) * 0x10) + 0x5a0);
              *puVar3 = *puVar3 | 0x100000000;
            }
            if (DAT_1407aa9fd != '\0') {
              puVar3 = (ulonglong *)(*(longlong *)(param_1 + (uVar26 + 7) * 0x10) + 0x5a0);
              *puVar3 = *puVar3 | 0x80000000;
            }
            cVar7 = FUN_140267890(&DAT_1407bc300,0,8);
            if (((cVar7 == '\0') && (cVar7 = FUN_140267890(&DAT_1407bc300,0,9), cVar7 == '\0')) &&
               ((cVar7 = FUN_140267890(&DAT_1407bc300,0,0xc), cVar7 == '\0' &&
                ((((cVar7 = FUN_140267890(&DAT_1407bc300,0,0x31), cVar7 == '\0' &&
                   (cVar7 = FUN_140267890(&DAT_1407bc300,0,0x32), cVar7 == '\0')) &&
                  (cVar7 = FUN_140267890(&DAT_1407bc300,0,0x35), cVar7 == '\0')) &&
                 (cVar7 = FUN_140267890(&DAT_1407bc300,0,0x36), cVar7 == '\0')))))) {
              if (DAT_1407bb76c == '\0') {
                puVar14 = &DAT_1407bda58;
              }
              else {
                puVar14 = &DAT_1407bda60 + uVar26;
              }
              plVar13 = (longlong *)*puVar14;
              do {
                plVar13 = plVar13 + 1;
                lVar10 = *plVar13;
                iVar9 = (int)(*(longlong *)(lVar10 + 0x10) - *(longlong *)(lVar10 + 8) >> 3) + -1;
                lVar18 = (longlong)iVar9;
                if (-1 < iVar9) {
                  do {
                    iVar9 = (**(code **)(**(longlong **)(*(longlong *)(lVar10 + 8) + lVar18 * 8) +
                                        0x50))();
                    if (iVar9 == 0x38) goto LAB_1400adbf1;
                    lVar18 = lVar18 + -1;
                  } while (-1 < lVar18);
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < 8);
              if (DAT_1407bb76c == '\0') {
                puVar14 = &DAT_1407bda58;
              }
              else {
                puVar14 = &DAT_1407bda60 + uVar26;
              }
              uVar17 = 0;
              plVar13 = (longlong *)*puVar14;
              do {
                plVar13 = plVar13 + 1;
                lVar10 = *plVar13;
                iVar9 = (int)(*(longlong *)(lVar10 + 0x10) - *(longlong *)(lVar10 + 8) >> 3) + -1;
                lVar18 = (longlong)iVar9;
                if (-1 < iVar9) {
                  do {
                    iVar9 = (**(code **)(**(longlong **)(*(longlong *)(lVar10 + 8) + lVar18 * 8) +
                                        0x50))();
                    if (iVar9 == 0x39) goto LAB_1400adbf1;
                    lVar18 = lVar18 + -1;
                  } while (-1 < lVar18);
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < 8);
              cVar7 = FUN_140267890(&DAT_1407bc300,0,0xb);
              if ((cVar7 != '\0') || (cVar7 = FUN_140267890(&DAT_1407bc300,0,0x3a), cVar7 != '\0'))
              goto LAB_1400adbf1;
              bVar28 = false;
            }
            else {
LAB_1400adbf1:
              bVar28 = true;
            }
            if (DAT_1407bb76c == '\0') {
              plVar13 = &DAT_1407bda58;
              lVar10 = 0x28;
            }
            else {
              plVar13 = &DAT_1407bc300 + uVar26 + 0x2ec;
              lVar10 = 0x38;
            }
            lVar18 = *(longlong *)(*(longlong *)(lVar10 + *plVar13) + 8);
            uVar11 = *(longlong *)(*(longlong *)(lVar10 + *plVar13) + 0x10) - lVar18;
            if ((uVar11 < 8) || (*(longlong *)(lVar18 + -8 + ((longlong)uVar11 >> 3) * 8) == 0)) {
LAB_1400adc9a:
              bVar6 = false;
            }
            else {
              if (DAT_1407bb76c == '\0') {
                plVar13 = &DAT_1407bda58;
                lVar10 = 0x28;
              }
              else {
                plVar13 = &DAT_1407bc300 + uVar26 + 0x2ec;
                lVar10 = 0x38;
              }
              lVar18 = *(longlong *)(*(longlong *)(lVar10 + *plVar13) + 8);
              uVar11 = *(longlong *)(*(longlong *)(lVar10 + *plVar13) + 0x10) - lVar18;
              if (uVar11 < 8) {
                uVar12 = 0;
              }
              else {
                uVar12 = *(undefined8 *)(lVar18 + -8 + ((longlong)uVar11 >> 3) * 8);
              }
              cVar7 = FUN_14026e590(uVar12);
              if (cVar7 == '\0') goto LAB_1400adc9a;
              bVar6 = true;
            }
            if (DAT_1407aa835 != '\0') {
              if ((!bVar28) || (bVar6)) {
                puVar3 = (ulonglong *)(*(longlong *)(param_1 + (uVar26 + 7) * 0x10) + 0x5a0);
                *puVar3 = *puVar3 | 0x800000000;
              }
              else {
                FUN_1402675a0(&DAT_1407bc300,0,0);
              }
            }
            if (DAT_1407aa841 != '\0') {
              puVar3 = (ulonglong *)(*(longlong *)(param_1 + (uVar26 + 7) * 0x10) + 0x5a0);
              *puVar3 = *puVar3 | 0x2000000000;
            }
            if ((DAT_1407aa833 != '\0') || (DAT_1407aa842 != '\0')) {
              cVar7 = FUN_140267890(&DAT_1407bc300,0,6);
              if (((cVar7 == '\0') &&
                  (((cVar7 = FUN_140267890(&DAT_1407bc300,0,7), cVar7 == '\0' &&
                    (cVar7 = FUN_140267890(&DAT_1407bc300,0,0x2d), cVar7 == '\0')) && (!bVar28))))
                 || (bVar6)) {
                puVar3 = (ulonglong *)(*(longlong *)(param_1 + (uVar26 + 7) * 0x10) + 0x5a0);
                *puVar3 = *puVar3 | 0x8000000000;
              }
              else {
                FUN_1402675a0(&DAT_1407bc300,0,0);
              }
            }
            pcVar23 = &DAT_1407aa821;
            uVar17 = 0x31;
            do {
              if (uVar17 == 0x10) {
                if (DAT_1407aa890 == '\0') {
                  bVar28 = DAT_1407aa891 == '\0';
LAB_1400adde4:
                  if (!bVar28) goto LAB_1400addea;
                  cVar7 = '\0';
                }
                else {
LAB_1400addea:
                  cVar7 = '\x01';
                }
LAB_1400addec:
                if ((cVar7 != '\0') &&
                   (lVar10 = *(longlong *)(*(longlong *)(param_1 + (uVar26 + 7) * 0x10) + 0x340),
                   lVar10 != 0)) {
                  *(uint *)(lVar10 + 0x28) = uVar17 - 0x31;
                }
              }
              else {
                if (uVar17 == 0x11) {
                  if (DAT_1407aa892 == '\0') {
                    bVar28 = DAT_1407aa893 == '\0';
                    goto LAB_1400adde4;
                  }
                  goto LAB_1400addea;
                }
                if (uVar17 == 0x12) {
                  if (DAT_1407aa894 == '\0') {
                    bVar28 = DAT_1407aa895 == '\0';
                    goto LAB_1400adde4;
                  }
                  goto LAB_1400addea;
                }
                if (uVar17 < 0x100) {
                  cVar7 = *pcVar23;
                  goto LAB_1400addec;
                }
              }
              pcVar23 = pcVar23 + 1;
              iVar9 = uVar17 - 0x30;
              LVar22 = local_110;
              uVar17 = uVar17 + 1;
            } while (iVar9 < 9);
          }
          if ((DAT_1407aa80b != '\0') && ((&DAT_1407bd8e1)[uVar26] == '\0')) {
            puVar3 = (ulonglong *)(*(longlong *)(param_1 + (uVar26 + 7) * 0x10) + 0x5a0);
            *puVar3 = *puVar3 | 0x1000000000;
                    /* WARNING: Subroutine does not return */
            FUN_14002fe50(&DAT_1407bb5d0,"PAUSE PRESSED (keyboard) - ipad = %d\n",0);
          }
          if (DAT_1407aa864 != '\0') {
            puVar3 = (ulonglong *)(*(longlong *)(param_1 + (uVar26 + 7) * 0x10) + 0x5a0);
            *puVar3 = *puVar3 | 0x10000000000;
          }
          if (DAT_1407aa863 != '\0') {
            puVar3 = (ulonglong *)(*(longlong *)(param_1 + (uVar26 + 7) * 0x10) + 0x5a0);
            *puVar3 = *puVar3 | 0x4000000000000;
          }
          if ((((DAT_1407aaa25 != '\0') && (DAT_1407aa490 != '\0')) &&
              (lVar10 = *(longlong *)(param_1 + (uVar26 + 7) * 0x10),
              *(char *)(lVar10 + 0x4bd) != '\0')) && ((&DAT_1407bd8e1)[uVar26] == '\0')) {
            puVar3 = (ulonglong *)(lVar10 + 0x5a0);
            *puVar3 = *puVar3 | 0x4000000000;
          }
        }
        *(undefined8 *)(*(longlong *)(param_1 + (uVar26 + 7) * 0x10) + 0x5b0) = 0;
        cVar7 = FUN_140001000(&DAT_140783060,uVar21,0x2a);
        bVar29 = cVar7 != '\0';
        if ((bool)bVar29) {
          puVar3 = (ulonglong *)(*(longlong *)(param_1 + (uVar26 + 7) * 0x10) + 0x5b0);
          *puVar3 = *puVar3 | 0x40000000000;
        }
        cVar7 = FUN_140001000(&DAT_140783060,uVar21,0x2b);
        if (cVar7 != '\0') {
          puVar3 = (ulonglong *)(*(longlong *)(param_1 + (uVar26 + 7) * 0x10) + 0x5b0);
          *puVar3 = *puVar3 | 0x80000000000;
          bVar29 = bVar29 + 1;
        }
        cVar7 = FUN_140001000(&DAT_140783060,uVar21,0x2c);
        if (cVar7 != '\0') {
          puVar3 = (ulonglong *)(*(longlong *)(param_1 + (uVar26 + 7) * 0x10) + 0x5b0);
          *puVar3 = *puVar3 | 0x100000000000;
          bVar29 = bVar29 + 1;
        }
        cVar7 = FUN_140001000(&DAT_140783060,uVar21,0x2d);
        if (cVar7 != '\0') {
          puVar3 = (ulonglong *)(*(longlong *)(param_1 + (uVar26 + 7) * 0x10) + 0x5b0);
          *puVar3 = *puVar3 | 0x200000000000;
          bVar29 = bVar29 + 1;
        }
        lVar10 = *(longlong *)(param_1 + (uVar26 + 7) * 0x10);
        if (bVar29 < 2) {
          *(undefined8 *)(lVar10 + 0x5a8) = *(undefined8 *)(lVar10 + 0x5b0);
          lVar10 = *(longlong *)(param_1 + (uVar26 + 7) * 0x10);
          uVar12 = *(undefined8 *)(lVar10 + 0x5b0);
        }
        else {
          uVar12 = *(undefined8 *)(lVar10 + 0x5a8);
        }
        *(undefined8 *)(lVar10 + 0x5b8) = uVar12;
        cVar7 = FUN_14000100c(&DAT_140783060,uVar21,0x21);
        if (cVar7 == '\0') {
          cVar7 = FUN_14000100c(&DAT_140783060,uVar21,0x22);
          if (cVar7 == '\0') goto LAB_1400ae37d;
        }
        (&DAT_1407bba9c)[uVar26] = 0x78;
      }
LAB_1400ae37d:
      uVar21 = (ulonglong)(uVar20 + 1);
      local_148 = local_148 << 1 | (uint)((int)local_148 < 0);
      uVar26 = uVar26 + 1;
      local_110.QuadPart = LVar22.QuadPart + 1;
    } while ((int)(uVar20 + 1) < 4);
    if ((*(char *)(param_1 + 0x1a1) == '\0') || (*(longlong *)(param_1 + 0x40) == 0)) {
      FUN_1400ba0f0(*(undefined8 *)(param_1 + 0x28));
    }
    else {
      uVar30 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x14);
      FUN_1400ba0f0();
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x14) = uVar30;
    }
    local_148 = 0;
    if (0 < *(int *)(*(longlong *)(param_1 + 0x28) + 0x10)) {
      local_110.QuadPart = param_1 + 0x70;
      local_90.QuadPart = param_1 + 0x120;
      do {
        LVar27 = local_90;
        LVar22 = local_110;
        iVar9 = 0;
        if (local_148 != 0) {
          FUN_1400010e4(&DAT_140783060);
        }
        *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + 1;
        uVar12 = 1;
        do {
          lVar10 = *(longlong *)LVar27;
          if (lVar10 != 0) {
            if (*(char *)(lVar10 + 8) == '\0') {
              FUN_140366130(*(longlong *)(lVar10 + 0x10));
            }
            lVar10 = *(longlong *)(lVar10 + 0x10);
            SetEvent(*(HANDLE *)(*(longlong *)(lVar10 + 0x100) + 8));
            SetEvent(*(HANDLE *)(*(longlong *)(lVar10 + 0x108) + 8));
          }
          if (*(longlong *)LVar22 != 0) {
            if ((((*(longlong *)(*(longlong *)LVar22 + 0x5a0) == 0) &&
                 (fVar31 = (float)FUN_140001048(&DAT_140783060,iVar9,0), fVar31 == 0.0)) &&
                (fVar31 = (float)FUN_140001054(&DAT_140783060,iVar9), fVar31 == 0.0)) &&
               ((fVar31 = (float)FUN_140001060(&DAT_140783060,iVar9), fVar31 == 0.0 &&
                (fVar31 = (float)FUN_14000106c(&DAT_140783060,iVar9), fVar31 == 0.0)))) {
              uVar17 = *(uint *)(*(longlong *)LVar22 + 0x570);
              if (uVar17 < 0xff) {
                *(uint *)(*(longlong *)LVar22 + 0x570) = uVar17 + 1;
              }
            }
            else {
              *(undefined4 *)(*(longlong *)LVar22 + 0x570) = 0;
            }
            pcVar5 = *(code **)(**(longlong **)LVar22 + 0x218);
            if (*(uint *)(*(longlong **)LVar22 + 0xae) < 0xc9) {
              cVar7 = (*pcVar5)();
              if (cVar7 != '\0') {
                plVar13 = *(longlong **)LVar22;
                uVar15 = 0;
                goto LAB_1400ae542;
              }
            }
            else {
              cVar7 = (*pcVar5)();
              if ((cVar7 == '\0') && (plVar13 = *(longlong **)LVar22, (char)plVar13[0x18] != '\0'))
              {
                uVar15 = 1;
LAB_1400ae542:
                (**(code **)(*plVar13 + 0x220))(plVar13,uVar15);
              }
            }
          }
          cVar7 = FUN_1400abcd0(param_1,iVar9);
          if (cVar7 != '\0') {
            FUN_1400aec40(param_1,uVar12);
            uVar12 = 0;
            *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x5a0) = 0;
          }
          iVar9 = iVar9 + 1;
          LVar27.QuadPart = LVar27.QuadPart + 8;
          LVar22.QuadPart = LVar22.QuadPart + 0x10;
        } while (iVar9 < 4);
        FUN_140268170(&DAT_1407bc300);
        FUN_1400abcd0(param_1,0);
        uVar26 = 0;
        if (*(int *)(param_1 + 0x68) != 0) {
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x60) + uVar26 * 8) != 0) {
              FUN_1400fd510();
            }
            uVar17 = (int)uVar26 + 1;
            uVar26 = (ulonglong)uVar17;
          } while (uVar17 < *(uint *)(param_1 + 0x68));
        }
        local_148 = local_148 + 1;
      } while ((int)local_148 < *(int *)(*(longlong *)(param_1 + 0x28) + 0x10));
    }
    local_130 = 0;
    lStack_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    FUN_140054cf0(&local_130,L"Pre render");
    if (7 < uStack_118) {
      if ((0xfff < uStack_118 * 2 + 2) && (0x1f < (local_130 - *(longlong *)(local_130 + -8)) - 8U))
      goto LAB_1400aec2a;
      thunk_FUN_1401fe000();
    }
    DAT_140751e1e = *(undefined1 *)(*(longlong *)(param_1 + 0x218) + 0x1c);
    (**(code **)**(undefined8 **)(param_1 + 0x228))
              (*(undefined8 **)(param_1 + 0x228),param_1 + 0x70,
               *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x14));
    if ((*(longlong **)(param_1 + 0x50) != (longlong *)0x0) &&
       (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x168))(), cVar7 != '\0')) {
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x6d8))(*(longlong **)(param_1 + 0x50),0);
    }
    if (*(char *)(param_1 + 0x200) == '\0') {
      uVar16 = 1;
      cVar7 = FUN_1400abcd0(param_1,0);
      if (cVar7 != '\0') {
        FUN_140004698(&DAT_140784700,*(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x59c));
        FUN_14011aae0(*(undefined8 *)(param_1 + 0x1d0),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x14),1);
        uVar16 = 0;
        if ((DAT_1407bb7dc < 0x21) &&
           ((0x100000014U >> ((longlong)(int)DAT_1407bb7dc & 0x3fU) & 1) != 0)) {
          FUN_140004430(&DAT_140784700,&DAT_1407bc2d8);
        }
      }
      cVar7 = FUN_1400abcd0(param_1,1);
      if (cVar7 != '\0') {
        FUN_140004698(&DAT_140784700,*(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x59c));
        FUN_14011aae0(*(undefined8 *)(param_1 + 0x1d0),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x14),uVar16);
        uVar16 = 0;
      }
      cVar7 = FUN_1400abcd0(param_1,2);
      if (cVar7 != '\0') {
        FUN_140004698(&DAT_140784700,*(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x59c));
        FUN_14011aae0(*(undefined8 *)(param_1 + 0x1d0),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x14),uVar16);
        uVar16 = 0;
      }
      cVar7 = FUN_1400abcd0(param_1,3);
      if (cVar7 != '\0') {
        FUN_140004698(&DAT_140784700,*(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x59c));
        FUN_14011aae0(*(undefined8 *)(param_1 + 0x1d0),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x14),uVar16);
      }
      if (-1 < *(int *)(param_1 + 0x140)) {
        FUN_140004698(&DAT_140784700,*(int *)(param_1 + 0x140) + 5);
        local_90.QuadPart = 0;
        plStack_88 = (longlong *)0x0;
        FUN_140004524(&DAT_140784700,&local_90);
        FUN_14000443c(&DAT_140784700,2,0);
      }
      FUN_1400abcd0(param_1,0);
      FUN_140004698(&DAT_140784700,0);
    }
    if (*(char *)(*(longlong *)(param_1 + 0x218) + 0x14e) == '\0') {
      if (DAT_1407c1b00 == 0) {
        QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_1407c1b00);
      }
      QueryPerformanceCounter(&local_90);
      *(longlong *)(param_1 + 0x2d8) =
           (longlong)(((double)local_90.QuadPart * 1000000000.0) / (double)DAT_1407c1b00);
    }
    Sleep(0);
    local_130 = 0;
    lStack_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    FUN_140054cf0(&local_130,L"Post render");
    if (7 < uStack_118) {
      if ((0xfff < uStack_118 * 2 + 2) && (0x1f < (local_130 - *(longlong *)(local_130 + -8)) - 8U))
      {
LAB_1400aec2a:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
    DAT_1407c1730 = DAT_1407c1730 + 1;
    *(undefined1 *)(param_1 + 0x1a1) = DAT_1407bb76f;
    while( true ) {
      if (DAT_1407c1b00 == 0) {
        QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_1407c1b00);
      }
      QueryPerformanceCounter(&local_90);
      if ((longlong)(((double)local_90.QuadPart * 1000000000.0) / (double)DAT_1407c1b00) <
          DAT_1407c1750 + 1000000000) break;
      psVar25 = local_5a + 2;
      uVar17 = DAT_1407912b0;
      if ((int)DAT_1407912b0 < 0) {
        uVar17 = -DAT_1407912b0;
        do {
          psVar24 = psVar25;
          psVar25 = psVar24 + -1;
          *psVar25 = (short)uVar17 + (short)((ulonglong)uVar17 / 10) * -10 + 0x30;
          uVar17 = (uint)((ulonglong)uVar17 / 10);
        } while (uVar17 != 0);
        psVar25 = psVar24 + -2;
        *psVar25 = 0x2d;
      }
      else {
        do {
          psVar25 = psVar25 + -1;
          *psVar25 = (short)uVar17 + (short)((ulonglong)uVar17 / 10) * -10 + 0x30;
          uVar17 = (uint)((ulonglong)uVar17 / 10);
        } while (uVar17 != 0);
      }
      FUN_14005e650(local_d0,psVar25,local_5a + 2);
      psVar25 = local_5a + 2;
      uVar17 = DAT_1407c1730;
      if ((int)DAT_1407c1730 < 0) {
        uVar17 = -DAT_1407c1730;
        do {
          psVar24 = psVar25;
          psVar25 = psVar24 + -1;
          *psVar25 = (short)uVar17 + (short)((ulonglong)uVar17 / 10) * -10 + 0x30;
          uVar17 = (uint)((ulonglong)uVar17 / 10);
        } while (uVar17 != 0);
        psVar25 = psVar24 + -2;
        *psVar25 = 0x2d;
      }
      else {
        do {
          psVar25 = psVar25 + -1;
          *psVar25 = (short)uVar17 + (short)((ulonglong)uVar17 / 10) * -10 + 0x30;
          uVar17 = (uint)((ulonglong)uVar17 / 10);
        } while (uVar17 != 0);
      }
      FUN_14005e650(local_b0,psVar25,local_5a + 2);
      plVar13 = (longlong *)FUN_140048d20(local_b0,L" fps (",6);
      local_130 = *plVar13;
      lStack_128 = plVar13[1];
      lVar10 = plVar13[2];
      local_120 = plVar13[2];
      uStack_118 = plVar13[3];
      plVar13[2] = 0;
      plVar13[3] = 7;
      *(undefined2 *)plVar13 = 0;
      FUN_140068410(&local_110,(int)lVar10,&local_130);
      puVar14 = (undefined8 *)FUN_140048d20(&local_110,L" chunk updates)");
      local_f0 = *puVar14;
      uStack_e8 = puVar14[1];
      local_e0 = puVar14[2];
      uStack_d8 = puVar14[3];
      puVar14[2] = 0;
      puVar14[3] = 7;
      *(undefined2 *)puVar14 = 0;
      FUN_1400546d0(param_1 + 0x2b8,&local_f0);
      FUN_140055150(&local_f0);
      FUN_140055150(&local_110);
      if (7 < uStack_118) {
        if ((0xfff < uStack_118 * 2 + 2) &&
           (0x1f < (local_130 - *(longlong *)(local_130 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        thunk_FUN_1401fe000();
      }
      FUN_140055150(local_b0);
      FUN_140055150(local_d0);
      DAT_1407912b0 = 0;
      DAT_1407c1750 = DAT_1407c1750 + 1000000000;
      DAT_1407c1730 = 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2e8));
  return;
}



// ===== FUN_1400aec40 @ 0x1400aec40 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400aec40(longlong *param_1,char param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  byte bVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar6;
  double *pdVar7;
  undefined8 *puVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  undefined1 uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined8 uVar21;
  longlong *plVar22;
  longlong lVar23;
  undefined8 *puVar24;
  bool bVar25;
  int iVar26;
  PRTL_CRITICAL_SECTION_DEBUG p_Var27;
  ulonglong uVar28;
  undefined8 uVar29;
  undefined **ppuVar30;
  uint uVar31;
  uint *puVar32;
  longlong *plVar33;
  int iVar34;
  uint *puVar35;
  longlong *plVar36;
  undefined *puVar37;
  uint *puVar38;
  char cVar39;
  int iVar40;
  ulonglong uVar41;
  undefined4 uVar42;
  float fVar43;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qa_14;
  double dVar44;
  undefined1 auStackY_218 [32];
  undefined1 local_188 [16];
  char local_178;
  longlong *local_170;
  longlong lStack_168;
  int local_160;
  longlong *local_158;
  undefined4 local_150;
  uint local_14c;
  longlong local_148;
  longlong *plStack_140;
  int local_138;
  undefined4 local_134;
  uint local_130 [6];
  uint *local_118;
  longlong *plStack_110;
  uint *local_108;
  longlong *plStack_100;
  ulonglong local_f8;
  uint *local_e8;
  longlong *plStack_e0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  longlong local_a8;
  longlong lStack_a0;
  undefined1 local_98 [16];
  ulonglong local_88;
  
  local_88 = DAT_1407502c0 ^ (ulonglong)auStackY_218;
  uVar41 = 0;
  local_f8 = 0;
  local_160 = 0;
  uVar18 = *(uint *)(param_1[10] + 0x5ec);
  lVar23 = param_1[(longlong)(int)uVar18 + 0x4e];
  iVar15 = *(int *)(lVar23 + 0x44);
  if (0 < iVar15) {
    iVar15 = iVar15 + -1;
    *(int *)(lVar23 + 0x44) = iVar15;
  }
  if ((*(char *)(lVar23 + 0x40) != '\0') && (iVar15 == 0)) {
    FUN_1401f16e0(lVar23);
  }
  if ((0 < *(int *)(lVar23 + 0x4c)) &&
     (iVar15 = *(int *)(lVar23 + 0x4c) + -1, *(int *)(lVar23 + 0x4c) = iVar15, iVar15 == 0)) {
    cVar13 = (**(code **)(*DAT_1407bdac8 + 0x18))();
    if (cVar13 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to open a session in order to write to leaderboard\n");
    }
    (**(code **)(*DAT_1407bdac8 + 0x50))();
    *(undefined4 *)(lVar23 + 0x48) = 0;
  }
  if ((&DAT_1407bba9c)[(int)uVar18] != 0) {
    (&DAT_1407bba9c)[(int)uVar18] = (&DAT_1407bba9c)[(int)uVar18] + -1;
  }
  if (param_2 != '\0') {
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1[9] + 800);
    EnterCriticalSection(lpCriticalSection);
    p_Var27 = lpCriticalSection[1].DebugInfo;
    uVar28 = uVar41;
    if (*(longlong *)&lpCriticalSection[1].LockCount - (longlong)p_Var27 >> 3 != 0) {
      do {
        piVar1 = (int *)(*(longlong *)(&p_Var27->Type + uVar28 * 4) + 0x30);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          if (*(longlong *)(&(lpCriticalSection[1].DebugInfo)->Type + uVar28 * 4) != 0) {
            FUN_140130670();
          }
          p_Var27 = lpCriticalSection[1].DebugInfo;
          *(undefined8 *)(&p_Var27->Type + uVar28 * 4) =
               *(undefined8 *)
                ((longlong)p_Var27 +
                (*(longlong *)&lpCriticalSection[1].LockCount - (longlong)p_Var27 >> 3) * 8 + -8);
          *(longlong *)&lpCriticalSection[1].LockCount =
               *(longlong *)&lpCriticalSection[1].LockCount + -8;
        }
        else {
          uVar28 = (ulonglong)((int)uVar28 + 1);
        }
        p_Var27 = lpCriticalSection[1].DebugInfo;
      } while (uVar28 < (ulonglong)
                        (*(longlong *)&lpCriticalSection[1].LockCount - (longlong)p_Var27 >> 3));
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  lVar23 = param_1[0x3f];
  if (0 < *(int *)(lVar23 + 0xc0)) {
    *(int *)(lVar23 + 0xc0) = *(int *)(lVar23 + 0xc0) + -1;
  }
  *(int *)(lVar23 + 0x98) = *(int *)(lVar23 + 0x98) + 1;
  plVar36 = (longlong *)(lVar23 + 8);
  uVar28 = uVar41;
  do {
    if ((&DAT_1407bd8e1)[uVar28] == '\0') {
      lVar23 = plVar36[1];
      for (lVar19 = *plVar36; lVar19 != lVar23; lVar19 = lVar19 + 0x28) {
        *(int *)(lVar19 + 0x20) = *(int *)(lVar19 + 0x20) + 1;
      }
    }
    uVar28 = uVar28 + 1;
    plVar36 = plVar36 + 3;
  } while ((longlong)uVar28 < 4);
  FUN_1401176f0(param_1[0x3a]);
  if ((*(char *)((longlong)param_1 + 0x1a1) == '\0') && (param_1[8] != 0)) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  lVar23 = param_1[0x35];
  puVar6 = *(undefined4 **)(*(longlong *)(lVar23 + 0x158) + 200);
  FUN_1400046c8(&DAT_140784700,*puVar6);
  if (*(char *)((longlong)puVar6 + 0x5a) == '\0') {
    FUN_14019f030(puVar6);
  }
  FUN_1400046c8(&DAT_140784700,**(undefined4 **)(*(longlong *)(lVar23 + 0x158) + 200));
  if ((param_2 != '\0') && (*(char *)((longlong)param_1 + 0x1a1) == '\0')) {
    FUN_140136c60(param_1[0x35],param_3,1);
  }
  if (param_1[0x38] == 0) {
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      fVar43 = (float)(**(code **)(*(longlong *)param_1[10] + 0x440))();
      if ((fVar43 <= 0.0) && ((&DAT_1407bd8e1)[(int)uVar18] == '\0')) goto LAB_1400aef6c;
      (**(code **)(*(longlong *)param_1[10] + 0x590))();
    }
  }
  else {
    lVar23 = FUN_14055b4d8(param_1[0x38],0,&Screen::RTTI_Type_Descriptor,
                           &InBedChatScreen::RTTI_Type_Descriptor);
    if ((lVar23 != 0) &&
       (cVar13 = (**(code **)(*(longlong *)param_1[10] + 0x590))(), cVar13 == '\0')) {
LAB_1400aef6c:
      FUN_1400aba60(param_1,0);
    }
  }
  if (param_1[0x38] != 0) {
    *(undefined4 *)(param_1[10] + 0x5c0) = 10000;
    *(int *)(param_1[10] + 0x5c4) = (int)param_1[0x3c] + 10000;
    *(int *)(param_1[10] + 0x5c8) = (int)param_1[0x3c] + 10000;
  }
  lVar23 = 0;
  if ((longlong *)param_1[0x38] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x38] + 0x58))();
    lVar23 = 0;
    if (param_1[0x38] != 0) {
      lVar23 = *(longlong *)(param_1[0x38] + 0x48);
      lVar19 = *(longlong *)(lVar23 + 8);
      if (*(longlong *)(lVar23 + 0x10) - lVar19 >> 3 != 0) {
        do {
          iVar34 = (int)uVar41;
          pdVar7 = *(double **)(lVar19 + uVar41 * 8);
          pdVar7[0xd] = pdVar7[9];
          pdVar7[0xe] = pdVar7[10];
          pdVar7[0xf] = pdVar7[0xb];
          pdVar7[0x10] = pdVar7[0xc];
          pdVar7[2] = *pdVar7;
          pdVar7[3] = pdVar7[1];
          *pdVar7 = pdVar7[4] + *pdVar7;
          pdVar7[1] = pdVar7[5] + pdVar7[1];
          pdVar7[4] = pdVar7[6] * pdVar7[4];
          pdVar7[5] = pdVar7[6] * pdVar7[5] + 0.1;
          iVar15 = *(int *)((longlong)pdVar7 + 0x3c) + 1;
          *(int *)((longlong)pdVar7 + 0x3c) = iVar15;
          if (*(int *)(pdVar7 + 8) < iVar15) {
            *(undefined1 *)(pdVar7 + 7) = 1;
          }
          dVar44 = (double)iVar15 / (double)*(int *)(pdVar7 + 8);
          dVar44 = 2.0 - (dVar44 + dVar44);
          if (1.0 < dVar44) {
            dVar44 = 1.0;
          }
          pdVar7[0xc] = dVar44 * dVar44 * 0.5;
          if (*(char *)(pdVar7 + 7) != '\0') {
            lVar3 = *(longlong *)(lVar23 + 8) + uVar41 * 8;
            lVar19 = lVar3 + 8;
            FUN_140596110(lVar3,lVar19,*(longlong *)(lVar23 + 0x10) - lVar19);
            *(longlong *)(lVar23 + 0x10) = *(longlong *)(lVar23 + 0x10) + -8;
            iVar34 = iVar34 + -1;
          }
          uVar41 = (ulonglong)(iVar34 + 1);
          lVar19 = *(longlong *)(lVar23 + 8);
        } while (uVar41 < (ulonglong)(*(longlong *)(lVar23 + 0x10) - lVar19 >> 3));
      }
      (**(code **)(*(longlong *)param_1[0x38] + 0x70))();
      lVar23 = param_1[0x38];
    }
  }
  uVar41 = (ulonglong)(int)uVar18;
  if ((uVar18 == 0) &&
     ((((lVar23 != 0 || (DAT_1407bd8e1 != '\0')) && (DAT_1407aaa21 != '\0')) &&
      ((DAT_1407aaa21 = '\0', DAT_1407aaa22 == '\0' && (DAT_1407aaa70 != 0)))))) {
    do {
      iVar15 = ShowCursor(1);
    } while (iVar15 < 0);
    ClipCursor((RECT *)0x0);
  }
  if ((param_1[0x38] != 0) || ((&DAT_1407bd8e1)[uVar41] != '\0')) {
    iVar15 = FUN_140001078(&DAT_140783060,uVar18,0x15,0);
    if ((iVar15 != 0) &&
       (cVar13 = (**(code **)(*(longlong *)*param_1 + 200))((longlong *)*param_1,0x15),
       cVar13 != '\0')) {
      FUN_1400aba60(param_1,0);
    }
    goto LAB_1400b2a05;
  }
  if (((uVar18 == 0) && (DAT_1407aaa21 == '\0')) && (DAT_1407aaa23 != '\0')) {
    FUN_1402fcef0(&DAT_1407bc300,1);
  }
  local_14c = 0xffffffff;
  local_130[3] = 0xffffffff;
  local_130[2] = 0xffffffff;
  local_130[1] = 0xffffffff;
  local_130[0] = 0xffffffff;
  uVar42 = 0x582;
  if (*(char *)(param_1[10] + 0x4bf) == '\0') {
    uVar42 = 0x412;
  }
  local_134 = uVar42;
  uVar14 = FUN_14000103c(&DAT_140783060,uVar18);
  iVar15 = FUN_140001024(&DAT_140783060,uVar14,0x20);
  uVar14 = FUN_14000103c(&DAT_140783060,uVar18);
  iVar34 = FUN_140001024(&DAT_140783060,uVar14,0x16);
  uVar14 = FUN_14000103c(&DAT_140783060,uVar18);
  iVar16 = FUN_140001024(&DAT_140783060,uVar14,0x1f);
  uVar14 = FUN_14000103c(&DAT_140783060,uVar18);
  FUN_140001024(&DAT_140783060,uVar14,0x26);
  if (iVar15 == 1) {
LAB_1400af2cc:
    puVar38 = &local_14c;
  }
  else if (iVar15 == 0x40) {
    puVar38 = local_130;
  }
  else if (iVar15 == 0x80) {
    puVar38 = local_130 + 1;
  }
  else if (iVar15 == 0x400000) {
    puVar38 = local_130 + 2;
  }
  else {
    if (iVar15 != 0x800000) goto LAB_1400af2cc;
    puVar38 = local_130 + 3;
  }
  if (iVar34 == 1) {
LAB_1400af30b:
    puVar32 = &local_14c;
  }
  else if (iVar34 == 0x40) {
    puVar32 = local_130;
  }
  else if (iVar34 == 0x80) {
    puVar32 = local_130 + 1;
  }
  else if (iVar34 == 0x400000) {
    puVar32 = local_130 + 2;
  }
  else {
    if (iVar34 != 0x800000) goto LAB_1400af30b;
    puVar32 = local_130 + 3;
  }
  if (iVar16 == 0x40) {
    puVar35 = local_130;
  }
  else if (iVar16 == 0x80) {
    puVar35 = local_130 + 1;
  }
  else if ((iVar16 == 0x400000) || (iVar16 != 0x800000)) {
    puVar35 = local_130 + 2;
  }
  else {
    puVar35 = local_130 + 3;
  }
  local_e8 = puVar38;
  cVar13 = FUN_14034d1b0(param_1[10],DAT_1407b9798);
  uVar17 = 0x566;
  if (cVar13 == '\0') {
    uVar17 = 0xffffffff;
  }
  *puVar32 = uVar17;
  *puVar35 = 0xffffffff;
  *puVar38 = 0xffffffff;
  local_150 = 0xffffffff;
  cVar13 = (**(code **)(*(longlong *)param_1[10] + 0x590))();
  if (((cVar13 != '\0') && (param_1[8] != 0)) && (*(char *)(param_1[8] + 0x268) != '\0')) {
    *puVar35 = 0x561;
    goto LAB_1400b185c;
  }
  cVar13 = (**(code **)(*(longlong *)param_1[10] + 0x200))();
  if (cVar13 != '\0') {
    lVar23 = param_1[10];
    if (*(longlong *)(lVar23 + 0x48) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(lVar23 + 0x48) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar24 = *(undefined8 **)*(undefined1 (*) [16])(lVar23 + 0x40);
    plVar36 = *(longlong **)(lVar23 + 0x48);
    local_188 = *(undefined1 (*) [16])(lVar23 + 0x40);
    uVar17 = (**(code **)*puVar24)(puVar24);
    if ((uVar17 & 0xa800000) == 0xa800000) {
LAB_1400af3f9:
      local_150 = 0x52f;
    }
    else {
      iVar15 = (**(code **)*puVar24)(puVar24);
      local_150 = 0x594;
      if (iVar15 == 0x8000008) goto LAB_1400af3f9;
    }
    if (plVar36 != (longlong *)0x0) {
      LOCK();
      plVar33 = plVar36 + 1;
      lVar23 = *plVar33;
      *(int *)plVar33 = (int)*plVar33 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*plVar36)(plVar36);
        LOCK();
        piVar1 = (int *)((longlong)plVar36 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plVar36 + 8))(plVar36);
        }
      }
    }
  }
  uVar17 = *(uint *)(*(longlong *)(param_1[10] + 0x340) + 0x28);
  uVar28 = (ulonglong)uVar17;
  if (uVar17 < 9) {
    lVar23 = *(longlong *)(*(longlong *)(param_1[10] + 0x340) + 8);
    lVar19 = *(longlong *)(lVar23 + 8 + uVar28 * 0x10);
    if (lVar19 != 0) {
      LOCK();
      piVar1 = (int *)(lVar19 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_108 = *(uint **)(lVar23 + uVar28 * 0x10);
    plStack_100 = *(longlong **)(lVar23 + 8 + uVar28 * 0x10);
  }
  else {
    local_108 = (uint *)0x0;
    plStack_100 = (longlong *)0x0;
  }
  plVar36 = plStack_100;
  puVar32 = local_108;
  local_158 = plStack_100;
  if (local_108 == (uint *)0x0) goto switchD_1400af545_caseD_70;
  plVar33 = (longlong *)*param_1;
  pcVar9 = *(code **)(*plVar33 + 0x48);
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
    UNLOCK();
  }
  lVar23 = param_1[8];
  if (param_1[0xb] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xb] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_170 = (longlong *)param_1[10];
  lStack_168 = param_1[0xb];
  local_118 = local_108;
  plStack_110 = plStack_100;
  cVar13 = (*pcVar9)(plVar33,&local_170,lVar23,&local_118);
  iVar15 = *(int *)(*(longlong *)(DAT_1407bdbd0 + (ulonglong)puVar32[8] * 8) + 0x20);
  if (iVar15 < 0x140) {
    if (iVar15 == 0x13f) {
switchD_1400af545_caseD_104:
      lVar23 = *(longlong *)(DAT_1407bdbd0 + (ulonglong)puVar32[8] * 8);
      if (lVar23 != 0) {
        if (param_1[0xb] != 0) {
          LOCK();
          piVar1 = (int *)(param_1[0xb] + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        lVar19 = param_1[10];
        plVar33 = (longlong *)param_1[0xb];
        if ((((*(char *)(lVar23 + 0xa1) == '\0') && (0x13 < *(int *)(lVar19 + 0x370))) ||
            (*(char *)(lVar19 + 0x4bc) != '\0')) ||
           ((iVar15 = FUN_14003e910(lVar23,DAT_1407bbab0,0x12), iVar15 != 0 &&
            ((*(uint *)(lVar19 + 0x540) & 0x100) != 0)))) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (plVar33 != (longlong *)0x0) {
          LOCK();
          plVar22 = plVar33 + 1;
          lVar23 = *plVar22;
          *(int *)plVar22 = (int)*plVar22 + -1;
          UNLOCK();
          if ((int)lVar23 == 1) {
            (**(code **)*plVar33)(plVar33);
            LOCK();
            piVar1 = (int *)((longlong)plVar33 + 0xc);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*plVar33 + 8))(plVar33);
            }
          }
        }
        if (bVar10) {
          *puVar35 = 0x55f;
        }
      }
    }
    else {
      switch(iVar15) {
      case 0x6f:
        goto switchD_1400af545_caseD_6f;
      case 0x104:
      case 0x11a:
      case 0x129:
        goto switchD_1400af545_caseD_104;
      case 0x105:
        lVar23 = param_1[10];
        if (*(char *)(lVar23 + 0x4bf) == '\0') {
          lVar23 = *(longlong *)(lVar23 + 0x340);
          uVar17 = 0;
          if (*(int *)(lVar23 + 0x10) != 0) {
            do {
              lVar19 = *(longlong *)(*(longlong *)(lVar23 + 8) + (ulonglong)uVar17 * 0x10);
              if ((lVar19 != 0) && (*(int *)(lVar19 + 0x20) == 0x106)) {
                lVar23 = param_1[10];
                if (-1 < (int)uVar17) goto LAB_1400af5a0;
                break;
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 < *(uint *)(lVar23 + 0x10));
          }
        }
        else {
LAB_1400af5a0:
          *puVar35 = (*(longlong *)(lVar23 + 0x4e0) != 0) + 0x589;
        }
        break;
      case 0x10b:
      case 0x10c:
      case 0x110:
      case 0x114:
      case 0x11b:
        *puVar35 = 0x58c;
      }
    }
    goto switchD_1400af545_caseD_70;
  }
  switch(iVar15) {
  case 0x140:
  case 0x142:
  case 0x15d:
  case 0x15e:
  case 0x165:
  case 0x168:
  case 0x16b:
  case 0x16c:
  case 0x16d:
  case 0x16e:
  case 0x16f:
  case 0x177:
  case 0x187:
  case 0x188:
  case 0x189:
  case 0x18a:
  case 0x18c:
  case 400:
    goto switchD_1400af545_caseD_104;
  case 0x145:
  case 0x176:
    if (cVar13 != '\0') {
      *puVar35 = 0x55e;
    }
    break;
  case 0x146:
  case 0x147:
    *puVar35 = 0x559;
    break;
  case 0x14c:
  case 0x158:
    goto switchD_1400af5e7_caseD_14c;
  case 0x14d:
switchD_1400af545_caseD_6f:
    if (cVar13 != '\0') {
      *puVar35 = 0x55b;
    }
    break;
  case 0x14f:
switchD_1400af5e7_caseD_14f:
    *puVar35 = 0x590;
    break;
  case 0x15a:
  case 0x18b:
    *puVar35 = 0x52d;
    break;
  case 0x170:
    goto joined_r0x0001400af712;
  case 0x175:
    if (cVar13 != '\0') {
      if ((puVar32[0xc] & 0x4000) == 0) goto switchD_1400af5e7_caseD_14f;
      goto switchD_1400af5e7_caseD_14c;
    }
    break;
  case 0x17d:
    if ((cVar13 != '\0') && (*(int *)(*(longlong *)(param_1[8] + 0x150) + 0x50) == 0)) {
      cVar13 = (**(code **)(**(longlong **)(param_1[8] + 0x188) + 0x90))();
      goto joined_r0x0001400af712;
    }
    break;
  case 0x180:
joined_r0x0001400af712:
    if (cVar13 != '\0') {
switchD_1400af5e7_caseD_14c:
      *puVar35 = 0x56c;
    }
  }
switchD_1400af545_caseD_70:
  piVar1 = (int *)param_1[0x42];
  if (piVar1 == (int *)0x0) goto LAB_1400b181e;
  if (*piVar1 != 0) {
    if (*piVar1 != 1) goto LAB_1400b181e;
    iVar15 = (**(code **)**(undefined8 **)(piVar1 + 8))();
    plVar36 = (longlong *)*param_1;
    if ((plVar36 != (longlong *)0x0) &&
       (lVar23 = (**(code **)(*plVar36 + 0xd8))(plVar36), lVar23 != 0)) {
      uVar29 = (**(code **)(*(longlong *)*param_1 + 0xd8))();
      lVar23 = param_1[0x42];
      if (*(longlong *)(lVar23 + 0x28) != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)(lVar23 + 0x28) + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_170 = *(longlong **)(lVar23 + 0x20);
      lStack_168 = *(longlong *)(lVar23 + 0x28);
      FUN_1400834e0(uVar29,&local_170);
    }
    local_118 = (uint *)0x0;
    plStack_110 = (longlong *)0x0;
    lVar23 = param_1[10];
    uVar17 = *(uint *)(*(longlong *)(lVar23 + 0x340) + 0x28);
    uVar41 = (ulonglong)uVar17;
    if (((int)uVar17 < 9) && (-1 < (int)uVar17)) {
      uVar28 = (ulonglong)uVar17;
      lVar19 = *(longlong *)(*(longlong *)(lVar23 + 0x340) + 8);
      if (*(longlong *)(lVar19 + uVar28 * 0x10) != 0) {
        if (uVar17 < 9) {
          uVar41 = *(ulonglong *)(lVar19 + 8 + uVar28 * 0x10);
          if (uVar41 != 0) {
            LOCK();
            *(int *)(uVar41 + 8) = *(int *)(uVar41 + 8) + 1;
            UNLOCK();
          }
          plStack_110 = *(longlong **)(lVar19 + 8 + uVar28 * 0x10);
          local_118 = *(uint **)(lVar19 + uVar28 * 0x10);
        }
        else {
          plStack_110 = (longlong *)0x0;
          local_118 = (uint *)0x0;
        }
        lVar23 = param_1[10];
      }
    }
    plVar36 = plStack_110;
    puVar32 = local_118;
    if (local_118 == (uint *)0x0) {
      iVar34 = -1;
      lVar23 = param_1[10];
    }
    else {
      uVar41 = *(ulonglong *)(DAT_1407bdbd0 + (ulonglong)local_118[8] * 8);
      iVar34 = *(int *)(uVar41 + 0x20);
    }
    local_170 = plStack_110;
    if (iVar15 < 0xd000006) {
      if (iVar15 == 0xd000005) {
        *puVar38 = 0x55c;
      }
      else if (iVar15 < 0xa800005) {
        if (iVar15 == 0xa800004) {
LAB_1400afc0f:
          *puVar35 = 0x552;
        }
        else if (iVar15 == 0x8000008) {
          *puVar38 = 0x552;
          *puVar35 = 0x564;
        }
        else {
          if (iVar15 == 0xa100002) {
            lVar23 = param_1[0x42];
            plVar36 = (longlong *)0x0;
            plVar33 = (longlong *)
                      FUN_14055b4d8(*(undefined8 *)(lVar23 + 0x20),0,&Entity::RTTI_Type_Descriptor,
                                    &ItemFrame::RTTI_Type_Descriptor);
            plVar22 = plVar36;
            if (plVar33 != (longlong *)0x0) {
              if (*(longlong *)(lVar23 + 0x28) != 0) {
                LOCK();
                piVar1 = (int *)(*(longlong *)(lVar23 + 0x28) + 8);
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              plVar36 = plVar33;
              plVar22 = *(longlong **)(lVar23 + 0x28);
            }
            if (plVar36[0x27] != 0) {
              LOCK();
              piVar1 = (int *)(plVar36[0x27] + 8);
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            plVar33 = (longlong *)plVar36[0x27];
            lVar23 = *(longlong *)(plVar36[0x26] + 0x28);
            if (*(longlong *)(lVar23 + 0x38) != 0) {
              LOCK();
              piVar1 = (int *)(*(longlong *)(lVar23 + 0x38) + 8);
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            lVar19 = *(longlong *)(lVar23 + 0x30);
            plVar36 = *(longlong **)(lVar23 + 0x38);
            if (plVar33 != (longlong *)0x0) {
              LOCK();
              plVar20 = plVar33 + 1;
              lVar23 = *plVar20;
              *(int *)plVar20 = (int)*plVar20 + -1;
              UNLOCK();
              if ((int)lVar23 == 1) {
                (**(code **)*plVar33)(plVar33);
                LOCK();
                piVar1 = (int *)((longlong)plVar33 + 0xc);
                iVar15 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar15 == 1) {
                  (**(code **)(*plVar33 + 8))(plVar33);
                }
              }
            }
            if (plVar36 != (longlong *)0x0) {
              LOCK();
              plVar33 = plVar36 + 1;
              lVar23 = *plVar33;
              *(int *)plVar33 = (int)*plVar33 + -1;
              UNLOCK();
              if ((int)lVar23 == 1) {
                (**(code **)*plVar36)(plVar36);
                LOCK();
                piVar1 = (int *)((longlong)plVar36 + 0xc);
                iVar15 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar15 == 1) {
                  (**(code **)(*plVar36 + 8))(plVar36);
                }
              }
            }
            if (lVar19 == 0) {
              if (-1 < iVar34) {
                *puVar35 = 0x55b;
              }
              *local_e8 = 0x55c;
            }
            else {
              *puVar35 = 0x591;
              *local_e8 = 0x55c;
            }
            goto LAB_1400afbb8;
          }
          if (iVar15 == 0xa100003) {
            uVar17 = 0x598;
            *puVar38 = 0x598;
            if (iVar34 == 0x1a4) {
              dVar44 = *(double *)(param_1[10] + 0x80);
              dVar4 = *(double *)(param_1[10] + 0x78);
              lVar23 = param_1[8];
              if (param_1[0xb] != 0) {
                LOCK();
                piVar1 = (int *)(param_1[0xb] + 8);
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              local_e8 = (uint *)param_1[10];
              plStack_e0 = (longlong *)param_1[0xb];
              cVar13 = FUN_1403a2100(&local_e8,lVar23,(int)dVar4,(int)dVar44);
              if (cVar13 != '\0') {
                uVar17 = 0x599;
              }
            }
            *puVar35 = uVar17;
          }
          else if (iVar15 == 0xa800001) {
            *puVar38 = 0x552;
            *puVar35 = 0x563;
          }
          else {
            if (iVar15 != 0xa800003) goto LAB_1400b0b55;
            *puVar38 = 0x552;
            if (iVar34 == 0x107) {
              *puVar35 = 0x52d;
            }
          }
        }
      }
      else {
        if (iVar15 == 0xa800006) goto LAB_1400afc0f;
        if ((iVar15 == 0xa880002) || (iVar15 == 0xa880005)) {
          *puVar38 = 0x552;
          *puVar35 = 0x567;
          goto LAB_1400af8e3;
        }
        if (iVar15 == 0xc800000) {
          lVar23 = param_1[0x42];
          plVar22 = (longlong *)0x0;
          plVar33 = (longlong *)
                    FUN_14055b4d8(*(undefined8 *)(lVar23 + 0x20),0,&Entity::RTTI_Type_Descriptor,
                                  &Player::RTTI_Type_Descriptor);
          plVar36 = plVar22;
          if (plVar33 != (longlong *)0x0) {
            if (*(longlong *)(lVar23 + 0x28) != 0) {
              LOCK();
              piVar1 = (int *)(*(longlong *)(lVar23 + 0x28) + 8);
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            plVar22 = *(longlong **)(lVar23 + 0x28);
            plVar36 = plVar33;
          }
          uVar41 = (ulonglong)DAT_1407bbab0;
          iVar15 = FUN_14003e910(extraout_XMM0_Qa,uVar41,0x12);
          if ((((iVar15 == 0) || ((*(byte *)(plVar36 + 0xa8) & 0x80) == 0)) &&
              ((iVar34 = FUN_14003e910(extraout_XMM0_Qa_00,uVar41 & 0xffffffff,0xb), iVar34 != 0 &&
               ((lVar23 = param_1[10], iVar15 == 0 || ((*(byte *)(lVar23 + 0x540) & 0x80) == 0))))))
             && ((iVar15 = FUN_14003e910(extraout_XMM0_Qa_01,uVar41 & 0xffffffff,0xc), iVar15 != 0
                 || ((*(byte *)(lVar23 + 0x540) & 8) == 0)))) {
            *puVar38 = 0x55c;
          }
          goto LAB_1400afbb8;
        }
LAB_1400b0b55:
        uVar17 = (**(code **)**(undefined8 **)(param_1[0x42] + 0x20))();
        if ((uVar17 & 0xd000000) != 0xd000000) {
          *puVar38 = 0x55c;
          goto LAB_1400af8e3;
        }
        lVar23 = param_1[0x42];
        plVar36 = (longlong *)
                  FUN_14055b4d8(*(undefined8 *)(lVar23 + 0x20),0,&Entity::RTTI_Type_Descriptor,
                                &Mob::RTTI_Type_Descriptor);
        if (plVar36 == (longlong *)0x0) {
          plVar36 = (longlong *)0x0;
          local_188 = ZEXT816(0);
          plVar33 = (longlong *)0x0;
        }
        else {
          if (*(longlong *)(lVar23 + 0x28) != 0) {
            LOCK();
            piVar1 = (int *)(*(longlong *)(lVar23 + 0x28) + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          plVar33 = *(longlong **)(lVar23 + 0x28);
          local_188._8_8_ = plVar33;
          local_188._0_8_ = plVar36;
        }
        cVar13 = (**(code **)(*plVar36 + 0x778))(plVar36);
        if (cVar13 == '\0') {
          bVar10 = false;
LAB_1400b0c19:
          bVar25 = false;
        }
        else {
          plVar22 = (longlong *)(**(code **)(*plVar36 + 0x780))(plVar36,local_c8);
          bVar10 = true;
          if (*plVar22 != param_1[10]) goto LAB_1400b0c19;
          bVar25 = true;
        }
        plVar22 = local_c0;
        if ((bVar10) && (local_c0 != (longlong *)0x0)) {
          LOCK();
          plVar20 = local_c0 + 1;
          lVar23 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar23 == 1) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*plVar22 + 8))(plVar22);
            }
          }
        }
        if (bVar25) {
          *puVar35 = 0x598;
        }
        else if (iVar34 == 0x1a4) {
          cVar13 = (**(code **)(*plVar36 + 0x778))(plVar36);
          if (cVar13 == '\0') {
            *puVar35 = 0x597;
          }
        }
        else if (iVar34 == 0x1a5) {
          *puVar35 = 0x59a;
        }
        if (plVar33 != (longlong *)0x0) {
          LOCK();
          plVar36 = plVar33 + 1;
          lVar23 = *plVar36;
          *(int *)plVar36 = (int)*plVar36 + -1;
          UNLOCK();
          if ((int)lVar23 == 1) {
            (**(code **)*plVar33)(plVar33);
            LOCK();
            piVar1 = (int *)((longlong)plVar33 + 0xc);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*plVar33 + 8))(plVar33);
            }
          }
        }
        *local_e8 = 0x55c;
      }
    }
    else {
      if (iVar15 < 0x2d640004) {
        if (iVar15 == 0x2d640003) {
          iVar15 = FUN_14003e910(uVar41,DAT_1407bbab0,0xc);
          if ((iVar15 != 0) || ((*(uint *)(param_1[10] + 0x540) & 0x400) == 0)) {
            *puVar38 = 0x55c;
          }
          lVar23 = param_1[0x42];
          plVar33 = (longlong *)
                    FUN_14055b4d8(*(undefined8 *)(lVar23 + 0x20),0,&Entity::RTTI_Type_Descriptor,
                                  &Pig::RTTI_Type_Descriptor);
          if (plVar33 == (longlong *)0x0) {
            plVar33 = (longlong *)0x0;
            local_188 = ZEXT816(0);
            plVar22 = (longlong *)0x0;
          }
          else {
            if (*(longlong *)(lVar23 + 0x28) != 0) {
              LOCK();
              piVar1 = (int *)(*(longlong *)(lVar23 + 0x28) + 8);
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            plVar22 = *(longlong **)(lVar23 + 0x28);
            local_188._8_8_ = plVar22;
            local_188._0_8_ = plVar33;
          }
          cVar13 = (**(code **)(*plVar33 + 0x778))(plVar33);
          if (cVar13 == '\0') {
            bVar10 = false;
LAB_1400b09d8:
            bVar25 = bVar10;
            bVar10 = false;
          }
          else {
            plVar20 = (longlong *)(**(code **)(*plVar33 + 0x780))(plVar33,local_c8);
            bVar25 = true;
            bVar10 = true;
            if (*plVar20 != param_1[10]) goto LAB_1400b09d8;
            bVar10 = true;
          }
          plVar20 = local_c0;
          if ((bVar25) && (local_c0 != (longlong *)0x0)) {
            LOCK();
            plVar2 = local_c0 + 1;
            lVar23 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar23 == 1) {
              (**(code **)*local_c0)(local_c0);
              LOCK();
              piVar1 = (int *)((longlong)plVar20 + 0xc);
              iVar15 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plVar20 + 8))(plVar20);
              }
            }
          }
          if (bVar10) {
            *puVar35 = 0x598;
          }
          else if (iVar34 == 0x1a4) {
            cVar13 = (**(code **)(*plVar33 + 0x778))(plVar33);
            if (cVar13 == '\0') {
              *puVar35 = 0x597;
            }
          }
          else if (iVar34 == 0x1a5) {
            *puVar35 = 0x59a;
          }
          else if ((*(byte *)(*(longlong *)(plVar33[0x26] + 0x108) + 8) & 1) == 0) {
            cVar13 = (**(code **)(*plVar33 + 0x358))(plVar33);
            if (cVar13 == '\0') {
              uVar17 = *(uint *)(*(longlong *)(param_1[10] + 0x340) + 0x28);
              if ((uVar17 < 9) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1[10] + 0x340) + 8) + (ulonglong)uVar17 * 0x10
                   ) != 0)) {
                if (iVar34 == 0x149) {
                  *puVar35 = 0x55a;
                }
                else if ((*(int *)(*(longlong *)(plVar33[0x26] + 0xd8) + 8) < 1) &&
                        (iVar15 = (**(code **)(*plVar33 + 0x820))(plVar33), iVar15 == 0)) {
                  lVar23 = *plVar33;
                  if (local_170 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_170 + 1) = (int)local_170[1] + 1;
                    UNLOCK();
                  }
                  local_e8 = puVar32;
                  plStack_e0 = plVar36;
                  cVar13 = (**(code **)(lVar23 + 0x848))(plVar33,&local_e8);
                  if (cVar13 != '\0') {
                    *puVar35 = 0x58f;
                  }
                }
              }
            }
          }
          else {
            *puVar35 = 0x593;
          }
        }
        else {
          if (iVar15 == 0xd600001) {
            lVar23 = param_1[0x42];
            plVar36 = (longlong *)
                      FUN_14055b4d8(*(undefined8 *)(lVar23 + 0x20),0,&Entity::RTTI_Type_Descriptor,
                                    &Villager::RTTI_Type_Descriptor);
            if (plVar36 == (longlong *)0x0) {
              plVar36 = (longlong *)0x0;
              local_188 = ZEXT816(0);
              plVar22 = (longlong *)0x0;
            }
            else {
              if (*(longlong *)(lVar23 + 0x28) != 0) {
                LOCK();
                piVar1 = (int *)(*(longlong *)(lVar23 + 0x28) + 8);
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              plVar22 = *(longlong **)(lVar23 + 0x28);
              local_188._8_8_ = plVar22;
              local_188._0_8_ = plVar36;
            }
            cVar13 = (**(code **)(*plVar36 + 0x358))();
            if (cVar13 == '\0') {
              *puVar35 = 0x82b;
            }
            *puVar38 = 0x55c;
LAB_1400afbb8:
            if (plVar22 != (longlong *)0x0) {
              LOCK();
              plVar36 = plVar22 + 1;
              lVar23 = *plVar36;
              *(int *)plVar36 = (int)*plVar36 + -1;
              UNLOCK();
              if ((int)lVar23 == 1) {
                (**(code **)*plVar22)(plVar22);
                LOCK();
                piVar1 = (int *)((longlong)plVar22 + 0xc);
                iVar15 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar15 == 1) {
                  (**(code **)(*plVar22 + 8))(plVar22);
                }
              }
            }
            goto LAB_1400af8e3;
          }
          if (iVar15 != 0xd640004) {
            if (iVar15 != 0xd660002) {
              if (iVar15 != 0x2d640001) {
                if (iVar15 != 0x2d640002) goto LAB_1400b0b55;
                lVar23 = param_1[10];
                iVar15 = FUN_14003e910(uVar41,DAT_1407bbab0,0xc);
                if ((iVar15 != 0) || ((*(uint *)(lVar23 + 0x540) & 0x400) == 0)) {
                  *puVar38 = 0x55c;
                }
                lVar23 = param_1[0x42];
                plVar33 = (longlong *)
                          FUN_14055b4d8(*(undefined8 *)(lVar23 + 0x20),0,
                                        &Entity::RTTI_Type_Descriptor,&Sheep::RTTI_Type_Descriptor);
                if (plVar33 == (longlong *)0x0) {
                  plVar33 = (longlong *)0x0;
                  local_188 = ZEXT816(0);
                  plVar22 = (longlong *)0x0;
                }
                else {
                  if (*(longlong *)(lVar23 + 0x28) != 0) {
                    LOCK();
                    piVar1 = (int *)(*(longlong *)(lVar23 + 0x28) + 8);
                    *piVar1 = *piVar1 + 1;
                    UNLOCK();
                  }
                  plVar22 = *(longlong **)(lVar23 + 0x28);
                  local_188._8_8_ = plVar22;
                  local_188._0_8_ = plVar33;
                }
                cVar13 = (**(code **)(*plVar33 + 0x778))(plVar33);
                if (cVar13 == '\0') {
                  bVar10 = false;
LAB_1400afd43:
                  bVar25 = bVar10;
                  bVar10 = false;
                }
                else {
                  plVar20 = (longlong *)(**(code **)(*plVar33 + 0x780))(plVar33,&local_e8);
                  bVar25 = true;
                  bVar10 = true;
                  if (*plVar20 != param_1[10]) goto LAB_1400afd43;
                  bVar10 = true;
                }
                plVar20 = plStack_e0;
                if ((bVar25) && (plStack_e0 != (longlong *)0x0)) {
                  LOCK();
                  plVar2 = plStack_e0 + 1;
                  lVar23 = *plVar2;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)lVar23 == 1) {
                    (**(code **)*plStack_e0)(plStack_e0);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar20 + 0xc);
                    iVar15 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar15 == 1) {
                      (**(code **)(*plVar20 + 8))(plVar20);
                    }
                  }
                }
                if (bVar10) {
                  *puVar35 = 0x598;
                }
                else if (iVar34 != -1) {
                  if (iVar34 == 0x15f) {
                    bVar5 = *(byte *)(*(longlong *)(plVar33[0x26] + 0x108) + 8);
                    if (((bVar5 & 0x10) == 0) || ((bVar5 & 0xf) == (~puVar32[0xc] & 0xf))) {
                      *puVar35 = 0x551;
                    }
                  }
                  else if (iVar34 == 0x167) {
                    cVar13 = (**(code **)(*plVar33 + 0x358))(plVar33);
                    if ((cVar13 == '\0') &&
                       ((*(byte *)(*(longlong *)(plVar33[0x26] + 0x108) + 8) & 0x10) == 0)) {
                      *puVar35 = 0x577;
                    }
                  }
                  else if (iVar34 == 0x1a4) {
                    cVar13 = (**(code **)(*plVar33 + 0x778))(plVar33);
                    if (cVar13 == '\0') {
                      *puVar35 = 0x597;
                    }
                  }
                  else if (iVar34 == 0x1a5) {
                    *puVar35 = 0x59a;
                  }
                  else {
                    cVar13 = (**(code **)(*plVar33 + 0x358))(plVar33);
                    if (((cVar13 == '\0') && (*(int *)(*(longlong *)(plVar33[0x26] + 0xd8) + 8) < 1)
                        ) && (iVar15 = (**(code **)(*plVar33 + 0x820))(plVar33), iVar15 == 0)) {
                      lVar23 = *plVar33;
                      if (local_170 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(local_170 + 1) = (int)local_170[1] + 1;
                        UNLOCK();
                      }
                      local_e8 = puVar32;
                      plStack_e0 = plVar36;
                      cVar13 = (**(code **)(lVar23 + 0x848))(plVar33,&local_e8);
                      if (cVar13 != '\0') {
                        *puVar35 = 0x58f;
                      }
                    }
                  }
                }
                if (plVar22 != (longlong *)0x0) {
                  LOCK();
                  plVar36 = plVar22 + 1;
                  lVar23 = *plVar36;
                  *(int *)plVar36 = (int)*plVar36 + -1;
                  UNLOCK();
                  if ((int)lVar23 == 1) {
                    (**(code **)*plVar22)(plVar22);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar22 + 0xc);
                    iVar15 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar15 == 1) {
                      (**(code **)(*plVar22 + 8))(plVar22);
                    }
                  }
                }
                goto LAB_1400af8e3;
              }
              lVar23 = param_1[0x42];
              plVar36 = (longlong *)
                        FUN_14055b4d8(*(undefined8 *)(lVar23 + 0x20),0,&Entity::RTTI_Type_Descriptor
                                      ,&EntityHorse::RTTI_Type_Descriptor);
              if (plVar36 == (longlong *)0x0) {
                plVar36 = (longlong *)0x0;
                local_188 = ZEXT816(0);
                plVar33 = (longlong *)0x0;
              }
              else {
                if (*(longlong *)(lVar23 + 0x28) != 0) {
                  LOCK();
                  piVar1 = (int *)(*(longlong *)(lVar23 + 0x28) + 8);
                  *piVar1 = *piVar1 + 1;
                  UNLOCK();
                }
                plVar33 = *(longlong **)(lVar23 + 0x28);
                local_188._8_8_ = plVar33;
                local_188._0_8_ = plVar36;
              }
              bVar10 = false;
              local_178 = '\0';
              bVar25 = false;
              switch(iVar34) {
              case 0xaa:
              case 0x104:
              case 0x128:
              case 0x129:
              case 0x161:
                bVar10 = true;
                bVar25 = false;
                break;
              case 0x142:
              case 0x18c:
                bVar10 = true;
                bVar25 = true;
                break;
              case 0x1a1:
              case 0x1a2:
              case 0x1a3:
                local_178 = '\x01';
                bVar25 = false;
              }
              cVar13 = (**(code **)(*plVar36 + 0x778))(plVar36);
              if (cVar13 == '\0') {
                bVar11 = false;
                uVar29 = extraout_XMM0_Qa_02;
LAB_1400afffd:
                bVar12 = false;
              }
              else {
                plVar22 = (longlong *)(**(code **)(*plVar36 + 0x780))(plVar36,local_c8);
                bVar11 = true;
                uVar29 = extraout_XMM0_Qa_03;
                if (*plVar22 != param_1[10]) goto LAB_1400afffd;
                bVar12 = true;
              }
              plVar22 = local_c0;
              if ((bVar11) && (local_c0 != (longlong *)0x0)) {
                LOCK();
                plVar20 = local_c0 + 1;
                lVar23 = *plVar20;
                *(int *)plVar20 = (int)*plVar20 + -1;
                UNLOCK();
                if ((int)lVar23 == 1) {
                  uVar29 = (**(code **)*local_c0)(local_c0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar22 + 0xc);
                  iVar15 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    uVar29 = (**(code **)(*plVar22 + 8))(plVar22);
                  }
                }
              }
              if (bVar12) {
                *puVar35 = 0x598;
              }
              else if (iVar34 == 0x1a4) {
                cVar13 = (**(code **)(*plVar36 + 0x778))(plVar36);
                uVar29 = extraout_XMM0_Qa_04;
                if (cVar13 == '\0') {
                  *puVar35 = 0x597;
                }
              }
              else if (iVar34 == 0x1a5) {
                *puVar35 = 0x59a;
              }
              else {
                cVar13 = (**(code **)(*plVar36 + 0x358))(plVar36);
                uVar29 = extraout_XMM0_Qa_05;
                if (cVar13 == '\0') {
                  cVar13 = (**(code **)(*plVar36 + 0x898))(plVar36);
                  if (cVar13 == '\0') {
                    uVar29 = extraout_XMM0_Qa_06;
                    if (iVar34 != -1) goto joined_r0x0001400b0117;
                    *puVar35 = 0x554;
                  }
                  else {
                    cVar13 = (**(code **)(*(longlong *)param_1[10] + 0x208))();
                    uVar29 = extraout_XMM0_Qa_07;
                    if (((cVar13 == '\0') && (iVar34 != 0x149)) &&
                       ((cVar13 = (**(code **)(*plVar36 + 0x9f0))(plVar36), cVar13 == '\0' ||
                        (uVar29 = extraout_XMM0_Qa_08, local_178 == '\0')))) {
                      cVar13 = (**(code **)(*plVar36 + 0x9f8))(plVar36);
                      if (((cVar13 == '\0') ||
                          (cVar13 = (**(code **)(*plVar36 + 0x8e0))(plVar36), cVar13 != '\0')) ||
                         (iVar34 != 0x36)) {
                        cVar13 = (**(code **)(*plVar36 + 0xa30))(plVar36);
                        uVar29 = extraout_XMM0_Qa_10;
                        if ((cVar13 == '\0') || (!bVar25)) {
                          if (bVar10) {
                            fVar43 = (float)(**(code **)(*plVar36 + 0x440))(plVar36);
                            uVar29 = (**(code **)(*plVar36 + 0x4d0))(plVar36);
                            if (fVar43 < (float)uVar29) {
                              *puVar35 = 0x555;
                              goto LAB_1400b0052;
                            }
                          }
                          *puVar35 = 0x593;
                        }
                        else {
                          *puVar35 = 0x58f;
                        }
                      }
                      else {
                        *puVar35 = 0x599;
                        uVar29 = extraout_XMM0_Qa_09;
                      }
                    }
                    else if (*puVar35 == 0xffffffff) {
                      *puVar35 = 0x567;
                    }
                  }
                }
                else {
joined_r0x0001400b0117:
                  if (bVar10) {
                    *puVar35 = 0x553;
                  }
                }
              }
LAB_1400b0052:
              lVar23 = param_1[10];
              iVar15 = FUN_14003e910(uVar29,DAT_1407bbab0,0xc);
              if ((iVar15 != 0) || ((*(uint *)(lVar23 + 0x540) & 0x400) == 0)) {
                *local_e8 = 0x55c;
              }
              if (plVar33 != (longlong *)0x0) {
                LOCK();
                plVar36 = plVar33 + 1;
                lVar23 = *plVar36;
                *(int *)plVar36 = (int)*plVar36 + -1;
                UNLOCK();
                if ((int)lVar23 == 1) {
                  (**(code **)*plVar33)(plVar33);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar33 + 0xc);
                  iVar15 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    (**(code **)(*plVar33 + 8))(plVar33);
                  }
                }
              }
              goto LAB_1400af8e3;
            }
            lVar23 = param_1[0x42];
            plVar33 = (longlong *)
                      FUN_14055b4d8(*(undefined8 *)(lVar23 + 0x20),0,&Entity::RTTI_Type_Descriptor,
                                    &Wolf::RTTI_Type_Descriptor);
            if (plVar33 == (longlong *)0x0) {
              plVar33 = (longlong *)0x0;
              local_188 = ZEXT816(0);
              uVar29 = 0;
              plVar22 = (longlong *)0x0;
            }
            else {
              if (*(longlong *)(lVar23 + 0x28) != 0) {
                LOCK();
                piVar1 = (int *)(*(longlong *)(lVar23 + 0x28) + 8);
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              plVar22 = *(longlong **)(lVar23 + 0x28);
              local_188._8_8_ = plVar22;
              local_188._0_8_ = plVar33;
              uVar29 = extraout_XMM0_Qa_11;
            }
            iVar15 = FUN_14003e910(uVar29,DAT_1407bbab0,0xc);
            if ((iVar15 != 0) || ((*(uint *)(param_1[10] + 0x540) & 0x400) == 0)) {
              *puVar38 = 0x55c;
            }
            cVar13 = (**(code **)(*plVar33 + 0x778))(plVar33);
            if (cVar13 == '\0') {
              bVar10 = false;
LAB_1400b0305:
              bVar25 = bVar10;
              bVar10 = false;
            }
            else {
              plVar20 = (longlong *)(**(code **)(*plVar33 + 0x780))(plVar33,local_c8);
              bVar25 = true;
              bVar10 = true;
              if (*plVar20 != param_1[10]) goto LAB_1400b0305;
              bVar10 = true;
            }
            plVar20 = local_c0;
            if ((bVar25) && (local_c0 != (longlong *)0x0)) {
              LOCK();
              plVar2 = local_c0 + 1;
              lVar23 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar23 == 1) {
                (**(code **)*local_c0)(local_c0);
                LOCK();
                piVar1 = (int *)((longlong)plVar20 + 0xc);
                iVar15 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar15 == 1) {
                  (**(code **)(*plVar20 + 8))(plVar20);
                }
              }
            }
            if (bVar10) {
              *puVar35 = 0x598;
            }
            else if (iVar34 == 0x15f) {
              cVar13 = (**(code **)(*plVar33 + 0x868))(plVar33);
              if (cVar13 != '\0') {
                if ((((uint)*(byte *)(*(longlong *)(plVar33[0x26] + 0x148) + 8) ^ ~puVar32[0xc]) &
                    0xf) == 0) {
                  cVar13 = (**(code **)(*plVar33 + 0x878))(plVar33);
                  if (cVar13 != '\0') goto LAB_1400b0652;
LAB_1400b054e:
                  *puVar35 = 0x556;
                }
                else {
                  *puVar35 = 0x82c;
                }
              }
            }
            else if (iVar34 == 0x160) {
              if (((*(byte *)(*(longlong *)(plVar33[0x26] + 0x108) + 8) & 2) == 0) &&
                 (cVar13 = (**(code **)(*plVar33 + 0x868))(plVar33), cVar13 == '\0')) {
                *puVar35 = 0x554;
              }
              else {
                uVar29 = (**(code **)plVar33[0x96])(plVar33 + 0x96,&local_e8);
                uVar21 = (**(code **)(*(longlong *)param_1[10] + 0x308))
                                   ((longlong *)param_1[10],local_c8);
                cVar13 = FUN_140315b10(uVar21,uVar29);
                FUN_140055150(local_c8);
LAB_1400b0529:
                FUN_140055150(&local_e8);
                if (cVar13 != '\0') {
                  cVar13 = (**(code **)(*plVar33 + 0x878))(plVar33);
                  if (cVar13 == '\0') goto LAB_1400b054e;
LAB_1400b0652:
                  *puVar35 = 0x557;
                }
              }
            }
            else if (iVar34 != 0x170) {
              if (iVar34 == 0x1a4) {
                cVar13 = (**(code **)(*plVar33 + 0x778))(plVar33);
                if (cVar13 == '\0') {
                  *puVar35 = 0x597;
                }
              }
              else if (iVar34 == 0x1a5) {
                *puVar35 = 0x59a;
              }
              else {
                cVar13 = (**(code **)(*plVar33 + 0x868))(plVar33);
                if (cVar13 != '\0') {
                  lVar23 = *plVar33;
                  if (local_170 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_170 + 1) = (int)local_170[1] + 1;
                    UNLOCK();
                  }
                  local_e8 = puVar32;
                  plStack_e0 = plVar36;
                  cVar13 = (**(code **)(lVar23 + 0x848))(plVar33,&local_e8);
                  if (cVar13 == '\0') {
                    uVar29 = (**(code **)plVar33[0x96])(plVar33 + 0x96,&local_e8);
                    uVar21 = (**(code **)(*(longlong *)param_1[10] + 0x308))
                                       ((longlong *)param_1[10],local_c8);
                    cVar13 = FUN_140315b10(uVar21,uVar29);
                    FUN_140055150(local_c8);
                    goto LAB_1400b0529;
                  }
                  if (plVar33[0x27] != 0) {
                    LOCK();
                    piVar1 = (int *)(plVar33[0x27] + 8);
                    *piVar1 = *piVar1 + 1;
                    UNLOCK();
                  }
                  plVar36 = (longlong *)plVar33[0x27];
                  iVar15 = *(int *)(*(longlong *)(plVar33[0x26] + 0x128) + 8);
                  if (plVar36 != (longlong *)0x0) {
                    LOCK();
                    plVar20 = plVar36 + 1;
                    lVar23 = *plVar20;
                    *(int *)plVar20 = (int)*plVar20 + -1;
                    UNLOCK();
                    if ((int)lVar23 == 1) {
                      (**(code **)*plVar36)(plVar36);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar36 + 0xc);
                      iVar34 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar34 == 1) {
                        (**(code **)(*plVar36 + 8))(plVar36);
                      }
                    }
                  }
                  fVar43 = (float)(**(code **)(*plVar33 + 0x4d0))(plVar33);
                  if (fVar43 <= (float)iVar15) {
                    cVar13 = (**(code **)(*plVar33 + 0x358))(plVar33);
                    if (((cVar13 == '\0') && (*(int *)(*(longlong *)(plVar33[0x26] + 0xd8) + 8) < 1)
                        ) && (iVar15 = (**(code **)(*plVar33 + 0x820))(plVar33), iVar15 == 0)) {
                      *puVar35 = 0x58f;
                    }
                  }
                  else {
                    *puVar35 = 0x555;
                  }
                }
              }
            }
            goto LAB_1400b0350;
          }
          lVar23 = param_1[10];
          iVar15 = FUN_14003e910(uVar41,DAT_1407bbab0,0xc);
          if ((iVar15 != 0) || ((*(uint *)(lVar23 + 0x540) & 0x400) == 0)) {
            *puVar38 = 0x55c;
          }
          lVar23 = param_1[0x42];
          plVar33 = (longlong *)
                    FUN_14055b4d8(*(undefined8 *)(lVar23 + 0x20),0,&Entity::RTTI_Type_Descriptor,
                                  &Animal::RTTI_Type_Descriptor);
          if (plVar33 == (longlong *)0x0) {
            plVar33 = (longlong *)0x0;
            local_188 = ZEXT816(0);
            plVar22 = (longlong *)0x0;
          }
          else {
            if (*(longlong *)(lVar23 + 0x28) != 0) {
              LOCK();
              piVar1 = (int *)(*(longlong *)(lVar23 + 0x28) + 8);
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            plVar22 = *(longlong **)(lVar23 + 0x28);
            local_188._8_8_ = plVar22;
            local_188._0_8_ = plVar33;
          }
          cVar13 = (**(code **)(*plVar33 + 0x778))(plVar33);
          if (cVar13 == '\0') {
            bVar10 = false;
LAB_1400b072e:
            bVar25 = bVar10;
            bVar10 = false;
          }
          else {
            plVar20 = (longlong *)(**(code **)(*plVar33 + 0x780))(plVar33,local_c8);
            bVar25 = true;
            bVar10 = true;
            if (*plVar20 != param_1[10]) goto LAB_1400b072e;
            bVar10 = true;
          }
          plVar20 = local_c0;
          if ((bVar25) && (local_c0 != (longlong *)0x0)) {
            LOCK();
            plVar2 = local_c0 + 1;
            lVar23 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar23 == 1) {
              (**(code **)*local_c0)(local_c0);
              LOCK();
              piVar1 = (int *)((longlong)plVar20 + 0xc);
              iVar15 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plVar20 + 8))(plVar20);
              }
            }
          }
          if (bVar10) {
            *puVar35 = 0x598;
          }
          else if (iVar34 != -1) {
            if (iVar34 == 0x1a4) {
              cVar13 = (**(code **)(*plVar33 + 0x778))(plVar33);
              if (cVar13 == '\0') {
                *puVar35 = 0x597;
              }
            }
            else if (iVar34 == 0x1a5) {
              *puVar35 = 0x59a;
            }
            else {
              cVar13 = (**(code **)(*plVar33 + 0x358))(plVar33);
              if (((cVar13 == '\0') && (*(int *)(*(longlong *)(plVar33[0x26] + 0xd8) + 8) < 1)) &&
                 (iVar15 = (**(code **)(*plVar33 + 0x820))(plVar33), iVar15 == 0)) {
                lVar23 = *plVar33;
                if (local_170 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_170 + 1) = (int)local_170[1] + 1;
                  UNLOCK();
                }
                local_e8 = puVar32;
                plStack_e0 = plVar36;
                cVar13 = (**(code **)(lVar23 + 0x848))(plVar33,&local_e8);
                if (cVar13 != '\0') {
                  *puVar35 = 0x58f;
                }
              }
            }
          }
        }
      }
      else {
        if (iVar15 != 0x2d650000) {
          if (iVar15 != 0x2d650001) {
            if (iVar15 != 0x2d660001) {
              if (iVar15 != 0x5d484000) goto LAB_1400b0b55;
              lVar23 = param_1[0x42];
              plVar33 = (longlong *)
                        FUN_14055b4d8(*(undefined8 *)(lVar23 + 0x20),0,&Entity::RTTI_Type_Descriptor
                                      ,&Zombie::RTTI_Type_Descriptor);
              if (plVar33 == (longlong *)0x0) {
                plVar33 = (longlong *)0x0;
                local_188 = ZEXT816(0);
                plVar22 = (longlong *)0x0;
              }
              else {
                if (*(longlong *)(lVar23 + 0x28) != 0) {
                  LOCK();
                  piVar1 = (int *)(*(longlong *)(lVar23 + 0x28) + 8);
                  *piVar1 = *piVar1 + 1;
                  UNLOCK();
                }
                plVar22 = *(longlong **)(lVar23 + 0x28);
                local_188._8_8_ = plVar22;
                local_188._0_8_ = plVar33;
              }
              if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x10) < DAT_1407c1b60) &&
                 (FUN_1405593c0(&DAT_1407c1b60), DAT_1407c1b60 == -1)) {
                DAT_1407c1b68 = DAT_1407b86f8;
                _Init_thread_footer(&DAT_1407c1b60);
              }
              cVar13 = (**(code **)(*plVar33 + 0x828))(plVar33);
              if ((((cVar13 != '\0') && (plVar33[0x26] != 0)) &&
                  (*(char *)(*(longlong *)(plVar33[0x26] + 8) + 8) < '\0')) && (iVar34 == 0x142)) {
                lVar23 = *DAT_1407c1b68;
                if (plVar36 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar36 + 1) = (int)plVar36[1] + 1;
                  UNLOCK();
                }
                local_e8 = puVar32;
                plStack_e0 = plVar36;
                cVar13 = (**(code **)(lVar23 + 0x110))(DAT_1407c1b68,&local_e8);
                if (cVar13 == '\0') {
                  *puVar35 = 0x871;
                }
              }
              *puVar38 = 0x55c;
              goto LAB_1400afbb8;
            }
            lVar23 = param_1[0x42];
            plVar33 = (longlong *)
                      FUN_14055b4d8(*(undefined8 *)(lVar23 + 0x20),0,&Entity::RTTI_Type_Descriptor,
                                    &Ocelot::RTTI_Type_Descriptor);
            if (plVar33 == (longlong *)0x0) {
              plVar33 = (longlong *)0x0;
              local_188 = ZEXT816(0);
              uVar29 = 0;
              plVar22 = (longlong *)0x0;
            }
            else {
              if (*(longlong *)(lVar23 + 0x28) != 0) {
                LOCK();
                piVar1 = (int *)(*(longlong *)(lVar23 + 0x28) + 8);
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              plVar22 = *(longlong **)(lVar23 + 0x28);
              local_188._8_8_ = plVar22;
              local_188._0_8_ = plVar33;
              uVar29 = extraout_XMM0_Qa_12;
            }
            iVar15 = FUN_14003e910(uVar29,DAT_1407bbab0,0xc);
            if ((iVar15 != 0) || ((*(uint *)(param_1[10] + 0x540) & 0x400) == 0)) {
              *puVar38 = 0x55c;
            }
            cVar13 = (**(code **)(*plVar33 + 0x778))(plVar33);
            if (cVar13 == '\0') {
              bVar10 = false;
LAB_1400b0eed:
              bVar25 = false;
            }
            else {
              plVar20 = (longlong *)(**(code **)(*plVar33 + 0x780))(plVar33,local_c8);
              bVar10 = true;
              if (*plVar20 != param_1[10]) goto LAB_1400b0eed;
              bVar25 = true;
            }
            plVar20 = local_c0;
            if ((bVar10) && (local_c0 != (longlong *)0x0)) {
              LOCK();
              plVar2 = local_c0 + 1;
              lVar23 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar23 == 1) {
                (**(code **)*local_c0)(local_c0);
                LOCK();
                piVar1 = (int *)((longlong)plVar20 + 0xc);
                iVar15 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar15 == 1) {
                  (**(code **)(*plVar20 + 8))(plVar20);
                }
              }
            }
            if (bVar25) {
              *puVar35 = 0x598;
            }
            else if (iVar34 == 0x1a4) {
              cVar13 = (**(code **)(*plVar33 + 0x778))(plVar33);
              if (cVar13 == '\0') {
                *puVar35 = 0x597;
              }
            }
            else if (iVar34 == 0x1a5) {
              *puVar35 = 0x59a;
            }
            else {
              cVar13 = (**(code **)(*plVar33 + 0x868))(plVar33);
              if (cVar13 == '\0') {
                if (-1 < iVar34) {
                  lVar23 = *plVar33;
                  if (local_170 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_170 + 1) = (int)local_170[1] + 1;
                    UNLOCK();
                  }
                  local_e8 = puVar32;
                  plStack_e0 = plVar36;
                  cVar13 = (**(code **)(lVar23 + 0x848))(plVar33,&local_e8);
                  if (cVar13 != '\0') {
                    *puVar35 = 0x554;
                  }
                }
              }
              else {
                lVar23 = *plVar33;
                if (local_170 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_170 + 1) = (int)local_170[1] + 1;
                  UNLOCK();
                }
                local_e8 = puVar32;
                plStack_e0 = plVar36;
                cVar13 = (**(code **)(lVar23 + 0x848))(plVar33,&local_e8);
                if (cVar13 == '\0') {
                  uVar29 = (**(code **)plVar33[0x96])(plVar33 + 0x96,&local_e8);
                  local_160 = 0x80;
                  uVar21 = (**(code **)(*(longlong *)param_1[10] + 0x308))
                                     ((longlong *)param_1[10],local_c8);
                  local_160 = 0x180;
                  cVar13 = FUN_140315b10(uVar21,uVar29);
                  if ((cVar13 == '\0') ||
                     ((*(byte *)(*(longlong *)(plVar33[0x26] + 0x108) + 8) & 2) != 0)) {
                    bVar10 = false;
                  }
                  else {
                    bVar10 = true;
                  }
                  FUN_140055150(local_c8);
                  FUN_140055150(&local_e8);
                  if (bVar10) {
                    cVar13 = (**(code **)(*plVar33 + 0x878))(plVar33);
                    *puVar35 = (cVar13 != '\0') + 0x556;
                  }
                }
                else {
                  cVar13 = (**(code **)(*plVar33 + 0x358))(plVar33);
                  if (cVar13 == '\0') {
                    if (*(int *)(*(longlong *)(plVar33[0x26] + 0xd8) + 8) < 1) {
                      iVar15 = (**(code **)(*plVar33 + 0x820))(plVar33);
                      if (iVar15 == 0) {
                        *puVar35 = 0x58f;
                      }
                    }
                    else {
                      *puVar35 = 0x553;
                    }
                  }
                }
              }
            }
LAB_1400b0350:
            if (plVar22 != (longlong *)0x0) {
              LOCK();
              plVar36 = plVar22 + 1;
              lVar23 = *plVar36;
              *(int *)plVar36 = (int)*plVar36 + -1;
              UNLOCK();
              if ((int)lVar23 == 1) {
                (**(code **)*plVar22)(plVar22);
                LOCK();
                piVar1 = (int *)((longlong)plVar22 + 0xc);
                iVar15 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar15 == 1) {
                  (**(code **)(*plVar22 + 8))(plVar22);
                }
              }
            }
            goto LAB_1400af8e3;
          }
          iVar15 = FUN_14003e910(uVar41,DAT_1407bbab0,0xc);
          if ((iVar15 != 0) || ((*(uint *)(lVar23 + 0x540) & 0x400) == 0)) {
            *puVar38 = 0x55c;
          }
          lVar23 = param_1[0x42];
          plVar33 = (longlong *)
                    FUN_14055b4d8(*(undefined8 *)(lVar23 + 0x20),0,&Entity::RTTI_Type_Descriptor,
                                  &Animal::RTTI_Type_Descriptor);
          if (plVar33 == (longlong *)0x0) {
            plVar33 = (longlong *)0x0;
            local_188 = ZEXT816(0);
            plVar22 = (longlong *)0x0;
          }
          else {
            if (*(longlong *)(lVar23 + 0x28) != 0) {
              LOCK();
              piVar1 = (int *)(*(longlong *)(lVar23 + 0x28) + 8);
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            plVar22 = *(longlong **)(lVar23 + 0x28);
            local_188._8_8_ = plVar22;
            local_188._0_8_ = plVar33;
          }
          cVar13 = (**(code **)(*plVar33 + 0x778))(plVar33);
          if (cVar13 == '\0') {
            uVar29 = extraout_XMM0_Qa_13;
            bVar10 = false;
LAB_1400b11ce:
            bVar25 = bVar10;
            bVar10 = false;
          }
          else {
            plVar20 = (longlong *)(**(code **)(*plVar33 + 0x780))(plVar33,local_c8);
            bVar25 = true;
            uVar29 = extraout_XMM0_Qa_14;
            bVar10 = true;
            if (*plVar20 != param_1[10]) goto LAB_1400b11ce;
            bVar10 = true;
          }
          plVar20 = local_c0;
          if ((bVar25) && (local_c0 != (longlong *)0x0)) {
            LOCK();
            plVar2 = local_c0 + 1;
            lVar23 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar23 == 1) {
              uVar29 = (**(code **)*local_c0)(local_c0);
              LOCK();
              piVar1 = (int *)((longlong)plVar20 + 0xc);
              iVar15 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                uVar29 = (**(code **)(*plVar20 + 8))(plVar20);
              }
            }
          }
          if (bVar10) {
            *puVar35 = 0x598;
          }
          else if (iVar34 < 0x168) {
            if (iVar34 == 0x167) {
              iVar15 = FUN_14003e910(uVar29,DAT_1407bbab0,0xc);
              if ((iVar15 != 0) || ((*(uint *)(param_1[10] + 0x540) & 0x400) == 0)) {
                *local_e8 = 0x55c;
              }
              cVar13 = (**(code **)(*plVar33 + 0x358))(plVar33);
              if (cVar13 == '\0') {
                *puVar35 = 0x577;
              }
            }
            else if (iVar34 != -1) {
              if ((iVar34 != 0x119) && (iVar34 != 0x145)) goto LAB_1400b12af;
              *puVar35 = 0x55d;
            }
          }
          else if (iVar34 == 0x1a4) {
            cVar13 = (**(code **)(*plVar33 + 0x778))(plVar33);
            if (cVar13 == '\0') {
              *puVar35 = 0x597;
            }
          }
          else if (iVar34 == 0x1a5) {
            *puVar35 = 0x59a;
          }
          else {
LAB_1400b12af:
            cVar13 = (**(code **)(*plVar33 + 0x358))(plVar33);
            if ((cVar13 == '\0') &&
               ((*(int *)(*(longlong *)(plVar33[0x26] + 0xd8) + 8) < 1 &&
                (iVar15 = (**(code **)(*plVar33 + 0x820))(plVar33), iVar15 == 0)))) {
              lVar23 = *plVar33;
              if (local_170 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_170 + 1) = (int)local_170[1] + 1;
                UNLOCK();
              }
              local_e8 = puVar32;
              plStack_e0 = plVar36;
              cVar13 = (**(code **)(lVar23 + 0x848))(plVar33,&local_e8);
              if (cVar13 != '\0') {
                *puVar35 = 0x58f;
              }
            }
          }
          goto joined_r0x0001400b151b;
        }
        iVar15 = FUN_14003e910(uVar41,DAT_1407bbab0,0xc);
        if ((iVar15 != 0) || ((*(uint *)(lVar23 + 0x540) & 0x400) == 0)) {
          *puVar38 = 0x55c;
        }
        lVar23 = param_1[0x42];
        plVar33 = (longlong *)
                  FUN_14055b4d8(*(undefined8 *)(lVar23 + 0x20),0,&Entity::RTTI_Type_Descriptor,
                                &Animal::RTTI_Type_Descriptor);
        if (plVar33 == (longlong *)0x0) {
          plVar33 = (longlong *)0x0;
          local_188 = ZEXT816(0);
          plVar22 = (longlong *)0x0;
        }
        else {
          if (*(longlong *)(lVar23 + 0x28) != 0) {
            LOCK();
            piVar1 = (int *)(*(longlong *)(lVar23 + 0x28) + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          plVar22 = *(longlong **)(lVar23 + 0x28);
          local_188._8_8_ = plVar22;
          local_188._0_8_ = plVar33;
        }
        cVar13 = (**(code **)(*plVar33 + 0x778))(plVar33);
        if (cVar13 == '\0') {
          bVar10 = false;
LAB_1400b1409:
          bVar25 = bVar10;
          bVar10 = false;
        }
        else {
          plVar20 = (longlong *)(**(code **)(*plVar33 + 0x780))(plVar33,local_c8);
          bVar25 = true;
          bVar10 = true;
          if (*plVar20 != param_1[10]) goto LAB_1400b1409;
          bVar10 = true;
        }
        plVar20 = local_c0;
        if ((bVar25) && (local_c0 != (longlong *)0x0)) {
          LOCK();
          plVar2 = local_c0 + 1;
          lVar23 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar23 == 1) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*plVar20 + 8))(plVar20);
            }
          }
        }
        if (bVar10) {
          *puVar35 = 0x598;
        }
        else if (iVar34 != -1) {
          if (iVar34 == 0x145) {
            *puVar35 = 0x55d;
          }
          else if (iVar34 == 0x1a4) {
            cVar13 = (**(code **)(*plVar33 + 0x778))(plVar33);
            if (cVar13 == '\0') {
              *puVar35 = 0x597;
            }
          }
          else if (iVar34 == 0x1a5) {
            *puVar35 = 0x59a;
          }
          else {
            cVar13 = (**(code **)(*plVar33 + 0x358))(plVar33);
            if (((cVar13 == '\0') && (*(int *)(*(longlong *)(plVar33[0x26] + 0xd8) + 8) < 1)) &&
               (iVar15 = (**(code **)(*plVar33 + 0x820))(plVar33), iVar15 == 0)) {
              lVar23 = *plVar33;
              if (local_170 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_170 + 1) = (int)local_170[1] + 1;
                UNLOCK();
              }
              local_e8 = puVar32;
              plStack_e0 = plVar36;
              cVar13 = (**(code **)(lVar23 + 0x848))(plVar33,&local_e8);
              if (cVar13 != '\0') {
                *puVar35 = 0x58f;
              }
            }
          }
        }
      }
joined_r0x0001400b151b:
      if (plVar22 != (longlong *)0x0) {
        LOCK();
        plVar36 = plVar22 + 1;
        lVar23 = *plVar36;
        *(int *)plVar36 = (int)*plVar36 + -1;
        UNLOCK();
        if ((int)lVar23 == 1) {
          (**(code **)*plVar22)(plVar22);
          LOCK();
          piVar1 = (int *)((longlong)plVar22 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar22 + 8))(plVar22);
          }
        }
      }
    }
LAB_1400af8e3:
    plVar36 = local_170;
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar33 = local_170 + 1;
      lVar23 = *plVar33;
      *(int *)plVar33 = (int)*plVar33 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar1 = (int *)((longlong)plVar36 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plVar36 + 8))(plVar36);
        }
      }
    }
    goto LAB_1400b1815;
  }
  iVar15 = piVar1[1];
  iVar34 = piVar1[2];
  iVar16 = piVar1[3];
  local_170 = (longlong *)CONCAT44(local_170._4_4_,iVar16);
  local_118 = (uint *)CONCAT44(local_118._4_4_,piVar1[4]);
  local_160 = iVar15;
  iVar26 = (*(code *)**(undefined8 **)param_1[8])((undefined8 *)param_1[8],iVar15,iVar34,iVar16);
  iVar16 = (**(code **)(*(longlong *)param_1[8] + 0x30))
                     ((longlong *)param_1[8],iVar15,iVar34,iVar16);
  plVar33 = (longlong *)*param_1;
  local_138 = iVar16;
  if (((plVar33 != (longlong *)0x0) &&
      (lVar23 = (**(code **)(*plVar33 + 0xd8))(plVar33), lVar23 != 0)) &&
     (lVar23 = (**(code **)(*(longlong *)*param_1 + 0xd8))(), iVar40 = local_138, iVar15 = local_160
     , *(char *)(lVar23 + 0x1069) == '\0')) {
    puVar24 = *(undefined8 **)(lVar23 + 0xaa8 + (longlong)*(int *)(lVar23 + 8) * 0x18);
    puVar8 = *(undefined8 **)(lVar23 + 0xab0 + (longlong)*(int *)(lVar23 + 8) * 0x18);
    while ((puVar24 != puVar8 &&
           (cVar13 = (**(code **)(*(longlong *)*puVar24 + 0x30))((longlong *)*puVar24,iVar26,iVar40)
           , cVar13 == '\0'))) {
      puVar24 = puVar24 + 1;
    }
    iVar15 = local_160;
    iVar16 = local_138;
    if ((*(int *)(lVar23 + 8) == 0) && (iVar26 == 0x1a)) {
      FUN_140083c10(lVar23,8,0);
      iVar15 = local_160;
      iVar16 = local_138;
    }
  }
  plVar22 = local_170;
  plVar33 = (longlong *)*param_1;
  pcVar9 = *(code **)(*plVar33 + 0x40);
  if (local_158 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_158 + 1) = (int)local_158[1] + 1;
    UNLOCK();
  }
  local_188._8_8_ = plVar36;
  local_188._0_8_ = puVar32;
  lVar23 = param_1[8];
  if (param_1[0xb] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xb] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_118 = (uint *)param_1[10];
  plStack_110 = (longlong *)param_1[0xb];
  cVar13 = (*pcVar9)(plVar33,&local_118,lVar23,local_188);
  if ((cVar13 == '\0') || (puVar32 == (uint *)0x0)) goto switchD_1400b17c3_caseD_3;
  iVar40 = *(int *)(*(longlong *)(DAT_1407bdbd0 + (ulonglong)puVar32[8] * 8) + 0x20);
  if (iVar40 < 0x52) {
    if (iVar40 != 0x51) {
      switch(iVar40) {
      case 6:
      case 0x1f:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
        break;
      default:
        goto switchD_1400b171a_caseD_7;
      }
    }
switchD_1400b171a_caseD_6:
    *puVar35 = 0x56d;
  }
  else {
    if (iVar40 < 0x104) {
      if (iVar40 == 0x103) goto switchD_1400b178b_caseD_181;
      if (iVar40 != 0x53) goto switchD_1400b171a_caseD_7;
      goto switchD_1400b171a_caseD_6;
    }
    switch(iVar40) {
    case 0x122:
    case 0x123:
    case 0x124:
    case 0x125:
    case 0x126:
      *puVar35 = 0x56e;
      break;
    case 0x127:
    case 0x174:
      goto switchD_1400b171a_caseD_6;
    default:
switchD_1400b171a_caseD_7:
      *puVar35 = 0x55b;
      break;
    case 0x141:
      *puVar35 = 0x56b;
      break;
    case 0x15f:
      if (puVar32[0xc] == 0xf) {
        switch(iVar26) {
        case 2:
        case 6:
        case 0x27:
        case 0x28:
        case 0x3b:
        case 0x68:
        case 0x69:
        case 0x8d:
        case 0x8e:
          *puVar35 = 0x565;
        }
      }
      break;
    case 0x181:
switchD_1400b178b_caseD_181:
      *puVar35 = 0x57a;
      break;
    case 0x191:
      *puVar35 = 0x596;
      break;
    case 0x1a4:
      *puVar35 = 0x599;
    }
  }
switchD_1400b17c3_caseD_3:
  switch(iVar26) {
  case 0x17:
  case 0x3a:
  case 0x3d:
  case 0x3e:
  case 0x40:
  case 0x45:
  case 0x4d:
  case 0x60:
  case 0x6b:
  case 0x74:
  case 0x75:
  case 0x8a:
  case 0x8f:
  case 0x91:
    *local_e8 = 0x552;
    *puVar35 = 0x52d;
    goto LAB_1400b1815;
  default:
    goto switchD_1400b175f_caseD_18;
  case 0x19:
    uVar17 = 0x552;
    if (*(char *)(param_1[10] + 0x4bf) == '\0') {
      uVar17 = 0x562;
    }
    *local_e8 = uVar17;
    *puVar35 = 0x568;
    goto LAB_1400b1815;
  case 0x1a:
    if (cVar13 != '\0') {
      *puVar35 = 0x560;
      *local_e8 = 0x552;
      uVar41 = (ulonglong)uVar18;
      break;
    }
    goto LAB_1400b1b66;
  case 0x1b:
  case 0x1c:
  case 0x42:
  case 0x9d:
    if (cVar13 == '\0') goto LAB_1400b1b66;
    *puVar35 = 0x55b;
    *local_e8 = 0x552;
    uVar41 = (ulonglong)uVar18;
    break;
  case 0x36:
    *local_e8 = 0x552;
    plVar33 = (longlong *)
              (**(code **)(*DAT_1407aae38 + 0x3a0))(DAT_1407aae38,local_c8,param_1[8],iVar15);
    plVar36 = local_c0;
    uVar17 = 0xffffffff;
    if (*plVar33 != 0) {
      uVar17 = 0x567;
    }
    *puVar35 = uVar17;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar33 = local_c0 + 1;
      lVar23 = *plVar33;
      *(int *)plVar33 = (int)*plVar33 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar36 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plVar36 + 8))(plVar36);
        }
      }
    }
    uVar41 = (ulonglong)uVar18;
    break;
  case 0x47:
    if (*puVar35 != 0x55b) goto LAB_1400b1b66;
    *puVar35 = 0xffffffff;
    *local_e8 = 0x552;
    uVar41 = (ulonglong)uVar18;
    break;
  case 0x49:
    if (cVar13 == '\0') goto LAB_1400b1b66;
    *puVar35 = 0x52d;
    *local_e8 = 0x552;
    uVar41 = (ulonglong)uVar18;
    break;
  case 0x54:
    if ((cVar13 == '\0') && (puVar32 != (uint *)0x0)) {
      if (*(int *)(*(longlong *)(DAT_1407bdbd0 + (ulonglong)puVar32[8] * 8) + 0x20) - 0x8d0U < 0xb)
      {
        *puVar35 = 0x562;
        *local_e8 = 0x552;
        goto LAB_1400b1815;
      }
    }
    else {
      pcVar9 = *(code **)(*DAT_1407aae30 + 0x1c8);
      if (param_1[0xb] != 0) {
        LOCK();
        piVar1 = (int *)(param_1[0xb] + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_170 = (longlong *)param_1[10];
      lStack_168 = param_1[0xb];
      cVar13 = (*pcVar9)(DAT_1407aae30,param_1[8],iVar15,iVar34);
      if (cVar13 != '\0') {
        *puVar35 = 0x558;
      }
    }
    *local_e8 = 0x552;
    goto LAB_1400b1815;
  case 0x5c:
    if ((*(char *)(param_1[10] + 0x4bf) != '\0') || (0x13 < *(int *)(param_1[10] + 0x370)))
    goto LAB_1400b1b66;
    *local_e8 = 0x55f;
    *puVar35 = 0x55f;
    uVar41 = (ulonglong)uVar18;
    break;
  case 0x5d:
  case 0x5e:
  case 0x95:
  case 0x96:
    *puVar35 = 0x52d;
    *local_e8 = 0x552;
    goto LAB_1400b1815;
  case 0x76:
    if (((puVar32 == (uint *)0x0) ||
        (iVar16 = *(int *)(*(longlong *)(DAT_1407bdbd0 + (ulonglong)puVar32[8] * 8) + 0x20),
        iVar15 = (**(code **)(*(longlong *)param_1[8] + 0x30))
                           ((longlong *)param_1[8],iVar15,iVar34,(ulonglong)plVar22 & 0xffffffff),
        iVar16 != 0x176)) || (iVar15 < 1)) goto LAB_1400b1b66;
    *puVar35 = 0x55e;
    *local_e8 = 0x552;
    uVar41 = (ulonglong)uVar18;
    break;
  case 0x82:
  case 0x92:
  case 0x9a:
  case 0x9e:
    *puVar35 = 0x567;
    *local_e8 = 0x552;
LAB_1400b1815:
    uVar41 = (ulonglong)uVar18;
    break;
  case 0x8c:
    if ((((cVar13 == '\0') && (puVar32 != (uint *)0x0)) && (iVar16 == 0)) &&
       (iVar15 = *(int *)(*(longlong *)(DAT_1407bdbd0 + (ulonglong)puVar32[8] * 8) + 0x20),
       iVar15 < 0x100)) {
      switch(iVar15) {
      case 6:
      case 0x20:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x51:
switchD_1400b1b4d_caseD_6:
        *puVar35 = 0x56d;
        break;
      case 0x1f:
        if (puVar32[0xc] != 1) goto switchD_1400b1b4d_caseD_6;
      }
    }
    goto switchD_1400b175f_caseD_18;
  }
LAB_1400b181e:
  plVar36 = local_158;
  uVar42 = local_134;
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar33 = local_158 + 1;
    lVar23 = *plVar33;
    *(int *)plVar33 = (int)*plVar33 + -1;
    UNLOCK();
    if ((int)lVar23 == 1) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar1 = (int *)((longlong)plVar36 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      uVar42 = local_134;
      if (iVar15 == 1) {
        (**(code **)(*plVar36 + 8))(plVar36);
        uVar42 = local_134;
      }
    }
  }
LAB_1400b185c:
  iVar15 = (int)uVar41;
  if ((DAT_1407bd9c8 == 0) ||
     ((*(char *)(DAT_1407bd9c8 + 0x55) != '\0' && (*(char *)(DAT_1407bd9c8 + 0x54) == '\0')))) {
    if ((DAT_1407bb76c == '\0') || (iVar15 == 0xff)) {
      iVar34 = 0;
    }
    else {
      iVar34 = iVar15 + 1;
    }
    plVar36 = *(longlong **)((&DAT_1407bda58)[iVar34] + 0x48);
    if (plVar36 != (longlong *)0x0) {
      (**(code **)(*plVar36 + 400))(plVar36,local_14c,0xffffffff,uVar42);
    }
  }
  plVar36 = (longlong *)0x0;
  iVar34 = 0;
  iVar16 = FUN_140001078(&DAT_140783060,uVar41 & 0xffffffff,0x21);
  if ((iVar16 == 0) ||
     (cVar13 = (**(code **)(*(longlong *)*param_1 + 200))((longlong *)*param_1,0x21), cVar13 == '\0'
     )) {
    iVar16 = FUN_140001078(&DAT_140783060,uVar41 & 0xffffffff,0x22);
    if (iVar16 != 0) {
      cVar13 = (**(code **)(*(longlong *)*param_1 + 200))((longlong *)*param_1,0x22);
      iVar34 = 0;
      if (cVar13 != '\0') {
        iVar34 = -1;
      }
    }
  }
  else {
    iVar34 = 1;
  }
  iVar16 = DAT_1407aaa1c;
  if (iVar15 == 0) {
    if (iVar34 != 0) goto LAB_1400b1cee;
    if (DAT_1407aaa25 != '\0') {
      if (DAT_1407aaa1c != 0) {
        DAT_1407aaa20 = 1;
      }
      DAT_1407aaa1c = 0;
      iVar34 = iVar16;
      goto LAB_1400b1ce6;
    }
  }
  else {
LAB_1400b1ce6:
    if (iVar34 != 0) {
LAB_1400b1cee:
      lVar23 = *(longlong *)(param_1[10] + 0x340);
      if (iVar34 < 1) {
        iVar16 = iVar34;
        if (iVar34 < 0) {
          iVar16 = -1;
        }
      }
      else {
        iVar16 = 1;
      }
      uVar17 = *(int *)(lVar23 + 0x28) - iVar16;
      *(uint *)(lVar23 + 0x28) = uVar17;
      if ((int)uVar17 < 0) {
        do {
          uVar17 = uVar17 + 9;
        } while ((int)uVar17 < 0);
        *(uint *)(lVar23 + 0x28) = uVar17;
      }
      if (8 < uVar17) {
        do {
          uVar17 = uVar17 - 9;
        } while (8 < (int)uVar17);
        *(uint *)(lVar23 + 0x28) = uVar17;
      }
      if (((longlong *)*param_1 != (longlong *)0x0) &&
         (lVar23 = (**(code **)(*(longlong *)*param_1 + 0xd8))(), lVar23 != 0)) {
        lVar23 = (**(code **)(*(longlong *)*param_1 + 0xd8))();
        uVar17 = *(uint *)(*(longlong *)(param_1[10] + 0x340) + 0x28);
        if (uVar17 < 9) {
          uVar28 = (ulonglong)uVar17;
          lVar19 = *(longlong *)(*(longlong *)(param_1[10] + 0x340) + 8);
          lVar3 = *(longlong *)(lVar19 + 8 + uVar28 * 0x10);
          if (lVar3 != 0) {
            LOCK();
            piVar1 = (int *)(lVar3 + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_148 = *(longlong *)(lVar19 + uVar28 * 0x10);
          plVar36 = *(longlong **)(lVar19 + 8 + uVar28 * 0x10);
        }
        else {
          local_148 = 0;
        }
        local_158 = &local_148;
        plStack_140 = plVar36;
        if ((*(int *)(lVar23 + 8) == 0) || (*(int *)(lVar23 + 8) == 7)) {
          if ((local_148 == 0) || (*(int *)(local_148 + 0x20) != 0x15a)) {
            uVar29 = 0;
          }
          else {
            uVar29 = 7;
          }
          FUN_140083c10(lVar23,uVar29,0);
        }
        plVar36 = plStack_140;
        if (plStack_140 != (longlong *)0x0) {
          LOCK();
          plVar33 = plStack_140 + 1;
          lVar23 = *plVar33;
          *(int *)plVar33 = (int)*plVar33 + -1;
          UNLOCK();
          if ((int)lVar23 == 1) {
            (**(code **)*plStack_140)(plStack_140);
            LOCK();
            piVar1 = (int *)((longlong)plVar36 + 0xc);
            iVar16 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*plVar36 + 8))(plVar36);
            }
          }
        }
      }
      FUN_140113890(param_1[10]);
      lVar23 = param_1[0x43];
      if (*(char *)(lVar23 + 0x170) != '\0') {
        if (iVar34 < 1) {
          if (iVar34 < 0) {
            iVar34 = -1;
          }
        }
        else {
          iVar34 = 1;
        }
        *(float *)(lVar23 + 0x174) = (float)iVar34 * 0.25 + *(float *)(lVar23 + 0x174);
      }
    }
  }
  cVar13 = (**(code **)(*(longlong *)*param_1 + 200))((longlong *)*param_1,0x20);
  cVar39 = (char)uVar41;
  if (cVar13 != '\0') {
    if ((*(ulonglong *)(param_1[10] + 0x5a0) & 0x100000000) != 0) {
      FUN_140113080(param_1[10],0);
      *(int *)(param_1[10] + 0x5c4) = (int)param_1[0x3c];
    }
    cVar13 = FUN_14000100c(&DAT_140783060,uVar41 & 0xffffffff,0x20);
    if ((cVar13 == '\0') &&
       (((iVar15 != 0 || (DAT_1407aaa25 == cVar39)) || (DAT_1407aa9fc == cVar39)))) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    cVar13 = FUN_140001000(&DAT_140783060,uVar41 & 0xffffffff,0x20);
    if ((cVar13 == '\0') &&
       (((iVar15 != 0 || (DAT_1407aaa25 == cVar39)) || (DAT_1407aa9f0 == cVar39)))) {
      bVar25 = false;
    }
    else {
      bVar25 = true;
    }
    if (bVar10) {
      FUN_140113080(param_1[10],0);
      *(int *)(param_1[10] + 0x5c4) = (int)param_1[0x3c];
    }
    plVar36 = (longlong *)param_1[10];
    if (bVar25) {
      FUN_140112a90();
    }
    else {
      cVar13 = (**(code **)(*plVar36 + 0x590))(plVar36);
      if (((cVar13 == '\0') || (plVar36[0xb] == 0)) || (*(char *)(plVar36[0xb] + 0x268) == '\0')) {
        *(undefined4 *)(plVar36 + 0xb8) = 0;
        (**(code **)(**(longlong **)plVar36[0xac] + 0x20))();
      }
    }
  }
  cVar13 = FUN_140001000(&DAT_140783060,uVar41 & 0xffffffff,0x1f);
  if ((cVar13 == '\0') &&
     (((iVar15 != 0 || (DAT_1407aaa25 == cVar39)) || (DAT_1407aa9f1 == cVar39)))) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (*(longlong *)(param_1[10] + 0x4e0) == 0) {
    cVar13 = (**(code **)(*(longlong *)*param_1 + 200))((longlong *)*param_1,0x1f);
    if (cVar13 != '\0') {
      plVar36 = (longlong *)param_1[10];
      if (*(char *)((longlong)plVar36 + 0x4bf) == '\0') {
        lVar23 = plVar36[0xb9];
        bVar25 = *(float *)param_1[5] * 0.25 <= (float)((int)param_1[0x3c] - (int)lVar23);
        cVar13 = (**(code **)(*plVar36 + 0x200))();
        if (((cVar13 != '\0') ||
            (cVar13 = (**(code **)(*(longlong *)param_1[10] + 0x228))(), cVar13 != '\0')) ||
           (cVar13 = (**(code **)(*(longlong *)param_1[10] + 0x590))(), cVar13 != '\0')) {
          bVar25 = false;
        }
        if (bVar10) {
          cVar13 = (**(code **)(*(longlong *)param_1[10] + 0x590))();
          if (cVar13 != '\0') {
            *(int *)(param_1[10] + 0x5c8) =
                 (int)(*(float *)param_1[5] + *(float *)param_1[5] + (float)(int)param_1[0x3c]);
          }
          if (((int)lVar23 == 0) || (bVar25)) {
            cVar13 = (**(code **)(*(longlong *)param_1[10] + 0x590))();
            FUN_140113080(param_1[10],1);
            uVar41 = (ulonglong)uVar18;
            if (cVar13 == '\0') goto LAB_1400b209e;
            *(int *)(param_1[10] + 0x5c8) =
                 (int)(*(float *)param_1[5] + *(float *)param_1[5] + (float)(int)param_1[0x3c]);
            goto LAB_1400b21bf;
          }
        }
        else {
          *(undefined4 *)((longlong *)param_1[10] + 0xb9) = 0;
        }
        uVar41 = (ulonglong)uVar18;
      }
      else {
        cVar13 = FUN_140112c00();
        lVar23 = param_1[10];
        if (*(int *)(lVar23 + 0x634) == 4) {
          if (cVar13 == '\0') {
            if ((bVar10) &&
               (*(float *)param_1[5] * 0.25 <=
                (float)((int)param_1[0x3c] - *(int *)(lVar23 + 0x5c8)))) {
              FUN_140113080(lVar23,1);
LAB_1400b209e:
              *(int *)(param_1[10] + 0x5c8) = (int)param_1[0x3c];
            }
          }
          else {
            *(int *)(lVar23 + 0x5c8) = (int)param_1[0x3c];
          }
        }
      }
    }
  }
  else if (!bVar10) {
    plVar36 = (longlong *)*param_1;
    pcVar9 = *(code **)(*plVar36 + 0x88);
    if (param_1[0xb] != 0) {
      LOCK();
      piVar1 = (int *)(param_1[0xb] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_148 = param_1[10];
    plStack_140 = (longlong *)param_1[0xb];
    (*pcVar9)(plVar36,&local_148);
  }
LAB_1400b21bf:
  if (((DAT_1407bb870 != '\0') &&
      (lVar23 = param_1[10], (*(ulonglong *)(lVar23 + 0x5a0) & 0x1000000000000) != 0)) &&
     (DAT_1407bb5e0 - DAT_1407bb5d8 >> 5 != 0)) {
    uVar18 = *(uint *)(lVar23 + 0x400);
    uVar17 = uVar18 + 1;
    *(uint *)(lVar23 + 0x400) = uVar17;
    if ((ulonglong)(DAT_1407bb5e0 - DAT_1407bb5d8 >> 5) < (ulonglong)uVar17) {
      *(undefined4 *)(lVar23 + 0x400) = 0;
      puVar37 = (undefined *)0x0;
      ppuVar30 = &PTR_140610690;
    }
    else {
      if ((uVar17 == 0) ||
         (ppuVar30 = (undefined **)((ulonglong)uVar18 * 0x20 + DAT_1407bb5d8),
         (undefined **)(lVar23 + 0x3c0) == ppuVar30)) goto LAB_1400b2277;
      puVar37 = ppuVar30[2];
      if ((undefined *)0x7 < ppuVar30[3]) {
        ppuVar30 = (undefined **)*ppuVar30;
      }
    }
    FUN_1400549d0(lVar23 + 0x3c0,ppuVar30,puVar37);
  }
LAB_1400b2277:
  iVar15 = *(int *)(param_1[10] + 0x5c0);
  if (0 < iVar15) {
    *(int *)(param_1[10] + 0x5c0) = iVar15 + -1;
  }
  if (((*(ulonglong *)(param_1[10] + 0x5a0) & 0x10000000000) != 0) &&
     (cVar13 = (**(code **)(*(longlong *)*param_1 + 200))((longlong *)*param_1,0x28), cVar13 != '\0'
     )) {
    plVar36 = (longlong *)param_1[10];
    lVar23 = *plVar36;
    iVar15 = (**(code **)(lVar23 + 0x6d0))(plVar36);
    iVar15 = iVar15 + 1;
    (**(code **)(lVar23 + 0x6d8))
              (plVar36,iVar15 + (iVar15 / 3 + (iVar15 >> 0x1f) +
                                (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) &
                                      0xffffffffU) >> 0x1f)) * -3);
  }
  if (((*(ulonglong *)(param_1[10] + 0x5a0) & 0x20000000000) != 0) &&
     (cVar13 = (**(code **)(*(longlong *)*param_1 + 200))((longlong *)*param_1,0x29), cVar13 != '\0'
     )) {
    FUN_1402668d0(&DAT_1407bc300,uVar41 & 0xffffffff,0x21);
    lVar23 = FUN_140352410();
    if (9 < (ulonglong)(lVar23 - _DAT_1407bd9d8)) {
      _DAT_1407bd9d8 = lVar23;
      (**(code **)(**(longlong **)(DAT_140790e60 + 0x228) + 0x20))
                (*(longlong **)(DAT_140790e60 + 0x228),4,0x3f800000,0x3f800000);
    }
  }
  if (((*(ulonglong *)(param_1[10] + 0x5a0) & 0x800000000) != 0) &&
     (cVar13 = (**(code **)(*(longlong *)*param_1 + 200))((longlong *)*param_1,0x23),
     lVar23 = DAT_140790e60, cVar13 != '\0')) {
    if (*(longlong *)(DAT_140790e60 + 0x58) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(DAT_140790e60 + 0x58) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar38 = *(uint **)(lVar23 + 0x50);
    plVar36 = *(longlong **)(lVar23 + 0x58);
    local_108 = puVar38;
    plStack_100 = plVar36;
    cVar13 = (**(code **)(*(longlong *)puVar38 + 0x200))(puVar38);
    if ((cVar13 == '\0') && (lVar23 = FUN_140352410(), 9 < (ulonglong)(lVar23 - _DAT_1407bd9d8))) {
      _DAT_1407bd9d8 = lVar23;
      (**(code **)(**(longlong **)(DAT_140790e60 + 0x228) + 0x20))
                (*(longlong **)(DAT_140790e60 + 0x228),4,0x3f800000,0x3f800000);
    }
    cVar13 = (**(code **)(*(longlong *)*param_1 + 0xb0))();
    if (cVar13 == '\0') {
      if (plVar36 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar36 + 1) = (int)plVar36[1] + 1;
        UNLOCK();
      }
      local_188._8_8_ = plStack_100;
      local_188._0_8_ = local_108;
      FUN_140030170();
    }
    else {
      (**(code **)(*(longlong *)puVar38 + 0x860))(puVar38);
    }
    if (plVar36 != (longlong *)0x0) {
      LOCK();
      plVar33 = plVar36 + 1;
      lVar23 = *plVar33;
      *(int *)plVar33 = (int)*plVar33 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*plVar36)(plVar36);
        LOCK();
        piVar1 = (int *)((longlong)plVar36 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plVar36 + 8))(plVar36);
        }
      }
    }
  }
  if (((*(ulonglong *)(param_1[10] + 0x5a0) & 0x8000000000) != 0) &&
     (cVar13 = (**(code **)(*(longlong *)*param_1 + 200))((longlong *)*param_1,0x27),
     lVar23 = DAT_140790e60, cVar13 != '\0')) {
    if (*(longlong *)(DAT_140790e60 + 0x58) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(DAT_140790e60 + 0x58) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_148 = *(longlong *)(lVar23 + 0x50);
    plVar36 = *(longlong **)(lVar23 + 0x58);
    plStack_140 = plVar36;
    cVar13 = (**(code **)(*(longlong *)*param_1 + 0xa0))();
    if (cVar13 == '\0') {
      piVar1 = (int *)param_1[0x42];
      if (((piVar1 == (int *)0x0) || (*piVar1 != 0)) ||
         (iVar15 = (*(code *)**(undefined8 **)param_1[8])
                             ((undefined8 *)param_1[8],piVar1[1],piVar1[2]), iVar15 != 0x3a)) {
        lVar23 = FUN_140352410();
        if (9 < (ulonglong)(lVar23 - _DAT_1407bd9d8)) {
          _DAT_1407bd9d8 = lVar23;
          (**(code **)(**(longlong **)(DAT_140790e60 + 0x228) + 0x20))
                    (*(longlong **)(DAT_140790e60 + 0x228),4,0x3f800000,0x3f800000);
        }
        if (plVar36 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar36 + 1) = (int)plVar36[1] + 1;
          UNLOCK();
        }
        local_188._8_8_ = plStack_140;
        local_188._0_8_ = local_148;
        FUN_140030430();
      }
      else {
        plVar33 = (longlong *)*param_1;
        pcVar9 = *(code **)(*plVar33 + 0x40);
        local_108 = (uint *)0x0;
        plStack_100 = (longlong *)0x0;
        lVar23 = param_1[8];
        if (plVar36 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar36 + 1) = (int)plVar36[1] + 1;
          UNLOCK();
        }
        local_188._8_8_ = plStack_140;
        local_188._0_8_ = local_148;
        (*pcVar9)(plVar33,local_188,lVar23);
      }
    }
    else {
      lVar23 = FUN_140352410();
      if (9 < (ulonglong)(lVar23 - _DAT_1407bd9d8)) {
        _DAT_1407bd9d8 = lVar23;
        (**(code **)(**(longlong **)(DAT_140790e60 + 0x228) + 0x20))
                  (*(longlong **)(DAT_140790e60 + 0x228),4,0x3f800000,0x3f800000);
      }
      if (plVar36 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar36 + 1) = (int)plVar36[1] + 1;
        UNLOCK();
      }
      local_188._8_8_ = plStack_140;
      local_188._0_8_ = local_148;
      FUN_1400302d0();
    }
    if (plVar36 != (longlong *)0x0) {
      LOCK();
      plVar33 = plVar36 + 1;
      lVar23 = *plVar33;
      *(int *)plVar33 = (int)*plVar33 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*plVar36)(plVar36);
        LOCK();
        piVar1 = (int *)((longlong)plVar36 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plVar36 + 8))(plVar36);
        }
      }
    }
  }
  if ((*(ulonglong *)(param_1[10] + 0x5a0) & 0x1000000000) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"PAUSE PRESS PROCESSING - ipad = %d, NavigateToScene\n",
                  *(undefined4 *)(param_1[10] + 0x5ec));
  }
  if ((((*(ulonglong *)(param_1[10] + 0x5a0) & 0x2000000000) != 0) &&
      (cVar13 = (**(code **)(*(longlong *)*param_1 + 200))((longlong *)*param_1,0x25),
      cVar13 != '\0')) &&
     ((**(code **)(*(longlong *)param_1[10] + 0x858))((longlong *)param_1[10],local_c8),
     local_c0 != (longlong *)0x0)) {
    LOCK();
    plVar36 = local_c0 + 1;
    lVar23 = *plVar36;
    *(int *)plVar36 = (int)*plVar36 + -1;
    UNLOCK();
    if ((int)lVar23 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0);
      }
    }
  }
  if ((iVar34 != 0) || ((*(ulonglong *)(param_1[10] + 0x5a0) & 0x2000000000) != 0)) {
    local_a8 = 0;
    lStack_a0 = 0;
    local_98 = ZEXT816(0);
    FUN_140054cf0(&local_a8,&PTR_140610690);
    (**(code **)(*(longlong *)param_1[10] + 0x740))((longlong *)param_1[10],local_188);
    if ((local_188._0_8_ != 0) &&
       (((*(ulonglong *)(param_1[10] + 0x5a0) & 0x2000000000) == 0 ||
        (*(int *)(local_188._0_8_ + 0x18) != 1)))) {
      plVar36 = (longlong *)FUN_14035c8b0(local_188._0_8_,local_c8);
      if (&local_a8 != plVar36) {
        if (7 < (ulonglong)local_98._8_8_) {
          lVar23 = local_a8;
          if ((0xfff < local_98._8_8_ * 2 + 2U) &&
             (lVar23 = *(longlong *)(local_a8 + -8), 0x1f < (local_a8 - lVar23) - 8U)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          thunk_FUN_1401fe000(lVar23);
        }
        local_a8 = *plVar36;
        lStack_a0 = plVar36[1];
        local_98 = *(undefined1 (*) [16])(plVar36 + 2);
        plVar36[2] = 0;
        plVar36[3] = 7;
        *(undefined2 *)plVar36 = 0;
      }
      FUN_140055150(local_c8);
    }
    if (((*(ulonglong *)(param_1[10] + 0x5a0) & 0x2000000000) == 0) ||
       ((local_188._0_8_ != 0 && (*(int *)(local_188._0_8_ + 0x18) < 2)))) {
      if ((DAT_1407bb76c == '\0') || (iVar15 = (int)uVar41 + 1, (int)uVar41 == 0xff)) {
        iVar15 = 0;
      }
      if (*(longlong *)((&DAT_1407bda58)[iVar15] + 0x60) != 0) {
        plVar36 = (longlong *)(*(longlong *)((&DAT_1407bda58)[iVar15] + 0x60) + 0x198);
        (**(code **)(*plVar36 + 0xe8))(plVar36,&local_a8);
      }
    }
    uVar29 = local_188._8_8_;
    if ((longlong *)local_188._8_8_ != (longlong *)0x0) {
      LOCK();
      plVar36 = (longlong *)(local_188._8_8_ + 8);
      lVar23 = *plVar36;
      *(int *)plVar36 = (int)*plVar36 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (*(code *)**(undefined8 **)local_188._8_8_)(local_188._8_8_);
        LOCK();
        piVar1 = (int *)(uVar29 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*(longlong *)uVar29 + 8))(uVar29);
        }
      }
    }
    if (7 < (ulonglong)local_98._8_8_) {
      if ((0xfff < local_98._8_8_ * 2 + 2U) &&
         (0x1f < (local_a8 - *(longlong *)(local_a8 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
  }
LAB_1400b2a05:
  uVar41 = 0;
  lVar23 = param_1[8];
  if (lVar23 != 0) {
    if ((param_1[10] != 0) &&
       (*(int *)(param_1 + 0x5c) = (int)param_1[0x5c] + 1, (int)param_1[0x5c] == 0x1e)) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      if (param_1[0xb] != 0) {
        LOCK();
        piVar1 = (int *)(param_1[0xb] + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_148 = param_1[10];
      plStack_140 = (longlong *)param_1[0xb];
      FUN_140345f40(lVar23,&local_148);
    }
    if (*(char *)(param_1[8] + 0x268) == '\0') {
      *(undefined4 *)(param_1[8] + 0x13c) = *(undefined4 *)(param_1[0x43] + 0x148);
    }
    if (*(char *)((longlong)param_1 + 0x1a1) == '\0') {
      FUN_140117260(param_1[0x3a]);
    }
    if (param_2 != '\0') {
      DAT_1407c1b70 = 0;
      FUN_1403a32e0();
      FUN_1403a7540();
      FUN_1403a9a20();
    }
    if ((int)param_1[0xd] != 0) {
      do {
        iVar15 = (int)uVar41;
        if (*(longlong *)(param_1[10] + 0x58) == *(longlong *)(param_1[0xc] + uVar41 * 8)) {
          if ((*(char *)((longlong)param_1 + 0x1a1) == '\0') &&
             (lVar23 = *(longlong *)(param_1[0xc] + uVar41 * 8), lVar23 != 0)) {
            lVar19 = param_1[10];
            iVar16 = (int)*(double *)(lVar19 + 0x88);
            iVar26 = (int)*(double *)(lVar19 + 0x80);
            iVar34 = (int)*(double *)(lVar19 + 0x78);
            iVar15 = iVar34 + -1;
            if ((double)iVar34 <= *(double *)(lVar19 + 0x78)) {
              iVar15 = iVar34;
            }
            iVar40 = -1;
            iVar34 = iVar16 + -1;
            if ((double)iVar16 <= *(double *)(lVar19 + 0x88)) {
              iVar34 = iVar16;
            }
            local_14c = (iVar34 >> 3) - 1;
            iVar34 = iVar26 + -1;
            if ((double)iVar26 <= *(double *)(lVar19 + 0x80)) {
              iVar34 = iVar26;
            }
            uVar18 = (iVar34 >> 3) - 1;
            local_118 = (uint *)CONCAT44(local_118._4_4_,uVar18);
            uVar17 = (iVar15 >> 3) * 0x10000 - 0x10000;
            do {
              local_158 = (longlong *)0x3;
              do {
                lVar19 = 3;
                uVar31 = local_14c;
                do {
                  if (((uVar18 < 0x10) && ((uint)((iVar15 >> 3) + 0x140 + iVar40) < 0x280)) &&
                     (uVar31 + 0x140 < 0x280)) {
                    local_170 = (longlong *)
                                CONCAT44(local_170._4_4_,
                                         (uVar18 & 0xff) << 8 | uVar17 & 0xff0000 | uVar31 & 0xff);
                    FUN_1400f5a00(lVar23 + 0x3d0,local_c8,&local_170);
                  }
                  uVar31 = uVar31 + 1;
                  lVar19 = lVar19 + -1;
                } while (lVar19 != 0);
                uVar18 = uVar18 + 1;
                local_158 = (longlong *)((longlong)local_158 + -1);
              } while (local_158 != (longlong *)0x0);
              iVar40 = iVar40 + 1;
              uVar17 = uVar17 + 0x10000;
              uVar18 = (uint)local_118;
            } while (iVar40 < 2);
            local_158 = (longlong *)0x0;
            uVar41 = local_f8;
          }
          iVar15 = (int)uVar41;
          uVar18 = 1 << ((byte)uVar41 & 0x1f);
          if ((DAT_1407c1b70 & uVar18) == 0) {
            DAT_1407c1b70 = DAT_1407c1b70 | uVar18;
            if (*(char *)((longlong)param_1 + 0x1a1) == '\0') {
              lVar23 = param_1[9];
              iVar34 = *(int *)(lVar23 + 0x128) + 1;
              *(int *)(lVar23 + 0x128) = iVar34;
              if ((iVar34 == (iVar34 / 0x14) * 0x14) &&
                 (plVar36 = (longlong *)**(longlong **)(lVar23 + 0x2b0),
                 plVar36 != *(longlong **)(lVar23 + 0x2b0))) {
                do {
                  if (*(int *)(lVar23 + 0x128) - *(int *)(plVar36[3] + 0x14) < 0x191) {
                    plVar36 = (longlong *)*plVar36;
                  }
                  else {
                    thunk_FUN_1401fe000(plVar36[3],0x18);
                    puVar24 = (undefined8 *)FUN_140130eb0(lVar23 + 0x2a8,&local_e8,plVar36);
                    plVar36 = (longlong *)*puVar24;
                  }
                } while (plVar36 != *(undefined8 **)(lVar23 + 0x2b0));
              }
            }
            if (*(longlong *)(param_1[0xc] + (uVar41 & 0xffffffff) * 8) != 0) {
              if (*(char *)((longlong)param_1 + 0x1a1) == '\0') {
                lVar23 = *(longlong *)(param_1[0xc] + (uVar41 & 0xffffffff) * 8);
                iVar34 = *(int *)(lVar23 + 0x138);
                if (0 < iVar34) {
                  *(int *)(lVar23 + 0x138) = iVar34 + -1;
                }
                (**(code **)(**(longlong **)(param_1[0xc] + (uVar41 & 0xffffffff) * 8) + 0x168))();
              }
              if (*(char *)((longlong)param_1 + 0x1a1) == '\0') {
                lVar23 = *(longlong *)(param_1[0xc] + (uVar41 & 0xffffffff) * 8);
                *(bool *)(lVar23 + 0x1f8) = 0 < *(int *)(param_1[8] + 0x13c);
                *(undefined1 *)(lVar23 + 0x1f9) = 1;
                (**(code **)(**(longlong **)(param_1[0xc] + (uVar41 & 0xffffffff) * 8) + 0x170))();
              }
            }
          }
        }
        uVar41 = (ulonglong)(iVar15 + 1U);
        local_f8 = uVar41;
      } while (iVar15 + 1U < *(uint *)(param_1 + 0xd));
    }
    if ((param_2 != '\0') && (*(char *)((longlong)param_1 + 0x1a1) == '\0')) {
      FUN_14010ac70(param_1[0x2d]);
    }
    if (*(char *)((longlong)param_1 + 0x1a1) != '\0') {
      FUN_1400b5400(param_1);
    }
  }
  return;
switchD_1400b175f_caseD_18:
LAB_1400b1b66:
  *local_e8 = 0x552;
  uVar41 = (ulonglong)uVar18;
  goto LAB_1400b181e;
}



// ===== FUN_1400b5510 @ 0x1400b5510 [render] =====

bool FUN_1400b5510(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 0x328);
  for (puVar5 = *(undefined8 **)(param_1 + 800); puVar5 != puVar1; puVar5 = puVar5 + 4) {
    puVar4 = param_2;
    if (7 < (ulonglong)param_2[3]) {
      puVar4 = (undefined8 *)*param_2;
    }
    puVar3 = puVar5;
    if (7 < (ulonglong)puVar5[3]) {
      puVar3 = (undefined8 *)*puVar5;
    }
    if ((puVar5[2] == param_2[2]) &&
       ((puVar5[2] == 0 || (iVar2 = FUN_140054430(puVar3,puVar4), iVar2 == 0)))) break;
  }
  bVar6 = puVar5 == *(undefined8 **)(param_1 + 0x328);
  if (bVar6) {
    FUN_1400481a0(param_1 + 800,param_2);
  }
  return bVar6;
}



// ===== FUN_1400b56f0 @ 0x1400b56f0 [render] =====

undefined8 * FUN_1400b56f0(undefined8 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  puVar7 = (undefined8 *)FUN_140558c80(0x40);
  plVar5 = puVar7 + 2;
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined4 *)(puVar7 + 1) = 1;
  *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
  *puVar7 = std::_Ref_count_obj2<class_DisconnectPacket>::vftable;
  uVar3 = *param_2;
  *plVar5 = (longlong)Packet::vftable;
  uVar8 = FUN_140352410();
  puVar7[3] = uVar8;
  *plVar5 = (longlong)DisconnectPacket::vftable;
  *(undefined1 *)(puVar7 + 4) = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  *(undefined4 *)(puVar7 + 7) = uVar3;
  *param_1 = plVar5;
  param_1[1] = puVar7;
  if ((plVar5 != (longlong *)0x0) && ((puVar7[6] == 0 || (*(int *)(puVar7[6] + 8) == 0)))) {
    LOCK();
    *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
    UNLOCK();
    plVar4 = (longlong *)param_1[1];
    plVar9 = (longlong *)0x0;
    plVar10 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar9 = plVar4;
      plVar10 = plVar5;
    }
    plVar5 = (longlong *)puVar7[6];
    puVar7[5] = plVar10;
    puVar7[6] = plVar9;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
  }
  return param_1;
}



// ===== FUN_1400b6950 @ 0x1400b6950 [ui,render] =====

void FUN_1400b6950(float *param_1,undefined1 *param_2,float param_3)

{
  if (param_2 == &DAT_1407baab0) {
    *param_1 = param_3;
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x48) + 0x228) + 0x28))
              (*(longlong **)(*(longlong *)(param_1 + 0x48) + 0x228),param_3);
  }
  if (param_2 == &DAT_1407baad8) {
    param_1[1] = param_3;
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x48) + 0x228) + 0x38))
              (*(longlong **)(*(longlong *)(param_1 + 0x48) + 0x228),param_3);
  }
  if (param_2 == &DAT_1407bab28) {
    param_1[2] = param_3;
  }
  if (param_2 == &DAT_1407bacb8) {
    param_1[0x61] = param_3;
  }
  if (param_2 == &DAT_1407bace0) {
    param_1[0x62] = param_3;
  }
  if (param_2 == &DAT_1407bab50) {
    param_1[4] = (float)(int)param_3;
  }
  return;
}



// ===== FUN_1400ba0f0 @ 0x1400ba0f0 [render] =====

void FUN_1400ba0f0(float *param_1)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  LARGE_INTEGER local_res8;
  
  lVar3 = FUN_140352410();
  lVar4 = *(longlong *)(param_1 + 8);
  if (DAT_1407c1b00 == 0) {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_1407c1b00);
  }
  QueryPerformanceCounter(&local_res8);
  dVar7 = (double)(longlong)(((double)local_res8.QuadPart * 1000000000.0) / (double)DAT_1407c1b00) /
          1000000000.0;
  if ((ulonglong)(lVar3 - lVar4) < 0x3e9) {
    lVar4 = *(longlong *)(param_1 + 0xc) + (lVar3 - lVar4);
    *(longlong *)(param_1 + 0xc) = lVar4;
    if (lVar4 < 0x3e9) {
      if (lVar4 < 0) {
        *(longlong *)(param_1 + 10) = (longlong)(dVar7 * 1000.0);
      }
    }
    else {
      param_1[0xc] = 0.0;
      param_1[0xd] = 0.0;
      lVar1 = *(longlong *)(param_1 + 10);
      *(longlong *)(param_1 + 10) = (longlong)(dVar7 * 1000.0);
      *(double *)(param_1 + 0xe) =
           ((double)lVar4 / (double)((longlong)(dVar7 * 1000.0) - lVar1) -
           *(double *)(param_1 + 0xe)) * 0.20000000298023224 + *(double *)(param_1 + 0xe);
    }
  }
  else {
    *(double *)(param_1 + 2) = dVar7;
  }
  *(longlong *)(param_1 + 8) = lVar3;
  dVar6 = *(double *)(param_1 + 2);
  *(double *)(param_1 + 2) = dVar7;
  dVar6 = (dVar7 - dVar6) * *(double *)(param_1 + 0xe);
  dVar7 = 0.0;
  if (0.0 <= dVar6) {
    dVar7 = dVar6;
  }
  dVar6 = 1.0;
  if (dVar7 <= 1.0) {
    dVar6 = dVar7;
  }
  dVar7 = dVar6 * (double)param_1[6] * (double)*param_1 + (double)param_1[7];
  fVar2 = (float)(int)dVar7;
  param_1[4] = fVar2;
  fVar5 = (float)dVar7 - (float)(int)fVar2;
  param_1[7] = fVar5;
  param_1[5] = fVar5;
  if (10 < (int)fVar2) {
    param_1[4] = 1.4013e-44;
  }
  return;
}



// ===== FUN_1400e68d0 @ 0x1400e68d0 [render] =====

void FUN_1400e68d0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *****ppppplVar2;
  int iVar3;
  int iVar4;
  longlong ****pppplVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *****ppppplVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *****ppppplVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong *plVar21;
  bool bVar22;
  double dVar23;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auStackY_128 [32];
  longlong *local_d8 [2];
  longlong *local_c8;
  longlong ****local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1407502c0 ^ (ulonglong)auStackY_128;
  uVar19 = 0;
  local_c8 = param_2;
  do {
    uVar10 = FUN_140070df0();
    lVar11 = FUN_140070d40(uVar10,uVar19);
    uVar10 = FUN_140070df0();
    lVar12 = FUN_140070d40(uVar10,uVar19);
    if (((lVar11 != 0) && (lVar11 == *(longlong *)(*param_2 + 0x80))) ||
       ((lVar12 != 0 && (lVar12 == *(longlong *)(*param_2 + 0x80))))) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"AddPlayerPacket received with XUID of local player\n");
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 < 4);
  uVar19 = 0;
  do {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x40) + ((ulonglong)uVar19 + 7) * 0x10);
    if (lVar11 != 0) {
      lVar12 = *param_2;
      puVar17 = (undefined8 *)(lVar12 + 0x48);
      puVar14 = (undefined8 *)(lVar11 + 0x398);
      if (7 < *(ulonglong *)(lVar12 + 0x60)) {
        puVar17 = (undefined8 *)*puVar17;
      }
      if (7 < *(ulonglong *)(lVar11 + 0x3b0)) {
        puVar14 = (undefined8 *)*puVar14;
      }
      if ((*(longlong *)(lVar11 + 0x3a8) == *(longlong *)(lVar12 + 0x58)) &&
         ((*(longlong *)(lVar11 + 0x3a8) == 0 ||
          (iVar8 = FUN_140054430(puVar14,puVar17), iVar8 == 0)))) {
        puVar17 = (undefined8 *)(*param_2 + 0x48);
        if (7 < *(ulonglong *)(*param_2 + 0x60)) {
          puVar17 = (undefined8 *)*puVar17;
        }
                    /* WARNING: Subroutine does not return */
        FUN_14002fe50(&DAT_1407bb5d0,"AddPlayerPacket received for local player name %ls\n",puVar17)
        ;
      }
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 < 4);
  lVar11 = *param_2;
  iVar8 = *(int *)(lVar11 + 0x68);
  iVar3 = *(int *)(lVar11 + 0x6c);
  iVar4 = *(int *)(lVar11 + 0x70);
  FUN_1400f4820(local_d8,*(longlong *)(param_1 + 0x40) + 0x40,lVar11 + 0x48);
  iVar9 = *(int *)(*param_2 + 0x68);
  *(int *)(local_d8[0] + 0x2c) = iVar9;
  dVar23 = (double)iVar9;
  local_d8[0][0x1d] = (longlong)dVar23;
  local_d8[0][0xc] = (longlong)dVar23;
  iVar9 = *(int *)(*param_2 + 0x6c);
  *(int *)((longlong)local_d8[0] + 0x164) = iVar9;
  dVar23 = (double)iVar9;
  local_d8[0][0x1e] = (longlong)dVar23;
  local_d8[0][0xd] = (longlong)dVar23;
  iVar9 = *(int *)(*param_2 + 0x70);
  *(int *)(local_d8[0] + 0x2d) = iVar9;
  dVar23 = (double)iVar9;
  local_d8[0][0x1f] = (longlong)dVar23;
  local_d8[0][0xe] = (longlong)dVar23;
  *(int *)((longlong)local_d8[0] + 0x16c) = (int)*(char *)(*param_2 + 0x75);
  *(int *)(local_d8[0] + 0x2e) = (int)*(char *)(*param_2 + 0x74);
  *(float *)((longlong)local_d8[0] + 0x26c) =
       (float)((uint)*(byte *)(*param_2 + 0xa0) * 0x168) * 0.00390625;
  local_d8[0][0xa3] = *(longlong *)(*param_2 + 0x80);
  FUN_140055000(&local_b8,local_d8[0] + 0x73);
  FUN_1400546d0(local_d8[0] + 0x87,&local_b8);
  FUN_140055150(&local_b8);
  lVar11 = local_d8[0][0xa3];
  if (((lVar11 + 0x1fff2badb7dbd0d2U < 0x100) &&
      (lVar12 = (**(code **)(*DAT_140790368 + 0x68))(DAT_140790368,(int)lVar11 + -0x2e), lVar12 != 0
      )) && (lVar12 = *(longlong *)(lVar12 + 8), lVar12 != 0)) {
LAB_1400e6c66:
    *(longlong *)(lVar12 + 8) = lVar11;
    if (*(short *)(lVar12 + 0x10) == 0) {
      puVar17 = (undefined8 *)(*param_2 + 0x48);
      if (7 < *(ulonglong *)(*param_2 + 0x60)) {
        puVar17 = (undefined8 *)*puVar17;
      }
      FUN_140568770((short *)(lVar12 + 0x10),0x20,puVar17);
    }
  }
  else {
    uVar19 = 0;
    do {
      lVar12 = (**(code **)(*DAT_140790368 + 0x68))(DAT_140790368,uVar19 & 0xff);
      if ((lVar12 != 0) && (lVar12 = *(longlong *)(lVar12 + 8), lVar12 != 0)) {
        puVar17 = (undefined8 *)(*param_2 + 0x48);
        if (7 < *(ulonglong *)(*param_2 + 0x60)) {
          puVar17 = (undefined8 *)*puVar17;
        }
        iVar9 = FUN_140573cc0(lVar12 + 0x10,puVar17);
        if (iVar9 == 0) goto LAB_1400e6c66;
      }
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < 0x100);
  }
  iVar9 = *(int *)(*param_2 + 0x78);
  if (iVar9 == 0) {
    uVar18 = (ulonglong)*(uint *)(local_d8[0][0x68] + 0x28);
    lVar11 = *(longlong *)(local_d8[0][0x68] + 8);
    *(undefined8 *)(lVar11 + uVar18 * 0x10) = 0;
    plVar15 = *(longlong **)(lVar11 + 8 + uVar18 * 0x10);
    *(undefined8 *)(lVar11 + 8 + uVar18 * 0x10) = 0;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar21 = plVar15 + 1;
      lVar11 = *plVar21;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          lVar11 = *plVar15;
LAB_1400e6e2f:
          (**(code **)(lVar11 + 8))(plVar15);
        }
      }
    }
  }
  else {
    ppppplVar13 = (longlong *****)FUN_140558c80(0x58);
    *ppppplVar13 = (longlong ****)0x0;
    ppppplVar13[1] = (longlong ****)0x0;
    *(undefined4 *)(ppppplVar13 + 1) = 1;
    *(undefined4 *)((longlong)ppppplVar13 + 0xc) = 1;
    *ppppplVar13 = (longlong ****)std::_Ref_count_obj2<class_ItemInstance>::vftable;
    ppppplVar16 = ppppplVar13 + 2;
    ppppplVar13[3] = (longlong ****)0x0;
    ppppplVar13[4] = (longlong ****)0x0;
    *ppppplVar16 = (longlong ****)ItemInstance::vftable;
    ppppplVar13[9] = (longlong ****)0x0;
    ppppplVar13[10] = (longlong ****)0x0;
    local_b8 = (longlong ****)ppppplVar13;
    FUN_140359e80(ppppplVar16,iVar9,1);
    if (*(int *)(ppppplVar13 + 8) < 0) {
      *(undefined4 *)(ppppplVar13 + 8) = 0;
    }
    if ((ppppplVar16 != (longlong *****)0x0) &&
       ((ppppplVar13[4] == (longlong ****)0x0 || (*(int *)(ppppplVar13[4] + 1) == 0)))) {
      LOCK();
      *(int *)(ppppplVar13 + 1) = *(int *)(ppppplVar13 + 1) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)ppppplVar13 + 0xc) = *(int *)((longlong)ppppplVar13 + 0xc) + 1;
      UNLOCK();
      ppppplVar13[3] = (longlong ****)ppppplVar16;
      pppplVar5 = ppppplVar13[4];
      ppppplVar13[4] = (longlong ****)ppppplVar13;
      if (pppplVar5 != (longlong ****)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)pppplVar5 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (*(code *)(*pppplVar5)[1])();
        }
      }
      LOCK();
      ppppplVar2 = ppppplVar13 + 1;
      iVar9 = *(int *)ppppplVar2;
      *(int *)ppppplVar2 = *(int *)ppppplVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (*(code *)**ppppplVar13)(ppppplVar13);
        LOCK();
        piVar1 = (int *)((longlong)ppppplVar13 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (*(code *)(*ppppplVar13)[1])(ppppplVar13);
        }
      }
    }
    uVar18 = (ulonglong)*(uint *)(local_d8[0][0x68] + 0x28);
    lVar11 = *(longlong *)(local_d8[0][0x68] + 8);
    *(longlong ******)(lVar11 + uVar18 * 0x10) = ppppplVar16;
    plVar15 = *(longlong **)(lVar11 + 8 + uVar18 * 0x10);
    *(longlong ******)(lVar11 + 8 + uVar18 * 0x10) = ppppplVar13;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar21 = plVar15 + 1;
      lVar11 = *plVar21;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          lVar11 = *plVar15;
          goto LAB_1400e6e2f;
        }
      }
    }
  }
  FUN_14034d830(local_d8[0],SUB84((double)iVar8 * 0.03125,0),SUB84((double)iVar3 * 0.03125,0),
                SUB84((double)iVar4 * 0.03125,0));
  *(uint *)(local_d8[0] + 0xa7) = (uint)*(byte *)(*param_2 + 0x90);
  (**(code **)(*local_d8[0] + 0x800))(local_d8[0],*(undefined4 *)(*param_2 + 0x94));
  (**(code **)(*local_d8[0] + 0x808))(local_d8[0],*(undefined4 *)(*param_2 + 0x98));
  uVar10 = FUN_1403141a0(local_d8[0] + 0xa8,0x21);
  plVar15 = local_d8[0] + 0x78;
  uVar18 = local_d8[0][0x7a];
  bVar6 = false;
  if (uVar18 != 0) {
    local_b8 = (longlong ****)0x0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    uVar20 = 3;
    if (uVar18 < 3) {
      uVar20 = uVar18;
    }
    if (7 < (ulonglong)local_d8[0][0x7b]) {
      plVar15 = (longlong *)*plVar15;
    }
    FUN_140054cf0(&local_b8,plVar15,uVar20);
    lVar11 = local_a8;
    bVar22 = true;
    ppppplVar16 = &local_b8;
    if (7 < local_a0) {
      ppppplVar16 = (longlong *****)local_b8;
    }
    iVar8 = FUN_140054430(ppppplVar16,&DAT_14061e160);
    if (((iVar8 != 0) || (uVar10 = extraout_XMM0_Qa, bVar6 = bVar22, lVar11 != 3)) &&
       (cVar7 = FUN_140038e70(extraout_XMM0_Qa,local_d8[0] + 0x78), uVar10 = extraout_XMM0_Qa_00,
       bVar6 = true, cVar7 == '\0')) {
      bVar6 = true;
      goto LAB_1400e6f3d;
    }
  }
  bVar22 = bVar6;
  bVar6 = false;
LAB_1400e6f3d:
  if ((bVar22) && (7 < local_a0)) {
    if ((0xfff < local_a0 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)local_b8[-1])))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    uVar10 = thunk_FUN_1401fe000();
  }
  if (bVar6) {
    cVar7 = FUN_1400b5510(*(undefined8 *)(param_1 + 0x40),local_d8[0] + 0x78);
    if (cVar7 != '\0') {
      plVar15 = local_d8[0] + 0x73;
      if (7 < (ulonglong)local_d8[0][0x76]) {
        plVar15 = (longlong *)*plVar15;
      }
      plVar21 = local_d8[0] + 0x78;
      if (7 < (ulonglong)local_d8[0][0x7b]) {
        plVar21 = (longlong *)*plVar21;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,
                    "Client sending TextureAndGeometryPacket to get custom skin %ls for player %ls\n"
                    ,plVar21,plVar15);
    }
  }
  else if ((local_d8[0][0x7a] != 0) &&
          (cVar7 = FUN_140038e70(uVar10,local_d8[0] + 0x78), cVar7 != '\0')) {
    FUN_140038bf0(extraout_XMM0_Qa_01,local_d8[0] + 0x78,0,0);
  }
  plVar15 = local_d8[0] + 0x78;
  if (7 < (ulonglong)local_d8[0][0x7b]) {
    plVar15 = (longlong *)*plVar15;
  }
  plVar21 = local_d8[0] + 0x73;
  if (7 < (ulonglong)local_d8[0][0x76]) {
    plVar21 = (longlong *)*plVar21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"Custom skin for player %ls is %ls\n",plVar21,plVar15);
}



// ===== FUN_1400e90b0 @ 0x1400e90b0 [storage,ui,render] =====

void FUN_1400e90b0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(char *)(param_1 + 8) == '\0') {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    if (param_2[1] != 0) {
      LOCK();
      piVar2 = (int *)(param_2[1] + 8);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    local_18 = *param_2;
    uStack_10 = param_2[1];
    FUN_140365aa0(uVar4,&local_18);
    plVar6 = (longlong *)param_2[1];
  }
  else {
    plVar6 = (longlong *)param_2[1];
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  return;
}



// ===== FUN_1400ec7c0 @ 0x1400ec7c0 [render] =====

void FUN_1400ec7c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  char cVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  char *pcVar15;
  longlong *plVar16;
  undefined4 extraout_XMM0_Da;
  longlong *local_48;
  longlong *local_40;
  
  (**(code **)(*DAT_140790368 + 0x80))();
  cVar8 = (**(code **)(*DAT_140790368 + 0x80))();
  if (cVar8 != '\x01') {
    FUN_14003e640(extraout_XMM0_Da,&DAT_1407bbab0,0x16,*(undefined4 *)(*param_2 + 0x4c));
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    cVar8 = FUN_1401aa500(*(undefined8 *)(DAT_140790e60 + 0x238),*(undefined4 *)(*param_2 + 0x54));
    pcVar15 = "Selected texture pack %d from Pre-Login packet\n";
    if (cVar8 == '\0') {
      pcVar15 = "Could not select texture pack %d from Pre-Login packet, requesting from host\n";
    }
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,pcVar15,*(undefined4 *)(*param_2 + 0x54));
  }
  cVar8 = (**(code **)(*DAT_140790368 + 0x80))();
  if (cVar8 != '\x01') {
    (**(code **)**(undefined8 **)(DAT_140790e60 + 0x1c8))
              (*(undefined8 **)(DAT_140790e60 + 0x1c8),0x19);
  }
  uVar4 = *(undefined4 *)(param_1 + 0x58);
  uVar10 = FUN_140070df0();
  lVar11 = FUN_140070d40(uVar10,uVar4);
  uVar4 = *(undefined4 *)(param_1 + 0x58);
  uVar10 = FUN_140070df0();
  lVar12 = FUN_140070d40(uVar10,uVar4);
  uVar4 = *(undefined4 *)((&DAT_1407bb7b0)[*(int *)(param_1 + 0x58)] + 0x5c);
  uVar9 = FUN_140033790();
  lVar14 = *param_2;
  plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x170);
  plVar13 = (longlong *)FUN_140558c80(0xc0);
  *plVar13 = 0;
  plVar13[1] = 0;
  *(undefined4 *)(plVar13 + 1) = 1;
  *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
  *plVar13 = (longlong)std::_Ref_count_obj2<class_LoginPacket>::vftable;
  plVar7 = plVar13 + 2;
  uVar5 = *(undefined4 *)(lVar14 + 0x38);
  *plVar7 = (longlong)Packet::vftable;
  lVar14 = FUN_140352410();
  plVar13[3] = lVar14;
  *(undefined1 *)(plVar13 + 4) = 0;
  plVar13[5] = 0;
  plVar13[6] = 0;
  *plVar7 = (longlong)LoginPacket::vftable;
  plVar6 = plVar13 + 8;
  *plVar6 = 0;
  plVar13[9] = 0;
  plVar13[10] = 0;
  plVar13[0xb] = 7;
  *(undefined2 *)plVar6 = 0;
  if (plVar6 != plVar16) {
    plVar1 = plVar16 + 2;
    if (7 < (ulonglong)plVar16[3]) {
      plVar16 = (longlong *)*plVar16;
    }
    FUN_1400549d0(plVar6,plVar16,*plVar1);
  }
  *(undefined4 *)(plVar13 + 7) = 0x4e;
  plVar13[0xc] = 0;
  *(undefined1 *)(plVar13 + 0xd) = 0;
  plVar13[0x16] = 8;
  *(undefined2 *)(plVar13 + 0x17) = 0;
  *(undefined1 *)(plVar13 + 0x10) = 1;
  plVar13[0xe] = lVar12;
  plVar13[0xf] = lVar11;
  *(undefined1 *)((longlong)plVar13 + 0x81) = 0;
  *(undefined4 *)((longlong)plVar13 + 0x84) = uVar5;
  *(undefined4 *)(plVar13 + 0x11) = 0;
  *(undefined1 *)((longlong)plVar13 + 0x8c) = 0;
  *(undefined4 *)(plVar13 + 0x12) = uVar9;
  *(undefined4 *)((longlong)plVar13 + 0x94) = uVar4;
  *(undefined2 *)(plVar13 + 0x13) = 0;
  plVar13[0x14] = 0;
  *(undefined4 *)(plVar13 + 0x15) = 0;
  *(undefined4 *)((longlong)plVar13 + 0xac) = 0x140;
  if ((plVar7 != (longlong *)0x0) && ((plVar13[6] == 0 || (*(int *)(plVar13[6] + 8) == 0)))) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
    UNLOCK();
    plVar13[5] = (longlong)plVar7;
    plVar6 = (longlong *)plVar13[6];
    plVar13[6] = (longlong)plVar13;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    LOCK();
    plVar6 = plVar13 + 1;
    lVar14 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13);
      }
    }
  }
  local_48 = plVar7;
  local_40 = plVar13;
  FUN_1400e90b0(param_1,&local_48);
  cVar8 = (**(code **)(*DAT_140790368 + 0x80))();
  if (cVar8 != '\x01') {
    (**(code **)**(undefined8 **)(DAT_140790e60 + 0x1c8))
              (*(undefined8 **)(DAT_140790e60 + 0x1c8),0x32);
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    lVar14 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  return;
}



// ===== FUN_1400ed960 @ 0x1400ed960 [render] =====

void FUN_1400ed960(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  plVar2 = (longlong *)(lVar1 + 0x28);
  if (*(int *)(lVar1 + 0x50) == 0) {
    if (7 < *(ulonglong *)(lVar1 + 0x40)) {
      plVar2 = (longlong *)*plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140054650(L"Client received request for custom texture %ls\n",plVar2);
  }
  if (7 < *(ulonglong *)(lVar1 + 0x40)) {
    plVar2 = (longlong *)*plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140054650(L"Client received custom texture %ls\n",plVar2);
}



// ===== FUN_1400edbc0 @ 0x1400edbc0 [render] =====

void FUN_1400edbc0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  plVar2 = (longlong *)(lVar1 + 0x28);
  if (*(int *)(lVar1 + 0x58) == 0) {
    if (7 < *(ulonglong *)(lVar1 + 0x40)) {
      plVar2 = (longlong *)*plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140054650(L"Client received request for custom texture and geometry %ls\n",plVar2);
  }
  if (7 < *(ulonglong *)(lVar1 + 0x40)) {
    plVar2 = (longlong *)*plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140054650(L"Client received custom TextureAndGeometry %ls\n",plVar2);
}



// ===== FUN_1400ee0a0 @ 0x1400ee0a0 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1400ee0a0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 ****ppppuVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  bool bVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qa_02;
  undefined1 auStackY_d8 [32];
  undefined8 *local_a8;
  longlong *plStack_a0;
  undefined4 local_98;
  longlong local_88;
  longlong *local_80;
  longlong *plStack_78;
  longlong *local_70;
  undefined8 ***local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStackY_d8;
  local_98 = 0;
  plVar11 = (longlong *)
            (((ulonglong)*(uint *)(param_1 + 0x58) + 7) * 0x10 + *(longlong *)(param_1 + 0x40));
  local_88 = param_1;
  local_70 = param_2;
  if (*(int *)(*param_2 + 0x28) == *(int *)(*plVar11 + 0x18)) {
    if (plVar11[1] != 0) {
      LOCK();
      piVar1 = (int *)(plVar11[1] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_a8 = (undefined8 *)*plVar11;
    plStack_a0 = (longlong *)plVar11[1];
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x1b8))(*(longlong **)(param_1 + 0x48),&local_a8)
    ;
  }
  bVar14 = false;
  if ((local_a8 == (undefined8 *)0x0) ||
     (uVar6 = (**(code **)*local_a8)(), (uVar6 & 0xc800000) != 0xc800000)) goto LAB_1400ee51b;
  local_80 = (longlong *)
             FUN_14055b4d8(local_a8,0,&Entity::RTTI_Type_Descriptor,&Player::RTTI_Type_Descriptor);
  if (local_80 == (longlong *)0x0) {
    local_80 = (longlong *)0x0;
    plStack_78 = (longlong *)0x0;
    uVar15 = 0;
  }
  else {
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
      UNLOCK();
    }
    plStack_78 = plStack_a0;
    uVar15 = extraout_XMM0_Qa;
  }
  plVar13 = plStack_78;
  plVar11 = local_80;
  iVar12 = 0;
  plVar9 = (longlong *)(*(longlong *)(param_1 + 0x40) + 0x70);
  do {
    if ((*plVar9 != 0) && (*(int *)(*plVar9 + 0x18) == *(int *)(*param_2 + 0x28)))
    goto LAB_1400ee24e;
    iVar12 = iVar12 + 1;
    plVar9 = plVar9 + 2;
  } while (iVar12 < 4);
  lVar2 = *param_2;
  if (*(int *)(lVar2 + 0x2c) == 0) {
    pcVar3 = *(code **)(*local_80 + 0x800);
    uVar7 = FUN_140040360(lVar2 + 0x30);
    (*pcVar3)(plVar11,uVar7);
    plVar13 = plVar11 + 0x78;
    if (7 < (ulonglong)plVar11[0x7b]) {
      plVar13 = (longlong *)*plVar13;
    }
    plVar9 = plVar11 + 0x73;
    if (7 < (ulonglong)plVar11[0x76]) {
      plVar9 = (longlong *)*plVar9;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140054650(L"Skin for remote player %ls has changed to %ls (%d)\n",plVar9,plVar13,
                  *(undefined4 *)((longlong)plVar11 + 0x52c));
  }
  if (*(int *)(lVar2 + 0x2c) == 1) {
    pcVar3 = *(code **)(*local_80 + 0x808);
    uVar7 = FUN_140040360(lVar2 + 0x30);
    (*pcVar3)(plVar11,uVar7);
    plVar13 = plVar11 + 0x7c;
    if (7 < (ulonglong)plVar11[0x7f]) {
      plVar13 = (longlong *)*plVar13;
    }
    plVar9 = plVar11 + 0x73;
    if (7 < (ulonglong)plVar11[0x76]) {
      plVar9 = (longlong *)*plVar9;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140054650(L"Cape for remote player %ls has changed to %ls\n",plVar9,plVar13);
  }
  lVar2 = *param_2;
  if (*(longlong *)(lVar2 + 0x40) == 0) {
LAB_1400ee370:
    bVar4 = false;
    if (bVar14) goto LAB_1400ee37c;
LAB_1400ee4e3:
    if ((*(longlong *)(*param_2 + 0x40) != 0) &&
       (cVar5 = FUN_140038e70(uVar15,*param_2 + 0x30), cVar5 != '\0')) {
      FUN_140038bf0(extraout_XMM0_Qa_02,*param_2 + 0x30,0,0);
    }
  }
  else {
    puVar10 = (undefined8 *)(lVar2 + 0x30);
    local_68 = (undefined8 ****)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    uVar15 = 3;
    if (*(ulonglong *)(lVar2 + 0x40) < 3) {
      uVar15 = *(undefined8 *)(lVar2 + 0x40);
    }
    if (7 < *(ulonglong *)(lVar2 + 0x48)) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_140054cf0(&local_68,puVar10,uVar15);
    lVar2 = local_58;
    bVar14 = true;
    ppppuVar8 = &local_68;
    if (7 < local_50) {
      ppppuVar8 = (undefined8 ****)local_68;
    }
    iVar12 = FUN_140054430(ppppuVar8,&DAT_14061e160);
    if (((iVar12 == 0) && (uVar15 = extraout_XMM0_Qa_00, lVar2 == 3)) ||
       (cVar5 = FUN_140038e70(extraout_XMM0_Qa_00,*param_2 + 0x30), uVar15 = extraout_XMM0_Qa_01,
       cVar5 != '\0')) goto LAB_1400ee370;
    bVar4 = true;
LAB_1400ee37c:
    if (7 < local_50) {
      if ((0xfff < local_50 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)local_68[-1])))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar15 = thunk_FUN_1401fe000();
    }
    if (!bVar4) goto LAB_1400ee4e3;
    cVar5 = FUN_1400b5510(*(undefined8 *)(param_1 + 0x40),*param_2 + 0x30);
    if (cVar5 != '\0') {
      plVar13 = plVar11 + 0x73;
      if (7 < (ulonglong)plVar11[0x76]) {
        plVar13 = (longlong *)*plVar13;
      }
      puVar10 = (undefined8 *)(*param_2 + 0x30);
      if (7 < *(ulonglong *)(*param_2 + 0x48)) {
        puVar10 = (undefined8 *)*puVar10;
      }
                    /* WARNING: Subroutine does not return */
      FUN_140054650(L"handleTextureChange - Client sending texture packet to get custom skin %ls for player %ls\n"
                    ,puVar10,plVar13);
    }
  }
LAB_1400ee24e:
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar13 + 1;
    lVar2 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13);
      }
    }
  }
LAB_1400ee51b:
  plVar11 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_a0 + 1;
    lVar2 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
    }
  }
  plVar11 = (longlong *)param_2[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar11 + 1;
    lVar2 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
    }
  }
  return;
}



// ===== FUN_1400f4820 @ 0x1400f4820 [render] =====

void FUN_1400f4820(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140558c80(0x5b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
  *puVar1 = std::_Ref_count_obj2<class_RemotePlayer>::vftable;
  FUN_140309a90(puVar1 + 2,*param_2,param_3);
  puVar1[2] = RemotePlayer::vftable;
  puVar1[0x68] = RemotePlayer::vftable;
  puVar1[0x69] = RemotePlayer::vftable;
  *(undefined1 *)(puVar1 + 0xad) = 0;
  *(undefined4 *)(puVar1 + 0xaf) = 0;
  puVar1[0xb4] = 0;
  puVar1[0xb3] = 0;
  puVar1[0xb2] = 0;
  puVar1[0xb1] = 0;
  puVar1[0xb0] = 0;
  *(undefined4 *)(puVar1 + 0xb5) = 0;
  if (7 < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"Created RemotePlayer with name %ls\n",param_3);
}



// ===== FUN_1400fd510 @ 0x1400fd510 [render] =====

void FUN_1400fd510(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  LARGE_INTEGER LVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  LARGE_INTEGER local_res8;
  
  *(undefined8 **)(DAT_140790e60 + 0x318) = param_1;
  LVar7.QuadPart = FUN_140558c80(0x18);
  local_res8.QuadPart = LVar7.QuadPart;
  QueryPerformanceCounter(&local_res8);
  uVar10 = local_res8.QuadPart - 0x274aa0536214;
  *(undefined1 *)(LVar7.QuadPart + 8) = 0;
  local_res8.QuadPart = 0x10;
  *(ulonglong *)LVar7 = (uVar10 ^ 0x5deece66d) & 0xffffffffffff;
  do {
    puVar2 = (undefined8 *)param_1[0x7b];
    for (puVar3 = (undefined8 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined8 *)*puVar3) {
      uVar1 = *(uint *)(puVar3 + 2);
      uVar10 = *(ulonglong *)param_1[0x28] * 0x5deece66d + 0xb & 0xffffffffffff;
      *(ulonglong *)param_1[0x28] = uVar10;
      iVar12 = ((int)((uVar1 & 0xffff1fff) << 8) >> 0x15) + (uint)(uVar10 >> 0x2d);
      uVar10 = *(ulonglong *)param_1[0x28] * 0x5deece66d + 0xb & 0xffffffffffff;
      *(ulonglong *)param_1[0x28] = uVar10;
      iVar9 = ((int)((uVar1 & 0xffffff1f) << 0x10) >> 0x15) + (uint)(uVar10 >> 0x2d);
      uVar10 = *(ulonglong *)param_1[0x28] * 0x5deece66d + 0xb & 0xffffffffffff;
      *(ulonglong *)param_1[0x28] = uVar10;
      iVar13 = (char)uVar1 * 8 + (uint)(uVar10 >> 0x2d);
      iVar6 = (**(code **)*param_1)(param_1,iVar12,iVar9,iVar13);
      uVar10 = *(ulonglong *)param_1[0x28] * 0x5deece66d + 0xb & 0xffffffffffff;
      *(ulonglong *)param_1[0x28] = uVar10;
      if ((iVar9 < (int)(uint)(uVar10 >> 0x2d)) && (iVar6 == 0)) {
        cVar5 = (**(code **)(*(longlong *)param_1[0x2a] + 0x80))();
        if (cVar5 != '\0') {
          uVar11 = *(ulonglong *)param_1[0x28] * 0x5deece66d + 0xb & 0xffffffffffff;
          *(ulonglong *)param_1[0x28] = uVar11;
          uVar8 = *(ulonglong *)param_1[0x28] * 0x5deece66d + 0xb & 0xffffffffffff;
          *(ulonglong *)param_1[0x28] = uVar8;
          uVar10 = *(ulonglong *)param_1[0x28] * 0x5deece66d + 0xb & 0xffffffffffff;
          *(ulonglong *)param_1[0x28] = uVar10;
          FUN_14033d7b0(param_1,0x11,
                        (double)((float)(int)(uVar10 >> 0x18) * 5.9604645e-08 + (float)iVar12),
                        (double)((float)(int)(uVar8 >> 0x18) * 5.9604645e-08 + (float)iVar9),
                        (double)((float)(int)(uVar11 >> 0x18) * 5.9604645e-08 + (float)iVar13),0,0,0
                       );
        }
      }
      else if (0 < iVar6) {
        plVar4 = *(longlong **)(DAT_1407b4350 + (longlong)iVar6 * 8);
        (**(code **)(*plVar4 + 0x100))(plVar4,param_1,iVar12,iVar9,iVar13,LVar7.QuadPart);
      }
    }
    local_res8.QuadPart = local_res8.QuadPart + -1;
  } while (local_res8.QuadPart != 0);
  *(undefined8 *)(DAT_140790e60 + 0x318) = 0;
  thunk_FUN_1401fe000(LVar7.QuadPart,0x18);
  FUN_1400f5690(param_1 + 0x7a);
  return;
}



// ===== FUN_140116b40 @ 0x140116b40 [render] =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140116b40(void)

{
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x10) < DAT_1407c1788) {
    FUN_1405593c0(&DAT_1407c1788);
    if (DAT_1407c1788 == -1) {
      DAT_1407c17e0 = 0;
      _DAT_1407c1790 = 0;
      uRam00000001407c1798 = 0;
      _DAT_1407c17a0 = 0;
      uRam00000001407c17a8 = 0;
      _DAT_1407c17b0 = 0;
      uRam00000001407c17b8 = 0;
      _DAT_1407c17c0 = 0;
      uRam00000001407c17c8 = 0;
      _DAT_1407c17d0 = 0;
      uRam00000001407c17d8 = 0;
      _DAT_1407c1808 = 0;
      _DAT_1407c17e4 = 0x3f800000;
      DAT_1407c17e8 = 0;
      DAT_1407c1804 = 0;
      atexit(FUN_1405e9fe0);
      _Init_thread_footer(&DAT_1407c1788);
    }
  }
  return &DAT_1407c1790;
}



// ===== FUN_14011aae0 @ 0x14011aae0 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14011aae0(ulonglong *param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_78 [32];
  int local_58;
  LARGE_INTEGER local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1407502c0 ^ (ulonglong)auStack_78;
  if (*(longlong *)(*param_1 + 0x50) == 0) {
    return;
  }
  if (((char)param_1[0x31] != '\0') && (param_3 != '\0')) {
    FUN_140119e00();
  }
  uVar3 = FUN_140352410();
  uVar5 = *param_1;
  param_1[0x2f] = uVar3;
  if (*(char *)(uVar5 + 0x200) != '\0') {
    return;
  }
  iVar7 = 1;
  iVar1 = *(int *)(uVar5 + 0x1c);
  DAT_14079038b = *(undefined1 *)(*(longlong *)(uVar5 + 0x218) + 0x15);
  iVar6 = *(int *)(*(longlong *)(uVar5 + 0x218) + 0x17c);
  iVar2 = *(int *)(uVar5 + 0x18);
  if (iVar6 == 0) {
    iVar6 = 1000;
  }
  else if (iVar6 < 2) goto LAB_14011abb3;
  iVar4 = 2;
  do {
    uVar5 = (longlong)iVar2 % (longlong)iVar4 & 0xffffffff;
    if ((iVar2 / iVar4 < 0x140) ||
       (uVar5 = (longlong)iVar1 % (longlong)iVar4 & 0xffffffff, iVar1 / iVar4 < 0xf0)) break;
    iVar7 = iVar7 + 1;
    iVar4 = iVar4 + 1;
  } while (iVar7 < iVar6);
LAB_14011abb3:
  dVar10 = (double)FUN_14058e470((double)iVar1 / (double)iVar7,uVar5);
  dVar11 = (double)FUN_14058e470((double)iVar2 / (double)iVar7);
  uVar3 = (longlong)((int)dVar11 * DAT_1407aaa04) / (longlong)iVar2 & 0xffffffff;
  GetClientRect(DAT_1407aaa70,(LPRECT)&local_48.s);
  uVar5 = *param_1;
  iVar6 = ((int)dVar10 - (((local_3c - DAT_1407aaa08) + -1) * (int)dVar10) / *(int *)(uVar5 + 0x1c))
          + -1;
  iVar1 = *(int *)(*(longlong *)(uVar5 + 0x218) + 0x18);
  uVar8 = 0x78;
  if (iVar1 != 1) {
    uVar8 = 200;
  }
  if (iVar1 == 2) {
    uVar8 = 0x23;
  }
  if (*(longlong *)(uVar5 + 0x40) == 0) {
    FUN_1400044a0(&DAT_140784700,1);
    FUN_1400044f4(&DAT_140784700);
    FUN_1400044a0(&DAT_140784700,0);
    FUN_1400044f4(&DAT_140784700);
    FUN_14011df70(param_1,0xffffffff);
    if (DAT_1407c1b00 == 0) {
      QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_1407c1b00);
    }
    QueryPerformanceCounter(&local_48);
    param_1[0x30] = (longlong)(((double)local_48.QuadPart * 1000000000.0) / (double)DAT_1407c1b00);
  }
  else {
    if (iVar1 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (longlong)(int)(1000000000 / (ulonglong)uVar8) + param_1[0x30];
    }
    FUN_14011b180(param_1,param_2,lVar9);
    if (DAT_1407c1b00 == 0) {
      QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_1407c1b00);
    }
    QueryPerformanceCounter(&local_48);
    uVar5 = *param_1;
    param_1[0x30] = (longlong)(((double)local_48.QuadPart * 1000000000.0) / (double)DAT_1407c1b00);
    if ((*(char *)(*(longlong *)(uVar5 + 0x218) + 0x14c) == '\0') ||
       (*(longlong *)(uVar5 + 0x1c0) != 0)) {
      local_58 = iVar6;
      FUN_1400c04c0(*(undefined8 *)(uVar5 + 0x1f8),param_2,*(longlong *)(uVar5 + 0x1c0) != 0,uVar3);
    }
  }
  if (*(longlong *)(*param_1 + 0x1c0) != 0) {
    FUN_14000443c(&DAT_140784700,1,0);
    (**(code **)**(undefined8 **)(*param_1 + 0x1c0))
              (*(undefined8 **)(*param_1 + 0x1c0),uVar3,iVar6,(int)param_2);
  }
  return;
}



// ===== FUN_140132a30 @ 0x140132a30 [storage,render] =====

undefined8 * FUN_140132a30(float *param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  float *pfVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  
  uVar12 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
             0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
           0x100000001b3;
  uVar8 = uVar12 & *(ulonglong *)(param_1 + 0xc);
  puVar9 = (undefined8 *)(uVar8 * 2);
  puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + uVar8 * 0x10);
  pfVar1 = param_1 + 2;
  puVar10 = *(undefined8 **)pfVar1;
  if (puVar5 != puVar10) {
    puVar9 = *(undefined8 **)(*(longlong *)(param_1 + 6) + uVar8 * 0x10);
    iVar2 = *(int *)(puVar5 + 2);
    puVar10 = puVar5;
    while( true ) {
      if (*(int *)param_3 == iVar2) {
        *param_2 = puVar10;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar10 == puVar9) break;
      puVar10 = (undefined8 *)puVar10[1];
      iVar2 = *(int *)(puVar10 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140555c84("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_140558c80(0x20,puVar9,param_3,param_4,pfVar1,0);
  uVar4 = *(undefined8 *)(param_3 + 8);
  puVar5[2] = *(undefined8 *)param_3;
  puVar5[3] = uVar4;
  uVar8 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar8) {
    fVar13 = (float)FUN_140590160((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar6 = 0;
    if ((9.223372e+18 <= fVar13) && (fVar13 = fVar13 - 9.223372e+18, fVar13 < 9.223372e+18)) {
      lVar6 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)fVar13 + lVar6)) {
      uVar7 = (longlong)fVar13 + lVar6;
    }
    uVar11 = uVar8;
    if ((uVar8 < uVar7) && ((0x1ff < uVar8 || (uVar11 = uVar8 * 8, uVar8 * 8 < uVar7)))) {
      uVar11 = uVar7;
    }
    FUN_14004bcb0(param_1,uVar11);
    puVar9 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar12) * 0x10);
    puVar10 = *(undefined8 **)pfVar1;
    if (puVar9 != puVar10) {
      iVar2 = *(int *)(puVar9 + 2);
      puVar10 = puVar9;
      while (*(int *)(puVar5 + 2) != iVar2) {
        if (puVar10 ==
            *(undefined8 **)
             (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar12) * 0x10))
        goto LAB_140132c51;
        puVar10 = (undefined8 *)puVar10[1];
        iVar2 = *(int *)(puVar10 + 2);
      }
      puVar10 = (undefined8 *)*puVar10;
    }
  }
LAB_140132c51:
  puVar9 = (undefined8 *)puVar10[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = puVar10;
  puVar5[1] = puVar9;
  *puVar9 = puVar5;
  puVar10[1] = puVar5;
  uVar12 = *(ulonglong *)(param_1 + 0xc) & uVar12;
  lVar6 = *(longlong *)(param_1 + 6);
  puVar3 = *(undefined8 **)(lVar6 + uVar12 * 0x10);
  if (puVar3 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar6 + uVar12 * 0x10) = puVar5;
  }
  else {
    if (puVar3 == puVar10) {
      *(undefined8 **)(lVar6 + uVar12 * 0x10) = puVar5;
      goto LAB_140132ca1;
    }
    if (*(undefined8 **)(lVar6 + 8 + uVar12 * 0x10) != puVar9) goto LAB_140132ca1;
  }
  *(undefined8 **)(lVar6 + 8 + uVar12 * 0x10) = puVar5;
LAB_140132ca1:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// ===== FUN_140134040 @ 0x140134040 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140134040(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStackY_a8 [32];
  longlong local_60 [9];
  
  local_60[8] = DAT_1407502c0 ^ (ulonglong)auStackY_a8;
  FUN_1400454c0();
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  lVar1 = FUN_140558c80(0x40);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(param_1 + 0x48) = lVar1;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 7;
  *(undefined8 *)(param_1 + 0x78) = 8;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  FUN_140137d70();
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  lVar1 = FUN_140558c80(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(param_1 + 0x88) = lVar1;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 7;
  *(undefined8 *)(param_1 + 0xb8) = 8;
  *(undefined4 *)(param_1 + 0x80) = 0x3f800000;
  FUN_14004bae0((undefined8 *)(param_1 + 0x98),0x10,*(undefined8 *)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  lVar1 = FUN_140558c80(0x38);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(param_1 + 200) = lVar1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 7;
  *(undefined8 *)(param_1 + 0xf8) = 8;
  *(undefined4 *)(param_1 + 0xc0) = 0x3f800000;
  FUN_14004b9e0();
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  lVar1 = FUN_140558c80(0x38);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(param_1 + 0x108) = lVar1;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 7;
  *(undefined8 *)(param_1 + 0x138) = 8;
  *(undefined4 *)(param_1 + 0x100) = 0x3f800000;
  FUN_14004bae0((undefined8 *)(param_1 + 0x118),0x10,*(undefined8 *)(param_1 + 0x108));
  puVar2 = (undefined8 *)FUN_140558c80(0x58);
  uVar3 = thunk_FUN_140558c80(0x400);
  *puVar2 = uVar3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 10) = 0x10;
  *(undefined4 *)((longlong)puVar2 + 0x54) = 0x10;
  *(undefined8 **)(param_1 + 0x150) = puVar2;
  *(undefined8 *)(param_1 + 0x148) = param_2;
  *(undefined8 *)(param_1 + 0x140) = param_3;
  uVar3 = FUN_140558c80(0xe8);
  local_60[4] = 0;
  local_60[5] = 0;
  local_60[6] = 0;
  local_60[7] = 0;
  FUN_140054cf0(local_60 + 4,L"textures/blocks/",0x10);
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  FUN_140054cf0(local_60,L"terrain",7);
  uVar3 = FUN_140180c10(uVar3,0);
  *(undefined8 *)(param_1 + 0x158) = uVar3;
  if (7 < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] * 2 + 2U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  if (7 < (ulonglong)local_60[7]) {
    if (0xfff < local_60[7] * 2 + 2U) {
      if (0x1f < (local_60[4] - *(longlong *)(local_60[4] + -8)) - 8U) goto LAB_1401344b4;
    }
    thunk_FUN_1401fe000();
  }
  uVar3 = FUN_140558c80(0xe8);
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  FUN_140054cf0(local_60,L"textures/items/",0xf);
  local_60[4] = 0;
  local_60[5] = 0;
  local_60[6] = 0;
  local_60[7] = 0;
  FUN_140054cf0(local_60 + 4,L"items",5);
  uVar3 = FUN_140180c10(uVar3,1);
  *(undefined8 *)(param_1 + 0x160) = uVar3;
  if (7 < (ulonglong)local_60[7]) {
    if (0xfff < local_60[7] * 2 + 2U) {
      if (0x1f < (local_60[4] - *(longlong *)(local_60[4] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  if (7 < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] * 2 + 2U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
LAB_1401344b4:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  FUN_140134520(param_1);
  return param_1;
}



// ===== FUN_140134520 @ 0x140134520 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140134520(undefined8 param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  longlong lVar7;
  undefined1 auStackY_a8 [32];
  longlong local_50 [7];
  
  local_50[4] = DAT_1407502c0 ^ (ulonglong)auStackY_a8;
  iVar4 = 0;
  puVar5 = &DAT_140791380;
  ppuVar6 = &PTR_u__blur_misc_pumpkinblur_140609910;
  do {
    local_50[0] = 0;
    local_50[1] = 0;
    local_50[2] = 0;
    local_50[3] = 0;
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (*(short *)(*ppuVar6 + lVar7 * 2) != 0);
    FUN_140054cf0(local_50);
    plVar3 = (longlong *)FUN_140048d20(local_50,L".png",4);
    lVar7 = *plVar3;
    uVar1 = plVar3[3];
    plVar3[2] = 0;
    plVar3[3] = 7;
    *(undefined2 *)plVar3 = 0;
    uVar2 = FUN_140134f50(param_1,iVar4);
    *puVar5 = uVar2;
    if (7 < uVar1) {
      if (0xfff < uVar1 * 2 + 2) {
        if (0x1f < (lVar7 - *(longlong *)(lVar7 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      thunk_FUN_1401fe000();
    }
    if (7 < (ulonglong)local_50[3]) {
      if (0xfff < local_50[3] * 2 + 2U) {
        if (0x1f < (local_50[0] - *(longlong *)(local_50[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      thunk_FUN_1401fe000();
    }
    iVar4 = iVar4 + 1;
    ppuVar6 = ppuVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar4 < 0x72);
  return;
}



// ===== FUN_1401347d0 @ 0x1401347d0 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1401347d0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1407502c0 ^ (ulonglong)auStack_58;
  if (*(char *)(param_2 + 6) == '\0') {
    FUN_140055000(local_30,param_2 + 2);
    iVar1 = FUN_140134f50(param_1,0x74,local_30);
    if (-1 < iVar1) {
      FUN_1400046c8(&DAT_140784700,iVar1);
    }
    FUN_140055150(local_30);
  }
  else {
    iVar1 = FUN_140134700(param_1,*(undefined4 *)*param_2);
    if (-1 < iVar1) {
      FUN_1400046c8(&DAT_140784700,iVar1);
      return;
    }
  }
  return;
}



// ===== FUN_140136e50 @ 0x140136e50 [render] =====

void FUN_140136e50(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  
  (**(code **)**(undefined8 **)(*(longlong *)(param_1 + 0x148) + 0xb8))();
  puVar2 = &DAT_140791380;
  do {
    FUN_140136170(param_1,*puVar2);
    puVar2 = puVar2 + 1;
  } while ((longlong)puVar2 < 0x140791548);
  FUN_140052480(param_1);
  FUN_140137630(param_1 + 0x80);
  FUN_140134520(param_1);
  FUN_1401376e0(param_1 + 0x40);
  FUN_140180d70(*(undefined8 *)(param_1 + 0x158));
  FUN_140180d70(*(undefined8 *)(param_1 + 0x160));
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x148) + 0x68);
  for (puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x148) + 0x60); puVar3 != puVar1;
      puVar3 = puVar3 + 1) {
    thunk_FUN_1401fe000(*puVar3,0x10);
  }
  return;
}



// ===== FUN_140137d70 @ 0x140137d70 [render] =====

void FUN_140137d70(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (0xf < (ulonglong)(param_1[1] - *param_1 >> 3)) {
    FUN_140050640(*param_1,param_1[1],local_res18);
    return;
  }
  puVar3 = (undefined8 *)FUN_140054e60(0x80);
  lVar2 = *param_1;
  lVar5 = param_1[2] - lVar2 >> 3;
  if (lVar5 != 0) {
    lVar4 = lVar2;
    if ((0xfff < (ulonglong)(lVar5 * 8)) &&
       (lVar4 = *(longlong *)(lVar2 + -8), 0x1f < (lVar2 - lVar4) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000(lVar4);
  }
  puVar1 = puVar3 + 0x10;
  *param_1 = (longlong)puVar3;
  param_1[1] = (longlong)puVar1;
  param_1[2] = (longlong)puVar1;
  for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    *puVar3 = param_3;
  }
  return;
}



// ===== FUN_14015ab40 @ 0x14015ab40 [render] =====

/* WARNING: Removing unreachable block (ram,0x00014015ea3e) */
/* WARNING: Removing unreachable block (ram,0x00014015e8f1) */
/* WARNING: Removing unreachable block (ram,0x00014015f3b1) */

void FUN_14015ab40(longlong param_1,longlong *param_2,int param_3,float param_4,uint param_5)

{
  int *piVar1;
  code *pcVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint extraout_var;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  int iVar15;
  bool bVar16;
  ulonglong in_stack_fffffffffffffee8;
  undefined4 uVar19;
  uint uVar20;
  ulonglong uVar17;
  undefined8 uVar18;
  ulonglong in_stack_fffffffffffffef0;
  uint uVar22;
  longlong lVar21;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  
  puVar8 = TlsGetValue(DAT_1407bad5c);
  uVar19 = (undefined4)(in_stack_fffffffffffffee8 >> 0x20);
  iVar15 = (int)param_2[5];
  if (((param_2 == DAT_1407aaf38) || (param_2 == DAT_1407aaf40)) || (param_2 == DAT_1407aaf48)) {
    param_3 = 3;
  }
  if (*(char *)(param_1 + 0x12) != '\0') {
    uVar4 = (**(code **)(*param_2 + 0x250))(param_2,param_3);
    in_stack_fffffffffffffee8 = CONCAT44(uVar19,param_5);
    if (iVar15 == 2) {
      uVar4 = 0xffffff;
    }
    FUN_140004584(&DAT_140784700,((float)((int)uVar4 >> 0x10 & 0xff) / 255.0) * param_4,
                  ((float)((int)uVar4 >> 8 & 0xff) / 255.0) * param_4,
                  ((float)(uVar4 & 0xff) / 255.0) * param_4,in_stack_fffffffffffffee8);
  }
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2);
  FUN_1401381d0(param_1,param_2);
  uVar20 = (uint)(in_stack_fffffffffffffee8 >> 0x20);
  uVar22 = (uint)(in_stack_fffffffffffffef0 >> 0x20);
  *(undefined *)((longlong)puVar8 + 0x51) = (&DAT_1407aaf90)[(int)param_2[5]];
  if ((uVar4 < 0x28) && ((0x8080000001U >> ((longlong)(int)uVar4 & 0x3fU) & 1) != 0)) {
LAB_14015f40d:
    (**(code **)(*param_2 + 0x280))(param_2);
    FUN_1401381d0(param_1,param_2);
    in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffffff00000000;
    FUN_1400044dc(&DAT_140784700);
    FUN_140004500(&DAT_140784700);
    *(undefined1 *)(puVar8 + 10) = 1;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
    *(undefined4 *)(puVar8 + 5) = 0;
    *(undefined4 *)(puVar8 + 6) = 3;
    *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
    *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
    *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x8100;
    lVar9 = (**(code **)(*param_2 + 0xb8))
                      (param_2,0,param_3,*(code **)(*param_2 + 0xb8),in_stack_fffffffffffffee8);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) + 0xc0);
    }
    uVar10 = 0;
    FUN_140157fd0(param_1);
    FUN_140133a70(puVar8);
    if ((iVar15 == 2) && (*(char *)(param_1 + 0x12) != '\0')) {
      uVar4 = (**(code **)(*param_2 + 0x250))(param_2,param_3);
      uVar10 = (ulonglong)param_5;
      FUN_140004584(&DAT_140784700,((float)((int)uVar4 >> 0x10 & 0xff) / 255.0) * param_4,
                    ((float)((int)uVar4 >> 8 & 0xff) / 255.0) * param_4,
                    ((float)(uVar4 & 0xff) / 255.0) * param_4,uVar10,lVar9);
    }
    *(undefined1 *)(puVar8 + 10) = 1;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
    *(undefined4 *)(puVar8 + 5) = 0;
    *(undefined4 *)(puVar8 + 6) = 3;
    *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
    *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
    *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f00;
    lVar9 = (**(code **)(*param_2 + 0xb8))(param_2,1,param_3,*(code **)(*param_2 + 0xb8),uVar10);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) + 0xc0);
    }
    uVar10 = 0;
    FUN_140158760(param_1);
    FUN_140133a70(puVar8);
    if ((iVar15 == 2) && (*(char *)(param_1 + 0x12) != '\0')) {
      uVar10 = (ulonglong)param_5;
      FUN_140004584(&DAT_140784700);
    }
    *(undefined1 *)(puVar8 + 10) = 1;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
    *(undefined4 *)(puVar8 + 5) = 0;
    *(undefined4 *)(puVar8 + 6) = 3;
    *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
    *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
    *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x810000;
    lVar9 = (**(code **)(*param_2 + 0xb8))
                      (param_2,2,param_3,*(code **)(*param_2 + 0xb8),uVar10,lVar9);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) + 0xc0);
    }
    uVar18 = 0;
    FUN_140158e90(param_1);
    FUN_140133a70(puVar8);
    if ((iVar15 == 2) && (*(char *)(param_1 + 0x12) != '\0')) {
      uVar4 = (**(code **)(*param_2 + 0x250))(param_2,param_3);
      FUN_140004584(&DAT_140784700,((float)((int)uVar4 >> 0x10 & 0xff) / 255.0) * param_4,
                    ((float)((int)uVar4 >> 8 & 0xff) / 255.0) * param_4,
                    ((float)(uVar4 & 0xff) / 255.0) * param_4,param_5,lVar9);
      *(undefined1 *)(puVar8 + 10) = 1;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
      *(undefined4 *)(puVar8 + 5) = 0;
      *(undefined4 *)(puVar8 + 6) = 3;
      *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
      *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
      *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
      *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
      *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
      *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
      *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x810000;
      lVar9 = *(longlong *)(DAT_1407aaf28 + 0x80);
      uVar19 = 0;
      FUN_140158e90(param_1);
      FUN_140133a70(puVar8);
      uVar18 = CONCAT44(uVar19,param_5);
      FUN_140004584(&DAT_140784700);
    }
    *(undefined1 *)(puVar8 + 10) = 1;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
    *(undefined4 *)(puVar8 + 5) = 0;
    *(undefined4 *)(puVar8 + 6) = 3;
    *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
    *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
    *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f0000;
    uVar10 = (**(code **)(*param_2 + 0xb8))
                       (param_2,3,param_3,*(code **)(*param_2 + 0xb8),uVar18,lVar9);
    if (uVar10 == 0) {
      uVar10 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) + 0xc0)
      ;
    }
    uVar18 = 0;
    FUN_1401595c0(param_1);
    FUN_140133a70(puVar8);
    if ((iVar15 == 2) && (*(char *)(param_1 + 0x12) != '\0')) {
      uVar4 = (**(code **)(*param_2 + 0x250))(param_2,param_3);
      FUN_140004584(&DAT_140784700,((float)((int)uVar4 >> 0x10 & 0xff) / 255.0) * param_4,
                    ((float)((int)uVar4 >> 8 & 0xff) / 255.0) * param_4,
                    ((float)(uVar4 & 0xff) / 255.0) * param_4,param_5,uVar10);
      *(undefined1 *)(puVar8 + 10) = 1;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
      *(undefined4 *)(puVar8 + 5) = 0;
      *(undefined4 *)(puVar8 + 6) = 3;
      *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
      *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
      *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
      *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
      *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
      *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
      *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f0000;
      uVar10 = *(ulonglong *)(DAT_1407aaf28 + 0x80);
      uVar4 = 0;
      FUN_1401595c0(param_1);
      *(undefined1 *)(puVar8 + 10) = 0;
      iVar5 = *(int *)(puVar8 + 1);
      if (0 < iVar5) {
        if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
          iVar6 = 0;
          puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
          do {
            *puVar13 = 0xffffffff;
            puVar13 = puVar13 + 8;
            iVar5 = *(int *)(puVar8 + 1);
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar5);
        }
        iVar6 = *(int *)(puVar8 + 6);
        if ((iVar6 == 3) && (DAT_14079038c != '\0')) {
          uVar10 = (ulonglong)(*(char *)((longlong)puVar8 + 0x25) != '\0');
          iVar6 = 0;
          uVar18 = *(undefined8 *)*puVar8;
          lVar9 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
        }
        else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
          uVar18 = *(undefined8 *)*puVar8;
          if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
            uVar10 = 0;
            lVar9 = (ulonglong)uVar4 << 0x20;
          }
          else {
            uVar10 = 1;
            lVar9 = CONCAT44(uVar4,3);
          }
        }
        else {
          uVar10 = 0;
          lVar9 = CONCAT44(uVar4,1);
          uVar18 = *(undefined8 *)*puVar8;
        }
        FUN_140004448(&DAT_140784700,iVar6,iVar5,uVar18,lVar9,uVar10);
        uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
      }
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined4 *)(puVar8 + 4) = 0;
      *(undefined4 *)(puVar8 + 5) = 0;
      uVar18 = CONCAT44(uVar4,param_5);
      FUN_140004584(&DAT_140784700);
    }
    *(undefined1 *)(puVar8 + 10) = 1;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
    *(undefined4 *)(puVar8 + 5) = 0;
    *(undefined4 *)(puVar8 + 6) = 3;
    *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
    *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
    *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x81;
    lVar9 = (**(code **)(*param_2 + 0xb8))
                      (param_2,4,param_3,*(code **)(*param_2 + 0xb8),uVar18,uVar10);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) + 0xc0);
    }
    uVar18 = 0;
    FUN_140159cf0(param_1);
    FUN_140133a70(puVar8);
    if ((iVar15 == 2) && (*(char *)(param_1 + 0x12) != '\0')) {
      uVar4 = (**(code **)(*param_2 + 0x250))(param_2,param_3);
      FUN_140004584(&DAT_140784700,((float)((int)uVar4 >> 0x10 & 0xff) / 255.0) * param_4,
                    ((float)((int)uVar4 >> 8 & 0xff) / 255.0) * param_4,
                    ((float)(uVar4 & 0xff) / 255.0) * param_4,param_5,lVar9);
      *(undefined1 *)(puVar8 + 10) = 1;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
      *(undefined4 *)(puVar8 + 5) = 0;
      *(undefined4 *)(puVar8 + 6) = 3;
      *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
      *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
      *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
      *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
      *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
      *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
      *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x81;
      lVar9 = *(longlong *)(DAT_1407aaf28 + 0x80);
      uVar19 = 0;
      FUN_140159cf0(param_1);
      FUN_140133a70(puVar8);
      uVar18 = CONCAT44(uVar19,param_5);
      FUN_140004584(&DAT_140784700);
    }
    *(undefined1 *)(puVar8 + 10) = 1;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
    *(undefined4 *)(puVar8 + 5) = 0;
    *(undefined4 *)(puVar8 + 6) = 3;
    *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
    *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
    *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f;
    lVar9 = (**(code **)(*param_2 + 0xb8))
                      (param_2,5,param_3,*(code **)(*param_2 + 0xb8),uVar18,lVar9);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) + 0xc0);
    }
    uVar19 = 0;
    FUN_14015a420(param_1);
    FUN_140133a70(puVar8);
    if ((iVar15 == 2) && (*(char *)(param_1 + 0x12) != '\0')) {
      uVar4 = (**(code **)(*param_2 + 0x250))(param_2,param_3);
      FUN_140004584(&DAT_140784700,((float)((int)uVar4 >> 0x10 & 0xff) / 255.0) * param_4,
                    ((float)((int)uVar4 >> 8 & 0xff) / 255.0) * param_4,
                    ((float)(uVar4 & 0xff) / 255.0) * param_4,CONCAT44(uVar19,param_5),lVar9);
      *(undefined1 *)(puVar8 + 10) = 1;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
      *(undefined4 *)(puVar8 + 5) = 0;
      *(undefined4 *)(puVar8 + 6) = 3;
      *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
      *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
      *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
      *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
      *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
      *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
      *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f;
      uVar4 = (uint)((ulonglong)*(undefined8 *)(DAT_1407aaf28 + 0x80) >> 0x20);
      uVar20 = 0;
      FUN_14015a420(param_1);
      *(undefined1 *)(puVar8 + 10) = 0;
      iVar15 = *(int *)(puVar8 + 1);
      if (0 < iVar15) {
        if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
          iVar5 = 0;
          puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
          do {
            *puVar13 = 0xffffffff;
            puVar13 = puVar13 + 8;
            iVar15 = *(int *)(puVar8 + 1);
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar15);
        }
        iVar5 = *(int *)(puVar8 + 6);
        if ((iVar5 == 3) && (DAT_14079038c != '\0')) {
          lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
          iVar5 = 0;
          uVar18 = *(undefined8 *)*puVar8;
          lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
        }
        else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
          uVar18 = *(undefined8 *)*puVar8;
          if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
            lVar21 = (ulonglong)uVar4 << 0x20;
            lVar9 = (ulonglong)uVar20 << 0x20;
          }
          else {
            lVar21 = CONCAT44(uVar4,1);
            lVar9 = CONCAT44(uVar20,3);
          }
        }
        else {
          lVar21 = (ulonglong)uVar4 << 0x20;
          lVar9 = CONCAT44(uVar20,1);
          uVar18 = *(undefined8 *)*puVar8;
        }
        FUN_140004448(&DAT_140784700,iVar5,iVar15,uVar18,lVar9,lVar21);
      }
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined4 *)(puVar8 + 4) = 0;
      *(undefined4 *)(puVar8 + 5) = 0;
      FUN_140004584(&DAT_140784700);
    }
  }
  else {
    if (uVar4 == 0x10) {
      param_3 = 1;
      goto LAB_14015f40d;
    }
    if (uVar4 == 0x1a) goto LAB_14015f40d;
    if (uVar4 == 1) {
      *(undefined1 *)(puVar8 + 10) = 1;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
      *(undefined4 *)(puVar8 + 5) = 0;
      *(undefined4 *)(puVar8 + 6) = 3;
      *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
      *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
      *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
      *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
      *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
      *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
      *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x8100;
      FUN_14014bba0(param_1,param_2,param_3);
      *(undefined1 *)(puVar8 + 10) = 0;
      iVar15 = *(int *)(puVar8 + 1);
      if (0 < iVar15) {
        if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
          iVar5 = 0;
          puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
          do {
            *puVar13 = 0xffffffff;
            puVar13 = puVar13 + 8;
            iVar15 = *(int *)(puVar8 + 1);
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar15);
        }
        iVar5 = *(int *)(puVar8 + 6);
        if ((iVar5 == 3) && (DAT_14079038c != '\0')) {
          bVar16 = *(char *)((longlong)puVar8 + 0x25) != '\0';
          iVar5 = 0;
          uVar18 = *(undefined8 *)*puVar8;
          lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
        }
        else {
LAB_14015af7a:
          if (*(char *)((longlong)puVar8 + 0x24) == '\0') goto LAB_14015bdb4;
LAB_14015bc53:
          bVar16 = false;
          lVar9 = CONCAT44(uVar20,1);
          uVar18 = *(undefined8 *)*puVar8;
        }
LAB_14015bdda:
        FUN_140004448(&DAT_140784700,iVar5,iVar15,uVar18,lVar9,bVar16);
      }
LAB_14015bde6:
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined4 *)(puVar8 + 4) = 0;
      *(undefined4 *)(puVar8 + 5) = 0;
      goto LAB_14015ffa5;
    }
    if (uVar4 == 0x13) {
      *(undefined1 *)(puVar8 + 10) = 1;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
      *(undefined4 *)(puVar8 + 5) = 0;
      *(undefined4 *)(puVar8 + 6) = 3;
      *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
      *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
      *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
      *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
      *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
      *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
      *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x8100;
      (**(code **)(*param_2 + 0x280))(param_2);
      FUN_14014bf80(param_1,param_2,param_3);
      *(undefined1 *)(puVar8 + 10) = 0;
      iVar15 = *(int *)(puVar8 + 1);
      if (0 < iVar15) {
        if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
          iVar5 = 0;
          puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
          do {
            *puVar13 = 0xffffffff;
            puVar13 = puVar13 + 8;
            iVar15 = *(int *)(puVar8 + 1);
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar15);
        }
LAB_14015af65:
        iVar5 = *(int *)(puVar8 + 6);
        if ((iVar5 != 3) || (DAT_14079038c == '\0')) goto LAB_14015af7a;
LAB_14015bc26:
        bVar16 = *(char *)((longlong)puVar8 + 0x25) != '\0';
        iVar5 = 0;
        uVar18 = *(undefined8 *)*puVar8;
        lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
        goto LAB_14015bdda;
      }
      goto LAB_14015bde6;
    }
    if (uVar4 == 0x17) {
      *(undefined1 *)(puVar8 + 10) = 1;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
      *(undefined4 *)(puVar8 + 5) = 0;
      *(undefined4 *)(puVar8 + 6) = 3;
      *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
      *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
      *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
      *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
      *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
      *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
      *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x8100;
      (**(code **)(*param_2 + 0x280))(param_2);
      *(undefined1 *)(puVar8 + 10) = 0;
      iVar15 = *(int *)(puVar8 + 1);
      if (0 < iVar15) {
        if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
          iVar5 = 0;
          puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
          do {
            *puVar13 = 0xffffffff;
            puVar13 = puVar13 + 8;
            iVar15 = *(int *)(puVar8 + 1);
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar15);
        }
        goto LAB_14015af65;
      }
      goto LAB_14015bde6;
    }
    if (uVar4 != 0xd) {
      if (uVar4 == 0x16) {
        FUN_1400044dc(&DAT_140784700);
        FUN_140004500(&DAT_140784700);
        puVar3 = DAT_1407bb030;
        if ((int)param_2[5] == 0x82) {
          if (DAT_1407bb030[5] != 0) {
            LOCK();
            piVar1 = (int *)(DAT_1407bb030[5] + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_e8 = puVar3[4];
          uStack_e0 = puVar3[5];
          FUN_1401a60a0(DAT_140791588,&local_e8);
        }
        else if ((int)param_2[5] == 0x92) {
          if (DAT_1407bb030[3] != 0) {
            LOCK();
            piVar1 = (int *)(DAT_1407bb030[3] + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_d8 = puVar3[2];
          uStack_d0 = puVar3[3];
          FUN_1401a60a0(DAT_140791588,&local_d8);
        }
        else {
          if (DAT_1407bb030[1] != 0) {
            LOCK();
            piVar1 = (int *)(DAT_1407bb030[1] + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_c8 = *puVar3;
          uStack_c0 = puVar3[1];
          FUN_1401a60a0(DAT_140791588,&local_c8);
        }
        goto LAB_14015ffa5;
      }
      if (uVar4 == 6) {
        *(undefined1 *)(puVar8 + 10) = 1;
        *(undefined4 *)(puVar8 + 1) = 0;
        *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
        *(undefined4 *)(puVar8 + 5) = 0;
        *(undefined4 *)(puVar8 + 6) = 3;
        *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
        *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
        *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
        *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
        *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
        *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
        *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
        *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x8100;
        FUN_14014ca60(param_1,param_2,param_3);
        *(undefined1 *)(puVar8 + 10) = 0;
        iVar15 = *(int *)(puVar8 + 1);
        if (iVar15 < 1) goto LAB_14015bde6;
        if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
          iVar5 = 0;
          puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
          do {
            *puVar13 = 0xffffffff;
            puVar13 = puVar13 + 8;
            iVar15 = *(int *)(puVar8 + 1);
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar15);
        }
        iVar5 = *(int *)(puVar8 + 6);
        if ((iVar5 == 3) && (DAT_14079038c != '\0')) goto LAB_14015bc26;
        if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
          if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
            FUN_140004448(&DAT_140784700,iVar5,iVar15,*(undefined8 *)*puVar8,
                          (ulonglong)uVar20 << 0x20,(ulonglong)uVar22 << 0x20);
            *(undefined4 *)(puVar8 + 1) = 0;
            *(undefined4 *)(puVar8 + 4) = 0;
            *(undefined4 *)(puVar8 + 5) = 0;
          }
          else {
            FUN_140004448(&DAT_140784700,iVar5,iVar15,*(undefined8 *)*puVar8,CONCAT44(uVar20,3),
                          CONCAT44(uVar22,1));
            *(undefined4 *)(puVar8 + 1) = 0;
            *(undefined4 *)(puVar8 + 4) = 0;
            *(undefined4 *)(puVar8 + 5) = 0;
          }
          goto LAB_14015ffa5;
        }
        goto LAB_14015bc53;
      }
      if (uVar4 != 2) {
        if (uVar4 == 10) {
          iVar15 = 0;
          do {
            if (iVar15 == 0) {
              if (*(char *)(param_1 + 0x2c) == '\0') {
                *(undefined4 *)(param_1 + 0x14) = 0;
                *(undefined8 *)(param_1 + 0x18) = 0x3f800000;
                *(undefined8 *)(param_1 + 0x20) = 0x3f800000;
                *(undefined4 *)(param_1 + 0x28) = 0x3f000000;
LAB_14015be66:
                *(undefined1 *)(param_1 + 0x2d) = 1;
              }
            }
            else if ((iVar15 == 1) && (*(char *)(param_1 + 0x2c) == '\0')) {
              *(undefined4 *)(param_1 + 0x14) = 0;
              *(undefined8 *)(param_1 + 0x18) = 0x3f800000;
              *(undefined4 *)(param_1 + 0x20) = 0x3f000000;
              *(undefined4 *)(param_1 + 0x24) = 0x3f000000;
              *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
              goto LAB_14015be66;
            }
            FUN_140004500(&DAT_140784700);
            *(undefined1 *)(puVar8 + 10) = 1;
            *(undefined4 *)(puVar8 + 1) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
            *(undefined4 *)(puVar8 + 5) = 0;
            *(undefined4 *)(puVar8 + 6) = 3;
            *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
            *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
            *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x8100;
            lVar9 = (**(code **)(*param_2 + 0xb0))(param_2,0);
            if (lVar9 == 0) {
              lVar9 = *(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158)
                       + 0xc0);
            }
            uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
            uVar20 = 0;
            FUN_140157fd0(param_1);
            *(undefined1 *)(puVar8 + 10) = 0;
            iVar5 = *(int *)(puVar8 + 1);
            if (0 < iVar5) {
              if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                iVar6 = 0;
                puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                do {
                  *puVar13 = 0xffffffff;
                  puVar13 = puVar13 + 8;
                  iVar5 = *(int *)(puVar8 + 1);
                  iVar6 = iVar6 + 1;
                } while (iVar6 < iVar5);
              }
              iVar6 = *(int *)(puVar8 + 6);
              if ((iVar6 == 3) && (DAT_14079038c != '\0')) {
                lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
                iVar6 = 0;
                uVar18 = *(undefined8 *)*puVar8;
                lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
              }
              else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                uVar18 = *(undefined8 *)*puVar8;
                if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                  lVar21 = (ulonglong)uVar4 << 0x20;
                  lVar9 = (ulonglong)uVar20 << 0x20;
                }
                else {
                  lVar21 = CONCAT44(uVar4,1);
                  lVar9 = CONCAT44(uVar20,3);
                }
              }
              else {
                lVar21 = (ulonglong)uVar4 << 0x20;
                lVar9 = CONCAT44(uVar20,1);
                uVar18 = *(undefined8 *)*puVar8;
              }
              FUN_140004448(&DAT_140784700,iVar6,iVar5,uVar18,lVar9,lVar21);
            }
            *(undefined1 *)(puVar8 + 10) = 1;
            *(undefined4 *)(puVar8 + 1) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
            *(undefined4 *)(puVar8 + 5) = 0;
            *(undefined4 *)(puVar8 + 6) = 3;
            *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
            *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
            *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f00;
            lVar9 = (**(code **)(*param_2 + 0xb0))(param_2,1);
            if (lVar9 == 0) {
              lVar9 = *(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158)
                       + 0xc0);
            }
            uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
            uVar20 = 0;
            FUN_140158760(param_1);
            *(undefined1 *)(puVar8 + 10) = 0;
            iVar5 = *(int *)(puVar8 + 1);
            if (0 < iVar5) {
              if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                iVar6 = 0;
                puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                do {
                  *puVar13 = 0xffffffff;
                  puVar13 = puVar13 + 8;
                  iVar5 = *(int *)(puVar8 + 1);
                  iVar6 = iVar6 + 1;
                } while (iVar6 < iVar5);
              }
              iVar6 = *(int *)(puVar8 + 6);
              if ((iVar6 == 3) && (DAT_14079038c != '\0')) {
                lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
                iVar6 = 0;
                uVar18 = *(undefined8 *)*puVar8;
                lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
              }
              else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                uVar18 = *(undefined8 *)*puVar8;
                if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                  lVar21 = (ulonglong)uVar4 << 0x20;
                  lVar9 = (ulonglong)uVar20 << 0x20;
                }
                else {
                  lVar21 = CONCAT44(uVar4,1);
                  lVar9 = CONCAT44(uVar20,3);
                }
              }
              else {
                lVar21 = (ulonglong)uVar4 << 0x20;
                lVar9 = CONCAT44(uVar20,1);
                uVar18 = *(undefined8 *)*puVar8;
              }
              FUN_140004448(&DAT_140784700,iVar6,iVar5,uVar18,lVar9,lVar21);
            }
            *(undefined1 *)(puVar8 + 10) = 1;
            *(undefined4 *)(puVar8 + 1) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
            *(undefined4 *)(puVar8 + 5) = 0;
            *(undefined4 *)(puVar8 + 6) = 3;
            *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
            *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
            *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x810000;
            lVar9 = (**(code **)(*param_2 + 0xb0))(param_2,2);
            if (lVar9 == 0) {
              lVar9 = *(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158)
                       + 0xc0);
            }
            uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
            uVar20 = 0;
            FUN_140158e90(param_1);
            *(undefined1 *)(puVar8 + 10) = 0;
            iVar5 = *(int *)(puVar8 + 1);
            if (0 < iVar5) {
              if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                iVar6 = 0;
                puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                do {
                  *puVar13 = 0xffffffff;
                  puVar13 = puVar13 + 8;
                  iVar5 = *(int *)(puVar8 + 1);
                  iVar6 = iVar6 + 1;
                } while (iVar6 < iVar5);
              }
              iVar6 = *(int *)(puVar8 + 6);
              if ((iVar6 == 3) && (DAT_14079038c != '\0')) {
                lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
                iVar6 = 0;
                uVar18 = *(undefined8 *)*puVar8;
                lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
              }
              else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                uVar18 = *(undefined8 *)*puVar8;
                if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                  lVar21 = (ulonglong)uVar4 << 0x20;
                  lVar9 = (ulonglong)uVar20 << 0x20;
                }
                else {
                  lVar21 = CONCAT44(uVar4,1);
                  lVar9 = CONCAT44(uVar20,3);
                }
              }
              else {
                lVar21 = (ulonglong)uVar4 << 0x20;
                lVar9 = CONCAT44(uVar20,1);
                uVar18 = *(undefined8 *)*puVar8;
              }
              FUN_140004448(&DAT_140784700,iVar6,iVar5,uVar18,lVar9,lVar21);
            }
            *(undefined1 *)(puVar8 + 10) = 1;
            *(undefined4 *)(puVar8 + 1) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
            *(undefined4 *)(puVar8 + 5) = 0;
            *(undefined4 *)(puVar8 + 6) = 3;
            *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
            *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
            *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f0000;
            lVar9 = (**(code **)(*param_2 + 0xb0))(param_2,3);
            if (lVar9 == 0) {
              lVar9 = *(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158)
                       + 0xc0);
            }
            uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
            uVar20 = 0;
            FUN_1401595c0(param_1);
            *(undefined1 *)(puVar8 + 10) = 0;
            iVar5 = *(int *)(puVar8 + 1);
            if (0 < iVar5) {
              if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                iVar6 = 0;
                puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                do {
                  *puVar13 = 0xffffffff;
                  puVar13 = puVar13 + 8;
                  iVar5 = *(int *)(puVar8 + 1);
                  iVar6 = iVar6 + 1;
                } while (iVar6 < iVar5);
              }
              iVar6 = *(int *)(puVar8 + 6);
              if ((iVar6 == 3) && (DAT_14079038c != '\0')) {
                lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
                iVar6 = 0;
                uVar18 = *(undefined8 *)*puVar8;
                lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
              }
              else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                uVar18 = *(undefined8 *)*puVar8;
                if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                  lVar21 = (ulonglong)uVar4 << 0x20;
                  lVar9 = (ulonglong)uVar20 << 0x20;
                }
                else {
                  lVar21 = CONCAT44(uVar4,1);
                  lVar9 = CONCAT44(uVar20,3);
                }
              }
              else {
                lVar21 = (ulonglong)uVar4 << 0x20;
                lVar9 = CONCAT44(uVar20,1);
                uVar18 = *(undefined8 *)*puVar8;
              }
              FUN_140004448(&DAT_140784700,iVar6,iVar5,uVar18,lVar9,lVar21);
            }
            *(undefined1 *)(puVar8 + 10) = 1;
            *(undefined4 *)(puVar8 + 1) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
            *(undefined4 *)(puVar8 + 5) = 0;
            *(undefined4 *)(puVar8 + 6) = 3;
            *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
            *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
            *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x81;
            lVar9 = (**(code **)(*param_2 + 0xb0))(param_2,4);
            if (lVar9 == 0) {
              lVar9 = *(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158)
                       + 0xc0);
            }
            uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
            uVar20 = 0;
            FUN_140159cf0(param_1);
            *(undefined1 *)(puVar8 + 10) = 0;
            iVar5 = *(int *)(puVar8 + 1);
            if (0 < iVar5) {
              if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                iVar6 = 0;
                puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                do {
                  *puVar13 = 0xffffffff;
                  puVar13 = puVar13 + 8;
                  iVar5 = *(int *)(puVar8 + 1);
                  iVar6 = iVar6 + 1;
                } while (iVar6 < iVar5);
              }
              iVar6 = *(int *)(puVar8 + 6);
              if ((iVar6 == 3) && (DAT_14079038c != '\0')) {
                lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
                iVar6 = 0;
                uVar18 = *(undefined8 *)*puVar8;
                lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
              }
              else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                uVar18 = *(undefined8 *)*puVar8;
                if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                  lVar21 = (ulonglong)uVar4 << 0x20;
                  lVar9 = (ulonglong)uVar20 << 0x20;
                }
                else {
                  lVar21 = CONCAT44(uVar4,1);
                  lVar9 = CONCAT44(uVar20,3);
                }
              }
              else {
                lVar21 = (ulonglong)uVar4 << 0x20;
                lVar9 = CONCAT44(uVar20,1);
                uVar18 = *(undefined8 *)*puVar8;
              }
              FUN_140004448(&DAT_140784700,iVar6,iVar5,uVar18,lVar9,lVar21);
            }
            *(undefined1 *)(puVar8 + 10) = 1;
            *(undefined4 *)(puVar8 + 1) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
            *(undefined4 *)(puVar8 + 5) = 0;
            *(undefined4 *)(puVar8 + 6) = 3;
            *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
            *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
            *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f;
            lVar9 = (**(code **)(*param_2 + 0xb0))(param_2);
            if (lVar9 == 0) {
              lVar9 = *(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158)
                       + 0xc0);
            }
            uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
            uVar20 = 0;
            FUN_14015a420(param_1);
            *(undefined1 *)(puVar8 + 10) = 0;
            iVar5 = *(int *)(puVar8 + 1);
            if (0 < iVar5) {
              if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                iVar6 = 0;
                puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                do {
                  *puVar13 = 0xffffffff;
                  puVar13 = puVar13 + 8;
                  iVar5 = *(int *)(puVar8 + 1);
                  iVar6 = iVar6 + 1;
                } while (iVar6 < iVar5);
              }
              iVar6 = *(int *)(puVar8 + 6);
              if ((iVar6 == 3) && (DAT_14079038c != '\0')) {
                lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
                iVar6 = 0;
                uVar18 = *(undefined8 *)*puVar8;
                lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
              }
              else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                uVar18 = *(undefined8 *)*puVar8;
                if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                  lVar21 = (ulonglong)uVar4 << 0x20;
                  lVar9 = (ulonglong)uVar20 << 0x20;
                }
                else {
                  lVar21 = CONCAT44(uVar4,1);
                  lVar9 = CONCAT44(uVar20,3);
                }
              }
              else {
                lVar21 = (ulonglong)uVar4 << 0x20;
                lVar9 = CONCAT44(uVar20,1);
                uVar18 = *(undefined8 *)*puVar8;
              }
              FUN_140004448(&DAT_140784700,iVar6,iVar5,uVar18,lVar9,lVar21);
            }
            *(undefined4 *)(puVar8 + 1) = 0;
            *(undefined4 *)(puVar8 + 4) = 0;
            *(undefined4 *)(puVar8 + 5) = 0;
            FUN_140004500(&DAT_140784700);
            iVar15 = iVar15 + 1;
          } while (iVar15 < 2);
          goto LAB_14015ffa5;
        }
        if (uVar4 == 0x1b) {
          iVar6 = 0;
          FUN_140004500(&DAT_140784700);
          *(undefined1 *)(puVar8 + 10) = 1;
          *(undefined4 *)(puVar8 + 1) = 0;
          *(undefined8 *)((longlong)puVar8 + 0x1c) = 0;
          *(undefined4 *)(puVar8 + 5) = 0;
          *(undefined4 *)(puVar8 + 6) = 3;
          *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
          *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
          *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
          *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
          *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
          *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
          *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
          iVar15 = iVar6;
          iVar5 = iVar6;
          do {
            iVar7 = 2;
            if (iVar15 != 0) {
              iVar7 = 0;
            }
            iVar12 = iVar15;
            if (iVar15 == 1) {
LAB_14015c84c:
              iVar7 = 3;
              iVar11 = iVar12;
            }
            else if (iVar15 == 2) {
              iVar7 = 4;
              iVar11 = 1;
            }
            else if (iVar15 == 3) {
              iVar7 = 5;
              iVar11 = 2;
            }
            else if (iVar15 == 4) {
              iVar7 = 6;
              iVar11 = 3;
            }
            else if (iVar15 == 5) {
              iVar7 = 7;
              iVar11 = iVar15;
            }
            else if (iVar15 == 6) {
              iVar11 = 2;
              iVar7 = 6;
            }
            else {
              iVar11 = 1;
              iVar12 = 1;
              if (iVar15 == 7) goto LAB_14015c84c;
            }
            iVar5 = iVar5 + iVar11;
            FUN_140138140(param_1,0.5 - (float)iVar7 * 0.0625,1.0 - (float)iVar5 * 0.0625);
            *(undefined1 *)((longlong)puVar8 + 0x1f) = 1;
            *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x8100;
            (**(code **)(*param_2 + 0xb0))(param_2,0);
            FUN_140157fd0(param_1);
            *(undefined1 *)((longlong)puVar8 + 0x1f) = 1;
            *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f00;
            (**(code **)(*param_2 + 0xb0))(param_2,1);
            FUN_140158760(param_1);
            *(undefined1 *)((longlong)puVar8 + 0x1f) = 1;
            *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x810000;
            (**(code **)(*param_2 + 0xb0))(param_2,2);
            FUN_140158e90(param_1);
            *(undefined1 *)((longlong)puVar8 + 0x1f) = 1;
            *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f0000;
            (**(code **)(*param_2 + 0xb0))(param_2,3);
            FUN_1401595c0(param_1);
            *(undefined1 *)((longlong)puVar8 + 0x1f) = 1;
            *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x81;
            (**(code **)(*param_2 + 0xb0))(param_2,4);
            FUN_140159cf0(param_1);
            *(undefined1 *)((longlong)puVar8 + 0x1f) = 1;
            *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f;
            lVar9 = (**(code **)(*param_2 + 0xb0))(param_2);
            if (lVar9 == 0) {
              lVar9 = *(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158)
                       + 0xc0);
            }
            uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
            uVar20 = 0;
            FUN_14015a420(param_1);
            iVar15 = iVar15 + 1;
          } while (iVar15 < 8);
          *(undefined1 *)(puVar8 + 10) = 0;
          iVar15 = *(int *)(puVar8 + 1);
          if (0 < iVar15) {
            if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
              puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
              do {
                *puVar13 = 0xffffffff;
                puVar13 = puVar13 + 8;
                iVar15 = *(int *)(puVar8 + 1);
                iVar6 = iVar6 + 1;
              } while (iVar6 < iVar15);
            }
            iVar5 = *(int *)(puVar8 + 6);
            if ((iVar5 == 3) && (DAT_14079038c != '\0')) {
              lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
              iVar5 = 0;
              uVar18 = *(undefined8 *)*puVar8;
              lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
            }
            else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
              uVar18 = *(undefined8 *)*puVar8;
              if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                lVar21 = (ulonglong)uVar4 << 0x20;
                lVar9 = (ulonglong)uVar20 << 0x20;
              }
              else {
                lVar21 = CONCAT44(uVar4,1);
                lVar9 = CONCAT44(uVar20,3);
              }
            }
            else {
              lVar21 = (ulonglong)uVar4 << 0x20;
              lVar9 = CONCAT44(uVar20,1);
              uVar18 = *(undefined8 *)*puVar8;
            }
            FUN_140004448(&DAT_140784700,iVar5,iVar15,uVar18,lVar9,lVar21);
          }
          *(undefined4 *)(puVar8 + 1) = 0;
          *(undefined4 *)(puVar8 + 4) = 0;
          *(undefined4 *)(puVar8 + 5) = 0;
          FUN_140004500(&DAT_140784700);
        }
        else {
          if (uVar4 != 0xb) {
            if (uVar4 == 0x15) {
              iVar15 = 0;
              do {
                if (iVar15 == 0) {
                  if (*(char *)(param_1 + 0x2c) != '\0') goto LAB_14015d707;
                  *(undefined4 *)(param_1 + 0x14) = 0x3ee00000;
                  *(undefined4 *)(param_1 + 0x18) = 0x3f100000;
                  *(undefined4 *)(param_1 + 0x1c) = 0x3e99999a;
                  *(undefined8 *)(param_1 + 0x20) = 0x3f800000;
                  *(undefined4 *)(param_1 + 0x28) = 0x3e000000;
LAB_14015d703:
                  *(undefined1 *)(param_1 + 0x2d) = 1;
                }
                else if (iVar15 == 1) {
                  if (*(char *)(param_1 + 0x2c) == '\0') {
                    *(undefined4 *)(param_1 + 0x14) = 0x3ee00000;
                    *(undefined4 *)(param_1 + 0x18) = 0x3f100000;
                    *(undefined4 *)(param_1 + 0x1c) = 0x3e99999a;
                    *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
                    *(undefined4 *)(param_1 + 0x24) = 0x3f600000;
LAB_14015d6fc:
                    *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
                    goto LAB_14015d703;
                  }
                }
                else if ((iVar15 == 2) && (*(char *)(param_1 + 0x2c) == '\0')) {
                  *(undefined4 *)(param_1 + 0x14) = 0x3ee00000;
                  *(undefined4 *)(param_1 + 0x18) = 0x3f100000;
                  *(undefined4 *)(param_1 + 0x1c) = 0x3f000000;
                  *(undefined8 *)(param_1 + 0x20) = 0x3f700000;
                  goto LAB_14015d6fc;
                }
LAB_14015d707:
                FUN_140004500(&DAT_140784700);
                *(undefined1 *)(puVar8 + 10) = 1;
                *(undefined4 *)(puVar8 + 1) = 0;
                *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
                *(undefined4 *)(puVar8 + 5) = 0;
                *(undefined4 *)(puVar8 + 6) = 3;
                *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
                *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
                *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x8100;
                lVar9 = (**(code **)(*param_2 + 0xb0))(param_2,0);
                if (lVar9 == 0) {
                  lVar9 = *(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) + 0xc0);
                }
                uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
                uVar20 = 0;
                FUN_140157fd0(param_1);
                *(undefined1 *)(puVar8 + 10) = 0;
                iVar5 = *(int *)(puVar8 + 1);
                if (0 < iVar5) {
                  if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                    iVar6 = 0;
                    puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                    do {
                      *puVar13 = 0xffffffff;
                      puVar13 = puVar13 + 8;
                      iVar5 = *(int *)(puVar8 + 1);
                      iVar6 = iVar6 + 1;
                    } while (iVar6 < iVar5);
                  }
                  iVar6 = *(int *)(puVar8 + 6);
                  if ((iVar6 == 3) && (DAT_14079038c != '\0')) {
                    lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
                    iVar6 = 0;
                    uVar18 = *(undefined8 *)*puVar8;
                    lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
                  }
                  else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                    uVar18 = *(undefined8 *)*puVar8;
                    if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                      lVar21 = (ulonglong)uVar4 << 0x20;
                      lVar9 = (ulonglong)uVar20 << 0x20;
                    }
                    else {
                      lVar21 = CONCAT44(uVar4,1);
                      lVar9 = CONCAT44(uVar20,3);
                    }
                  }
                  else {
                    lVar21 = (ulonglong)uVar4 << 0x20;
                    lVar9 = CONCAT44(uVar20,1);
                    uVar18 = *(undefined8 *)*puVar8;
                  }
                  FUN_140004448(&DAT_140784700,iVar6,iVar5,uVar18,lVar9,lVar21);
                }
                *(undefined1 *)(puVar8 + 10) = 1;
                *(undefined4 *)(puVar8 + 1) = 0;
                *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
                *(undefined4 *)(puVar8 + 5) = 0;
                *(undefined4 *)(puVar8 + 6) = 3;
                *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
                *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
                *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f00;
                lVar9 = (**(code **)(*param_2 + 0xb0))(param_2,1);
                if (lVar9 == 0) {
                  lVar9 = *(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) + 0xc0);
                }
                uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
                uVar20 = 0;
                FUN_140158760(param_1);
                *(undefined1 *)(puVar8 + 10) = 0;
                iVar5 = *(int *)(puVar8 + 1);
                if (0 < iVar5) {
                  if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                    iVar6 = 0;
                    puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                    do {
                      *puVar13 = 0xffffffff;
                      puVar13 = puVar13 + 8;
                      iVar5 = *(int *)(puVar8 + 1);
                      iVar6 = iVar6 + 1;
                    } while (iVar6 < iVar5);
                  }
                  iVar6 = *(int *)(puVar8 + 6);
                  if ((iVar6 == 3) && (DAT_14079038c != '\0')) {
                    lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
                    iVar6 = 0;
                    uVar18 = *(undefined8 *)*puVar8;
                    lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
                  }
                  else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                    uVar18 = *(undefined8 *)*puVar8;
                    if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                      lVar21 = (ulonglong)uVar4 << 0x20;
                      lVar9 = (ulonglong)uVar20 << 0x20;
                    }
                    else {
                      lVar21 = CONCAT44(uVar4,1);
                      lVar9 = CONCAT44(uVar20,3);
                    }
                  }
                  else {
                    lVar21 = (ulonglong)uVar4 << 0x20;
                    lVar9 = CONCAT44(uVar20,1);
                    uVar18 = *(undefined8 *)*puVar8;
                  }
                  FUN_140004448(&DAT_140784700,iVar6,iVar5,uVar18,lVar9,lVar21);
                }
                *(undefined1 *)(puVar8 + 10) = 1;
                *(undefined4 *)(puVar8 + 1) = 0;
                *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
                *(undefined4 *)(puVar8 + 5) = 0;
                *(undefined4 *)(puVar8 + 6) = 3;
                *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
                *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
                *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x810000;
                lVar9 = (**(code **)(*param_2 + 0xb0))(param_2,2);
                if (lVar9 == 0) {
                  lVar9 = *(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) + 0xc0);
                }
                uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
                uVar20 = 0;
                FUN_140158e90(param_1);
                *(undefined1 *)(puVar8 + 10) = 0;
                iVar5 = *(int *)(puVar8 + 1);
                if (0 < iVar5) {
                  if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                    iVar6 = 0;
                    puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                    do {
                      *puVar13 = 0xffffffff;
                      puVar13 = puVar13 + 8;
                      iVar5 = *(int *)(puVar8 + 1);
                      iVar6 = iVar6 + 1;
                    } while (iVar6 < iVar5);
                  }
                  iVar6 = *(int *)(puVar8 + 6);
                  if ((iVar6 == 3) && (DAT_14079038c != '\0')) {
                    lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
                    iVar6 = 0;
                    uVar18 = *(undefined8 *)*puVar8;
                    lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
                  }
                  else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                    uVar18 = *(undefined8 *)*puVar8;
                    if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                      lVar21 = (ulonglong)uVar4 << 0x20;
                      lVar9 = (ulonglong)uVar20 << 0x20;
                    }
                    else {
                      lVar21 = CONCAT44(uVar4,1);
                      lVar9 = CONCAT44(uVar20,3);
                    }
                  }
                  else {
                    lVar21 = (ulonglong)uVar4 << 0x20;
                    lVar9 = CONCAT44(uVar20,1);
                    uVar18 = *(undefined8 *)*puVar8;
                  }
                  FUN_140004448(&DAT_140784700,iVar6,iVar5,uVar18,lVar9,lVar21);
                }
                *(undefined1 *)(puVar8 + 10) = 1;
                *(undefined4 *)(puVar8 + 1) = 0;
                *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
                *(undefined4 *)(puVar8 + 5) = 0;
                *(undefined4 *)(puVar8 + 6) = 3;
                *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
                *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
                *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f0000;
                lVar9 = (**(code **)(*param_2 + 0xb0))(param_2,3);
                if (lVar9 == 0) {
                  lVar9 = *(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) + 0xc0);
                }
                uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
                uVar20 = 0;
                FUN_1401595c0(param_1);
                *(undefined1 *)(puVar8 + 10) = 0;
                iVar5 = *(int *)(puVar8 + 1);
                if (0 < iVar5) {
                  if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                    iVar6 = 0;
                    puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                    do {
                      *puVar13 = 0xffffffff;
                      puVar13 = puVar13 + 8;
                      iVar5 = *(int *)(puVar8 + 1);
                      iVar6 = iVar6 + 1;
                    } while (iVar6 < iVar5);
                  }
                  iVar6 = *(int *)(puVar8 + 6);
                  if ((iVar6 == 3) && (DAT_14079038c != '\0')) {
                    lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
                    iVar6 = 0;
                    uVar18 = *(undefined8 *)*puVar8;
                    lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
                  }
                  else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                    uVar18 = *(undefined8 *)*puVar8;
                    if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                      lVar21 = (ulonglong)uVar4 << 0x20;
                      lVar9 = (ulonglong)uVar20 << 0x20;
                    }
                    else {
                      lVar21 = CONCAT44(uVar4,1);
                      lVar9 = CONCAT44(uVar20,3);
                    }
                  }
                  else {
                    lVar21 = (ulonglong)uVar4 << 0x20;
                    lVar9 = CONCAT44(uVar20,1);
                    uVar18 = *(undefined8 *)*puVar8;
                  }
                  FUN_140004448(&DAT_140784700,iVar6,iVar5,uVar18,lVar9,lVar21);
                }
                *(undefined1 *)(puVar8 + 10) = 1;
                *(undefined4 *)(puVar8 + 1) = 0;
                *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
                *(undefined4 *)(puVar8 + 5) = 0;
                *(undefined4 *)(puVar8 + 6) = 3;
                *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
                *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
                *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x81;
                lVar9 = (**(code **)(*param_2 + 0xb0))(param_2,4);
                if (lVar9 == 0) {
                  lVar9 = *(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) + 0xc0);
                }
                uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
                uVar20 = 0;
                FUN_140159cf0(param_1);
                *(undefined1 *)(puVar8 + 10) = 0;
                iVar5 = *(int *)(puVar8 + 1);
                if (0 < iVar5) {
                  if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                    iVar6 = 0;
                    puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                    do {
                      *puVar13 = 0xffffffff;
                      puVar13 = puVar13 + 8;
                      iVar5 = *(int *)(puVar8 + 1);
                      iVar6 = iVar6 + 1;
                    } while (iVar6 < iVar5);
                  }
                  iVar6 = *(int *)(puVar8 + 6);
                  if ((iVar6 == 3) && (DAT_14079038c != '\0')) {
                    lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
                    iVar6 = 0;
                    uVar18 = *(undefined8 *)*puVar8;
                    lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
                  }
                  else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                    uVar18 = *(undefined8 *)*puVar8;
                    if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                      lVar21 = (ulonglong)uVar4 << 0x20;
                      lVar9 = (ulonglong)uVar20 << 0x20;
                    }
                    else {
                      lVar21 = CONCAT44(uVar4,1);
                      lVar9 = CONCAT44(uVar20,3);
                    }
                  }
                  else {
                    lVar21 = (ulonglong)uVar4 << 0x20;
                    lVar9 = CONCAT44(uVar20,1);
                    uVar18 = *(undefined8 *)*puVar8;
                  }
                  FUN_140004448(&DAT_140784700,iVar6,iVar5,uVar18,lVar9,lVar21);
                }
                *(undefined1 *)(puVar8 + 10) = 1;
                *(undefined4 *)(puVar8 + 1) = 0;
                *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
                *(undefined4 *)(puVar8 + 5) = 0;
                *(undefined4 *)(puVar8 + 6) = 3;
                *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
                *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
                *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f;
                lVar9 = (**(code **)(*param_2 + 0xb0))(param_2);
                if (lVar9 == 0) {
                  lVar9 = *(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) + 0xc0);
                }
                uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
                uVar20 = 0;
                FUN_14015a420(param_1);
                *(undefined1 *)(puVar8 + 10) = 0;
                iVar5 = *(int *)(puVar8 + 1);
                if (0 < iVar5) {
                  if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                    iVar6 = 0;
                    puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                    do {
                      *puVar13 = 0xffffffff;
                      puVar13 = puVar13 + 8;
                      iVar5 = *(int *)(puVar8 + 1);
                      iVar6 = iVar6 + 1;
                    } while (iVar6 < iVar5);
                  }
                  iVar6 = *(int *)(puVar8 + 6);
                  if ((iVar6 == 3) && (DAT_14079038c != '\0')) {
                    lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
                    iVar6 = 0;
                    uVar18 = *(undefined8 *)*puVar8;
                    lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
                  }
                  else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                    uVar18 = *(undefined8 *)*puVar8;
                    if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                      lVar21 = (ulonglong)uVar4 << 0x20;
                      lVar9 = (ulonglong)uVar20 << 0x20;
                    }
                    else {
                      lVar21 = CONCAT44(uVar4,1);
                      lVar9 = CONCAT44(uVar20,3);
                    }
                  }
                  else {
                    lVar21 = (ulonglong)uVar4 << 0x20;
                    lVar9 = CONCAT44(uVar20,1);
                    uVar18 = *(undefined8 *)*puVar8;
                  }
                  FUN_140004448(&DAT_140784700,iVar6,iVar5,uVar18,lVar9,lVar21);
                }
                *(undefined4 *)(puVar8 + 1) = 0;
                *(undefined4 *)(puVar8 + 4) = 0;
                *(undefined4 *)(puVar8 + 5) = 0;
                FUN_140004500(&DAT_140784700);
                iVar15 = iVar15 + 1;
              } while (iVar15 < 3);
              goto LAB_14015ffa5;
            }
            if (uVar4 == 0x20) {
              iVar15 = 0;
              do {
                if (iVar15 == 0) {
                  if (*(char *)(param_1 + 0x2c) == '\0') {
                    *(undefined4 *)(param_1 + 0x14) = 0;
                    *(undefined8 *)(param_1 + 0x18) = 0x3f800000;
                    *(undefined4 *)(param_1 + 0x20) = 0x3f500000;
                    *(undefined4 *)(param_1 + 0x24) = 0x3ea00000;
                    *(undefined4 *)(param_1 + 0x28) = 0x3f300000;
                    *(undefined1 *)(param_1 + 0x2d) = 1;
                  }
                }
                else if (iVar15 == 1) {
                  FUN_140138140(param_1);
                }
                FUN_140004500(&DAT_140784700);
                *(undefined1 *)(puVar8 + 10) = 1;
                *(undefined4 *)(puVar8 + 1) = 0;
                *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
                *(undefined4 *)(puVar8 + 5) = 0;
                *(undefined4 *)(puVar8 + 6) = 3;
                *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
                *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
                *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x8100;
                uVar10 = (**(code **)(*param_2 + 0xb8))(param_2,0,param_3);
                uVar17 = 0;
                FUN_140157fd0(param_1);
                *(undefined1 *)(puVar8 + 10) = 0;
                iVar5 = *(int *)(puVar8 + 1);
                if (0 < iVar5) {
                  if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                    iVar6 = 0;
                    puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                    do {
                      *puVar13 = 0xffffffff;
                      puVar13 = puVar13 + 8;
                      iVar5 = *(int *)(puVar8 + 1);
                      iVar6 = iVar6 + 1;
                    } while (iVar6 < iVar5);
                  }
                  iVar6 = *(int *)(puVar8 + 6);
                  if ((iVar6 == 3) && (DAT_14079038c != '\0')) {
                    uVar10 = (ulonglong)(*(char *)((longlong)puVar8 + 0x25) != '\0');
                    iVar6 = 0;
                    uVar18 = *(undefined8 *)*puVar8;
                    uVar17 = (ulonglong)(*(char *)((longlong)puVar8 + 0x24) != '\0');
                  }
                  else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                    uVar18 = *(undefined8 *)*puVar8;
                    if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                      uVar10 = 0;
                      uVar17 = 0;
                    }
                    else {
                      uVar10 = 1;
                      uVar17 = 3;
                    }
                  }
                  else {
                    uVar10 = 0;
                    uVar17 = 1;
                    uVar18 = *(undefined8 *)*puVar8;
                  }
                  FUN_140004448(&DAT_140784700,iVar6,iVar5,uVar18,uVar17,uVar10);
                }
                *(undefined1 *)(puVar8 + 10) = 1;
                *(undefined4 *)(puVar8 + 1) = 0;
                *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
                *(undefined4 *)(puVar8 + 5) = 0;
                *(undefined4 *)(puVar8 + 6) = 3;
                *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
                *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
                *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f00;
                uVar10 = (**(code **)(*param_2 + 0xb8))
                                   (param_2,1,param_3,*(code **)(*param_2 + 0xb8),uVar17,uVar10);
                uVar17 = 0;
                FUN_140158760(param_1);
                *(undefined1 *)(puVar8 + 10) = 0;
                iVar5 = *(int *)(puVar8 + 1);
                if (0 < iVar5) {
                  if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                    iVar6 = 0;
                    puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                    do {
                      *puVar13 = 0xffffffff;
                      puVar13 = puVar13 + 8;
                      iVar5 = *(int *)(puVar8 + 1);
                      iVar6 = iVar6 + 1;
                    } while (iVar6 < iVar5);
                  }
                  iVar6 = *(int *)(puVar8 + 6);
                  if ((iVar6 == 3) && (DAT_14079038c != '\0')) {
                    uVar10 = (ulonglong)(*(char *)((longlong)puVar8 + 0x25) != '\0');
                    iVar6 = 0;
                    uVar18 = *(undefined8 *)*puVar8;
                    uVar17 = (ulonglong)(*(char *)((longlong)puVar8 + 0x24) != '\0');
                  }
                  else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                    uVar18 = *(undefined8 *)*puVar8;
                    if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                      uVar10 = 0;
                      uVar17 = 0;
                    }
                    else {
                      uVar10 = 1;
                      uVar17 = 3;
                    }
                  }
                  else {
                    uVar10 = 0;
                    uVar17 = 1;
                    uVar18 = *(undefined8 *)*puVar8;
                  }
                  FUN_140004448(&DAT_140784700,iVar6,iVar5,uVar18,uVar17,uVar10);
                }
                *(undefined1 *)(puVar8 + 10) = 1;
                *(undefined4 *)(puVar8 + 1) = 0;
                *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
                *(undefined4 *)(puVar8 + 5) = 0;
                *(undefined4 *)(puVar8 + 6) = 3;
                *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
                *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
                *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x810000;
                uVar10 = (**(code **)(*param_2 + 0xb8))
                                   (param_2,2,param_3,*(code **)(*param_2 + 0xb8),uVar17,uVar10);
                uVar17 = 0;
                FUN_140158e90(param_1);
                *(undefined1 *)(puVar8 + 10) = 0;
                iVar5 = *(int *)(puVar8 + 1);
                if (0 < iVar5) {
                  if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                    iVar6 = 0;
                    puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                    do {
                      *puVar13 = 0xffffffff;
                      puVar13 = puVar13 + 8;
                      iVar5 = *(int *)(puVar8 + 1);
                      iVar6 = iVar6 + 1;
                    } while (iVar6 < iVar5);
                  }
                  iVar6 = *(int *)(puVar8 + 6);
                  if ((iVar6 == 3) && (DAT_14079038c != '\0')) {
                    uVar10 = (ulonglong)(*(char *)((longlong)puVar8 + 0x25) != '\0');
                    iVar6 = 0;
                    uVar18 = *(undefined8 *)*puVar8;
                    uVar17 = (ulonglong)(*(char *)((longlong)puVar8 + 0x24) != '\0');
                  }
                  else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                    uVar18 = *(undefined8 *)*puVar8;
                    if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                      uVar10 = 0;
                      uVar17 = 0;
                    }
                    else {
                      uVar10 = 1;
                      uVar17 = 3;
                    }
                  }
                  else {
                    uVar10 = 0;
                    uVar17 = 1;
                    uVar18 = *(undefined8 *)*puVar8;
                  }
                  FUN_140004448(&DAT_140784700,iVar6,iVar5,uVar18,uVar17,uVar10);
                }
                *(undefined1 *)(puVar8 + 10) = 1;
                *(undefined4 *)(puVar8 + 1) = 0;
                *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
                *(undefined4 *)(puVar8 + 5) = 0;
                *(undefined4 *)(puVar8 + 6) = 3;
                *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
                *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
                *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f0000;
                uVar10 = (**(code **)(*param_2 + 0xb8))
                                   (param_2,3,param_3,*(code **)(*param_2 + 0xb8),uVar17,uVar10);
                uVar17 = 0;
                FUN_1401595c0(param_1);
                *(undefined1 *)(puVar8 + 10) = 0;
                iVar5 = *(int *)(puVar8 + 1);
                if (0 < iVar5) {
                  if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                    iVar6 = 0;
                    puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                    do {
                      *puVar13 = 0xffffffff;
                      puVar13 = puVar13 + 8;
                      iVar5 = *(int *)(puVar8 + 1);
                      iVar6 = iVar6 + 1;
                    } while (iVar6 < iVar5);
                  }
                  iVar6 = *(int *)(puVar8 + 6);
                  if ((iVar6 == 3) && (DAT_14079038c != '\0')) {
                    uVar10 = (ulonglong)(*(char *)((longlong)puVar8 + 0x25) != '\0');
                    iVar6 = 0;
                    uVar18 = *(undefined8 *)*puVar8;
                    uVar17 = (ulonglong)(*(char *)((longlong)puVar8 + 0x24) != '\0');
                  }
                  else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                    uVar18 = *(undefined8 *)*puVar8;
                    if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                      uVar10 = 0;
                      uVar17 = 0;
                    }
                    else {
                      uVar10 = 1;
                      uVar17 = 3;
                    }
                  }
                  else {
                    uVar10 = 0;
                    uVar17 = 1;
                    uVar18 = *(undefined8 *)*puVar8;
                  }
                  FUN_140004448(&DAT_140784700,iVar6,iVar5,uVar18,uVar17,uVar10);
                }
                *(undefined1 *)(puVar8 + 10) = 1;
                *(undefined4 *)(puVar8 + 1) = 0;
                *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
                *(undefined4 *)(puVar8 + 5) = 0;
                *(undefined4 *)(puVar8 + 6) = 3;
                *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
                *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
                *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x81;
                uVar10 = (**(code **)(*param_2 + 0xb8))
                                   (param_2,4,param_3,*(code **)(*param_2 + 0xb8),uVar17,uVar10);
                uVar17 = 0;
                FUN_140159cf0(param_1);
                *(undefined1 *)(puVar8 + 10) = 0;
                iVar5 = *(int *)(puVar8 + 1);
                if (0 < iVar5) {
                  if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                    iVar6 = 0;
                    puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                    do {
                      *puVar13 = 0xffffffff;
                      puVar13 = puVar13 + 8;
                      iVar5 = *(int *)(puVar8 + 1);
                      iVar6 = iVar6 + 1;
                    } while (iVar6 < iVar5);
                  }
                  iVar6 = *(int *)(puVar8 + 6);
                  if ((iVar6 == 3) && (DAT_14079038c != '\0')) {
                    uVar10 = (ulonglong)(*(char *)((longlong)puVar8 + 0x25) != '\0');
                    iVar6 = 0;
                    uVar18 = *(undefined8 *)*puVar8;
                    uVar17 = (ulonglong)(*(char *)((longlong)puVar8 + 0x24) != '\0');
                  }
                  else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                    uVar18 = *(undefined8 *)*puVar8;
                    if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                      uVar10 = 0;
                      uVar17 = 0;
                    }
                    else {
                      uVar10 = 1;
                      uVar17 = 3;
                    }
                  }
                  else {
                    uVar10 = 0;
                    uVar17 = 1;
                    uVar18 = *(undefined8 *)*puVar8;
                  }
                  FUN_140004448(&DAT_140784700,iVar6,iVar5,uVar18,uVar17,uVar10);
                }
                *(undefined1 *)(puVar8 + 10) = 1;
                *(undefined4 *)(puVar8 + 1) = 0;
                *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
                *(undefined4 *)(puVar8 + 5) = 0;
                *(undefined4 *)(puVar8 + 6) = 3;
                *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
                *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
                *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
                *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
                *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f;
                (**(code **)(*param_2 + 0xb8))
                          (param_2,5,param_3,*(code **)(*param_2 + 0xb8),uVar17,uVar10);
                uVar20 = 0;
                uVar4 = extraout_var;
                FUN_14015a420(param_1);
                *(undefined1 *)(puVar8 + 10) = 0;
                iVar5 = *(int *)(puVar8 + 1);
                if (0 < iVar5) {
                  if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                    iVar6 = 0;
                    puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                    do {
                      *puVar13 = 0xffffffff;
                      puVar13 = puVar13 + 8;
                      iVar5 = *(int *)(puVar8 + 1);
                      iVar6 = iVar6 + 1;
                    } while (iVar6 < iVar5);
                  }
                  iVar6 = *(int *)(puVar8 + 6);
                  if ((iVar6 == 3) && (DAT_14079038c != '\0')) {
                    lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
                    iVar6 = 0;
                    uVar18 = *(undefined8 *)*puVar8;
                    lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
                  }
                  else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                    uVar18 = *(undefined8 *)*puVar8;
                    if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                      lVar21 = (ulonglong)uVar4 << 0x20;
                      lVar9 = (ulonglong)uVar20 << 0x20;
                    }
                    else {
                      lVar21 = CONCAT44(uVar4,1);
                      lVar9 = CONCAT44(uVar20,3);
                    }
                  }
                  else {
                    lVar21 = (ulonglong)uVar4 << 0x20;
                    lVar9 = CONCAT44(uVar20,1);
                    uVar18 = *(undefined8 *)*puVar8;
                  }
                  FUN_140004448(&DAT_140784700,iVar6,iVar5,uVar18,lVar9,lVar21);
                }
                *(undefined4 *)(puVar8 + 1) = 0;
                *(undefined4 *)(puVar8 + 4) = 0;
                *(undefined4 *)(puVar8 + 5) = 0;
                FUN_140004500(&DAT_140784700);
                iVar15 = iVar15 + 1;
              } while (iVar15 < 2);
              if (*(char *)(param_1 + 0x2c) == '\0') {
                *(undefined4 *)(param_1 + 0x14) = 0;
                *(undefined8 *)(param_1 + 0x18) = 0x3f800000;
                *(undefined8 *)(param_1 + 0x20) = 0x3f800000;
                *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
                *(undefined1 *)(param_1 + 0x2d) = 0;
              }
              goto LAB_14015ffa5;
            }
            if (uVar4 == 0x23) {
              FUN_140004500(&DAT_140784700);
              FUN_14013aef0(param_1,param_2,0,0,in_stack_fffffffffffffee8 & 0xffffffff00000000,
                            CONCAT44(uVar22,param_3 * 4),1);
            }
            else {
              if (uVar4 == 0x22) {
                iVar5 = 0;
                iVar15 = iVar5;
                do {
                  if (iVar15 == 0) {
                    plVar14 = DAT_1407aae48;
                    if (*(char *)(param_1 + 0x2c) == '\0') {
                      *(undefined4 *)(param_1 + 0x14) = 0x3e000000;
                      *(undefined8 *)(param_1 + 0x18) = 0x3f600000;
                      *(undefined4 *)(param_1 + 0x20) = 0x3e400000;
                      *(undefined4 *)(param_1 + 0x24) = 0x3e000000;
                      *(undefined4 *)(param_1 + 0x28) = 0x3f600000;
                      *(undefined1 *)(param_1 + 0x2d) = 1;
                      plVar14 = DAT_1407aae48;
                    }
LAB_14015ea4a:
                    lVar9 = (**(code **)(*plVar14 + 0xb0))(plVar14,1);
                    if (lVar9 == 0) {
                      lVar9 = *(longlong *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) +
                               0xc0);
                    }
                    *(longlong *)(param_1 + 8) = lVar9;
                  }
                  else {
                    if (iVar15 == 1) {
                      plVar14 = DAT_1407aaf50;
                      if (*(char *)(param_1 + 0x2c) == '\0') {
                        *(undefined4 *)(param_1 + 0x14) = 0x3e400000;
                        *(undefined4 *)(param_1 + 0x18) = 0x3f500000;
                        *(undefined4 *)(param_1 + 0x1c) = 0x3e400000;
                        *(undefined4 *)(param_1 + 0x20) = 0x3f600000;
                        *(undefined4 *)(param_1 + 0x24) = 0x3e400000;
                        *(undefined4 *)(param_1 + 0x28) = 0x3f500000;
                        *(undefined1 *)(param_1 + 0x2d) = 1;
                        plVar14 = DAT_1407aaf50;
                      }
                      goto LAB_14015ea4a;
                    }
                    if (iVar15 == 2) {
                      plVar14 = DAT_1407aaee8;
                      if (*(char *)(param_1 + 0x2c) == '\0') {
                        *(undefined4 *)(param_1 + 0x14) = 0;
                        *(undefined8 *)(param_1 + 0x18) = 0x3f800000;
                        *(undefined8 *)(param_1 + 0x20) = 0x3f800000;
                        *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
                        *(undefined1 *)(param_1 + 0x2d) = 0;
                        plVar14 = DAT_1407aaee8;
                      }
                      goto LAB_14015ea4a;
                    }
                  }
                  FUN_140004500(&DAT_140784700);
                  *(undefined1 *)(puVar8 + 10) = 1;
                  *(undefined4 *)(puVar8 + 1) = 0;
                  *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
                  *(undefined4 *)(puVar8 + 5) = 0;
                  *(undefined4 *)(puVar8 + 6) = 3;
                  *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
                  *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
                  *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
                  *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
                  *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
                  *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
                  *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
                  *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x8100;
                  uVar10 = (**(code **)(*param_2 + 0xb8))(param_2,0,param_3);
                  if (uVar10 == 0) {
                    uVar10 = *(ulonglong *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) +
                              0xc0);
                  }
                  uVar17 = 0;
                  FUN_140157fd0(param_1);
                  *(undefined1 *)(puVar8 + 10) = 0;
                  iVar6 = *(int *)(puVar8 + 1);
                  if (0 < iVar6) {
                    if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                      puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                      iVar7 = iVar5;
                      do {
                        *puVar13 = 0xffffffff;
                        puVar13 = puVar13 + 8;
                        iVar6 = *(int *)(puVar8 + 1);
                        iVar7 = iVar7 + 1;
                      } while (iVar7 < iVar6);
                    }
                    iVar7 = *(int *)(puVar8 + 6);
                    if ((iVar7 == 3) && (DAT_14079038c != '\0')) {
                      uVar10 = (ulonglong)(*(char *)((longlong)puVar8 + 0x25) != '\0');
                      iVar7 = 0;
                      uVar18 = *(undefined8 *)*puVar8;
                      uVar17 = (ulonglong)(*(char *)((longlong)puVar8 + 0x24) != '\0');
                    }
                    else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                      uVar18 = *(undefined8 *)*puVar8;
                      if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                        uVar10 = 0;
                        uVar17 = 0;
                      }
                      else {
                        uVar10 = 1;
                        uVar17 = 3;
                      }
                    }
                    else {
                      uVar10 = 0;
                      uVar17 = 1;
                      uVar18 = *(undefined8 *)*puVar8;
                    }
                    FUN_140004448(&DAT_140784700,iVar7,iVar6,uVar18,uVar17,uVar10);
                  }
                  *(undefined1 *)(puVar8 + 10) = 1;
                  *(undefined4 *)(puVar8 + 1) = 0;
                  *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
                  *(undefined4 *)(puVar8 + 5) = 0;
                  *(undefined4 *)(puVar8 + 6) = 3;
                  *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
                  *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
                  *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
                  *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
                  *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
                  *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
                  *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
                  *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f00;
                  uVar10 = (**(code **)(*param_2 + 0xb8))
                                     (param_2,1,param_3,*(code **)(*param_2 + 0xb8),uVar17,uVar10);
                  if (uVar10 == 0) {
                    uVar10 = *(ulonglong *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) +
                              0xc0);
                  }
                  uVar17 = 0;
                  FUN_140158760(param_1);
                  *(undefined1 *)(puVar8 + 10) = 0;
                  iVar6 = *(int *)(puVar8 + 1);
                  if (0 < iVar6) {
                    if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                      puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                      iVar7 = iVar5;
                      do {
                        *puVar13 = 0xffffffff;
                        puVar13 = puVar13 + 8;
                        iVar6 = *(int *)(puVar8 + 1);
                        iVar7 = iVar7 + 1;
                      } while (iVar7 < iVar6);
                    }
                    iVar7 = *(int *)(puVar8 + 6);
                    if ((iVar7 == 3) && (DAT_14079038c != '\0')) {
                      uVar10 = (ulonglong)(*(char *)((longlong)puVar8 + 0x25) != '\0');
                      iVar7 = 0;
                      uVar18 = *(undefined8 *)*puVar8;
                      uVar17 = (ulonglong)(*(char *)((longlong)puVar8 + 0x24) != '\0');
                    }
                    else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                      uVar18 = *(undefined8 *)*puVar8;
                      if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                        uVar10 = 0;
                        uVar17 = 0;
                      }
                      else {
                        uVar10 = 1;
                        uVar17 = 3;
                      }
                    }
                    else {
                      uVar10 = 0;
                      uVar17 = 1;
                      uVar18 = *(undefined8 *)*puVar8;
                    }
                    FUN_140004448(&DAT_140784700,iVar7,iVar6,uVar18,uVar17,uVar10);
                  }
                  *(undefined1 *)(puVar8 + 10) = 1;
                  *(undefined4 *)(puVar8 + 1) = 0;
                  *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
                  *(undefined4 *)(puVar8 + 5) = 0;
                  *(undefined4 *)(puVar8 + 6) = 3;
                  *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
                  *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
                  *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
                  *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
                  *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
                  *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
                  *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
                  *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x810000;
                  uVar10 = (**(code **)(*param_2 + 0xb8))
                                     (param_2,2,param_3,*(code **)(*param_2 + 0xb8),uVar17,uVar10);
                  if (uVar10 == 0) {
                    uVar10 = *(ulonglong *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) +
                              0xc0);
                  }
                  uVar17 = 0;
                  FUN_140158e90(param_1);
                  *(undefined1 *)(puVar8 + 10) = 0;
                  iVar6 = *(int *)(puVar8 + 1);
                  if (0 < iVar6) {
                    if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                      puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                      iVar7 = iVar5;
                      do {
                        *puVar13 = 0xffffffff;
                        puVar13 = puVar13 + 8;
                        iVar6 = *(int *)(puVar8 + 1);
                        iVar7 = iVar7 + 1;
                      } while (iVar7 < iVar6);
                    }
                    iVar7 = *(int *)(puVar8 + 6);
                    if ((iVar7 == 3) && (DAT_14079038c != '\0')) {
                      uVar10 = (ulonglong)(*(char *)((longlong)puVar8 + 0x25) != '\0');
                      iVar7 = 0;
                      uVar18 = *(undefined8 *)*puVar8;
                      uVar17 = (ulonglong)(*(char *)((longlong)puVar8 + 0x24) != '\0');
                    }
                    else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                      uVar18 = *(undefined8 *)*puVar8;
                      if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                        uVar10 = 0;
                        uVar17 = 0;
                      }
                      else {
                        uVar10 = 1;
                        uVar17 = 3;
                      }
                    }
                    else {
                      uVar10 = 0;
                      uVar17 = 1;
                      uVar18 = *(undefined8 *)*puVar8;
                    }
                    FUN_140004448(&DAT_140784700,iVar7,iVar6,uVar18,uVar17,uVar10);
                  }
                  *(undefined1 *)(puVar8 + 10) = 1;
                  *(undefined4 *)(puVar8 + 1) = 0;
                  *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
                  *(undefined4 *)(puVar8 + 5) = 0;
                  *(undefined4 *)(puVar8 + 6) = 3;
                  *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
                  *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
                  *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
                  *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
                  *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
                  *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
                  *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
                  *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f0000;
                  uVar10 = (**(code **)(*param_2 + 0xb8))
                                     (param_2,3,param_3,*(code **)(*param_2 + 0xb8),uVar17,uVar10);
                  if (uVar10 == 0) {
                    uVar10 = *(ulonglong *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) +
                              0xc0);
                  }
                  uVar17 = 0;
                  FUN_1401595c0(param_1);
                  *(undefined1 *)(puVar8 + 10) = 0;
                  iVar6 = *(int *)(puVar8 + 1);
                  if (0 < iVar6) {
                    if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                      puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                      iVar7 = iVar5;
                      do {
                        *puVar13 = 0xffffffff;
                        puVar13 = puVar13 + 8;
                        iVar6 = *(int *)(puVar8 + 1);
                        iVar7 = iVar7 + 1;
                      } while (iVar7 < iVar6);
                    }
                    iVar7 = *(int *)(puVar8 + 6);
                    if ((iVar7 == 3) && (DAT_14079038c != '\0')) {
                      uVar10 = (ulonglong)(*(char *)((longlong)puVar8 + 0x25) != '\0');
                      iVar7 = 0;
                      uVar18 = *(undefined8 *)*puVar8;
                      uVar17 = (ulonglong)(*(char *)((longlong)puVar8 + 0x24) != '\0');
                    }
                    else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                      uVar18 = *(undefined8 *)*puVar8;
                      if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                        uVar10 = 0;
                        uVar17 = 0;
                      }
                      else {
                        uVar10 = 1;
                        uVar17 = 3;
                      }
                    }
                    else {
                      uVar10 = 0;
                      uVar17 = 1;
                      uVar18 = *(undefined8 *)*puVar8;
                    }
                    FUN_140004448(&DAT_140784700,iVar7,iVar6,uVar18,uVar17,uVar10);
                  }
                  *(undefined1 *)(puVar8 + 10) = 1;
                  *(undefined4 *)(puVar8 + 1) = 0;
                  *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
                  *(undefined4 *)(puVar8 + 5) = 0;
                  *(undefined4 *)(puVar8 + 6) = 3;
                  *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
                  *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
                  *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
                  *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
                  *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
                  *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
                  *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
                  *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x81;
                  uVar10 = (**(code **)(*param_2 + 0xb8))
                                     (param_2,4,param_3,*(code **)(*param_2 + 0xb8),uVar17,uVar10);
                  if (uVar10 == 0) {
                    uVar10 = *(ulonglong *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) +
                              0xc0);
                  }
                  uVar17 = 0;
                  FUN_140159cf0(param_1);
                  *(undefined1 *)(puVar8 + 10) = 0;
                  iVar6 = *(int *)(puVar8 + 1);
                  if (0 < iVar6) {
                    if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                      puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                      iVar7 = iVar5;
                      do {
                        *puVar13 = 0xffffffff;
                        puVar13 = puVar13 + 8;
                        iVar6 = *(int *)(puVar8 + 1);
                        iVar7 = iVar7 + 1;
                      } while (iVar7 < iVar6);
                    }
                    iVar7 = *(int *)(puVar8 + 6);
                    if ((iVar7 == 3) && (DAT_14079038c != '\0')) {
                      uVar10 = (ulonglong)(*(char *)((longlong)puVar8 + 0x25) != '\0');
                      iVar7 = 0;
                      uVar18 = *(undefined8 *)*puVar8;
                      uVar17 = (ulonglong)(*(char *)((longlong)puVar8 + 0x24) != '\0');
                    }
                    else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                      uVar18 = *(undefined8 *)*puVar8;
                      if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                        uVar10 = 0;
                        uVar17 = 0;
                      }
                      else {
                        uVar10 = 1;
                        uVar17 = 3;
                      }
                    }
                    else {
                      uVar10 = 0;
                      uVar17 = 1;
                      uVar18 = *(undefined8 *)*puVar8;
                    }
                    FUN_140004448(&DAT_140784700,iVar7,iVar6,uVar18,uVar17,uVar10);
                  }
                  *(undefined1 *)(puVar8 + 10) = 1;
                  *(undefined4 *)(puVar8 + 1) = 0;
                  *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
                  *(undefined4 *)(puVar8 + 5) = 0;
                  *(undefined4 *)(puVar8 + 6) = 3;
                  *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
                  *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
                  *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
                  *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
                  *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
                  *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
                  *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
                  *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f;
                  lVar9 = (**(code **)(*param_2 + 0xb8))
                                    (param_2,5,param_3,*(code **)(*param_2 + 0xb8),uVar17,uVar10);
                  if (lVar9 == 0) {
                    lVar9 = *(longlong *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) + 0xc0
                             );
                  }
                  uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
                  uVar20 = 0;
                  FUN_14015a420(param_1);
                  *(undefined1 *)(puVar8 + 10) = 0;
                  iVar6 = *(int *)(puVar8 + 1);
                  if (0 < iVar6) {
                    if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                      puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                      iVar7 = iVar5;
                      do {
                        *puVar13 = 0xffffffff;
                        puVar13 = puVar13 + 8;
                        iVar6 = *(int *)(puVar8 + 1);
                        iVar7 = iVar7 + 1;
                      } while (iVar7 < iVar6);
                    }
                    iVar7 = *(int *)(puVar8 + 6);
                    if ((iVar7 == 3) && (DAT_14079038c != '\0')) {
                      lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
                      iVar7 = 0;
                      uVar18 = *(undefined8 *)*puVar8;
                      lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
                    }
                    else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                      uVar18 = *(undefined8 *)*puVar8;
                      if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                        lVar21 = (ulonglong)uVar4 << 0x20;
                        lVar9 = (ulonglong)uVar20 << 0x20;
                      }
                      else {
                        lVar21 = CONCAT44(uVar4,1);
                        lVar9 = CONCAT44(uVar20,3);
                      }
                    }
                    else {
                      lVar21 = (ulonglong)uVar4 << 0x20;
                      lVar9 = CONCAT44(uVar20,1);
                      uVar18 = *(undefined8 *)*puVar8;
                    }
                    FUN_140004448(&DAT_140784700,iVar7,iVar6,uVar18,lVar9,lVar21);
                  }
                  *(undefined4 *)(puVar8 + 1) = 0;
                  *(undefined4 *)(puVar8 + 4) = 0;
                  *(undefined4 *)(puVar8 + 5) = 0;
                  FUN_140004500(&DAT_140784700);
                  iVar15 = iVar15 + 1;
                } while (iVar15 < 3);
                if (*(char *)(param_1 + 0x2c) == '\0') {
                  *(undefined4 *)(param_1 + 0x14) = 0;
                  *(undefined8 *)(param_1 + 0x18) = 0x3f800000;
                  *(undefined8 *)(param_1 + 0x20) = 0x3f800000;
                  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
                  *(undefined1 *)(param_1 + 0x2d) = 0;
                  *(undefined8 *)(param_1 + 8) = 0;
                }
                else {
                  *(undefined8 *)(param_1 + 8) = 0;
                }
                goto LAB_14015ffa5;
              }
              if (uVar4 != 0x26) goto LAB_14015ffa5;
              FUN_140004500(&DAT_140784700);
              FUN_140156730(param_1,param_2,0,0,in_stack_fffffffffffffee8 & 0xffffffff00000000,
                            in_stack_fffffffffffffef0 & 0xffffffff00000000,1);
            }
            goto LAB_14015ff8b;
          }
          iVar5 = 0;
          iVar15 = iVar5;
          do {
            if (iVar15 == 0) {
              if (*(char *)(param_1 + 0x2c) == '\0') {
                *(undefined4 *)(param_1 + 0x14) = 0x3ec00000;
                *(undefined8 *)(param_1 + 0x18) = 0x3f200000;
                *(undefined8 *)(param_1 + 0x20) = 0x3f800000;
                *(undefined4 *)(param_1 + 0x28) = 0x3e800000;
                *(undefined1 *)(param_1 + 0x2d) = 1;
              }
            }
            else if (iVar15 == 1) {
              if (*(char *)(param_1 + 0x2c) == '\0') {
                *(undefined4 *)(param_1 + 0x14) = 0x3ec00000;
                *(undefined8 *)(param_1 + 0x18) = 0x3f200000;
                *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
                *(undefined4 *)(param_1 + 0x24) = 0x3f400000;
                *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
                *(undefined1 *)(param_1 + 0x2d) = 1;
              }
            }
            else if ((iVar15 == 2) || (iVar15 == 3)) {
              FUN_140138140(param_1);
            }
            FUN_140004500(&DAT_140784700);
            *(undefined1 *)(puVar8 + 10) = 1;
            *(undefined4 *)(puVar8 + 1) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
            *(undefined4 *)(puVar8 + 5) = 0;
            *(undefined4 *)(puVar8 + 6) = 3;
            *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
            *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
            *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x8100;
            lVar9 = (**(code **)(*param_2 + 0xb0))(param_2,0);
            if (lVar9 == 0) {
              lVar9 = *(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158)
                       + 0xc0);
            }
            uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
            uVar20 = 0;
            FUN_140157fd0(param_1);
            *(undefined1 *)(puVar8 + 10) = 0;
            iVar6 = *(int *)(puVar8 + 1);
            if (0 < iVar6) {
              if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                iVar7 = iVar5;
                do {
                  *puVar13 = 0xffffffff;
                  puVar13 = puVar13 + 8;
                  iVar6 = *(int *)(puVar8 + 1);
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar6);
              }
              iVar7 = *(int *)(puVar8 + 6);
              if ((iVar7 == 3) && (DAT_14079038c != '\0')) {
                lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
                iVar7 = 0;
                uVar18 = *(undefined8 *)*puVar8;
                lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
              }
              else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                uVar18 = *(undefined8 *)*puVar8;
                if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                  lVar21 = (ulonglong)uVar4 << 0x20;
                  lVar9 = (ulonglong)uVar20 << 0x20;
                }
                else {
                  lVar21 = CONCAT44(uVar4,1);
                  lVar9 = CONCAT44(uVar20,3);
                }
              }
              else {
                lVar21 = (ulonglong)uVar4 << 0x20;
                lVar9 = CONCAT44(uVar20,1);
                uVar18 = *(undefined8 *)*puVar8;
              }
              FUN_140004448(&DAT_140784700,iVar7,iVar6,uVar18,lVar9,lVar21);
            }
            *(undefined1 *)(puVar8 + 10) = 1;
            *(undefined4 *)(puVar8 + 1) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
            *(undefined4 *)(puVar8 + 5) = 0;
            *(undefined4 *)(puVar8 + 6) = 3;
            *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
            *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
            *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f00;
            lVar9 = (**(code **)(*param_2 + 0xb0))(param_2,1);
            if (lVar9 == 0) {
              lVar9 = *(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158)
                       + 0xc0);
            }
            uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
            uVar20 = 0;
            FUN_140158760(param_1);
            *(undefined1 *)(puVar8 + 10) = 0;
            iVar6 = *(int *)(puVar8 + 1);
            if (0 < iVar6) {
              if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                iVar7 = iVar5;
                do {
                  *puVar13 = 0xffffffff;
                  puVar13 = puVar13 + 8;
                  iVar6 = *(int *)(puVar8 + 1);
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar6);
              }
              iVar7 = *(int *)(puVar8 + 6);
              if ((iVar7 == 3) && (DAT_14079038c != '\0')) {
                lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
                iVar7 = 0;
                uVar18 = *(undefined8 *)*puVar8;
                lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
              }
              else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                uVar18 = *(undefined8 *)*puVar8;
                if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                  lVar21 = (ulonglong)uVar4 << 0x20;
                  lVar9 = (ulonglong)uVar20 << 0x20;
                }
                else {
                  lVar21 = CONCAT44(uVar4,1);
                  lVar9 = CONCAT44(uVar20,3);
                }
              }
              else {
                lVar21 = (ulonglong)uVar4 << 0x20;
                lVar9 = CONCAT44(uVar20,1);
                uVar18 = *(undefined8 *)*puVar8;
              }
              FUN_140004448(&DAT_140784700,iVar7,iVar6,uVar18,lVar9,lVar21);
            }
            *(undefined1 *)(puVar8 + 10) = 1;
            *(undefined4 *)(puVar8 + 1) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
            *(undefined4 *)(puVar8 + 5) = 0;
            *(undefined4 *)(puVar8 + 6) = 3;
            *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
            *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
            *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x810000;
            lVar9 = (**(code **)(*param_2 + 0xb0))(param_2,2);
            if (lVar9 == 0) {
              lVar9 = *(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158)
                       + 0xc0);
            }
            uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
            uVar20 = 0;
            FUN_140158e90(param_1);
            *(undefined1 *)(puVar8 + 10) = 0;
            iVar6 = *(int *)(puVar8 + 1);
            if (0 < iVar6) {
              if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                iVar7 = iVar5;
                do {
                  *puVar13 = 0xffffffff;
                  puVar13 = puVar13 + 8;
                  iVar6 = *(int *)(puVar8 + 1);
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar6);
              }
              iVar7 = *(int *)(puVar8 + 6);
              if ((iVar7 == 3) && (DAT_14079038c != '\0')) {
                lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
                iVar7 = 0;
                uVar18 = *(undefined8 *)*puVar8;
                lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
              }
              else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                uVar18 = *(undefined8 *)*puVar8;
                if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                  lVar21 = (ulonglong)uVar4 << 0x20;
                  lVar9 = (ulonglong)uVar20 << 0x20;
                }
                else {
                  lVar21 = CONCAT44(uVar4,1);
                  lVar9 = CONCAT44(uVar20,3);
                }
              }
              else {
                lVar21 = (ulonglong)uVar4 << 0x20;
                lVar9 = CONCAT44(uVar20,1);
                uVar18 = *(undefined8 *)*puVar8;
              }
              FUN_140004448(&DAT_140784700,iVar7,iVar6,uVar18,lVar9,lVar21);
            }
            *(undefined1 *)(puVar8 + 10) = 1;
            *(undefined4 *)(puVar8 + 1) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
            *(undefined4 *)(puVar8 + 5) = 0;
            *(undefined4 *)(puVar8 + 6) = 3;
            *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
            *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
            *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f0000;
            lVar9 = (**(code **)(*param_2 + 0xb0))(param_2,3);
            if (lVar9 == 0) {
              lVar9 = *(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158)
                       + 0xc0);
            }
            uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
            uVar20 = 0;
            FUN_1401595c0(param_1);
            *(undefined1 *)(puVar8 + 10) = 0;
            iVar6 = *(int *)(puVar8 + 1);
            if (0 < iVar6) {
              if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                iVar7 = iVar5;
                do {
                  *puVar13 = 0xffffffff;
                  puVar13 = puVar13 + 8;
                  iVar6 = *(int *)(puVar8 + 1);
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar6);
              }
              iVar7 = *(int *)(puVar8 + 6);
              if ((iVar7 == 3) && (DAT_14079038c != '\0')) {
                lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
                iVar7 = 0;
                uVar18 = *(undefined8 *)*puVar8;
                lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
              }
              else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                uVar18 = *(undefined8 *)*puVar8;
                if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                  lVar21 = (ulonglong)uVar4 << 0x20;
                  lVar9 = (ulonglong)uVar20 << 0x20;
                }
                else {
                  lVar21 = CONCAT44(uVar4,1);
                  lVar9 = CONCAT44(uVar20,3);
                }
              }
              else {
                lVar21 = (ulonglong)uVar4 << 0x20;
                lVar9 = CONCAT44(uVar20,1);
                uVar18 = *(undefined8 *)*puVar8;
              }
              FUN_140004448(&DAT_140784700,iVar7,iVar6,uVar18,lVar9,lVar21);
            }
            *(undefined1 *)(puVar8 + 10) = 1;
            *(undefined4 *)(puVar8 + 1) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
            *(undefined4 *)(puVar8 + 5) = 0;
            *(undefined4 *)(puVar8 + 6) = 3;
            *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
            *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
            *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x81;
            lVar9 = (**(code **)(*param_2 + 0xb0))(param_2,4);
            if (lVar9 == 0) {
              lVar9 = *(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158)
                       + 0xc0);
            }
            uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
            uVar20 = 0;
            FUN_140159cf0(param_1);
            *(undefined1 *)(puVar8 + 10) = 0;
            iVar6 = *(int *)(puVar8 + 1);
            if (0 < iVar6) {
              if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                iVar7 = iVar5;
                do {
                  *puVar13 = 0xffffffff;
                  puVar13 = puVar13 + 8;
                  iVar6 = *(int *)(puVar8 + 1);
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar6);
              }
              iVar7 = *(int *)(puVar8 + 6);
              if ((iVar7 == 3) && (DAT_14079038c != '\0')) {
                lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
                iVar7 = 0;
                uVar18 = *(undefined8 *)*puVar8;
                lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
              }
              else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                uVar18 = *(undefined8 *)*puVar8;
                if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                  lVar21 = (ulonglong)uVar4 << 0x20;
                  lVar9 = (ulonglong)uVar20 << 0x20;
                }
                else {
                  lVar21 = CONCAT44(uVar4,1);
                  lVar9 = CONCAT44(uVar20,3);
                }
              }
              else {
                lVar21 = (ulonglong)uVar4 << 0x20;
                lVar9 = CONCAT44(uVar20,1);
                uVar18 = *(undefined8 *)*puVar8;
              }
              FUN_140004448(&DAT_140784700,iVar7,iVar6,uVar18,lVar9,lVar21);
            }
            *(undefined1 *)(puVar8 + 10) = 1;
            *(undefined4 *)(puVar8 + 1) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
            *(undefined4 *)(puVar8 + 5) = 0;
            *(undefined4 *)(puVar8 + 6) = 3;
            *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
            *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
            *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
            *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
            *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f;
            lVar9 = (**(code **)(*param_2 + 0xb0))(param_2);
            if (lVar9 == 0) {
              lVar9 = *(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158)
                       + 0xc0);
            }
            uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
            uVar20 = 0;
            FUN_14015a420(param_1);
            *(undefined1 *)(puVar8 + 10) = 0;
            iVar6 = *(int *)(puVar8 + 1);
            if (0 < iVar6) {
              if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
                puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
                iVar7 = iVar5;
                do {
                  *puVar13 = 0xffffffff;
                  puVar13 = puVar13 + 8;
                  iVar6 = *(int *)(puVar8 + 1);
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar6);
              }
              iVar7 = *(int *)(puVar8 + 6);
              if ((iVar7 == 3) && (DAT_14079038c != '\0')) {
                lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
                iVar7 = 0;
                uVar18 = *(undefined8 *)*puVar8;
                lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
              }
              else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
                uVar18 = *(undefined8 *)*puVar8;
                if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
                  lVar21 = (ulonglong)uVar4 << 0x20;
                  lVar9 = (ulonglong)uVar20 << 0x20;
                }
                else {
                  lVar21 = CONCAT44(uVar4,1);
                  lVar9 = CONCAT44(uVar20,3);
                }
              }
              else {
                lVar21 = (ulonglong)uVar4 << 0x20;
                lVar9 = CONCAT44(uVar20,1);
                uVar18 = *(undefined8 *)*puVar8;
              }
              FUN_140004448(&DAT_140784700,iVar7,iVar6,uVar18,lVar9,lVar21);
            }
            *(undefined4 *)(puVar8 + 1) = 0;
            *(undefined4 *)(puVar8 + 4) = 0;
            *(undefined4 *)(puVar8 + 5) = 0;
            FUN_140004500(&DAT_140784700);
            iVar15 = iVar15 + 1;
          } while (iVar15 < 4);
        }
        if (*(char *)(param_1 + 0x2c) == '\0') {
          *(undefined4 *)(param_1 + 0x14) = 0;
          *(undefined8 *)(param_1 + 0x18) = 0x3f800000;
          *(undefined8 *)(param_1 + 0x20) = 0x3f800000;
          *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
          *(undefined1 *)(param_1 + 0x2d) = 0;
        }
        goto LAB_14015ffa5;
      }
      *(undefined1 *)(puVar8 + 10) = 1;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
      *(undefined4 *)(puVar8 + 5) = 0;
      *(undefined4 *)(puVar8 + 6) = 3;
      *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
      *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
      *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
      *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
      *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
      *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
      *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x8100;
      FUN_14014b3c0(param_1,param_2);
      *(undefined1 *)(puVar8 + 10) = 0;
      iVar15 = *(int *)(puVar8 + 1);
      if (iVar15 < 1) goto LAB_14015bde6;
      if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
        iVar5 = 0;
        puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
        do {
          *puVar13 = 0xffffffff;
          puVar13 = puVar13 + 8;
          iVar15 = *(int *)(puVar8 + 1);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar15);
      }
      iVar5 = *(int *)(puVar8 + 6);
      if ((iVar5 == 3) && (DAT_14079038c != '\0')) goto LAB_14015bc26;
      if (*(char *)((longlong)puVar8 + 0x24) != '\0') goto LAB_14015bc53;
LAB_14015bdb4:
      uVar18 = *(undefined8 *)*puVar8;
      if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
        bVar16 = false;
        lVar9 = (ulonglong)uVar20 << 0x20;
      }
      else {
        bVar16 = true;
        lVar9 = CONCAT44(uVar20,3);
      }
      goto LAB_14015bdda;
    }
    (**(code **)(*param_2 + 0x280))(param_2);
    FUN_140004500(&DAT_140784700);
    *(undefined1 *)(puVar8 + 10) = 1;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
    *(undefined4 *)(puVar8 + 5) = 0;
    *(undefined4 *)(puVar8 + 6) = 3;
    *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
    *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
    *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x8100;
    lVar9 = (**(code **)(*param_2 + 0xb0))(param_2,0);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) + 0xc0);
    }
    uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
    uVar20 = 0;
    FUN_140157fd0(param_1);
    *(undefined1 *)(puVar8 + 10) = 0;
    iVar15 = *(int *)(puVar8 + 1);
    if (0 < iVar15) {
      if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
        iVar5 = 0;
        puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
        do {
          *puVar13 = 0xffffffff;
          puVar13 = puVar13 + 8;
          iVar15 = *(int *)(puVar8 + 1);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar15);
      }
      iVar5 = *(int *)(puVar8 + 6);
      if ((iVar5 == 3) && (DAT_14079038c != '\0')) {
        lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
        iVar5 = 0;
        uVar18 = *(undefined8 *)*puVar8;
        lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
      }
      else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
        uVar18 = *(undefined8 *)*puVar8;
        if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
          lVar21 = (ulonglong)uVar4 << 0x20;
          lVar9 = (ulonglong)uVar20 << 0x20;
        }
        else {
          lVar21 = CONCAT44(uVar4,1);
          lVar9 = CONCAT44(uVar20,3);
        }
      }
      else {
        lVar21 = (ulonglong)uVar4 << 0x20;
        lVar9 = CONCAT44(uVar20,1);
        uVar18 = *(undefined8 *)*puVar8;
      }
      FUN_140004448(&DAT_140784700,iVar5,iVar15,uVar18,lVar9,lVar21);
    }
    *(undefined1 *)(puVar8 + 10) = 1;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
    *(undefined4 *)(puVar8 + 5) = 0;
    *(undefined4 *)(puVar8 + 6) = 3;
    *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
    *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
    *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f00;
    lVar9 = (**(code **)(*param_2 + 0xb0))(param_2,1);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) + 0xc0);
    }
    uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
    uVar20 = 0;
    FUN_140158760(param_1);
    *(undefined1 *)(puVar8 + 10) = 0;
    iVar15 = *(int *)(puVar8 + 1);
    if (0 < iVar15) {
      if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
        iVar5 = 0;
        puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
        do {
          *puVar13 = 0xffffffff;
          puVar13 = puVar13 + 8;
          iVar15 = *(int *)(puVar8 + 1);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar15);
      }
      iVar5 = *(int *)(puVar8 + 6);
      if ((iVar5 == 3) && (DAT_14079038c != '\0')) {
        lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
        iVar5 = 0;
        uVar18 = *(undefined8 *)*puVar8;
        lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
      }
      else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
        uVar18 = *(undefined8 *)*puVar8;
        if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
          lVar21 = (ulonglong)uVar4 << 0x20;
          lVar9 = (ulonglong)uVar20 << 0x20;
        }
        else {
          lVar21 = CONCAT44(uVar4,1);
          lVar9 = CONCAT44(uVar20,3);
        }
      }
      else {
        lVar21 = (ulonglong)uVar4 << 0x20;
        lVar9 = CONCAT44(uVar20,1);
        uVar18 = *(undefined8 *)*puVar8;
      }
      FUN_140004448(&DAT_140784700,iVar5,iVar15,uVar18,lVar9,lVar21);
    }
    *(undefined1 *)(puVar8 + 10) = 1;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
    *(undefined4 *)(puVar8 + 5) = 0;
    *(undefined4 *)(puVar8 + 6) = 3;
    *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
    *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
    *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x810000;
    pcVar2 = *(code **)(*param_2 + 0xb0);
    *(float *)((longlong)puVar8 + 0x34) = *(float *)((longlong)puVar8 + 0x34) + 0.0;
    *(float *)(puVar8 + 7) = *(float *)(puVar8 + 7) + 0.0;
    *(float *)((longlong)puVar8 + 0x3c) = *(float *)((longlong)puVar8 + 0x3c) + 0.0625;
    lVar9 = (*pcVar2)(param_2,2);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) + 0xc0);
    }
    uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
    uVar20 = 0;
    FUN_140158e90(param_1);
    *(float *)((longlong)puVar8 + 0x34) = *(float *)((longlong)puVar8 + 0x34) + 0.0;
    *(float *)(puVar8 + 7) = *(float *)(puVar8 + 7) + 0.0;
    *(float *)((longlong)puVar8 + 0x3c) = *(float *)((longlong)puVar8 + 0x3c) - 0.0625;
    *(undefined1 *)(puVar8 + 10) = 0;
    iVar15 = *(int *)(puVar8 + 1);
    if (0 < iVar15) {
      if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
        iVar5 = 0;
        puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
        do {
          *puVar13 = 0xffffffff;
          puVar13 = puVar13 + 8;
          iVar15 = *(int *)(puVar8 + 1);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar15);
      }
      iVar5 = *(int *)(puVar8 + 6);
      if ((iVar5 == 3) && (DAT_14079038c != '\0')) {
        lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
        iVar5 = 0;
        uVar18 = *(undefined8 *)*puVar8;
        lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
      }
      else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
        uVar18 = *(undefined8 *)*puVar8;
        if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
          lVar21 = (ulonglong)uVar4 << 0x20;
          lVar9 = (ulonglong)uVar20 << 0x20;
        }
        else {
          lVar21 = CONCAT44(uVar4,1);
          lVar9 = CONCAT44(uVar20,3);
        }
      }
      else {
        lVar21 = (ulonglong)uVar4 << 0x20;
        lVar9 = CONCAT44(uVar20,1);
        uVar18 = *(undefined8 *)*puVar8;
      }
      FUN_140004448(&DAT_140784700,iVar5,iVar15,uVar18,lVar9,lVar21);
    }
    *(undefined1 *)(puVar8 + 10) = 1;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
    *(undefined4 *)(puVar8 + 5) = 0;
    *(undefined4 *)(puVar8 + 6) = 3;
    *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
    *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
    *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f0000;
    pcVar2 = *(code **)(*param_2 + 0xb0);
    *(float *)((longlong)puVar8 + 0x34) = *(float *)((longlong)puVar8 + 0x34) + 0.0;
    *(float *)(puVar8 + 7) = *(float *)(puVar8 + 7) + 0.0;
    *(float *)((longlong)puVar8 + 0x3c) = *(float *)((longlong)puVar8 + 0x3c) - 0.0625;
    lVar9 = (*pcVar2)(param_2,3);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) + 0xc0);
    }
    uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
    uVar20 = 0;
    FUN_1401595c0(param_1);
    *(float *)((longlong)puVar8 + 0x34) = *(float *)((longlong)puVar8 + 0x34) + 0.0;
    *(float *)(puVar8 + 7) = *(float *)(puVar8 + 7) + 0.0;
    *(float *)((longlong)puVar8 + 0x3c) = *(float *)((longlong)puVar8 + 0x3c) + 0.0625;
    *(undefined1 *)(puVar8 + 10) = 0;
    iVar15 = *(int *)(puVar8 + 1);
    if (0 < iVar15) {
      if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
        iVar5 = 0;
        puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
        do {
          *puVar13 = 0xffffffff;
          puVar13 = puVar13 + 8;
          iVar15 = *(int *)(puVar8 + 1);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar15);
      }
      iVar5 = *(int *)(puVar8 + 6);
      if ((iVar5 == 3) && (DAT_14079038c != '\0')) {
        lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
        iVar5 = 0;
        uVar18 = *(undefined8 *)*puVar8;
        lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
      }
      else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
        uVar18 = *(undefined8 *)*puVar8;
        if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
          lVar21 = (ulonglong)uVar4 << 0x20;
          lVar9 = (ulonglong)uVar20 << 0x20;
        }
        else {
          lVar21 = CONCAT44(uVar4,1);
          lVar9 = CONCAT44(uVar20,3);
        }
      }
      else {
        lVar21 = (ulonglong)uVar4 << 0x20;
        lVar9 = CONCAT44(uVar20,1);
        uVar18 = *(undefined8 *)*puVar8;
      }
      FUN_140004448(&DAT_140784700,iVar5,iVar15,uVar18,lVar9,lVar21);
    }
    *(undefined1 *)(puVar8 + 10) = 1;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
    *(undefined4 *)(puVar8 + 5) = 0;
    *(undefined4 *)(puVar8 + 6) = 3;
    *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
    *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
    *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x81;
    pcVar2 = *(code **)(*param_2 + 0xb0);
    *(float *)((longlong)puVar8 + 0x34) = *(float *)((longlong)puVar8 + 0x34) + 0.0625;
    *(float *)(puVar8 + 7) = *(float *)(puVar8 + 7) + 0.0;
    *(float *)((longlong)puVar8 + 0x3c) = *(float *)((longlong)puVar8 + 0x3c) + 0.0;
    lVar9 = (*pcVar2)(param_2,4);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) + 0xc0);
    }
    uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
    uVar20 = 0;
    FUN_140159cf0(param_1);
    *(float *)((longlong)puVar8 + 0x34) = *(float *)((longlong)puVar8 + 0x34) - 0.0625;
    *(float *)(puVar8 + 7) = *(float *)(puVar8 + 7) + 0.0;
    *(float *)((longlong)puVar8 + 0x3c) = *(float *)((longlong)puVar8 + 0x3c) + 0.0;
    *(undefined1 *)(puVar8 + 10) = 0;
    iVar15 = *(int *)(puVar8 + 1);
    if (0 < iVar15) {
      if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
        iVar5 = 0;
        puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
        do {
          *puVar13 = 0xffffffff;
          puVar13 = puVar13 + 8;
          iVar15 = *(int *)(puVar8 + 1);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar15);
      }
      iVar5 = *(int *)(puVar8 + 6);
      if ((iVar5 == 3) && (DAT_14079038c != '\0')) {
        lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
        iVar5 = 0;
        uVar18 = *(undefined8 *)*puVar8;
        lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
      }
      else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
        uVar18 = *(undefined8 *)*puVar8;
        if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
          lVar21 = (ulonglong)uVar4 << 0x20;
          lVar9 = (ulonglong)uVar20 << 0x20;
        }
        else {
          lVar21 = CONCAT44(uVar4,1);
          lVar9 = CONCAT44(uVar20,3);
        }
      }
      else {
        lVar21 = (ulonglong)uVar4 << 0x20;
        lVar9 = CONCAT44(uVar20,1);
        uVar18 = *(undefined8 *)*puVar8;
      }
      FUN_140004448(&DAT_140784700,iVar5,iVar15,uVar18,lVar9,lVar21);
    }
    *(undefined1 *)(puVar8 + 10) = 1;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x1000000;
    *(undefined4 *)(puVar8 + 5) = 0;
    *(undefined4 *)(puVar8 + 6) = 3;
    *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
    *(undefined4 *)((longlong)puVar8 + 0xdc) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1c) = 0x7f7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xe4) = 0x7f7fffff;
    *(undefined4 *)(puVar8 + 0x1d) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0xec) = 0xff7fffff;
    *(undefined4 *)(puVar8 + 0x1e) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = 0x7f;
    pcVar2 = *(code **)(*param_2 + 0xb0);
    *(float *)((longlong)puVar8 + 0x34) = *(float *)((longlong)puVar8 + 0x34) - 0.0625;
    *(float *)(puVar8 + 7) = *(float *)(puVar8 + 7) + 0.0;
    *(float *)((longlong)puVar8 + 0x3c) = *(float *)((longlong)puVar8 + 0x3c) + 0.0;
    lVar9 = (*pcVar2)(param_2,5);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1a8) + 0x158) + 0xc0);
    }
    uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
    uVar20 = 0;
    FUN_14015a420(param_1);
    *(float *)((longlong)puVar8 + 0x34) = *(float *)((longlong)puVar8 + 0x34) + 0.0625;
    *(float *)(puVar8 + 7) = *(float *)(puVar8 + 7) + 0.0;
    *(float *)((longlong)puVar8 + 0x3c) = *(float *)((longlong)puVar8 + 0x3c) + 0.0;
    *(undefined1 *)(puVar8 + 10) = 0;
    iVar15 = *(int *)(puVar8 + 1);
    if (0 < iVar15) {
      if (*(char *)((longlong)puVar8 + 0x1c) == '\0') {
        iVar5 = 0;
        puVar13 = (undefined4 *)(*(longlong *)*puVar8 + 0x14);
        do {
          *puVar13 = 0xffffffff;
          puVar13 = puVar13 + 8;
          iVar15 = *(int *)(puVar8 + 1);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar15);
      }
      iVar5 = *(int *)(puVar8 + 6);
      if ((iVar5 == 3) && (DAT_14079038c != '\0')) {
        lVar21 = CONCAT44(uVar4,(uint)(*(char *)((longlong)puVar8 + 0x25) != '\0'));
        iVar5 = 0;
        uVar18 = *(undefined8 *)*puVar8;
        lVar9 = CONCAT44(uVar20,(uint)(*(char *)((longlong)puVar8 + 0x24) != '\0'));
      }
      else if (*(char *)((longlong)puVar8 + 0x24) == '\0') {
        uVar18 = *(undefined8 *)*puVar8;
        if (*(char *)((longlong)puVar8 + 0x25) == '\0') {
          lVar21 = (ulonglong)uVar4 << 0x20;
          lVar9 = (ulonglong)uVar20 << 0x20;
        }
        else {
          lVar21 = CONCAT44(uVar4,1);
          lVar9 = CONCAT44(uVar20,3);
        }
      }
      else {
        lVar21 = (ulonglong)uVar4 << 0x20;
        lVar9 = CONCAT44(uVar20,1);
        uVar18 = *(undefined8 *)*puVar8;
      }
      FUN_140004448(&DAT_140784700,iVar5,iVar15,uVar18,lVar9,lVar21);
    }
    *(undefined4 *)(puVar8 + 1) = 0;
    *(undefined4 *)(puVar8 + 4) = 0;
    *(undefined4 *)(puVar8 + 5) = 0;
  }
LAB_14015ff8b:
  FUN_140004500(&DAT_140784700);
LAB_14015ffa5:
  *(undefined1 *)((longlong)puVar8 + 0x51) = 1;
  return;
}



// ===== FUN_140166dc0 @ 0x140166dc0 [render] =====

undefined8 FUN_140166dc0(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = 0xc800000;
  if ((param_2 & 0xc800000) != 0xc800000) {
    uVar6 = (ulonglong)param_2;
  }
  uVar5 = (uint)uVar6;
  uVar2 = ((uint)(uVar6 >> 8) ^ uVar5) >> 0xc ^ uVar5;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar3 = ((ulonglong)((uVar2 >> 3 ^ uVar2) >> 4) ^ (longlong)(int)uVar2) &
          *(ulonglong *)(param_1 + 0x30);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar3 * 0x10);
  if (lVar4 == lVar1) {
LAB_140166e32:
    lVar4 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar4 + 0x10);
    while (uVar5 != uVar2) {
      if (lVar4 == *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar3 * 0x10)) goto LAB_140166e32;
      lVar4 = *(longlong *)(lVar4 + 8);
      uVar2 = *(uint *)(lVar4 + 0x10);
    }
  }
  if (lVar4 == 0) {
    lVar4 = lVar1;
  }
  if (lVar4 == lVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"Couldn\'t find renderer for entity of type %d\n",uVar6);
  }
  return *(undefined8 *)(lVar4 + 0x18);
}



// ===== FUN_140170590 @ 0x140170590 [render] =====

void FUN_140170590(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5,undefined8 param_6,float param_7,float param_8,
                  undefined4 param_9)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong local_b8;
  longlong lStack_b0;
  
  uVar9 = *(uint *)(*param_4 + 0x20);
  uVar14 = (ulonglong)uVar9;
  uVar3 = *(undefined4 *)(*param_4 + 0x30);
  lVar10 = FUN_14035a120();
  iVar7 = (**(code **)**(undefined8 **)(DAT_1407bdbd0 + (ulonglong)*(uint *)(*param_4 + 0x20) * 8))
                    ();
  if (iVar7 == 0) {
    uVar11 = (**(code **)(**(longlong **)(DAT_1407b4350 + (longlong)(int)uVar9 * 8) + 0x48))();
    if (((uint)uVar11 < 0x28) && ((0x8d8c612c01U >> (uVar11 & 0x3f) & 1) != 0)) {
      FUN_1401347d0(param_3,&DAT_14076dfc8);
      uVar12 = *(undefined8 *)(DAT_1407b4350 + (longlong)(int)uVar9 * 8);
      FUN_1400044d0(&DAT_140784700);
      FUN_140004500(&DAT_140784700);
      FUN_1400044e8(&DAT_140784700,param_7 * 16.0,param_8 * 16.0);
      FUN_140004500(&DAT_140784700);
      FUN_1400044e8(&DAT_140784700);
      FUN_1400044dc(&DAT_140784700);
      FUN_1400044dc(&DAT_140784700);
      FUN_1400044dc(&DAT_140784700);
      FUN_14015ab40(param_1[3],uVar12,uVar3);
      FUN_1400044c4(&DAT_140784700);
      goto LAB_140170b51;
    }
  }
  cVar6 = (**(code **)(**(longlong **)(DAT_1407bdbd0 + uVar14 * 8) + 0x130))();
  if (cVar6 == '\0') {
    FUN_14005e330(0,"2D gui item render %d\n",lVar10);
    FUN_140004668(&DAT_140784700,0);
    iVar7 = (**(code **)**(undefined8 **)(DAT_1407bdbd0 + (ulonglong)*(uint *)(*param_4 + 0x20) * 8)
            )();
    puVar13 = &DAT_14076dfc8;
    if (iVar7 != 0) {
      puVar13 = &DAT_14076df90;
    }
    FUN_1401347d0(param_3,puVar13);
    if (lVar10 == 0) {
      (**(code **)**(undefined8 **)(DAT_1407bdbd0 + (ulonglong)*(uint *)(*param_4 + 0x20) * 8))();
    }
    plVar5 = *(longlong **)(DAT_1407bdbd0 + uVar14 * 8);
    pcVar4 = *(code **)(*plVar5 + 0xb0);
    if (param_4[1] != 0) {
      LOCK();
      piVar2 = (int *)(param_4[1] + 8);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    local_b8 = *param_4;
    lStack_b0 = param_4[1];
    uVar9 = (*pcVar4)(plVar5,&local_b8,0);
    if (*(char *)((longlong)param_1 + 0x31) != '\0') {
      FUN_140004584(&DAT_140784700,(float)((int)uVar9 >> 0x10 & 0xff) / 255.0,
                    (float)((int)uVar9 >> 8 & 0xff) / 255.0,(float)(uVar9 & 0xff) / 255.0,param_9);
    }
    FUN_140171b60(param_1);
  }
  else {
    FUN_14005e330(0,"Potion gui item render %d\n");
    FUN_140004668(&DAT_140784700,0);
    pcVar4 = *(code **)(*param_1 + 0x90);
    uVar8 = (**(code **)**(undefined8 **)(DAT_1407bdbd0 + (ulonglong)*(uint *)(*param_4 + 0x20) * 8)
            )();
    uVar12 = (*pcVar4)(param_1,uVar8);
    FUN_1401347d0(param_3,uVar12);
    iVar7 = 0;
    do {
      plVar5 = *(longlong **)(DAT_1407bdbd0 + uVar14 * 8);
      (**(code **)(*plVar5 + 0x138))(plVar5,uVar3,iVar7);
      plVar5 = *(longlong **)(DAT_1407bdbd0 + uVar14 * 8);
      pcVar4 = *(code **)(*plVar5 + 0xb0);
      if (param_4[1] != 0) {
        LOCK();
        piVar2 = (int *)(param_4[1] + 8);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      local_b8 = *param_4;
      lStack_b0 = param_4[1];
      uVar9 = (*pcVar4)(plVar5,&local_b8,iVar7);
      if (*(char *)((longlong)param_1 + 0x31) != '\0') {
        FUN_140004584(&DAT_140784700,(float)((int)uVar9 >> 0x10 & 0xff) / 255.0,
                      (float)((int)uVar9 >> 8 & 0xff) / 255.0,(float)(uVar9 & 0xff) / 255.0,param_9)
        ;
      }
      FUN_140171b60(param_1);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
  }
  FUN_140004668(&DAT_140784700,1);
LAB_140170b51:
  FUN_1400045cc(&DAT_140784700,1);
  plVar5 = (longlong *)param_4[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



// ===== FUN_140171b60 @ 0x140171b60 [render] =====

void FUN_140171b60(longlong param_1,float param_2,float param_3,longlong *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  puVar4 = TlsGetValue(DAT_1407bad5c);
  iVar3 = 0;
  *(undefined1 *)(puVar4 + 10) = 1;
  *(undefined4 *)(puVar4 + 1) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 5) = 0;
  *(undefined4 *)(puVar4 + 6) = 3;
  *(undefined4 *)((longlong)puVar4 + 0xdc) = 0x7f7fffff;
  *(undefined4 *)(puVar4 + 0x1c) = 0x7f7fffff;
  *(undefined4 *)((longlong)puVar4 + 0xe4) = 0x7f7fffff;
  *(undefined4 *)(puVar4 + 0x1d) = 0xff7fffff;
  *(undefined4 *)((longlong)puVar4 + 0xec) = 0xff7fffff;
  *(undefined4 *)(puVar4 + 0x1e) = 0xff7fffff;
  *(undefined1 *)((longlong)puVar4 + 0x2c) = 0;
  fVar12 = (float)*(int *)(DAT_140790e60 + 0x18) / (float)*(int *)(DAT_140790e60 + 0x20);
  fVar13 = (float)*(int *)(DAT_140790e60 + 0x1c) / (float)*(int *)(DAT_140790e60 + 0x24);
  fVar9 = (float)FUN_140590160(fVar12 * param_2);
  fVar15 = (fVar9 + 0.5) / fVar12;
  fVar9 = (float)FUN_140591330();
  fVar12 = (fVar9 - 0.5) / fVar12;
  fVar9 = (float)FUN_140590160(fVar13 * param_3);
  fVar14 = (fVar9 + 0.5) / fVar13;
  fVar9 = (float)FUN_140591330();
  fVar13 = (fVar9 - 0.5) / fVar13;
  uVar10 = (**(code **)(*param_4 + 0x40))(param_4,1);
  uVar11 = (**(code **)(*param_4 + 0x20))(param_4,1);
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar11;
  *(undefined4 *)(puVar4 + 2) = uVar10;
  *(undefined1 *)((longlong)puVar4 + 0x1d) = 1;
  FUN_140133c60(puVar4,fVar15,fVar13,uVar1);
  uVar10 = (**(code **)(*param_4 + 0x40))(param_4,1);
  uVar11 = (**(code **)(*param_4 + 0x28))(param_4,1);
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar11;
  *(undefined4 *)(puVar4 + 2) = uVar10;
  *(undefined1 *)((longlong)puVar4 + 0x1d) = 1;
  FUN_140133c60(puVar4,fVar12,fVar13,uVar1);
  uVar10 = (**(code **)(*param_4 + 0x38))(param_4,1);
  uVar11 = (**(code **)(*param_4 + 0x28))(param_4,1);
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar11;
  *(undefined4 *)(puVar4 + 2) = uVar10;
  *(undefined1 *)((longlong)puVar4 + 0x1d) = 1;
  FUN_140133c60(puVar4,fVar12,fVar14,uVar1);
  uVar10 = (**(code **)(*param_4 + 0x38))(param_4,1);
  uVar11 = (**(code **)(*param_4 + 0x20))(param_4,1);
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar11;
  *(undefined4 *)(puVar4 + 2) = uVar10;
  *(undefined1 *)((longlong)puVar4 + 0x1d) = 1;
  FUN_140133c60(puVar4,fVar15,fVar14,uVar1);
  iVar2 = *(int *)(puVar4 + 1);
  *(undefined1 *)(puVar4 + 10) = 0;
  if (0 < iVar2) {
    if (*(char *)((longlong)puVar4 + 0x1c) == '\0') {
      puVar5 = (undefined4 *)(*(longlong *)*puVar4 + 0x14);
      do {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 8;
        iVar2 = *(int *)(puVar4 + 1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    iVar3 = *(int *)(puVar4 + 6);
    if ((iVar3 == 3) && (DAT_14079038c != '\0')) {
      bVar7 = *(char *)((longlong)puVar4 + 0x25) != '\0';
      uVar8 = *(char *)((longlong)puVar4 + 0x24) != '\0';
      iVar3 = 0;
      uVar6 = *(undefined8 *)*puVar4;
    }
    else {
      uVar6 = *(undefined8 *)*puVar4;
      if (*(char *)((longlong)puVar4 + 0x24) == '\0') {
        if (*(char *)((longlong)puVar4 + 0x25) == '\0') {
          bVar7 = false;
          uVar8 = 0;
        }
        else {
          bVar7 = true;
          uVar8 = 3;
        }
      }
      else {
        bVar7 = false;
        uVar8 = 1;
      }
    }
    FUN_140004448(&DAT_140784700,iVar3,iVar2,uVar6,uVar8,bVar7);
  }
  *(undefined4 *)(puVar4 + 1) = 0;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(undefined4 *)(puVar4 + 5) = 0;
  return;
}



// ===== FUN_140180c10 @ 0x140180c10 [render] =====

undefined8 *
FUN_140180c10(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = PreStitchedTextureMap::vftable;
  *(undefined4 *)(param_1 + 1) = param_2;
  FUN_140055000(param_1 + 2,param_3);
  FUN_140055000(param_1 + 6,param_4);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_140054cf0(param_1 + 10,L".png",4);
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  lVar1 = FUN_140558c80(0x38);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  param_1[0x10] = lVar1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 7;
  param_1[0x16] = 8;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  FUN_14004bae0(param_1 + 0x12,0x10,param_1[0x10]);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x17] = param_5;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  puVar2 = (undefined8 *)FUN_140558c80(0x98);
  FUN_14019d790(puVar2,&DAT_1407bb510,&DAT_1407bb510);
  *puVar2 = SimpleIcon::vftable;
  *(undefined4 *)(puVar2 + 0xf) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x7c) = 0x3f800000;
  *(undefined4 *)((longlong)puVar2 + 0x84) = 0x3f800000;
  param_1[0x18] = puVar2;
  return param_1;
}



// ===== FUN_14019e250 @ 0x14019e250 [render] =====

void FUN_14019e250(undefined4 *param_1,undefined8 *param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  char in_stack_00000058;
  
  if ((undefined8 *)(param_1 + 0xc) != param_2) {
    puVar2 = param_2 + 2;
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_1400549d0(param_1 + 0xc,param_2,*puVar2);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  *(undefined8 *)(param_1 + 5) = 1;
  param_1[10] = 1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  puVar2 = (undefined8 *)FUN_140558c80(0x10);
  *puVar2 = 0;
  *(int *)(puVar2 + 1) = param_4;
  *(int *)((longlong)puVar2 + 0xc) = param_5;
  *(undefined8 **)(param_1 + 0x14) = puVar2;
  param_1[7] = 1;
  *(char *)(param_1 + 0xb) = in_stack_00000058;
  param_1[0x17] = 1;
  if (in_stack_00000058 != '\0') {
    iVar3 = 1;
    iVar4 = 1;
    if (0x10 < param_4) {
      do {
        iVar4 = iVar4 + 1;
      } while (8 << ((byte)iVar4 & 0x1f) < param_4);
    }
    if (0x10 < param_5) {
      do {
        iVar3 = iVar3 + 1;
      } while (8 << ((byte)iVar3 & 0x1f) < param_5);
    }
    if (iVar4 < iVar3) {
      iVar3 = iVar4;
    }
    param_1[0x17] = iVar3;
    if (5 < iVar3) {
      param_1[0x17] = 5;
    }
  }
  if (param_3 == 2) {
    *param_1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_1400046e0(&DAT_140784700);
    *param_1 = uVar1;
    FUN_1400046c8(&DAT_140784700,uVar1);
    FUN_140004728(&DAT_140784700,1,0);
    FUN_140004728(&DAT_140784700,2,0);
    FUN_140004728(&DAT_140784700,3,1);
    FUN_140004728(&DAT_140784700,4,1);
  }
  iVar3 = *DAT_140791570;
  *DAT_140791570 = iVar3 + 1;
  param_1[1] = iVar3;
  return;
}



// ===== FUN_14019e760 @ 0x14019e760 [render] =====

void FUN_14019e760(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  undefined8 *puVar23;
  longlong lVar24;
  byte bVar25;
  uint uVar26;
  longlong *plVar27;
  int *piVar28;
  int iVar29;
  longlong lVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  ulonglong uVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  uint local_d8;
  longlong *local_90;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined8 uStack_60;
  int local_58 [8];
  
  iVar37 = *(int *)(param_1 + 0xc);
  piVar1 = (int *)(param_1 + 0x10);
  if ((*(int *)(param_2 + 0x50) <= iVar37) && (*(int *)(param_2 + 0x54) <= *piVar1)) {
    local_58[4] = 3;
    local_58[5] = 0;
    local_58[6] = 1;
    local_58[7] = 2;
    local_58[0] = 3;
    local_58[1] = 2;
    local_58[2] = 1;
    local_58[3] = 0;
    piVar28 = local_58;
    if (*(int *)(param_1 + 0x18) != 1) {
      piVar28 = local_58 + 4;
    }
    uVar26 = iVar37 * *piVar1;
    uVar34 = CONCAT44(0,uVar26);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar34;
    uVar20 = SUB168(ZEXT816(4) * auVar14,0);
    if (SUB168(ZEXT816(4) * auVar14,8) != 0) {
      uVar20 = 0xffffffffffffffff;
    }
    puVar21 = (undefined8 *)thunk_FUN_140558c80(uVar20);
    FUN_140595d50(puVar21,0,uVar34 * 4);
    uStack_60 = CONCAT44(uStack_6c,uVar26);
    local_68 = puVar21;
    FUN_1400a5bb0(param_2,0,0,*(undefined4 *)(param_1 + 0xc),*piVar1,&local_68);
    uVar26 = *piVar1 * *(int *)(param_1 + 0xc) * 4;
    lVar22 = thunk_FUN_140558c80(uVar26);
    FUN_140595d50(lVar22,0,uVar26);
    iVar37 = 0;
    if (0 < *piVar1) {
      do {
        iVar36 = 0;
        iVar32 = *(int *)(param_1 + 0xc);
        if (0 < iVar32) {
          iVar38 = *piVar28;
          iVar9 = piVar28[1];
          iVar10 = piVar28[2];
          iVar35 = piVar28[3];
          do {
            uVar16 = iVar32 * iVar37 + iVar36;
            iVar32 = uVar16 * 4;
            puVar2 = (undefined4 *)((longlong)puVar21 + (ulonglong)uVar16 * 4);
            *(undefined1 *)((ulonglong)(uint)(iVar32 + iVar38) + lVar22) =
                 *(undefined1 *)((longlong)puVar2 + 3);
            *(undefined1 *)((ulonglong)(uint)(iVar32 + iVar9) + lVar22) =
                 *(undefined1 *)((longlong)puVar2 + 2);
            *(char *)((ulonglong)(uint)(iVar32 + iVar10) + lVar22) = (char)((uint)*puVar2 >> 8);
            *(undefined1 *)((ulonglong)(uint)(iVar32 + iVar35) + lVar22) = *(undefined1 *)puVar2;
            iVar36 = iVar36 + 1;
            iVar32 = *(int *)(param_1 + 0xc);
          } while (iVar36 < iVar32);
        }
        iVar37 = iVar37 + 1;
      } while (iVar37 < *(int *)(param_1 + 0x10));
    }
    plVar27 = (longlong *)(param_1 + 0x60);
    lVar30 = 10;
    local_d8 = 1;
    do {
      puVar23 = (undefined8 *)*plVar27;
      if (puVar23 != (undefined8 *)0x0) {
        (**(code **)*puVar23)(puVar23,1);
        *plVar27 = 0;
      }
      plVar27 = plVar27 + 1;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    puVar23 = (undefined8 *)FUN_140558c80(0x30);
    *(uint *)(puVar23 + 1) = uVar26;
    *(undefined4 *)((longlong)puVar23 + 0xc) = 0;
    *(uint *)(puVar23 + 2) = uVar26;
    *puVar23 = ByteBuffer::vftable;
    *(undefined1 *)(puVar23 + 3) = 0;
    uVar20 = thunk_FUN_140558c80(uVar26);
    puVar23[4] = uVar20;
    FUN_140595d50(uVar20,0,uVar26);
    *(undefined4 *)(puVar23 + 5) = 0;
    *(undefined8 **)(param_1 + 0x60) = puVar23;
    *(undefined4 *)((longlong)puVar23 + 0xc) = 0;
    *(undefined4 *)(puVar23 + 2) = *(undefined4 *)(puVar23 + 1);
    lVar30 = *(longlong *)(param_1 + 0x60);
    FUN_140596110((ulonglong)*(uint *)(lVar30 + 0xc) + *(longlong *)(lVar30 + 0x20),lVar22,uVar26);
    *(int *)(lVar30 + 0xc) = *(int *)(lVar30 + 0xc) + uVar26;
    lVar30 = *(longlong *)(param_1 + 0x60);
    *(uint *)(lVar30 + 0x10) = uVar26;
    if (uVar26 < *(uint *)(lVar30 + 0xc)) {
      *(uint *)(lVar30 + 0xc) = uVar26;
    }
    thunk_FUN_1401fe000(lVar22);
    if ((*(char *)(param_1 + 0x2c) != '\0') || (*(longlong *)(param_2 + 8) != 0)) {
      *(undefined1 *)(param_1 + 0x2c) = 1;
      local_90 = (longlong *)(param_1 + 0x68);
      do {
        bVar25 = (byte)local_d8;
        uVar16 = *(int *)(param_1 + 0xc) >> (bVar25 & 0x1f);
        iVar37 = *(int *)(param_1 + 0x10) >> (bVar25 & 0x1f);
        iVar32 = iVar37 * uVar16;
        uVar26 = iVar32 * 4;
        lVar22 = thunk_FUN_140558c80(uVar26);
        FUN_140595d50(lVar22,0,uVar26);
        auVar15._8_8_ = 0;
        auVar15._0_8_ = (longlong)iVar32;
        uVar20 = SUB168(ZEXT816(4) * auVar15,0);
        if (SUB168(ZEXT816(4) * auVar15,8) != 0) {
          uVar20 = 0xffffffffffffffff;
        }
        lVar24 = thunk_FUN_140558c80(uVar20);
        uVar34 = (ulonglong)(int)local_d8;
        lVar30 = *(longlong *)(param_2 + uVar34 * 8);
        if (lVar30 == 0) {
          iVar36 = *(int *)(param_1 + 0xc) >> (bVar25 - 1 & 0x1f);
          iVar32 = 0;
          if (0 < (int)uVar16) {
            do {
              iVar38 = 0;
              if (0 < iVar37) {
                iVar9 = *piVar28;
                iVar10 = piVar28[1];
                iVar35 = piVar28[2];
                iVar11 = piVar28[3];
                do {
                  lVar30 = *(longlong *)(param_1 + (ulonglong)((int)uVar34 - 1) * 8 + 0x60);
                  uVar4 = (iVar38 * iVar36 + iVar32) * 8;
                  iVar29 = 0;
                  lVar13 = *(longlong *)(lVar30 + 0x20);
                  uVar5 = *(undefined1 *)((ulonglong)(uVar4 + 1) + lVar13);
                  uVar6 = *(undefined1 *)((ulonglong)(uVar4 + 2) + lVar13);
                  uVar7 = *(undefined1 *)((ulonglong)(uVar4 + 3) + lVar13);
                  iVar12 = *(int *)(lVar30 + 0x28);
                  if (iVar12 == 0) {
                    iVar29 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)uVar4 + lVar13),
                                                        uVar5),uVar6),uVar7);
                  }
                  else if (iVar12 == 1) {
                    iVar29 = CONCAT31(CONCAT21(CONCAT11(uVar7,uVar6),uVar5),
                                      *(undefined1 *)((ulonglong)uVar4 + lVar13));
                  }
                  iVar31 = 0;
                  uVar5 = *(undefined1 *)((ulonglong)(uVar4 + 4) + lVar13);
                  uVar6 = *(undefined1 *)((ulonglong)(uVar4 + 5) + lVar13);
                  uVar7 = *(undefined1 *)((ulonglong)(uVar4 + 6) + lVar13);
                  uVar8 = *(undefined1 *)((ulonglong)(uVar4 + 7) + lVar13);
                  if (iVar12 == 0) {
                    iVar31 = CONCAT31(CONCAT21(CONCAT11(uVar5,uVar6),uVar7),uVar8);
                  }
                  else if (iVar12 == 1) {
                    iVar31 = CONCAT31(CONCAT21(CONCAT11(uVar8,uVar7),uVar6),uVar5);
                  }
                  uVar4 = ((iVar38 * 2 + 1) * iVar36 + iVar32 * 2) * 4;
                  iVar33 = 0;
                  uVar5 = *(undefined1 *)((ulonglong)(uVar4 + 4) + lVar13);
                  uVar6 = *(undefined1 *)((ulonglong)(uVar4 + 5) + lVar13);
                  uVar7 = *(undefined1 *)((ulonglong)(uVar4 + 6) + lVar13);
                  uVar8 = *(undefined1 *)((ulonglong)(uVar4 + 7) + lVar13);
                  if (iVar12 == 0) {
                    iVar33 = CONCAT31(CONCAT21(CONCAT11(uVar5,uVar6),uVar7),uVar8);
                  }
                  else if (iVar12 == 1) {
                    iVar33 = CONCAT31(CONCAT21(CONCAT11(uVar8,uVar7),uVar6),uVar5);
                  }
                  iVar17 = 0;
                  uVar5 = *(undefined1 *)((ulonglong)(uVar4 + 1) + lVar13);
                  uVar6 = *(undefined1 *)((ulonglong)(uVar4 + 2) + lVar13);
                  uVar7 = *(undefined1 *)((ulonglong)(uVar4 + 3) + lVar13);
                  if (iVar12 == 0) {
                    iVar17 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)uVar4 + lVar13),
                                                        uVar5),uVar6),uVar7);
                  }
                  else if (iVar12 == 1) {
                    iVar17 = CONCAT31(CONCAT21(CONCAT11(uVar7,uVar6),uVar5),
                                      *(undefined1 *)((ulonglong)uVar4 + lVar13));
                  }
                  uVar18 = FUN_14019ef50(iVar33 >> 8 & 0xffffffU | iVar33 << 0x18,
                                         iVar17 >> 8 & 0xffffffU | iVar17 << 0x18);
                  uVar19 = FUN_14019ef50(iVar29 >> 8 & 0xffffffU | iVar29 << 0x18,
                                         iVar31 >> 8 & 0xffffffU | iVar31 << 0x18);
                  uVar18 = FUN_14019ef50(uVar19,uVar18);
                  iVar12 = (iVar38 * uVar16 + iVar32) * 4;
                  *(char *)((ulonglong)(uint)(iVar9 + iVar12) + lVar22) =
                       (char)((uint)uVar18 >> 0x18);
                  *(char *)((ulonglong)(uint)(iVar10 + iVar12) + lVar22) =
                       (char)((uint)uVar18 >> 0x10);
                  *(char *)((ulonglong)(uint)(iVar35 + iVar12) + lVar22) = (char)((uint)uVar18 >> 8)
                  ;
                  *(char *)((ulonglong)(uint)(iVar11 + iVar12) + lVar22) = (char)uVar18;
                  iVar38 = iVar38 + 1;
                } while (iVar38 < iVar37);
                uVar34 = (ulonglong)local_d8;
              }
              iVar32 = iVar32 + 1;
            } while (iVar32 < (int)uVar16);
          }
        }
        else {
          FUN_140596110(lVar24,lVar30,(longlong)(iVar32 * 4));
          iVar32 = 0;
          if (0 < iVar37) {
            do {
              if (0 < (int)uVar16) {
                iVar36 = *piVar28;
                iVar38 = piVar28[1];
                iVar9 = piVar28[2];
                iVar10 = piVar28[3];
                iVar35 = iVar32 * uVar16;
                uVar34 = (ulonglong)uVar16;
                do {
                  puVar3 = (undefined1 *)(lVar24 + (longlong)iVar35 * 4);
                  iVar11 = iVar35 * 4;
                  *(undefined1 *)((ulonglong)(uint)(iVar11 + iVar36) + lVar22) = puVar3[3];
                  *(undefined1 *)((ulonglong)(uint)(iVar11 + iVar38) + lVar22) = puVar3[2];
                  *(undefined1 *)((ulonglong)(uint)(iVar11 + iVar9) + lVar22) = puVar3[1];
                  *(undefined1 *)((ulonglong)(uint)(iVar11 + iVar10) + lVar22) = *puVar3;
                  iVar35 = iVar35 + 1;
                  uVar34 = uVar34 - 1;
                } while (uVar34 != 0);
              }
              iVar32 = iVar32 + 1;
            } while (iVar32 < iVar37);
          }
        }
        puVar23 = (undefined8 *)FUN_140558c80(0x30);
        *(uint *)(puVar23 + 1) = uVar26;
        *(undefined4 *)((longlong)puVar23 + 0xc) = 0;
        *(uint *)(puVar23 + 2) = uVar26;
        *puVar23 = ByteBuffer::vftable;
        *(undefined1 *)(puVar23 + 3) = 0;
        local_68 = puVar23;
        uVar20 = thunk_FUN_140558c80(uVar26);
        puVar23[4] = uVar20;
        FUN_140595d50(uVar20,0,uVar26);
        *(undefined4 *)(puVar23 + 5) = 0;
        *local_90 = (longlong)puVar23;
        *(undefined4 *)((longlong)puVar23 + 0xc) = 0;
        *(undefined4 *)(puVar23 + 2) = *(undefined4 *)(puVar23 + 1);
        lVar30 = *local_90;
        FUN_140596110((ulonglong)*(uint *)(lVar30 + 0xc) + *(longlong *)(lVar30 + 0x20),lVar22,
                      uVar26);
        *(int *)(lVar30 + 0xc) = *(int *)(lVar30 + 0xc) + uVar26;
        lVar30 = *local_90;
        *(uint *)(lVar30 + 0x10) = uVar26;
        if (uVar26 < *(uint *)(lVar30 + 0xc)) {
          *(uint *)(lVar30 + 0xc) = uVar26;
        }
        thunk_FUN_1401fe000(lVar22);
        thunk_FUN_1401fe000(lVar24);
        local_d8 = local_d8 + 1;
        local_90 = local_90 + 1;
      } while (local_d8 < 5);
    }
    thunk_FUN_1401fe000(puVar21);
    if (*(char *)(param_1 + 0x59) == '\0') {
      *(undefined1 *)(param_1 + 0x5a) = 0;
    }
    else {
      FUN_14019f030(param_1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,
                "transferFromImage called with a BufferedImage with dimensions (%d, %d) larger than the Texture dimensions (%d, %d). Ignoring.\n"
                ,*(int *)(param_2 + 0x50),*(int *)(param_2 + 0x54),iVar37,*piVar1);
}



// ===== FUN_14019ef50 @ 0x14019ef50 [render] =====

uint FUN_14019ef50(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_2 >> 0x18) + (param_1 >> 0x18) < 0xff) {
    iVar3 = 1;
    uVar4 = 0;
    iVar1 = 1;
  }
  else {
    uVar4 = 0xff00;
    if (param_2 >> 0x18 < param_1 >> 0x18) {
      iVar1 = 0xff;
      iVar3 = 1;
    }
    else {
      iVar1 = 1;
      iVar3 = 0xff;
    }
  }
  uVar2 = iVar3 + iVar1;
  return ((param_2 & 0xff) * iVar3 + (param_1 & 0xff) * iVar1) / uVar2 |
         (((((int)param_2 >> 0x10 & 0xffU) * iVar3 + ((int)param_1 >> 0x10 & 0xffU) * iVar1) / uVar2
          | uVar4) << 8 |
         (((int)param_2 >> 8 & 0xffU) * iVar3 + ((int)param_1 >> 8 & 0xffU) * iVar1) / uVar2) << 8;
}



// ===== FUN_14019f030 @ 0x14019f030 [render] =====

void FUN_14019f030(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 in_stack_ffffffffffffffe0;
  uint uVar6;
  ulonglong uVar5;
  
  (**(code **)(**(longlong **)(param_1 + 0x60) + 8))();
  uVar6 = (uint)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  iVar4 = 1;
  if ((*(char *)(param_1 + 0x2c) != '\0') && (iVar2 = 1, 1 < *(int *)(param_1 + 0x5c))) {
    plVar3 = (longlong *)(param_1 + 0x68);
    do {
      uVar6 = (uint)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
      if ((longlong *)*plVar3 == (longlong *)0x0) break;
      (**(code **)(*(longlong *)*plVar3 + 8))();
      uVar6 = (uint)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
      iVar2 = iVar2 + 1;
      plVar3 = plVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x5c));
  }
  if (*(char *)(param_1 + 0xb0) == '\0') {
    FUN_140004734(&DAT_140784700,*(undefined4 *)(param_1 + 0x5c));
    uVar5 = (ulonglong)uVar6 << 0x20;
    FUN_1400046ec(&DAT_140784700,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x20),0,uVar5);
    if ((*(char *)(param_1 + 0x2c) != '\0') && (1 < *(int *)(param_1 + 0x5c))) {
      plVar3 = (longlong *)(param_1 + 0x68);
      do {
        uVar5 = uVar5 & 0xffffffff00000000;
        FUN_1400046ec(&DAT_140784700,*(int *)(param_1 + 0xc) >> ((byte)iVar4 & 0x1f),
                      *(int *)(param_1 + 0x10) >> ((byte)iVar4 & 0x1f),
                      *(undefined8 *)(*plVar3 + 0x20),iVar4,uVar5);
        iVar4 = iVar4 + 1;
        plVar3 = plVar3 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x5c));
    }
    *(undefined1 *)(param_1 + 0xb0) = 1;
    *(undefined1 *)(param_1 + 0x5a) = 1;
  }
  else {
    FUN_1400046f8(&DAT_140784700,0,0,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x20),0);
    if (((*(char *)(param_1 + 0x2c) != '\0') && (iVar2 = FUN_14000471c(&DAT_140784700), 1 < iVar2))
       && (1 < *(int *)(param_1 + 0x5c))) {
      plVar3 = (longlong *)(param_1 + 0x68);
      do {
        bVar1 = (byte)iVar4 & 0x1f;
        FUN_1400046f8(&DAT_140784700,0 >> bVar1,0,*(int *)(param_1 + 0xc) >> ((byte)iVar4 & 0x1f),
                      *(int *)(param_1 + 0x10) >> bVar1,*(undefined8 *)(*plVar3 + 0x20),iVar4);
        iVar4 = iVar4 + 1;
        plVar3 = plVar3 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x5c));
      *(undefined1 *)(param_1 + 0x5a) = 1;
      return;
    }
    *(undefined1 *)(param_1 + 0x5a) = 1;
  }
  return;
}



// ===== FUN_14019f610 @ 0x14019f610 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14019f610(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar22;
  undefined1 auStackY_148 [32];
  uint local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  undefined4 local_b8 [2];
  undefined8 *local_b0;
  longlong local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined1 local_90 [16];
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  ulonglong uStack_68;
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_1407502c0 ^ (ulonglong)auStackY_148;
  lVar21 = 0;
  plVar8 = (longlong *)FUN_140558c80(0x18);
  *plVar8 = 0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar9 = (longlong *)FUN_1401aa4c0(*(undefined8 *)(DAT_140790e60 + 0x238));
  local_80 = 0;
  lStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_140054cf0(&local_80,&PTR_140610690,0);
  pcVar2 = *(code **)(*plVar9 + 0x68);
  if (0x7ffffffffffffffe - param_2[2] < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_140054e40();
  }
  FUN_140048da0(local_60);
  cVar5 = (*pcVar2)(plVar9,local_60,0);
  FUN_140055150(local_60);
  if (cVar5 == '\0') {
    plVar10 = (longlong *)(**(code **)(*DAT_1407915a8 + 0x80))(DAT_1407915a8,local_60);
    if (&local_80 == plVar10) goto LAB_14019f800;
    if (7 < uStack_68) {
      lVar11 = local_80;
      if ((0xfff < uStack_68 * 2 + 2) &&
         (lVar11 = *(longlong *)(local_80 + -8), 0x1f < (local_80 - lVar11) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_14019f7c8;
    }
  }
  else {
    plVar10 = (longlong *)(**(code **)(*plVar9 + 0x80))(plVar9);
    if (&local_80 == plVar10) goto LAB_14019f800;
    if (7 < uStack_68) {
      lVar11 = local_80;
      if ((0xfff < uStack_68 * 2 + 2) &&
         (lVar11 = *(longlong *)(local_80 + -8), 0x1f < (local_80 - lVar11) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
LAB_14019f7c8:
      thunk_FUN_1401fe000(lVar11);
    }
  }
  local_80 = *plVar10;
  lStack_78 = plVar10[1];
  local_70 = plVar10[2];
  uStack_68 = plVar10[3];
  plVar10[2] = 0;
  *(undefined2 *)plVar10 = 0;
  plVar10[3] = 7;
LAB_14019f800:
  FUN_140055150(local_60);
  lVar11 = (**(code **)(*plVar9 + 0x90))(plVar9,param_2,0,1);
  iVar6 = *(int *)(lVar11 + 0x54);
  iVar1 = *(int *)(lVar11 + 0x50);
  uVar22 = FUN_14019fde0(extraout_XMM0_Da,local_60,param_2);
  cVar5 = FUN_1401a0050(uVar22,param_2,plVar9);
  if (cVar5 == '\0') {
    if (iVar1 != iVar6) {
      if (7 < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_140054650(L"TextureManager.createTexture: Skipping %ls because of broken aspect ratio and not animation\n"
                    ,param_2);
    }
    puVar13 = (undefined8 *)FUN_140558c80(0xb8);
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[8] = 0;
    puVar13[9] = 7;
    *(undefined2 *)(puVar13 + 6) = 0;
    local_a0 = puVar13;
    FUN_14019e250(puVar13,local_60,2,iVar1);
    *(undefined1 *)(puVar13 + 0xb) = 1;
    FUN_14019e760(puVar13,lVar11);
    for (puVar15 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
        puVar15 != *(undefined8 **)(param_1 + 0x10); puVar15 = (undefined8 *)*puVar15) {
      if ((undefined8 *)puVar15[3] == puVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_14002fe50(&DAT_1407bb5d0,
                      "TextureManager.registerTexture called, but this texture has already been registered. ignoring."
                     );
      }
    }
    local_b8[0] = *(undefined4 *)((longlong)puVar13 + 4);
    local_b0 = puVar13;
    FUN_140132a30(param_1 + 8,local_90,local_b8);
    puVar15 = (undefined8 *)plVar8[1];
    if (puVar15 == (undefined8 *)plVar8[2]) {
      lVar12 = (longlong)puVar15 - *plVar8 >> 3;
      if (lVar12 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_140050870();
      }
      uVar4 = lVar12 + 1;
      uVar17 = plVar8[2] - *plVar8 >> 3;
      if (0x1fffffffffffffff - (uVar17 >> 1) < uVar17) {
        uVar20 = 0x1fffffffffffffff;
      }
      else {
        uVar17 = (uVar17 >> 1) + uVar17;
        uVar20 = uVar4;
        if (uVar4 <= uVar17) {
          uVar20 = uVar17;
        }
        if (0x1fffffffffffffff < uVar20) {
                    /* WARNING: Subroutine does not return */
          FUN_140054fe0();
        }
      }
      lVar18 = FUN_140054e60(uVar20 * 8);
      *(undefined8 **)(lVar18 + lVar12 * 8) = puVar13;
      puVar13 = (undefined8 *)*plVar8;
      if (puVar15 == (undefined8 *)plVar8[1]) {
        lVar19 = plVar8[1] - (longlong)puVar13;
        lVar12 = lVar18;
        puVar15 = puVar13;
      }
      else {
        FUN_140596110(lVar18,puVar13,(longlong)puVar15 - (longlong)puVar13);
        lVar19 = plVar8[1] - (longlong)puVar15;
        lVar12 = lVar18 + (lVar12 + 1) * 8;
      }
      FUN_140596110(lVar12,puVar15,lVar19);
      FUN_140051010(plVar8,lVar18,uVar4,uVar20);
    }
    else {
      *puVar15 = puVar13;
      plVar8[1] = plVar8[1] + 8;
    }
  }
  else {
    uVar4 = (longlong)iVar6 / (longlong)iVar1;
    if (0 < (int)uVar4) {
      local_a8 = param_1 + 8;
      puVar15 = (undefined8 *)(uVar4 & 0xffffffff);
      do {
        local_c8 = puVar15;
        lVar12 = FUN_1400a5c90(lVar11);
        local_c0 = lVar12;
        puVar13 = (undefined8 *)FUN_140558c80(0xb8);
        puVar13[6] = 0;
        puVar13[7] = 0;
        puVar13[8] = 0;
        puVar13[9] = 7;
        *(undefined2 *)(puVar13 + 6) = 0;
        local_98 = puVar13;
        FUN_14019e250(puVar13,local_60,2,iVar1);
        if (lVar12 == 0) {
          if (iVar1 == -1) {
            *(undefined1 *)(puVar13 + 0xb) = 0;
          }
          else {
            iVar6 = iVar1 * iVar1 * 4;
            uVar14 = thunk_FUN_140558c80(iVar6);
            FUN_140595d50(uVar14,0,iVar6);
            if ((iVar1 * iVar1 & 0x3fffffffU) != 0) {
              FUN_140595d50(uVar14,0,(longlong)iVar6);
            }
            lVar12 = FUN_1400aa580(iVar6);
            puVar13[0xc] = lVar12;
            *(undefined4 *)(lVar12 + 0xc) = 0;
            *(undefined4 *)(lVar12 + 0x10) = *(undefined4 *)(lVar12 + 8);
            lVar12 = puVar13[0xc];
            FUN_140596110((ulonglong)*(uint *)(lVar12 + 0xc) + *(longlong *)(lVar12 + 0x20),uVar14,
                          iVar6);
            *(int *)(lVar12 + 0xc) = *(int *)(lVar12 + 0xc) + iVar6;
            lVar12 = puVar13[0xc];
            *(undefined4 *)(lVar12 + 0xc) = 0;
            *(int *)(lVar12 + 0x10) = iVar6;
            thunk_FUN_1401fe000(uVar14);
            if ((*(char *)((longlong)puVar13 + 0x2c) != '\0') &&
               (local_d0 = 1, 1 < *(uint *)((longlong)puVar13 + 0x5c))) {
              do {
                uVar7 = (iVar1 >> ((byte)local_d0 & 0x1f)) * (iVar1 >> ((byte)iVar1 & 0x1f));
                iVar6 = uVar7 * 4;
                uVar14 = thunk_FUN_140558c80(iVar6);
                FUN_140595d50(uVar14,0,iVar6);
                if ((uVar7 & 0x3fffffff) != 0) {
                  FUN_140595d50(uVar14,0,(longlong)iVar6);
                }
                puVar15 = (undefined8 *)FUN_140558c80(0x30);
                *(int *)(puVar15 + 1) = iVar6;
                *(undefined4 *)((longlong)puVar15 + 0xc) = 0;
                *(int *)(puVar15 + 2) = iVar6;
                *puVar15 = ByteBuffer::vftable;
                *(undefined1 *)(puVar15 + 3) = 0;
                local_a0 = puVar15;
                uVar16 = thunk_FUN_140558c80(iVar6);
                puVar15[4] = uVar16;
                FUN_140595d50(uVar16,0,iVar6);
                *(undefined4 *)(puVar15 + 5) = 0;
                puVar13[(ulonglong)local_d0 + 0xc] = puVar15;
                *(undefined4 *)((longlong)puVar15 + 0xc) = 0;
                *(undefined4 *)(puVar15 + 2) = *(undefined4 *)(puVar15 + 1);
                lVar12 = puVar13[(ulonglong)local_d0 + 0xc];
                FUN_140596110((ulonglong)*(uint *)(lVar12 + 0xc) + *(longlong *)(lVar12 + 0x20),
                              uVar14,iVar6);
                *(int *)(lVar12 + 0xc) = *(int *)(lVar12 + 0xc) + iVar6;
                lVar12 = puVar13[(ulonglong)local_d0 + 0xc];
                *(undefined4 *)(lVar12 + 0xc) = 0;
                *(int *)(lVar12 + 0x10) = iVar6;
                thunk_FUN_1401fe000(uVar14);
                local_d0 = local_d0 + 1;
                puVar15 = local_c8;
              } while (local_d0 < *(uint *)((longlong)puVar13 + 0x5c));
            }
            if (*(char *)((longlong)puVar13 + 0x59) == '\0') {
              *(undefined1 *)((longlong)puVar13 + 0x5a) = 0;
              lVar12 = local_c0;
            }
            else {
              FUN_14019f030(puVar13);
              lVar12 = local_c0;
            }
          }
        }
        else {
          *(undefined1 *)(puVar13 + 0xb) = 1;
          FUN_14019e760(puVar13,lVar12);
        }
        for (puVar3 = (undefined8 *)**(undefined8 **)(local_a8 + 8);
            puVar3 != *(undefined8 **)(local_a8 + 8); puVar3 = (undefined8 *)*puVar3) {
          if ((undefined8 *)puVar3[3] == puVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_14002fe50(&DAT_1407bb5d0,
                          "TextureManager.registerTexture called, but this texture has already been registered. ignoring."
                         );
          }
        }
        local_b8[0] = *(undefined4 *)((longlong)puVar13 + 4);
        local_b0 = puVar13;
        FUN_140132a30(local_a8,local_90,local_b8);
        lVar18 = lVar21;
        local_c8 = puVar13;
        if (lVar12 != 0) {
          do {
            thunk_FUN_1401fe000(*(undefined8 *)(lVar12 + lVar18 * 8));
            lVar18 = lVar18 + 1;
          } while (lVar18 < 10);
          thunk_FUN_1401fe000(lVar12,0x58);
        }
        FUN_1400453a0(plVar8,&local_c8);
        puVar15 = (undefined8 *)((longlong)puVar15 - 1);
      } while (puVar15 != (undefined8 *)0x0);
      local_c8 = (undefined8 *)0x0;
    }
  }
  do {
    thunk_FUN_1401fe000(*(undefined8 *)(lVar11 + lVar21 * 8));
    lVar21 = lVar21 + 1;
  } while (lVar21 < 10);
  thunk_FUN_1401fe000(lVar11,0x58);
  FUN_140055150(local_60);
  FUN_140055150(&local_80);
  return plVar8;
}



// ===== FUN_14019fde0 @ 0x14019fde0 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_14019fde0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *******pppppppuVar3;
  ulonglong uVar4;
  undefined1 auStackY_d8 [32];
  undefined8 *******local_98 [2];
  ulonglong local_88;
  ulonglong local_80;
  undefined8 *******local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined8 *******local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1407502c0 ^ (ulonglong)auStackY_d8;
  FUN_140317110(local_98,param_3);
  lVar2 = FUN_1401a0670(local_98,0x5c);
  uVar1 = lVar2 + 1;
  local_58 = (undefined8 *******)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  if (local_88 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_140051220();
  }
  uVar4 = local_88;
  if (local_88 - uVar1 < local_88) {
    uVar4 = local_88 - uVar1;
  }
  pppppppuVar3 = local_98;
  if (7 < local_80) {
    pppppppuVar3 = local_98[0];
  }
  FUN_140054cf0(&local_58,(longlong)pppppppuVar3 + uVar1 * 2,uVar4);
  lVar2 = FUN_1401a0670(local_98,0x5c);
  uVar1 = lVar2 + 1;
  local_78 = (undefined8 *******)0x0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  if (local_88 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_140051220();
  }
  if (local_88 - uVar1 < local_88) {
    local_88 = local_88 - uVar1;
  }
  pppppppuVar3 = local_98;
  if (7 < local_80) {
    pppppppuVar3 = local_98[0];
  }
  FUN_140054cf0(&local_78,(longlong)pppppppuVar3 + uVar1 * 2,local_88);
  pppppppuVar3 = &local_78;
  if (7 < uStack_60) {
    pppppppuVar3 = local_78;
  }
  if (local_68 != 0) {
    lVar2 = -1;
    if (local_68 + -1 != -1) {
      lVar2 = local_68 + -1;
    }
    thunk_FUN_140556b60(pppppppuVar3,(longlong)pppppppuVar3 + (lVar2 + 1) * 2,0x2e);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  pppppppuVar3 = &local_58;
  if (7 < uStack_40) {
    pppppppuVar3 = local_58;
  }
  FUN_140054cf0(param_2,pppppppuVar3);
  if (7 < uStack_60) {
    if ((0xfff < uStack_60 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)local_78[-1])))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_68 = 0;
  uStack_60 = 7;
  local_78 = (undefined8 *******)((ulonglong)local_78 & 0xffffffffffff0000);
  if (7 < uStack_40) {
    if ((0xfff < uStack_40 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)local_58[-1])))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  FUN_140055150(local_98);
  return param_2;
}



// ===== FUN_1401a0050 @ 0x1401a0050 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1401a0050(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 auStackY_f8 [32];
  ulonglong local_b0;
  ulonglong uStack_a8;
  ulonglong local_a0;
  ulonglong uStack_98;
  ulonglong local_90 [5];
  longlong lStack_68;
  longlong local_60;
  ulonglong uStack_58;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_1407502c0 ^ (ulonglong)auStackY_f8;
  puVar9 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar9 = (undefined8 *)*param_2;
  }
  uVar10 = 0xffffffffffffffff;
  if (param_2[2] != 0) {
    lVar8 = param_2[2] + -1;
    lVar5 = -1;
    if (lVar8 != -1) {
      lVar5 = lVar8;
    }
    lVar5 = (longlong)puVar9 + (lVar5 + 1) * 2;
    lVar8 = thunk_FUN_140556b60(puVar9,lVar5,0x2e);
    if (lVar8 != lVar5) {
      uVar10 = lVar8 - (longlong)puVar9 >> 1;
    }
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  if ((ulonglong)param_2[2] < uVar10) {
    uVar10 = param_2[2];
  }
  puVar9 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar9 = (undefined8 *)*param_2;
  }
  FUN_140054cf0(local_90,puVar9,uVar10);
  puVar6 = (ulonglong *)FUN_140059e60(local_90,0,&DAT_140615180);
  local_b0 = *puVar6;
  uStack_a8 = puVar6[1];
  local_a0 = puVar6[2];
  uStack_98 = puVar6[3];
  puVar6[2] = 0;
  puVar6[3] = 7;
  *(undefined2 *)puVar6 = 0;
  plVar7 = (longlong *)FUN_140048d20(&local_b0,L".txt");
  local_90[4] = *plVar7;
  lStack_68 = plVar7[1];
  local_60 = plVar7[2];
  uStack_58 = plVar7[3];
  plVar7[2] = 0;
  plVar7[3] = 7;
  *(undefined2 *)plVar7 = 0;
  if (7 < uStack_98) {
    if ((0xfff < uStack_98 * 2 + 2) && (0x1f < (local_b0 - *(longlong *)(local_b0 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_a0 = 0;
  uStack_98 = 7;
  local_b0 = local_b0 & 0xffffffffffff0000;
  if (7 < local_90[3]) {
    if ((0xfff < local_90[3] * 2 + 2) && (0x1f < (local_90[0] - *(longlong *)(local_90[0] - 8)) - 8)
       ) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_90[2] = 0;
  local_90[3] = 7;
  local_90[0] = local_90[0] & 0xffffffffffff0000;
  pcVar1 = *(code **)(*param_3 + 0x68);
  if (param_2[2] == 0x7ffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
    FUN_140054e40();
  }
  FUN_140048da0(local_50);
  cVar2 = (*pcVar1)(param_3,local_50,0);
  FUN_140055150(local_50);
  lVar5 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar3 = (**(code **)**(undefined8 **)(lVar5 + 0xb8))();
  plVar7 = DAT_1407915a8;
  if (cVar3 != '\0') {
    plVar7 = *(longlong **)(lVar5 + 0xb8);
  }
  uVar4 = (**(code **)(*plVar7 + 0x68))(plVar7,local_90 + 4,cVar2 == '\0');
  if (7 < uStack_58) {
    uVar10 = local_90[4];
    if ((0xfff < uStack_58 * 2 + 2) &&
       (uVar10 = *(longlong *)(local_90[4] + -8), 0x1f < (local_90[4] - uVar10) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000(uVar10);
  }
  return uVar4;
}



// ===== FUN_1401a0390 @ 0x1401a0390 [render] =====

longlong FUN_1401a0390(longlong param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong in_stack_00000058;
  longlong local_48 [2];
  undefined8 *local_38;
  longlong local_30;
  
  lVar4 = FUN_140558c80(0xb8);
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 7;
  *(undefined2 *)(lVar4 + 0x30) = 0;
  local_48[0] = lVar4;
  FUN_14019e250(lVar4,param_2,param_3,param_4,param_5);
  if (in_stack_00000058 == 0) {
    if ((param_4 == -1) || (param_5 == -1)) {
      *(undefined1 *)(lVar4 + 0x58) = 0;
    }
    else {
      iVar2 = param_4 * param_5 * 4;
      uVar5 = thunk_FUN_140558c80(iVar2);
      FUN_140595d50(uVar5,0,iVar2);
      if ((param_4 * param_5 & 0x3fffffffU) != 0) {
        FUN_140595d50(uVar5,0,(longlong)iVar2);
      }
      lVar6 = FUN_1400aa580(iVar2);
      *(longlong *)(lVar4 + 0x60) = lVar6;
      *(undefined4 *)(lVar6 + 0xc) = 0;
      *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(lVar6 + 8);
      lVar6 = *(longlong *)(lVar4 + 0x60);
      FUN_140596110((ulonglong)*(uint *)(lVar6 + 0xc) + *(longlong *)(lVar6 + 0x20),uVar5,iVar2);
      *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + iVar2;
      lVar6 = *(longlong *)(lVar4 + 0x60);
      *(undefined4 *)(lVar6 + 0xc) = 0;
      *(int *)(lVar6 + 0x10) = iVar2;
      thunk_FUN_1401fe000(uVar5);
      if ((*(char *)(lVar4 + 0x2c) != '\0') && (uVar9 = 1, 1 < *(uint *)(lVar4 + 0x5c))) {
        do {
          uVar3 = (param_4 >> ((byte)uVar9 & 0x1f)) * (param_5 >> ((byte)param_5 & 0x1f));
          iVar2 = uVar3 * 4;
          uVar5 = thunk_FUN_140558c80(iVar2);
          FUN_140595d50(uVar5,0,iVar2);
          if ((uVar3 & 0x3fffffff) != 0) {
            FUN_140595d50(uVar5,0,(longlong)iVar2);
          }
          puVar7 = (undefined8 *)FUN_140558c80(0x30);
          *(int *)(puVar7 + 1) = iVar2;
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
          *(int *)(puVar7 + 2) = iVar2;
          *puVar7 = ByteBuffer::vftable;
          *(undefined1 *)(puVar7 + 3) = 0;
          local_38 = puVar7;
          uVar8 = thunk_FUN_140558c80(iVar2);
          puVar7[4] = uVar8;
          FUN_140595d50(uVar8,0,iVar2);
          *(undefined4 *)(puVar7 + 5) = 0;
          lVar6 = lVar4 + (ulonglong)uVar9 * 8;
          *(undefined8 **)(lVar6 + 0x60) = puVar7;
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
          *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar7 + 1);
          lVar1 = *(longlong *)(lVar6 + 0x60);
          FUN_140596110((ulonglong)*(uint *)(lVar1 + 0xc) + *(longlong *)(lVar1 + 0x20),uVar5,iVar2)
          ;
          *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + iVar2;
          lVar6 = *(longlong *)(lVar6 + 0x60);
          *(undefined4 *)(lVar6 + 0xc) = 0;
          *(int *)(lVar6 + 0x10) = iVar2;
          thunk_FUN_1401fe000(uVar5);
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(lVar4 + 0x5c));
      }
      if (*(char *)(lVar4 + 0x59) == '\0') {
        *(undefined1 *)(lVar4 + 0x5a) = 0;
      }
      else {
        FUN_14019f030(lVar4);
      }
    }
  }
  else {
    *(undefined1 *)(lVar4 + 0x58) = 1;
    FUN_14019e760(lVar4);
    if (param_3 != 2) {
      FUN_14019f030(lVar4);
      *(undefined1 *)(lVar4 + 0x59) = 0;
    }
  }
  puVar7 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
  while( true ) {
    if (puVar7 == *(undefined8 **)(param_1 + 0x10)) {
      local_38 = (undefined8 *)CONCAT44(local_38._4_4_,*(undefined4 *)(lVar4 + 4));
      local_30 = lVar4;
      FUN_140132a30(param_1 + 8,local_48,&local_38);
      return lVar4;
    }
    if (puVar7[3] == lVar4) break;
    puVar7 = (undefined8 *)*puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,
                "TextureManager.registerTexture called, but this texture has already been registered. ignoring."
               );
}



// ===== FUN_1401a63d0 @ 0x1401a63d0 [render] =====

void FUN_1401a63d0(undefined8 param_1,undefined8 *param_2)

{
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"texture - %ls\n",param_2);
}



// ===== FUN_1401a6c40 @ 0x1401a6c40 [render] =====

void FUN_1401a6c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [64];
  undefined4 local_78;
  ulonglong local_28;
  
  local_28 = DAT_1407502c0 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  uVar1 = FUN_140315d00(param_2);
  uVar2 = FUN_140315d00(param_5);
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"AbstractTexturePack::getImageResource - %s, drive is %s\n",uVar1,
                uVar2);
}



// ===== FUN_1401a78a0 @ 0x1401a78a0 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1401a78a0(undefined8 *param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStackY_88 [32];
  ulonglong local_48 [6];
  
  local_48[4] = DAT_1407502c0 ^ (ulonglong)auStackY_88;
  FUN_140055000(local_48,param_3 + 0x168);
  FUN_1401a62f0(param_1,param_2);
  FUN_140055150(local_48);
  *param_1 = DLCTexturePack::vftable;
  param_1[0x20] = param_3;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11a) = 0;
  param_1[0x24] = 0;
  if (DAT_1407bbac0 != 0) {
    *(undefined1 *)(DAT_1407bbac0 + 0x68) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x11b) = 1;
  param_1[0x22] = 0;
  uVar1 = param_1[0x20];
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_140054cf0(local_48,L"languages.loc",0xd);
  cVar2 = FUN_140059a30(uVar1,6);
  if (7 < local_48[3]) {
    if (0xfff < local_48[3] * 2 + 2) {
      if (0x1f < (local_48[0] - *(longlong *)(local_48[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  if (cVar2 != '\0') {
    uVar1 = param_1[0x20];
    local_48[0] = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    local_48[3] = 0;
    FUN_140054cf0(local_48,L"languages.loc",0xd);
    lVar3 = FUN_140059bf0(uVar1,6);
    if (7 < local_48[3]) {
      if (0xfff < local_48[3] * 2 + 2) {
        if (0x1f < (local_48[0] - *(longlong *)(local_48[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      thunk_FUN_1401fe000();
    }
    local_48[2] = 0;
    local_48[3] = 7;
    local_48[0] = local_48[0] & 0xffffffffffff0000;
    param_1[0x22] = *(undefined8 *)(lVar3 + 0x38);
  }
  FUN_1401a7b40(param_1);
  FUN_1401a7ea0(param_1);
  FUN_1401a82b0(param_1);
  return param_1;
}



// ===== FUN_1401a8c30 @ 0x1401a8c30 [render] =====

void FUN_1401a8c30(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  if (*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x120) == 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x100) + 0x1ac);
  }
  else {
    iVar1 = FUN_140059350();
  }
  if (-1 < iVar1) {
    iVar2 = FUN_140002614(&DAT_140784008,0,iVar1,FUN_1401a8d80,param_1,"TPACK");
    if (iVar2 != 0x3e5) {
      *(undefined1 *)(param_1 + 0x11a) = 1;
      if (DAT_1407bbac0 != 0) {
        *(undefined1 *)(DAT_1407bbac0 + 0x68) = 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to mount texture pack DLC %d for pad %d\n",iVar1,0);
    }
    *(undefined1 *)(param_1 + 0x119) = 1;
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"Attempted to mount DLC data for texture pack %d\n",iVar1);
  }
  *(undefined1 *)(param_1 + 0x11a) = 1;
  if (DAT_1407bbac0 != 0) {
    *(undefined1 *)(DAT_1407bbac0 + 0x68) = 1;
  }
  if (DAT_1407bb7dc == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"Invalid change of App action for pad %d from %d to %d, ignoring\n"
                  ,0,4,CONCAT44(uVar3,0x25));
  }
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",0,DAT_1407bb7dc,
                CONCAT44(uVar3,0x25));
}



// ===== FUN_1401a8d80 @ 0x1401a8d80 [storage,render] =====

void FUN_1401a8d80(longlong param_1,undefined4 param_2,int param_3)

{
  undefined1 auStack_1d8 [64];
  undefined4 local_198;
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStack_1d8;
  local_198 = 0;
  *(undefined1 *)(param_1 + 0x119) = 0;
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"Failed to mount DLC for pad %d: %d\n",param_2,param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"Mounted DLC for texture pack, attempting to load data\n");
}



// ===== FUN_1401a9a10 @ 0x1401a9a10 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1401a9a10(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStackY_298 [32];
  undefined4 local_264;
  undefined8 *local_260;
  ulonglong local_258 [4];
  short local_238 [256];
  ulonglong local_38;
  
  local_38 = DAT_1407502c0 ^ (ulonglong)auStackY_298;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  local_260 = param_2;
  FUN_140054cf0(param_2,&PTR_140610690);
  bVar1 = false;
  lVar7 = *(longlong *)(param_1 + 0x108);
  if (lVar7 != 0) {
    local_258[0] = 0;
    local_258[1] = 0;
    local_258[2] = 0;
    local_258[3] = 0;
    FUN_140054cf0(local_258,L"TexturePack.xzp",0xf);
    bVar1 = true;
    cVar3 = FUN_140059a30(lVar7,3);
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_1401a9ad1;
    }
  }
  bVar2 = false;
LAB_1401a9ad1:
  if (bVar1) {
    if (7 < local_258[3]) {
      if (0xfff < local_258[3] * 2 + 2) {
        if (0x1f < (local_258[0] - *(longlong *)(local_258[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      thunk_FUN_1401fe000();
    }
  }
  if (bVar2) {
    uVar5 = *(undefined8 *)(param_1 + 0x108);
    local_258[0] = 0;
    local_258[1] = 0;
    local_258[2] = 0;
    local_258[3] = 0;
    FUN_140054cf0(local_258,L"TexturePack.xzp",0xf);
    plVar4 = (longlong *)FUN_140059bf0(uVar5,3,local_258);
    if (7 < local_258[3]) {
      uVar6 = local_258[0];
      if (0xfff < local_258[3] * 2 + 2) {
        uVar6 = *(ulonglong *)(local_258[0] - 8);
        if (0x1f < (local_258[0] - uVar6) - 8) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      thunk_FUN_1401fe000(uVar6);
    }
    local_258[2] = 0;
    local_258[3] = 7;
    local_258[0] = local_258[0] & 0xffffffffffff0000;
    local_264 = 0;
    uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,&local_264);
    FUN_1400547f0(local_238,0x100,L"memory://%08X,%04X#",uVar5);
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (local_238[lVar7] != 0);
    FUN_1400549d0(param_2,local_238);
  }
  return param_2;
}



// ===== FUN_1401a9d40 @ 0x1401a9d40 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1401a9d40(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStackY_88 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  longlong local_38 [6];
  
  local_38[4] = DAT_1407502c0 ^ (ulonglong)auStackY_88;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uVar3 = FUN_140054cf0(&local_58,L"Graphics\\TexturePackIcon.png",0x1c);
  cVar1 = FUN_140040850(uVar3,&local_58);
  if (7 < uStack_40) {
    lVar2 = local_58;
    if (0xfff < uStack_40 * 2 + 2) {
      lVar2 = *(longlong *)(local_58 + -8);
      if (0x1f < (local_58 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000(lVar2);
  }
  if (cVar1 != '\0') {
    local_38[0] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    uVar3 = FUN_140054cf0(local_38,L"Graphics\\TexturePackIcon.png",0x1c);
    FUN_1400409e0(uVar3,&local_58);
    if (7 < (ulonglong)local_38[3]) {
      if (0xfff < local_38[3] * 2 + 2U) {
        if (0x1f < (local_38[0] - *(longlong *)(local_38[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      thunk_FUN_1401fe000();
    }
    *(longlong *)(param_1 + 0xc0) = local_58;
    *(undefined4 *)(param_1 + 200) = (undefined4)uStack_50;
  }
  return;
}



// ===== FUN_1401aa4c0 @ 0x1401aa4c0 [render] =====

undefined8 FUN_1401aa4c0(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  if (cVar1 != '\0') {
    return *(undefined8 *)(param_1 + 0xb8);
  }
  return DAT_1407915a8;
}



// ===== FUN_1401aa500 @ 0x1401aa500 [storage,render] =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401aa500(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  
  _DAT_1407bc214 = (int)param_2;
  lVar2 = *(longlong *)(param_1 + 0x80);
  plVar5 = (longlong *)
           ((((param_2 >> 0x10 & 0xff ^
              ((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_2 >> 8 & 0xff) *
              0x100000001b3) * 0x100000001b3 ^ (param_2 & 0xffffffff) >> 0x18) * 0x100000001b3 &
            *(ulonglong *)(param_1 + 0xa8)) * 0x10 + *(longlong *)(param_1 + 0x90));
  lVar4 = plVar5[1];
  if (lVar4 == lVar2) {
LAB_1401aa594:
    lVar4 = 0;
  }
  else {
    iVar1 = *(int *)(lVar4 + 0x10);
    while (_DAT_1407bc214 != iVar1) {
      if (lVar4 == *plVar5) goto LAB_1401aa594;
      lVar4 = *(longlong *)(lVar4 + 8);
      iVar1 = *(int *)(lVar4 + 0x10);
    }
  }
  if (lVar4 == 0) {
    lVar4 = lVar2;
  }
  if (lVar4 == lVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"Failed to select texture pack %d as it is not in the list\n",
                  param_2 & 0xffffffff);
  }
  plVar5 = *(longlong **)(lVar4 + 0x18);
  if (plVar5 == *(longlong **)(param_1 + 0xb8)) {
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"TexturePack with id %d is already selected\n",param_2 & 0xffffffff
                 );
  }
  *(longlong **)(param_1 + 0xc0) = *(longlong **)(param_1 + 0xb8);
  *(undefined1 *)(param_1 + 200) = 0;
  *(longlong **)(param_1 + 0xb8) = plVar5;
  cVar3 = (**(code **)*plVar5)(plVar5);
  if (cVar3 != '\0') {
    if (DAT_1407bb7dc == 4) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,
                    "Invalid change of App action for pad %d from %d to %d, ignoring\n",0,4,0x25);
    }
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",0,DAT_1407bb7dc,
                  0x25);
  }
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return 1;
}



// ===== FUN_1401aa7c0 @ 0x1401aa7c0 [storage,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1401aa7c0(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 ***pppuVar3;
  longlong *plVar4;
  undefined8 ****ppppuVar5;
  undefined1 auStackY_78 [32];
  undefined8 ***local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1407502c0 ^ (ulonglong)auStackY_78;
  if (param_2 == 0) {
    return 0;
  }
  local_40 = (undefined8 ***)FUN_140558c80(0x128);
  local_40 = (undefined8 ***)FUN_1401a78a0(local_40,param_3 & 0xffffff,param_2);
  lVar1 = *(longlong *)(param_1 + 0x58);
  puVar2 = *(undefined8 **)(lVar1 + 8);
  if (puVar2 == *(undefined8 **)(lVar1 + 0x10)) {
    FUN_1400491a0(lVar1,puVar2,&local_40);
  }
  else {
    *puVar2 = local_40;
    *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + 8;
  }
  pppuVar3 = local_40;
  plVar4 = (longlong *)FUN_1401aa9c0(param_1 + 0x78,&local_40);
  *(undefined8 ****)(*plVar4 + 0x18) = pppuVar3;
  local_40 = (undefined8 ****)0x0;
  uStack_38 = 0;
  local_30 = 0;
  local_28 = 0;
  FUN_140054cf0(&local_40,&PTR_140610690);
  if (7 < local_28) {
    if (0xfff < local_28 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_40 + (-8 - (longlong)local_40[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  FUN_140055000(&local_40,param_2 + 0x168);
  ppppuVar5 = &local_40;
  if (7 < local_28) {
    ppppuVar5 = (undefined8 ****)local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140054650(L"Added new FULL DLCTexturePack: %ls - id=%d\n",ppppuVar5,param_3 & 0xffffff);
}



// ===== FUN_1401aa9c0 @ 0x1401aa9c0 [render] =====

undefined8 * FUN_1401aa9c0(float *param_1,undefined8 *param_2,byte *param_3,undefined8 param_4)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  float fVar10;
  
  uVar8 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  uVar6 = uVar8 & *(ulonglong *)(param_1 + 0xc);
  puVar7 = (undefined8 *)(uVar6 * 2);
  puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + uVar6 * 0x10);
  pfVar1 = param_1 + 2;
  puVar9 = *(undefined8 **)pfVar1;
  if (puVar5 != puVar9) {
    puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 6) + uVar6 * 0x10);
    iVar2 = *(int *)(puVar5 + 2);
    puVar9 = puVar5;
    while( true ) {
      if (*(int *)param_3 == iVar2) {
        *param_2 = puVar9;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == puVar7) break;
      puVar9 = (undefined8 *)puVar9[1];
      iVar2 = *(int *)(puVar9 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140555c84("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_140558c80(0x20,puVar7,param_3,param_4,pfVar1,0);
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)param_3;
  puVar5[3] = 0;
  fVar10 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar10 && fVar10 != *param_1) {
    FUN_140048bc0(param_1);
    puVar7 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10);
    puVar9 = *(undefined8 **)pfVar1;
    if (puVar7 != puVar9) {
      iVar2 = *(int *)(puVar7 + 2);
      puVar9 = puVar7;
      while (*(int *)(puVar5 + 2) != iVar2) {
        if (puVar9 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10)
           ) goto LAB_1401aab71;
        puVar9 = (undefined8 *)puVar9[1];
        iVar2 = *(int *)(puVar9 + 2);
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_1401aab71:
  puVar7 = (undefined8 *)puVar9[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = puVar9;
  puVar5[1] = puVar7;
  *puVar7 = puVar5;
  puVar9[1] = puVar5;
  uVar8 = *(ulonglong *)(param_1 + 0xc) & uVar8;
  lVar3 = *(longlong *)(param_1 + 6);
  puVar4 = *(undefined8 **)(lVar3 + uVar8 * 0x10);
  if (puVar4 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar3 + uVar8 * 0x10) = puVar5;
  }
  else {
    if (puVar4 == puVar9) {
      *(undefined8 **)(lVar3 + uVar8 * 0x10) = puVar5;
      goto LAB_1401aabc1;
    }
    if (*(undefined8 **)(lVar3 + 8 + uVar8 * 0x10) != puVar7) goto LAB_1401aabc1;
  }
  *(undefined8 **)(lVar3 + 8 + uVar8 * 0x10) = puVar5;
LAB_1401aabc1:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// ===== FUN_1401b4610 @ 0x1401b4610 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1401b4610(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  int *piVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  BOOL BVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong *plVar16;
  char *pcVar17;
  ulonglong uVar18;
  undefined4 extraout_var;
  undefined8 *puVar19;
  int *piVar20;
  undefined8 ****ppppuVar21;
  undefined8 uVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  uint uVar25;
  undefined8 *puVar26;
  undefined4 uVar27;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined1 auStackY_308 [32];
  undefined1 local_288;
  longlong local_280;
  longlong lStack_278;
  uint local_26c;
  undefined4 *local_268;
  uint local_258 [2];
  longlong local_250;
  longlong *local_248;
  undefined4 local_240;
  code *local_238;
  longlong *local_228;
  longlong *local_218;
  longlong local_208;
  longlong *plStack_200;
  longlong *local_1f8;
  undefined8 *local_1f0;
  undefined4 *local_1e8;
  undefined4 *local_1e0;
  longlong local_1d0;
  longlong local_1c8;
  longlong *plStack_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 ***local_198;
  longlong *plStack_190;
  code *local_188;
  ulonglong local_180;
  char local_178 [256];
  ulonglong local_78;
  
  local_78 = DAT_1407502c0 ^ (ulonglong)auStackY_308;
  local_26c = 0;
  if (param_3[1] != 0) {
    LOCK();
    piVar20 = (int *)(param_3[1] + 8);
    *piVar20 = *piVar20 + 1;
    UNLOCK();
  }
  local_208 = *param_3;
  plStack_200 = (longlong *)param_3[1];
  plVar16 = (longlong *)param_1[0x1c];
  lVar3 = *plVar16;
  if (plStack_200 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_200 + 1) = (int)plStack_200[1] + 1;
    UNLOCK();
  }
  local_228 = &local_208;
  local_218 = param_4;
  local_1f8 = param_2;
  local_1f0 = param_1;
  local_1c8 = local_208;
  plStack_1c0 = plStack_200;
  local_1b8 = param_3;
  local_1b0 = param_4;
  local_1d0 = (**(code **)(lVar3 + 8))(plVar16,&local_1c8);
  plVar16 = plStack_200;
  if (plStack_200 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_200 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_200)(plStack_200);
      LOCK();
      piVar20 = (int *)((longlong)plVar16 + 0xc);
      iVar13 = *piVar20;
      *piVar20 = *piVar20 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16);
      }
    }
  }
  plVar16 = (longlong *)*param_3;
  puVar26 = *(undefined8 **)(param_1[3] + 0x18);
  if (*(int *)((longlong)plVar16 + 0x184) == -1) {
    uVar22 = puVar26[1];
  }
  else if (*(int *)((longlong)plVar16 + 0x184) == 1) {
    uVar22 = puVar26[2];
  }
  else {
    uVar22 = *puVar26;
  }
  (**(code **)(*plVar16 + 0xd0))(plVar16,uVar22);
  **(undefined8 **)(*param_3 + 0x578) = *(undefined8 *)(*param_3 + 0x58);
  plVar16 = (longlong *)
            (**(code **)(*DAT_140790368 + 0x68))(DAT_140790368,*(undefined1 *)(*param_2 + 0xca));
  if (plVar16 != (longlong *)0x0) {
    cVar11 = (**(code **)(*plVar16 + 0x40))(plVar16);
    if (cVar11 != '\0') {
      *(uint *)(*param_3 + 0x540) = *(uint *)(*param_3 + 0x540) & 0xfffffbf4 | 0x1800;
      FUN_1403141a0(*param_3 + 0x540,0x22,1);
    }
    lVar3 = plVar16[1];
    param_4 = local_218;
    if (lVar3 != 0) {
      cVar11 = (**(code **)(*plVar16 + 0x50))(plVar16);
      if (cVar11 == '\0') {
        puVar26 = (undefined8 *)(*param_3 + 0x398);
        if (7 < *(ulonglong *)(*param_3 + 0x3b0)) {
          puVar26 = (undefined8 *)*puVar26;
        }
        FUN_140568770(lVar3 + 0x10,0x20,puVar26,0xffffffffffffffff);
      }
      *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(*param_3 + 0x518);
      param_4 = local_218;
    }
  }
  if (param_3[1] != 0) {
    LOCK();
    piVar20 = (int *)(param_3[1] + 8);
    *piVar20 = *piVar20 + 1;
    UNLOCK();
  }
  local_280 = *param_3;
  lStack_278 = param_3[1];
  FUN_1401b5ef0(param_1,&local_280);
  plVar16 = (longlong *)*param_3;
  plVar4 = *(longlong **)(param_1[3] + 0x18);
  if (*(int *)((longlong)plVar16 + 0x184) == -1) {
    local_250 = plVar4[1];
  }
  else if (*(int *)((longlong)plVar16 + 0x184) == 1) {
    local_250 = plVar4[2];
  }
  else {
    local_250 = *plVar4;
  }
  local_248 = plVar16;
  FUN_140595d50(local_178,0,0x100);
  plVar4 = (longlong *)param_1[1];
  for (plVar23 = (longlong *)*param_1; plVar23 != plVar4; plVar23 = plVar23 + 2) {
    local_178[*(uint *)(*plVar23 + 0x538)] = '\x01';
  }
  local_258[0] = 0;
  pcVar17 = local_178;
  while (*pcVar17 != '\0') {
    local_258[0] = local_258[0] + 1;
    pcVar17 = pcVar17 + 1;
    if (0xff < local_258[0]) {
      local_258[0] = 0xc;
      plVar16 = (longlong *)FUN_1400b56f0(&local_198,local_258);
      local_208 = *plVar16;
      plStack_200 = (longlong *)plVar16[1];
      *plVar16 = 0;
      plVar16[1] = 0;
      uVar18 = FUN_140365aa0(param_2,&local_208);
      if (plStack_190 != (longlong *)0x0) {
        LOCK();
        puVar1 = (uint *)(plStack_190 + 1);
        uVar2 = *puVar1;
        uVar18 = (ulonglong)uVar2;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if (uVar2 == 1) {
          (**(code **)*plStack_190)(plStack_190);
          LOCK();
          puVar1 = (uint *)((longlong)plStack_190 + 0xc);
          uVar2 = *puVar1;
          uVar18 = (ulonglong)uVar2;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if (uVar2 == 1) {
            uVar18 = (**(code **)(*plStack_190 + 8))(plStack_190);
          }
        }
      }
      if ((char)param_2[0x1d] == '\0') {
        SetEvent(*(HANDLE *)(param_2[0x20] + 8));
        BVar12 = SetEvent(*(HANDLE *)(param_2[0x21] + 8));
        uVar18 = CONCAT44(extraout_var,BVar12);
        *(undefined1 *)(param_2 + 0x1d) = 1;
        if ((char)param_2[7] != '\0') {
          uVar18 = FUN_140365fb0(param_2,2);
        }
      }
      plVar16 = (longlong *)param_3[1];
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        puVar1 = (uint *)(plVar16 + 1);
        uVar2 = *puVar1;
        uVar18 = (ulonglong)uVar2;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if (uVar2 == 1) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          puVar1 = (uint *)((longlong)plVar16 + 0xc);
          uVar2 = *puVar1;
          uVar18 = (ulonglong)uVar2;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if (uVar2 == 1) {
            uVar18 = (**(code **)(*plVar16 + 8))(plVar16);
          }
        }
      }
      plVar16 = (longlong *)param_4[1];
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        puVar1 = (uint *)(plVar16 + 1);
        uVar2 = *puVar1;
        uVar18 = (ulonglong)uVar2;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if (uVar2 == 1) {
          uVar18 = (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar20 = (int *)((longlong)plVar16 + 0xc);
          iVar13 = *piVar20;
          *piVar20 = *piVar20 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            uVar18 = (**(code **)(*plVar16 + 8))(plVar16);
          }
        }
      }
      return uVar18 & 0xffffffffffffff00;
    }
  }
  *(uint *)(plVar16 + 0xa7) = local_258[0];
  (**(code **)(*(longlong *)*param_3 + 0x800))
            ((longlong *)*param_3,*(undefined4 *)(*param_4 + 0x80));
  (**(code **)(*(longlong *)*param_3 + 0x808))
            ((longlong *)*param_3,*(undefined4 *)(*param_4 + 0x84));
  puVar19 = (undefined8 *)FUN_140558c80(0x140);
  *puVar19 = 0;
  puVar19[1] = 0;
  *(undefined4 *)(puVar19 + 1) = 1;
  *(undefined4 *)((longlong)puVar19 + 0xc) = 1;
  *puVar19 = std::_Ref_count_obj2<class_PlayerConnection>::vftable;
  puVar26 = puVar19 + 2;
  if (param_3[1] != 0) {
    LOCK();
    piVar20 = (int *)(param_3[1] + 8);
    *piVar20 = *piVar20 + 1;
    UNLOCK();
  }
  local_280 = *param_3;
  lStack_278 = param_3[1];
  local_228 = puVar19;
  uVar27 = FUN_1401e69b0(puVar26,param_1[3]);
  local_1a8 = puVar26;
  local_1a0 = puVar19;
  if (local_1d0 == 0) {
    lVar3 = *param_3;
    dVar7 = (double)FUN_140578760(SUB84(*(double *)(lVar3 + 0x78) * 0.0009765625 + 0.5,0));
    local_1e8 = (undefined4 *)(ulonglong)(uint)((int)(longlong)dVar7 << 10);
    FUN_140578760(SUB84(*(double *)(lVar3 + 0x88) * 0.0009765625 + 0.5,0));
    local_248 = *(longlong **)(lVar3 + 0x340);
    local_238 = *(code **)(*local_248 + 0x28);
    plVar16 = (longlong *)**(longlong **)(local_250 + 0x198);
    if (plVar16 == (longlong *)0x0) {
      local_240 = 0xffff;
    }
    else {
      local_240 = (**(code **)(*plVar16 + 0x58))
                            (plVar16,*(undefined8 *)(lVar3 + 0x518),0,
                             (ulonglong)local_1e8 & 0xffffffff);
    }
    local_26c = 1;
    FUN_14006aaa0(&local_198,&DAT_140633be0,&local_26c);
    uVar27 = (*local_238)(local_248,9);
    plVar16 = DAT_1407bbac8;
    if (DAT_1407bbac8 != (longlong *)0x0) {
      pcVar5 = *(code **)(*DAT_1407bbac8 + 0x68);
      if (param_3[1] != 0) {
        LOCK();
        piVar20 = (int *)(param_3[1] + 8);
        *piVar20 = *piVar20 + 1;
        UNLOCK();
      }
      local_280 = *param_3;
      lStack_278 = param_3[1];
      uVar27 = (*pcVar5)(plVar16,&local_280);
    }
  }
  bVar8 = false;
  lVar3 = *param_3;
  uVar2 = 4;
  if (*(longlong *)(lVar3 + 0x3d0) == 0) {
LAB_1401b4c88:
    uVar25 = uVar2;
    bVar9 = false;
    if (bVar8) goto LAB_1401b4c95;
LAB_1401b4e22:
    if ((*(longlong *)(*param_3 + 0x3d0) != 0) &&
       (cVar11 = FUN_140038e70(uVar27,*param_3 + 0x3c0), uVar27 = extraout_XMM0_Da_02,
       cVar11 != '\0')) {
      uVar27 = FUN_140038bf0(extraout_XMM0_Da_02,*param_3 + 0x3c0);
    }
  }
  else {
    puVar24 = (undefined8 *)(lVar3 + 0x3c0);
    local_198 = (undefined8 ****)0x0;
    plStack_190 = (longlong *)0x0;
    local_188 = (code *)0x0;
    local_180 = 0;
    uVar22 = 3;
    if (*(ulonglong *)(lVar3 + 0x3d0) < 3) {
      uVar22 = *(undefined8 *)(lVar3 + 0x3d0);
    }
    if (7 < *(ulonglong *)(lVar3 + 0x3d8)) {
      puVar24 = (undefined8 *)*puVar24;
    }
    FUN_140054cf0(&local_198,puVar24,uVar22);
    bVar8 = true;
    uVar25 = 0x25;
    ppppuVar21 = &local_198;
    if (7 < local_180) {
      ppppuVar21 = (undefined8 ****)local_198;
    }
    local_238 = local_188;
    iVar13 = FUN_140054430(ppppuVar21,&DAT_14061e160);
    uVar2 = 0x25;
    if (((iVar13 == 0) && (uVar27 = extraout_XMM0_Da, local_238 == (code *)0x3)) ||
       (cVar11 = FUN_140038e70(extraout_XMM0_Da,*param_3 + 0x3c0), uVar27 = extraout_XMM0_Da_00,
       cVar11 != '\0')) goto LAB_1401b4c88;
    bVar9 = true;
LAB_1401b4c95:
    local_26c = uVar25 & 0xfffffffe;
    if (7 < local_180) {
      if ((0xfff < local_180 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_198 + (-8 - (longlong)local_198[-1]))))
      goto LAB_1401b5dd1;
      uVar27 = thunk_FUN_1401fe000();
    }
    if (!bVar9) goto LAB_1401b4e22;
    cVar11 = FUN_1401f0d30(*(undefined8 *)(param_1[3] + 8),*param_3 + 0x3c0);
    uVar27 = extraout_XMM0_Da_01;
    if (cVar11 != '\0') {
      lVar3 = *param_3;
      plVar16 = (longlong *)(lVar3 + 0x398);
      if (7 < *(ulonglong *)(lVar3 + 0x3b0)) {
        plVar16 = (longlong *)*plVar16;
      }
      puVar26 = (undefined8 *)(lVar3 + 0x3c0);
      if (7 < *(ulonglong *)(lVar3 + 0x3d8)) {
        puVar26 = (undefined8 *)*puVar26;
      }
                    /* WARNING: Subroutine does not return */
      FUN_140054650(L"Sending texture packet to get custom skin %ls from player %ls\n",puVar26,
                    plVar16);
    }
  }
  lVar3 = *param_3;
  bVar8 = false;
  if (*(longlong *)(lVar3 + 0x3f0) == 0) {
LAB_1401b4f00:
    bVar9 = bVar8;
    bVar10 = false;
  }
  else {
    puVar24 = (undefined8 *)(lVar3 + 0x3e0);
    local_198 = (undefined8 ****)0x0;
    plStack_190 = (longlong *)0x0;
    local_188 = (code *)0x0;
    local_180 = 0;
    uVar22 = 3;
    if (*(ulonglong *)(lVar3 + 0x3f0) < 3) {
      uVar22 = *(undefined8 *)(lVar3 + 0x3f0);
    }
    if (7 < *(ulonglong *)(lVar3 + 0x3f8)) {
      puVar24 = (undefined8 *)*puVar24;
    }
    FUN_140054cf0(&local_198,puVar24,uVar22);
    bVar9 = true;
    ppppuVar21 = &local_198;
    if (7 < local_180) {
      ppppuVar21 = (undefined8 ****)local_198;
    }
    local_238 = local_188;
    iVar13 = FUN_140054430(ppppuVar21,&DAT_14061e160);
    if ((iVar13 == 0) && (uVar27 = extraout_XMM0_Da_03, bVar8 = bVar9, local_238 == (code *)0x3))
    goto LAB_1401b4f00;
    cVar11 = FUN_140038e70(extraout_XMM0_Da_03,*param_3 + 0x3e0);
    bVar10 = true;
    uVar27 = extraout_XMM0_Da_04;
    bVar8 = true;
    if (cVar11 != '\0') goto LAB_1401b4f00;
  }
  if ((bVar9) && (7 < local_180)) {
    if ((0xfff < local_180 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_198 + (-8 - (longlong)local_198[-1])))) {
LAB_1401b5dd1:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    uVar27 = thunk_FUN_1401fe000();
  }
  lVar3 = *param_3;
  if (bVar10) {
    cVar11 = FUN_1401f0d30(*(undefined8 *)(param_1[3] + 8),lVar3 + 0x3e0);
    if (cVar11 != '\0') {
      lVar3 = *param_3;
      plVar16 = (longlong *)(lVar3 + 0x398);
      if (7 < *(ulonglong *)(lVar3 + 0x3b0)) {
        plVar16 = (longlong *)*plVar16;
      }
      puVar26 = (undefined8 *)(lVar3 + 0x3e0);
      if (7 < *(ulonglong *)(lVar3 + 0x3f8)) {
        puVar26 = (undefined8 *)*puVar26;
      }
                    /* WARNING: Subroutine does not return */
      FUN_140054650(L"Sending texture packet to get custom skin %ls from player %ls\n",puVar26,
                    plVar16);
    }
  }
  else if ((*(longlong *)(lVar3 + 0x3f0) != 0) &&
          (cVar11 = FUN_140038e70(uVar27,lVar3 + 0x3e0), cVar11 != '\0')) {
    FUN_140038bf0(extraout_XMM0_Da_05,*param_3 + 0x3e0,0,0);
  }
  *(undefined1 *)(*param_3 + 0x529) = *(undefined1 *)(*local_218 + 0x88);
  local_1e8 = (undefined4 *)FUN_140558c80(0xc);
  lVar3 = local_250;
  uVar27 = (**(code **)(**(longlong **)(local_250 + 0x188) + 0x20))();
  uVar14 = (**(code **)(**(longlong **)(lVar3 + 0x188) + 0x18))();
  uVar15 = (**(code **)(**(longlong **)(local_250 + 0x188) + 0x10))();
  puVar24 = local_1f0;
  *local_1e8 = uVar15;
  local_268 = local_1e8 + 1;
  *local_268 = uVar14;
  local_1e0 = local_1e8 + 2;
  *local_1e0 = uVar27;
  local_198 = (undefined8 ***)0x0;
  plStack_190 = (longlong *)0x0;
  if (param_3[1] != 0) {
    LOCK();
    piVar20 = (int *)(param_3[1] + 8);
    *piVar20 = *piVar20 + 1;
    UNLOCK();
  }
  local_280 = *param_3;
  lStack_278 = param_3[1];
  FUN_1401bacf0(local_1f0,&local_280,&local_198,local_250);
  lVar3 = *param_3;
  piVar20 = DAT_1407b94d0;
  if ((*(uint *)(lVar3 + 0x540) & 0x200) != 0) {
    piVar20 = DAT_1407b94d8;
  }
  iVar13 = *piVar20;
  piVar20 = DAT_1407b94c8;
  if ((((iVar13 != *DAT_1407b94c8) && (piVar20 = DAT_1407b94d0, iVar13 != *DAT_1407b94d0)) &&
      (piVar20 = DAT_1407b94d8, iVar13 != *DAT_1407b94d8)) &&
     (piVar20 = DAT_1407b94d0, iVar13 == *DAT_1407b94c0)) {
    piVar20 = DAT_1407b94c0;
  }
  piVar6 = *(int **)(*(longlong *)(lVar3 + 0x578) + 0x18);
  if (piVar6 != piVar20) {
    FUN_1403141a0(lVar3 + 0x540,9,*piVar6);
  }
  lVar3 = *param_3;
  LOCK();
  *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
  UNLOCK();
  *(undefined8 **)(lVar3 + 0x560) = puVar26;
  plVar16 = *(longlong **)(lVar3 + 0x568);
  *(undefined8 **)(lVar3 + 0x568) = puVar19;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar16 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar20 = (int *)((longlong)plVar16 + 0xc);
      iVar13 = *piVar20;
      *piVar20 = *piVar20 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16);
      }
    }
  }
  *(undefined1 *)(puVar19 + 0xd) = *(undefined1 *)(*local_218 + 0x71);
  puVar19[0xb] = *(undefined8 *)(*local_218 + 0x60);
  puVar19[0xc] = *(undefined8 *)(*local_218 + 0x68);
  if (*(char *)(*local_218 + 0x71) != '\0') {
    piVar20 = (int *)(puVar24[3] + 0xe8);
    *piVar20 = *piVar20 + 1;
  }
  if (param_3[1] != 0) {
    LOCK();
    piVar20 = (int *)(param_3[1] + 8);
    *piVar20 = *piVar20 + 1;
    UNLOCK();
  }
  local_280 = *param_3;
  lStack_278 = param_3[1];
  FUN_1401bb3b0(puVar24,&local_280);
  local_288 = 0;
  if ((*local_1f8 != 0) &&
     (plVar16 = (longlong *)
                (**(code **)(*DAT_140790368 + 0x68))
                          (DAT_140790368,*(undefined1 *)(*local_1f8 + 0xca)),
     plVar16 != (longlong *)0x0)) {
    local_288 = (**(code **)(*plVar16 + 8))(plVar16);
  }
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"RECONNECT: placeNewPlayer smallId=%d entityId=%d dim=%d\n",local_288
                ,*(undefined4 *)(*param_3 + 0x18));
}



// ===== FUN_1401b5ef0 @ 0x1401b5ef0 [render] =====

void FUN_1401b5ef0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"Original pos is %f, %f, %f in dimension %d\n",
                *(undefined8 *)(lVar1 + 0x78),*(undefined8 *)(lVar1 + 0x80),
                *(undefined8 *)(lVar1 + 0x88),*(undefined4 *)(lVar1 + 0x184));
}



// ===== FUN_1401b9df0 @ 0x1401b9df0 [render] =====

void FUN_1401b9df0(longlong *param_1,undefined8 *param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  longlong *local_30;
  
  uVar7 = 0;
  lVar8 = *param_1;
  if (param_1[1] - lVar8 >> 4 != 0) {
    do {
      lVar4 = *(longlong *)(lVar8 + 8 + uVar7 * 0x10);
      if (lVar4 != 0) {
        LOCK();
        piVar1 = (int *)(lVar4 + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_38 = *(longlong *)(lVar8 + uVar7 * 0x10);
      plVar5 = *(longlong **)(lVar8 + 8 + uVar7 * 0x10);
      local_30 = plVar5;
      if (*(int *)(local_38 + 0x184) == param_3) {
        uVar6 = *(undefined8 *)(local_38 + 0x560);
        if (param_2[1] != 0) {
          LOCK();
          piVar1 = (int *)(param_2[1] + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_48 = *param_2;
        uStack_40 = param_2[1];
        FUN_1401e92d0(uVar6,&local_48);
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      lVar8 = *param_1;
    } while (uVar7 < (ulonglong)(param_1[1] - lVar8 >> 4));
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



// ===== FUN_1401bacf0 @ 0x1401bacf0 [render] =====

void FUN_1401bacf0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*param_3 == 0) {
    lVar6 = *(longlong *)(param_1 + 0xf0);
    if (lVar6 == 0) goto LAB_1401bad3f;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(*param_3 + 0x578) + 0x18);
  }
  FUN_1401dda80(*(undefined8 *)(*param_2 + 0x578),lVar6);
LAB_1401bad3f:
  lVar6 = *(longlong *)(*param_2 + 0x578);
  lVar5 = (**(code **)(**(longlong **)(param_4 + 0x188) + 0x158))();
  lVar7 = *(longlong *)(lVar6 + 0x18);
  if (*(longlong *)(lVar6 + 0x18) == DAT_1407b94c8) {
    *(longlong *)(lVar6 + 0x18) = lVar5;
    lVar7 = lVar5;
  }
  FUN_1401dda80(lVar6,lVar7);
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}



// ===== FUN_1401bb3b0 @ 0x1401bb3b0 [render] =====

void FUN_1401bb3b0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  lVar1 = *param_2;
  if (*(int *)(lVar1 + 0x184) == -1) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if (*(int *)(lVar1 + 0x184) == 1) {
      uVar2 = 2;
    }
  }
  puVar3 = (undefined8 *)(lVar1 + 0x398);
  if (7 < *(ulonglong *)(lVar1 + 0x3b0)) {
    puVar3 = (undefined8 *)*puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"Requesting add player %ls as primary in dimension %d\n",puVar3,uVar2
               );
}



// ===== FUN_1401e69b0 @ 0x1401e69b0 [render] =====

undefined8 *
FUN_1401e69b0(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  *param_1 = PlayerConnection::vftable;
  param_1[1] = PlayerConnection::vftable;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  lVar6 = FUN_140558c80(0x18);
  *(longlong *)lVar6 = lVar6;
  *(longlong *)(lVar6 + 8) = lVar6;
  param_1[0x1a] = lVar6;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 7;
  param_1[0x20] = 8;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  FUN_14004bae0(param_1 + 0x1c,0x10,param_1[0x1a]);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[0xf] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xc] = param_2;
  param_1[2] = param_3;
  *(undefined8 **)(param_3 + 0xe0) = param_1;
  if (param_4[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_4[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar3 = param_4[1];
  param_1[0xd] = *param_4;
  plVar4 = (longlong *)param_1[0xe];
  param_1[0xe] = uVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  if (((longlong *)param_1[2] != (longlong *)0x0) && (lVar6 = *(longlong *)param_1[2], lVar6 != 0))
  {
    *(undefined1 *)((longlong)param_1 + 0xa1) = *(undefined1 *)(lVar6 + 0xca);
  }
  iVar5 = FUN_14003e910();
  *(bool *)(param_1[0xd] + 0x528) = iVar5 != 0;
  plVar4 = (longlong *)param_4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return param_1;
}



// ===== FUN_1401e9fb0 @ 0x1401e9fb0 [render] =====

void FUN_1401e9fb0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  plVar2 = (longlong *)(lVar1 + 0x28);
  if (*(int *)(lVar1 + 0x50) == 0) {
    if (7 < *(ulonglong *)(lVar1 + 0x40)) {
      plVar2 = (longlong *)*plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140054650(L"Server received request for custom texture %ls\n",plVar2);
  }
  if (7 < *(ulonglong *)(lVar1 + 0x40)) {
    plVar2 = (longlong *)*plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140054650(L"Server received custom texture %ls\n",plVar2);
}



// ===== FUN_1401ea2e0 @ 0x1401ea2e0 [render] =====

void FUN_1401ea2e0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  plVar2 = (longlong *)(lVar1 + 0x28);
  if (*(int *)(lVar1 + 0x58) == 0) {
    if (7 < *(ulonglong *)(lVar1 + 0x40)) {
      plVar2 = (longlong *)*plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140054650(L"Server received request for custom texture %ls\n",plVar2);
  }
  if (7 < *(ulonglong *)(lVar1 + 0x40)) {
    plVar2 = (longlong *)*plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140054650(L"Server received custom texture %ls and geometry\n",plVar2);
}



// ===== FUN_1401eaee0 @ 0x1401eaee0 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1401eaee0(undefined4 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong *puVar9;
  longlong in_RCX;
  undefined8 ****ppppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  bool bVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 auStackY_a8 [32];
  ulonglong local_78;
  ulonglong uStack_70;
  longlong *local_68;
  undefined8 ***local_60;
  longlong *plStack_58;
  longlong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1407502c0 ^ (ulonglong)auStackY_a8;
  bVar13 = false;
  local_78 = local_78 & 0xffffffff00000000;
  lVar3 = *param_2;
  local_68 = param_2;
  if (*(int *)(lVar3 + 0x2c) == 0) {
    plVar14 = *(longlong **)(in_RCX + 0x68);
    pcVar4 = *(code **)(*plVar14 + 0x800);
    uVar7 = FUN_140040360(lVar3 + 0x30);
    (*pcVar4)(plVar14,uVar7);
    lVar3 = *(longlong *)(in_RCX + 0x68);
    plVar14 = (longlong *)(lVar3 + 0x3c0);
    if (7 < *(ulonglong *)(lVar3 + 0x3d8)) {
      plVar14 = (longlong *)*plVar14;
    }
    puVar11 = (undefined8 *)(lVar3 + 0x398);
    if (7 < *(ulonglong *)(lVar3 + 0x3b0)) {
      puVar11 = (undefined8 *)*puVar11;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140054650(L"Skin for server player %ls has changed to %ls (%d)\n",puVar11,plVar14,
                  *(undefined4 *)(lVar3 + 0x52c));
  }
  if (*(int *)(lVar3 + 0x2c) == 1) {
    plVar14 = *(longlong **)(in_RCX + 0x68);
    pcVar4 = *(code **)(*plVar14 + 0x808);
    uVar7 = FUN_140040360(lVar3 + 0x30);
    (*pcVar4)(plVar14,uVar7);
    lVar3 = *(longlong *)(in_RCX + 0x68);
    plVar14 = (longlong *)(lVar3 + 0x3e0);
    if (7 < *(ulonglong *)(lVar3 + 0x3f8)) {
      plVar14 = (longlong *)*plVar14;
    }
    puVar11 = (undefined8 *)(lVar3 + 0x398);
    if (7 < *(ulonglong *)(lVar3 + 0x3b0)) {
      puVar11 = (undefined8 *)*puVar11;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140054650(L"Cape for server player %ls has changed to %ls\n",puVar11,plVar14);
  }
  lVar3 = *param_2;
  if (*(longlong *)(lVar3 + 0x40) != 0) {
    puVar11 = (undefined8 *)(lVar3 + 0x30);
    local_60 = (undefined8 ****)0x0;
    plStack_58 = (longlong *)0x0;
    local_50 = 0;
    local_48 = 0;
    bVar13 = true;
    uVar15 = 3;
    if (*(ulonglong *)(lVar3 + 0x40) < 3) {
      uVar15 = *(undefined8 *)(lVar3 + 0x40);
    }
    if (7 < *(ulonglong *)(lVar3 + 0x48)) {
      puVar11 = (undefined8 *)*puVar11;
    }
    FUN_140054cf0(&local_60,puVar11,uVar15);
    lVar3 = local_50;
    ppppuVar10 = &local_60;
    if (7 < local_48) {
      ppppuVar10 = (undefined8 ****)local_60;
    }
    iVar8 = FUN_140054430(ppppuVar10,&DAT_14061e160);
    if (((iVar8 != 0) || (param_1 = extraout_XMM0_Da, lVar3 != 3)) &&
       (cVar6 = FUN_140038e70(extraout_XMM0_Da,*param_2 + 0x30), param_1 = extraout_XMM0_Da_00,
       cVar6 == '\0')) {
      bVar5 = true;
      goto LAB_1401eb05d;
    }
  }
  bVar5 = false;
LAB_1401eb05d:
  if ((bVar13) && (7 < local_48)) {
    if ((0xfff < local_48 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)local_60[-1])))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    param_1 = thunk_FUN_1401fe000();
  }
  lVar3 = *param_2;
  if (bVar5) {
    cVar6 = FUN_1401f0d30(*(undefined8 *)(*(longlong *)(in_RCX + 0x60) + 8),lVar3 + 0x30);
    if (cVar6 != '\0') {
      puVar11 = (undefined8 *)(*(longlong *)(in_RCX + 0x68) + 0x398);
      if (7 < *(ulonglong *)(*(longlong *)(in_RCX + 0x68) + 0x3b0)) {
        puVar11 = (undefined8 *)*puVar11;
      }
      puVar12 = (undefined8 *)(*param_2 + 0x30);
      if (7 < *(ulonglong *)(*param_2 + 0x48)) {
        puVar12 = (undefined8 *)*puVar12;
      }
                    /* WARNING: Subroutine does not return */
      FUN_140054650(L"Sending texture packet to get custom skin %ls from player %ls\n",puVar12,
                    puVar11);
    }
  }
  else if ((*(longlong *)(lVar3 + 0x40) != 0) &&
          (cVar6 = FUN_140038e70(param_1,lVar3 + 0x30), cVar6 != '\0')) {
    FUN_140038bf0(extraout_XMM0_Da_01,*param_2 + 0x30,0,0);
  }
  uVar15 = *(undefined8 *)(*(longlong *)(in_RCX + 0x60) + 0x28);
  uVar7 = *(undefined4 *)(*(longlong *)(in_RCX + 0x68) + 0x184);
  puVar9 = (ulonglong *)
           FUN_1401efb70(&local_60,(longlong *)(in_RCX + 0x68),*param_2 + 0x2c,*param_2 + 0x30);
  local_78 = *puVar9;
  uStack_70 = puVar9[1];
  *puVar9 = 0;
  puVar9[1] = 0;
  FUN_1401b9df0(uVar15,&local_78,uVar7);
  plVar14 = plStack_58;
  if (plStack_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_58 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_58)(plStack_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14);
      }
    }
  }
  plVar14 = (longlong *)param_2[1];
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar14 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14);
      }
    }
  }
  return;
}



// ===== FUN_1401eb2f0 @ 0x1401eb2f0 [render] =====

void FUN_1401eb2f0(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [48];
  undefined4 local_78;
  longlong *local_68;
  ulonglong local_40;
  
  local_40 = DAT_1407502c0 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  plVar5 = *(longlong **)(param_1 + 0x68);
  pcVar1 = *(code **)(*plVar5 + 0x800);
  local_68 = param_2;
  uVar3 = FUN_140040360(*param_2 + 0x30);
  (*pcVar1)(plVar5,uVar3);
  lVar2 = *(longlong *)(param_1 + 0x68);
  plVar5 = (longlong *)(lVar2 + 0x3c0);
  if (7 < *(ulonglong *)(lVar2 + 0x3d8)) {
    plVar5 = (longlong *)*plVar5;
  }
  puVar4 = (undefined8 *)(lVar2 + 0x398);
  if (7 < *(ulonglong *)(lVar2 + 0x3b0)) {
    puVar4 = (undefined8 *)*puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140054650(L"PlayerConnection::handleTextureAndGeometryChange - Skin for server player %ls has changed to %ls (%d)\n"
                ,puVar4,plVar5,*(undefined4 *)(lVar2 + 0x52c));
}



// ===== FUN_1401efb70 @ 0x1401efb70 [render] =====

undefined8 *
FUN_1401efb70(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar7 = (undefined8 *)FUN_140558c80(0x60);
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined4 *)(puVar7 + 1) = 1;
  *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
  *puVar7 = std::_Ref_count_obj2<class_TextureChangePacket>::vftable;
  plVar5 = puVar7 + 2;
  uVar3 = *param_3;
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_40 = *param_2;
  uStack_38 = param_2[1];
  FUN_1403f9ac0(plVar5,&local_40,uVar3,param_4);
  *param_1 = plVar5;
  param_1[1] = puVar7;
  if ((plVar5 != (longlong *)0x0) && ((puVar7[6] == 0 || (*(int *)(puVar7[6] + 8) == 0)))) {
    LOCK();
    *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
    UNLOCK();
    plVar4 = (longlong *)param_1[1];
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar8 = plVar4;
      plVar9 = plVar5;
    }
    puVar7[5] = plVar9;
    plVar5 = (longlong *)puVar7[6];
    puVar7[6] = plVar8;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
  }
  return param_1;
}



// ===== FUN_1401f0d30 @ 0x1401f0d30 [render] =====

undefined4 FUN_1401f0d30(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x68);
  for (puVar5 = *(undefined8 **)(param_1 + 0x60); puVar5 != puVar1; puVar5 = puVar5 + 4) {
    puVar4 = param_2;
    if (7 < (ulonglong)param_2[3]) {
      puVar4 = (undefined8 *)*param_2;
    }
    puVar3 = puVar5;
    if (7 < (ulonglong)puVar5[3]) {
      puVar3 = (undefined8 *)*puVar5;
    }
    if ((puVar5[2] == param_2[2]) &&
       ((puVar5[2] == 0 || (iVar2 = FUN_140054430(puVar3,puVar4), iVar2 == 0)))) break;
  }
  if (puVar5 == *(undefined8 **)(param_1 + 0x68)) {
    FUN_1400481a0(param_1 + 0x60,param_2);
  }
  return 1;
}



// ===== FUN_1402620f0 @ 0x1402620f0 [ui,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402620f0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStackY_88 [32];
  ulonglong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1407502c0 ^ (ulonglong)auStackY_88;
  if ((*(int *)(param_1 + 0x1b4) == *(int *)(param_1 + 0x1b8)) &&
     ((DAT_140751dfc != 1 || (DAT_140751df8 != 0)))) {
    DAT_140751dfc = 1;
    DAT_140751df8 = 0;
    *(undefined4 *)(param_1 + 0x1b8) = 1;
    plVar2 = DAT_1407bb5f8;
    for (plVar6 = DAT_1407bb5f0; plVar6 != plVar2; plVar6 = plVar6 + 1) {
      lVar3 = *plVar6;
      if (*(longlong *)(lVar3 + 0x98) - *(longlong *)(lVar3 + 0x90) >> 3 != 0) {
        local_50 = 0;
        uStack_48 = 0;
        local_40 = 0;
        local_38 = 0;
        FUN_140054cf0(&local_50,L"languages.loc",0xd);
        lVar3 = FUN_140059bf0(lVar3,6,&local_50);
        if (7 < local_38) {
          if ((0xfff < local_38 * 2 + 2) && (0x1f < (local_50 - *(longlong *)(local_50 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          thunk_FUN_1401fe000();
        }
        local_40 = 0;
        local_38 = 7;
        local_50 = local_50 & 0xffffffffffff0000;
        lVar3 = *(longlong *)(lVar3 + 0x38);
        FUN_140070170(lVar3 + 8);
        lVar5 = *(longlong *)(lVar3 + 0x48);
        lVar1 = *(longlong *)(lVar3 + 0x50);
        if (lVar5 != lVar1) {
          do {
            FUN_140055150(lVar5);
            lVar5 = lVar5 + 0x20;
          } while (lVar5 != lVar1);
          *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(lVar3 + 0x48);
        }
        FUN_14006f900(lVar3);
      }
    }
    FUN_140037b30();
    if (*(int *)(param_1 + 0x1b8) != *(int *)(param_1 + 0x1b4)) {
      pcVar4 = "[UIController] Font switch required for language transition to %i.\n";
      if (*(int *)(param_1 + 0x1b4) == 0) {
        pcVar4 = "[UIController] Initialising font for language %i.\n";
      }
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,pcVar4,1);
    }
    if (DAT_1407bb76c != '\0') {
      if (DAT_1407bb7dc == 4) {
                    /* WARNING: Subroutine does not return */
        FUN_14002fe50(&DAT_1407bb5d0,
                      "Invalid change of App action for pad %d from %d to %d, ignoring\n",0,4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",0);
    }
  }
  return;
}



// ===== FUN_140262a80 @ 0x140262a80 [ui,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140262a80(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 ****ppppuVar4;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Da_17;
  undefined4 extraout_XMM0_Da_18;
  undefined4 extraout_XMM0_Da_19;
  undefined4 extraout_XMM0_Da_20;
  undefined1 auStackY_98 [32];
  undefined8 local_68 [2];
  ulonglong local_58 [4];
  undefined8 ***local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1407502c0 ^ (ulonglong)auStackY_98;
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140054cf0(&local_38,L"platformskinHD.swf",0x12);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar5 = FUN_140054cf0(local_58,L"skinHDWin.swf");
  uVar3 = 0xffffffff;
  uVar2 = 0xffffffff;
  if (local_58[2] != 0) {
    cVar1 = FUN_140040850(uVar5,local_58);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      FUN_1400409e0(extraout_XMM0_Da,local_68,local_58);
      ppppuVar4 = &local_38;
      if (7 < uStack_20) {
        ppppuVar4 = (undefined8 ****)local_38;
      }
      uVar2 = IggyLibraryCreateFromMemoryUTF16(ppppuVar4,local_68[0]);
      thunk_FUN_1401fe000(local_68[0]);
    }
  }
  _DAT_1407bd870 = uVar2;
  if (7 < local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[2] = 0;
  local_58[3] = 7;
  local_58[0] = local_58[0] & 0xffffffffffff0000;
  if (7 < uStack_20) {
    if (0xfff < uStack_20 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)local_38[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140054cf0(&local_38,L"platformskin.swf",0x10);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar5 = FUN_140054cf0(local_58,L"skinWin.swf");
  uVar2 = 0xffffffff;
  if (local_58[2] != 0) {
    cVar1 = FUN_140040850(uVar5,local_58);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      FUN_1400409e0(extraout_XMM0_Da_00,local_68,local_58);
      ppppuVar4 = &local_38;
      if (7 < uStack_20) {
        ppppuVar4 = (undefined8 ****)local_38;
      }
      uVar2 = IggyLibraryCreateFromMemoryUTF16(ppppuVar4,local_68[0]);
      thunk_FUN_1401fe000(local_68[0]);
    }
  }
  _DAT_1407bd89c = uVar2;
  if (7 < local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[2] = 0;
  local_58[3] = 7;
  local_58[0] = local_58[0] & 0xffffffffffff0000;
  if (7 < uStack_20) {
    if (0xfff < uStack_20 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)local_38[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140054cf0(&local_38,L"skinGraphics.swf",0x10);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar6 = FUN_140054cf0(local_58,L"skinGraphics.swf");
  uVar5 = 0xffffffff;
  uVar2 = uVar5;
  if (local_58[2] != 0) {
    cVar1 = FUN_140040850(uVar6,local_58);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      FUN_1400409e0(extraout_XMM0_Da_01,local_68,local_58);
      ppppuVar4 = &local_38;
      if (7 < uStack_20) {
        ppppuVar4 = (undefined8 ****)local_38;
      }
      uVar2 = IggyLibraryCreateFromMemoryUTF16(ppppuVar4,local_68[0]);
      thunk_FUN_1401fe000(local_68[0]);
    }
  }
  _DAT_1407bd8a0 = uVar2;
  if (7 < local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[2] = 0;
  local_58[3] = 7;
  local_58[0] = local_58[0] & 0xffffffffffff0000;
  if (7 < uStack_20) {
    if (0xfff < uStack_20 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)local_38[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140054cf0(&local_38,L"skinGraphicsHud.swf",0x13);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar6 = FUN_140054cf0(local_58,L"skinGraphicsHud.swf");
  uVar2 = uVar5;
  if (local_58[2] != 0) {
    cVar1 = FUN_140040850(uVar6,local_58);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      FUN_1400409e0(extraout_XMM0_Da_02,local_68,local_58);
      ppppuVar4 = &local_38;
      if (7 < uStack_20) {
        ppppuVar4 = (undefined8 ****)local_38;
      }
      uVar2 = IggyLibraryCreateFromMemoryUTF16(ppppuVar4,local_68[0]);
      thunk_FUN_1401fe000(local_68[0]);
    }
  }
  _DAT_1407bd8a4 = uVar2;
  if (7 < local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[2] = 0;
  local_58[3] = 7;
  local_58[0] = local_58[0] & 0xffffffffffff0000;
  if (7 < uStack_20) {
    if (0xfff < uStack_20 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)local_38[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140054cf0(&local_38,L"skinGraphicsInGame.swf",0x16);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar6 = FUN_140054cf0(local_58,L"skinGraphicsInGame.swf");
  uVar2 = uVar5;
  if (local_58[2] != 0) {
    cVar1 = FUN_140040850(uVar6,local_58);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      FUN_1400409e0(extraout_XMM0_Da_03,local_68,local_58);
      ppppuVar4 = &local_38;
      if (7 < uStack_20) {
        ppppuVar4 = (undefined8 ****)local_38;
      }
      uVar2 = IggyLibraryCreateFromMemoryUTF16(ppppuVar4,local_68[0]);
      thunk_FUN_1401fe000(local_68[0]);
    }
  }
  _DAT_1407bd8a8 = uVar2;
  if (7 < local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[2] = 0;
  local_58[3] = 7;
  local_58[0] = local_58[0] & 0xffffffffffff0000;
  if (7 < uStack_20) {
    if (0xfff < uStack_20 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)local_38[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140054cf0(&local_38,L"skinGraphicsTooltips.swf",0x18);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar2 = FUN_140054cf0(local_58,L"skinGraphicsTooltips.swf");
  if (local_58[2] != 0) {
    cVar1 = FUN_140040850(uVar2,local_58);
    uVar5 = 0xffffffff;
    if (cVar1 != '\0') {
      FUN_1400409e0(extraout_XMM0_Da_04,local_68,local_58);
      ppppuVar4 = &local_38;
      if (7 < uStack_20) {
        ppppuVar4 = (undefined8 ****)local_38;
      }
      uVar5 = IggyLibraryCreateFromMemoryUTF16(ppppuVar4,local_68[0]);
      thunk_FUN_1401fe000(local_68[0]);
    }
  }
  _DAT_1407bd8ac = uVar5;
  if (7 < local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[2] = 0;
  local_58[3] = 7;
  local_58[0] = local_58[0] & 0xffffffffffff0000;
  if (7 < uStack_20) {
    if (0xfff < uStack_20 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)local_38[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140054cf0(&local_38,L"skinGraphicsLabels.swf",0x16);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar6 = FUN_140054cf0(local_58,L"skinGraphicsLabels.swf");
  uVar5 = 0xffffffff;
  uVar2 = uVar5;
  if (local_58[2] != 0) {
    cVar1 = FUN_140040850(uVar6,local_58);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      FUN_1400409e0(extraout_XMM0_Da_05,local_68,local_58);
      ppppuVar4 = &local_38;
      if (7 < uStack_20) {
        ppppuVar4 = (undefined8 ****)local_38;
      }
      uVar2 = IggyLibraryCreateFromMemoryUTF16(ppppuVar4,local_68[0]);
      thunk_FUN_1401fe000(local_68[0]);
    }
  }
  _DAT_1407bd8b0 = uVar2;
  if (7 < local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[2] = 0;
  local_58[3] = 7;
  local_58[0] = local_58[0] & 0xffffffffffff0000;
  if (7 < uStack_20) {
    if (0xfff < uStack_20 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)local_38[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140054cf0(&local_38,L"skinLabels.swf",0xe);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar6 = FUN_140054cf0(local_58,L"skinLabels.swf");
  uVar2 = uVar5;
  if (local_58[2] != 0) {
    cVar1 = FUN_140040850(uVar6,local_58);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      FUN_1400409e0(extraout_XMM0_Da_06,local_68,local_58);
      ppppuVar4 = &local_38;
      if (7 < uStack_20) {
        ppppuVar4 = (undefined8 ****)local_38;
      }
      uVar2 = IggyLibraryCreateFromMemoryUTF16(ppppuVar4,local_68[0]);
      thunk_FUN_1401fe000(local_68[0]);
    }
  }
  _DAT_1407bd8b4 = uVar2;
  if (7 < local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[2] = 0;
  local_58[3] = 7;
  local_58[0] = local_58[0] & 0xffffffffffff0000;
  if (7 < uStack_20) {
    if (0xfff < uStack_20 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)local_38[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140054cf0(&local_38,L"skinInGame.swf",0xe);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar6 = FUN_140054cf0(local_58,L"skinInGame.swf");
  uVar2 = uVar5;
  if (local_58[2] != 0) {
    cVar1 = FUN_140040850(uVar6,local_58);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      FUN_1400409e0(extraout_XMM0_Da_07,local_68,local_58);
      ppppuVar4 = &local_38;
      if (7 < uStack_20) {
        ppppuVar4 = (undefined8 ****)local_38;
      }
      uVar2 = IggyLibraryCreateFromMemoryUTF16(ppppuVar4,local_68[0]);
      thunk_FUN_1401fe000(local_68[0]);
    }
  }
  _DAT_1407bd8b8 = uVar2;
  if (7 < local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[2] = 0;
  local_58[3] = 7;
  local_58[0] = local_58[0] & 0xffffffffffff0000;
  if (7 < uStack_20) {
    if (0xfff < uStack_20 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)local_38[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140054cf0(&local_38,L"skinHud.swf",0xb);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar6 = FUN_140054cf0(local_58,L"skinHud.swf");
  uVar2 = uVar5;
  if (local_58[2] != 0) {
    cVar1 = FUN_140040850(uVar6,local_58);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      FUN_1400409e0(extraout_XMM0_Da_08,local_68,local_58);
      ppppuVar4 = &local_38;
      if (7 < uStack_20) {
        ppppuVar4 = (undefined8 ****)local_38;
      }
      uVar2 = IggyLibraryCreateFromMemoryUTF16(ppppuVar4,local_68[0]);
      thunk_FUN_1401fe000(local_68[0]);
    }
  }
  _DAT_1407bd8bc = uVar2;
  if (7 < local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[2] = 0;
  local_58[3] = 7;
  local_58[0] = local_58[0] & 0xffffffffffff0000;
  if (7 < uStack_20) {
    if (0xfff < uStack_20 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)local_38[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140054cf0(&local_38,L"skinTooltips.swf",0x10);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar6 = FUN_140054cf0(local_58,L"skinTooltips.swf");
  uVar2 = uVar5;
  if (local_58[2] != 0) {
    cVar1 = FUN_140040850(uVar6,local_58);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      FUN_1400409e0(extraout_XMM0_Da_09,local_68,local_58);
      ppppuVar4 = &local_38;
      if (7 < uStack_20) {
        ppppuVar4 = (undefined8 ****)local_38;
      }
      uVar2 = IggyLibraryCreateFromMemoryUTF16(ppppuVar4,local_68[0]);
      thunk_FUN_1401fe000(local_68[0]);
    }
  }
  DAT_1407bd8c0 = uVar2;
  if (7 < local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[2] = 0;
  local_58[3] = 7;
  local_58[0] = local_58[0] & 0xffffffffffff0000;
  if (7 < uStack_20) {
    if (0xfff < uStack_20 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)local_38[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140054cf0(&local_38,L"skin.swf",8);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar6 = FUN_140054cf0(local_58,L"skin.swf");
  uVar2 = uVar5;
  if (local_58[2] != 0) {
    cVar1 = FUN_140040850(uVar6,local_58);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      FUN_1400409e0(extraout_XMM0_Da_10,local_68,local_58);
      ppppuVar4 = &local_38;
      if (7 < uStack_20) {
        ppppuVar4 = (undefined8 ****)local_38;
      }
      uVar2 = IggyLibraryCreateFromMemoryUTF16(ppppuVar4,local_68[0]);
      thunk_FUN_1401fe000(local_68[0]);
    }
  }
  DAT_1407bd8c4 = uVar2;
  if (7 < local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[2] = 0;
  local_58[3] = 7;
  local_58[0] = local_58[0] & 0xffffffffffff0000;
  if (7 < uStack_20) {
    if (0xfff < uStack_20 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)local_38[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140054cf0(&local_38,L"skinHDGraphics.swf",0x12);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar6 = FUN_140054cf0(local_58,L"skinHDGraphics.swf");
  uVar2 = uVar5;
  if (local_58[2] != 0) {
    cVar1 = FUN_140040850(uVar6,local_58);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      FUN_1400409e0(extraout_XMM0_Da_11,local_68,local_58);
      ppppuVar4 = &local_38;
      if (7 < uStack_20) {
        ppppuVar4 = (undefined8 ****)local_38;
      }
      uVar2 = IggyLibraryCreateFromMemoryUTF16(ppppuVar4,local_68[0]);
      thunk_FUN_1401fe000(local_68[0]);
    }
  }
  _DAT_1407bd874 = uVar2;
  if (7 < local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[2] = 0;
  local_58[3] = 7;
  local_58[0] = local_58[0] & 0xffffffffffff0000;
  if (7 < uStack_20) {
    if (0xfff < uStack_20 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)local_38[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140054cf0(&local_38,L"skinHDGraphicsHud.swf",0x15);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar2 = FUN_140054cf0(local_58,L"skinHDGraphicsHud.swf");
  if (local_58[2] != 0) {
    cVar1 = FUN_140040850(uVar2,local_58);
    uVar5 = 0xffffffff;
    if (cVar1 != '\0') {
      FUN_1400409e0(extraout_XMM0_Da_12,local_68,local_58);
      ppppuVar4 = &local_38;
      if (7 < uStack_20) {
        ppppuVar4 = (undefined8 ****)local_38;
      }
      uVar5 = IggyLibraryCreateFromMemoryUTF16(ppppuVar4,local_68[0]);
      thunk_FUN_1401fe000(local_68[0]);
    }
  }
  _DAT_1407bd878 = uVar5;
  if (7 < local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[2] = 0;
  local_58[3] = 7;
  local_58[0] = local_58[0] & 0xffffffffffff0000;
  if (7 < uStack_20) {
    if (0xfff < uStack_20 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)local_38[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140054cf0(&local_38,L"skinHDGraphicsInGame.swf",0x18);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar6 = FUN_140054cf0(local_58,L"skinHDGraphicsInGame.swf");
  uVar5 = 0xffffffff;
  uVar2 = uVar5;
  if (local_58[2] != 0) {
    cVar1 = FUN_140040850(uVar6,local_58);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      FUN_1400409e0(extraout_XMM0_Da_13,local_68,local_58);
      ppppuVar4 = &local_38;
      if (7 < uStack_20) {
        ppppuVar4 = (undefined8 ****)local_38;
      }
      uVar2 = IggyLibraryCreateFromMemoryUTF16(ppppuVar4,local_68[0]);
      thunk_FUN_1401fe000(local_68[0]);
    }
  }
  _DAT_1407bd87c = uVar2;
  if (7 < local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[2] = 0;
  local_58[3] = 7;
  local_58[0] = local_58[0] & 0xffffffffffff0000;
  if (7 < uStack_20) {
    if (0xfff < uStack_20 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)local_38[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140054cf0(&local_38,L"skinHDGraphicsTooltips.swf",0x1a);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar6 = FUN_140054cf0(local_58,L"skinHDGraphicsTooltips.swf");
  uVar2 = uVar5;
  if (local_58[2] != 0) {
    cVar1 = FUN_140040850(uVar6,local_58);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      FUN_1400409e0(extraout_XMM0_Da_14,local_68,local_58);
      ppppuVar4 = &local_38;
      if (7 < uStack_20) {
        ppppuVar4 = (undefined8 ****)local_38;
      }
      uVar2 = IggyLibraryCreateFromMemoryUTF16(ppppuVar4,local_68[0]);
      thunk_FUN_1401fe000(local_68[0]);
    }
  }
  _DAT_1407bd880 = uVar2;
  if (7 < local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[2] = 0;
  local_58[3] = 7;
  local_58[0] = local_58[0] & 0xffffffffffff0000;
  if (7 < uStack_20) {
    if (0xfff < uStack_20 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)local_38[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140054cf0(&local_38,L"skinHDGraphicsLabels.swf",0x18);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar6 = FUN_140054cf0(local_58,L"skinHDGraphicsLabels.swf");
  uVar2 = uVar5;
  if (local_58[2] != 0) {
    cVar1 = FUN_140040850(uVar6,local_58);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      FUN_1400409e0(extraout_XMM0_Da_15,local_68,local_58);
      ppppuVar4 = &local_38;
      if (7 < uStack_20) {
        ppppuVar4 = (undefined8 ****)local_38;
      }
      uVar2 = IggyLibraryCreateFromMemoryUTF16(ppppuVar4,local_68[0]);
      thunk_FUN_1401fe000(local_68[0]);
    }
  }
  _DAT_1407bd884 = uVar2;
  if (7 < local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[2] = 0;
  local_58[3] = 7;
  local_58[0] = local_58[0] & 0xffffffffffff0000;
  if (7 < uStack_20) {
    if (0xfff < uStack_20 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)local_38[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140054cf0(&local_38,L"skinHDLabels.swf",0x10);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar6 = FUN_140054cf0(local_58,L"skinHDLabels.swf");
  uVar2 = uVar5;
  if (local_58[2] != 0) {
    cVar1 = FUN_140040850(uVar6,local_58);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      FUN_1400409e0(extraout_XMM0_Da_16,local_68,local_58);
      ppppuVar4 = &local_38;
      if (7 < uStack_20) {
        ppppuVar4 = (undefined8 ****)local_38;
      }
      uVar2 = IggyLibraryCreateFromMemoryUTF16(ppppuVar4,local_68[0]);
      thunk_FUN_1401fe000(local_68[0]);
    }
  }
  _DAT_1407bd888 = uVar2;
  if (7 < local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[2] = 0;
  local_58[3] = 7;
  local_58[0] = local_58[0] & 0xffffffffffff0000;
  if (7 < uStack_20) {
    if (0xfff < uStack_20 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)local_38[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140054cf0(&local_38,L"skinHDInGame.swf",0x10);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar6 = FUN_140054cf0(local_58,L"skinHDInGame.swf");
  uVar2 = uVar5;
  if (local_58[2] != 0) {
    cVar1 = FUN_140040850(uVar6,local_58);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      FUN_1400409e0(extraout_XMM0_Da_17,local_68,local_58);
      ppppuVar4 = &local_38;
      if (7 < uStack_20) {
        ppppuVar4 = (undefined8 ****)local_38;
      }
      uVar2 = IggyLibraryCreateFromMemoryUTF16(ppppuVar4,local_68[0]);
      thunk_FUN_1401fe000(local_68[0]);
    }
  }
  _DAT_1407bd88c = uVar2;
  if (7 < local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[2] = 0;
  local_58[3] = 7;
  local_58[0] = local_58[0] & 0xffffffffffff0000;
  if (7 < uStack_20) {
    if (0xfff < uStack_20 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)local_38[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140054cf0(&local_38,L"skinHDHud.swf",0xd);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar6 = FUN_140054cf0(local_58,L"skinHDHud.swf");
  uVar2 = uVar5;
  if (local_58[2] != 0) {
    cVar1 = FUN_140040850(uVar6,local_58);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      FUN_1400409e0(extraout_XMM0_Da_18,local_68,local_58);
      ppppuVar4 = &local_38;
      if (7 < uStack_20) {
        ppppuVar4 = (undefined8 ****)local_38;
      }
      uVar2 = IggyLibraryCreateFromMemoryUTF16(ppppuVar4,local_68[0]);
      thunk_FUN_1401fe000(local_68[0]);
    }
  }
  _DAT_1407bd890 = uVar2;
  if (7 < local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[2] = 0;
  local_58[3] = 7;
  local_58[0] = local_58[0] & 0xffffffffffff0000;
  if (7 < uStack_20) {
    if (0xfff < uStack_20 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)local_38[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140054cf0(&local_38,L"skinHDTooltips.swf",0x12);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar2 = FUN_140054cf0(local_58,L"skinHDTooltips.swf");
  if (local_58[2] != 0) {
    cVar1 = FUN_140040850(uVar2,local_58);
    uVar5 = 0xffffffff;
    if (cVar1 != '\0') {
      FUN_1400409e0(extraout_XMM0_Da_19,local_68,local_58);
      ppppuVar4 = &local_38;
      if (7 < uStack_20) {
        ppppuVar4 = (undefined8 ****)local_38;
      }
      uVar5 = IggyLibraryCreateFromMemoryUTF16(ppppuVar4,local_68[0]);
      thunk_FUN_1401fe000(local_68[0]);
    }
  }
  _DAT_1407bd894 = uVar5;
  if (7 < local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[2] = 0;
  local_58[3] = 7;
  local_58[0] = local_58[0] & 0xffffffffffff0000;
  if (7 < uStack_20) {
    if (0xfff < uStack_20 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)local_38[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140054cf0(&local_38,L"skinHD.swf",10);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar2 = FUN_140054cf0(local_58,L"skinHD.swf");
  if (local_58[2] != 0) {
    cVar1 = FUN_140040850(uVar2,local_58);
    if (cVar1 != '\0') {
      FUN_1400409e0(extraout_XMM0_Da_20,local_68,local_58);
      ppppuVar4 = &local_38;
      if (7 < uStack_20) {
        ppppuVar4 = (undefined8 ****)local_38;
      }
      uVar3 = IggyLibraryCreateFromMemoryUTF16(ppppuVar4,local_68[0]);
      thunk_FUN_1401fe000(local_68[0]);
    }
  }
  _DAT_1407bd898 = uVar3;
  if (7 < local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[2] = 0;
  local_58[3] = 7;
  local_58[0] = local_58[0] & 0xffffffffffff0000;
  if (7 < uStack_20) {
    if (0xfff < uStack_20 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)local_38[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  return;
}



// ===== FUN_140264ab0 @ 0x140264ab0 [ui,render] =====

undefined1 FUN_140264ab0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar2 = (**(code **)**(undefined8 **)(lVar1 + 0xb8))();
  plVar3 = DAT_1407915a8;
  if (cVar2 != '\0') {
    plVar3 = *(longlong **)(lVar1 + 0xb8);
  }
  cVar2 = (**(code **)(*plVar3 + 0x18))();
  if (cVar2 == '\0') {
    lVar1 = *(longlong *)(*(longlong *)(DAT_140790e60 + 0x238) + 0xc0);
    if ((((lVar1 == 0) || (lVar1 == *(longlong *)(*(longlong *)(DAT_140790e60 + 0x238) + 0xb8))) &&
        (cVar2 = (**(code **)(*param_1 + 0x18))(param_1), cVar2 == '\0')) &&
       (*(int *)((longlong)param_1 + 0x1b4) == 1)) {
      return 0;
    }
  }
  return 1;
}



// ===== FUN_140266370 @ 0x140266370 [render] =====

void FUN_140266370(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStackY_148 [32];
  undefined1 local_98 [16];
  longlong local_88 [6];
  ulonglong local_58;
  
  local_58 = DAT_1407502c0 ^ (ulonglong)auStackY_148;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(short *)(param_2 + lVar2 * 2) != 0);
  FUN_140054cf0(local_88);
  uVar1 = 0;
  if (local_88[2] * 2 != 0) {
    do {
      uVar1 = uVar1 + 1;
    } while (uVar1 < (ulonglong)(local_88[2] * 2));
  }
  lVar2 = FUN_1400490c0(param_1 + 0x1610,local_98);
  lVar2 = *(longlong *)(lVar2 + 8);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x1618);
  }
  if (7 < (ulonglong)local_88[3]) {
    if ((0xfff < local_88[3] * 2 + 2U) &&
       (0x1f < (local_88[0] - *(longlong *)(local_88[0] + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  if (lVar2 != *(longlong *)(param_1 + 0x1618)) {
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"Found substitution texture %ls, with %d bytes\n",param_2,
                  *(undefined4 *)(lVar2 + 0x38));
  }
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"Could not find substitution texture %ls\n",param_2);
}



// ===== FUN_1402666f0 @ 0x1402666f0 [render] =====

void FUN_1402666f0(undefined8 param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"Destroying iggy texture %d\n",param_2);
}



// ===== FUN_140266760 @ 0x140266760 [storage,render] =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140266760(undefined8 param_1,undefined8 *param_2,char param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 local_18 [16];
  
  puVar10 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar10 = (undefined8 *)*param_2;
  }
  uVar8 = 0;
  uVar6 = 0xcbf29ce484222325;
  uVar9 = 0xcbf29ce484222325;
  uVar4 = uVar8;
  if (param_2[2] * 2 != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar10 + uVar4);
      uVar4 = uVar4 + 1;
      uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
    } while (uVar4 < (ulonglong)(param_2[2] * 2));
  }
  lVar3 = FUN_1400490c0(&DAT_1407bd910,local_18,param_2,uVar9);
  plVar7 = DAT_1407bd918;
  if (*(longlong **)(lVar3 + 8) != (longlong *)0x0) {
    plVar7 = *(longlong **)(lVar3 + 8);
  }
  if (plVar7 != DAT_1407bd918) {
    if (param_3 != '\0') {
      thunk_FUN_1401fe000(plVar7[6]);
    }
    plVar2 = DAT_1407bd918;
    plVar5 = plVar7 + 2;
    if (7 < (ulonglong)plVar7[5]) {
      plVar5 = (longlong *)plVar7[2];
    }
    if (plVar7[4] * 2 != 0) {
      do {
        pbVar1 = (byte *)((longlong)plVar5 + uVar8);
        uVar8 = uVar8 + 1;
        uVar6 = (uVar6 ^ *pbVar1) * 0x100000001b3;
      } while (uVar8 < (ulonglong)(plVar7[4] * 2));
    }
    plVar5 = (longlong *)(DAT_1407bd928 + (uVar6 & _DAT_1407bd940) * 0x10);
    if ((longlong *)plVar5[1] == plVar7) {
      if ((longlong *)*plVar5 == plVar7) {
        *plVar5 = (longlong)DAT_1407bd918;
        plVar5[1] = (longlong)plVar2;
      }
      else {
        plVar5[1] = plVar7[1];
      }
    }
    else if ((longlong *)*plVar5 == plVar7) {
      *plVar5 = *plVar7;
    }
    lVar3 = *plVar7;
    _DAT_1407bd920 = _DAT_1407bd920 + -1;
    *(longlong *)plVar7[1] = lVar3;
    *(longlong *)(lVar3 + 8) = plVar7[1];
    FUN_140055150(plVar7 + 2);
    thunk_FUN_1401fe000(plVar7,0x40);
  }
  return;
}



// ===== FUN_1402675a0 @ 0x1402675a0 [render] =====

void FUN_1402675a0(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 local_48;
  undefined **local_40;
  undefined **local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  undefined8 local_20;
  
  if ((((DAT_1407bb76c == '\0') && (param_3 == '\0')) || (param_2 < 0)) ||
     (iVar4 = param_2 + 1, param_2 == 0xff)) {
    iVar4 = 0;
  }
  lVar1 = param_1 + (longlong)iVar4 * 8;
  FUN_14026a0e0(*(undefined8 *)(lVar1 + 0x1758));
  plVar5 = *(longlong **)(*(longlong *)(lVar1 + 0x1758) + 0x48);
  (**(code **)(*plVar5 + 400))
            (plVar5,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,
             0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
  local_48 = 0;
  local_40 = &PTR_140610690;
  local_38 = &PTR_140610690;
  local_30 = 0xffffffff;
  local_2c = 0;
  local_28 = 0x100;
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x1758) + 0x50);
  local_26 = 0;
  local_20 = 0;
  if (lVar2 != 0) {
    FUN_140276450(lVar2,&local_48);
  }
  if (iVar4 == 0) {
    FUN_14026bd00(*(undefined8 *)(*(longlong *)(param_1 + 0x1758) + 0x10),0,0x40,0);
    uVar3 = 1;
    plVar5 = (longlong *)(param_1 + 0x1760);
    do {
      FUN_14026bd00(*(undefined8 *)(*plVar5 + 0x10),uVar3,0x40,1);
      uVar3 = uVar3 + 1;
      plVar5 = plVar5 + 1;
    } while (uVar3 < 5);
  }
  if (iVar4 == 0) {
    param_2 = 0xff;
  }
  FUN_140267960(param_1,param_2,*(undefined1 *)(*(longlong *)(lVar1 + 0x1758) + 0x74));
  return;
}



// ===== FUN_140267890 @ 0x140267890 [render] =====

undefined8 FUN_140267890(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  
  uVar4 = 0;
  if (((DAT_1407bb76c == '\0') || (param_2 < 0)) || (param_2 == 0xff)) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 + 1;
  }
  plVar5 = *(longlong **)(param_1 + 0x1758 + (longlong)param_2 * 8);
  do {
    plVar5 = plVar5 + 1;
    lVar1 = *plVar5;
    iVar2 = (int)(*(longlong *)(lVar1 + 0x10) - *(longlong *)(lVar1 + 8) >> 3) + -1;
    lVar3 = (longlong)iVar2;
    if (-1 < iVar2) {
      do {
        iVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 8) + lVar3 * 8) + 0x50))();
        if (iVar2 == param_3) {
          return 1;
        }
        lVar3 = lVar3 + -1;
      } while (-1 < lVar3);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
  return 0;
}



// ===== FUN_140268170 @ 0x140268170 [render] =====

void FUN_140268170(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  FUN_140264c80();
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x1758) + 0x60);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = (**(code **)*puVar1)(puVar1);
    if ((lVar2 != 0) && (DAT_1407bb76c != '\0')) {
      lVar2 = (longlong)*(int *)((longlong)puVar1 + 0x174);
      if ((*(longlong *)(DAT_140790e60 + (lVar2 + 7) * 0x10) == 0) ||
         (*(longlong *)(DAT_140790e60 + 0xb0 + lVar2 * 8) == 0)) {
        FUN_14026bd00(puVar1[0x2d],lVar2,0x34,0);
      }
      else {
        FUN_14026bd00(puVar1[0x2d],lVar2,0x34,1);
        FUN_1400a0e00(puVar1 + 0x33);
      }
    }
  }
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x1760) + 0x60);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = (**(code **)*puVar1)(puVar1);
    if ((lVar2 != 0) && (DAT_1407bb76c != '\0')) {
      lVar2 = (longlong)*(int *)((longlong)puVar1 + 0x174);
      if ((*(longlong *)(DAT_140790e60 + (lVar2 + 7) * 0x10) == 0) ||
         (*(longlong *)(DAT_140790e60 + 0xb0 + lVar2 * 8) == 0)) {
        FUN_14026bd00(puVar1[0x2d],lVar2,0x34,0);
      }
      else {
        FUN_14026bd00(puVar1[0x2d],lVar2,0x34,1);
        FUN_1400a0e00(puVar1 + 0x33);
      }
    }
  }
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x1768) + 0x60);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = (**(code **)*puVar1)(puVar1);
    if ((lVar2 != 0) && (DAT_1407bb76c != '\0')) {
      lVar2 = (longlong)*(int *)((longlong)puVar1 + 0x174);
      if ((*(longlong *)(DAT_140790e60 + (lVar2 + 7) * 0x10) == 0) ||
         (*(longlong *)(DAT_140790e60 + 0xb0 + lVar2 * 8) == 0)) {
        FUN_14026bd00(puVar1[0x2d],lVar2,0x34,0);
      }
      else {
        FUN_14026bd00(puVar1[0x2d],lVar2,0x34,1);
        FUN_1400a0e00(puVar1 + 0x33);
      }
    }
  }
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 6000) + 0x60);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = (**(code **)*puVar1)(puVar1);
    if ((lVar2 != 0) && (DAT_1407bb76c != '\0')) {
      lVar2 = (longlong)*(int *)((longlong)puVar1 + 0x174);
      if ((*(longlong *)(DAT_140790e60 + (lVar2 + 7) * 0x10) == 0) ||
         (*(longlong *)(DAT_140790e60 + 0xb0 + lVar2 * 8) == 0)) {
        FUN_14026bd00(puVar1[0x2d],lVar2,0x34,0);
      }
      else {
        FUN_14026bd00(puVar1[0x2d],lVar2,0x34,1);
        FUN_1400a0e00(puVar1 + 0x33);
      }
    }
  }
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x1778) + 0x60);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = (**(code **)*puVar1)(puVar1);
    if ((lVar2 != 0) && (DAT_1407bb76c != '\0')) {
      lVar2 = (longlong)*(int *)((longlong)puVar1 + 0x174);
      if ((*(longlong *)(DAT_140790e60 + (lVar2 + 7) * 0x10) != 0) &&
         (*(longlong *)(DAT_140790e60 + 0xb0 + lVar2 * 8) != 0)) {
        FUN_14026bd00(puVar1[0x2d],lVar2,0x34,1);
        FUN_1400a0e00(puVar1 + 0x33);
        return;
      }
      FUN_14026bd00(puVar1[0x2d],lVar2,0x34,0);
    }
  }
  return;
}



// ===== FUN_140268940 @ 0x140268940 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140268940(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 ****ppppuVar5;
  longlong lVar6;
  undefined **ppuVar7;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [16];
  undefined8 ***local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  short local_e8 [104];
  ulonglong local_18;
  
  local_18 = DAT_1407502c0 ^ (ulonglong)auStackY_148;
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar6 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar6 >> 5) < 0x672) {
    ppuVar7 = &PTR_140610690;
  }
  else {
    ppuVar7 = (undefined **)(lVar6 + 0xce20);
    if (7 < *(ulonglong *)(lVar6 + 0xce38)) {
      ppuVar7 = (undefined **)*ppuVar7;
    }
  }
  FUN_1400547f0(local_e8,100,ppuVar7);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1758) + 0x58);
  if (plVar1 != (longlong *)0x0) {
    local_108 = (undefined8 ****)0x0;
    uStack_100 = 0;
    local_f8 = 0;
    local_f0 = 0;
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (local_e8[lVar6] != 0);
    FUN_140054cf0(&local_108,local_e8);
    if ((undefined8 ****)(plVar1 + 0x34) != &local_108) {
      ppppuVar5 = &local_108;
      if (7 < local_f0) {
        ppppuVar5 = (undefined8 ****)local_108;
      }
      FUN_1400549d0(plVar1 + 0x34,ppppuVar5);
    }
    cVar3 = FUN_140264ab0(&DAT_1407bc300);
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*plVar1 + 0x18))(plVar1);
      if (cVar3 != '\0') {
        pcVar2 = *(code **)(plVar1[0x3c] + 0x28);
        uVar4 = FUN_140089cb0(local_118,&local_108);
        (*pcVar2)(plVar1 + 0x3c,uVar4);
      }
    }
    if (7 < local_f0) {
      if (0xfff < local_f0 * 2 + 2) {
        if (0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)local_108[-1]))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      thunk_FUN_1401fe000();
    }
  }
  return;
}



// ===== FUN_140268b10 @ 0x140268b10 [render] =====

void FUN_140268b10(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  
  cVar3 = '\0';
  if (param_3 != 0) {
    if ((param_3 == 1) || (param_3 == 2)) {
      cVar3 = '\x01';
    }
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1758) + 0x58);
  if (plVar1 != (longlong *)0x0) {
    *(char *)(plVar1 + 0x33) = cVar3;
    cVar2 = FUN_140264ab0(&DAT_1407bc300);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
      if (cVar2 != '\0') {
        FUN_14027fe70(plVar1 + 0x99,cVar3);
        return;
      }
    }
    if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,
                    "Tried to show save icon while texture pack reload was in progress\n");
    }
  }
  return;
}



// ===== FUN_140269590 @ 0x140269590 [storage,render] =====

longlong * FUN_140269590(float *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  float fVar10;
  longlong local_38;
  longlong lStack_30;
  float *local_28;
  longlong *local_20;
  
  puVar9 = param_3;
  if (7 < (ulonglong)param_3[3]) {
    puVar9 = (undefined8 *)*param_3;
  }
  uVar7 = 0xcbf29ce484222325;
  uVar6 = 0;
  if (param_3[2] * 2 != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)((longlong)puVar9 + uVar6)) * 0x100000001b3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)(param_3[2] * 2));
  }
  FUN_1400490c0(param_1,&local_38,param_3,uVar7);
  if (lStack_30 != 0) {
    *param_2 = lStack_30;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140555c84("unordered_map/set too long");
  }
  local_20 = (longlong *)0x0;
  local_28 = param_1 + 2;
  plVar2 = (longlong *)FUN_140558c80(0x40);
  local_20 = plVar2;
  FUN_140055000(plVar2 + 2,param_3);
  plVar2[6] = 0;
  *(undefined4 *)(plVar2 + 7) = 0;
  uVar6 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar6) {
    fVar10 = (float)FUN_140590160((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar4 = 0;
    if ((9.223372e+18 <= fVar10) && (fVar10 = fVar10 - 9.223372e+18, fVar10 < 9.223372e+18)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar4)) {
      uVar5 = (longlong)fVar10 + lVar4;
    }
    uVar8 = uVar6;
    if ((uVar6 < uVar5) && ((0x1ff < uVar6 || (uVar8 = uVar6 * 8, uVar6 * 8 < uVar5)))) {
      uVar8 = uVar5;
    }
    FUN_140050d80(param_1,uVar8);
    plVar3 = (longlong *)FUN_1400490c0(param_1,&local_28,plVar2 + 2,uVar7);
    local_38 = *plVar3;
  }
  plVar3 = *(longlong **)(local_38 + 8);
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *plVar2 = local_38;
  plVar2[1] = (longlong)plVar3;
  *plVar3 = (longlong)plVar2;
  *(longlong **)(local_38 + 8) = plVar2;
  uVar7 = *(ulonglong *)(param_1 + 0xc) & uVar7;
  lVar4 = *(longlong *)(param_1 + 6);
  lVar1 = *(longlong *)(lVar4 + uVar7 * 0x10);
  if (lVar1 == *(longlong *)(param_1 + 2)) {
    *(longlong **)(lVar4 + uVar7 * 0x10) = plVar2;
  }
  else {
    if (lVar1 == local_38) {
      *(longlong **)(lVar4 + uVar7 * 0x10) = plVar2;
      goto LAB_1402697b3;
    }
    if (*(longlong **)(lVar4 + 8 + uVar7 * 0x10) != plVar3) goto LAB_1402697b3;
  }
  *(longlong **)(lVar4 + 8 + uVar7 * 0x10) = plVar2;
LAB_1402697b3:
  *param_2 = (longlong)plVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// ===== FUN_140269ba0 @ 0x140269ba0 [ui,render] =====

undefined8 * FUN_140269ba0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_res8;
  undefined1 local_38 [16];
  
  *param_1 = UIGroup::vftable;
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_2;
  *(undefined4 *)(param_1 + 0xe) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  lVar5 = 8;
  puVar6 = param_1;
  do {
    puVar6 = puVar6 + 1;
    puVar2 = (undefined8 *)FUN_140558c80(0xb8);
    *puVar2 = UILayer::vftable;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *(undefined4 *)(puVar2 + 0xd) = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    local_res8 = puVar2;
    lVar3 = FUN_140558c80(0x20);
    *(longlong *)lVar3 = lVar3;
    *(longlong *)(lVar3 + 8) = lVar3;
    puVar2[0xe] = lVar3;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 7;
    puVar2[0x14] = 8;
    *(undefined4 *)(puVar2 + 0xd) = 0x3f800000;
    FUN_14004bae0(puVar2 + 0x10,0x10,puVar2[0xe]);
    puVar2[0x16] = param_1;
    *(undefined4 *)(puVar2 + 0x15) = 0;
    *(undefined2 *)((longlong)puVar2 + 0xac) = 0;
    *puVar6 = puVar2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uVar4 = FUN_14026bdd0(param_1[2],0,0x40);
  param_1[9] = uVar4;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  if (*(int *)((longlong)param_1 + 0x6c) == 0) {
    uVar4 = FUN_14026bdd0(param_1[2],0,0x41);
    param_1[0xb] = uVar4;
  }
  else {
    uVar4 = FUN_14026bdd0(param_1[6],*(undefined4 *)(param_1 + 0xe),0x1c);
    param_1[10] = uVar4;
    uVar4 = FUN_14026bdd0(param_1[8],*(undefined4 *)(param_1 + 0xe),0x34);
    param_1[0xc] = uVar4;
  }
  uVar1 = FUN_1400043dc(&DAT_140784700,1);
  local_res8 = (undefined8 *)CONCAT44(1,uVar1);
  FUN_1400aa6b0(&DAT_1407c05e0,local_38,&local_res8);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return param_1;
}



// ===== FUN_14026df40 @ 0x14026df40 [ui,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14026df40(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  undefined8 *****pppppuVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStackY_f8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 ****local_80 [3];
  ulonglong local_68;
  ulonglong local_60 [8];
  ulonglong local_20;
  
  local_20 = DAT_1407502c0 ^ (ulonglong)auStackY_f8;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1407a4978);
  (**(code **)(*param_1 + 0x38))(param_1,local_80);
  uVar6 = 0;
  bVar1 = DAT_1407bc4a4 <= 720.0;
  if (bVar1) {
    pwVar7 = L"720.swf";
    uVar10 = 7;
  }
  else {
    pwVar7 = L"1080.swf";
    uVar10 = 8;
  }
  uVar10 = FUN_140048d20(local_80,pwVar7,uVar10);
  *(uint *)(param_1 + 0x27) = (uint)bVar1;
  cVar2 = FUN_140040850(uVar10,local_80);
  if (cVar2 == '\0') {
    pppppuVar8 = local_80;
    if (7 < local_68) {
      pppppuVar8 = (undefined8 *****)local_80[0];
    }
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"WARNING: Could not find iggy movie %ls, falling back on 720\n",
                  pppppuVar8);
  }
  pppppuVar8 = local_80;
  if (7 < local_68) {
    pppppuVar8 = (undefined8 *****)local_80[0];
  }
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (*(short *)((longlong)pppppuVar8 + lVar11 * 2) != 0);
  FUN_140054cf0(local_60);
  lVar11 = FUN_140352410();
  if (local_60[2] * 2 != 0) {
    do {
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_60[2] * 2);
  }
  lVar3 = FUN_1400490c0(&DAT_1407bd950,local_a0);
  lVar3 = *(longlong *)(lVar3 + 8);
  lVar9 = DAT_1407bd958;
  if (lVar3 != 0) {
    lVar9 = lVar3;
  }
  if (lVar9 == DAT_1407bd958) {
    FUN_1400409e0(lVar3,&local_c8,local_60);
    local_a8 = lVar11 + 60000;
    plVar4 = (longlong *)FUN_140269320(&DAT_1407bd950,local_90);
    lVar11 = *plVar4;
    *(undefined4 *)(lVar11 + 0x30) = local_c8;
    *(undefined4 *)(lVar11 + 0x34) = uStack_c4;
    *(undefined4 *)(lVar11 + 0x38) = uStack_c0;
    *(undefined4 *)(lVar11 + 0x3c) = uStack_bc;
    *(longlong *)(lVar11 + 0x40) = local_a8;
    uVar14 = local_c8;
    uVar15 = uStack_c4;
    uVar16 = uStack_c0;
  }
  else {
    *(longlong *)(lVar9 + 0x40) = lVar11 + 60000;
    uVar14 = *(undefined4 *)(lVar9 + 0x30);
    uVar15 = *(undefined4 *)(lVar9 + 0x34);
    uVar16 = *(undefined4 *)(lVar9 + 0x38);
  }
  if (7 < local_60[3]) {
    if ((0xfff < local_60[3] * 2 + 2) && (0x1f < (local_60[0] - *(longlong *)(local_60[0] - 8)) - 8)
       ) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_60[2] = 0;
  local_60[3] = 7;
  local_60[0] = local_60[0] & 0xffffffffffff0000;
  lVar11 = IggyPlayerCreateFromMemory(CONCAT44(uVar15,uVar14),uVar16,0);
  param_1[2] = lVar11;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"ERROR: Failed to load iggy scene!\n");
  }
  puVar5 = (undefined4 *)IggyPlayerProperties(param_1[2]);
  uVar14 = puVar5[1];
  *(undefined4 *)((longlong)param_1 + 0x144) = uVar14;
  uVar15 = *puVar5;
  *(undefined4 *)(param_1 + 0x28) = uVar15;
  *(undefined4 *)(param_1 + 0x29) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x14c) = uVar14;
  if (DAT_1407bc4a0 / DAT_1407bc4a4 <= 1.7777778) {
    fVar12 = DAT_1407bc4a0 / 1.7777778;
    fVar13 = DAT_1407bc4a0;
  }
  else {
    fVar12 = DAT_1407bc4a4;
    fVar13 = DAT_1407bc4a4 * 1.7777778;
  }
  IggyPlayerSetDisplaySize(param_1[2],(int)fVar13,(int)fVar12);
  IggyPlayerInitializeAndTickRS(param_1[2]);
  IggyFlushInstalledFonts();
  pppppuVar8 = local_80;
  if (7 < local_68) {
    pppppuVar8 = (undefined8 *****)local_80[0];
  }
  FUN_14002fee0(&DAT_1407bb5d0,6,"Loaded iggy movie %ls\n",pppppuVar8);
  IggyPlayerSetUserdata(param_1[2],param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1407a4978);
  FUN_140055150(local_80);
  return;
}



// ===== FUN_14026e590 @ 0x14026e590 [render] =====

undefined8 FUN_14026e590(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  
  local_28 = 0;
  lStack_20 = 0;
  local_18 = 0;
  (**(code **)(*param_1 + 0xb0))(0,&local_28);
  uVar1 = 0;
  uVar2 = lStack_20 - local_28 >> 3;
  if (uVar2 != 0) {
    do {
      lVar4 = *(longlong *)(local_28 + uVar1 * 8);
      if ((*(char *)(lVar4 + 0x113) != '\0') || (0 < *(int *)(lVar4 + 0x160))) {
        uVar3 = 1;
        goto LAB_14026e5f0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  uVar3 = 0;
LAB_14026e5f0:
  if (local_28 != 0) {
    lVar4 = local_28;
    if (0xfff < (local_18 - local_28 & 0xfffffffffffffff8U)) {
      lVar4 = *(longlong *)(local_28 + -8);
      if (0x1f < (local_28 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000(lVar4);
  }
  return uVar3;
}



// ===== FUN_14026ec30 @ 0x14026ec30 [ui,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14026ec30(undefined8 *param_1,longlong param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 *local_c0;
  undefined4 local_a8 [4];
  undefined8 **local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  uint local_78;
  undefined1 local_68 [32];
  undefined8 **local_48;
  undefined4 local_3c;
  undefined4 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1407502c0 ^ (ulonglong)auStack_e8;
  FUN_140054c30(&local_48,param_2 + 0x50);
  local_98 = &local_48;
  if (0xf < local_30) {
    local_98 = local_48;
  }
  local_a8[0] = 5;
  local_90 = local_38;
  local_8c = local_3c;
  local_88 = 3;
  uVar1 = param_1[3];
  local_78 = param_3 & 0xff;
  uVar2 = (**(code **)*param_1)(param_1);
  uVar2 = IggyPlayerRootPath(uVar2);
  uVar3 = (**(code **)*param_1)(param_1);
  local_c0 = local_a8;
  local_c8 = 2;
  IggyPlayerCallMethodRS(uVar3,local_68,uVar2,uVar1);
  *(undefined1 *)(param_2 + 0x10) = 1;
  FUN_140054b60(&local_48);
  return;
}



// ===== FUN_14026eda0 @ 0x14026eda0 [render] =====

void FUN_14026eda0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_28 [32];
  
  uVar1 = param_1[8];
  uVar2 = (**(code **)*param_1)();
  uVar2 = IggyPlayerRootPath(uVar2);
  uVar3 = (**(code **)*param_1)();
  IggyPlayerCallMethodRS(uVar3,local_28,uVar2,uVar1,0,0);
  return;
}



// ===== FUN_140270660 @ 0x140270660 [storage,ui,render] =====

undefined8 * FUN_140270660(float *param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  float *pfVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  
  uVar11 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
             0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
           0x100000001b3;
  uVar7 = uVar11 & *(ulonglong *)(param_1 + 0xc);
  puVar8 = (undefined8 *)(uVar7 * 2);
  puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + uVar7 * 0x10);
  pfVar1 = param_1 + 2;
  puVar9 = *(undefined8 **)pfVar1;
  if (puVar4 != puVar9) {
    puVar8 = *(undefined8 **)(*(longlong *)(param_1 + 6) + uVar7 * 0x10);
    iVar2 = *(int *)(puVar4 + 2);
    puVar9 = puVar4;
    while( true ) {
      if (*(int *)param_3 == iVar2) {
        *param_2 = puVar9;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == puVar8) break;
      puVar9 = (undefined8 *)puVar9[1];
      iVar2 = *(int *)(puVar9 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140555c84("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_140558c80(0x20,puVar8,param_3,param_4,pfVar1,0);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)param_3;
  *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
  uVar7 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar7) {
    fVar12 = (float)FUN_140590160((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar5 = 0;
    if ((9.223372e+18 <= fVar12) && (fVar12 = fVar12 - 9.223372e+18, fVar12 < 9.223372e+18)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = 8;
    if (8 < (ulonglong)((longlong)fVar12 + lVar5)) {
      uVar6 = (longlong)fVar12 + lVar5;
    }
    uVar10 = uVar7;
    if ((uVar7 < uVar6) && ((0x1ff < uVar7 || (uVar10 = uVar7 * 8, uVar7 * 8 < uVar6)))) {
      uVar10 = uVar6;
    }
    FUN_14004bcb0(param_1,uVar10);
    puVar8 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar11) * 0x10);
    puVar9 = *(undefined8 **)pfVar1;
    if (puVar8 != puVar9) {
      iVar2 = *(int *)(puVar8 + 2);
      puVar9 = puVar8;
      while (*(int *)(puVar4 + 2) != iVar2) {
        if (puVar9 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar11) * 0x10
                       )) goto LAB_140270883;
        puVar9 = (undefined8 *)puVar9[1];
        iVar2 = *(int *)(puVar9 + 2);
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_140270883:
  puVar8 = (undefined8 *)puVar9[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar4 = puVar9;
  puVar4[1] = puVar8;
  *puVar8 = puVar4;
  puVar9[1] = puVar4;
  uVar11 = *(ulonglong *)(param_1 + 0xc) & uVar11;
  lVar5 = *(longlong *)(param_1 + 6);
  puVar3 = *(undefined8 **)(lVar5 + uVar11 * 0x10);
  if (puVar3 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar5 + uVar11 * 0x10) = puVar4;
  }
  else {
    if (puVar3 == puVar9) {
      *(undefined8 **)(lVar5 + uVar11 * 0x10) = puVar4;
      goto LAB_1402708d3;
    }
    if (*(undefined8 **)(lVar5 + 8 + uVar11 * 0x10) != puVar8) goto LAB_1402708d3;
  }
  *(undefined8 **)(lVar5 + 8 + uVar11 * 0x10) = puVar4;
LAB_1402708d3:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// ===== FUN_1402708f0 @ 0x1402708f0 [storage,render] =====

longlong * FUN_1402708f0(float *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  float fVar10;
  longlong local_38;
  longlong lStack_30;
  float *local_28;
  longlong *local_20;
  
  puVar9 = param_3;
  if (7 < (ulonglong)param_3[3]) {
    puVar9 = (undefined8 *)*param_3;
  }
  uVar7 = 0xcbf29ce484222325;
  uVar6 = 0;
  if (param_3[2] * 2 != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)((longlong)puVar9 + uVar6)) * 0x100000001b3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)(param_3[2] * 2));
  }
  FUN_1400490c0(param_1,&local_38,param_3,uVar7);
  if (lStack_30 != 0) {
    *param_2 = lStack_30;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_140555c84("unordered_map/set too long");
  }
  local_20 = (longlong *)0x0;
  local_28 = param_1 + 2;
  plVar2 = (longlong *)FUN_140558c80(0x38);
  local_20 = plVar2;
  FUN_140055000(plVar2 + 2,param_3);
  *(undefined1 *)(plVar2 + 6) = 0;
  uVar6 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar6) {
    fVar10 = (float)FUN_140590160((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar4 = 0;
    if ((9.223372e+18 <= fVar10) && (fVar10 = fVar10 - 9.223372e+18, fVar10 < 9.223372e+18)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar4)) {
      uVar5 = (longlong)fVar10 + lVar4;
    }
    uVar8 = uVar6;
    if ((uVar6 < uVar5) && ((0x1ff < uVar6 || (uVar8 = uVar6 * 8, uVar6 * 8 < uVar5)))) {
      uVar8 = uVar5;
    }
    FUN_140050d80(param_1,uVar8);
    plVar3 = (longlong *)FUN_1400490c0(param_1,&local_28,plVar2 + 2,uVar7);
    local_38 = *plVar3;
  }
  plVar3 = *(longlong **)(local_38 + 8);
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *plVar2 = local_38;
  plVar2[1] = (longlong)plVar3;
  *plVar3 = (longlong)plVar2;
  *(longlong **)(local_38 + 8) = plVar2;
  uVar7 = *(ulonglong *)(param_1 + 0xc) & uVar7;
  lVar4 = *(longlong *)(param_1 + 6);
  lVar1 = *(longlong *)(lVar4 + uVar7 * 0x10);
  if (lVar1 == *(longlong *)(param_1 + 2)) {
    *(longlong **)(lVar4 + uVar7 * 0x10) = plVar2;
  }
  else {
    if (lVar1 == local_38) {
      *(longlong **)(lVar4 + uVar7 * 0x10) = plVar2;
      goto LAB_140270b08;
    }
    if (*(longlong **)(lVar4 + 8 + uVar7 * 0x10) != plVar3) goto LAB_140270b08;
  }
  *(longlong **)(lVar4 + 8 + uVar7 * 0x10) = plVar2;
LAB_140270b08:
  *param_2 = (longlong)plVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// ===== FUN_140274a10 @ 0x140274a10 [render] =====

void FUN_140274a10(longlong *param_1,int param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_res18 [4];
  undefined4 local_60;
  undefined1 local_58 [16];
  undefined4 local_48 [4];
  double local_38;
  undefined1 local_28 [32];
  
  *(char *)((longlong)param_2 + 0x19b + (longlong)param_1) = param_3;
  cVar2 = FUN_140264ab0(&DAT_1407bc300);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    if (cVar2 != '\0') {
      FUN_14027fe70(param_1 + 0xb0,param_3);
      if (param_3 != '\0') {
        local_res18[0] = 0;
        local_60 = CONCAT31(local_60._1_3_,1);
        iVar3 = FUN_140352410();
        plVar4 = (longlong *)FUN_140270660(param_1 + 0x1b,local_58,local_res18);
        lVar1 = *plVar4;
        *(ulonglong *)(lVar1 + 0x14) = CONCAT44(iVar3 + 3000,3000);
        *(undefined4 *)(lVar1 + 0x1c) = local_60;
        lVar1 = param_1[199];
        local_38 = (double)param_2;
        local_48[0] = 4;
        uVar5 = (**(code **)*param_1)(param_1);
        uVar5 = IggyPlayerRootPath(uVar5);
        uVar6 = (**(code **)*param_1)(param_1);
        IggyPlayerCallMethodRS(uVar6,local_28,uVar5,lVar1,1,local_48);
      }
    }
  }
  return;
}



// ===== FUN_14027f670 @ 0x14027f670 [render] =====

void FUN_14027f670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (undefined8 *)FUN_14005a910();
  FUN_140572100(*puVar1,param_1,0xffffffffffffffff,param_2,0,&local_res18);
  return;
}



// ===== FUN_14027f750 @ 0x14027f750 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14027f750(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStackY_a8 [32];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  longlong local_58 [6];
  
  local_58[4] = DAT_1407502c0 ^ (ulonglong)auStackY_a8;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  if ((undefined8 *)(param_1 + 0x50) != param_4) {
    puVar4 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      puVar4 = (undefined8 *)*param_4;
    }
    FUN_140058f70((undefined8 *)(param_1 + 0x50),puVar4,param_4[2]);
  }
  if (0xf < (ulonglong)param_4[3]) {
    param_4 = (undefined8 *)*param_4;
  }
  iVar2 = IggyValuePathMakeNameRef(param_1 + 0x20,param_3,param_4);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_140054cf0(local_58,&DAT_1406156f8);
  uVar3 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_58);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  if (7 < (ulonglong)local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2U) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_140054cf0(local_58,&DAT_14061570c);
  uVar3 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_58);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  if (7 < (ulonglong)local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2U) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_140054cf0(local_58,L"width");
  uVar3 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_58);
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  if (7 < (ulonglong)local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2U) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_140054cf0(local_58,L"height");
  uVar3 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_58);
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  if (7 < (ulonglong)local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2U) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_140054cf0(local_58,L"SetControlAlpha");
  uVar3 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_58);
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  if (7 < (ulonglong)local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2U) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_140054cf0(local_58,L"visible");
  uVar3 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_58);
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  if (7 < (ulonglong)local_58[3]) {
    if (0xfff < local_58[3] * 2 + 2U) {
      if (0x1f < (local_58[0] - *(longlong *)(local_58[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  IggyValueGetF64RS(param_1 + 0x20,*(undefined8 *)(param_1 + 0x70),0,&local_78);
  IggyValueGetF64RS(param_1 + 0x20,*(undefined8 *)(param_1 + 0x78),0,&local_70);
  IggyValueGetF64RS(param_1 + 0x20,*(undefined8 *)(param_1 + 0x80),0,&local_68);
  IggyValueGetF64RS(param_1 + 0x20,*(undefined8 *)(param_1 + 0x88),0,&local_60);
  *(int *)(param_1 + 0xa0) = (int)local_78;
  *(int *)(param_1 + 0xa4) = (int)local_70;
  dVar1 = (double)FUN_140578760(SUB84(local_68 + 0.5,0));
  *(int *)(param_1 + 0xa8) = (int)(longlong)dVar1;
  dVar1 = (double)FUN_140578760(SUB84(local_60 + 0.5,0));
  *(int *)(param_1 + 0xac) = (int)(longlong)dVar1;
  return CONCAT71((int7)((ulonglong)(longlong)dVar1 >> 8),iVar2 != 0);
}



// ===== FUN_140280a40 @ 0x140280a40 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_140280a40(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStackY_68 [32];
  longlong local_38 [6];
  
  local_38[4] = DAT_1407502c0 ^ (ulonglong)auStackY_68;
  *(undefined4 *)(param_1 + 8) = 0x16;
  uVar1 = FUN_14027f750();
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_140054cf0(local_38,L"SetTextureName");
  uVar2 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_38);
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  if (7 < (ulonglong)local_38[3]) {
    if (0xfff < local_38[3] * 2 + 2U) {
      if (0x1f < (local_38[0] - *(longlong *)(local_38[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  return uVar1;
}



// ===== FUN_140281d70 @ 0x140281d70 [storage,ui,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140281d70(longlong param_1,undefined8 param_2,int param_3,byte param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 *local_c0;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined1 local_a8 [32];
  undefined4 local_88 [4];
  undefined8 *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  double local_58;
  undefined4 local_48;
  uint local_38;
  ulonglong local_28;
  
  local_28 = DAT_1407502c0 ^ (ulonglong)auStack_e8;
  local_b8 = param_2;
  FUN_140045590(param_1 + 0xe0);
  *(int *)(param_1 + 0xc) = param_3;
  *(byte *)(param_1 + 0x108) = param_4;
  local_88[0] = 6;
  local_78 = (undefined8 *)FUN_14008a010(param_2);
  if (7 < (ulonglong)local_78[3]) {
    local_78 = (undefined8 *)*local_78;
  }
  lVar2 = FUN_14008a010(param_2);
  local_70 = *(undefined4 *)(lVar2 + 0x10);
  local_6c = local_ac;
  local_68 = 4;
  local_58 = (double)param_3;
  local_48 = 3;
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  local_38 = (uint)param_4;
  uVar3 = (**(code **)**(undefined8 **)(param_1 + 0x48))();
  local_c0 = local_88;
  local_c8 = 3;
  IggyPlayerCallMethodRS(uVar3,local_a8,param_1 + 0x20,uVar1);
  FUN_140089f70(param_2);
  return;
}



// ===== FUN_140281e90 @ 0x140281e90 [storage,ui,render] =====

void FUN_140281e90(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_48 [4];
  uint local_38;
  undefined1 local_28 [32];
  
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(byte *)(param_1 + 0x109) = param_2;
  local_38 = (uint)param_2;
  local_48[0] = 3;
  uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x48))();
  IggyPlayerCallMethodRS(uVar2,local_28,param_1 + 0x20,uVar1,1,local_48);
  return;
}



// ===== FUN_140283b10 @ 0x140283b10 [storage,ui,render] =====

void FUN_140283b10(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_48 [3];
  undefined4 local_3c;
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28 [32];
  
  FUN_140045590(param_1 + 0xe0);
  local_48[0] = 6;
  local_38 = (undefined8 *)FUN_14008a010(param_2);
  if (7 < (ulonglong)local_38[3]) {
    local_38 = (undefined8 *)*local_38;
  }
  lVar2 = FUN_14008a010(param_2);
  local_30 = *(undefined4 *)(lVar2 + 0x10);
  local_2c = local_3c;
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  uVar3 = (**(code **)**(undefined8 **)(param_1 + 0x48))();
  IggyPlayerCallMethodRS(uVar3,local_28,param_1 + 0x20,uVar1,1,local_48);
  FUN_140089f70(param_2);
  return;
}



// ===== FUN_140285160 @ 0x140285160 [render] =====

void FUN_140285160(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 in_stack_ffffffffffffffb8;
  uint uVar9;
  
  lVar3 = DAT_140790e60;
  uVar9 = (uint)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  FUN_1400044d0(&DAT_140784700);
  FUN_140004500(&DAT_140784700,(*(float *)(param_2 + 0x10) - *(float *)(param_2 + 8)) * 0.5,
                (*(float *)(param_2 + 0x14) - *(float *)(param_2 + 0xc)) - 3.5,0x42480000);
  FUN_1400044e8(&DAT_140784700);
  FUN_1400044dc(&DAT_140784700);
  FUN_1400aa080();
  auVar7._0_4_ = -(float)*(int *)(param_1 + 0x128);
  auVar7._4_4_ = 0x80000000;
  auVar7._8_4_ = 0x80000000;
  auVar7._12_4_ = 0x80000000;
  auVar8._4_12_ = auVar7._4_12_;
  auVar8._0_4_ = auVar7._0_4_ * 0.017453292;
  FUN_1400044dc(&DAT_140784700,auVar8._0_8_,0x3f800000,0,(ulonglong)uVar9 << 0x20);
  uVar4 = DAT_140791568;
  lVar5 = *(longlong *)(lVar3 + 0x218);
  uVar1 = *(undefined1 *)(lVar5 + 0x14c);
  *(undefined1 *)(lVar5 + 0x14c) = 1;
  lVar5 = FUN_140166dc0(uVar4,0xc800003);
  if (lVar5 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x158);
    if (plVar2 != (longlong *)0x0) {
      plVar6 = (longlong *)*plVar2;
      plVar2 = (longlong *)plVar2[1];
      if (7 < (ulonglong)((longlong)plVar2 - (longlong)plVar6)) {
        for (; plVar6 != plVar2; plVar6 = plVar6 + 1) {
          *(undefined1 *)(*plVar6 + 0x21) = 1;
        }
      }
    }
    FUN_1402853a0(param_1,lVar5,0,0,0);
    plVar2 = *(longlong **)(param_1 + 0x158);
    if (plVar2 != (longlong *)0x0) {
      plVar6 = (longlong *)*plVar2;
      plVar2 = (longlong *)plVar2[1];
      if (7 < (ulonglong)((longlong)plVar2 - (longlong)plVar6)) {
        for (; plVar6 != plVar2; plVar6 = plVar6 + 1) {
          *(undefined1 *)(*plVar6 + 0x21) = 0;
        }
      }
    }
  }
  *(undefined1 *)(*(longlong *)(lVar3 + 0x218) + 0x14c) = uVar1;
  FUN_1400044c4(&DAT_140784700);
  FUN_140004668(&DAT_140784700,0);
  FUN_14000465c(&DAT_140784700,0,0);
  FUN_14000465c(&DAT_140784700,1,0);
  return;
}



// ===== FUN_140285d00 @ 0x140285d00 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_140285d00(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStackY_68 [32];
  longlong local_38 [6];
  
  local_38[4] = DAT_1407502c0 ^ (ulonglong)auStackY_68;
  *(undefined4 *)(param_1 + 8) = 0x11;
  uVar1 = FUN_140280df0();
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_140054cf0(local_38,L"SetTextureName");
  uVar2 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_38);
  *(undefined8 *)(param_1 + 0x130) = uVar2;
  if (7 < (ulonglong)local_38[3]) {
    if (0xfff < local_38[3] * 2 + 2U) {
      if (0x1f < (local_38[0] - *(longlong *)(local_38[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  return uVar1;
}



// ===== FUN_140286420 @ 0x140286420 [ui,render] =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140286420(longlong *param_1,int param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_18 [16];
  
  if ((int)param_1[0x1f] != param_2) {
    if (param_1[0x20] == param_1[0x21]) {
      lVar4 = ((longlong)*(int *)((longlong)param_1 + 0xf4) - (longlong)(int)param_1[0x1e]) + 1;
      lVar2 = 1;
      if (0 < lVar4) {
        lVar2 = lVar4;
      }
    }
    else {
      lVar2 = param_1[0x21] - param_1[0x20] >> 5;
    }
    if ((((DAT_1407aaa25 == '\0') && (DAT_1407aaa24 != '\x01')) || (param_2 == (param_2 / 10) * 10))
       || ((int)lVar2 < 0x15)) {
      lVar2 = FUN_140352410();
      if (9 < (ulonglong)(lVar2 - _DAT_1407bd9d8)) {
        _DAT_1407bd9d8 = lVar2;
        (**(code **)(**(longlong **)(DAT_140790e60 + 0x228) + 0x20))
                  (*(longlong **)(DAT_140790e60 + 0x228),5,0x3f800000,0x3f800000);
      }
      *(int *)(param_1 + 0x1f) = param_2;
    }
    if ((ulonglong)(longlong)param_2 < (ulonglong)(param_1[0x21] - param_1[0x20] >> 5)) {
      pcVar1 = *(code **)(*param_1 + 0x28);
      uVar3 = FUN_140089cb0(local_18,(longlong)param_2 * 0x20 + param_1[0x20]);
      (*pcVar1)(param_1,uVar3,0,0);
    }
    return;
  }
  return;
}



// ===== FUN_140287170 @ 0x140287170 [storage,ui,render] =====

undefined8 * FUN_140287170(undefined8 *param_1)

{
  FUN_14027f6d0();
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = UIControl_TextInput::vftable;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 7;
  *(undefined2 *)(param_1 + 0x23) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 7;
  *(undefined2 *)(param_1 + 0x27) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  return param_1;
}



// ===== FUN_1402882b0 @ 0x1402882b0 [storage,render] =====

void FUN_1402882b0(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [32];
  undefined4 local_58 [4];
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  double local_28;
  
  FUN_140089cb0(&local_88);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = local_88;
  *(longlong **)(param_1 + 0xe8) = local_80;
  plVar8 = local_80;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar8 = local_80;
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
        plVar8 = local_80;
      }
    }
  }
  local_88 = 0;
  local_80 = (longlong *)0x0;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar8 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  plVar4 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_80 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  *(int *)(param_1 + 0xc) = param_3;
  local_58[0] = 6;
  local_48 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    local_48 = (undefined8 *)*param_2;
  }
  uVar5 = *(undefined8 *)(param_1 + 0xb8);
  local_40 = *(undefined4 *)(param_2 + 2);
  local_28 = (double)param_3;
  local_3c = local_80._4_4_;
  local_38 = 4;
  uVar7 = (**(code **)**(undefined8 **)(param_1 + 0x48))();
  IggyPlayerCallMethodRS(uVar7,local_78,param_1 + 0x20,uVar5,2,local_58);
  return;
}



// ===== FUN_140299d50 @ 0x140299d50 [storage,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140299d50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStackY_88 [32];
  undefined8 *local_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1407502c0 ^ (ulonglong)auStackY_88;
  FUN_14026db10();
  uVar6 = (**(code **)*param_1)(param_1);
  IggyPlayerRootPath(uVar6);
  puVar1 = param_1 + 0x58;
  pcVar4 = *(code **)*puVar1;
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = (char *)FUN_140054e60(0x20);
  local_40 = 0x10;
  uStack_38 = 0x1f;
  builtin_strncpy(local_50,"TexturePackPanel",0x11);
  (*pcVar4)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if ((char *)0x1f < local_50 + (-8 - *(longlong *)(local_50 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x5b] = 0;
  puVar2 = param_1 + 0x2a;
  plVar5 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar5 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar5,&local_58);
  }
  else {
    *plVar5 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x6f;
  local_40 = 0xf;
  uStack_38 = 0xf;
  local_50 = (char *)0x5065727574786554;
  uStack_48 = 0x656d614e6b6361;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x72] = puVar1;
  plVar5 = (longlong *)param_1[0x2b];
  local_58 = puVar3;
  if (plVar5 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar5,&local_58);
  }
  else {
    *plVar5 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x8e;
  pcVar4 = *(code **)*puVar3;
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = (char *)FUN_140054e60(0x20);
  local_40 = 0x16;
  uStack_38 = 0x1f;
  builtin_strncpy(local_50,"TexturePackDescription",0x17);
  (*pcVar4)(puVar3,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if ((char *)0x1f < local_50 + (-8 - *(longlong *)(local_50 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x91] = puVar1;
  plVar5 = (longlong *)param_1[0x2b];
  local_58 = puVar3;
  if (plVar5 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar5,&local_58);
  }
  else {
    *plVar5 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0xad;
  uStack_48 = 0;
  local_40 = 4;
  uStack_38 = 0xf;
  local_50 = (char *)0x6e6f6349;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xb0] = puVar1;
  plVar5 = (longlong *)param_1[0x2b];
  local_58 = puVar3;
  if (plVar5 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar5,&local_58);
  }
  else {
    *plVar5 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0xc5;
  local_40 = 0xd;
  uStack_38 = 0xf;
  local_50 = (char *)0x73697261706d6f43;
  uStack_48 = 0x6369506e6f;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[200] = puVar1;
  plVar5 = (longlong *)param_1[0x2b];
  if (plVar5 == (longlong *)param_1[0x2c]) {
    local_58 = puVar3;
    FUN_1400491a0(puVar2,plVar5,&local_58);
  }
  else {
    *plVar5 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  return 1;
}



// ===== FUN_14029a1f0 @ 0x14029a1f0 [storage,render] =====

undefined8 * FUN_14029a1f0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_14026d220();
  *param_1 = IUIScene_StartGame::vftable;
  FUN_14027f6d0(param_1 + 0x33);
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x33] = UIControl_TexturePackList::vftable;
  FUN_14027f6d0(param_1 + 0x58);
  FUN_14027f6d0(param_1 + 0x6f);
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  *(undefined4 *)((longlong)param_1 + 900) = 0;
  param_1[0x6f] = UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x8d) = 1;
  FUN_14027f6d0(param_1 + 0x8e);
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 0;
  param_1[0x8e] = UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0xac) = 1;
  FUN_14027f6d0(param_1 + 0xad);
  param_1[0xad] = UIControl_BitmapIcon::vftable;
  FUN_14027f6d0(param_1 + 0xc5);
  param_1[0xc5] = UIControl_BitmapIcon::vftable;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  *(undefined1 *)(param_1 + 0xdd) = 1;
  *(undefined1 *)((longlong)param_1 + 0x6ea) = 1;
  *(undefined1 *)((longlong)param_1 + 0x6ef) = 1;
  *(undefined2 *)((longlong)param_1 + 0x6f1) = 0x101;
  *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe5) = 3;
  FUN_1400549d0(param_1 + 0xe1,&PTR_140610690,0);
  *(undefined1 *)((longlong)param_1 + 0x72c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x734) = 0;
  *(undefined1 *)(param_1 + 0xe7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6f5) = 0x1010001;
  *(undefined2 *)((longlong)param_1 + 0x6f9) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x6fb) = 1;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x744) = 0;
  *(undefined2 *)((longlong)param_1 + 0x74c) = 0;
  *(undefined4 *)(param_1 + 0xea) = 0xffffffff;
  uVar1 = FUN_1401aa940(*(undefined8 *)(DAT_140790e60 + 0x238),0);
  *(undefined4 *)(param_1 + 0xe9) = uVar1;
  return param_1;
}



// ===== FUN_14029aad0 @ 0x14029aad0 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14029aad0(longlong param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStackY_148 [32];
  int local_118 [2];
  undefined8 local_110;
  int iStack_108;
  undefined4 uStack_104;
  undefined8 *****local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong uStack_d8;
  longlong local_d0 [2];
  undefined8 *****local_c0;
  ulonglong uStack_b8;
  short local_a8 [64];
  ulonglong local_28;
  
  local_28 = DAT_1407502c0 ^ (ulonglong)auStackY_148;
  plVar4 = *(longlong **)(*(longlong *)(DAT_140790e60 + 0x238) + 0x58);
  lVar5 = *plVar4;
  if (((param_2 & 0xffffffff) < (ulonglong)(plVar4[1] - lVar5 >> 3)) &&
     (plVar4 = *(longlong **)(lVar5 + (param_2 & 0xffffffff) * 8), plVar4 != (longlong *)0x0)) {
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0x378) + 0x28);
    uVar3 = (**(code **)(*plVar4 + 0x50))(plVar4,local_d0);
    uVar3 = FUN_140089cb0(&local_110,uVar3);
    (*pcVar1)(param_1 + 0x378,uVar3,0,0);
    FUN_140055150(local_d0);
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0x470) + 0x28);
    uVar3 = (**(code **)(*plVar4 + 0x58))(plVar4,local_d0);
    uVar3 = FUN_140089cb0(&local_110,uVar3);
    (*pcVar1)(param_1 + 0x470,uVar3,0,0);
    FUN_140055150(local_d0);
    (**(code **)(*plVar4 + 0xb8))(plVar4,local_118);
    uVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
    FUN_1400547f0(local_a8,0x40,L"tpack%08x",uVar2);
    local_f0 = (undefined8 ******)0x0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    lVar5 = -1;
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (local_a8[lVar6] != 0);
    FUN_140054cf0(&local_f0,local_a8);
    local_c0 = &local_f0;
    if (7 < uStack_d8) {
      local_c0 = local_f0;
    }
    local_d0[0] = CONCAT44(local_d0[0]._4_4_,6);
    uStack_b8 = CONCAT44(uStack_104,(int)local_e0);
    uVar3 = (**(code **)**(undefined8 **)(param_1 + 0x5b0))();
    IggyPlayerCallMethodRS(uVar3,&local_110);
    if (7 < uStack_d8) {
      if ((0xfff < uStack_d8 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_f0 + (-8 - (longlong)local_f0[-1])))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
    lVar6 = (**(code **)(*plVar4 + 0xc0))(plVar4,local_118);
    if ((local_118[0] == 0) || (lVar6 == 0)) {
      local_f0 = (undefined8 ******)0x0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      FUN_140054cf0(&local_f0,&PTR_140610690,0);
      local_c0 = &local_f0;
      if (7 < uStack_d8) {
        local_c0 = local_f0;
      }
      local_d0[0] = CONCAT44(local_d0[0]._4_4_,6);
      uStack_b8 = CONCAT44(uStack_e8._4_4_,(int)local_e0);
      uVar3 = (**(code **)**(undefined8 **)(param_1 + 0x670))();
      IggyPlayerCallMethodRS(uVar3,&local_110);
      if (uStack_d8 < 8) {
        return;
      }
      if ((0xfff < uStack_d8 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_f0 + (-8 - (longlong)local_f0[-1])))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    else {
      (**(code **)(*plVar4 + 0x48))(plVar4);
      FUN_1400547f0(local_a8,0x40,L"texturePackComparison%08x");
      local_d0[0] = 0;
      local_d0[1] = 0;
      local_c0 = (undefined8 *****)0x0;
      uStack_b8 = 0;
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (local_a8[lVar7] != 0);
      FUN_140054cf0(local_d0,local_a8);
      plVar4 = (longlong *)FUN_1402708f0(param_1 + 0x98,&local_110,local_d0);
      lVar7 = *plVar4;
      *(undefined1 *)(lVar7 + 0x30) = 0;
      FUN_140266760(lVar7,local_d0,0);
      iStack_108 = local_118[0];
      local_110 = lVar6;
      plVar4 = (longlong *)FUN_140269590(&DAT_1407bd910,&local_f0);
      lVar6 = *plVar4;
      *(undefined4 *)(lVar6 + 0x30) = (undefined4)local_110;
      *(undefined4 *)(lVar6 + 0x34) = local_110._4_4_;
      *(int *)(lVar6 + 0x38) = iStack_108;
      *(undefined4 *)(lVar6 + 0x3c) = uStack_104;
      if (7 < uStack_b8) {
        if ((0xfff < uStack_b8 * 2 + 2) &&
           (0x1f < (local_d0[0] - *(longlong *)(local_d0[0] + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        thunk_FUN_1401fe000();
      }
      local_f0 = (undefined8 ******)0x0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      do {
        lVar5 = lVar5 + 1;
      } while (local_a8[lVar5] != 0);
      FUN_140054cf0(&local_f0,local_a8,lVar5);
      local_c0 = &local_f0;
      if (7 < uStack_d8) {
        local_c0 = local_f0;
      }
      local_d0[0] = CONCAT44(local_d0[0]._4_4_,6);
      uStack_b8 = CONCAT44(uStack_e8._4_4_,(int)local_e0);
      uVar3 = (**(code **)**(undefined8 **)(param_1 + 0x670))();
      IggyPlayerCallMethodRS(uVar3,&local_110);
      if (uStack_d8 < 8) {
        return;
      }
      if ((0xfff < uStack_d8 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_f0 + (-8 - (longlong)local_f0[-1])))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  return;
}



// ===== FUN_14029b040 @ 0x14029b040 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14029b040(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 auStackY_98 [32];
  undefined8 *local_68;
  char *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1407502c0 ^ (ulonglong)auStackY_98;
  FUN_140299d50();
  uVar6 = (**(code **)*param_1)(param_1);
  IggyPlayerRootPath(uVar6);
  puVar1 = param_1 + 0xf3;
  local_50 = 9;
  uStack_48 = 0xf;
  local_60 = (char *)0x656e61506e69614d;
  uStack_58 = 0x6c;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xf6] = 0;
  puVar2 = param_1 + 0x2a;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar1;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x10a;
  local_50 = 9;
  uStack_48 = 0xf;
  local_60 = (char *)0x6d614e646c726f57;
  uStack_58 = 0x65;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x10d] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x186;
  local_50 = 0xd;
  uStack_48 = 0xf;
  local_60 = (char *)0x6c726f5774696445;
  uStack_58 = 0x656d614e64;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x189] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x33;
  pcVar5 = *(code **)*puVar3;
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = (char *)FUN_140054e60(0x20);
  local_50 = 0x13;
  uStack_48 = 0x1f;
  builtin_strncpy(local_60,"TexturePackSelector",0x14);
  (*pcVar5)(puVar3,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x36] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x129;
  local_50 = 0xe;
  uStack_48 = 0xf;
  local_60 = (char *)0x65646f4d656d6147;
  uStack_58 = 0x656c67676f54;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[300] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x1d8;
  local_50 = 0xe;
  uStack_48 = 0xf;
  local_60 = (char *)0x786f626b63656843;
  uStack_58 = 0x656e696c6e4f;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x1db] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x148;
  local_50 = 0xb;
  uStack_48 = 0xf;
  local_60 = (char *)0x6974704f65726f4d;
  uStack_58 = 0x736e6f;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x14b] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x167;
  local_50 = 8;
  uStack_48 = 0xf;
  local_60 = (char *)0x646c726f5777654e;
  uStack_58 = 0;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x16a] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x1b3;
  local_50 = 10;
  uStack_48 = 0xf;
  local_60 = (char *)0x6c75636966666944;
  uStack_58 = 0x7974;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x1b6] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  if (plVar4 == (longlong *)param_1[0x2c]) {
    local_68 = puVar3;
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  return 1;
}



// ===== FUN_14029b830 @ 0x14029b830 [ui,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

longlong * FUN_14029b830(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStackY_4d8 [32];
  longlong *local_4a8;
  int local_4a0 [2];
  undefined4 local_498;
  int iStack_494;
  undefined4 local_490;
  longlong local_488;
  int iStack_480;
  undefined4 uStack_47c;
  longlong *local_478;
  undefined1 local_470 [16];
  undefined1 local_460 [16];
  undefined1 local_450 [16];
  undefined1 local_440 [16];
  undefined1 local_430 [16];
  undefined1 local_420 [16];
  undefined1 local_410 [16];
  undefined1 local_400 [16];
  undefined1 local_3f0 [12];
  undefined4 local_3e4;
  undefined4 local_3d8;
  double local_3c8;
  undefined4 local_3b8;
  undefined8 *******local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  double local_388;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [32];
  undefined1 local_338 [32];
  undefined8 *******local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  ulonglong uStack_300;
  longlong local_2f8 [8];
  short local_2b8 [64];
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_1407502c0 ^ (ulonglong)auStackY_4d8;
  local_478 = param_1;
  FUN_14029a1f0(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_CreateWorldMenu::vftable;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 7;
  *(undefined2 *)(param_1 + 0xeb) = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 7;
  *(undefined2 *)(param_1 + 0xef) = 0;
  FUN_14027f6d0(param_1 + 0xf3);
  plVar4 = param_1 + 0x10a;
  local_4a8 = plVar4;
  FUN_14027f6d0(plVar4);
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  *(undefined1 *)(param_1 + 0x125) = 0;
  *(undefined4 *)((longlong)param_1 + 0x85c) = 0;
  *plVar4 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x128) = 1;
  plVar4 = param_1 + 0x129;
  local_4a8 = plVar4;
  FUN_14027f6d0(plVar4);
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  *(undefined1 *)(param_1 + 0x144) = 0;
  *(undefined4 *)((longlong)param_1 + 0x954) = 0;
  *plVar4 = (longlong)UIControl_Button::vftable;
  plVar4 = param_1 + 0x148;
  local_4a8 = plVar4;
  FUN_14027f6d0(plVar4);
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  *(undefined1 *)(param_1 + 0x163) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4c) = 0;
  *plVar4 = (longlong)UIControl_Button::vftable;
  plVar4 = param_1 + 0x167;
  local_4a8 = plVar4;
  FUN_14027f6d0(plVar4);
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  *(undefined1 *)(param_1 + 0x182) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb44) = 0;
  *plVar4 = (longlong)UIControl_Button::vftable;
  FUN_140287170(param_1 + 0x186);
  FUN_1402860b0(param_1 + 0x1b3);
  plVar4 = param_1 + 0x1d8;
  local_4a8 = plVar4;
  FUN_14027f6d0(plVar4);
  param_1[500] = 0;
  param_1[0x1f5] = 0;
  *(undefined1 *)(param_1 + 499) = 0;
  *(undefined4 *)((longlong)param_1 + 0xecc) = 0;
  *plVar4 = (longlong)UIControl_CheckBox::vftable;
  FUN_14027f6d0(param_1 + 0x1fa);
  param_1[0x1fa] = (longlong)UIControl_BitmapIcon::vftable;
  FUN_14027f6d0(param_1 + 0x212);
  param_1[0x212] = (longlong)UIControl_BitmapIcon::vftable;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  ppuVar10 = &PTR_140610690;
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar2)();
    return plVar4;
  }
  lVar12 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar12 >> 5) < 0x721) {
    ppuVar9 = &PTR_140610690;
  }
  else {
    ppuVar9 = (undefined **)(lVar12 + 0xe400);
    if (7 < *(ulonglong *)(lVar12 + 0xe418)) {
      ppuVar9 = (undefined **)*ppuVar9;
    }
  }
  lVar12 = -1;
  do {
    lVar12 = lVar12 + 1;
  } while (*(short *)((longlong)ppuVar9 + lVar12 * 2) != 0);
  FUN_1400549d0(param_1 + 0xeb);
  FUN_1400549d0(param_1 + 0xef,&PTR_140610690,0);
  *(int *)((longlong)param_1 + 0x174) = (int)param_2;
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar2)();
    return plVar4;
  }
  lVar12 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar12 >> 5) < 0x722) {
    ppuVar9 = &PTR_140610690;
  }
  else {
    ppuVar9 = (undefined **)(lVar12 + 0xe420);
    if (7 < *(ulonglong *)(lVar12 + 0xe438)) {
      ppuVar9 = (undefined **)*ppuVar9;
    }
  }
  uVar5 = FUN_140089d90(&local_498,ppuVar9);
  FUN_140283b10(param_1 + 0x10a,uVar5);
  uVar5 = FUN_140089cb0(local_470,param_1 + 0xeb);
  FUN_140280c40(param_1 + 0x186,uVar5,0);
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar2)();
    return plVar4;
  }
  lVar12 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar12 >> 5) < 0x667) {
    ppuVar9 = &PTR_140610690;
  }
  else {
    ppuVar9 = (undefined **)(lVar12 + 0xccc0);
    if (7 < *(ulonglong *)(lVar12 + 0xccd8)) {
      ppuVar9 = (undefined **)*ppuVar9;
    }
  }
  uVar5 = FUN_140089d90(local_460,ppuVar9);
  FUN_140280c40(param_1 + 0x129,uVar5,2);
  if (*DAT_1407bb780 != '\0') {
    lVar12 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar12 >> 5) < 0x71f) {
      ppuVar9 = &PTR_140610690;
    }
    else {
      ppuVar9 = (undefined **)(lVar12 + 0xe3c0);
      if (7 < *(ulonglong *)(lVar12 + 0xe3d8)) {
        ppuVar9 = (undefined **)*ppuVar9;
      }
    }
    uVar5 = FUN_140089d90(local_450,ppuVar9);
    FUN_140280c40(param_1 + 0x148,uVar5,4);
    if (*DAT_1407bb780 == '\0') {
      pcVar2 = (code *)swi(3);
      plVar4 = (longlong *)(*pcVar2)();
      return plVar4;
    }
    lVar12 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar12 >> 5) < 0x5ad) {
      ppuVar9 = &PTR_140610690;
    }
    else {
      ppuVar9 = (undefined **)(lVar12 + 0xb580);
      if (7 < *(ulonglong *)(lVar12 + 0xb598)) {
        ppuVar9 = (undefined **)*ppuVar9;
      }
    }
    uVar5 = FUN_140089d90(local_440,ppuVar9);
    FUN_140280c40(param_1 + 0x167,uVar5,5);
    if (*DAT_1407bb780 == '\0') {
      pcVar2 = (code *)swi(3);
      plVar4 = (longlong *)(*pcVar2)();
      return plVar4;
    }
    lVar12 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar12 >> 5) < 0x68e) {
      ppuVar9 = &PTR_140610690;
    }
    else {
      ppuVar9 = (undefined **)(lVar12 + 0xd1a0);
      if (7 < *(ulonglong *)(lVar12 + 0xd1b8)) {
        ppuVar9 = (undefined **)*ppuVar9;
      }
    }
    local_2f8[0] = 0;
    local_2f8[1] = 0;
    local_2f8[2] = 0;
    local_2f8[3] = 0;
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (*(short *)((longlong)ppuVar9 + lVar12 * 2) != 0);
    FUN_140054cf0(local_2f8);
    FUN_1402882b0(param_1 + 0x33,local_2f8);
    if (7 < (ulonglong)local_2f8[3]) {
      if ((0xfff < local_2f8[3] * 2 + 2U) &&
         (0x1f < (local_2f8[0] - *(longlong *)(local_2f8[0] + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
    uVar5 = FUN_140089d90(local_430,&PTR_140610690);
    FUN_140283b10(param_1 + 0x6f,uVar5);
    uVar5 = FUN_140089d90(local_420,&PTR_140610690);
    FUN_140283b10(param_1 + 0x8e,uVar5);
    if (*DAT_1407bb780 == '\0') {
      pcVar2 = (code *)swi(3);
      plVar4 = (longlong *)(*pcVar2)();
      return plVar4;
    }
    if (*DAT_1407bb780 != '\0') {
      lVar12 = *(longlong *)(DAT_1407bb780 + 0x48);
      if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar12 >> 5) < 0x5fc) {
        ppuVar9 = &PTR_140610690;
      }
      else {
        ppuVar9 = (undefined **)(lVar12 + 0xbf60);
        if (7 < *(ulonglong *)(lVar12 + 0xbf78)) {
          ppuVar9 = (undefined **)*ppuVar9;
        }
      }
      FUN_1400547f0(local_238,0x100,L"%ls: %ls",ppuVar9);
      uVar5 = FUN_140089d90(local_410,local_238);
      FUN_140286290(param_1 + 0x1b3,uVar5,3,0);
      *(undefined4 *)((longlong)param_1 + 0x6eb) = 0x101;
      *(undefined4 *)((longlong)param_1 + 0x6ef) = 0x1010101;
      *(undefined1 *)((longlong)param_1 + 0x6f3) = 0;
      *(int *)(param_1 + 0xe0) = (int)param_2;
      *(undefined4 *)((longlong)param_1 + 0x6f5) = 0x1010001;
      *(undefined2 *)((longlong)param_1 + 0x6f9) = 0x101;
      *(undefined1 *)((longlong)param_1 + 0x6fb) = 1;
      *(undefined1 *)(param_1 + 0x22a) = 0;
      *(undefined4 *)((longlong)param_1 + 0x1154) = *DAT_1407b94d0;
      param_1[0x22c] = 0;
      *(undefined1 *)(param_1 + 0x22d) = 0;
      *(undefined1 *)(param_1 + 0x22b) = 1;
      iVar1 = *(int *)((longlong)param_1 + 0x174);
      uVar8 = *(uint *)((&DAT_1407bb7b0)[iVar1] + 0x54) >> 1;
      *(undefined1 *)((longlong)param_1 + 0x6fc) = 0;
      *(byte *)(param_1 + 0xdd) = (byte)uVar8 & 1;
      if ((uVar8 & 1) == 0) {
        *(undefined1 *)((longlong)param_1 + 0x6e9) = 0;
        bVar7 = 0;
      }
      else {
        *(byte *)((longlong)param_1 + 0x6e9) =
             (byte)(*(uint *)((&DAT_1407bb7b0)[iVar1] + 0x54) >> 2) & 1;
        bVar7 = (byte)(*(uint *)((&DAT_1407bb7b0)[iVar1] + 0x54) >> 3) & 1;
      }
      *(byte *)((longlong)param_1 + 0x6ea) = bVar7;
      uVar13 = (undefined1)param_1[0xdd];
      FUN_140281e90(param_1 + 0x1d8,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
      if (*(char *)((longlong)param_1 + 0x6fc) != '\0') {
        FUN_140281e90(param_1 + 0x1d8,0);
        uVar13 = 0;
      }
      if (*DAT_1407bb780 != '\0') {
        lVar12 = *(longlong *)(DAT_1407bb780 + 0x48);
        if ((0x71c < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar12 >> 5)) &&
           (ppuVar10 = (undefined **)(lVar12 + 0xe380), 7 < *(ulonglong *)(lVar12 + 0xe398))) {
          ppuVar10 = (undefined **)*ppuVar10;
        }
        uVar5 = FUN_140089d90(local_400,ppuVar10);
        FUN_140281d70(param_1 + 0x1d8,uVar5,6,uVar13);
        local_4a8 = (longlong *)((ulonglong)local_4a8 & 0xffffffff00000000);
        local_490 = CONCAT31(local_490._1_3_,1);
        local_498 = 100;
        iStack_494 = FUN_140352410();
        iStack_494 = iStack_494 + 100;
        plVar4 = (longlong *)FUN_140270660(param_1 + 0x1b,local_3f0,&local_4a8);
        lVar12 = *plVar4;
        *(ulonglong *)(lVar12 + 0x14) = CONCAT44(iStack_494,local_498);
        *(undefined4 *)(lVar12 + 0x1c) = local_490;
        uVar5 = (**(code **)(*DAT_1407ba830 + 0x60))
                          (DAT_1407ba830,*(undefined4 *)((longlong)param_1 + 0x174),0x1d,0);
        cVar3 = FUN_1400382a0(uVar5,*(undefined4 *)((longlong)param_1 + 0x174));
        if (cVar3 == '\x01') {
          *(undefined1 *)(param_1 + 0xe8) = 1;
        }
        else {
          *(undefined1 *)(param_1 + 0xe8) = 0;
          lVar12 = DAT_140790e60;
          plVar4 = *(longlong **)(*(longlong *)(DAT_140790e60 + 0x238) + 0x58);
          uVar15 = 0;
          uVar8 = (uint)(plVar4[1] - *plVar4 >> 3);
          if (uVar8 != 0) {
            do {
              plVar11 = (longlong *)0x0;
              plVar4 = *(longlong **)(*(longlong *)(lVar12 + 0x238) + 0x58);
              lVar6 = *plVar4;
              if (uVar15 < (ulonglong)(plVar4[1] - lVar6 >> 3)) {
                plVar11 = *(longlong **)(lVar6 + uVar15 * 8);
              }
              lVar6 = (**(code **)(*plVar11 + 0xb8))(plVar11,local_4a0);
              if ((local_4a0[0] != 0) && (lVar6 != 0)) {
                (**(code **)(*plVar11 + 0x48))(plVar11);
                FUN_1400547f0(local_2b8,0x40,L"tpack%08x");
                local_2f8[4] = 0;
                local_2f8[5] = 0;
                local_2f8[6] = 0;
                local_2f8[7] = 0;
                lVar12 = -1;
                do {
                  lVar12 = lVar12 + 1;
                } while (local_2b8[lVar12] != 0);
                FUN_140054cf0(local_2f8 + 4,local_2b8);
                plVar4 = (longlong *)FUN_1402708f0(param_1 + 0x13,local_378,local_2f8 + 4);
                lVar12 = *plVar4;
                *(undefined1 *)(lVar12 + 0x30) = 0;
                FUN_140266760(lVar12,local_2f8 + 4,0);
                iStack_480 = local_4a0[0];
                local_488 = lVar6;
                plVar4 = (longlong *)FUN_140269590(&DAT_1407bd910,local_368);
                lVar12 = *plVar4;
                *(longlong *)(lVar12 + 0x30) = local_488;
                *(ulonglong *)(lVar12 + 0x38) = CONCAT44(uStack_47c,iStack_480);
                if (7 < (ulonglong)local_2f8[7]) {
                  if ((0xfff < local_2f8[7] * 2 + 2U) &&
                     (0x1f < (local_2f8[4] - *(longlong *)(local_2f8[4] + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                  thunk_FUN_1401fe000();
                }
                local_318 = (undefined8 *******)0x0;
                uStack_310 = 0;
                local_308 = 0;
                uStack_300 = 0;
                lVar12 = -1;
                do {
                  lVar12 = lVar12 + 1;
                } while (local_2b8[lVar12] != 0);
                FUN_140054cf0(&local_318,local_2b8);
                local_3d8 = 4;
                local_3c8 = (double)(int)uVar15;
                local_3b8 = 6;
                local_3a8 = &local_318;
                if (7 < uStack_300) {
                  local_3a8 = local_318;
                }
                local_3a0 = (undefined4)local_308;
                local_39c = local_3e4;
                uVar5 = (*(code *)**(undefined8 **)param_1[0x3c])();
                IggyPlayerCallMethodRS(uVar5,local_358);
                if (7 < uStack_300) {
                  if ((0xfff < uStack_300 * 2 + 2) &&
                     (0x1f < (ulonglong)((longlong)local_318 + (-8 - (longlong)local_318[-1])))) {
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                  thunk_FUN_1401fe000();
                }
                    /* WARNING: Subroutine does not return */
                FUN_14002fe50(&DAT_1407bb5d0,"Adding texture pack %ls at %d\n",local_2b8,uVar15);
              }
              uVar14 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar14;
            } while (uVar14 < uVar8);
          }
          FUN_14029aad0(param_1,(int)param_1[0xe9]);
          local_398 = 4;
          local_388 = (double)(int)param_1[0xe9];
          lVar12 = param_1[0x52];
          uVar5 = (*(code *)**(undefined8 **)param_1[0x3c])();
          IggyPlayerCallMethodRS(uVar5,local_338,param_1 + 0x37,lVar12);
        }
        return param_1;
      }
      pcVar2 = (code *)swi(3);
      plVar4 = (longlong *)(*pcVar2)();
      return plVar4;
    }
    pcVar2 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar2)();
    return plVar4;
  }
  pcVar2 = (code *)swi(3);
  plVar4 = (longlong *)(*pcVar2)();
  return plVar4;
}



// ===== FUN_1402ac2b0 @ 0x1402ac2b0 [storage,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402ac2b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 auStackY_98 [32];
  undefined8 *local_68;
  char *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1407502c0 ^ (ulonglong)auStackY_98;
  FUN_140299d50();
  uVar6 = (**(code **)*param_1)(param_1);
  IggyPlayerRootPath(uVar6);
  puVar1 = param_1 + 0xeb;
  local_50 = 9;
  uStack_48 = 0xf;
  local_60 = (char *)0x656e61506e69614d;
  uStack_58 = 0x6c;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xee] = 0;
  puVar2 = param_1 + 0x2a;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar1;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x102;
  local_50 = 8;
  uStack_48 = 0xf;
  local_60 = (char *)0x656d614e656d6147;
  uStack_58 = 0;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x105] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x140;
  local_50 = 0xb;
  uStack_48 = 0xf;
  local_60 = (char *)0x4d64657461657243;
  uStack_58 = 0x65646f;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x143] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x121;
  uStack_58 = 0;
  local_50 = 4;
  uStack_48 = 0xf;
  local_60 = (char *)0x64656553;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x124] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x33;
  pcVar5 = *(code **)*puVar3;
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = (char *)FUN_140054e60(0x20);
  local_50 = 0x13;
  uStack_48 = 0x1f;
  builtin_strncpy(local_60,"TexturePackSelector",0x14);
  (*pcVar5)(puVar3,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x36] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x15f;
  local_50 = 0xe;
  uStack_48 = 0xf;
  local_60 = (char *)0x65646f4d656d6147;
  uStack_58 = 0x656c67676f54;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x162] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x1f9;
  local_50 = 0xe;
  uStack_48 = 0xf;
  local_60 = (char *)0x786f626b63656843;
  uStack_58 = 0x656e696c6e4f;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x1fc] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x17e;
  local_50 = 0xb;
  uStack_48 = 0xf;
  local_60 = (char *)0x6974704f65726f4d;
  uStack_58 = 0x736e6f;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x181] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x19d;
  local_50 = 0xc;
  uStack_48 = 0xf;
  local_60 = (char *)0x7474655364616f4c;
  uStack_58 = 0x73676e69;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x1a0] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x1bc;
  local_50 = 10;
  uStack_48 = 0xf;
  local_60 = (char *)0x6c75636966666944;
  uStack_58 = 0x7974;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x1bf] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x1e1;
  local_50 = 9;
  uStack_48 = 0xf;
  local_60 = (char *)0x6f63496c6576654c;
  uStack_58 = 0x6e;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x1e4] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  if (plVar4 == (longlong *)param_1[0x2c]) {
    local_68 = puVar3;
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  return 1;
}



// ===== FUN_1402c4460 @ 0x1402c4460 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402c4460(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStackY_98 [32];
  undefined8 *local_68;
  char *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1407502c0 ^ (ulonglong)auStackY_98;
  FUN_14026db10();
  uVar5 = (**(code **)*param_1)(param_1);
  IggyPlayerRootPath(uVar5);
  puVar1 = param_1 + 0x33;
  uStack_58 = 0;
  local_50 = 6;
  uStack_48 = 0xf;
  local_60 = (char *)0x7364756f6c43;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x36] = 0;
  puVar2 = param_1 + 0x2a;
  plVar3 = (longlong *)param_1[0x2b];
  local_68 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_68);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x55;
  local_50 = 10;
  uStack_48 = 0xf;
  local_60 = (char *)0x466b636f72646542;
  uStack_58 = 0x676f;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x58] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_68 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_68);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x77;
  local_50 = 0xe;
  uStack_48 = 0xf;
  local_60 = (char *)0x6b536d6f74737543;
  uStack_58 = 0x6d696e416e69;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x7a] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_68 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_68);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x99;
  local_50 = 0xe;
  uStack_48 = 0xf;
  local_60 = (char *)0x69447265646e6552;
  uStack_58 = 0x65636e617473;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x9c] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_68 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_68);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0xbe;
  uStack_58 = 0;
  local_50 = 5;
  uStack_48 = 0xf;
  local_60 = (char *)0x616d6d6147;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xc1] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_68 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_68);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0xe3;
  uStack_58 = 0;
  local_50 = 3;
  uStack_48 = 0xf;
  local_60 = (char *)0x564f46;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xe6] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_68 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_68);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x108;
  pcVar4 = *(code **)*puVar1;
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = (char *)FUN_140054e60(0x20);
  local_50 = 0x10;
  uStack_48 = 0x1f;
  builtin_strncpy(local_60,"InterfaceOpacity",0x11);
  (*pcVar4)(puVar1,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x10b] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  if (plVar3 == (longlong *)param_1[0x2c]) {
    local_68 = puVar1;
    FUN_1400491a0(puVar2,plVar3,&local_68);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  return 1;
}



// ===== FUN_1402c4a80 @ 0x1402c4a80 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1402c4a80(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint *puVar7;
  byte bVar8;
  undefined **ppuVar9;
  uint uVar10;
  undefined **ppuVar11;
  int iVar12;
  undefined1 auStack_288 [32];
  uint local_268;
  uint local_260;
  longlong *local_258 [2];
  longlong *local_248;
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_1407502c0 ^ (ulonglong)auStack_288;
  local_248 = param_1;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_SettingsGraphicsMenu::vftable;
  plVar5 = param_1 + 0x33;
  FUN_14027f6d0(plVar5);
  iVar12 = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *plVar5 = (longlong)UIControl_CheckBox::vftable;
  plVar1 = param_1 + 0x55;
  local_258[0] = plVar1;
  FUN_14027f6d0(plVar1);
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  *plVar1 = (longlong)UIControl_CheckBox::vftable;
  plVar1 = param_1 + 0x77;
  local_258[0] = plVar1;
  FUN_14027f6d0(plVar1);
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined1 *)(param_1 + 0x92) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  *plVar1 = (longlong)UIControl_CheckBox::vftable;
  FUN_1402860b0(param_1 + 0x99);
  FUN_1402860b0(param_1 + 0xbe);
  FUN_1402860b0(param_1 + 0xe3);
  FUN_1402860b0(param_1 + 0x108);
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  *(bool *)(param_1 + 0x12d) = *(longlong *)(DAT_140790e60 + 0x40) == 0;
  bVar8 = *(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 0x54);
  ppuVar11 = &PTR_140610690;
  if (*DAT_1407bb780 == '\0') {
    pcVar3 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar3)();
    return plVar5;
  }
  lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5) < 0x66f) {
    ppuVar9 = &PTR_140610690;
  }
  else {
    ppuVar9 = (undefined **)(lVar2 + 0xcdc0);
    if (7 < *(ulonglong *)(lVar2 + 0xcdd8)) {
      ppuVar9 = (undefined **)*ppuVar9;
    }
  }
  uVar6 = FUN_140089d90(local_258,ppuVar9);
  FUN_140281d70(plVar5,uVar6,0,bVar8 & 1);
  uVar10 = *(uint *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 0x54);
  if (*DAT_1407bb780 == '\0') {
    pcVar3 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar3)();
    return plVar5;
  }
  lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5) < 0x6b8) {
    ppuVar9 = &PTR_140610690;
  }
  else {
    ppuVar9 = (undefined **)(lVar2 + 0xd6e0);
    if (7 < *(ulonglong *)(lVar2 + 0xd6f8)) {
      ppuVar9 = (undefined **)*ppuVar9;
    }
  }
  uVar6 = FUN_140089d90(local_258,ppuVar9);
  FUN_140281d70(param_1 + 0x55,uVar6,1,(byte)(uVar10 >> 6) & 1);
  uVar10 = *(uint *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 0x54);
  if (*DAT_1407bb780 == '\0') {
    pcVar3 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar3)();
    return plVar5;
  }
  lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5) < 0x6bd) {
    ppuVar9 = &PTR_140610690;
  }
  else {
    ppuVar9 = (undefined **)(lVar2 + 0xd780);
    if (7 < *(ulonglong *)(lVar2 + 0xd798)) {
      ppuVar9 = (undefined **)*ppuVar9;
    }
  }
  uVar6 = FUN_140089d90(local_258,ppuVar9);
  FUN_140281d70(param_1 + 0x77,uVar6,2,(byte)(uVar10 >> 9) & 1);
  cVar4 = *(char *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 0x56);
  if (*(char *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 0x56) == '\0') {
    cVar4 = '\x10';
  }
  FUN_1400547f0(local_238,0x100,L"Render Distance: %d",cVar4);
  bVar8 = *(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 0x56);
  if (bVar8 == 0) {
    bVar8 = 0x10;
  }
  puVar7 = &DAT_140647750;
  do {
    if (*puVar7 == (uint)bVar8) goto LAB_1402c4d36;
    iVar12 = iVar12 + 1;
    puVar7 = puVar7 + 1;
  } while ((longlong)puVar7 < 0x140647768);
  iVar12 = 3;
LAB_1402c4d36:
  uVar6 = FUN_140089d90(local_258,local_238);
  local_268 = 5;
  local_260 = iVar12;
  FUN_140286290(param_1 + 0x99,uVar6,3,0);
  if (*DAT_1407bb780 == '\0') {
    pcVar3 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar3)();
    return plVar5;
  }
  lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5) < 0x5ff) {
    ppuVar9 = &PTR_140610690;
  }
  else {
    ppuVar9 = (undefined **)(lVar2 + 0xbfc0);
    if (7 < *(ulonglong *)(lVar2 + 0xbfd8)) {
      ppuVar9 = (undefined **)*ppuVar9;
    }
  }
  local_268 = (uint)*(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 4);
  FUN_1400547f0(local_238,0x100,L"%ls: %d%%",ppuVar9);
  bVar8 = *(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 4);
  uVar6 = FUN_140089d90(local_258,local_238);
  local_260 = (uint)bVar8;
  local_268 = 100;
  FUN_140286290(param_1 + 0xbe,uVar6,4,0);
  bVar8 = *(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 0x53);
  uVar10 = (uint)bVar8;
  if (100 < bVar8) {
    uVar10 = 100;
  }
  FUN_1400547f0(local_238,0x100,L"FOV: %d",(uVar10 * 0x28) / 100 + 0x46);
  uVar6 = FUN_140089d90(local_258,local_238);
  local_268 = 100;
  local_260 = (uint)bVar8;
  FUN_140286290(param_1 + 0xe3,uVar6,5,0);
  if (*DAT_1407bb780 != '\0') {
    lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((0x644 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5)) &&
       (ppuVar11 = (undefined **)(lVar2 + 0xc880), 7 < *(ulonglong *)(lVar2 + 0xc898))) {
      ppuVar11 = (undefined **)*ppuVar11;
    }
    local_268 = (uint)*(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 0x51);
    FUN_1400547f0(local_238,0x100,L"%ls: %d%%",ppuVar11);
    bVar8 = *(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 0x51);
    uVar6 = FUN_140089d90(local_258,local_238);
    local_260 = (uint)bVar8;
    local_268 = 100;
    FUN_140286290(param_1 + 0x108,uVar6,6,0);
    FUN_14026eda0(param_1);
    if (*(longlong *)(DAT_140790e60 + 0x40) != 0) {
      if (*(int *)((longlong)param_1 + 0x174) == 0) {
        cVar4 = (**(code **)(*DAT_140790368 + 0x80))();
        if (cVar4 == '\x01') {
          return param_1;
        }
        plVar5 = param_1 + 0x55;
      }
      else {
        FUN_14026ec30(param_1,param_1 + 0x55,1);
        plVar5 = param_1 + 0x77;
      }
      FUN_14026ec30(param_1,plVar5,1);
    }
    return param_1;
  }
  pcVar3 = (code *)swi(3);
  plVar5 = (longlong *)(*pcVar3)();
  return plVar5;
}



// ===== FUN_1402c53e0 @ 0x1402c53e0 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402c53e0(longlong param_1,double param_2,double param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined1 auStack_268 [32];
  uint local_248;
  undefined1 local_238 [16];
  undefined1 local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_1407502c0 ^ (ulonglong)auStack_268;
  iVar3 = (int)param_2;
  if (iVar3 == 3) {
    iVar7 = (int)param_3;
    FUN_140286420(param_1 + 0x4c8,iVar7);
    iVar3 = 0;
    if (-1 < iVar7) {
      iVar3 = iVar7;
    }
    if (5 < iVar3) {
      iVar3 = 5;
    }
    uVar4 = (&DAT_140647750)[iVar3];
    FUN_140033e40(&DAT_1407bb5d0,*(undefined4 *)(param_1 + 0x174),2,uVar4 & 0xff);
    *(int *)(*(longlong *)(DAT_140790e60 + 0x218) + 0x10) = 3 - iVar7;
    FUN_1400547f0(local_228,0x100,L"Render Distance: %d",uVar4);
    pcVar5 = *(code **)(*(longlong *)(param_1 + 0x4c8) + 0x28);
    uVar2 = FUN_140089d90(local_238,local_228);
    param_1 = param_1 + 0x4c8;
  }
  else if (iVar3 == 4) {
    uVar4 = (uint)param_3;
    FUN_140286420(param_1 + 0x5f0,uVar4);
    FUN_140033e40(&DAT_1407bb5d0,*(undefined4 *)(param_1 + 0x174),3,uVar4 & 0xff);
    if (*DAT_1407bb780 == '\0') {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x5ff) {
      ppuVar8 = &PTR_140610690;
    }
    else {
      ppuVar8 = (undefined **)(lVar1 + 0xbfc0);
      if (7 < *(ulonglong *)(lVar1 + 0xbfd8)) {
        ppuVar8 = (undefined **)*ppuVar8;
      }
    }
    local_248 = uVar4;
    FUN_1400547f0(local_228,0x100,L"%ls: %d%%",ppuVar8);
    pcVar5 = *(code **)(*(longlong *)(param_1 + 0x5f0) + 0x28);
    uVar2 = FUN_140089d90(local_238,local_228);
    param_1 = param_1 + 0x5f0;
  }
  else if (iVar3 == 5) {
    uVar6 = (uint)param_3;
    FUN_140286420(param_1 + 0x718,uVar6);
    uVar4 = 0;
    if (-1 < (int)uVar6) {
      uVar4 = uVar6;
    }
    if (100 < (int)uVar4) {
      uVar4 = 100;
    }
    iVar3 = (int)(uVar4 * 0x28) / 100 + 0x46;
    FUN_1400b6950(*(undefined8 *)(**(longlong **)(DAT_140790e60 + 0x1d0) + 0x218),&DAT_1407bacb8,
                  ((float)iVar3 - 70.0) / 40.0);
    FUN_140033e40(&DAT_1407bb5d0,*(undefined4 *)(param_1 + 0x174),4,uVar6 & 0xff);
    FUN_1400547f0(local_228,0x100,L"FOV: %d",iVar3);
    pcVar5 = *(code **)(*(longlong *)(param_1 + 0x718) + 0x28);
    uVar2 = FUN_140089d90(local_238,local_228);
    param_1 = param_1 + 0x718;
  }
  else {
    if (iVar3 != 6) {
      return;
    }
    uVar4 = (uint)param_3;
    FUN_140286420(param_1 + 0x840,uVar4);
    FUN_140033e40(&DAT_1407bb5d0,*(undefined4 *)(param_1 + 0x174),0x11,uVar4 & 0xff);
    if (*DAT_1407bb780 == '\0') {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x645) {
      ppuVar8 = &PTR_140610690;
    }
    else {
      ppuVar8 = (undefined **)(lVar1 + 0xc880);
      if (7 < *(ulonglong *)(lVar1 + 0xc898)) {
        ppuVar8 = (undefined **)*ppuVar8;
      }
    }
    local_248 = uVar4;
    FUN_1400547f0(local_228,0x100,L"%ls: %d%%",ppuVar8);
    pcVar5 = *(code **)(*(longlong *)(param_1 + 0x840) + 0x28);
    uVar2 = FUN_140089d90(local_238,local_228);
    param_1 = param_1 + 0x840;
  }
  (*pcVar5)(param_1,uVar2,0,0);
  return;
}



// ===== FUN_1402cc540 @ 0x1402cc540 [render] =====

void FUN_1402cc540(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int local_res10 [6];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_res10[0] = -1;
  FUN_14027f670(*param_2,L"Character%d",local_res10);
  if (local_res10[0] == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"Invalid character to render found\n");
  }
  uVar1 = FUN_1402fccb0(&DAT_1407bc300,param_1,param_2);
  thunk_FUN_1401fe000(uVar1,0x50);
  if (*(char *)((longlong)param_2 + 0x4a) != '\0') {
    FUN_140004674(&DAT_140784700,3,*(char *)((longlong)param_2 + 0x4a),
                  *(undefined1 *)((longlong)param_2 + 0x49),
                  *(undefined1 *)((longlong)param_2 + 0x4b));
  }
  FUN_140285160((longlong)local_res10[0] * 0x168 + 0x198 + param_1,param_2);
  FUN_14000443c(&DAT_140784700,1,&DAT_1407bd9e0);
  FUN_14000459c(&DAT_140784700,0);
  FUN_140004554(&DAT_140784700,0);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  FUN_1403051f0();
  FUN_1403050e0();
  FUN_1403055b0(&local_38);
  return;
}



// ===== FUN_1402fc1b0 @ 0x1402fc1b0 [render] =====

LPSTR FUN_1402fc1b0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 - 1U < 3) {
    lVar1 = (longlong)param_2;
    if (((&DAT_1407a4c00)[lVar1 * 0x2c] != L'\0') && ((&DAT_1407a4bf1)[lVar1 * 0x58] == '\0')) {
      WideCharToMultiByte(0,0,&DAT_1407a4c00 + lVar1 * 0x2c,-1,&DAT_1407c1d10 + lVar1 * 0x11,0x11,
                          (LPCSTR)0x0,(LPBOOL)0x0);
      return &DAT_1407c1d10 + lVar1 * 0x11;
    }
  }
  return &DAT_1407aaaa0;
}



// ===== FUN_1402fc830 @ 0x1402fc830 [ui,render] =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402fc830(void)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar2 = DAT_1407aaac8;
  uVar5 = DAT_1407aaac0;
  iVar1 = DAT_140754644;
  iVar3 = DAT_140754640;
  _DAT_1407bdab8 = DAT_1407aaab8;
  _DAT_1407bdac0 = DAT_1407aaae0;
  DAT_1407bc4a0 = (float)DAT_140754640;
  DAT_1407bc4a4 = (float)DAT_140754644;
  DAT_1407bc4a8 = 1;
  IggyInit(0);
  IggySetWarningCallback(FUN_1402617f0,0);
  IggySetTraceCallbackUTF8(&LAB_140261840,0);
  if (DAT_1407bdab0 != 0) {
    thunk_FUN_1401fe000();
  }
  if (DAT_1407bdaa8 == 0) {
    DAT_1407bdaa8 = thunk_FUN_140558c80(120000);
  }
  IggySetFontCachingCalculationBuffer(5000,DAT_1407bdaa8,120000);
  DAT_1407bd8c8 = FUN_140308ae0(uVar2,uVar5,iVar3,iVar1);
  if (DAT_1407bd8c8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"Failed to initialise GDraw!\n");
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  if ((DAT_14076ef90 != 5000) || (DAT_14076ef94 != 0x1000000)) {
    DAT_14076ef90 = 5000;
    DAT_14076ef94 = 0x1000000;
    if (DAT_1407c0ab8 != 0) {
      lVar4 = *(longlong *)(DAT_1407c0ab8 + 0x1010);
      if (lVar4 != 0) {
        *(uint *)(lVar4 + 0xc) = *(uint *)(lVar4 + 0xc) | 2;
        FUN_1403027f0(lVar4);
        do {
          iVar3 = FUN_140303a10(lVar4,&local_38);
        } while (iVar3 != 0);
        IggyGDrawFree(*(undefined8 *)(DAT_1407c0ab8 + 0x1010));
      }
      iVar1 = DAT_14076ef94;
      iVar3 = DAT_14076ef90;
      lVar4 = IggyGDrawMallocAnnotated
                        ((longlong)DAT_14076ef90 * 0x50 + 0x250,
                         "D:\\a\\MinecraftConsoles\\MinecraftConsoles\\Minecraft.Client\\Windows64\\Iggy\\gdraw\\gdraw_d3d1x_shared.inl"
                         ,0x831);
      if (lVar4 != 0) {
        lVar6 = lVar4;
        FUN_140302850(lVar4,iVar3,iVar1);
        *(uint *)(lVar6 + 0xc) = *(uint *)(lVar6 + 0xc) | 1;
      }
      *(longlong *)(DAT_1407c0ab8 + 0x1010) = lVar4;
    }
  }
  FUN_140308800(1,5000,0x8000000);
  FUN_140308800(0,10,0x4000000);
  IggySetGDraw(DAT_1407bd8c8);
  IggyAudioUseDirectSound();
  IggySetCustomDrawCallback(FUN_140266330,&DAT_1407bc300);
  IggySetAS3ExternalFunctionCallbackUTF16(FUN_140265fe0,&DAT_1407bc300);
  IggySetTextureSubstitutionCallbacks(FUN_140266370,FUN_1402666f0,&DAT_1407bc300);
  FUN_1402620f0(&DAT_1407bc300);
  FUN_140262a80();
  uVar7 = 0;
  puVar8 = &DAT_1407bda58;
  do {
    uVar5 = FUN_140558c80(0x88);
    uVar5 = FUN_140269ba0(uVar5,uVar7,uVar7 - 1);
    *puVar8 = uVar5;
    uVar7 = uVar7 + 1;
    puVar8 = puVar8 + 1;
  } while (uVar7 < 5);
                    /* WARNING: Could not recover jumptable at 0x0001402fcb39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_1407bc300 + 0x28))(&DAT_1407bc300,0,1,0);
  return;
}



// ===== FUN_1402fccb0 @ 0x1402fccb0 [render] =====

undefined8 * FUN_1402fccb0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140558c80(0x50);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)puVar1 = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((longlong)puVar1 + 4) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_3 + 0x14);
  FUN_140308e60(param_3,puVar1 + 2);
  FUN_140266010(param_1);
  FUN_140266130(param_1,param_2,puVar1);
  return puVar1;
}



// ===== FUN_1402fd1a0 @ 0x1402fd1a0 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402fd1a0(undefined8 *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 auStack_308 [32];
  undefined8 *local_2e8;
  undefined *local_2e0;
  char *local_2d8;
  undefined4 local_2d0;
  undefined4 local_2c8;
  longlong **local_2c0;
  longlong **local_2b8;
  longlong *local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  longlong *local_290;
  undefined8 *local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined8 local_24c;
  undefined4 local_244;
  undefined4 local_240;
  undefined8 local_23c;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_204;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_168;
  undefined1 local_148 [36];
  undefined1 local_124;
  ulonglong local_38;
  
  local_38 = DAT_1407502c0 ^ (ulonglong)auStack_308;
  if (((DAT_1407aaac8 != (longlong *)0x0) && (DAT_1407aaad0 != (longlong *)0x0)) &&
     (*(char *)(param_1 + 10) == '\0')) {
    hModule = GetModuleHandleA("ntdll.dll");
    if ((hModule == (HMODULE)0x0) ||
       (pFVar4 = GetProcAddress(hModule,"wine_get_version"), pFVar4 == (FARPROC)0x0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(param_1 + 0xb) = uVar2;
    local_290 = (longlong *)0x0;
    iVar3 = (**(code **)(*DAT_1407aaad0 + 0x48))(DAT_1407aaad0,0,&DAT_14064e060,&local_290);
    if (-1 < iVar3) {
      (**(code **)(*local_290 + 0x50))(local_290,&local_178);
      (**(code **)(*local_290 + 0x10))();
      *(undefined4 *)(param_1 + 0xf) = local_178;
      if (*(char *)(param_1 + 0xb) != '\0') {
        local_168 = 0x1c;
      }
      *(undefined4 *)((longlong)param_1 + 0x7c) = local_174;
      local_260 = local_178;
      local_23c = 0;
      local_25c = local_174;
      local_258 = 1;
      local_254 = 1;
      local_24c = 1;
      local_244 = 0;
      local_240 = 0x28;
      local_250 = local_168;
      iVar3 = (**(code **)(*DAT_1407aaac8 + 0x28))(DAT_1407aaac8,&local_260,0,param_1);
      if (((-1 < iVar3) &&
          (iVar3 = (**(code **)(*DAT_1407aaac8 + 0x38))(DAT_1407aaac8,*param_1,0,param_1 + 1),
          -1 < iVar3)) &&
         (iVar3 = (**(code **)(*DAT_1407aaac8 + 0x48))(DAT_1407aaac8,*param_1,0,param_1 + 2),
         -1 < iVar3)) {
        local_2a0 = (longlong *)0x0;
        local_2a8 = (longlong *)0x0;
        uVar7 = 0xa00;
        if (*(char *)(param_1 + 0xb) == '\0') {
          uVar7 = 0x800;
        }
        local_2b8 = &local_2a8;
        local_2c0 = &local_2a0;
        local_2c8 = 0;
        local_2d8 = "vs_4_0";
        local_2e0 = &DAT_14064dd7c;
        local_2e8 = (undefined8 *)0x0;
        local_2d0 = uVar7;
        iVar3 = D3DCompile("void main(uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD0)\n{\n    uv = float2((id << 1) & 2, id & 2);\n    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);\n}\n"
                           ,0xce,"GammaVS",0);
        if (iVar3 < 0) {
          if (local_2a8 != (longlong *)0x0) {
            (**(code **)(*local_2a8 + 0x10))();
          }
        }
        else {
          pcVar1 = *(code **)(*DAT_1407aaac8 + 0x60);
          uVar5 = (**(code **)(*local_2a0 + 0x20))();
          uVar6 = (**(code **)(*local_2a0 + 0x18))();
          local_2e8 = param_1 + 3;
          iVar3 = (*pcVar1)(DAT_1407aaac8,uVar6,uVar5,0);
          (**(code **)(*local_2a0 + 0x10))();
          if (local_2a8 != (longlong *)0x0) {
            (**(code **)(*local_2a8 + 0x10))();
          }
          if (-1 < iVar3) {
            local_2b8 = &local_2a8;
            local_2a8 = (longlong *)0x0;
            local_2c0 = &local_298;
            local_298 = (longlong *)0x0;
            local_2c8 = 0;
            local_2d8 = "ps_4_0";
            local_2e0 = &DAT_14064dd7c;
            local_2e8 = (undefined8 *)0x0;
            local_2d0 = uVar7;
            iVar3 = D3DCompile("cbuffer GammaCB : register(b0)\n{\n    float gamma;\n    float _pad;\n    float2 uvOffset;\n    float2 uvScale;\n    float2 _pad2;\n};\nTexture2D sceneTex : register(t0);\nSamplerState sceneSampler : register(s0);\nfloat4 main(float4 pos : SV_Position, float2 uv : TEXCOORD0) : SV_Target\n{\n    float2 texUV = uvOffset + uv * uvScale;\n    float4 color = sceneTex.Sample(sceneSampler, texUV);\n\n    color.rgb = max(color.rgb, 0.0);\n\n    color.rgb = pow(color.rgb, 1.0 / gamma);\n\n    return color;\n}\n"
                               ,0x1e6,"GammaPS",0);
            if (iVar3 < 0) {
              if (local_2a8 != (longlong *)0x0) {
                (**(code **)(*local_2a8 + 0x10))();
              }
            }
            else {
              pcVar1 = *(code **)(*DAT_1407aaac8 + 0x78);
              uVar5 = (**(code **)(*local_298 + 0x20))();
              uVar6 = (**(code **)(*local_298 + 0x18))();
              local_2e8 = param_1 + 4;
              iVar3 = (*pcVar1)(DAT_1407aaac8,uVar6,uVar5,0);
              (**(code **)(*local_298 + 0x10))();
              if (local_2a8 != (longlong *)0x0) {
                (**(code **)(*local_2a8 + 0x10))();
              }
              if (-1 < iVar3) {
                local_288 = &local_198;
                local_268 = 0;
                local_278 = 0x20;
                local_274 = 2;
                local_270 = 4;
                local_26c = 0x10000;
                local_198 = 0x3f800000;
                uStack_190 = 0;
                local_188 = 0x3f8000003f800000;
                uStack_180 = 0;
                local_280 = 0;
                iVar3 = (**(code **)(*DAT_1407aaac8 + 0x18))
                                  (DAT_1407aaac8,&local_278,&local_288,param_1 + 5);
                if (-1 < iVar3) {
                  local_1a0 = 0;
                  local_1c0 = 0;
                  uStack_1b8 = 0;
                  local_1d0 = 0x300000000;
                  uStack_1c8 = 0x300000003;
                  local_1b0 = 0;
                  uStack_1a8 = 0;
                  iVar3 = (**(code **)(*DAT_1407aaac8 + 0xb8))(DAT_1407aaac8,&local_1d0,param_1 + 6)
                  ;
                  if (-1 < iVar3) {
                    local_210 = 0;
                    local_228 = 0;
                    uStack_220 = 0;
                    local_230 = 3;
                    local_22c = 1;
                    local_218 = 0;
                    iVar3 = (**(code **)(*DAT_1407aaac8 + 0xb0))
                                      (DAT_1407aaac8,&local_230,param_1 + 7);
                    if (-1 < iVar3) {
                      local_204 = 0;
                      local_1d8 = 0;
                      local_1f8 = 0;
                      uStack_1f0 = 0;
                      local_208 = 0;
                      local_1e8 = 0;
                      uStack_1e0 = 0;
                      local_1fc = 0;
                      iVar3 = (**(code **)(*DAT_1407aaac8 + 0xa8))
                                        (DAT_1407aaac8,&local_208,param_1 + 8);
                      if (-1 < iVar3) {
                        FUN_140595d50(local_148,0,0x108);
                        local_124 = 0xf;
                        iVar3 = (**(code **)(*DAT_1407aaac8 + 0xa0))
                                          (DAT_1407aaac8,local_148,param_1 + 9);
                        if (-1 < iVar3) {
                          *(undefined1 *)(param_1 + 10) = 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



// ===== FUN_1402fdda0 @ 0x1402fdda0 [render] =====

void FUN_1402fdda0(longlong *param_1)

{
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
    param_1[9] = 0;
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
    param_1[8] = 0;
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
    param_1[7] = 0;
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
    param_1[6] = 0;
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
    param_1[5] = 0;
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
    param_1[4] = 0;
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
    param_1[3] = 0;
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    param_1[2] = 0;
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
    param_1[1] = 0;
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    *param_1 = 0;
  }
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}



// ===== FUN_1402ff830 @ 0x1402ff830 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140300149) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1402ff830(int param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_2b8 [32];
  longlong *local_298;
  longlong *local_290;
  longlong *local_288;
  longlong *local_280;
  longlong *local_278;
  longlong *local_270;
  longlong *local_268;
  longlong *local_260;
  longlong *local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  int local_238;
  int local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined8 local_224;
  undefined8 local_21c;
  undefined4 local_214;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  int local_1a0;
  int local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined4 local_180;
  undefined8 local_17c;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined4 local_118;
  int local_108;
  int local_104;
  int local_b8;
  int local_b4;
  ulonglong local_68;
  
  local_68 = DAT_1407502c0 ^ (ulonglong)auStack_2b8;
  if ((((param_1 < 1) || (param_2 < 1)) || (DAT_1407aaad0 == (longlong *)0x0)) ||
     (DAT_1407baaaa == '\0')) {
    local_68 = local_68 & 0xffffffffffffff00;
  }
  else {
    if ((DAT_140784770 != DAT_1407aaac8) || (DAT_140784780 != DAT_1407aaad0)) {
      local_290 = DAT_1407aaad0;
      local_298 = DAT_140784780;
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,
                    "[RESIZE] ERROR: RenderManager offset verification failed! device=%p (expected %p) swapchain=%p (expected %p)\n"
                   );
    }
    (**(code **)(*DAT_1407aaad0 + 0x60))(DAT_1407aaad0,&local_108);
    if ((DAT_140789898 != local_108) || (DAT_14078989c != local_104)) {
      local_290 = (longlong *)CONCAT44(local_290._4_4_,local_104);
      local_298 = (longlong *)CONCAT44(local_298._4_4_,local_108);
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,
                    "[RESIZE] WARNING: backBuffer dim offsets wrong: stored=%ux%u, swapchain=%ux%u\n"
                   );
    }
    FUN_1400046b0(&DAT_140784700);
    cVar5 = FUN_1400046bc(&DAT_140784700);
    while (cVar5 == '\0') {
      Sleep(1);
      cVar5 = FUN_1400046bc(&DAT_140784700);
    }
    uVar7 = FUN_140116b40();
    FUN_1402fdda0(uVar7);
    (**(code **)(*DAT_1407aaac0 + 0x370))();
    (**(code **)(*DAT_1407aaac0 + 0x378))();
    if (DAT_1407aaab8 != (longlong *)0x0) {
      (**(code **)(*DAT_1407aaab8 + 0x10))();
      DAT_1407aaab8 = (longlong *)0x0;
    }
    if (DAT_1407aaae0 != (longlong *)0x0) {
      (**(code **)(*DAT_1407aaae0 + 0x10))();
      DAT_1407aaae0 = (longlong *)0x0;
    }
    if (DAT_1407aaad8 != (longlong *)0x0) {
      (**(code **)(*DAT_1407aaad8 + 0x10))();
      DAT_1407aaad8 = (longlong *)0x0;
    }
    lVar3 = DAT_1407c0ab8;
    if (DAT_1407c0ab8 != 0) {
      *(uint *)(DAT_1407c0ab8 + 0x52c) = *(uint *)(DAT_1407c0ab8 + 0x52c) | 2;
      local_170 = 0;
      uStack_168 = 0;
      local_160 = 0;
      uStack_158 = 0;
      local_150 = 0;
      uStack_148 = 0;
      FUN_1403027f0(lVar3 + 0x520);
      do {
        iVar6 = FUN_140303a10(lVar3 + 0x520,&local_170);
        lVar4 = DAT_1407c0ab8;
      } while (iVar6 != 0);
      if (*(longlong **)(DAT_1407c0ab8 + 0xba0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(DAT_1407c0ab8 + 0xba0) + 0x10))();
        *(undefined8 *)(lVar4 + 0xba0) = 0;
      }
      lVar3 = DAT_1407c0ab8;
      if (*(longlong **)(DAT_1407c0ab8 + 3000) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(DAT_1407c0ab8 + 3000) + 0x10))();
        *(undefined8 *)(lVar3 + 3000) = 0;
      }
      *(undefined8 *)(DAT_1407c0ab8 + 0xad0) = 0;
    }
    plVar2 = DAT_1407aaad0;
    local_280 = (longlong *)0x0;
    local_278 = (longlong *)0x0;
    local_270 = (longlong *)0x0;
    iVar6 = (**(code **)*DAT_1407aaac8)(DAT_1407aaac8,&DAT_14064e2e0,&local_280);
    if (-1 < iVar6) {
      iVar6 = (**(code **)(*local_280 + 0x30))(local_280,&DAT_14064e300,&local_278);
      if (iVar6 < 0) {
        (**(code **)(*local_280 + 0x10))();
      }
      else {
        iVar6 = (**(code **)(*local_278 + 0x30))(local_278,&DAT_14064e2f0,&local_270);
        (**(code **)(*local_278 + 0x10))();
        (**(code **)(*local_280 + 0x10))();
        if (-1 < iVar6) {
          local_224 = 0;
          local_210 = 1;
          local_1fc = 0;
          local_1f4 = 0;
          local_228 = 0x1c;
          local_230 = 0x3c;
          local_22c = 1;
          local_214 = 0x30;
          local_208 = DAT_1407aaa70;
          local_21c = 1;
          local_200 = 1;
          local_268 = (longlong *)0x0;
          local_238 = param_1;
          local_234 = param_2;
          iVar6 = (**(code **)(*local_270 + 0x50))(local_270,DAT_1407aaac8,&local_238,&local_268);
          (**(code **)(*local_270 + 0x10))();
          if ((iVar6 < 0) || (local_268 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_14002fe50(&DAT_1407bb5d0,&DAT_14064e1e0,iVar6);
          }
          (**(code **)(*plVar2 + 0x10))(plVar2);
          DAT_1407aaad0 = local_268;
          DAT_140784780 = local_268;
          local_288 = (longlong *)0x0;
          iVar6 = (**(code **)(*local_268 + 0x48))(local_268,0,&DAT_14064e060,&local_288);
          if (-1 < iVar6) {
            iVar6 = (**(code **)(*DAT_1407aaac8 + 0x48))(DAT_1407aaac8,local_288,0,&DAT_1407aaab8);
            if (iVar6 < 0) {
              (**(code **)(*local_288 + 0x10))();
            }
            else {
              iVar6 = (**(code **)(*DAT_1407aaac8 + 0x48))(DAT_1407aaac8,local_288,0,&DAT_140784788)
              ;
              if (iVar6 < 0) {
                (**(code **)(*local_288 + 0x10))();
              }
              else {
                local_120 = 0;
                local_140 = 0;
                uStack_138 = 0;
                local_118 = 0;
                local_130 = 0;
                uStack_128 = 0;
                (**(code **)(*local_288 + 0x50))(local_288,&local_140);
                (**(code **)(*local_288 + 0x10))();
                local_170 = local_140;
                uStack_168 = uStack_138;
                uStack_148 = CONCAT44(uStack_148._4_4_,local_118);
                local_150 = CONCAT44((int)((ulonglong)local_120 >> 0x20),0x28);
                local_160 = local_130;
                uStack_158 = uStack_128;
                local_260 = (longlong *)0x0;
                iVar6 = (**(code **)(*DAT_1407aaac8 + 0x28))(DAT_1407aaac8,&local_170,0,&local_260);
                if (-1 < iVar6) {
                  iVar6 = (**(code **)(*DAT_1407aaac8 + 0x38))
                                    (DAT_1407aaac8,local_260,0,&DAT_1407847b0);
                  (**(code **)(*local_260 + 0x10))();
                  if (-1 < iVar6) {
                    local_17c = 0;
                    local_198 = 1;
                    local_194 = 1;
                    local_190 = 0x2d;
                    local_18c = 1;
                    local_184 = 0;
                    local_180 = 0x40;
                    local_1a0 = param_1;
                    local_19c = param_2;
                    iVar6 = (**(code **)(*DAT_1407aaac8 + 0x28))
                                      (DAT_1407aaac8,&local_1a0,0,&DAT_1407aaad8);
                    if (-1 < iVar6) {
                      local_250 = 0x2d;
                      local_248 = 0;
                      uStack_240 = 0;
                      local_24c = 3;
                      iVar6 = (**(code **)(*DAT_1407aaac8 + 0x50))
                                        (DAT_1407aaac8,DAT_1407aaad8,&local_250,&DAT_1407aaae0);
                      if (-1 < iVar6) {
                        (**(code **)(*DAT_1407aaae0 + 8))();
                        _DAT_1407847f8 = DAT_1407aaae0;
                        DAT_140789898 = param_1;
                        DAT_14078989c = param_2;
                        (**(code **)(*DAT_1407aaac0 + 0x108))(DAT_1407aaac0,1,&DAT_1407aaab8);
                        local_1e8 = 0;
                        uStack_1d8 = 0x3f80000000000000;
                        local_1e0 = CONCAT44((float)param_2,(float)param_1);
                        (**(code **)(*DAT_1407aaac0 + 0x160))(DAT_1407aaac0,1,&local_1e8);
                        _DAT_1407bdab8 = DAT_1407aaab8;
                        _DAT_1407bdac0 = DAT_1407aaae0;
                        DAT_1407bc4a0 = (float)param_1;
                        DAT_1407bc4a4 = (float)param_2;
                    /* WARNING: Subroutine does not return */
                        FUN_14002fe50(&DAT_1407bb5d0,"[UI-INIT] updateScreenSize: %d x %d\n",param_1
                                      ,param_2);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = DAT_1407c0ab8;
    iVar1 = DAT_140754644;
    iVar6 = DAT_140754640;
    if (DAT_1407aaad0 != (longlong *)0x0) {
      (**(code **)(*DAT_1407aaad0 + 0x60))(DAT_1407aaad0,&local_b8);
      if (DAT_1407aaab8 == (longlong *)0x0) {
        local_258 = (longlong *)0x0;
        iVar6 = (**(code **)(*DAT_1407aaad0 + 0x48))(DAT_1407aaad0,0,&DAT_14064e060,&local_258);
        if (-1 < iVar6) {
          (**(code **)(*DAT_1407aaac8 + 0x48))(DAT_1407aaac8,local_258,0,&DAT_1407aaab8);
          (**(code **)(*local_258 + 0x10))();
        }
      }
      if (DAT_1407aaae0 == (longlong *)0x0) {
        uStack_1bc = 1;
        uStack_1b8 = 0;
        uStack_1ac = 0;
        uStack_1a8 = 0;
        uStack_1c8 = 0x100000001;
        local_1c0 = 0x2d;
        uStack_1b4 = 0;
        local_1b0 = 0x40;
        if ((DAT_1407aaad8 != (longlong *)0x0) ||
           ((**(code **)(*DAT_1407aaac8 + 0x28))(DAT_1407aaac8,&local_1d0,0,&DAT_1407aaad8),
           DAT_1407aaad8 != (longlong *)0x0)) {
          local_1e0 = 0;
          uStack_1d8 = 0;
          local_1e8 = 0x30000002d;
          (**(code **)(*DAT_1407aaac8 + 0x50))
                    (DAT_1407aaac8,DAT_1407aaad8,&local_1e8,&DAT_1407aaae0);
        }
      }
      if (DAT_1407aaab8 != (longlong *)0x0) {
        (**(code **)(*DAT_1407aaac0 + 0x108))(DAT_1407aaac0,1,&DAT_1407aaab8,DAT_1407aaae0);
      }
      _DAT_1407bdab8 = DAT_1407aaab8;
      _DAT_1407bdac0 = DAT_1407aaae0;
      if (DAT_1407aaad0 != plVar2) {
        DAT_1407bc4a0 = (float)local_b8;
        DAT_140754640 = local_b8;
        DAT_140754644 = local_b4;
        DAT_1407bc4a4 = (float)local_b4;
                    /* WARNING: Subroutine does not return */
        FUN_14002fe50(&DAT_1407bb5d0,"[UI-INIT] updateScreenSize: %d x %d\n",local_b8,local_b4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"[RESIZE] FAILED but recovered views at %dx%d\n",DAT_140754640,
                    DAT_140754644);
    }
    if ((DAT_1407c0ab8 != 0) &&
       ((DAT_140754640 != *(int *)(DAT_1407c0ab8 + 0xad0) ||
        (DAT_140754644 != *(int *)(DAT_1407c0ab8 + 0xad4))))) {
      *(uint *)(DAT_1407c0ab8 + 0x52c) = *(uint *)(DAT_1407c0ab8 + 0x52c) | 2;
      *(int *)(lVar3 + 0xad0) = iVar6;
      local_1d0 = 0;
      uStack_1c8 = 0;
      *(int *)(lVar3 + 0xad4) = iVar1;
      local_1c0 = 0;
      uStack_1bc = 0;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      local_1b0 = 0;
      uStack_1ac = 0;
      uStack_1a8 = 0;
      uStack_1a4 = 0;
      FUN_1403027f0(lVar3 + 0x520);
      do {
        iVar6 = FUN_140303a10(lVar3 + 0x520,&local_1d0);
        lVar4 = DAT_1407c0ab8;
      } while (iVar6 != 0);
      if (*(longlong **)(DAT_1407c0ab8 + 0xba0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(DAT_1407c0ab8 + 0xba0) + 0x10))();
        *(undefined8 *)(lVar4 + 0xba0) = 0;
      }
      lVar3 = DAT_1407c0ab8;
      if (*(longlong **)(DAT_1407c0ab8 + 3000) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(DAT_1407c0ab8 + 3000) + 0x10))();
        *(undefined8 *)(lVar3 + 3000) = 0;
      }
    }
    FUN_140004518(&DAT_140784700);
    local_68 = 0;
  }
  return local_68;
}



// ===== FUN_140302720 @ 0x140302720 [render] =====

undefined8 FUN_140302720(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x48) >> 0x1c;
  if (uVar2 != 5) {
    if (*(longlong *)(param_1 + 0x20) != param_2) {
      return 0;
    }
    if (uVar2 == 1) {
      lVar1 = *(longlong *)(param_1 + 0x28);
      *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x30) = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x38) = *(undefined8 *)(param_1 + 0x38);
      *(longlong *)(param_1 + 0x30) = lVar1 + 0xb0;
      lVar1 = *(longlong *)(lVar1 + 0xe8);
      *(longlong *)(param_1 + 0x38) = lVar1;
      *(longlong *)(lVar1 + 0x30) = param_1;
      *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x38) = param_1;
      *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfffffff;
      *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 0x20000000;
    }
  }
  return 1;
}



// ===== FUN_140302790 @ 0x140302790 [render] =====

void FUN_140302790(longlong param_1)

{
  longlong lVar1;
  
  if ((*(uint *)(param_1 + 0x48) & 0xf0000000) == 0x20000000) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x30) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x38) = *(undefined8 *)(param_1 + 0x38);
    *(longlong *)(param_1 + 0x30) = lVar1 + 0x60;
    lVar1 = *(longlong *)(lVar1 + 0x98);
    *(longlong *)(param_1 + 0x38) = lVar1;
    *(longlong *)(lVar1 + 0x30) = param_1;
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x38) = param_1;
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfffffff;
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 0x10000000;
  }
  return;
}



// ===== FUN_1403027f0 @ 0x1403027f0 [ui,render] =====

void FUN_1403027f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xe0);
  while (lVar1 != param_1 + 0xb0) {
    lVar2 = *(longlong *)(lVar1 + 0x28);
    *(undefined8 *)(*(longlong *)(lVar1 + 0x38) + 0x30) = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x38) = *(undefined8 *)(lVar1 + 0x38);
    *(longlong *)(lVar1 + 0x30) = lVar2 + 0x60;
    lVar2 = *(longlong *)(lVar2 + 0x98);
    *(longlong *)(lVar1 + 0x38) = lVar2;
    *(longlong *)(lVar2 + 0x30) = lVar1;
    *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x38) = lVar1;
    *(uint *)(lVar1 + 0x48) = *(uint *)(lVar1 + 0x48) & 0xfffffff;
    *(uint *)(lVar1 + 0x48) = *(uint *)(lVar1 + 0x48) | 0x10000000;
    lVar1 = *(longlong *)(param_1 + 0xe0);
  }
  return;
}



// ===== FUN_140302850 @ 0x140302850 [ui,render] =====

void FUN_140302850(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  param_1[3] = param_1[3] & 0xfffffff8;
  param_1[1] = param_3;
  puVar1 = param_1 + 4;
  *param_1 = param_3;
  lVar4 = 0;
  param_1[2] = param_2;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined4 **)(param_1 + 0x12) = puVar1;
  *(undefined4 **)(param_1 + 0x10) = puVar1;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0x70000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined4 **)(param_1 + 0x26) = param_1 + 0x18;
  *(undefined4 **)(param_1 + 0x24) = param_1 + 0x18;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0x70000000;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined4 **)(param_1 + 0x3a) = param_1 + 0x2c;
  *(undefined4 **)(param_1 + 0x38) = param_1 + 0x2c;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  param_1[0x3e] = 0x70000000;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined4 **)(param_1 + 0x4e) = param_1 + 0x40;
  *(undefined4 **)(param_1 + 0x4c) = param_1 + 0x40;
  *(undefined8 *)(param_1 + 0x50) = 0;
  param_1[0x52] = 0x70000000;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined4 **)(param_1 + 0x62) = param_1 + 0x54;
  *(undefined4 **)(param_1 + 0x60) = param_1 + 0x54;
  *(undefined8 *)(param_1 + 100) = 0;
  param_1[0x66] = 0x70000000;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x72) = 0;
  *(undefined4 **)(param_1 + 0x76) = param_1 + 0x68;
  *(undefined4 **)(param_1 + 0x74) = param_1 + 0x68;
  *(undefined8 *)(param_1 + 0x78) = 0;
  param_1[0x7a] = 0x70000000;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x86) = 0;
  *(undefined4 **)(param_1 + 0x8a) = param_1 + 0x7c;
  *(undefined4 **)(param_1 + 0x88) = param_1 + 0x7c;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  param_1[0x8e] = 0x70000000;
  if (0 < param_2) {
    iVar5 = 1;
    lVar6 = lVar4;
    do {
      *(undefined4 **)((longlong)param_1 + lVar6 + 0x278) = param_1;
      puVar3 = puVar1;
      if (lVar4 != 0) {
        puVar3 = param_1 + (longlong)(iVar5 + -2) * 0x14 + 0x94;
      }
      *(undefined4 **)(param_1 + lVar4 * 0x14 + 0xa2) = puVar3;
      puVar3 = puVar1;
      if (iVar5 != param_2) {
        puVar3 = param_1 + (longlong)iVar5 * 0x14 + 0x94;
      }
      lVar2 = lVar4 + 8;
      param_1[lVar4 * 0x14 + 0xa6] = 0;
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 1;
      lVar6 = lVar6 + 0x50;
      *(undefined4 **)(param_1 + lVar2 * 0x14) = puVar3;
    } while (lVar4 < param_2);
  }
  *(undefined4 **)(param_1 + 0x10) = param_1 + 0x94;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x92) = 0;
  *(undefined4 **)(param_1 + 0x12) = param_1 + (longlong)(param_2 + -1) * 0x14 + 0x94;
  return;
}



// ===== FUN_140302ab0 @ 0x140302ab0 [render] =====

longlong FUN_140302ab0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != param_1 + 0x10) {
    lVar2 = *(longlong *)(lVar1 + 0x28);
    *(undefined8 *)(*(longlong *)(lVar1 + 0x38) + 0x30) = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x38) = *(undefined8 *)(lVar1 + 0x38);
    *(longlong *)(lVar1 + 0x30) = lVar2 + 0x1f0;
    lVar2 = *(longlong *)(lVar2 + 0x228);
    *(longlong *)(lVar1 + 0x38) = lVar2;
    *(longlong *)(lVar2 + 0x30) = lVar1;
    *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x38) = lVar1;
    *(undefined4 *)(lVar1 + 0x48) = 0x60000000;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    return lVar1;
  }
  return 0;
}



// ===== FUN_1403035d0 @ 0x1403035d0 [render] =====

void FUN_1403035d0(uint *param_1,int param_2,uint param_3,uint param_4,uint *param_5,int param_6,
                  int param_7)

{
  byte *pbVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  longlong lVar8;
  uint *puVar9;
  byte *pbVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  
  uVar12 = (ulonglong)param_3;
  if (param_4 == 0) {
    if (param_7 == 4) {
      if (param_3 != 0) {
        uVar12 = (ulonglong)param_3;
        do {
          uVar4 = *param_5;
          puVar9 = param_5 + 1;
          puVar13 = param_5 + 1;
          param_5 = param_5 + 2;
          *param_1 = (uVar4 | *puVar9) - ((uVar4 ^ *puVar13) >> 1 & 0x7f7f7f7f);
          uVar12 = uVar12 - 1;
          param_1 = param_1 + 1;
        } while (uVar12 != 0);
        return;
      }
    }
    else {
      if (param_7 != 1) {
LAB_140303736:
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (param_3 != 0) {
        do {
          uVar4 = *param_5;
          pbVar1 = (byte *)((longlong)param_5 + 1);
          param_5 = (uint *)((longlong)param_5 + 2);
          *(char *)param_1 = (char)((byte)uVar4 + 1 + (uint)*pbVar1 >> 1);
          uVar12 = uVar12 - 1;
          param_1 = (uint *)((longlong)param_1 + 1);
        } while (uVar12 != 0);
        return;
      }
    }
  }
  else if (param_3 == 0) {
    if (param_7 == 4) {
      if (param_4 != 0) {
        uVar12 = (ulonglong)param_4;
        do {
          uVar4 = *param_5;
          puVar9 = (uint *)((longlong)param_6 + (longlong)param_5);
          puVar13 = (uint *)((longlong)param_6 + (longlong)param_5);
          param_5 = (uint *)((longlong)param_5 + (longlong)(param_6 * 2));
          *param_1 = (uVar4 | *puVar13) - ((uVar4 ^ *puVar9) >> 1 & 0x7f7f7f7f);
          param_1 = (uint *)((longlong)param_1 + (longlong)param_2);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        return;
      }
    }
    else {
      if (param_7 != 1) goto LAB_140303736;
      if (param_4 != 0) {
        uVar12 = (ulonglong)param_4;
        do {
          uVar4 = *param_5;
          pbVar1 = (byte *)((longlong)param_6 + (longlong)param_5);
          param_5 = (uint *)((longlong)param_5 + (longlong)(param_6 * 2));
          *(char *)param_1 = (char)((byte)uVar4 + 1 + (uint)*pbVar1 >> 1);
          param_1 = (uint *)((longlong)param_1 + (longlong)param_2);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        return;
      }
    }
  }
  else if (param_4 != 0) {
    lVar8 = (longlong)param_6;
    uVar14 = (ulonglong)param_4;
    do {
      puVar9 = (uint *)(lVar8 + (longlong)param_5);
      if (param_7 == 4) {
        if (param_3 != 0) {
          lVar16 = (longlong)param_5 - (longlong)puVar9;
          puVar13 = param_1;
          uVar15 = uVar12;
          do {
            uVar4 = *(uint *)((longlong)puVar9 + lVar16 + 4);
            uVar5 = *(uint *)((longlong)puVar9 + lVar16);
            uVar6 = *puVar9;
            puVar2 = puVar9 + 1;
            puVar9 = puVar9 + 2;
            uVar11 = (*puVar2 >> 2 & 0x3fc03fc0) + 0x800080 +
                     (uVar5 >> 2 & 0x3fc03fc0) + (uVar4 >> 2 & 0x3fc03fc0) +
                     (uVar6 >> 2 & 0x3fc03fc0);
            *puVar13 = ((*puVar2 & 0xff00ff) + 0x20002 +
                        (uVar5 & 0xff00ff) + (uVar4 & 0xff00ff) + (uVar6 & 0xff00ff) >> 2 ^ uVar11)
                       & 0xff00ff ^ uVar11;
            uVar15 = uVar15 - 1;
            puVar13 = puVar13 + 1;
          } while (uVar15 != 0);
        }
      }
      else {
        if (param_7 != 1) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar13 = param_1;
        uVar15 = uVar12;
        if (param_3 != 0) {
          do {
            pbVar1 = (byte *)((longlong)puVar9 + (1 - lVar8));
            pbVar10 = (byte *)((longlong)puVar9 - lVar8);
            pbVar3 = (byte *)((longlong)puVar9 + 1);
            uVar4 = *puVar9;
            puVar9 = (uint *)((longlong)puVar9 + 2);
            *(char *)puVar13 =
                 (char)((uint)*pbVar1 + (uint)*pbVar10 + (uint)*pbVar3 + 2 + (uint)(byte)uVar4 >> 2)
            ;
            uVar15 = uVar15 - 1;
            puVar13 = (uint *)((longlong)puVar13 + 1);
          } while (uVar15 != 0);
        }
      }
      param_1 = (uint *)((longlong)param_1 + (longlong)param_2);
      param_5 = (uint *)((longlong)param_5 + (longlong)(param_6 * 2));
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  return;
}



// ===== FUN_140303900 @ 0x140303900 [render] =====

void FUN_140303900(longlong *param_1,ushort *param_2)

{
  longlong lVar1;
  
  FUN_140303bb0();
  if ((*(uint *)(param_1 + 9) & 0xf0000000) != 0x50000000) {
    if ((*(byte *)(param_1[5] + 0xc) & 1) == 0) {
      if ((longlong *)param_1[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[1] + 0x10))();
        param_1[1] = 0;
      }
      if ((longlong *)param_1[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[2] + 0x10))();
        param_1[2] = 0;
      }
      if ((longlong *)*param_1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*param_1 + 0x10))();
        *param_1 = 0;
      }
    }
    else {
      if ((longlong *)*param_1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*param_1 + 0x10))();
        *param_1 = 0;
      }
      if ((longlong *)param_1[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[1] + 0x10))();
        param_1[1] = 0;
      }
    }
  }
  *param_2 = *param_2 | 8;
  param_2[3] = param_2[3] + 1;
  *(uint *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + (*(uint *)(param_1 + 9) & 0xfffffff);
  *(int *)param_1[5] = *(int *)param_1[5] + (*(uint *)(param_1 + 9) & 0xfffffff);
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xf0000000;
  lVar1 = param_1[5];
  param_1[4] = 0;
  *(longlong *)(param_1[7] + 0x30) = param_1[6];
  *(longlong *)(param_1[6] + 0x38) = param_1[7];
  param_1[6] = lVar1 + 0x10;
  lVar1 = *(longlong *)(lVar1 + 0x48);
  param_1[7] = lVar1;
  *(longlong **)(lVar1 + 0x30) = param_1;
  *(longlong **)(param_1[6] + 0x38) = param_1;
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfffffff;
  return;
}



// ===== FUN_140303a10 @ 0x140303a10 [ui,render] =====

undefined8 FUN_140303a10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char *pcVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x90);
  if ((lVar1 != param_1 + 0x60) && (lVar1 != 0)) {
    if (((*(byte *)(param_1 + 0xc) & 1) != 0) && (*(longlong *)(lVar1 + 0x20) != 0)) {
      IggyDiscardVertexBufferCallback(*(longlong *)(lVar1 + 0x20),lVar1);
    }
    if ((*(ulonglong *)(param_1 + 0x248) < *(ulonglong *)(lVar1 + 0x40)) &&
       ((*(uint *)(param_1 + 0xc) & 2) == 0)) {
      pcVar2 = "GDraw Thrashing texture memory";
      if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
        pcVar2 = "GDraw Thrashing vertex memory";
      }
      IggyGDrawSendWarning(0,pcVar2);
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
    }
    FUN_140303900(lVar1,param_2);
    return 1;
  }
  return 0;
}



// ===== FUN_140303ac0 @ 0x140303ac0 [render] =====

longlong FUN_140303ac0(int *param_1,int param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = "GDraw Out of texture %s";
  if (param_1[1] < param_2) {
    bVar1 = *(byte *)(param_1 + 3);
    pcVar6 = "memory (single resource larger than entire pool)";
LAB_140303b30:
    pcVar4 = "GDraw Out of texture %s";
    if ((bVar1 & 1) != 0) {
      pcVar4 = "GDraw Out of static vertex buffer %s";
    }
    IggyGDrawSendWarning(0,pcVar4,pcVar6);
  }
  else {
    iVar2 = *param_1;
    while (iVar2 < param_2) {
      iVar2 = FUN_140303a10(param_1,param_3);
      if (iVar2 == 0) {
        bVar1 = *(byte *)(param_1 + 3);
        pcVar6 = "memory";
        goto LAB_140303b30;
      }
      iVar2 = *param_1;
    }
  }
  lVar3 = FUN_140302ab0(param_1);
  if (((lVar3 == 0) && (iVar2 = FUN_140303a10(param_1,param_3), iVar2 != 0)) &&
     (lVar3 = FUN_140302ab0(param_1), lVar3 == 0)) {
    if ((*(byte *)(param_1 + 3) & 1) != 0) {
      pcVar5 = "GDraw Out of static vertex buffer %s";
    }
    IggyGDrawSendWarning(0,pcVar5,"handles");
  }
  return lVar3;
}



// ===== FUN_140303bb0 @ 0x140303bb0 [render] =====

void FUN_140303bb0(void)

{
  longlong *plVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10 [3];
  
  plVar1 = *(longlong **)(DAT_1407c0ab8 + 8);
  local_res10[0] = 0;
  local_res8[0] = 0;
  (**(code **)(*plVar1 + 0x40))(plVar1,0,3,&DAT_1407c1898);
  (**(code **)(*plVar1 + 0x90))(plVar1,0,1,local_res10,local_res8,local_res8);
  (**(code **)(*plVar1 + 0x98))(plVar1,0,0,0);
  return;
}



// ===== FUN_140303c60 @ 0x140303c60 [render] =====

longlong FUN_140303c60(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong local_18 [2];
  
  lVar1 = DAT_1407c0ab8;
  if (*(uint *)(param_1 + 1) < param_2) {
    IggyGDrawSendWarning
              (0,
               "GDraw dynamic vertex buffer usage of %d bytes in one call larger than buffer size %d"
               ,param_2);
    return 0;
  }
  uVar3 = param_2;
  if (param_2 < *(uint *)(DAT_1407c0ab8 + 0xee8)) {
    uVar3 = *(uint *)(DAT_1407c0ab8 + 0xee8);
  }
  *(uint *)(DAT_1407c0ab8 + 0xee8) = uVar3;
  iVar2 = 0;
  if (param_2 <= (uint)(*(int *)(param_1 + 1) - *(int *)(param_1 + 2))) {
    iVar2 = *(int *)(param_1 + 2);
  }
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  iVar2 = (**(code **)(**(longlong **)(lVar1 + 8) + 0x70))
                    (*(longlong **)(lVar1 + 8),*param_1,0,(iVar2 != 0) + '\x04',0,local_18);
  if (iVar2 < 0) {
    if (iVar2 == -0x7ff8fff2) {
      IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
      return 0;
    }
    IggyGDrawSendWarning(0,"GDraw D3D error in %s%s: 0x%08x",&DAT_14064e31c,"of buffer",iVar2);
    return 0;
  }
  if (local_18[0] != 0) {
    local_18[0] = local_18[0] + (ulonglong)*(uint *)((longlong)param_1 + 0xc);
    *(uint *)(param_1 + 2) = *(uint *)((longlong)param_1 + 0xc) + param_2;
  }
  return local_18[0];
}



// ===== FUN_140303d80 @ 0x140303d80 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140303d80(uint param_1,uint param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  int *piVar12;
  undefined8 *puVar13;
  undefined1 auStack_b8 [32];
  int local_98;
  undefined1 local_88 [12];
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  ulonglong local_50;
  
  puVar2 = DAT_1407c0ab8;
  local_50 = DAT_1407502c0 ^ (ulonglong)auStack_b8;
  iVar6 = 0;
  *(int *)(DAT_1407c0ab8 + 0x1d1) = *(int *)(DAT_1407c0ab8 + 0x1d1) + 1;
  puVar3 = (uint *)(puVar2 + 0x191);
  iVar1 = *(int *)(puVar2 + 0x1d1);
  uVar7 = ((uint)CONCAT11(param_4,param_3) << 7 | param_1) * 2 | param_2;
  lVar5 = 0;
  do {
    if (*puVar3 == uVar7) {
      *(int *)((longlong)puVar2 + (longlong)iVar6 * 4 + 0xe08) = iVar1;
      return puVar2[(longlong)iVar6 + 0x1a1];
    }
    iVar6 = iVar6 + 1;
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 1;
  } while (lVar5 < 0x20);
  iVar6 = 0;
  piVar12 = (int *)(puVar2 + 0x1c1);
  plVar11 = puVar2 + 0x1a1;
  uVar10 = 0;
  iVar8 = 0;
  do {
    iVar9 = iVar6;
    if (*plVar11 == 0) break;
    uVar4 = iVar1 - *piVar12;
    if ((uint)(iVar1 - *piVar12) <= uVar10) {
      uVar4 = uVar10;
      iVar9 = iVar8;
    }
    iVar6 = iVar6 + 1;
    plVar11 = plVar11 + 1;
    piVar12 = piVar12 + 1;
    uVar10 = uVar4;
    iVar8 = iVar9;
  } while (iVar6 < 0x20);
  lVar5 = (longlong)iVar9;
  puVar13 = puVar2;
  if ((longlong *)puVar2[lVar5 + 0x1a1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)puVar2[lVar5 + 0x1a1] + 0x10))();
    puVar13 = DAT_1407c0ab8;
    puVar2[lVar5 + 0x1a1] = 0;
  }
  (**(code **)(*(longlong *)puVar13[(longlong)(int)param_2 + (longlong)(int)param_1 * 2 + 0x18d] +
              0x38))((longlong *)
                     puVar13[(longlong)(int)param_2 + (longlong)(int)param_1 * 2 + 0x18d],local_88);
  local_7c = 1;
  local_74 = 0x100000001;
  uStack_6c = 0x300000003;
  local_64 = 0x100000001;
  uStack_5c = 0x300000003;
  local_78 = param_3;
  local_77 = param_4;
  local_98 = (**(code **)(*(longlong *)*DAT_1407c0ab8 + 0xa8))
                       ((longlong *)*DAT_1407c0ab8,local_88,DAT_1407c0ab8 + lVar5 + 0x1a1);
  if (local_98 < 0) {
    if (local_98 == -0x7ff8fff2) {
      IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
    }
    else {
      IggyGDrawSendWarning
                (0,"GDraw D3D error in %s%s: 0x%08x","CreateDepthStencilState",&DAT_140608a38);
    }
  }
  puVar2 = DAT_1407c0ab8;
  *(uint *)((longlong)DAT_1407c0ab8 + lVar5 * 4 + 0xc88) = uVar7;
  *(int *)((longlong)puVar2 + lVar5 * 4 + 0xe08) = iVar1;
  return puVar2[lVar5 + 0x1a1];
}



// ===== FUN_140303f70 @ 0x140303f70 [render] =====

undefined8 * FUN_140303f70(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  puVar2 = (undefined8 *)FUN_140303ac0(*(undefined8 *)(DAT_1407c0ab8 + 0x1008),0,&local_38);
  *(uint *)(puVar2 + 9) = *(uint *)(puVar2 + 9) & 0xf0000000;
  lVar1 = puVar2[5];
  *puVar2 = 0;
  puVar2[2] = 0;
  puVar2[4] = 0;
  puVar2[1] = param_1;
  *(undefined4 *)(puVar2 + 3) = 1;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = 1;
  *(undefined8 *)(puVar2[7] + 0x30) = puVar2[6];
  *(undefined8 *)(puVar2[6] + 0x38) = puVar2[7];
  puVar2[6] = lVar1 + 0x1a0;
  lVar1 = *(longlong *)(lVar1 + 0x1d8);
  puVar2[7] = lVar1;
  *(undefined8 **)(lVar1 + 0x30) = puVar2;
  *(undefined8 **)(puVar2[6] + 0x38) = puVar2;
  *(uint *)(puVar2 + 9) = *(uint *)(puVar2 + 9) & 0xfffffff;
  *(uint *)(puVar2 + 9) = *(uint *)(puVar2 + 9) | 0x50000000;
  return puVar2;
}



// ===== FUN_140304040 @ 0x140304040 [render] =====

undefined8
FUN_140304040(longlong param_1,int param_2,int param_3,int param_4,uint param_5,longlong *param_6,
             undefined8 param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = 0;
  iVar6 = 0;
  if ((param_2 < 0x4000) && (param_3 < 0x4000)) {
    uVar7 = 0x1c;
    if (param_4 != 0) {
      uVar7 = 0x3d;
    }
    iVar8 = 4;
    if (param_4 != 0) {
      iVar8 = 1;
    }
    do {
      iVar1 = param_2 >> ((byte)iVar6 & 0x1f);
      iVar5 = 1;
      if (1 < iVar1) {
        iVar5 = iVar1;
      }
      iVar2 = param_3 >> ((byte)iVar6 & 0x1f);
      iVar1 = 1;
      if (1 < iVar2) {
        iVar1 = iVar2;
      }
      iVar6 = iVar6 + 1;
      iVar9 = iVar9 + iVar8 * iVar1 * iVar5;
    } while (((param_5 & 1) != 0) &&
            ((param_2 >> ((byte)iVar6 & 0x1f) != 0 || (param_3 >> ((byte)iVar6 & 0x1f) != 0))));
    lVar3 = IggyGDrawMallocAnnotated
                      ((longlong)iVar9,
                       "D:\\a\\MinecraftConsoles\\MinecraftConsoles\\Minecraft.Client\\Windows64\\Iggy\\gdraw\\gdraw_d3d1x_shared.inl"
                       ,0x1b2);
    *param_6 = lVar3;
    if (lVar3 == 0) {
      IggyGDrawSendWarning
                (0,"GDraw out of memory to store texture data to pass to D3D for %d x %d texture",
                 param_2,param_3);
    }
    else {
      puVar4 = (undefined8 *)FUN_140303ac0(*(undefined8 *)(DAT_1407c0ab8 + 0x1008),iVar9,param_7);
      if (puVar4 != (undefined8 *)0x0) {
        *(int *)(puVar4 + 3) = param_2;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        *(int *)((longlong)puVar4 + 0x1c) = param_3;
        *(int *)(param_6 + 0xf) = iVar8;
        *(undefined4 *)(param_6 + 2) = 0;
        param_6[4] = (longlong)puVar4;
        param_6[5] = param_1;
        *(int *)((longlong)param_6 + 0xc) = iVar8 * param_2;
        *(int *)(param_6 + 0xc) = param_2;
        *(int *)((longlong)param_6 + 100) = param_3;
        *(uint *)(param_6 + 0xd) = param_5;
        *(undefined4 *)((longlong)param_6 + 0x6c) = uVar7;
        *(int *)(param_6 + 0xe) = iVar9;
        *(int *)((longlong)param_6 + 0x74) = iVar6;
        *(int *)(param_6 + 1) = param_3;
        return 1;
      }
      IggyGDrawFree(*param_6);
    }
    return 0;
  }
  IggyGDrawSendWarning
            (0,"GDraw texture size too large (%d x %d), dimension limit is 16384",param_2,param_3);
  return 0;
}



// ===== FUN_1403041f0 @ 0x1403041f0 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1403041f0(longlong *param_1,ushort *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined4 local_240;
  int local_238;
  int local_228;
  int local_224;
  int local_220;
  longlong *local_218;
  longlong *local_210;
  ushort *local_208;
  int local_200;
  int local_1fc;
  int local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined8 local_1ec;
  uint local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0 [2];
  longlong local_1c8;
  int local_1c0 [94];
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStack_268;
  local_218 = (longlong *)param_1[4];
  iVar5 = (int)param_1[0xc];
  iVar10 = 0;
  local_220 = *(int *)((longlong)param_1 + 0x74);
  lVar7 = (longlong)local_220;
  lVar13 = param_1[0xf];
  iVar1 = *(int *)((longlong)param_1 + 100);
  local_228 = iVar5;
  local_224 = iVar1;
  local_210 = param_1;
  local_208 = param_2;
  if (0 < local_220) {
    puVar14 = &local_1d8;
    lVar15 = *param_1;
    do {
      *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
      puVar14[2] = lVar15;
      iVar11 = iVar5 >> ((byte)iVar10 & 0x1f);
      iVar6 = 1;
      if (1 < iVar11) {
        iVar6 = iVar11;
      }
      iVar12 = iVar1 >> ((byte)iVar10 & 0x1f);
      iVar6 = iVar6 * (int)lVar13;
      iVar11 = 1;
      if (1 < iVar12) {
        iVar11 = iVar12;
      }
      *(int *)(puVar14 + 3) = iVar6;
      if (iVar10 != 0) {
        local_240 = *(undefined4 *)(puVar14 + 1);
        local_248 = *puVar14;
        local_238 = (int)lVar13;
        FUN_1403035d0(lVar15);
      }
      iVar10 = iVar10 + 1;
      lVar7 = lVar7 + -1;
      puVar14 = puVar14 + 2;
      lVar15 = lVar15 + (ulonglong)(uint)(iVar6 * iVar11);
    } while (lVar7 != 0);
  }
  puVar4 = local_208;
  plVar3 = local_210;
  plVar8 = local_218;
  local_1f0 = *(undefined4 *)((longlong)local_210 + 0x6c);
  pcVar9 = "CreateTexture2D";
  local_1e4 = ~(*(uint *)(local_210 + 0xd) >> 1) & 1;
  local_1d8._0_4_ = 0;
  local_1f4 = 1;
  local_1ec = 1;
  local_1e0 = 8;
  local_200 = local_228;
  local_1fc = local_224;
  local_1f8 = local_220;
  iVar5 = (**(code **)(*(longlong *)*DAT_1407c0ab8 + 0x28))
                    ((longlong *)*DAT_1407c0ab8,&local_200,&local_1c8,local_218);
  if (-1 < iVar5) {
    pcVar9 = "CreateShaderResourceView";
    iVar5 = (**(code **)(*(longlong *)*DAT_1407c0ab8 + 0x38))
                      ((longlong *)*DAT_1407c0ab8,*plVar8,0,plVar8 + 1);
    if (-1 < iVar5) {
      uVar2 = *(uint *)(plVar3 + 0xe);
      lVar13 = 2;
      if ((*(byte *)(plVar3 + 0xd) & 4) != 0) {
        lVar13 = 4;
      }
      plVar8[4] = plVar3[5];
      *(uint *)(plVar8 + 9) = *(uint *)(plVar8 + 9) ^ (*(uint *)(plVar8 + 9) ^ uVar2) & 0xfffffff;
      *(int *)plVar8[5] = *(int *)plVar8[5] - uVar2;
      lVar7 = plVar8[5] + lVar13 * 0x50 + 0x10;
      *(longlong *)(plVar8[7] + 0x30) = plVar8[6];
      *(longlong *)(plVar8[6] + 0x38) = plVar8[7];
      plVar8[6] = lVar7;
      lVar7 = *(longlong *)(lVar7 + 0x38);
      plVar8[7] = lVar7;
      *(longlong **)(lVar7 + 0x30) = plVar8;
      *(longlong **)(plVar8[6] + 0x38) = plVar8;
      *(uint *)(plVar8 + 9) = *(uint *)(plVar8 + 9) & 0xfffffff;
      *(uint *)(plVar8 + 9) = *(uint *)(plVar8 + 9) | (int)lVar13 << 0x1c;
      *puVar4 = *puVar4 | 4;
      puVar4[5] = puVar4[5] + 1;
      *(int *)(puVar4 + 0xe) = *(int *)(puVar4 + 0xe) + (int)plVar3[0xe];
      goto LAB_140304511;
    }
  }
  if ((longlong *)*plVar8 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar8 + 0x10))();
    *plVar8 = 0;
  }
  if ((longlong *)plVar8[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)plVar8[1] + 0x10))();
    plVar8[1] = 0;
  }
  lVar13 = plVar8[5];
  *(longlong *)(plVar8[7] + 0x30) = plVar8[6];
  *(longlong *)(plVar8[6] + 0x38) = plVar8[7];
  plVar8[6] = lVar13 + 0x10;
  lVar13 = *(longlong *)(lVar13 + 0x48);
  plVar8[7] = lVar13;
  *(longlong **)(lVar13 + 0x30) = plVar8;
  *(longlong **)(plVar8[6] + 0x38) = plVar8;
  *(uint *)(plVar8 + 9) = *(uint *)(plVar8 + 9) & 0xfffffff;
  plVar8 = (longlong *)0x0;
  if (iVar5 == -0x7ff8fff2) {
    IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
  }
  else {
    local_248 = CONCAT44(local_248._4_4_,iVar5);
    IggyGDrawSendWarning(0,"GDraw D3D error in %s%s: 0x%08x",pcVar9," while creating texture");
  }
LAB_140304511:
  IggyGDrawFree(*plVar3);
  return plVar8;
}



// ===== FUN_140304660 @ 0x140304660 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140304660(int param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  int local_78;
  undefined8 local_68;
  int local_60;
  undefined4 local_5c;
  int local_58 [12];
  ulonglong local_28;
  
  puVar1 = DAT_1407c0ab8;
  local_28 = DAT_1407502c0 ^ (ulonglong)auStack_98;
  if ((longlong *)DAT_1407c0ab8[0x179] != (longlong *)0x0) {
    (**(code **)(*(longlong *)DAT_1407c0ab8[0x179] + 0x10))();
    puVar1[0x179] = 0;
  }
  puVar1 = DAT_1407c0ab8;
  if ((longlong *)DAT_1407c0ab8[0x178] != (longlong *)0x0) {
    (**(code **)(*(longlong *)DAT_1407c0ab8[0x178] + 0x10))();
    puVar1[0x178] = 0;
  }
  local_60 = param_1 * 4;
  local_58[1] = 1;
  local_58[2] = 1;
  local_58[3] = 1;
  local_58[4] = 0x1c;
  local_58[5] = 1;
  local_58[6] = 0;
  local_58[7] = 1;
  local_58[8] = 8;
  local_58[9] = 0;
  local_58[10] = 0;
  local_5c = 0;
  local_68 = param_2;
  local_58[0] = param_1;
  iVar2 = (**(code **)(*(longlong *)*DAT_1407c0ab8 + 0x28))
                    ((longlong *)*DAT_1407c0ab8,local_58,&local_68,DAT_1407c0ab8 + 0x178);
  if (iVar2 < 0) {
    if (iVar2 == -0x7ff8fff2) {
      IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
    }
    else {
      local_78 = iVar2;
      IggyGDrawSendWarning(0,"GDraw D3D error in %s%s: 0x%08x","CreateTexture2D",&DAT_140608a38);
    }
  }
  else {
    iVar2 = (**(code **)(*(longlong *)*DAT_1407c0ab8 + 0x38))
                      ((longlong *)*DAT_1407c0ab8,DAT_1407c0ab8[0x178],0,DAT_1407c0ab8 + 0x179);
    if (iVar2 < 0) {
      if (iVar2 == -0x7ff8fff2) {
        IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
      }
      else {
        local_78 = iVar2;
        IggyGDrawSendWarning
                  (0,"GDraw D3D error in %s%s: 0x%08x","CreateShaderResourceView",
                   " while creating texture");
      }
      puVar1 = DAT_1407c0ab8;
      if ((longlong *)DAT_1407c0ab8[0x178] != (longlong *)0x0) {
        (**(code **)(*(longlong *)DAT_1407c0ab8[0x178] + 0x10))();
        puVar1[0x178] = 0;
      }
    }
  }
  return;
}



// ===== FUN_140304820 @ 0x140304820 [render] =====

undefined8
FUN_140304820(longlong param_1,undefined8 param_2,int param_3,int param_4,longlong *param_5,
             undefined8 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = IggyGDrawMallocAnnotated
                    ((longlong)param_3,
                     "D:\\a\\MinecraftConsoles\\MinecraftConsoles\\Minecraft.Client\\Windows64\\Iggy\\gdraw\\gdraw_d3d1x_shared.inl"
                     ,0x266);
  *param_5 = lVar1;
  lVar1 = IggyGDrawMallocAnnotated
                    ((longlong)param_4,
                     "D:\\a\\MinecraftConsoles\\MinecraftConsoles\\Minecraft.Client\\Windows64\\Iggy\\gdraw\\gdraw_d3d1x_shared.inl"
                     ,0x267);
  param_5[1] = lVar1;
  if (((*param_5 != 0) && (lVar1 != 0)) &&
     (puVar2 = (undefined8 *)
               FUN_140303ac0(*(undefined8 *)(DAT_1407c0ab8 + 0x1010),param_3 + param_4,param_6),
     puVar2 != (undefined8 *)0x0)) {
    *puVar2 = 0;
    puVar2[1] = 0;
    param_5[3] = (longlong)puVar2;
    *(int *)(param_5 + 2) = param_3;
    *(int *)((longlong)param_5 + 0x14) = param_4;
    param_5[4] = param_1;
    return 1;
  }
  if (*param_5 != 0) {
    IggyGDrawFree();
  }
  if (param_5[1] != 0) {
    IggyGDrawFree();
  }
  return 0;
}



// ===== FUN_140304900 @ 0x140304900 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_140304900(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1407502c0 ^ (ulonglong)auStack_a8;
  local_58 = *(undefined4 *)(param_1 + 2);
  plVar3 = (longlong *)param_1[3];
  local_78 = *param_1;
  local_40 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_68 = param_1[1];
  local_54 = 1;
  local_3c = 1;
  local_50 = 1;
  local_48 = 0;
  local_70 = 0;
  local_38 = 2;
  local_30 = 0;
  local_60 = 0;
  iVar2 = (**(code **)(*(longlong *)*DAT_1407c0ab8 + 0x18))
                    ((longlong *)*DAT_1407c0ab8,&local_58,&local_78,plVar3);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*(longlong *)*DAT_1407c0ab8 + 0x18))
                      ((longlong *)*DAT_1407c0ab8,&local_40,&local_68,plVar3 + 1);
    if (-1 < iVar2) {
      uVar4 = *(int *)((longlong)param_1 + 0x14) + *(int *)(param_1 + 2);
      lVar1 = param_1[4];
      *(uint *)(plVar3 + 9) = *(uint *)(plVar3 + 9) ^ (uVar4 ^ *(uint *)(plVar3 + 9)) & 0xfffffff;
      plVar3[4] = lVar1;
      *(int *)plVar3[5] = *(int *)plVar3[5] - uVar4;
      lVar1 = plVar3[5];
      *(longlong *)(plVar3[7] + 0x30) = plVar3[6];
      *(longlong *)(plVar3[6] + 0x38) = plVar3[7];
      plVar3[6] = lVar1 + 0xb0;
      lVar1 = *(longlong *)(lVar1 + 0xe8);
      plVar3[7] = lVar1;
      *(longlong **)(lVar1 + 0x30) = plVar3;
      *(longlong **)(plVar3[6] + 0x38) = plVar3;
      *(uint *)(plVar3 + 9) = *(uint *)(plVar3 + 9) & 0xfffffff;
      *(uint *)(plVar3 + 9) = *(uint *)(plVar3 + 9) | 0x20000000;
      goto LAB_140304ada;
    }
  }
  if ((longlong *)*plVar3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar3 + 0x10))();
    *plVar3 = 0;
  }
  if ((longlong *)plVar3[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)plVar3[1] + 0x10))();
    plVar3[1] = 0;
  }
  lVar1 = plVar3[5];
  *(longlong *)(plVar3[7] + 0x30) = plVar3[6];
  *(longlong *)(plVar3[6] + 0x38) = plVar3[7];
  plVar3[6] = lVar1 + 0x10;
  lVar1 = *(longlong *)(lVar1 + 0x48);
  plVar3[7] = lVar1;
  *(longlong **)(lVar1 + 0x30) = plVar3;
  *(longlong **)(plVar3[6] + 0x38) = plVar3;
  *(uint *)(plVar3 + 9) = *(uint *)(plVar3 + 9) & 0xfffffff;
  plVar3 = (longlong *)0x0;
  if (iVar2 == -0x7ff8fff2) {
    IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
    plVar3 = (longlong *)0x0;
  }
  else {
    local_88 = iVar2;
    IggyGDrawSendWarning
              (0,"GDraw D3D error in %s%s: 0x%08x","CreateBuffer"," creating vertex buffer");
  }
LAB_140304ada:
  IggyGDrawFree(*param_1);
  IggyGDrawFree(param_1[1]);
  return plVar3;
}



// ===== FUN_140304b40 @ 0x140304b40 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_140304b40(ushort *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 auStack_98 [32];
  int local_78;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1407502c0 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)DAT_1407c0ab8[0xb6];
  if ((plVar3 == DAT_1407c0ab8 + 0xb0) || (plVar3 == (longlong *)0x0)) {
    iVar5 = *(int *)((longlong)DAT_1407c0ab8 + 0xad4) * *(int *)(DAT_1407c0ab8 + 0x15a);
    uVar6 = iVar5 * 4;
    if (*(int *)(DAT_1407c0ab8 + 0xa4) < (int)uVar6) {
      IggyGDrawSendWarning
                (0,"GDraw rendertarget allocation failed: hit size limit of %d bytes",
                 *(undefined4 *)((longlong)DAT_1407c0ab8 + 0x524));
      plVar3 = (longlong *)0x0;
    }
    else {
      puVar7 = DAT_1407c0ab8;
      plVar3 = (longlong *)FUN_140302ab0();
      if (plVar3 == (longlong *)0x0) {
        IggyGDrawSendWarning(0,"GDraw rendertarget allocation failed: hit handle limit");
        plVar3 = (longlong *)0x0;
      }
      else {
        local_68 = *(undefined4 *)(puVar7 + 0x15a);
        local_64 = *(undefined4 *)((longlong)puVar7 + 0xad4);
        local_60 = 1;
        local_5c = 1;
        local_58 = 0x1c;
        local_54 = 1;
        local_48 = 0x28;
        local_4c = 0;
        local_40 = 0;
        *plVar3 = 0;
        plVar3[1] = 0;
        plVar3[2] = 0;
        iVar2 = (**(code **)(*(longlong *)*puVar7 + 0x28))((longlong *)*puVar7,&local_68,0,plVar3);
        if (-1 < iVar2) {
          iVar2 = (**(code **)(*(longlong *)*DAT_1407c0ab8 + 0x38))
                            ((longlong *)*DAT_1407c0ab8,*plVar3,0,plVar3 + 1);
        }
        pcVar4 = "CreateTexture2D";
        if (-1 < iVar2) {
          iVar2 = (**(code **)(*(longlong *)*DAT_1407c0ab8 + 0x48))
                            ((longlong *)*DAT_1407c0ab8,*plVar3,0,plVar3 + 2);
          pcVar4 = "CreateRenderTargetView";
          if (-1 < iVar2) {
            plVar3[4] = 1;
            *(uint *)(plVar3 + 9) =
                 *(uint *)(plVar3 + 9) ^ (*(uint *)(plVar3 + 9) ^ uVar6) & 0xfffffff;
            *(int *)plVar3[5] = *(int *)plVar3[5] + iVar5 * -4;
            lVar1 = plVar3[5];
            *(longlong *)(plVar3[7] + 0x30) = plVar3[6];
            *(longlong *)(plVar3[6] + 0x38) = plVar3[7];
            plVar3[6] = lVar1 + 0xb0;
            lVar1 = *(longlong *)(lVar1 + 0xe8);
            plVar3[7] = lVar1;
            *(longlong **)(lVar1 + 0x30) = plVar3;
            *(longlong **)(plVar3[6] + 0x38) = plVar3;
            *(uint *)(plVar3 + 9) = *(uint *)(plVar3 + 9) & 0xfffffff;
            *(uint *)(plVar3 + 9) = *(uint *)(plVar3 + 9) | 0x20000000;
            *param_1 = *param_1 | 4;
            param_1[5] = param_1[5] + 1;
            *(uint *)(param_1 + 0xe) = *(int *)(param_1 + 0xe) + uVar6;
            return plVar3;
          }
        }
        if ((longlong *)*plVar3 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar3 + 0x10))();
          *plVar3 = 0;
        }
        if ((longlong *)plVar3[1] != (longlong *)0x0) {
          (**(code **)(*(longlong *)plVar3[1] + 0x10))();
          plVar3[1] = 0;
        }
        if ((longlong *)plVar3[2] != (longlong *)0x0) {
          (**(code **)(*(longlong *)plVar3[2] + 0x10))();
          plVar3[2] = 0;
        }
        lVar1 = plVar3[5];
        *(longlong *)(plVar3[7] + 0x30) = plVar3[6];
        *(longlong *)(plVar3[6] + 0x38) = plVar3[7];
        plVar3[6] = lVar1 + 0x10;
        lVar1 = *(longlong *)(lVar1 + 0x48);
        plVar3[7] = lVar1;
        *(longlong **)(lVar1 + 0x30) = plVar3;
        *(longlong **)(plVar3[6] + 0x38) = plVar3;
        *(uint *)(plVar3 + 9) = *(uint *)(plVar3 + 9) & 0xfffffff;
        if (iVar2 == -0x7ff8fff2) {
          IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
        }
        else {
          local_78 = iVar2;
          IggyGDrawSendWarning(0,"GDraw D3D error in %s%s: 0x%08x",pcVar4," creating rendertarget");
        }
        plVar3 = (longlong *)0x0;
      }
    }
  }
  else {
    FUN_140302720(plVar3,1);
  }
  return plVar3;
}



// ===== FUN_140304ee0 @ 0x140304ee0 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140304ee0(int param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_1407502c0 ^ (ulonglong)auStack_78;
  local_48 = (float)param_1;
  local_38 = 0;
  local_34 = 0x3f800000;
  local_44 = (float)param_2;
  local_40 = (float)param_3;
  local_3c = (float)param_4;
  (**(code **)(**(longlong **)(DAT_1407c0ab8 + 8) + 0x160))
            (*(longlong **)(DAT_1407c0ab8 + 8),1,&local_48);
  lVar1 = DAT_1407c0ab8;
  local_50 = param_3 + param_1;
  local_4c = param_4 + param_2;
  *(int *)(DAT_1407c0ab8 + 0xb0c) = param_1;
  *(int *)(lVar1 + 0xb10) = param_2;
  *(int *)(lVar1 + 0xb14) = param_3;
  *(int *)(lVar1 + 0xb18) = param_4;
  local_58 = param_1;
  local_54 = param_2;
  (**(code **)(**(longlong **)(lVar1 + 8) + 0x168))(*(longlong **)(lVar1 + 8),1,&local_58);
  *(undefined4 *)(DAT_1407c0ab8 + 0xef4) = 0;
  return;
}



// ===== FUN_140304fe0 @ 0x140304fe0 [render] =====

void FUN_140304fe0(int param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  lVar1 = DAT_1407c0ab8;
  *(float *)(DAT_1407c0ab8 + 0xb1c) = 2.0 / (float)(param_2 - param_1);
  *(float *)(lVar1 + 0xb20) = 2.0 / (float)(param_4 - param_3);
  *(float *)(lVar1 + 0xb24) = (float)(param_1 + param_2) / (float)(param_1 - param_2);
  *(float *)(lVar1 + 0xb28) = (float)(param_3 + param_4) / (float)(param_3 - param_4);
  *(undefined8 *)(lVar1 + 0xb2c) = 0;
  *(undefined8 *)(lVar1 + 0xb34) = 0;
  *(undefined8 *)(lVar1 + 0xb3c) = 0;
  *(undefined8 *)(lVar1 + 0xb44) = 0;
  *(undefined8 *)(lVar1 + 0xb4c) = 0;
  *(undefined8 *)(lVar1 + 0xb54) = 0;
  *(undefined4 *)(lVar1 + 0xb2c) = *(undefined4 *)(lVar1 + 0xb1c);
  *(undefined4 *)(lVar1 + 0xb40) = *(undefined4 *)(lVar1 + 0xb20);
  *(undefined4 *)(lVar1 + 0xb4c) = *(undefined4 *)(lVar1 + 0xb24);
  *(undefined4 *)(lVar1 + 0xb50) = *(undefined4 *)(lVar1 + 0xb28);
  *(undefined4 *)(lVar1 + 0xb54) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0xb58) = 0x3f800000;
  return;
}



// ===== FUN_1403050e0 @ 0x1403050e0 [render] =====

void FUN_1403050e0(void)

{
  longlong lVar1;
  
  if (*(int *)(DAT_1407c0ab8 + 0xb08) == 0) {
    lVar1 = *(longlong *)(DAT_1407c0ab8 + 0x1000);
    if (lVar1 == DAT_1407c0ab8 + 0xf00) {
      FUN_140304ee0(*(undefined4 *)(DAT_1407c0ab8 + 0xad8),*(undefined4 *)(DAT_1407c0ab8 + 0xadc),
                    *(undefined4 *)(DAT_1407c0ab8 + 0xae8),*(undefined4 *)(DAT_1407c0ab8 + 0xaec));
      return;
    }
    if (*(int *)(lVar1 + 0x1c) != 0) {
      FUN_140304ee0(0,0,*(undefined4 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x14));
      return;
    }
  }
  FUN_140304ee0(0,0,*(undefined4 *)(DAT_1407c0ab8 + 0xaf0),*(undefined4 *)(DAT_1407c0ab8 + 0xaf4));
  return;
}



// ===== FUN_140305160 @ 0x140305160 [render] =====

void FUN_140305160(void)

{
  longlong lVar1;
  
  if (*(int *)(DAT_1407c0ab8 + 0xb08) != 0) {
    return;
  }
  lVar1 = *(longlong *)(DAT_1407c0ab8 + 0x1000);
  if (lVar1 == DAT_1407c0ab8 + 0xf00) {
    FUN_140304fe0(*(int *)(DAT_1407c0ab8 + 0xaf8),
                  *(int *)(DAT_1407c0ab8 + 0xae8) + *(int *)(DAT_1407c0ab8 + 0xaf8),
                  *(int *)(DAT_1407c0ab8 + 0xaec) + *(int *)(DAT_1407c0ab8 + 0xafc));
    return;
  }
  if (*(int *)(lVar1 + 0x1c) != 0) {
    FUN_140304fe0(*(int *)(lVar1 + 8),*(int *)(lVar1 + 0x10) + *(int *)(lVar1 + 8),
                  *(int *)(lVar1 + 0xc),*(int *)(lVar1 + 0x14) + *(int *)(lVar1 + 0xc));
    return;
  }
  FUN_140304fe0(*(int *)(DAT_1407c0ab8 + 0xb00),
                *(int *)(DAT_1407c0ab8 + 0xaf0) + *(int *)(DAT_1407c0ab8 + 0xb00),
                *(int *)(DAT_1407c0ab8 + 0xaf4) + *(int *)(DAT_1407c0ab8 + 0xb04));
  return;
}



// ===== FUN_1403051f0 @ 0x1403051f0 [render] =====

void FUN_1403051f0(void)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(DAT_1407c0ab8 + 8);
  (**(code **)(*plVar1 + 0x370))(plVar1);
  (**(code **)(*plVar1 + 0xc0))(plVar1,4);
  (**(code **)(*plVar1 + 0x40))(plVar1,7,1,DAT_1407c0ab8 + 0xbc8);
  (**(code **)(*plVar1 + 0x50))(plVar1,7,1,DAT_1407c0ab8 + 0xbf0);
  iVar2 = 0;
  do {
    (**(code **)(*plVar1 + 0x50))(plVar1,iVar2,1,DAT_1407c0ab8 + 0xbf0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  *(undefined8 *)(DAT_1407c0ab8 + 0xef4) = 0xffffffffffffffff;
  return;
}



// ===== FUN_1403055b0 @ 0x1403055b0 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403055b0(ushort *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 auStack_78 [32];
  uint local_58;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1407502c0 ^ (ulonglong)auStack_78;
  if (*(longlong *)DAT_1407c0ab8[0x200] == 0) {
    local_48 = DAT_1407c0ab8[0x172];
  }
  else {
    FUN_140303bb0();
    local_48 = *(longlong *)(*(longlong *)DAT_1407c0ab8[0x200] + 0x10);
  }
  if (local_48 == DAT_1407c0ab8[0x172]) {
    (**(code **)(*(longlong *)DAT_1407c0ab8[1] + 0x108))
              ((longlong *)DAT_1407c0ab8[1],1,&local_48,DAT_1407c0ab8[0x173]);
    (**(code **)(*(longlong *)DAT_1407c0ab8[1] + 0x158))
              ((longlong *)DAT_1407c0ab8[1],
               DAT_1407c0ab8[(longlong)*(int *)(DAT_1407c0ab8 + 0x176) + 0x17c]);
    goto LAB_14030581a;
  }
  uVar4 = 0;
  if ((*(byte *)(DAT_1407c0ab8[0x200] + 0x18) & 0xc) != 0) {
    if (DAT_1407c0ab8[0x174] == 0) {
      local_40 = *(undefined4 *)(DAT_1407c0ab8 + 0x15a);
      local_3c = *(undefined4 *)((longlong)DAT_1407c0ab8 + 0xad4);
      local_38 = 1;
      local_34 = 1;
      local_30 = 0x2d;
      local_2c = 1;
      local_24 = 0;
      local_20 = 0x40;
      local_18 = 0;
      uVar3 = (**(code **)(*(longlong *)*DAT_1407c0ab8 + 0x28))
                        ((longlong *)*DAT_1407c0ab8,&local_40,0,DAT_1407c0ab8 + 0x177);
      pcVar5 = "CreateTexture2D";
      if (-1 < (int)uVar3) {
        uVar3 = (**(code **)(*(longlong *)*DAT_1407c0ab8 + 0x50))
                          ((longlong *)*DAT_1407c0ab8,DAT_1407c0ab8[0x177],0,DAT_1407c0ab8 + 0x174);
        pcVar5 = "CreateDepthStencilView while creating rendertarget";
        if (-1 < (int)uVar3) {
          *param_1 = *param_1 | 4;
          param_1[5] = param_1[5] + 1;
          puVar2 = DAT_1407c0ab8;
          local_58 = local_58 & 0xffffff00;
          *(int *)(param_1 + 0xe) =
               *(int *)(param_1 + 0xe) +
               *(int *)((longlong)DAT_1407c0ab8 + 0xad4) * *(int *)(DAT_1407c0ab8 + 0x15a) * 4;
          plVar1 = (longlong *)puVar2[1];
          (**(code **)(*plVar1 + 0x1a8))(plVar1,puVar2[0x174],3,0x3f800000);
          goto LAB_1403057d6;
        }
      }
      if (uVar3 == 0x8007000e) {
        IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
      }
      else {
        local_58 = uVar3;
        IggyGDrawSendWarning(0,"GDraw D3D error in %s%s: 0x%08x",pcVar5,&DAT_140608a38);
      }
      puVar2 = DAT_1407c0ab8;
      if ((longlong *)DAT_1407c0ab8[0x177] != (longlong *)0x0) {
        (**(code **)(*(longlong *)DAT_1407c0ab8[0x177] + 0x10))();
        puVar2[0x177] = 0;
      }
      puVar2 = DAT_1407c0ab8;
      if ((longlong *)DAT_1407c0ab8[0x174] != (longlong *)0x0) {
        (**(code **)(*(longlong *)DAT_1407c0ab8[0x174] + 0x10))();
        puVar2[0x174] = 0;
      }
    }
LAB_1403057d6:
    uVar4 = DAT_1407c0ab8[0x174];
  }
  (**(code **)(*(longlong *)DAT_1407c0ab8[1] + 0x108))
            ((longlong *)DAT_1407c0ab8[1],1,&local_48,uVar4);
  (**(code **)(*(longlong *)DAT_1407c0ab8[1] + 0x158))
            ((longlong *)DAT_1407c0ab8[1],DAT_1407c0ab8[0x17c]);
LAB_14030581a:
  *param_1 = *param_1 | 0x20;
  param_1[6] = param_1[6] + 1;
  return;
}



// ===== FUN_140305840 @ 0x140305840 [render] =====

undefined8
FUN_140305840(int *param_1,undefined8 param_2,undefined4 param_3,longlong param_4,undefined8 param_5
             )

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 *local_38 [2];
  
  uVar14 = 0;
  uVar12 = *(ulonglong *)(DAT_1407c0ab8 + 0x1000U);
  puVar11 = (ulonglong *)(uVar12 + 0x20);
  if ((*(int *)(DAT_1407c0ab8 + 0xae8) == 0) || (*(int *)(DAT_1407c0ab8 + 0xaec) == 0)) {
    IggyGDrawSendWarning(0,"GDraw warning: w=0,h=0 rendertarget");
    return 0;
  }
  if ((ulonglong *)(DAT_1407c0ab8 + 0x1000U) <= puVar11) {
    IggyGDrawSendWarning(0,"GDraw rendertarget nesting exceeds MAX_RENDER_STACK_DEPTH");
    return 0;
  }
  uVar6 = uVar14;
  if ((param_4 == 0) && (uVar6 = FUN_140304b40(param_5), uVar6 == 0)) {
LAB_140305c54:
    uVar7 = 0;
  }
  else {
    lVar8 = DAT_1407c0ab8;
    *(undefined4 *)(uVar12 + 0x38) = param_3;
    *puVar11 = uVar6;
    *(longlong *)(lVar8 + 0x1000) = *(longlong *)(lVar8 + 0x1000) + 0x20;
    *(uint *)(*(longlong *)(lVar8 + 0x1000) + 0x1c) = (uint)(param_4 != 0);
    if (param_4 == 0) {
      FUN_1403055b0(param_5);
      iVar10 = (int)((longlong)((uVar6 - DAT_1407c0ab8) + -0x770) / 0x50);
      lVar8 = (longlong)iVar10;
      if (param_1 != (int *)0x0) goto LAB_1403059bd;
      (**(code **)(**(longlong **)(DAT_1407c0ab8 + 8) + 400))
                (*(longlong **)(DAT_1407c0ab8 + 8),
                 *(undefined8 *)(**(longlong **)(DAT_1407c0ab8 + 0x1000) + 0x10),&DAT_14060fa90);
      lVar13 = DAT_1407c0ab8;
      *(undefined4 *)(DAT_1407c0ab8 + (lVar8 + 0xa4) * 0x10) = 0;
      *(undefined4 *)(lVar13 + 0xa44 + lVar8 * 0x10) = 0;
      *(undefined4 *)(lVar13 + 0xa48 + lVar8 * 0x10) = *(undefined4 *)(lVar13 + 0xad0);
      *(undefined4 *)(lVar13 + 0xa4c + lVar8 * 0x10) = *(undefined4 *)(lVar13 + 0xad4);
    }
    else {
      *(int *)(*(longlong *)(lVar8 + 0x1000) + 8) = *param_1;
      *(int *)(*(longlong *)(lVar8 + 0x1000) + 0xc) = param_1[1];
      *(int *)(*(longlong *)(lVar8 + 0x1000) + 0x10) = param_1[2] - *param_1;
      *(int *)(*(longlong *)(lVar8 + 0x1000) + 0x14) = param_1[3] - param_1[1];
      FUN_1403055b0(param_5);
      iVar10 = (int)((longlong)((uVar6 - DAT_1407c0ab8) + -0x770) / 0x50);
LAB_1403059bd:
      lVar8 = DAT_1407c0ab8;
      if (*(int *)(DAT_1407c0ab8 + 0xb08) == 0) {
        iVar9 = *(int *)(DAT_1407c0ab8 + 0xb00);
        iVar5 = *(int *)(DAT_1407c0ab8 + 0xb04);
      }
      else {
        iVar9 = 0;
        iVar5 = iVar9;
      }
      iVar15 = *param_1 - iVar9;
      if (*param_1 - iVar9 < 1) {
        iVar15 = 0;
      }
      iVar16 = param_1[1] - iVar5;
      if (param_1[1] - iVar5 < 1) {
        iVar16 = 0;
      }
      iVar4 = param_1[2] - iVar9;
      if (*(int *)(DAT_1407c0ab8 + 0xaf0) <= param_1[2] - iVar9) {
        iVar4 = *(int *)(DAT_1407c0ab8 + 0xaf0);
      }
      iVar9 = param_1[3] - iVar5;
      if (*(int *)(DAT_1407c0ab8 + 0xaf4) <= param_1[3] - iVar5) {
        iVar9 = *(int *)(DAT_1407c0ab8 + 0xaf4);
      }
      uVar12 = uVar14;
      if (0 < (int)(iVar15 - 2U)) {
        uVar12 = (ulonglong)(iVar15 - 2U);
      }
      local_48 = (int)uVar12;
      if (0 < (int)(iVar16 - 2U)) {
        uVar14 = (ulonglong)(iVar16 - 2U);
      }
      local_44 = (int)uVar14;
      local_40 = *(int *)(DAT_1407c0ab8 + 0xad0);
      if (iVar4 + 2 < *(int *)(DAT_1407c0ab8 + 0xad0)) {
        local_40 = iVar4 + 2;
      }
      local_3c = *(int *)(DAT_1407c0ab8 + 0xad4);
      if (iVar9 + 2 < *(int *)(DAT_1407c0ab8 + 0xad4)) {
        local_3c = iVar9 + 2;
      }
      if ((local_40 <= local_48) || (local_3c <= local_44)) {
        *(longlong *)(DAT_1407c0ab8 + 0x1000) = *(longlong *)(DAT_1407c0ab8 + 0x1000) + -0x20;
        if (*(longlong *)(uVar6 + 0x28) == lVar8 + 0x520) {
          FUN_140302790();
        }
        else {
          FUN_140303900(uVar6,param_5);
        }
        goto LAB_140305c54;
      }
      plVar2 = *(longlong **)(DAT_1407c0ab8 + 8);
      (**(code **)(*plVar2 + 0x118))
                (plVar2,*(undefined8 *)(DAT_1407c0ab8 + 0xc30),&DAT_14060fa90,0xffffffff);
      (**(code **)(*plVar2 + 0x120))(plVar2,*(undefined8 *)(DAT_1407c0ab8 + 0xc68),0);
      lVar8 = DAT_1407c0ab8;
      puVar1 = (undefined4 *)(DAT_1407c0ab8 + 0xad4);
      *(undefined4 *)(DAT_1407c0ab8 + 0xef8) = 0;
      FUN_140304ee0(0,0,*(undefined4 *)(lVar8 + 0xad0),*puVar1);
      lVar8 = DAT_1407c0ab8;
      FUN_140304fe0(0,*(undefined4 *)(DAT_1407c0ab8 + 0xad0),*(undefined4 *)(DAT_1407c0ab8 + 0xad4),
                    0);
      (**(code **)(*plVar2 + 0x48))(plVar2,*(undefined8 *)(lVar8 + 0x4b8),0,0);
      iVar5 = (**(code **)(**(longlong **)(DAT_1407c0ab8 + 8) + 0x70))
                        (*(longlong **)(DAT_1407c0ab8 + 8),*(undefined8 *)(DAT_1407c0ab8 + 0xe98),0,
                         4,0,local_38);
      lVar8 = DAT_1407c0ab8;
      if (iVar5 < 0) {
        if (iVar5 == -0x7ff8fff2) {
          IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
        }
        else {
          IggyGDrawSendWarning(0,"GDraw D3D error in %s%s: 0x%08x",&DAT_14064e31c,"of buffer",iVar5)
          ;
        }
      }
      else if (local_38[0] != (undefined8 *)0x0) {
        *local_38[0] = 0;
        local_38[0][1] = 0;
        local_38[0][2] = 0;
        local_38[0][3] = 0;
        local_38[0][4] = 0;
        local_38[0][5] = 0;
        local_38[0][6] = 0;
        local_38[0][7] = 0;
        plVar3 = *(longlong **)(lVar8 + 8);
        (**(code **)(*plVar3 + 0x78))(plVar3,*(undefined8 *)(lVar8 + 0xe98),0);
        (**(code **)(*plVar2 + 0x80))(plVar2,0,1,DAT_1407c0ab8 + 0xe98);
        FUN_1403069b0(&local_48,&DAT_14060fa90,param_5);
      }
      lVar13 = DAT_1407c0ab8;
      lVar8 = (longlong)iVar10;
      *(int *)(DAT_1407c0ab8 + (lVar8 + 0xa4) * 0x10) = iVar15;
      *(int *)(lVar13 + 0xa44 + lVar8 * 0x10) = iVar16;
      *(int *)(lVar13 + 0xa48 + lVar8 * 0x10) = iVar4;
      *(int *)(lVar13 + 0xa4c + lVar8 * 0x10) = iVar9;
    }
    if (*(int *)(lVar13 + 0xb08) == 0) {
      FUN_1403050e0();
      FUN_140305160();
      uVar7 = 1;
    }
    else {
      FUN_140304ee0(0,0,*(undefined4 *)(lVar13 + 0xaf0),*(undefined4 *)(lVar13 + 0xaf4));
      FUN_140304fe0(0,*(undefined4 *)(DAT_1407c0ab8 + 0xaf0),*(undefined4 *)(DAT_1407c0ab8 + 0xaf4),
                    0);
      uVar7 = 1;
    }
  }
  return uVar7;
}



// ===== FUN_140305ed0 @ 0x140305ed0 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140305ed0(int param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  code *pcVar13;
  int iVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined1 auStack_88 [32];
  int local_68;
  undefined8 **local_60;
  undefined8 *local_58 [2];
  undefined8 local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1407502c0 ^ (ulonglong)auStack_88;
  plVar9 = *(longlong **)(DAT_1407c0ab8 + 8);
  (**(code **)(*plVar9 + 0x58))
            (plVar9,*(undefined8 *)(DAT_1407c0ab8 + 0x4e8 + (longlong)param_1 * 0x10),0,0);
  local_60 = (undefined8 **)&local_48;
  local_68 = 0;
  iVar14 = (**(code **)(**(longlong **)(DAT_1407c0ab8 + 8) + 0x70))
                     (*(longlong **)(DAT_1407c0ab8 + 8),*(undefined8 *)(DAT_1407c0ab8 + 0xe90),0,4);
  lVar15 = DAT_1407c0ab8;
  if (iVar14 < 0) {
    if (iVar14 == -0x7ff8fff2) {
      IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
    }
    else {
      local_68 = iVar14;
      IggyGDrawSendWarning(0,"GDraw D3D error in %s%s: 0x%08x",&DAT_14064e31c,"of buffer");
    }
  }
  else if (local_48 != (undefined4 *)0x0) {
    fVar18 = 1.0 - ((float)*param_2 + 1.0) * 0.00012207031;
    if ((*(byte *)(param_2 + 1) & 4) == 0) {
      puVar10 = *(undefined4 **)(param_2 + 0x10);
      uVar2 = puVar10[1];
      uVar3 = puVar10[2];
      uVar4 = puVar10[3];
      uVar5 = puVar10[4];
      uVar6 = puVar10[5];
      *local_48 = *puVar10;
      local_48[1] = uVar2;
      local_48[2] = fVar18;
      local_48[3] = uVar5;
      local_48[4] = uVar3;
      local_48[5] = uVar4;
      local_48[6] = 0;
      local_48[7] = uVar6;
    }
    else {
      *local_48 = *(undefined4 *)(DAT_1407c0ab8 + 0xbd8);
      local_48[1] = 0;
      local_48[2] = fVar18;
      local_48[3] = 0;
      local_48[4] = 0;
      local_48[5] = *(undefined4 *)(lVar15 + 0xbdc);
      local_48[6] = 0;
      local_48[7] = 0;
    }
    uVar16 = (*(undefined8 **)(param_2 + 0xe))[1];
    *(undefined8 *)(local_48 + 8) = **(undefined8 **)(param_2 + 0xe);
    *(undefined8 *)(local_48 + 10) = uVar16;
    if ((char)param_2[2] != '\0') {
      uVar16 = *(undefined8 *)(param_2 + 0x1c);
      *(undefined8 *)(local_48 + 0xc) = *(undefined8 *)(param_2 + 0x1a);
      *(undefined8 *)(local_48 + 0xe) = uVar16;
      uVar16 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(local_48 + 0x10) = *(undefined8 *)(param_2 + 0x1e);
      *(undefined8 *)(local_48 + 0x12) = uVar16;
    }
    if (*(int *)(lVar15 + 0xb8c) == 0) {
      uVar16 = *(undefined8 *)(lVar15 + 0xb34);
      *(undefined8 *)(local_48 + 0x14) = *(undefined8 *)(lVar15 + 0xb2c);
      *(undefined8 *)(local_48 + 0x16) = uVar16;
      uVar2 = *(undefined4 *)(lVar15 + 0xb40);
      uVar3 = *(undefined4 *)(lVar15 + 0xb44);
      uVar4 = *(undefined4 *)(lVar15 + 0xb48);
      local_48[0x18] = *(undefined4 *)(lVar15 + 0xb3c);
      local_48[0x19] = uVar2;
      local_48[0x1a] = uVar3;
      local_48[0x1b] = uVar4;
      uVar16 = *(undefined8 *)(lVar15 + 0xb4c);
      uVar17 = *(undefined8 *)(lVar15 + 0xb54);
    }
    else {
      uVar16 = *(undefined8 *)(lVar15 + 0xb64);
      *(undefined8 *)(local_48 + 0x14) = *(undefined8 *)(lVar15 + 0xb5c);
      *(undefined8 *)(local_48 + 0x16) = uVar16;
      uVar2 = *(undefined4 *)(lVar15 + 0xb70);
      uVar3 = *(undefined4 *)(lVar15 + 0xb74);
      uVar4 = *(undefined4 *)(lVar15 + 0xb78);
      local_48[0x18] = *(undefined4 *)(lVar15 + 0xb6c);
      local_48[0x19] = uVar2;
      local_48[0x1a] = uVar3;
      local_48[0x1b] = uVar4;
      uVar16 = *(undefined8 *)(lVar15 + 0xb7c);
      uVar17 = *(undefined8 *)(lVar15 + 0xb84);
    }
    *(undefined8 *)(local_48 + 0x1c) = uVar16;
    *(undefined8 *)(local_48 + 0x1e) = uVar17;
    (**(code **)(**(longlong **)(lVar15 + 8) + 0x78))
              (*(longlong **)(lVar15 + 8),*(undefined8 *)(lVar15 + 0xe90),0);
    (**(code **)(*plVar9 + 0x38))(plVar9,0,1,DAT_1407c0ab8 + 0xe90);
  }
  lVar15 = DAT_1407c0ab8;
  bVar7 = *(byte *)(param_2 + 3);
  if ((uint)bVar7 != *(uint *)(DAT_1407c0ab8 + 0xef8)) {
    *(uint *)(DAT_1407c0ab8 + 0xef8) = (uint)bVar7;
    (**(code **)(*plVar9 + 0x118))
              (plVar9,*(undefined8 *)(lVar15 + 0xc30 + (ulonglong)bVar7 * 8),&DAT_14060fa90,
               0xffffffff);
  }
  if (bVar7 == 5) {
    lVar15 = *(longlong *)
              (DAT_1407c0ab8 + 0x138 + (ulonglong)*(byte *)((longlong)param_2 + 0xd) * 0x10);
  }
  else {
    lVar15 = 0;
    if ((*(longlong *)(param_2 + 6) != 0) &&
       (lVar15 = 1, *(short *)(*(longlong *)(param_2 + 6) + 6) != 0)) {
      lVar15 = 2;
    }
    lVar11 = *(longlong *)
              (DAT_1407c0ab8 + 0x18 +
              lVar15 * 0x10 + (ulonglong)*(byte *)((longlong)param_2 + 9) * 0x30);
    lVar15 = lVar11;
    if ((*(char *)((longlong)param_2 + 0x11) != '\0') &&
       (lVar15 = 0, *(byte *)((longlong)param_2 + 9) == 5)) {
      puVar1 = (undefined8 *)(DAT_1407c0ab8 + 0xc60);
      *(undefined4 *)(DAT_1407c0ab8 + 0xef8) = 0xffffffff;
      (**(code **)(*plVar9 + 0x118))(plVar9,*puVar1,&DAT_14060fa90,0xffffffff);
      lVar15 = lVar11;
    }
  }
  (**(code **)(*plVar9 + 0x48))(plVar9,lVar15,0,0);
  bVar7 = *(byte *)((longlong)param_2 + 10);
  bVar8 = *(byte *)((longlong)param_2 + 0xb);
  plVar12 = *(longlong **)(DAT_1407c0ab8 + 8);
  if (*(longlong *)(param_2 + 8) == 0) {
    local_48 = (undefined4 *)0x0;
    (**(code **)(*plVar12 + 0x40))(plVar12,0,1,&local_48);
  }
  else {
    (**(code **)(*plVar12 + 0x40))(plVar12,0,1,*(longlong *)(param_2 + 8) + 8);
    (**(code **)(*plVar12 + 0x50))
              (plVar12,0,1,DAT_1407c0ab8 + ((ulonglong)bVar8 * 4 + 0x17e + (ulonglong)bVar7) * 8);
  }
  local_60 = local_58;
  local_68 = 0;
  iVar14 = (**(code **)(**(longlong **)(DAT_1407c0ab8 + 8) + 0x70))
                     (*(longlong **)(DAT_1407c0ab8 + 8),*(undefined8 *)(DAT_1407c0ab8 + 0xe98),0,4);
  if (iVar14 < 0) {
    if (iVar14 == -0x7ff8fff2) {
      IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
    }
    else {
      local_68 = iVar14;
      IggyGDrawSendWarning(0,"GDraw D3D error in %s%s: 0x%08x",&DAT_14064e31c,"of buffer");
    }
  }
  else if (local_58[0] != (undefined8 *)0x0) {
    uVar16 = *(undefined8 *)(param_2 + 0x14);
    *local_58[0] = *(undefined8 *)(param_2 + 0x12);
    local_58[0][1] = uVar16;
    if (*(short **)(param_2 + 6) == (short *)0x0) {
      *(undefined8 *)((longlong)local_58[0] + 0x14) = 0;
      fVar18 = 0.0;
      *(undefined4 *)(local_58[0] + 2) = 0;
    }
    else {
      *(float *)(local_58[0] + 2) = (float)(int)**(short **)(param_2 + 6) / 255.0;
      *(float *)((longlong)local_58[0] + 0x14) =
           (float)(int)*(short *)(*(longlong *)(param_2 + 6) + 2) / 255.0;
      *(float *)(local_58[0] + 3) = (float)(int)*(short *)(*(longlong *)(param_2 + 6) + 4) / 255.0;
      fVar18 = (float)(int)*(short *)(*(longlong *)(param_2 + 6) + 6) / 255.0;
    }
    *(float *)((longlong)local_58[0] + 0x1c) = fVar18;
    if (*(char *)((longlong)param_2 + 9) == '\x04') {
      uVar16 = *(undefined8 *)(param_2 + 0x24);
      local_58[0][4] = *(undefined8 *)(param_2 + 0x22);
      local_58[0][5] = uVar16;
    }
    if ((char)param_2[3] == '\x05') {
      uVar16 = param_4[1];
      local_58[0][6] = *param_4;
      local_58[0][7] = uVar16;
    }
    (**(code **)(**(longlong **)(DAT_1407c0ab8 + 8) + 0x78))
              (*(longlong **)(DAT_1407c0ab8 + 8),*(undefined8 *)(DAT_1407c0ab8 + 0xe98),0);
    (**(code **)(*plVar9 + 0x80))(plVar9,0,1,DAT_1407c0ab8 + 0xe98);
  }
  lVar15 = DAT_1407c0ab8;
  if ((*(byte *)(param_2 + 1) & 8) == 0) {
    if (*(int *)(DAT_1407c0ab8 + 0xef4) != 0) {
      local_48 = *(undefined4 **)(DAT_1407c0ab8 + 0xb0c);
      local_40 = *(int *)(DAT_1407c0ab8 + 0xb0c) + *(int *)(DAT_1407c0ab8 + 0xb14);
      local_3c = *(int *)(DAT_1407c0ab8 + 0xb18) + *(int *)(DAT_1407c0ab8 + 0xb10);
      (**(code **)(**(longlong **)(DAT_1407c0ab8 + 8) + 0x168))
                (*(longlong **)(DAT_1407c0ab8 + 8),1,&local_48);
      lVar15 = DAT_1407c0ab8;
      *(undefined4 *)(DAT_1407c0ab8 + 0xef4) = 0;
    }
  }
  else {
    lVar11 = DAT_1407c0ab8 + 0xf00;
    *(undefined4 *)(DAT_1407c0ab8 + 0xef4) = 1;
    if (*(longlong *)(lVar15 + 0x1000) == lVar11) {
      local_3c = *(int *)(lVar15 + 0xadc) - *(int *)(lVar15 + 0xafc);
      local_48 = (undefined4 *)
                 CONCAT44(param_2[0x17] + local_3c,
                          (*(int *)(lVar15 + 0xad8) - *(int *)(lVar15 + 0xaf8)) + param_2[0x16]);
      local_40 = (param_2[0x18] - *(int *)(lVar15 + 0xaf8)) + *(int *)(lVar15 + 0xad8);
      local_3c = param_2[0x19] + local_3c;
    }
    else {
      local_48 = (undefined4 *)
                 CONCAT44(param_2[0x17] - *(int *)(lVar15 + 0xb04),
                          param_2[0x16] - *(int *)(lVar15 + 0xb00));
      local_40 = param_2[0x18] - *(int *)(lVar15 + 0xb00);
      local_3c = param_2[0x19] - *(int *)(lVar15 + 0xb04);
    }
    (**(code **)(*plVar9 + 0x168))(plVar9,1,&local_48);
    lVar15 = DAT_1407c0ab8;
  }
  pcVar13 = *(code **)(*plVar9 + 0x120);
  if ((char)param_2[4] == '\0' && *(char *)((longlong)param_2 + 0x11) == '\0') {
    uVar17 = 0;
    uVar16 = *(undefined8 *)
              (lVar15 + 0xc68 +
              ((ulonglong)(param_2[1] & 1) + (ulonglong)((uint)param_2[1] >> 1 & 1) * 2) * 8);
  }
  else {
    uVar16 = FUN_140303d80((uint)param_2[1] >> 1 & 1,param_2[1] & 1,(char)param_2[4],
                           *(char *)((longlong)param_2 + 0x11));
    uVar17 = 0xff;
  }
  (*pcVar13)(plVar9,uVar16,uVar17);
  return 1;
}



// ===== FUN_140306920 @ 0x140306920 [render] =====

undefined8 FUN_140306920(undefined8 param_1)

{
  int iVar1;
  undefined8 local_18 [3];
  
  iVar1 = (**(code **)(**(longlong **)(DAT_1407c0ab8 + 8) + 0x70))
                    (*(longlong **)(DAT_1407c0ab8 + 8),param_1,0,4,0,local_18);
  if (-1 < iVar1) {
    return local_18[0];
  }
  if (iVar1 == -0x7ff8fff2) {
    IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
    return 0;
  }
  IggyGDrawSendWarning(0,"GDraw D3D error in %s%s: 0x%08x",&DAT_14064e31c,"of buffer",iVar1);
  return 0;
}



// ===== FUN_1403069b0 @ 0x1403069b0 [render] =====

void FUN_1403069b0(int *param_1,float *param_2,ushort *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  float *pfVar12;
  undefined4 local_res8 [2];
  undefined4 local_res20 [2];
  undefined8 in_stack_ffffffffffffff98;
  uint uVar13;
  undefined4 *local_58 [10];
  
  uVar13 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  iVar11 = *param_1;
  plVar5 = *(longlong **)(DAT_1407c0ab8 + 8);
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  iVar3 = param_1[3];
  pfVar12 = (float *)FUN_140303c60(DAT_1407c0ab8 + 0xeb8,0x40);
  if (pfVar12 != (float *)0x0) {
    *pfVar12 = (float)iVar11;
    pfVar12[1] = (float)iVar1;
    pfVar12[2] = *param_2;
    fVar4 = param_2[1];
    pfVar12[4] = (float)iVar2;
    pfVar12[5] = (float)iVar1;
    pfVar12[3] = fVar4;
    pfVar12[6] = param_2[2];
    fVar4 = param_2[1];
    pfVar12[8] = (float)iVar11;
    pfVar12[9] = (float)iVar3;
    pfVar12[7] = fVar4;
    pfVar12[10] = *param_2;
    fVar4 = param_2[3];
    pfVar12[0xc] = (float)iVar2;
    pfVar12[0xd] = (float)iVar3;
    pfVar12[0xb] = fVar4;
    pfVar12[0xe] = param_2[2];
    lVar10 = DAT_1407c0ab8;
    pfVar12[0xf] = param_2[3];
    (**(code **)(**(longlong **)(lVar10 + 8) + 0x78))
              (*(longlong **)(lVar10 + 8),*(undefined8 *)(lVar10 + 0xeb8),0);
    local_res8[0] = *(undefined4 *)(lVar10 + 0xec4);
    local_res20[0] = 0x10;
    iVar11 = (**(code **)(**(longlong **)(DAT_1407c0ab8 + 8) + 0x70))
                       (*(longlong **)(DAT_1407c0ab8 + 8),*(undefined8 *)(DAT_1407c0ab8 + 0xe90),0,4
                        ,(ulonglong)uVar13 << 0x20,local_58);
    lVar10 = DAT_1407c0ab8;
    if (iVar11 < 0) {
      if (iVar11 == -0x7ff8fff2) {
        IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
      }
      else {
        IggyGDrawSendWarning(0,"GDraw D3D error in %s%s: 0x%08x",&DAT_14064e31c,"of buffer",iVar11);
      }
    }
    else if (local_58[0] != (undefined4 *)0x0) {
      *local_58[0] = 0x3f800000;
      local_58[0][1] = 0;
      local_58[0][2] = 0;
      local_58[0][3] = 0;
      local_58[0][4] = 0;
      local_58[0][5] = 0x3f800000;
      local_58[0][6] = 0;
      local_58[0][7] = 0;
      uVar9 = *(undefined8 *)(lVar10 + 0xb34);
      *(undefined8 *)(local_58[0] + 0x14) = *(undefined8 *)(lVar10 + 0xb2c);
      *(undefined8 *)(local_58[0] + 0x16) = uVar9;
      uVar6 = *(undefined4 *)(lVar10 + 0xb40);
      uVar7 = *(undefined4 *)(lVar10 + 0xb44);
      uVar8 = *(undefined4 *)(lVar10 + 0xb48);
      local_58[0][0x18] = *(undefined4 *)(lVar10 + 0xb3c);
      local_58[0][0x19] = uVar6;
      local_58[0][0x1a] = uVar7;
      local_58[0][0x1b] = uVar8;
      uVar6 = *(undefined4 *)(lVar10 + 0xb50);
      uVar7 = *(undefined4 *)(lVar10 + 0xb54);
      uVar8 = *(undefined4 *)(lVar10 + 0xb58);
      local_58[0][0x1c] = *(undefined4 *)(lVar10 + 0xb4c);
      local_58[0][0x1d] = uVar6;
      local_58[0][0x1e] = uVar7;
      local_58[0][0x1f] = uVar8;
      (**(code **)(**(longlong **)(lVar10 + 8) + 0x78))
                (*(longlong **)(lVar10 + 8),*(undefined8 *)(lVar10 + 0xe90),0);
      (**(code **)(*plVar5 + 0x38))(plVar5,0,1,DAT_1407c0ab8 + 0xe90);
      (**(code **)(*plVar5 + 0x58))(plVar5,*(undefined8 *)(DAT_1407c0ab8 + 0x508),0,0);
      (**(code **)(*plVar5 + 0x88))(plVar5,*(undefined8 *)(DAT_1407c0ab8 + 0x4d0));
      (**(code **)(*plVar5 + 0x90))(plVar5,0,1,DAT_1407c0ab8 + 0xeb8,local_res20,local_res8);
      (**(code **)(*plVar5 + 0xc0))(plVar5,5);
      (**(code **)(*plVar5 + 0x68))(plVar5,4,0);
      (**(code **)(*plVar5 + 0xc0))(plVar5,4);
      *param_3 = *param_3 | 1;
      param_3[1] = param_3[1] + 1;
      *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 6;
      *(int *)(param_3 + 10) = *(int *)(param_3 + 10) + 4;
    }
  }
  return;
}



// ===== FUN_140307b70 @ 0x140307b70 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140307b70(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_68 [32];
  int local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1407502c0 ^ (ulonglong)auStack_68;
  local_1c = 0;
  local_38 = 0;
  local_2c = 2;
  local_24 = 0x10000;
  local_30 = param_1;
  local_28 = param_2;
  local_48 = (**(code **)(*(longlong *)*DAT_1407c0ab8 + 0x18))
                       ((longlong *)*DAT_1407c0ab8,&local_30,0,&local_38);
  if (-1 < local_48) {
    return local_38;
  }
  if (local_48 == -0x7ff8fff2) {
    IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
    return 0;
  }
  IggyGDrawSendWarning
            (0,"GDraw D3D error in %s%s: 0x%08x","CreateBuffer"," creating dynamic vertex buffer");
  return 0;
}



// ===== FUN_140307c40 @ 0x140307c40 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140307c40(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ushort uVar14;
  longlong lVar15;
  longlong lVar16;
  uint *puVar17;
  ushort uVar18;
  char *pcVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  int *piVar23;
  undefined1 auStack_308 [32];
  undefined8 *local_2e8;
  undefined8 *local_2e0;
  longlong local_2d8 [2];
  undefined4 local_2c8;
  uint local_2c4;
  uint local_2c0;
  undefined4 local_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  undefined8 local_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 local_274;
  int local_270;
  undefined4 local_26c;
  undefined8 local_268;
  int local_260;
  int local_25c;
  int local_258;
  undefined4 local_254;
  int local_250;
  int local_24c;
  undefined4 local_248;
  undefined1 local_244;
  undefined1 local_243 [235];
  undefined1 local_158 [272];
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStack_308;
  uVar20 = 0;
  lVar15 = 0x12;
  plVar2 = (longlong *)*DAT_1407c0ab8;
  uVar13 = uVar20;
  do {
    FUN_1403093b0((longlong)DAT_1407c0ab8 + uVar13 + 0x10,(longlong)&PTR_DAT_14076eaa0 + uVar13);
    uVar13 = uVar13 + 0x10;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  lVar15 = 0x130;
  lVar16 = 0xd;
  do {
    FUN_1403093b0((longlong)DAT_1407c0ab8 + lVar15,(longlong)&DAT_14076ea90 + lVar15);
    lVar15 = lVar15 + 0x10;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  lVar15 = 0x200;
  lVar16 = 0x20;
  do {
    FUN_1403093b0((longlong)DAT_1407c0ab8 + lVar15,(longlong)&DAT_14076ea90 + lVar15);
    lVar15 = lVar15 + 0x10;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  lVar15 = 0x400;
  lVar16 = 10;
  do {
    FUN_1403093b0((longlong)DAT_1407c0ab8 + lVar15,(longlong)&DAT_14076ea90 + lVar15);
    local_2e0 = DAT_1407c0ab8;
    uVar4 = uRam000000014076ef3c;
    uVar3 = uRam000000014076ef38;
    uVar22 = PTR_DAT_14076ef30._4_4_;
    lVar15 = lVar15 + 0x10;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  *(undefined4 *)(DAT_1407c0ab8 + 0x94) = PTR_DAT_14076ef30._0_4_;
  *(undefined4 *)((longlong)local_2e0 + 0x4a4) = uVar22;
  *(undefined4 *)(local_2e0 + 0x95) = uVar3;
  *(undefined4 *)((longlong)local_2e0 + 0x4ac) = uVar4;
  if (local_2e0[0x94] != 0) {
    puVar8 = local_2e0 + 0x95;
    local_2e8 = puVar8;
    iVar6 = (**(code **)(*(longlong *)*local_2e0 + 0x78))
                      ((longlong *)*local_2e0,local_2e0[0x94],*(undefined4 *)puVar8,0);
    local_2e0 = DAT_1407c0ab8;
    if (iVar6 < 0) {
      if (iVar6 == -0x7ff8fff2) {
        IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
      }
      else {
        local_2e8 = (undefined8 *)CONCAT44(local_2e8._4_4_,iVar6);
        IggyGDrawSendWarning(0,"GDraw D3D error in %s%s: 0x%08x","CreatePixelShader",&DAT_140608a38)
        ;
      }
      *puVar8 = 0;
      local_2e0 = DAT_1407c0ab8;
    }
  }
  uVar4 = uRam000000014076ef4c;
  uVar3 = uRam000000014076ef48;
  uVar22 = PTR_DAT_14076ef40._4_4_;
  *(undefined4 *)(local_2e0 + 0x96) = PTR_DAT_14076ef40._0_4_;
  *(undefined4 *)((longlong)local_2e0 + 0x4b4) = uVar22;
  *(undefined4 *)(local_2e0 + 0x97) = uVar3;
  *(undefined4 *)((longlong)local_2e0 + 0x4bc) = uVar4;
  if (local_2e0[0x96] != 0) {
    puVar8 = local_2e0 + 0x97;
    local_2e8 = puVar8;
    iVar6 = (**(code **)(*(longlong *)*local_2e0 + 0x78))
                      ((longlong *)*local_2e0,local_2e0[0x96],*(undefined4 *)puVar8,0);
    local_2e0 = DAT_1407c0ab8;
    if (iVar6 < 0) {
      if (iVar6 == -0x7ff8fff2) {
        IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
      }
      else {
        local_2e8 = (undefined8 *)CONCAT44(local_2e8._4_4_,iVar6);
        IggyGDrawSendWarning(0,"GDraw D3D error in %s%s: 0x%08x","CreatePixelShader",&DAT_140608a38)
        ;
      }
      *puVar8 = 0;
      local_2e0 = DAT_1407c0ab8;
    }
  }
  uVar3 = uRam000000014076ef5c;
  uVar11 = DAT_14076ef58;
  uVar22 = PTR_DAT_14076ef50._4_4_;
  *(undefined4 *)(local_2e0 + 0x9c) = PTR_DAT_14076ef50._0_4_;
  *(undefined4 *)((longlong)local_2e0 + 0x4e4) = uVar22;
  *(uint *)(local_2e0 + 0x9d) = uVar11;
  *(undefined4 *)((longlong)local_2e0 + 0x4ec) = uVar3;
  if (local_2e0[0x9c] != 0) {
    puVar8 = local_2e0 + 0x9d;
    local_2e8 = puVar8;
    iVar6 = (**(code **)(*(longlong *)*local_2e0 + 0x60))
                      ((longlong *)*local_2e0,local_2e0[0x9c],*(undefined4 *)puVar8,0);
    local_2e0 = DAT_1407c0ab8;
    if (iVar6 < 0) {
      if (iVar6 == -0x7ff8fff2) {
        IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
      }
      else {
        local_2e8 = (undefined8 *)CONCAT44(local_2e8._4_4_,iVar6);
        IggyGDrawSendWarning
                  (0,"GDraw D3D error in %s%s: 0x%08x","CreateVertexShader",&DAT_140608a38);
      }
      *puVar8 = 0;
      local_2e0 = DAT_1407c0ab8;
    }
  }
  local_2e8 = (undefined8 *)(ulonglong)DAT_14076ef58;
  local_2e0 = local_2e0 + 0x98;
  iVar6 = (**(code **)(*plVar2 + 0x58))
                    (plVar2,PTR_PTR_14076ea68,DAT_14076ea70,
                     CONCAT44(PTR_DAT_14076ef50._4_4_,PTR_DAT_14076ef50._0_4_));
  puVar8 = DAT_1407c0ab8;
  if (iVar6 < 0) {
    if (iVar6 == -0x7ff8fff2) {
      IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
      puVar8 = DAT_1407c0ab8;
      DAT_1407c0ab8[0x98] = 0;
    }
    else {
      local_2e8 = (undefined8 *)CONCAT44(local_2e8._4_4_,iVar6);
      IggyGDrawSendWarning(0,"GDraw D3D error in %s%s: 0x%08x","CreateInputLayout",&DAT_140608a38);
      puVar8 = DAT_1407c0ab8;
      DAT_1407c0ab8[0x98] = 0;
    }
  }
  uVar3 = uRam000000014076ef6c;
  uVar11 = DAT_14076ef68;
  uVar22 = PTR_DAT_14076ef60._4_4_;
  *(undefined4 *)(puVar8 + 0x9e) = PTR_DAT_14076ef60._0_4_;
  *(undefined4 *)((longlong)puVar8 + 0x4f4) = uVar22;
  *(uint *)(puVar8 + 0x9f) = uVar11;
  *(undefined4 *)((longlong)puVar8 + 0x4fc) = uVar3;
  if (puVar8[0x9e] != 0) {
    puVar1 = puVar8 + 0x9f;
    local_2e8 = puVar1;
    iVar6 = (**(code **)(*(longlong *)*puVar8 + 0x60))
                      ((longlong *)*puVar8,puVar8[0x9e],*(undefined4 *)puVar1,0);
    puVar8 = DAT_1407c0ab8;
    if (iVar6 < 0) {
      if (iVar6 == -0x7ff8fff2) {
        IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
      }
      else {
        local_2e8 = (undefined8 *)CONCAT44(local_2e8._4_4_,iVar6);
        IggyGDrawSendWarning
                  (0,"GDraw D3D error in %s%s: 0x%08x","CreateVertexShader",&DAT_140608a38);
      }
      *puVar1 = 0;
      puVar8 = DAT_1407c0ab8;
    }
  }
  local_2e8 = (undefined8 *)(ulonglong)DAT_14076ef68;
  local_2e0 = puVar8 + 0x99;
  iVar6 = (**(code **)(*plVar2 + 0x58))
                    (plVar2,PTR_PTR_14076ea78,DAT_14076ea80,
                     CONCAT44(PTR_DAT_14076ef60._4_4_,PTR_DAT_14076ef60._0_4_));
  puVar8 = DAT_1407c0ab8;
  if (iVar6 < 0) {
    if (iVar6 == -0x7ff8fff2) {
      IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
      puVar8 = DAT_1407c0ab8;
      DAT_1407c0ab8[0x99] = 0;
    }
    else {
      local_2e8 = (undefined8 *)CONCAT44(local_2e8._4_4_,iVar6);
      IggyGDrawSendWarning(0,"GDraw D3D error in %s%s: 0x%08x","CreateInputLayout",&DAT_140608a38);
      puVar8 = DAT_1407c0ab8;
      DAT_1407c0ab8[0x99] = 0;
    }
  }
  uVar3 = uRam000000014076ef7c;
  uVar11 = DAT_14076ef78;
  uVar22 = PTR_DAT_14076ef70._4_4_;
  *(undefined4 *)(puVar8 + 0xa0) = PTR_DAT_14076ef70._0_4_;
  *(undefined4 *)((longlong)puVar8 + 0x504) = uVar22;
  *(uint *)(puVar8 + 0xa1) = uVar11;
  *(undefined4 *)((longlong)puVar8 + 0x50c) = uVar3;
  if (puVar8[0xa0] != 0) {
    puVar1 = puVar8 + 0xa1;
    local_2e8 = puVar1;
    iVar6 = (**(code **)(*(longlong *)*puVar8 + 0x60))
                      ((longlong *)*puVar8,puVar8[0xa0],*(undefined4 *)puVar1,0);
    puVar8 = DAT_1407c0ab8;
    if (iVar6 < 0) {
      if (iVar6 == -0x7ff8fff2) {
        IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
      }
      else {
        local_2e8 = (undefined8 *)CONCAT44(local_2e8._4_4_,iVar6);
        IggyGDrawSendWarning
                  (0,"GDraw D3D error in %s%s: 0x%08x","CreateVertexShader",&DAT_140608a38);
      }
      *puVar1 = 0;
      puVar8 = DAT_1407c0ab8;
    }
  }
  local_2e8 = (undefined8 *)(ulonglong)DAT_14076ef78;
  local_2e0 = puVar8 + 0x9a;
  iVar6 = (**(code **)(*plVar2 + 0x58))
                    (plVar2,PTR_PTR_14076ea88,DAT_14076ea90,
                     CONCAT44(PTR_DAT_14076ef70._4_4_,PTR_DAT_14076ef70._0_4_));
  uVar13 = uVar20;
  if (iVar6 < 0) {
    if (iVar6 == -0x7ff8fff2) {
      IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
    }
    else {
      local_2e8 = (undefined8 *)CONCAT44(local_2e8._4_4_,iVar6);
      IggyGDrawSendWarning(0,"GDraw D3D error in %s%s: 0x%08x","CreateInputLayout",&DAT_140608a38);
    }
    DAT_1407c0ab8[0x9a] = 0;
  }
  do {
    local_290 = 0x100000003;
    uStack_288 = 0;
    uStack_284 = 0;
    uStack_280 = 0;
    uStack_27c = 0;
    local_278 = 1;
    local_274 = 1;
    local_26c = 0;
    local_270 = (int)uVar13;
    iVar6 = (**(code **)(*plVar2 + 0xb0))(plVar2,&local_290,DAT_1407c0ab8 + uVar13 + 0x17c);
    if (iVar6 < 0) {
      if (iVar6 == -0x7ff8fff2) {
        IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
        return;
      }
      local_2e8 = (undefined8 *)CONCAT44(local_2e8._4_4_,iVar6);
      IggyGDrawSendWarning
                (0,"GDraw D3D error in %s%s: 0x%08x","CreateRasterizerState",&DAT_140608a38);
      return;
    }
    uVar11 = (int)uVar13 + 1;
    uVar13 = (ulonglong)uVar11;
    uVar21 = uVar20;
  } while ((int)uVar11 < 2);
  do {
    iVar6 = (int)uVar21;
    puVar17 = &DAT_14064e8b8;
    uVar22 = 0x15;
    if (iVar6 != 0) {
      uVar22 = 0x10;
    }
    uVar13 = uVar20;
    do {
      local_2c4 = *puVar17;
      local_2bc = 3;
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      uStack_2a0 = 0;
      uStack_2b4 = 1;
      local_298 = 0x7f7fffff;
      local_2c8 = uVar22;
      local_2c0 = local_2c4;
      iVar7 = (**(code **)(*plVar2 + 0xb8))
                        (plVar2,&local_2c8,DAT_1407c0ab8 + uVar13 + (longlong)iVar6 * 4 + 0x17e);
      if (iVar7 < 0) {
        pcVar19 = "CreateSamplerState";
        goto LAB_140308661;
      }
      uVar11 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar11;
      puVar17 = puVar17 + 1;
    } while ((int)uVar11 < 4);
    uVar21 = (ulonglong)(iVar6 + 1U);
  } while ((int)(iVar6 + 1U) < 2);
  lVar15 = 0xc30;
  piVar23 = &DAT_14076f094;
  do {
    iVar6 = piVar23[1];
    iVar7 = *piVar23;
    local_268 = 0;
    FUN_140595d50(local_243,0,0xe3);
    local_260 = piVar23[-1];
    local_250 = iVar7;
    if (iVar7 == 9) {
      local_250 = 7;
    }
    local_254 = 1;
    local_248 = 1;
    local_244 = 0xf;
    local_25c = iVar7;
    local_258 = iVar6;
    local_24c = iVar6;
    iVar6 = (**(code **)(*plVar2 + 0xa0))(plVar2,&local_268,local_2d8);
    if (iVar6 < 0) {
      if (iVar6 == -0x7ff8fff2) {
        IggyGDrawSendWarning();
        local_2d8[0] = 0;
      }
      else {
        local_2e8 = (undefined8 *)CONCAT44(local_2e8._4_4_,iVar6);
        IggyGDrawSendWarning(0,"GDraw D3D error in %s%s: 0x%08x","CreateBlendState",&DAT_140608a38);
        local_2d8[0] = 0;
      }
    }
    puVar8 = DAT_1407c0ab8;
    *(longlong *)(lVar15 + (longlong)DAT_1407c0ab8) = local_2d8[0];
    if (local_2d8[0] == 0) {
      return;
    }
    lVar15 = lVar15 + 8;
    piVar23 = piVar23 + 3;
  } while (lVar15 < 0xc60);
  FUN_140595d50(local_158,0,0x108);
  iVar7 = (**(code **)(*plVar2 + 0xa0))(plVar2,local_158,puVar8 + 0x18c);
  if (iVar7 < 0) {
    pcVar19 = "CreateBlendState";
LAB_140308661:
    if (iVar7 == -0x7ff8fff2) {
      IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
    }
    else {
      local_2e8 = (undefined8 *)CONCAT44(local_2e8._4_4_,iVar7);
      IggyGDrawSendWarning(0,"GDraw D3D error in %s%s: 0x%08x",pcVar19,&DAT_140608a38);
    }
  }
  else {
    uVar14 = 2;
    uVar13 = uVar20;
    do {
      iVar6 = (int)uVar13;
      uVar13 = uVar20;
      do {
        local_298 = 0;
        uStack_2b8 = 0;
        uStack_2b4 = 0;
        uStack_2b0 = 0;
        uStack_2a8 = 0;
        uStack_2a0 = 0;
        iVar12 = (int)uVar13;
        if ((iVar6 != 0) || (local_2c8 = 0, iVar12 != 0)) {
          local_2c8 = 1;
        }
        local_2c4 = (uint)(iVar6 != 0);
        local_2bc = 0;
        local_2c0 = 8;
        if (iVar12 != 0) {
          local_2c0 = 2;
        }
        iVar7 = (**(code **)(*plVar2 + 0xa8))
                          (plVar2,&local_2c8,DAT_1407c0ab8 + uVar13 + (longlong)iVar6 * 2 + 0x18d);
        if (iVar7 < 0) {
          pcVar19 = "CreateDepthStencilState";
          goto LAB_140308661;
        }
        uVar13 = (ulonglong)(iVar12 + 1U);
      } while ((int)(iVar12 + 1U) < 2);
      uVar13 = (ulonglong)(iVar6 + 1U);
    } while ((int)(iVar6 + 1U) < 2);
    uVar9 = FUN_140307b70(0x80,4);
    DAT_1407c0ab8[0x1d2] = uVar9;
    uVar9 = FUN_140307b70(0x40,4);
    DAT_1407c0ab8[0x1d3] = uVar9;
    uVar9 = FUN_140307b70(0x50,4);
    DAT_1407c0ab8[0x1d4] = uVar9;
    uVar9 = FUN_140307b70(0x50,4);
    DAT_1407c0ab8[0x1d5] = uVar9;
    uVar9 = FUN_140307b70(0xa0,4);
    DAT_1407c0ab8[0x1d6] = uVar9;
    lVar15 = IggyGDrawMallocAnnotated
                       (0x6000,
                        "D:\\a\\MinecraftConsoles\\MinecraftConsoles\\Minecraft.Client\\Windows64\\Iggy\\gdraw\\gdraw_d3d1x_shared.inl"
                        ,0x7de);
    if (lVar15 == 0) {
      DAT_1407c0ab8[0x17a] = 0;
    }
    else {
      uStack_284 = 0;
      uStack_280 = 0;
      uVar18 = 0;
      uStack_27c = 0;
      local_2d8[1] = 0;
      local_290 = 0x100006000;
      uStack_288 = 2;
      do {
        uVar13 = (ulonglong)uVar18;
        uVar18 = uVar18 + 1;
        *(ushort *)(lVar15 + 4 + uVar13 * 0xc) = uVar14;
        sVar10 = uVar14 - 2;
        *(ushort *)(lVar15 + 2 + uVar13 * 0xc) = uVar14 - 1;
        sVar5 = uVar14 + 1;
        *(ushort *)(lVar15 + 8 + uVar13 * 0xc) = uVar14;
        uVar14 = uVar14 + 4;
        *(short *)(lVar15 + uVar13 * 0xc) = sVar10;
        *(short *)(lVar15 + 6 + uVar13 * 0xc) = sVar10;
        *(short *)(lVar15 + 10 + uVar13 * 0xc) = sVar5;
      } while (uVar14 < 0x2002);
      local_2d8[0] = lVar15;
      iVar6 = (**(code **)(*(longlong *)*DAT_1407c0ab8 + 0x18))
                        ((longlong *)*DAT_1407c0ab8,&local_290,local_2d8,DAT_1407c0ab8 + 0x17a);
      if (iVar6 < 0) {
        if (iVar6 == -0x7ff8fff2) {
          IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
        }
        else {
          local_2e8 = (undefined8 *)CONCAT44(local_2e8._4_4_,iVar6);
          IggyGDrawSendWarning(0,"GDraw D3D error in %s%s: 0x%08x","CreateBuffer"," for constants");
        }
        DAT_1407c0ab8[0x17a] = 0;
      }
      IggyGDrawFree(lVar15);
    }
  }
  return;
}



// ===== FUN_1403086e0 @ 0x1403086e0 [render] =====

void FUN_1403086e0(void)

{
  if (DAT_1407c0ab8 != 0) {
    if (*(longlong *)(DAT_1407c0ab8 + 0x1008) != 0) {
      IggyGDrawFree(*(longlong *)(DAT_1407c0ab8 + 0x1008));
    }
    if (*(longlong *)(DAT_1407c0ab8 + 0x1010) != 0) {
      IggyGDrawFree(*(longlong *)(DAT_1407c0ab8 + 0x1010));
    }
    IggyGDrawFree(DAT_1407c0ab8);
    DAT_1407c0ab8 = 0;
  }
  return;
}



// ===== FUN_140308740 @ 0x140308740 [render] =====

longlong FUN_140308740(ulonglong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint7 uVar4;
  longlong lVar3;
  uint uVar5;
  
  lVar3 = DAT_1407c0ab8;
  uVar1 = (uint)param_1;
  uVar5 = uVar1 * 3 >> 2;
  uVar2 = FUN_140307b70(param_1,1);
  *(undefined8 *)(lVar3 + 0xeb8) = uVar2;
  *(undefined8 *)(lVar3 + 0xec4) = 0;
  *(uint *)(lVar3 + 0xec0) = uVar1;
  lVar3 = DAT_1407c0ab8;
  uVar2 = FUN_140307b70(uVar5,2);
  *(undefined8 *)(lVar3 + 0xed0) = uVar2;
  *(uint *)(lVar3 + 0xed8) = uVar5;
  *(undefined8 *)(lVar3 + 0xedc) = 0;
  lVar3 = DAT_1407c0ab8;
  if ((uVar1 & 0xfffffff0) < 0x20000) {
    uVar1 = (uint)((param_1 & 0xffffffff) >> 4);
  }
  else {
    uVar1 = 0x2000;
  }
  *(uint *)(DAT_1407c0ab8 + 0xef0) = uVar1 & 0xfffffffc;
  uVar4 = (uint7)(uint3)((uVar1 & 0xfffffffc) >> 8);
  if ((*(longlong *)(lVar3 + 0xeb8) == 0) || (*(longlong *)(lVar3 + 0xed0) == 0)) {
    lVar3 = (ulonglong)uVar4 << 8;
  }
  else {
    lVar3 = CONCAT71(uVar4,1);
  }
  return lVar3;
}



// ===== FUN_140308800 @ 0x140308800 [ui,render] =====

undefined1 FUN_140308800(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar6 = DAT_1407c0ab8;
  lVar5 = (longlong)param_1;
  iVar3 = 9;
  if (param_1 != 0) {
    iVar3 = param_2;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  if (((&DAT_14076ef80)[lVar5 * 2] != iVar3) || ((&DAT_14076ef84)[lVar5 * 2] != param_3)) {
    (&DAT_14076ef80)[lVar5 * 2] = iVar3;
    (&DAT_14076ef84)[lVar5 * 2] = param_3;
    if (lVar6 != 0) {
      if (param_1 == 0) {
        *(uint *)(lVar6 + 0x52c) = *(uint *)(lVar6 + 0x52c) | 2;
        FUN_1403027f0(lVar6 + 0x520);
        do {
          iVar4 = FUN_140303a10(lVar6 + 0x520,&local_38);
          lVar5 = DAT_1407c0ab8;
        } while (iVar4 != 0);
        if (*(longlong **)(DAT_1407c0ab8 + 0xba0) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(DAT_1407c0ab8 + 0xba0) + 0x10))();
          *(undefined8 *)(lVar5 + 0xba0) = 0;
        }
        lVar6 = DAT_1407c0ab8;
        if (*(longlong **)(DAT_1407c0ab8 + 3000) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(DAT_1407c0ab8 + 3000) + 0x10))();
          *(undefined8 *)(lVar6 + 3000) = 0;
        }
        FUN_140302850(DAT_1407c0ab8 + 0x520,iVar3,param_3);
        uVar2 = 1;
      }
      else if (param_1 == 1) {
        lVar6 = *(longlong *)(lVar6 + 0x1008);
        if (lVar6 != 0) {
          *(uint *)(lVar6 + 0xc) = *(uint *)(lVar6 + 0xc) | 2;
          FUN_1403027f0(lVar6);
          do {
            iVar3 = FUN_140303a10(lVar6,&local_38);
          } while (iVar3 != 0);
          IggyGDrawFree(*(undefined8 *)(DAT_1407c0ab8 + 0x1008));
        }
        uVar1 = DAT_14076ef8c;
        iVar3 = DAT_14076ef88;
        lVar6 = IggyGDrawMallocAnnotated
                          ((longlong)DAT_14076ef88 * 0x50 + 0x250,
                           "D:\\a\\MinecraftConsoles\\MinecraftConsoles\\Minecraft.Client\\Windows64\\Iggy\\gdraw\\gdraw_d3d1x_shared.inl"
                           ,0x831);
        if (lVar6 != 0) {
          lVar5 = lVar6;
          FUN_140302850(lVar6,iVar3,uVar1);
          *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) & 0xfffffffe;
        }
        uVar2 = lVar6 != 0;
        *(longlong *)(DAT_1407c0ab8 + 0x1008) = lVar6;
      }
      else if (param_1 == 2) {
        lVar6 = *(longlong *)(lVar6 + 0x1010);
        if (lVar6 != 0) {
          *(uint *)(lVar6 + 0xc) = *(uint *)(lVar6 + 0xc) | 2;
          FUN_1403027f0(lVar6);
          do {
            iVar3 = FUN_140303a10(lVar6,&local_38);
          } while (iVar3 != 0);
          IggyGDrawFree(*(undefined8 *)(DAT_1407c0ab8 + 0x1010));
        }
        uVar1 = DAT_14076ef94;
        iVar3 = DAT_14076ef90;
        lVar6 = IggyGDrawMallocAnnotated
                          ((longlong)DAT_14076ef90 * 0x50 + 0x250,
                           "D:\\a\\MinecraftConsoles\\MinecraftConsoles\\Minecraft.Client\\Windows64\\Iggy\\gdraw\\gdraw_d3d1x_shared.inl"
                           ,0x831);
        if (lVar6 != 0) {
          lVar5 = lVar6;
          FUN_140302850(lVar6,iVar3,uVar1);
          *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) | 1;
        }
        uVar2 = lVar6 != 0;
        *(longlong *)(DAT_1407c0ab8 + 0x1010) = lVar6;
      }
      else if (param_1 == 3) {
        FUN_140303bb0();
        lVar6 = DAT_1407c0ab8;
        if (*(longlong **)(DAT_1407c0ab8 + 0xeb8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(DAT_1407c0ab8 + 0xeb8) + 0x10))();
          *(undefined8 *)(lVar6 + 0xeb8) = 0;
        }
        lVar6 = DAT_1407c0ab8;
        if (*(longlong **)(DAT_1407c0ab8 + 0xed0) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(DAT_1407c0ab8 + 0xed0) + 0x10))();
          *(undefined8 *)(lVar6 + 0xed0) = 0;
        }
        uVar2 = FUN_140308740(param_3);
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  return 1;
}



// ===== FUN_140308ae0 @ 0x140308ae0 [ui,render] =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_140308ae0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar4 = (undefined8 *)
           IggyGDrawMallocAnnotated
                     (0x1030,
                      "D:\\a\\MinecraftConsoles\\MinecraftConsoles\\Minecraft.Client\\Windows64\\Iggy\\gdraw\\gdraw_d3d1x_shared.inl"
                      ,0x8a2);
  DAT_1407c0ab8 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_140595d50(puVar4 + 2,0,0xac0);
    FUN_140595d50(puVar4 + 0x15b,0,0x558);
    *(undefined4 *)(puVar4 + 0x15a) = param_3;
    *(undefined4 *)((longlong)puVar4 + 0xad4) = param_4;
    *puVar4 = param_1;
    puVar4[1] = param_2;
    uVar2 = DAT_14076ef8c;
    iVar1 = DAT_14076ef88;
    lVar5 = IggyGDrawMallocAnnotated
                      ((longlong)DAT_14076ef88 * 0x50 + 0x250,
                       "D:\\a\\MinecraftConsoles\\MinecraftConsoles\\Minecraft.Client\\Windows64\\Iggy\\gdraw\\gdraw_d3d1x_shared.inl"
                       ,0x831);
    if (lVar5 != 0) {
      lVar6 = lVar5;
      FUN_140302850(lVar5,iVar1,uVar2);
      *(uint *)(lVar6 + 0xc) = *(uint *)(lVar6 + 0xc) & 0xfffffffe;
    }
    DAT_1407c0ab8[0x201] = lVar5;
    uVar2 = DAT_14076ef94;
    iVar1 = DAT_14076ef90;
    lVar5 = IggyGDrawMallocAnnotated
                      ((longlong)DAT_14076ef90 * 0x50 + 0x250,
                       "D:\\a\\MinecraftConsoles\\MinecraftConsoles\\Minecraft.Client\\Windows64\\Iggy\\gdraw\\gdraw_d3d1x_shared.inl"
                       ,0x831);
    if (lVar5 != 0) {
      FUN_140302850(lVar5,iVar1,uVar2);
      *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) | 1;
    }
    puVar4 = DAT_1407c0ab8;
    DAT_1407c0ab8[0x202] = lVar5;
    FUN_140302850(puVar4 + 0xa4,DAT_14076ef80,DAT_14076ef84);
    if (((puVar4[0x201] != 0) && (puVar4[0x202] != 0)) &&
       (cVar3 = FUN_140308740(DAT_14076ef9c), cVar3 != '\0')) {
      FUN_140307c40();
      _DAT_1407c0b20 = &LAB_140305580;
      _DAT_1407c0b28 = FUN_140305360;
      _DAT_1407c0b30 = FUN_140305400;
      _DAT_1407c0b38 = _guard_check_icall;
      _DAT_1407c0b40 = FUN_140304660;
      _DAT_1407c0b48 = FUN_140305db0;
      _DAT_1407c0b50 = FUN_140305e20;
      _DAT_1407c0b58 = FUN_140307200;
      _DAT_1407c0b60 = FUN_140306550;
      _DAT_1407c0b68 = FUN_140304040;
      _DAT_1407c0b70 = FUN_140040840;
      _DAT_1407c0b78 = FUN_1403041f0;
      _DAT_1407c0b80 = FUN_140304820;
      _DAT_1407c0b88 = FUN_140040840;
      _DAT_1407c0b90 = FUN_140304900;
      _DAT_1407c0b98 = &LAB_140304540;
      _DAT_1407c0ba0 = &LAB_140304540;
      _DAT_1407c0ba8 = FUN_140303c30;
      DAT_1407c0bb0 = &LAB_140304610;
      _DAT_1407c0bb8 = &LAB_140304b20;
      _DAT_1407c0bc0 = &LAB_140304540;
      _DAT_1407c0bc8 = FUN_140304550;
      _DAT_1407c0bd0 = &LAB_140304600;
      DAT_1407c0bd8 = FUN_140305840;
      DAT_1407c0be0 = FUN_140305d50;
      _DAT_1407c0be8 = &LAB_140304640;
      _DAT_1407c0bf0 = &LAB_140304b30;
      _DAT_1407c0bf8 = &LAB_140304030;
      _DAT_1407c0c10 = _guard_check_icall;
      _DAT_1407c0c18 = _guard_check_icall;
      _DAT_1407c0c20 = FUN_140308fc0;
      _DAT_1407c0c28 = FUN_140309350;
      _DAT_1407c0c30 = &LAB_140305e90;
      return &DAT_1407c0b20;
    }
    FUN_1403086e0();
  }
  return (undefined *)0x0;
}



// ===== FUN_140308fc0 @ 0x140308fc0 [render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140308fc0(longlong param_1,undefined8 param_2,uint *param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  char *pcVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  uint uVar21;
  int *piVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  undefined1 auStack_238 [32];
  int local_218;
  int local_208;
  longlong *local_200;
  longlong *local_1f8;
  longlong local_1f0;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  int local_1b0 [94];
  ulonglong local_38;
  
  local_38 = DAT_1407502c0 ^ (ulonglong)auStack_238;
  puVar19 = (undefined1 *)0x0;
  local_200 = (longlong *)0x0;
  local_1f8 = (longlong *)0x0;
  local_1b8 = 0;
  uVar21 = 0;
  local_1f0 = param_1;
  FUN_140595d50(local_1b0,0,0x178);
  cVar1 = (char)param_3[1];
  iVar8 = 8;
  uVar4 = *(ushort *)((longlong)param_3 + 6);
  uVar5 = (ushort)param_3[2];
  bVar2 = *(byte *)((longlong)param_3 + 5);
  uVar18 = (ulonglong)bVar2;
  local_208 = 1;
  local_1e8 = (uint)uVar4;
  local_1e4 = (uint)uVar5;
  local_1e0 = (uint)bVar2;
  local_1dc = 1;
  local_1d4 = 1;
  local_1cc = 1;
  local_1c8 = 8;
  local_1c0 = 0;
  if (cVar1 == '\0') {
    uVar6 = 0x1c;
    iVar8 = 4;
  }
  else if (cVar1 == '\t') {
    uVar6 = 0x47;
    local_208 = 4;
  }
  else if (cVar1 == '\n') {
    uVar6 = 0x4a;
    local_208 = 4;
    iVar8 = 0x10;
  }
  else {
    if (cVar1 != '\v') {
      IggyGDrawSendWarning(0,"GDraw .iggytex raw texture format %d not supported by hardware",cVar1)
      ;
      goto LAB_1403092e8;
    }
    uVar6 = 0x4d;
    local_208 = 4;
    iVar8 = 0x10;
  }
  puVar16 = (undefined1 *)((ulonglong)*param_3 + local_1f0);
  local_1dc = CONCAT44(uVar6,1);
  if ((cVar1 == '\x05') || (puVar9 = puVar16, puVar24 = puVar19, cVar1 == '\x06')) {
    puVar9 = puVar19;
    uVar23 = uVar18;
    uVar12 = local_1e4;
    uVar13 = local_1e8;
    if (local_1e0 != 0) {
      do {
        uVar21 = (int)puVar9 + uVar13 * uVar12 * 2;
        uVar23 = uVar23 - 1;
        puVar9 = (undefined1 *)(ulonglong)uVar21;
        uVar12 = (uint)((int)uVar12 >> 1 == 0) + ((int)uVar12 >> 1);
        uVar13 = (uint)((int)uVar13 >> 1 == 0) + ((int)uVar13 >> 1);
      } while (uVar23 != 0);
    }
    puVar9 = (undefined1 *)
             IggyGDrawMallocAnnotated
                       ((longlong)(int)(uVar21 * 2),
                        "D:\\a\\MinecraftConsoles\\MinecraftConsoles\\Minecraft.Client\\Windows64\\Iggy\\gdraw\\gdraw_d3d1x_shared.inl"
                        ,0x982);
    if (puVar9 == (undefined1 *)0x0) {
      IggyGDrawSendWarning
                (0,"GDraw out of memory to store texture data to pass to D3D for %d x %d texture",
                 uVar4,uVar5);
      goto LAB_1403092e8;
    }
    puVar10 = puVar9;
    puVar20 = puVar19;
    puVar24 = puVar9;
    if (bVar2 != 0) {
      do {
        iVar14 = (int)(uint)uVar4 >> ((byte)puVar20 & 0x1f);
        iVar7 = 1;
        if (1 < iVar14) {
          iVar7 = iVar14;
        }
        iVar15 = (int)(uint)uVar5 >> ((byte)puVar20 & 0x1f);
        iVar14 = 1;
        if (1 < iVar15) {
          iVar14 = iVar15;
        }
        if (0 < iVar14 * iVar7) {
          uVar23 = (ulonglong)(uint)(iVar14 * iVar7);
          do {
            uVar3 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar10[1] = uVar3;
            *puVar10 = uVar3;
            puVar10 = puVar10 + 2;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
        uVar21 = (int)puVar20 + 1;
        puVar20 = (undefined1 *)(ulonglong)uVar21;
      } while ((int)uVar21 < (int)(uint)bVar2);
    }
  }
  if (uVar18 != 0) {
    piVar22 = local_1b0;
    do {
      *(undefined1 **)(piVar22 + -2) = puVar9;
      iVar14 = (int)(uint)uVar4 >> ((byte)puVar19 & 0x1f);
      iVar7 = 1;
      if (1 < iVar14) {
        iVar7 = iVar14;
      }
      iVar15 = (int)(uint)uVar5 >> ((byte)puVar19 & 0x1f);
      iVar14 = 1;
      if (1 < iVar15) {
        iVar14 = iVar15;
      }
      puVar19 = (undefined1 *)(ulonglong)((int)puVar19 + 1);
      iVar7 = (local_208 + -1 + iVar7) / local_208;
      *piVar22 = iVar7 * iVar8;
      puVar9 = puVar9 + ((local_208 + -1 + iVar14) / local_208) * iVar7 * iVar8;
      uVar18 = uVar18 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar18 != 0);
  }
  puVar11 = (undefined8 *)0x0;
  pcVar17 = "CreateTexture2D";
  iVar8 = (**(code **)(*(longlong *)*DAT_1407c0ab8 + 0x28))
                    ((longlong *)*DAT_1407c0ab8,&local_1e8,&local_1b8,&local_200);
  if (iVar8 < 0) {
LAB_1403092a2:
    if (iVar8 == -0x7ff8fff2) {
      IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
    }
    else {
      local_218 = iVar8;
      IggyGDrawSendWarning(0,"GDraw D3D error in %s%s: 0x%08x",pcVar17,&DAT_140608a38);
    }
  }
  else {
    pcVar17 = "CreateShaderResourceView for texture creation";
    iVar8 = (**(code **)(*(longlong *)*DAT_1407c0ab8 + 0x38))
                      ((longlong *)*DAT_1407c0ab8,local_200,0,&local_1f8);
    if (iVar8 < 0) goto LAB_1403092a2;
    puVar11 = (undefined8 *)FUN_140303f70(local_1f8);
  }
  if (puVar24 != (undefined1 *)0x0) {
    IggyGDrawFree(puVar24);
  }
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = local_200;
    return puVar11;
  }
LAB_1403092e8:
  if (local_1f8 != (longlong *)0x0) {
    (**(code **)(*local_1f8 + 0x10))();
  }
  if (local_200 != (longlong *)0x0) {
    (**(code **)(*local_200 + 0x10))();
  }
  return (undefined8 *)0x0;
}



// ===== FUN_1403093b0 @ 0x1403093b0 [render] =====

void FUN_1403093b0(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)param_1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  if (*param_1 != 0) {
    plVar1 = param_1 + 1;
    iVar5 = (**(code **)(*(longlong *)*DAT_1407c0ab8 + 0x78))
                      ((longlong *)*DAT_1407c0ab8,*param_1,(int)param_1[1],0,plVar1);
    if (iVar5 < 0) {
      if (iVar5 == -0x7ff8fff2) {
        IggyGDrawSendWarning(0,"GDraw D3D out of memory in %s%s");
        *plVar1 = 0;
        return;
      }
      IggyGDrawSendWarning
                (0,"GDraw D3D error in %s%s: 0x%08x","CreatePixelShader",&DAT_140608a38,iVar5);
      *plVar1 = 0;
    }
  }
  return;
}



// ===== FUN_1403141a0 @ 0x1403141a0 [ui,render] =====

void FUN_1403141a0(uint *param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0x21) {
    *param_1 = param_3;
    return;
  }
  while (param_2 == 0x22) {
    if (param_3 == 0) {
      param_2 = 4;
    }
    else {
      FUN_1403141a0(param_1,4,1);
      FUN_1403141a0(param_1,0xd,1);
      FUN_1403141a0(param_1,0xe,1);
      FUN_1403141a0(param_1,0xf,1);
      param_3 = 1;
      param_2 = 0x10;
    }
  }
  if (0x1f < param_2) {
    return;
  }
  if (param_3 != 0) {
    *param_1 = *param_1 | 1 << ((byte)param_2 & 0x1f);
    return;
  }
  if (param_2 == 4) {
    FUN_1403141a0(param_1,0xd,0);
    FUN_1403141a0(param_1,0xe,0);
    FUN_1403141a0(param_1,0xf,0);
    uVar1 = 0x10;
  }
  else if (param_2 == 0xd) {
    FUN_1403141a0(param_1,7,0);
    uVar1 = 8;
  }
  else if (param_2 == 0xe) {
    uVar1 = 5;
  }
  else {
    if (param_2 != 0xf) goto LAB_1403142b4;
    uVar1 = 6;
  }
  FUN_1403141a0(param_1,uVar1,0);
LAB_1403142b4:
  *param_1 = *param_1 & ~(1 << ((byte)param_2 & 0x1f));
  return;
}



// ===== FUN_140315be0 @ 0x140315be0 [storage,render] =====

undefined1 (*) [16] FUN_140315be0(undefined1 (*param_1) [16],ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar23 [16];
  undefined1 auVar31 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 uVar39;
  
  uVar5 = 0;
  FUN_140054090(param_1,param_2[2],0x20);
  pauVar4 = param_1;
  if (7 < *(ulonglong *)(param_1[1] + 8)) {
    pauVar4 = *(undefined1 (**) [16])*param_1;
  }
  puVar1 = param_2 + 2;
  puVar3 = param_2;
  if (0xf < param_2[3]) {
    puVar3 = (ulonglong *)*param_2;
    param_2 = (ulonglong *)*param_2;
  }
  puVar3 = (ulonglong *)(*puVar1 + (longlong)puVar3);
  uVar6 = (longlong)puVar3 - (longlong)param_2;
  if (puVar3 < param_2) {
    uVar6 = uVar5;
  }
  if (((uVar6 != 0) && (0x1f < uVar6)) &&
     (((undefined1 (*) [16])((longlong)param_2 + (uVar6 - 1)) < pauVar4 ||
      (pauVar4[-1] + uVar6 * 2 + 0xe < param_2)))) {
    do {
      uVar2 = *param_2;
      uVar5 = uVar5 + 0x20;
      uVar39 = (undefined1)(uVar2 >> 0x38);
      auVar13._8_6_ = 0;
      auVar13._0_8_ = uVar2;
      auVar13[0xe] = uVar39;
      auVar13[0xf] = uVar39;
      uVar39 = (undefined1)(uVar2 >> 0x30);
      auVar12._14_2_ = auVar13._14_2_;
      auVar12._8_5_ = 0;
      auVar12._0_8_ = uVar2;
      auVar12[0xd] = uVar39;
      auVar11._13_3_ = auVar12._13_3_;
      auVar11._8_4_ = 0;
      auVar11._0_8_ = uVar2;
      auVar11[0xc] = uVar39;
      uVar39 = (undefined1)(uVar2 >> 0x28);
      auVar10._12_4_ = auVar11._12_4_;
      auVar10._8_3_ = 0;
      auVar10._0_8_ = uVar2;
      auVar10[0xb] = uVar39;
      auVar9._11_5_ = auVar10._11_5_;
      auVar9._8_2_ = 0;
      auVar9._0_8_ = uVar2;
      auVar9[10] = uVar39;
      uVar39 = (undefined1)(uVar2 >> 0x20);
      auVar8._10_6_ = auVar9._10_6_;
      auVar8[8] = 0;
      auVar8._0_8_ = uVar2;
      auVar8[9] = uVar39;
      auVar7._9_7_ = auVar8._9_7_;
      auVar7[8] = uVar39;
      auVar7._0_8_ = uVar2;
      uVar39 = (undefined1)(uVar2 >> 0x18);
      auVar14._8_8_ = auVar7._8_8_;
      auVar14[7] = uVar39;
      auVar14[6] = uVar39;
      uVar39 = (undefined1)(uVar2 >> 0x10);
      auVar14[5] = uVar39;
      auVar14[4] = uVar39;
      uVar39 = (undefined1)(uVar2 >> 8);
      auVar14[3] = uVar39;
      auVar14[2] = uVar39;
      auVar14[0] = (undefined1)uVar2;
      auVar14[1] = auVar14[0];
      auVar14 = psraw(auVar14,8);
      *pauVar4 = auVar14;
      uVar2 = param_2[1];
      uVar39 = (undefined1)(uVar2 >> 0x38);
      auVar22._8_6_ = 0;
      auVar22._0_8_ = uVar2;
      auVar22[0xe] = uVar39;
      auVar22[0xf] = uVar39;
      uVar39 = (undefined1)(uVar2 >> 0x30);
      auVar21._14_2_ = auVar22._14_2_;
      auVar21._8_5_ = 0;
      auVar21._0_8_ = uVar2;
      auVar21[0xd] = uVar39;
      auVar20._13_3_ = auVar21._13_3_;
      auVar20._8_4_ = 0;
      auVar20._0_8_ = uVar2;
      auVar20[0xc] = uVar39;
      uVar39 = (undefined1)(uVar2 >> 0x28);
      auVar19._12_4_ = auVar20._12_4_;
      auVar19._8_3_ = 0;
      auVar19._0_8_ = uVar2;
      auVar19[0xb] = uVar39;
      auVar18._11_5_ = auVar19._11_5_;
      auVar18._8_2_ = 0;
      auVar18._0_8_ = uVar2;
      auVar18[10] = uVar39;
      uVar39 = (undefined1)(uVar2 >> 0x20);
      auVar17._10_6_ = auVar18._10_6_;
      auVar17[8] = 0;
      auVar17._0_8_ = uVar2;
      auVar17[9] = uVar39;
      auVar16._9_7_ = auVar17._9_7_;
      auVar16[8] = uVar39;
      auVar16._0_8_ = uVar2;
      uVar39 = (undefined1)(uVar2 >> 0x18);
      auVar15._8_8_ = auVar16._8_8_;
      auVar15[7] = uVar39;
      auVar15[6] = uVar39;
      uVar39 = (undefined1)(uVar2 >> 0x10);
      auVar15[5] = uVar39;
      auVar15[4] = uVar39;
      uVar39 = (undefined1)(uVar2 >> 8);
      auVar15[3] = uVar39;
      auVar15[2] = uVar39;
      auVar15[0] = (undefined1)uVar2;
      auVar15[1] = auVar15[0];
      auVar14 = psraw(auVar15,8);
      pauVar4[1] = auVar14;
      uVar2 = param_2[2];
      uVar39 = (undefined1)(uVar2 >> 0x38);
      auVar30._8_6_ = 0;
      auVar30._0_8_ = uVar2;
      auVar30[0xe] = uVar39;
      auVar30[0xf] = uVar39;
      uVar39 = (undefined1)(uVar2 >> 0x30);
      auVar29._14_2_ = auVar30._14_2_;
      auVar29._8_5_ = 0;
      auVar29._0_8_ = uVar2;
      auVar29[0xd] = uVar39;
      auVar28._13_3_ = auVar29._13_3_;
      auVar28._8_4_ = 0;
      auVar28._0_8_ = uVar2;
      auVar28[0xc] = uVar39;
      uVar39 = (undefined1)(uVar2 >> 0x28);
      auVar27._12_4_ = auVar28._12_4_;
      auVar27._8_3_ = 0;
      auVar27._0_8_ = uVar2;
      auVar27[0xb] = uVar39;
      auVar26._11_5_ = auVar27._11_5_;
      auVar26._8_2_ = 0;
      auVar26._0_8_ = uVar2;
      auVar26[10] = uVar39;
      uVar39 = (undefined1)(uVar2 >> 0x20);
      auVar25._10_6_ = auVar26._10_6_;
      auVar25[8] = 0;
      auVar25._0_8_ = uVar2;
      auVar25[9] = uVar39;
      auVar24._9_7_ = auVar25._9_7_;
      auVar24[8] = uVar39;
      auVar24._0_8_ = uVar2;
      uVar39 = (undefined1)(uVar2 >> 0x18);
      auVar23._8_8_ = auVar24._8_8_;
      auVar23[7] = uVar39;
      auVar23[6] = uVar39;
      uVar39 = (undefined1)(uVar2 >> 0x10);
      auVar23[5] = uVar39;
      auVar23[4] = uVar39;
      uVar39 = (undefined1)(uVar2 >> 8);
      auVar23[3] = uVar39;
      auVar23[2] = uVar39;
      auVar23[0] = (undefined1)uVar2;
      auVar23[1] = auVar23[0];
      auVar14 = psraw(auVar23,8);
      pauVar4[2] = auVar14;
      uVar2 = param_2[3];
      param_2 = param_2 + 4;
      uVar39 = (undefined1)(uVar2 >> 0x38);
      auVar38._8_6_ = 0;
      auVar38._0_8_ = uVar2;
      auVar38[0xe] = uVar39;
      auVar38[0xf] = uVar39;
      uVar39 = (undefined1)(uVar2 >> 0x30);
      auVar37._14_2_ = auVar38._14_2_;
      auVar37._8_5_ = 0;
      auVar37._0_8_ = uVar2;
      auVar37[0xd] = uVar39;
      auVar36._13_3_ = auVar37._13_3_;
      auVar36._8_4_ = 0;
      auVar36._0_8_ = uVar2;
      auVar36[0xc] = uVar39;
      uVar39 = (undefined1)(uVar2 >> 0x28);
      auVar35._12_4_ = auVar36._12_4_;
      auVar35._8_3_ = 0;
      auVar35._0_8_ = uVar2;
      auVar35[0xb] = uVar39;
      auVar34._11_5_ = auVar35._11_5_;
      auVar34._8_2_ = 0;
      auVar34._0_8_ = uVar2;
      auVar34[10] = uVar39;
      uVar39 = (undefined1)(uVar2 >> 0x20);
      auVar33._10_6_ = auVar34._10_6_;
      auVar33[8] = 0;
      auVar33._0_8_ = uVar2;
      auVar33[9] = uVar39;
      auVar32._9_7_ = auVar33._9_7_;
      auVar32[8] = uVar39;
      auVar32._0_8_ = uVar2;
      uVar39 = (undefined1)(uVar2 >> 0x18);
      auVar31._8_8_ = auVar32._8_8_;
      auVar31[7] = uVar39;
      auVar31[6] = uVar39;
      uVar39 = (undefined1)(uVar2 >> 0x10);
      auVar31[5] = uVar39;
      auVar31[4] = uVar39;
      uVar39 = (undefined1)(uVar2 >> 8);
      auVar31[3] = uVar39;
      auVar31[2] = uVar39;
      auVar31[0] = (undefined1)uVar2;
      auVar31[1] = auVar31[0];
      auVar14 = psraw(auVar31,8);
      pauVar4[3] = auVar14;
      pauVar4 = pauVar4 + 4;
    } while (uVar5 != (uVar6 & 0xffffffffffffffe0));
  }
  for (; param_2 != puVar3; param_2 = (ulonglong *)((longlong)param_2 + 1)) {
    *(short *)*pauVar4 = (short)(char)*param_2;
    pauVar4 = (undefined1 (*) [16])(*pauVar4 + 2);
  }
  return param_1;
}



// ===== FUN_140315d00 @ 0x140315d00 [storage,ui,render] =====

undefined1 * FUN_140315d00(undefined8 *param_1)

{
  short sVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar3 = 0;
  if (param_1[2] != 0) {
    do {
      puVar2 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar2 = (undefined8 *)*param_1;
      }
      sVar1 = *(short *)((longlong)puVar2 + uVar4 * 2);
      if (sVar1 == 0x2f) {
        sVar1 = 0x5c;
      }
      uVar5 = (ulonglong)((int)uVar4 + 1);
      (&DAT_1407c1d60)[uVar4] = (char)sVar1;
      uVar3 = param_1[2];
      uVar4 = uVar5;
    } while (uVar5 < uVar3);
  }
  if (0xff < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_140559180();
  }
  (&DAT_1407c1d60)[uVar3] = 0;
  return &DAT_1407c1d60;
}



// ===== FUN_140317110 @ 0x140317110 [storage,ui,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_140317110(longlong *param_1,longlong *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 ****ppppuVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStackY_108 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 ***local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined1 local_68 [16];
  longlong local_58;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1407502c0 ^ (ulonglong)auStackY_108;
  *param_1 = 0;
  param_1[1] = 0;
  uVar6 = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  local_b8 = param_1;
  if (param_2[2] == 0) {
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    FUN_140054cf0(&local_88,&PTR_140610690);
    uVar4 = uStack_70;
    if (param_1 != &local_88) {
      if (7 < (ulonglong)param_1[3]) {
        lVar9 = *param_1;
        lVar8 = lVar9;
        if ((0xfff < param_1[3] * 2 + 2U) &&
           (lVar8 = *(longlong *)(lVar9 + -8), 0x1f < (lVar9 - lVar8) - 8U)) goto LAB_140317429;
        thunk_FUN_1401fe000(lVar8);
      }
      param_1[3] = 7;
      *(undefined4 *)param_1 = (undefined4)local_88;
      *(undefined4 *)((longlong)param_1 + 4) = local_88._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_80._4_4_;
      param_1[2] = local_78;
      param_1[3] = uStack_70;
      local_88 = local_88 & 0xffffffffffff0000;
      uVar4 = 7;
    }
    if (7 < uVar4) {
      if ((0xfff < uVar4 * 2 + 2) && (0x1f < (local_88 - *(longlong *)(local_88 - 8)) - 8))
      goto LAB_140317429;
      thunk_FUN_1401fe000();
    }
  }
  else if (param_1 != param_2) {
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (longlong *)*param_2;
    }
    FUN_1400549d0(0,param_2);
  }
  uVar4 = 0;
  if (param_1[2] != 0) {
    do {
      plVar5 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        plVar5 = (longlong *)*param_1;
      }
      (&DAT_1407c1e60)[uVar6] = *(undefined1 *)((longlong)plVar5 + uVar6 * 2);
      uVar6 = (ulonglong)((int)uVar6 + 1);
      uVar4 = param_1[2];
    } while (uVar6 < uVar4);
  }
  if (0xff < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_140559180();
  }
  (&DAT_1407c1e60)[uVar4] = 0;
  local_a8 = (undefined8 ****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  lVar8 = -1;
  lVar9 = -1;
  do {
    pcVar1 = &DAT_1407c1e61 + lVar9;
    lVar9 = lVar9 + 1;
  } while (*pcVar1 != '\0');
  FUN_1400548d0(&local_a8,&DAT_1407c1e60);
  ppppuVar7 = &local_a8;
  if (0xf < local_90) {
    ppppuVar7 = (undefined8 ****)local_a8;
  }
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  do {
    lVar8 = lVar8 + 1;
  } while (*(char *)((longlong)ppppuVar7 + lVar8) != '\0');
  FUN_1400548d0(&local_d8,ppppuVar7,lVar8);
  FUN_14000252c(&DAT_140784008,local_68);
  if (local_58 == 0) {
    ppppuVar7 = &local_a8;
    if (0xf < local_90) {
      ppppuVar7 = (undefined8 ****)local_a8;
    }
    FUN_140058f70(local_68,ppppuVar7);
  }
  plVar5 = (longlong *)FUN_140315be0(local_48,local_68);
  if (param_1 != plVar5) {
    if (7 < (ulonglong)param_1[3]) {
      lVar9 = *param_1;
      lVar8 = lVar9;
      if ((0xfff < param_1[3] * 2 + 2U) &&
         (lVar8 = *(longlong *)(lVar9 + -8), 0x1f < (lVar9 - lVar8) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000(lVar8);
    }
    param_1[2] = 0;
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
    uVar2 = *(undefined4 *)((longlong)plVar5 + 4);
    lVar9 = plVar5[1];
    uVar3 = *(undefined4 *)((longlong)plVar5 + 0xc);
    *(int *)param_1 = (int)*plVar5;
    *(undefined4 *)((longlong)param_1 + 4) = uVar2;
    *(int *)(param_1 + 1) = (int)lVar9;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
    lVar9 = plVar5[3];
    param_1[2] = plVar5[2];
    param_1[3] = lVar9;
    plVar5[2] = 0;
    plVar5[3] = 7;
    *(undefined2 *)plVar5 = 0;
  }
  FUN_140055150(local_48);
  FUN_140054b60(local_68);
  if (0xf < local_90) {
    if ((0xfff < local_90 + 1) &&
       (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)local_a8[-1])))) {
LAB_140317429:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  return param_1;
}



// ===== FUN_14034d830 @ 0x14034d830 [render] =====

void FUN_14034d830(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  float param_5,float param_6)

{
  float fVar1;
  
  *(undefined8 *)(param_1 + 0x80) = param_3;
  *(undefined8 *)(param_1 + 0x68) = param_3;
  *(undefined8 *)(param_1 + 0x78) = param_2;
  *(undefined8 *)(param_1 + 0x60) = param_2;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x88) = param_4;
  *(undefined8 *)(param_1 + 0x70) = param_4;
  *(float *)(param_1 + 0xa8) = param_5;
  *(float *)(param_1 + 0xb0) = param_5;
  *(float *)(param_1 + 0xac) = param_6;
  *(float *)(param_1 + 0xb4) = param_6;
  fVar1 = param_5;
  if (param_5 - param_5 < -180.0) {
    fVar1 = param_5 + 360.0;
    *(float *)(param_1 + 0xb0) = fVar1;
  }
  if (180.0 <= param_5 - param_5) {
    *(float *)(param_1 + 0xb0) = fVar1 - 360.0;
  }
  FUN_14034a460(0xc066800000000000,(int)param_2,param_3);
  for (; 360.0 <= param_5; param_5 = param_5 + -360.0) {
  }
  for (; param_5 < 0.0; param_5 = param_5 + 360.0) {
  }
  for (; 360.0 <= param_6; param_6 = param_6 + -360.0) {
  }
  *(float *)(param_1 + 0xac) = param_6;
  *(float *)(param_1 + 0xa8) = param_5;
  return;
}



// ===== FUN_140352410 @ 0x140352410 [storage,ui,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140352410(void)

{
  undefined1 auStack_48 [32];
  _FILETIME local_28;
  _SYSTEMTIME local_20;
  ulonglong local_10;
  
  local_10 = DAT_1407502c0 ^ (ulonglong)auStack_48;
  GetSystemTime(&local_20);
  SystemTimeToFileTime(&local_20,&local_28);
  return (longlong)local_28 / 10000;
}



// ===== FUN_14035a120 @ 0x14035a120 [render] =====

undefined8 FUN_14035a120(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(DAT_1407bdbd0 + (ulonglong)*(uint *)(param_1 + 0x20) * 8);
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    iVar2 = *(int *)(lVar4 + 8);
    while (iVar2 != 0) {
      LOCK();
      iVar6 = *(int *)(lVar4 + 8);
      bVar8 = iVar2 == iVar6;
      if (bVar8) {
        *(int *)(lVar4 + 8) = iVar2 + 1;
        iVar6 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar6;
      if (bVar8) {
        plVar5 = *(longlong **)(param_1 + 0x10);
        uVar7 = (**(code **)(*plVar3 + 8))
                          (plVar3,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x30));
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar5 + 1;
          lVar4 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
          }
        }
        return uVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14008ea80();
}



// ===== FUN_140365aa0 @ 0x140365aa0 [render] =====

void FUN_140365aa0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(char *)(param_1 + 0xe8) == '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
    iVar3 = (**(code **)(*(longlong *)*param_2 + 0x20))();
    *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + iVar3 + 1;
    if (*(char *)(*param_2 + 0x10) == '\0') {
      lVar4 = param_1 + 0x90;
    }
    else {
      *(undefined1 *)(*param_2 + 0x10) = 0;
      lVar4 = param_1 + 0xb8;
    }
    FUN_14010c2a0(lVar4,param_2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
    plVar5 = (longlong *)param_2[1];
  }
  else {
    plVar5 = (longlong *)param_2[1];
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



// ===== FUN_140365fb0 @ 0x140365fb0 [storage,render] =====

/* WARNING: Removing unreachable block (ram,0x0001403660db) */
/* WARNING: Removing unreachable block (ram,0x0001403660f3) */
/* WARNING: Removing unreachable block (ram,0x000140366115) */
/* WARNING: Removing unreachable block (ram,0x000140366108) */

void FUN_140365fb0(longlong *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  if ((char)param_1[7] != '\0') {
    *(undefined1 *)(param_1 + 0x23) = 1;
    *(undefined4 *)((longlong)param_1 + 0x11c) = param_2;
    param_1[0x24] = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[2] + 0x20))();
    }
    WaitForSingleObject(*(HANDLE *)(param_1[0x1e] + 0x70),0xffffffff);
    WaitForSingleObject(*(HANDLE *)(param_1[0x1f] + 0x70),0xffffffff);
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1[2] = 0;
    if ((longlong *)param_1[3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[3] + 0x20))();
      puVar1 = *(undefined8 **)(param_1[3] + 0x10);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      puVar1 = (undefined8 *)param_1[3];
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      param_1[3] = 0;
    }
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[4] + 0x20))();
      puVar1 = (undefined8 *)param_1[4];
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      param_1[4] = 0;
    }
    lVar2 = *param_1;
    if (lVar2 != 0) {
      uVar3 = (*(code *)**(undefined8 **)param_1[0x1c])();
      FUN_140368350(lVar2,uVar3);
      *param_1 = 0;
    }
  }
  return;
}



// ===== FUN_140366130 @ 0x140366130 [render] =====

void FUN_140366130(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 local_68;
  longlong *plStack_60;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48;
  undefined8 *puStack_40;
  undefined8 *local_38;
  
  if (0x100000 < *(int *)((longlong)param_1 + 300)) {
    FUN_140365fb0(param_1,10);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  lVar6 = param_1[0xc];
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  uVar9 = 0;
  if (lVar6 == 0) {
    lVar6 = param_1[0x25];
    *(int *)(param_1 + 0x25) = (int)lVar6 + 1;
    if ((int)lVar6 == 0x4b0) {
      FUN_140365fb0(param_1,9);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x25) = 0;
  }
  *(int *)(param_1 + 0x26) = (int)param_1[0x26] + 1;
  if ((int)param_1[0x26] == ((int)param_1[0x26] / 0x14) * 0x14) {
    puVar8 = (undefined8 *)FUN_140366730(local_58);
    local_68 = *puVar8;
    plStack_60 = (longlong *)puVar8[1];
    *puVar8 = 0;
    puVar8[1] = 0;
    FUN_140365aa0(param_1,&local_68);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_50 + 8))(local_50);
        }
      }
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  local_48 = 0;
  puStack_40 = (undefined8 *)0x0;
  local_38 = (undefined8 *)0x0;
  cVar7 = (char)param_1[0x23];
  iVar4 = 1000;
  while ((((cVar7 == '\0' && (cVar7 = (**(code **)(*DAT_140790368 + 0x108))(), cVar7 == '\0')) &&
          (cVar7 = (**(code **)(*DAT_140790368 + 0x98))(), cVar7 != '\0')) &&
         ((param_1[0xc] != 0 && (-1 < iVar4))))) {
    puVar8 = *(undefined8 **)(param_1[9] + (param_1[10] - 1U & param_1[0xb]) * 8);
    if (puVar8[1] != 0) {
      LOCK();
      piVar2 = (int *)(puVar8[1] + 8);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    local_68 = *puVar8;
    plStack_60 = (longlong *)puVar8[1];
    if (puStack_40 == local_38) {
      FUN_140063e40(&local_48);
    }
    else {
      *puStack_40 = 0;
      puStack_40[1] = 0;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
        UNLOCK();
      }
      *puStack_40 = local_68;
      puStack_40[1] = plStack_60;
      puStack_40 = puStack_40 + 2;
    }
    plVar1 = plStack_60;
    FUN_140366850(param_1 + 8);
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar1 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1);
        }
      }
    }
    cVar7 = (char)param_1[0x23];
    iVar4 = iVar4 + -1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  uVar10 = uVar9;
  if ((longlong)puStack_40 - local_48 >> 4 != 0) {
    do {
      (**(code **)**(undefined8 **)(local_48 + uVar9))();
      (**(code **)(**(longlong **)(local_48 + uVar9) + 0x18))
                (*(longlong **)(local_48 + uVar9),param_1[0x1c]);
      uVar10 = uVar10 + 1;
      uVar9 = uVar9 + 0x10;
    } while (uVar10 < (ulonglong)((longlong)puStack_40 - local_48 >> 4));
  }
  SetEvent(*(HANDLE *)(param_1[0x20] + 8));
  SetEvent(*(HANDLE *)(param_1[0x21] + 8));
  lVar6 = *param_1;
  if ((lVar6 != 0) && ((*(char *)(lVar6 + 200) != '\0' || (*(char *)(lVar6 + 0xc9) != '\0')))) {
    FUN_140365fb0(param_1,2);
  }
  if ((char)param_1[0x23] != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
    lVar6 = param_1[0xc];
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
    if (lVar6 == 0) {
      (**(code **)(*(longlong *)param_1[0x1c] + 0x18))
                ((longlong *)param_1[0x1c],*(undefined4 *)((longlong)param_1 + 0x11c));
      *(undefined1 *)(param_1 + 0x23) = 0;
    }
  }
  if (local_48 != 0) {
    FUN_140064070(local_48,puStack_40);
    if ((0xfff < ((longlong)local_38 - local_48 & 0xfffffffffffffff0U)) &&
       (0x1f < (local_48 - *(longlong *)(local_48 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  return;
}



// ===== FUN_140559180 @ 0x140559180 [ui,render] =====

void FUN_140559180(void)

{
  FUN_140559194(8);
  return;
}



// ===== FUN_140568770 @ 0x140568770 [render] =====

undefined4 FUN_140568770(short *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  short sVar1;
  undefined4 *puVar2;
  longlong lVar3;
  short *psVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_1405687d3;
    }
  }
  else if (param_1 == (short *)0x0) goto LAB_1405687d3;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = 0;
      return 0;
    }
    if (param_3 != 0) {
      psVar4 = param_1;
      lVar5 = param_2;
      lVar3 = param_4;
      if (param_4 == -1) {
        do {
          sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar4);
          *psVar4 = sVar1;
          psVar4 = psVar4 + 1;
          if (sVar1 == 0) {
            return 0;
          }
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        lVar5 = 0;
      }
      else {
        do {
          lVar6 = lVar3;
          sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar4);
          *psVar4 = sVar1;
          psVar4 = psVar4 + 1;
          if (sVar1 == 0) {
            return 0;
          }
          lVar5 = lVar5 + -1;
        } while ((lVar5 != 0) && (lVar3 = lVar6 + -1, lVar6 + -1 != 0));
        lVar3 = lVar6 + -1;
        if (lVar5 == 0) {
          lVar3 = lVar6;
        }
        if (lVar3 == 0) {
          *psVar4 = 0;
        }
      }
      if (lVar5 != 0) {
        return 0;
      }
      if (param_4 != -1) {
        *param_1 = 0;
        puVar2 = (undefined4 *)FUN_14056c1bc();
        *puVar2 = 0x22;
        FUN_14055f6e4();
        return 0x22;
      }
      param_1[param_2 + -1] = 0;
      return 0x50;
    }
    *param_1 = 0;
  }
LAB_1405687d3:
  puVar2 = (undefined4 *)FUN_14056c1bc();
  *puVar2 = 0x16;
  FUN_14055f6e4();
  return 0x16;
}



// ===== FUN_140573cc0 @ 0x140573cc0 [render] =====

void FUN_140573cc0(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  if (DAT_14078fc7c != 0) {
    FUN_140573cf0(param_1,param_2,0);
    return;
  }
  if ((param_1 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
    do {
      uVar1 = *param_1;
      uVar3 = (uint)uVar1;
      param_1 = param_1 + 1;
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      uVar4 = (uint)uVar2;
      if ((uint)uVar1 != (uint)uVar2) {
        uVar3 = uVar1 + 0x20;
        if (0x19 < uVar1 - 0x41) {
          uVar3 = (uint)uVar1;
        }
        uVar4 = uVar2 + 0x20;
        if (0x19 < uVar2 - 0x41) {
          uVar4 = (uint)uVar2;
        }
      }
    } while ((uVar3 == uVar4) && (uVar3 != 0));
    return;
  }
  FUN_140573c30();
  return;
}



// ===== FUN_140578760 @ 0x140578760 [render] =====

double FUN_140578760(void)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  
  dVar4 = in_XMM0._0_8_;
  if (1 < DAT_140750270) {
    auVar5 = roundsd(in_XMM0,in_XMM0,9);
    return auVar5._0_8_;
  }
  dVar1 = ABS(dVar4);
  uVar3 = (ulonglong)dVar1 >> 0x34;
  dVar2 = dVar4;
  if (uVar3 < 0x433) {
    if (uVar3 < 0x3ff) {
      if (dVar1 != 0.0) {
        if (dVar4 != dVar1) {
          return -1.0;
        }
        return 0.0;
      }
    }
    else {
      dVar2 = (double)(~((1L << (0x33U - (char)uVar3 & 0x3f)) - 1U) & (ulonglong)dVar4);
      if ((dVar4 != dVar1) && (dVar2 != dVar4)) {
        dVar2 = dVar2 - 1.0;
      }
    }
  }
  else if (0x7ff0000000000000 < (ulonglong)dVar1) {
    dVar4 = (double)FUN_140585ff0();
    return dVar4;
  }
  return dVar2;
}



// ===== strcmp @ 0x1405969d0 [render] =====

/* Library Function - Single Match
    strcmp
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

int __cdecl strcmp(char *_Str1,char *_Str2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)_Str2 - (longlong)_Str1;
  while( true ) {
    if (((ulonglong)_Str1 & 7) == 0) {
      while ((((int)lVar3 + (int)_Str1 & 0xfffU) < 0xff9 &&
             (uVar2 = *(ulonglong *)_Str1, uVar2 == *(ulonglong *)(lVar3 + (longlong)_Str1)))) {
        _Str1 = (char *)((longlong)_Str1 + 8);
        if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
          return 0;
        }
      }
    }
    bVar1 = (byte)*(ulonglong *)_Str1;
    if (bVar1 != *(byte *)(lVar3 + (longlong)_Str1)) break;
    _Str1 = (char *)((longlong)_Str1 + 1);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return -(uint)(bVar1 < *(byte *)(lVar3 + (longlong)_Str1)) | 1;
}



