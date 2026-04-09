// Category: ui - 157 functions
// Decompiled from Minecraft.Client.exe

// ===== FUN_1400010a8 @ 0x1400010a8 [ui] =====

void FUN_1400010a8(void)

{
  FUN_140001740(&DAT_140783070);
  return;
}



// ===== FUN_1400010b4 @ 0x1400010b4 [ui] =====

void FUN_1400010b4(void)

{
  FUN_14000175c(&DAT_140783070);
  return;
}



// ===== FUN_1400010c0 @ 0x1400010c0 [ui] =====

void FUN_1400010c0(void)

{
  FUN_1400017f0(&DAT_140783070);
  return;
}



// ===== FUN_1400024f8 @ 0x1400024f8 [ui] =====

undefined8 FUN_1400024f8(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 1;
  return 0;
}



// ===== FUN_140004470 @ 0x140004470 [ui] =====

void FUN_140004470(void)

{
  FUN_140052b20(&DAT_140784760);
  return;
}



// ===== FUN_1400231a0 @ 0x1400231a0 [ui] =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400231a0(void)

{
  _DAT_14076cc50 = 0x656c676e616a6f4d;
  _DAT_14076cc58 = 0x3773;
  _DAT_14076cc70 = 0;
  uRam000000014076cc78 = 0;
  _DAT_14076cc80 = 0;
  uRam000000014076cc88 = 0;
  FUN_140054cf0(&DAT_14076cc70,L"/TitleUpdate/res/font/Mojangles_7.png",0x25);
  _DAT_14076cc90 = 0x1cc;
  _DAT_14076cc98 = &DAT_140751a60;
  _DAT_14076cca0 = 0xbe;
  _DAT_14076cca4 = 0x108;
  _DAT_14076cca8 = 0x17;
  _DAT_14076ccac = 0x14;
  _DAT_14076ccb0 = 8;
  _DAT_14076ccb4 = 0xd;
  _DAT_14076ccb8 = 0x3f09d89e;
  _DAT_14076ccbc = 0x3f1d89d9;
  _DAT_14076ccc0 = 0x3dcccccd;
  _DAT_14076ccc4 = 5;
  atexit(FUN_1405e9a60);
  return;
}



// ===== FUN_140023280 @ 0x140023280 [ui] =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140023280(void)

{
  _DAT_14076ccd0 = 0x656c676e616a6f4d;
  _DAT_14076ccd8 = 0x3173;
  DAT_14076ccda = 0x31;
  _DAT_14076ccf0 = 0;
  uRam000000014076ccf8 = 0;
  _DAT_14076cd00 = 0;
  uRam000000014076cd08 = 0;
  FUN_140054cf0(&DAT_14076ccf0,L"/TitleUpdate/res/font/Mojangles_11.png",0x26);
  _DAT_14076cd10 = 0x1cc;
  _DAT_14076cd18 = &DAT_140751a60;
  _DAT_14076cd20 = 0x131;
  _DAT_14076cd24 = 0x15c;
  _DAT_14076cd28 = 0x17;
  _DAT_14076cd2c = 0x14;
  _DAT_14076cd30 = 0xd;
  _DAT_14076cd34 = 0x11;
  _DAT_14076cd38 = 0x3f25a5a6;
  _DAT_14076cd3c = 0x3eb4b4b5;
  _DAT_14076cd40 = 0x3d9d89d9;
  _DAT_14076cd44 = 7;
  atexit(FUN_1405e9a80);
  return;
}



// ===== FUN_140033080 @ 0x140033080 [ui] =====

void FUN_140033080(longlong param_1,int param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  ushort uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  
  lVar1 = DAT_140790e60;
  if (param_3 < 0x19) {
    lVar7 = (longlong)param_2;
    switch(param_3) {
    case 0:
      if (param_2 == 0) {
        FUN_1400b6950(*(undefined8 *)(DAT_140790e60 + 0x218),&DAT_1407baab0,
                      (float)*(byte *)(*(longlong *)(param_1 + 0x1e0) + 1) / 100.0);
      }
      break;
    case 1:
      if (param_2 == 0) {
        FUN_1400b6950(*(undefined8 *)(DAT_140790e60 + 0x218),&DAT_1407baad8,
                      (float)*(byte *)(*(longlong *)(param_1 + 0x1e0) + 2) / 100.0);
      }
      break;
    case 2:
      if (param_2 == 0) {
        puVar4 = &DAT_140647750;
        do {
          if (*puVar4 == (uint)*(byte *)(*(longlong *)(param_1 + 0x1e0) + 0x56)) break;
          puVar4 = puVar4 + 1;
        } while ((longlong)puVar4 < 0x140647768);
        FUN_1400b6950(*(undefined8 *)(DAT_140790e60 + 0x218),&DAT_1407bab50);
      }
      break;
    case 3:
      if (param_2 == 0) {
        FUN_1400b6950(*(undefined8 *)(DAT_140790e60 + 0x218),&DAT_1407bace0,
                      (float)*(byte *)(*(longlong *)(param_1 + 0x1e0) + 4) / 100.0);
      }
      break;
    case 4:
      if (param_2 == 0) {
        FUN_1400b6950(*(undefined8 *)(**(longlong **)(DAT_140790e60 + 0x1d0) + 0x218),&DAT_1407bacb8
                      ,((((float)*(byte *)(*(longlong *)(param_1 + 0x1e0) + 0x53) * 40.0) / 100.0 +
                        70.0) - 70.0) / 40.0);
        FUN_1400b6950(*(undefined8 *)(lVar1 + 0x218),&DAT_1407bacb8,
                      (float)*(byte *)(*(longlong *)(param_1 + 0x1e0) + 0x53) / 100.0);
      }
      break;
    case 5:
      if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14002fe50(&DAT_1407bb5d0,
                      "NOT ACTIONING DIFFICULTY - Primary pad is %d, This pad is %d\n",0,param_2);
      }
      FUN_1400b6a20(*(undefined8 *)(DAT_140790e60 + 0x218),&DAT_1407bac18,
                    *(ushort *)(*(longlong *)(param_1 + 0x1e0) + 6) & 3);
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Difficulty toggle to %d\n",
                    *(ushort *)(*(longlong *)(param_1 + 0x1e0) + 6) & 3);
    case 6:
      FUN_1400b6950(*(undefined8 *)(DAT_140790e60 + 0x218),&DAT_1407bab28,
                    (float)*(byte *)(*(longlong *)(param_1 + 0x1e0 + lVar7 * 8) + 3) / 100.0);
      break;
    case 9:
      FUN_1400010a8(&DAT_140783060,param_2,
                    *(byte *)(*(longlong *)(param_1 + 0x1e0 + lVar7 * 8) + 6) >> 4 & 3);
      break;
    case 0xb:
      uVar6 = *(ushort *)(*(longlong *)(param_1 + 0x1e0 + lVar7 * 8) + 6) & 0x80;
      FUN_1400010b4(&DAT_140783060,param_2,0,-(uVar6 != 0) & 2);
      uVar9 = 3;
      if (uVar6 == 0) {
        uVar9 = 1;
      }
      FUN_1400010b4(&DAT_140783060,param_2,1,uVar9);
      uVar9 = 0;
      if (uVar6 == 0) {
        uVar9 = 2;
      }
      FUN_1400010b4(&DAT_140783060,param_2,2,uVar9);
      uVar9 = 1;
      if (uVar6 == 0) {
        uVar9 = 3;
      }
      FUN_1400010b4(&DAT_140783060,param_2,3,uVar9);
      FUN_1400010c0(&DAT_140783060,param_2,0,uVar6 != 0);
      FUN_1400010c0(&DAT_140783060,param_2,1,uVar6 == 0);
      break;
    case 0xc:
      if (param_2 == 0) {
        FUN_1400abdf0(DAT_140790e60);
      }
      break;
    case 0xd:
      if (((*(longlong *)(DAT_140790e60 + 0x40) != 0) &&
          (cVar2 = (**(code **)(*DAT_140790368 + 0x80))(), cVar2 == '\x01')) && (param_2 == 0)) {
        FUN_14003e640();
        plVar8 = (longlong *)0x0;
        DAT_1407bb824 = 8;
        DAT_1407bb838 = 0;
        if (DAT_1407915c8 != 0) {
          plVar8 = *(longlong **)(DAT_1407915c8 + 0x28);
        }
        plVar10 = (longlong *)plVar8[1];
        plVar8 = (longlong *)*plVar8;
        if (plVar8 != plVar10) {
          do {
            iVar3 = FUN_14003e910();
            lVar1 = *plVar8;
            plVar8 = plVar8 + 2;
            *(bool *)(lVar1 + 0x528) = iVar3 != 0;
          } while (plVar8 != plVar10);
        }
      }
      break;
    case 0xf:
      bVar5 = 0;
      plVar8 = (longlong *)(DAT_140790e60 + 0x70);
      do {
        if (*plVar8 != 0) {
          FUN_140267f20(&DAT_1407bc300,bVar5,*(int *)(*plVar8 + 0x59c) != 0);
        }
        bVar5 = bVar5 + 1;
        plVar8 = plVar8 + 2;
      } while (bVar5 < 4);
      break;
    case 0x11:
      FUN_14002fee0(&DAT_1407bb5d0,6,"UIController::RefreshTooltips is not implemented\n");
      break;
    case 0x12:
      if (*(short *)(*(longlong *)(param_1 + 0x1e0 + lVar7 * 8) + 6) < 0) {
        if (DAT_1407bb76c == '\0') {
          iVar3 = 0;
        }
        else {
          iVar3 = param_2 + 1;
          if (param_2 == 0xff) {
            iVar3 = 0;
          }
        }
        plVar8 = *(longlong **)((&DAT_1407bda58)[iVar3] + 0x48);
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x180))(plVar8,1);
        }
      }
      else {
        if (DAT_1407bb76c == '\0') {
          iVar3 = 0;
        }
        else {
          iVar3 = param_2 + 1;
          if (param_2 == 0xff) {
            iVar3 = 0;
          }
        }
        plVar8 = *(longlong **)((&DAT_1407bda58)[iVar3] + 0x48);
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x180))(plVar8,0);
        }
      }
      break;
    case 0x18:
      if (((*(longlong *)(DAT_140790e60 + 0x40) != 0) &&
          (cVar2 = (**(code **)(*DAT_140790368 + 0x80))(), cVar2 == '\x01')) && (param_2 == 0)) {
        FUN_14003e640();
        DAT_1407bb824 = 0xb;
        DAT_1407bb838 = 0;
      }
    }
  }
  return;
}



// ===== FUN_140034b20 @ 0x140034b20 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140034b20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  ushort uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined *puVar13;
  bool bVar14;
  undefined1 auStack_238 [32];
  undefined4 local_218;
  int local_210;
  code *local_208;
  longlong *local_200;
  undefined1 *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined1 local_1d8;
  longlong *local_1c8;
  longlong local_1c0;
  int *local_1b8;
  undefined4 local_1b0;
  longlong local_1a8;
  int local_1a0;
  undefined1 local_19c [4];
  undefined4 local_198 [4];
  undefined4 local_188 [10];
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  longlong local_150;
  longlong *plStack_148;
  undefined1 local_a8 [80];
  ulonglong local_58;
  
  local_58 = DAT_1407502c0 ^ (ulonglong)auStack_238;
  local_1b0 = 0;
  local_1c0 = DAT_140790e60;
  local_150 = 0;
  plStack_148 = (longlong *)0x0;
  if (DAT_1407bb820 == 0x22) {
    local_198[0] = 0x59b;
    local_1e8 = CONCAT31(local_1e8._1_3_,1);
    local_1f0 = 0;
    local_1f8 = (undefined1 *)0x0;
    local_200 = (longlong *)0x0;
    local_208 = (code *)0x0;
    local_210 = 0xff;
    local_218 = 1;
    iVar7 = (**(code **)(DAT_1407bc300 + 0x210))(&DAT_1407bc300,0x642,0x643,local_198);
    if (iVar7 != 1) {
      *(undefined4 *)(param_1 + 0x4a) = 0;
    }
  }
  local_1a0 = 0;
  local_1a8 = 0;
  local_1c8 = plStack_148;
  plVar11 = plStack_148;
  do {
    iVar7 = local_1a0;
    lVar5 = local_1a8;
    if ((&DAT_1407bb7dc)[local_1a8] == 0) goto switchD_140034c5a_caseD_1b;
    switch((&DAT_1407bb7dc)[local_1a8]) {
    case 1:
      local_218 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",local_1a0,
                    *(undefined4 *)((longlong)param_1 + local_1a8 * 4 + 0x20c));
    case 2:
      uVar4 = *(ushort *)(DAT_1407bb7b0 + 6);
      DVar8 = GetTickCount();
      DAT_1407bba98 = DVar8 + (uVar4 >> 0xb & 0xf) * 900000;
      local_218 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",iVar7,
                    *(undefined4 *)((longlong)param_1 + lVar5 * 4 + 0x20c));
    case 3:
      local_218 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",local_1a0,
                    *(undefined4 *)((longlong)param_1 + local_1a8 * 4 + 0x20c));
    case 4:
      local_218 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",local_1a0,
                    *(undefined4 *)((longlong)param_1 + local_1a8 * 4 + 0x20c));
    case 5:
      local_218 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",local_1a0,
                    *(undefined4 *)((longlong)param_1 + local_1a8 * 4 + 0x20c));
    case 6:
      local_1b8 = (int *)FUN_140558c80(0x20);
      local_1b8[3] = 0;
      local_1b8[4] = 0;
      local_1b8[5] = 0;
      local_1b8[6] = 0;
      local_1b8[7] = 0;
      *local_1b8 = iVar7;
      local_1b8[1] = 0x5db;
      *(undefined2 *)(local_1b8 + 2) = 0;
      local_210 = 6;
      local_218 = 6;
      FUN_1402668d0(&DAT_1407bc300,iVar7,0x22,local_1b8);
      *(undefined1 *)(*(longlong *)(local_1c0 + (lVar5 + 7) * 0x10) + 0x638) = 0;
      local_218 = 7;
      if (*(int *)((longlong)param_1 + lVar5 * 4 + 0x20c) != 4) {
                    /* WARNING: Subroutine does not return */
        FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",iVar7);
      }
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,
                    "Invalid change of App action for pad %d from %d to %d, ignoring\n",iVar7);
    case 7:
      lVar2 = local_1a8 + 7;
      lVar10 = *(longlong *)(local_1c0 + 8 + lVar2 * 0x10);
      if (lVar10 != 0) {
        LOCK();
        piVar3 = (int *)(lVar10 + 8);
        *piVar3 = *piVar3 + 1;
        UNLOCK();
      }
      lVar10 = *(longlong *)(local_1c0 + lVar2 * 0x10);
      local_1c8 = *(longlong **)(local_1c0 + 8 + lVar2 * 0x10);
      local_150 = lVar10;
      plStack_148 = local_1c8;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar11 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar3 = (int *)((longlong)plVar11 + 0xc);
          iVar9 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11);
          }
        }
      }
      if ((lVar10 != 0) && (*(char *)(lVar10 + 0x638) != '\0')) {
        local_218 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",iVar7,
                      *(undefined4 *)((longlong)param_1 + lVar5 * 4 + 0x20c));
      }
      cVar6 = (**(code **)(*DAT_140790368 + 0xa0))();
      plVar11 = local_1c8;
      goto joined_r0x000140035cb3;
    case 8:
      plVar11 = *(longlong **)(DAT_1407bda58 + 0x58);
      if (plVar11 != (longlong *)0x0) {
        *(undefined1 *)((longlong)plVar11 + 0x19a) = 0;
        cVar6 = FUN_140264ab0(&DAT_1407bc300);
        if ((cVar6 == '\0') && (cVar6 = (**(code **)(*plVar11 + 0x18))(plVar11), cVar6 != '\0')) {
          FUN_14027fe70(plVar11 + 0x3c,0);
        }
      }
      if ((DAT_1407bb76c == '\0') && (DAT_140790da7 = 1, DAT_1407915c8 != 0)) {
        DAT_14079038f = 1;
        *(undefined1 *)(DAT_1407915c8 + 0x38) = 0;
      }
      _guard_check_icall(&DAT_140784008,iVar7,0);
      FUN_1401f1d30(*(undefined8 *)(DAT_140790e60 + 0x270 + lVar5 * 8));
      goto LAB_140035d49;
    case 9:
    case 0x13:
      local_218 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",local_1a0,
                    *(undefined4 *)((longlong)param_1 + local_1a8 * 4 + 0x20c));
    case 10:
      local_218 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",local_1a0,
                    *(undefined4 *)((longlong)param_1 + local_1a8 * 4 + 0x20c));
    case 0xb:
    case 0xc:
      (**(code **)(*DAT_140790368 + 0x28))();
      lVar2 = local_1c0;
      FUN_1400c3420(*(undefined8 *)(local_1c0 + 0x1f8),iVar7);
      FUN_1400abcd0(lVar2,0);
      FUN_1400acb80(lVar2,iVar7);
      if ((DAT_1407bb76c == '\0') || (iVar7 == 0xff)) {
        lVar10 = 0;
      }
      else {
        lVar10 = lVar5 + 1;
      }
      plVar11 = *(longlong **)((&DAT_1407bda58)[lVar10] + 0x48);
      if (plVar11 != (longlong *)0x0) {
        local_1d8 = 0;
        local_1e0 = 0xffffffff;
        local_1e8 = 0xffffffff;
        local_1f0 = 0xffffffff;
        local_1f8 = (undefined1 *)CONCAT44(local_1f8._4_4_,0xffffffff);
        local_200 = (longlong *)CONCAT44(local_200._4_4_,0xffffffff);
        local_208 = (code *)CONCAT44(local_208._4_4_,0xffffffff);
        local_210 = -1;
        local_218 = 0xffffffff;
        (**(code **)(*plVar11 + 400))(plVar11,0xffffffff,0xffffffff,0xffffffff);
      }
      if ((lVar5 != 0) && (*(longlong *)(lVar2 + 0x70) != 0)) {
        (**(code **)(*DAT_140790368 + 0xf0))();
      }
      if (iVar7 == 1) {
LAB_1400352db:
        if (*(longlong *)(lVar2 + 0x90) != 0) {
          (**(code **)(*DAT_140790368 + 0xf0))();
        }
        if (iVar7 == 3) goto LAB_14003531a;
      }
      else {
        if (*(longlong *)(lVar2 + 0x80) != 0) {
          (**(code **)(*DAT_140790368 + 0xf0))();
        }
        if (iVar7 != 2) goto LAB_1400352db;
      }
      if (*(longlong *)(lVar2 + 0xa0) != 0) {
        (**(code **)(*DAT_140790368 + 0xf0))();
      }
      goto LAB_14003531a;
    case 0xd:
      local_218 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",local_1a0,
                    *(undefined4 *)((longlong)param_1 + local_1a8 * 4 + 0x20c));
    case 0xe:
      (**(code **)(*param_1 + 0x20))(param_1);
      plVar11 = local_1c8;
    default:
switchD_140034c5a_caseD_1b:
      goto LAB_140034cba;
    case 0xf:
      lVar2 = local_1a8 + 7;
      lVar10 = *(longlong *)(local_1c0 + 8 + lVar2 * 0x10);
      if (lVar10 != 0) {
        LOCK();
        piVar3 = (int *)(lVar10 + 8);
        *piVar3 = *piVar3 + 1;
        UNLOCK();
      }
      lVar10 = *(longlong *)(local_1c0 + lVar2 * 0x10);
      local_1c8 = *(longlong **)(local_1c0 + 8 + lVar2 * 0x10);
      local_150 = lVar10;
      plStack_148 = local_1c8;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar11 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar3 = (int *)((longlong)plVar11 + 0xc);
          iVar9 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11);
          }
        }
      }
      if (((lVar10 != 0) && (*(longlong *)(lVar10 + 0x660) != 0)) &&
         (*(char *)(*(longlong *)(lVar10 + 0x660) + 0x50) != '\0')) {
        local_218 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",iVar7,
                      *(undefined4 *)((longlong)param_1 + lVar5 * 4 + 0x20c));
      }
      cVar6 = (**(code **)(*DAT_140790368 + 0xa0))();
      plVar11 = local_1c8;
joined_r0x000140035cb3:
      local_1c8 = plVar11;
      if (cVar6 == '\0') {
LAB_14003531a:
        local_218 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",iVar7,
                      *(undefined4 *)((longlong)param_1 + lVar5 * 4 + 0x20c));
      }
      goto LAB_140034cba;
    case 0x10:
      local_218 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",local_1a0,
                    *(undefined4 *)((longlong)param_1 + local_1a8 * 4 + 0x20c));
    case 0x11:
      local_218 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",local_1a0,
                    *(undefined4 *)((longlong)param_1 + local_1a8 * 4 + 0x20c));
    case 0x12:
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Handling eAppAction_EthernetDisconnected\n");
    case 0x14:
      local_218 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",local_1a0,
                    *(undefined4 *)((longlong)param_1 + local_1a8 * 4 + 0x20c));
    case 0x15:
      local_218 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",local_1a0,
                    *(undefined4 *)((longlong)param_1 + local_1a8 * 4 + 0x20c));
    case 0x16:
      (**(code **)(*DAT_1407ba830 + 0x78))(DAT_1407ba830,local_1a0,1);
      local_218 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",iVar7,
                    *(undefined4 *)((longlong)param_1 + lVar5 * 4 + 0x20c));
    case 0x17:
      local_218 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",local_1a0,
                    *(undefined4 *)((longlong)param_1 + local_1a8 * 4 + 0x20c));
    case 0x18:
      local_218 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",local_1a0,
                    *(undefined4 *)((longlong)param_1 + local_1a8 * 4 + 0x20c));
    case 0x19:
      cVar6 = (**(code **)(*DAT_140790368 + 0xa0))();
      if (cVar6 != '\0') {
        local_218 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",iVar7,
                      *(undefined4 *)((longlong)param_1 + lVar5 * 4 + 0x20c));
      }
      cVar6 = (**(code **)(*DAT_140790368 + 0x108))();
      bVar14 = cVar6 == '\0';
      break;
    case 0x1a:
      local_218 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",local_1a0,
                    *(undefined4 *)((longlong)param_1 + local_1a8 * 4 + 0x20c));
    case 0x1c:
      if (*(char *)((longlong)param_1 + 0x19c) != '\0') {
        local_218 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",0,
                      *(undefined4 *)((longlong)param_1 + 0x20c));
      }
      local_218 = 0x1d;
      if (*(int *)((longlong)param_1 + local_1a8 * 4 + 0x20c) != 4) {
                    /* WARNING: Subroutine does not return */
        FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",local_1a0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,
                    "Invalid change of App action for pad %d from %d to %d, ignoring\n",local_1a0);
    case 0x1e:
      local_188[0] = 0x59b;
      local_1e8 = CONCAT31(local_1e8._1_3_,1);
      local_1f0 = 0;
      local_1f8 = (undefined1 *)0x0;
      local_200 = (longlong *)0x0;
      local_208 = (code *)0x0;
      local_210 = 0;
      local_218 = 1;
      iVar9 = (**(code **)(DAT_1407bc300 + 0x210))(&DAT_1407bc300,0x635,0x8bf,local_188);
      bVar14 = iVar9 == 1;
      break;
    case 0x1f:
      FUN_1400024f8(&DAT_140784008,local_19c);
      local_218 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",iVar7,
                    *(undefined4 *)((longlong)param_1 + lVar5 * 4 + 0x20c));
    case 0x20:
      uVar4 = *(ushort *)(DAT_1407bb7b0 + 6);
      DVar8 = GetTickCount();
      DAT_1407bba98 = DVar8 + (uVar4 >> 0xb & 0xf) * 900000;
      local_218 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",iVar7,
                    *(undefined4 *)((longlong)param_1 + lVar5 * 4 + 0x20c));
    case 0x21:
      if ((DAT_1407bb76c == '\0') && (DAT_140790da7 = 1, DAT_1407915c8 != 0)) {
        DAT_14079038f = 1;
        *(undefined1 *)(DAT_1407915c8 + 0x38) = 0;
      }
LAB_140035d49:
      cVar6 = (**(code **)(*DAT_140790368 + 0x98))();
      if (cVar6 == '\0') {
        local_218 = 10;
        if ((&DAT_1407bb7dc)[lVar5] != 4) {
                    /* WARNING: Subroutine does not return */
          FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",iVar7);
        }
                    /* WARNING: Subroutine does not return */
        FUN_14002fe50(&DAT_1407bb5d0,
                      "Invalid change of App action for pad %d from %d to %d, ignoring\n",iVar7);
      }
      local_218 = 9;
      if ((&DAT_1407bb7dc)[lVar5] != 4) {
                    /* WARNING: Subroutine does not return */
        FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",iVar7);
      }
LAB_140035d80:
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,
                    "Invalid change of App action for pad %d from %d to %d, ignoring\n",iVar7);
    case 0x23:
      cVar6 = (**(code **)(*DAT_140790368 + 0xa0))();
      plVar11 = local_1c8;
      if ((cVar6 != '\0') &&
         (cVar6 = (**(code **)(*DAT_140790368 + 0x108))(), plVar11 = local_1c8, cVar6 == '\0')) {
        (**(code **)(*DAT_1407ba830 + 0xa8))(DAT_1407ba830,iVar7);
        iVar9 = *(int *)((longlong)param_1 + lVar5 * 4 + 0x20c);
        if (iVar7 == 0) {
          if ((iVar9 != 0x25) && (iVar9 != 4)) {
            local_218 = 3;
                    /* WARNING: Subroutine does not return */
            FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",0);
          }
          local_218 = 3;
                    /* WARNING: Subroutine does not return */
          FUN_14002fe50(&DAT_1407bb5d0,
                        "Invalid change of App action for pad %d from %d to %d, ignoring\n",0);
        }
        local_218 = 0xb;
        if (iVar9 != 4) {
                    /* WARNING: Subroutine does not return */
          FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",iVar7);
        }
        goto LAB_140035d80;
      }
      goto LAB_140034cba;
    case 0x24:
      local_160 = 0x63e;
      local_15c = 0x59f;
      plVar11 = (longlong *)(**(code **)(*DAT_140790368 + 0x50))(DAT_140790368,local_1a0);
      if (plVar11 == (longlong *)0x0) goto switchD_140034c5a_caseD_28;
      uVar12 = (**(code **)(*plVar11 + 0x98))(plVar11);
      FUN_1400547f0(local_a8,0x28,L"%ls\n\n%%ls",uVar12);
      local_1e8 = CONCAT31(local_1e8._1_3_,1);
      local_1f0 = 0;
      local_1f8 = local_a8;
      local_208 = FUN_140037a70;
      local_218 = 2;
      local_210 = iVar7;
      local_200 = param_1;
      iVar9 = (**(code **)(DAT_1407bc300 + 0x210))(&DAT_1407bc300,0x63a,0x63b,&local_160);
      bVar14 = iVar9 == 1;
      break;
    case 0x25:
      local_218 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",local_1a0,
                    *(undefined4 *)((longlong)param_1 + local_1a8 * 4 + 0x20c));
    case 0x26:
      puVar13 = &DAT_140607438;
      if (DAT_1407bb76c != '\0') {
        puVar13 = &DAT_140607434;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"[Consoles_App] eAppAction_ReloadFont, ingame=\'%s\'.\n",puVar13)
      ;
    case 0x27:
      local_158 = 0x655;
      local_154 = 0x654;
      local_1e8 = CONCAT31(local_1e8._1_3_,1);
      local_1f0 = 0;
      local_1f8 = (undefined1 *)0x0;
      local_208 = FUN_140040840;
      local_210 = 0;
      local_218 = 2;
      local_200 = param_1;
      (**(code **)(DAT_1407bc300 + 0x210))(&DAT_1407bc300,0x64f,0x653,&local_158);
      goto LAB_140036f6f;
    case 0x28:
switchD_140034c5a_caseD_28:
      goto LAB_140036f6f;
    }
    plVar11 = local_1c8;
    if (!bVar14) {
LAB_140036f6f:
      local_218 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Changing App action for pad %d from %d to %d\n",iVar7,
                    *(undefined4 *)((longlong)param_1 + lVar5 * 4 + 0x20c));
    }
LAB_140034cba:
    plVar1 = local_1c8;
    if ((&DAT_1407bb7ec)[lVar5] != 0) {
      switch((&DAT_1407bb7ec)[lVar5]) {
      case 1:
      case 0x10:
        *(undefined4 *)((longlong)param_1 + lVar5 * 4 + 0x21c) = 0;
        break;
      case 2:
      case 3:
        *(undefined4 *)((longlong)param_1 + lVar5 * 4 + 0x21c) = 8;
        break;
      case 4:
      case 5:
      case 0x12:
        *(undefined4 *)((longlong)param_1 + lVar5 * 4 + 0x21c) = 0x11;
        break;
      case 8:
        *(undefined4 *)((longlong)param_1 + lVar5 * 4 + 0x21c) = 10;
        break;
      case 10:
        *(undefined4 *)((longlong)param_1 + lVar5 * 4 + 0x21c) = 0xc;
        break;
      case 0xc:
        *(undefined4 *)((longlong)param_1 + lVar5 * 4 + 0x21c) = 0xe;
        break;
      case 0xe:
        *(undefined4 *)((longlong)param_1 + lVar5 * 4 + 0x21c) = 1;
        break;
      case 0x11:
        *(undefined4 *)((longlong)param_1 + lVar5 * 4 + 0x21c) = 0x10;
      }
    }
    local_1a0 = local_1a0 + 1;
    local_1a8 = lVar5 + 1;
    if (3 < local_1a0) {
      if (local_1c8 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_1c8 + 1;
        lVar5 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_1c8)(local_1c8);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          iVar7 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1);
          }
        }
      }
      return;
    }
  } while( true );
}



// ===== FUN_140037b30 @ 0x140037b30 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140037b30(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined1 auStackY_88 [32];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  longlong local_30 [5];
  
  lVar3 = DAT_1407bb780;
  local_30[4] = DAT_1407502c0 ^ (ulonglong)auStackY_88;
  if (DAT_1407bb780 != 0) {
    FUN_140048c80(DAT_1407bb780 + 0x48);
    uVar5 = FUN_140045110(lVar3 + 0x20);
    FUN_1400709d0(uVar5,*(undefined8 *)(lVar3 + 0x10));
    thunk_FUN_1401fe000(*(undefined8 *)(lVar3 + 0x10),0x50);
    thunk_FUN_1401fe000(lVar3,0x70);
  }
  local_30[0] = 0;
  local_30[1] = 0;
  uVar4 = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  FUN_140054cf0(local_30,L"languages.loc",0xd);
  lVar3 = DAT_1407bb778;
  if (local_30[2] * 2 != 0) {
    do {
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulonglong)(local_30[2] * 2));
  }
  lVar2 = FUN_1400490c0(DAT_1407bb778 + 0x28,&local_58);
  lVar2 = *(longlong *)(lVar2 + 8);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(lVar3 + 0x30);
  }
  if (lVar2 == *(longlong *)(lVar3 + 0x30)) {
    DAT_1407bb780 = 0;
  }
  else {
    FUN_14008ab40(DAT_1407bb778,&local_48);
    lVar3 = FUN_140558c80(0x70);
    local_38 = lVar3;
    FUN_1400701f0(lVar3 + 8);
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    local_58 = local_48;
    uVar1 = local_58;
    uStack_50 = local_40;
    local_58._0_4_ = (undefined4)local_48;
    local_58._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    *(undefined4 *)(lVar3 + 0x60) = (undefined4)local_58;
    *(undefined4 *)(lVar3 + 100) = local_58._4_4_;
    *(undefined4 *)(lVar3 + 0x68) = local_40;
    *(undefined4 *)(lVar3 + 0x6c) = uStack_4c;
    local_58 = uVar1;
    FUN_14006f900(lVar3);
    DAT_1407bb780 = lVar3;
    thunk_FUN_1401fe000(local_48,1);
  }
  if (7 < (ulonglong)local_30[3]) {
    if ((0xfff < local_30[3] * 2 + 2U) &&
       (0x1f < (local_30[0] - *(longlong *)(local_30[0] + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  return;
}



// ===== FUN_1400399e0 @ 0x1400399e0 [ui] =====

undefined4 FUN_1400399e0(void)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (((DAT_1407baaa8 != '\0') && (DAT_1407bbaac != '\0')) && (DAT_1407bbaad == '\0')) {
    DAT_1407bbaad = 1;
    return 0x5d;
  }
  if ((DAT_140750f10 != '\0') && (DAT_1407baaa8 != '\0')) {
    DAT_140750f10 = '\0';
    if (DAT_1407bb9f1 != '\0') {
      uVar2 = 0;
      plVar3 = DAT_1407bb5f0;
      plVar4 = DAT_1407bb5f8;
      if (DAT_1407bb5f0 != DAT_1407bb5f8) {
        do {
          if (*plVar3 != 0) {
            iVar1 = FUN_140059d20(*plVar3,0);
            if (iVar1 != 0) {
              uVar2 = (ulonglong)((int)uVar2 + 1);
            }
          }
          plVar3 = plVar3 + 1;
        } while (plVar3 != plVar4);
        if ((int)uVar2 != 0) goto LAB_140039a73;
      }
    }
    return 0x5e;
  }
LAB_140039a73:
  if (DAT_1407bb9b8 == 0x46) {
    DAT_1407bb9b8 = 0;
  }
  uVar2 = (ulonglong)DAT_1407bb9b8;
  DAT_1407bb9b8 = DAT_1407bb9b8 + 1;
  return (&DAT_1407bb8a0)[uVar2];
}



// ===== FUN_14003e910 @ 0x14003e910 [ui] =====

uint FUN_14003e910(undefined8 param_1,uint param_2,undefined4 param_3)

{
  switch(param_3) {
  case 0:
    goto switchD_14003e92f_caseD_0;
  default:
    return 0;
  case 3:
    return param_2 & 4;
  case 4:
    return param_2 & 8;
  case 5:
    return param_2 & 8 | 0x3c81;
  case 6:
    param_2 = param_2 >> 4;
switchD_14003e92f_caseD_0:
    return param_2 & 3;
  case 7:
    return param_2 & 0x40;
  case 8:
    return param_2 & 0x80;
  case 9:
    return param_2 & 0x100;
  case 10:
    return param_2 & 0x200;
  case 0xb:
    return param_2 & 0x400;
  case 0xc:
    return param_2 & 0x800;
  case 0xd:
    return param_2 & 0x1000;
  case 0xe:
    return param_2 & 0x2000;
  case 0xf:
    return param_2 & 0x1c000;
  case 0x10:
    return param_2 & 0x4000;
  case 0x11:
    return param_2 & 0x8000;
  case 0x12:
    return param_2 & 0x10000;
  case 0x13:
    return param_2 & 0x20000;
  case 0x15:
    return param_2 >> 0x14 & 7;
  case 0x16:
    return param_2;
  case 0x17:
    return param_2 & 0x40000;
  case 0x18:
    return param_2 & 0x80000;
  case 0x19:
    return ~(param_2 >> 0x17) & 1;
  case 0x1a:
    return param_2 & 0x1000000;
  case 0x1b:
    return ~(param_2 >> 0x19) & 1;
  case 0x1c:
    return ~(param_2 >> 0x1a) & 1;
  case 0x1d:
    return ~(param_2 >> 0x1b) & 1;
  case 0x1e:
    return ~(param_2 >> 0x1c) & 1;
  case 0x1f:
    return ~(param_2 >> 0x1d) & 1;
  }
}



// ===== FUN_140045590 @ 0x140045590 [ui] =====

undefined8 * FUN_140045590(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[1];
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
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
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
    return param_1;
  }
  return param_1;
}



// ===== FUN_140047a70 @ 0x140047a70 [ui] =====

undefined8 * FUN_140047a70(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  
  uVar7 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  uVar5 = uVar7 & DAT_1407c0480;
  puVar6 = (undefined8 *)(uVar5 * 2);
  puVar2 = *(undefined8 **)(DAT_1407c0468 + 8 + uVar5 * 0x10);
  puVar8 = DAT_1407c0458;
  if (puVar2 != DAT_1407c0458) {
    puVar6 = *(undefined8 **)(DAT_1407c0468 + uVar5 * 0x10);
    lVar3 = puVar2[2];
    puVar8 = puVar2;
    while( true ) {
      if (*(longlong *)param_3 == lVar3) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == puVar6) break;
      puVar8 = (undefined8 *)puVar8[1];
      lVar3 = puVar8[2];
    }
  }
  if (DAT_1407c0460 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140555c84("unordered_map/set too long");
  }
  puVar2 = (undefined8 *)FUN_140558c80(0x20,puVar6,param_3,param_4,&DAT_1407c0458,0);
  puVar2[2] = *(undefined8 *)param_3;
  puVar2[3] = 0;
  uVar5 = DAT_1407c0488;
  if (DAT_1407c0450 < (float)(DAT_1407c0460 + 1) / (float)DAT_1407c0488) {
    fVar10 = (float)FUN_140590160((float)(DAT_1407c0460 + 1) / DAT_1407c0450);
    lVar3 = 0;
    if ((9.223372e+18 <= fVar10) && (fVar10 = fVar10 - 9.223372e+18, fVar10 < 9.223372e+18)) {
      lVar3 = -0x8000000000000000;
    }
    uVar4 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar3)) {
      uVar4 = (longlong)fVar10 + lVar3;
    }
    uVar9 = uVar5;
    if ((uVar5 < uVar4) && ((0x1ff < uVar5 || (uVar9 = uVar5 * 8, uVar5 * 8 < uVar4)))) {
      uVar9 = uVar4;
    }
    FUN_140050b90(uVar4,uVar9);
    puVar6 = *(undefined8 **)(DAT_1407c0468 + 8 + (DAT_1407c0480 & uVar7) * 0x10);
    puVar8 = DAT_1407c0458;
    if (puVar6 != DAT_1407c0458) {
      lVar3 = puVar6[2];
      puVar8 = puVar6;
      while (puVar2[2] != lVar3) {
        if (puVar8 == *(undefined8 **)(DAT_1407c0468 + (DAT_1407c0480 & uVar7) * 0x10))
        goto LAB_140047ce9;
        puVar8 = (undefined8 *)puVar8[1];
        lVar3 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_140047ce9:
  puVar6 = (undefined8 *)puVar8[1];
  DAT_1407c0460 = DAT_1407c0460 + 1;
  *puVar2 = puVar8;
  puVar2[1] = puVar6;
  *puVar6 = puVar2;
  puVar8[1] = puVar2;
  lVar3 = DAT_1407c0468;
  uVar7 = DAT_1407c0480 & uVar7;
  puVar1 = *(undefined8 **)(DAT_1407c0468 + uVar7 * 0x10);
  if (puVar1 == DAT_1407c0458) {
    *(undefined8 **)(DAT_1407c0468 + uVar7 * 0x10) = puVar2;
  }
  else {
    if (puVar1 == puVar8) {
      *(undefined8 **)(DAT_1407c0468 + uVar7 * 0x10) = puVar2;
      goto LAB_140047d48;
    }
    if (*(undefined8 **)(DAT_1407c0468 + 8 + uVar7 * 0x10) != puVar6) goto LAB_140047d48;
  }
  *(undefined8 **)(lVar3 + 8 + uVar7 * 0x10) = puVar2;
LAB_140047d48:
  *param_2 = puVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// ===== FUN_140051c00 @ 0x140051c00 [ui] =====

longlong * FUN_140051c00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar2 = param_1[2];
  uVar6 = 0x7ffffffffffffffe;
  if (lVar2 == 0x7ffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
    FUN_140054e40();
  }
  uVar3 = param_1[3];
  uVar5 = lVar2 + 1U | 7;
  if ((uVar5 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    uVar1 = uVar3 + (uVar3 >> 1);
    uVar6 = uVar5;
    if (uVar5 < uVar1) {
      uVar6 = uVar1;
    }
    uVar5 = uVar6 + 1;
    if (0x7fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_140054fe0();
    }
  }
  else {
    uVar5 = 0x7fffffffffffffff;
  }
  lVar4 = FUN_140054e60(uVar5 * 2);
  lVar7 = lVar2 * 2;
  param_1[2] = lVar2 + 1U;
  param_1[3] = uVar6;
  if (uVar3 < 8) {
    FUN_140596110(lVar4,param_1);
    *(undefined2 *)(lVar7 + lVar4) = param_4;
    *(undefined2 *)(lVar7 + 2 + lVar4) = 0;
  }
  else {
    lVar2 = *param_1;
    FUN_140596110(lVar4,lVar2);
    *(undefined2 *)(lVar7 + lVar4) = param_4;
    *(undefined2 *)(lVar7 + 2 + lVar4) = 0;
    lVar7 = lVar2;
    if ((0xfff < uVar3 * 2 + 2) && (lVar7 = *(longlong *)(lVar2 + -8), 0x1f < (lVar2 - lVar7) - 8U))
    {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000(lVar7);
  }
  *param_1 = lVar4;
  return param_1;
}



// ===== FUN_140054c30 @ 0x140054c30 [ui] =====

undefined8 * FUN_140054c30(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (uVar1 < 0x8000000000000000) {
    if (uVar1 < 0x10) {
      param_1[2] = uVar1;
      param_1[3] = 0xf;
      uVar3 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar3;
    }
    else {
      uVar2 = uVar1 | 0xf;
      uVar4 = 0x7fffffffffffffff;
      if ((uVar2 < 0x8000000000000000) && (uVar4 = uVar2, uVar2 < 0x16)) {
        uVar4 = 0x16;
      }
      uVar3 = FUN_140054e60(uVar4 + 1);
      *param_1 = uVar3;
      param_1[2] = uVar1;
      param_1[3] = uVar4;
      FUN_140596110(uVar3,param_2,uVar1 + 1);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140054e40();
}



// ===== FUN_1400551d0 @ 0x1400551d0 [ui] =====

undefined8 *
FUN_1400551d0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  *param_1 = MultiPlayerGameMode::vftable;
  param_1[4] = 0;
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  param_1[3] = 0;
  plVar4 = (longlong *)param_1[4];
  param_1[4] = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[7] = DAT_1407b94d0;
  param_1[9] = param_3;
  param_1[8] = param_4;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *param_1 = ConsoleGameMode::vftable;
  uVar6 = FUN_140558c80(0x1080);
  uVar6 = FUN_14007a7f0(uVar6,param_2,0);
  param_1[0xb] = uVar6;
  return param_1;
}



// ===== FUN_140057c30 @ 0x140057c30 [ui] =====

longlong * FUN_140057c30(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_1;
  plVar1 = (longlong *)param_1[1];
  if (plVar4 == plVar1) {
    return (longlong *)0x0;
  }
  while ((plVar2 = (longlong *)*plVar4, (int)(plVar2[1] - *plVar2 >> 3) == 0 ||
         (cVar3 = FUN_140059a30(plVar2,0,param_2), cVar3 == '\0'))) {
    plVar4 = plVar4 + 1;
    if (plVar4 == plVar1) {
      return (longlong *)0x0;
    }
  }
  return plVar2;
}



// ===== FUN_140059d20 @ 0x140059d20 [ui] =====

ulonglong FUN_140059d20(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_2 != 0xc) {
    return *(longlong *)(param_1 + 8 + (longlong)param_2 * 0x18) -
           *(longlong *)(param_1 + (longlong)param_2 * 0x18) >> 3;
  }
  iVar2 = 0;
  do {
    iVar1 = FUN_140059d20(param_1,iVar2);
    uVar3 = uVar3 + iVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xb);
  return (ulonglong)uVar3;
}



// ===== FUN_14006f900 @ 0x14006f900 [ui] =====

/* WARNING: Removing unreachable block (ram,0x00014006fb71) */
/* WARNING: Removing unreachable block (ram,0x00014006fc76) */
/* WARNING: Removing unreachable block (ram,0x00014006fc8a) */

void FUN_14006f900(longlong param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined1 auStack_1f8 [48];
  undefined4 local_1c8;
  undefined8 *local_1c0;
  undefined8 *puStack_1b8;
  undefined8 *local_1b0;
  undefined **local_1a8;
  undefined **local_1a0;
  undefined ***local_198;
  longlong local_168;
  undefined **local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined8 *local_138;
  undefined8 *puStack_130;
  undefined8 local_128;
  undefined2 local_120;
  undefined6 uStack_11e;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  uint uStack_100;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1407502c0 ^ (ulonglong)auStack_1f8;
  local_160 = ByteArrayInputStream::vftable;
  local_148 = (undefined4)*(undefined8 *)(param_1 + 0x68);
  local_144 = 0;
  local_158 = *(undefined8 *)(param_1 + 0x60);
  uStack_150 = *(undefined8 *)(param_1 + 0x68);
  local_1a8 = DataInputStream::vftable;
  local_1a0 = DataInputStream::vftable;
  local_198 = &local_160;
  local_168 = param_1;
  FUN_140324c40(&local_1a0);
  uVar6 = FUN_140324c40(&local_1a0);
  local_1c0 = (undefined8 *)0x0;
  puStack_1b8 = (undefined8 *)0x0;
  local_1b0 = (undefined8 *)0x0;
  if (0 < (int)uVar6) {
    uVar12 = (ulonglong)uVar6;
    do {
      FUN_140324df0(&local_1a0,local_f8);
      iVar7 = (*(code *)(*local_198)[3])();
      bVar4 = (*(code *)(*local_198)[3])();
      uVar6 = (*(code *)(*local_198)[3])();
      bVar5 = (*(code *)(*local_198)[3])();
      uVar6 = (((uint)bVar4 | iVar7 << 8) << 8 | uVar6 & 0xff) << 8 | (uint)bVar5;
      FUN_140055000(&local_120,local_f8);
      uStack_100 = uVar6;
      if (puStack_1b8 == local_1b0) {
        FUN_1400706d0(&local_1c0,puStack_1b8,&local_120);
      }
      else {
        *puStack_1b8 = CONCAT62(uStack_11e,local_120);
        puStack_1b8[1] = uStack_118;
        puStack_1b8[2] = local_110;
        puStack_1b8[3] = uStack_108;
        local_110 = 0;
        uStack_108 = 7;
        local_120 = 0;
        *(uint *)(puStack_1b8 + 4) = uVar6;
        puStack_1b8 = puStack_1b8 + 5;
      }
      FUN_140055150(&local_120);
      FUN_140055150(local_f8);
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  local_128 = 0;
  local_138 = (undefined8 *)0x0;
  puStack_130 = (undefined8 *)0x0;
  FUN_140040b30();
  puVar11 = local_138;
  puVar3 = puStack_1b8;
  local_1c8 = 0;
  puVar2 = local_1c0;
  if (local_138 != puStack_130) {
    while( true ) {
      if (puVar2 == puVar3) {
        if (7 < (ulonglong)puVar11[3]) {
          puVar11 = (undefined8 *)*puVar11;
        }
                    /* WARNING: Subroutine does not return */
        FUN_14002fe50(&DAT_1407bb5d0,"StringTable:: Can\'t find language \'%ls\'.\n",puVar11);
      }
      uVar12 = puVar11[2];
      puVar9 = puVar11;
      if (7 < (ulonglong)puVar11[3]) {
        puVar9 = (undefined8 *)*puVar11;
      }
      uVar1 = puVar2[2];
      puVar8 = puVar2;
      if (7 < (ulonglong)puVar2[3]) {
        puVar8 = (undefined8 *)*puVar2;
      }
      uVar10 = uVar1;
      if (uVar12 < uVar1) {
        uVar10 = uVar12;
      }
      iVar7 = FUN_140054430(puVar8,puVar9,uVar10);
      if (((iVar7 == 0) && (uVar12 <= uVar1)) && (uVar1 <= uVar12)) break;
      puVar2 = puVar2 + 5;
    }
    if (7 < (ulonglong)puVar11[3]) {
      puVar11 = (undefined8 *)*puVar11;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"StringTable:: Found language \'%ls\'.\n",puVar11);
  }
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"Failed to get language\n");
}



// ===== FUN_140070170 @ 0x140070170 [ui] =====

void FUN_140070170(longlong param_1)

{
  undefined8 local_res8 [4];
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_140070490(param_1,**(undefined8 **)(param_1 + 8),*(undefined8 **)(param_1 + 8));
      return;
    }
    FUN_1400709d0();
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_res8[0] = *(undefined8 *)(param_1 + 8);
    FUN_140050640(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),local_res8);
  }
  return;
}



// ===== FUN_1400742a0 @ 0x1400742a0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1400742a0(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 *puStack_230;
  undefined8 local_228;
  undefined8 *puStack_220;
  undefined8 local_218;
  ulonglong uStack_210;
  undefined1 local_208;
  undefined8 local_200;
  ulonglong local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0 [2];
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 *local_1b8;
  undefined1 local_1b0 [32];
  undefined1 local_190 [32];
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1407502c0 ^ (ulonglong)auStack_268;
  local_1b8 = param_1;
  FUN_14007a7f0(param_1,param_2,1);
  *param_1 = FullTutorial::vftable;
  *(undefined1 *)(param_1 + 0x210) = param_3;
  *(undefined1 *)(param_1 + 0x209) = 1;
  *(undefined8 *)((longlong)param_1 + 0x1081) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1089) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1091) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1099) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10a1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10a5) = 0;
  FUN_140083b10(param_1,0x4ee,0,3);
  if (*(char *)(param_1 + 0x210) == '\0') {
    cVar2 = FUN_1400813a0(param_1,0x109);
    if (cVar2 == '\0') {
      local_1f0 = FUN_140558c80(0x88);
      local_238 = (ulonglong)local_238._4_4_ << 0x20;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240._4_4_ << 0x20);
      local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
      uVar3 = FUN_140087d40(local_1f0,param_1,0x432,0x430);
    }
    else {
      local_1f0 = FUN_140558c80(0x58);
      local_228 = CONCAT44(local_228._4_4_,1);
      puStack_230 = (undefined8 *)CONCAT44(puStack_230._4_4_,3);
      local_238 = CONCAT44(local_238._4_4_,1);
      uStack_240 = (ulonglong *)((ulonglong)uStack_240._4_4_ << 0x20);
      local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
      uVar3 = FUN_140086a00(local_1f0,param_1,0x432,0x431);
    }
  }
  else {
    local_1f0 = FUN_140558c80(0x58);
    local_228 = CONCAT44(local_228._4_4_,1);
    puStack_230 = (undefined8 *)CONCAT44(puStack_230._4_4_,3);
    local_238 = CONCAT44(local_238._4_4_,1);
    uStack_240 = (ulonglong *)((ulonglong)uStack_240._4_4_ << 0x20);
    local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
    uVar3 = FUN_140086a00(local_1f0,param_1,0x432,0x431);
  }
  FUN_140083a30(param_1,0,uVar3);
  local_e0 = 0x1e0000001d;
  uStack_d8 = 0x1c0000001b;
  local_c0 = 0x1800000017;
  uStack_b8 = 0x1a00000019;
  local_d0 = 0x90000000a;
  uStack_c8 = 0x500000006;
  local_1f0 = FUN_140558c80(0xd8);
  local_218._0_4_ = 4;
  puStack_220 = &local_c0;
  local_228._0_4_ = 4;
  puStack_230 = &local_d0;
  local_238._0_4_ = 4;
  uStack_240 = &local_e0;
  local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
  local_1f8 = FUN_140086ff0(local_1f0,param_1,0x433,0);
  puVar4 = param_1 + 0xe6;
  FUN_140084030(puVar4,&local_1f8);
  puVar1 = param_1 + 0xe9;
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0xd8);
  local_218._0_4_ = 4;
  puStack_220 = &local_e0;
  local_228._0_4_ = 4;
  puStack_230 = &local_d0;
  local_238._0_4_ = 4;
  uStack_240 = &local_c0;
  local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
  local_1f8 = FUN_140086ff0(local_1f0,param_1,0x434,0);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x88);
  local_238._0_4_ = 0;
  uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
  local_248._0_1_ = 1;
  local_1f8 = FUN_140087d40(local_1f0,param_1,0x435,0x430);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1dc = 0x16;
  local_1f0 = FUN_140558c80(0xd8);
  local_218._0_4_ = 0;
  puStack_220 = (undefined8 *)0x0;
  local_228._0_4_ = 0;
  puStack_230 = (undefined8 *)0x0;
  local_238._0_4_ = 1;
  uStack_240 = (ulonglong *)&local_1dc;
  local_248._0_1_ = 1;
  local_1f8 = FUN_140086ff0(local_1f0,param_1,0x436,0);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1d8 = 0x20;
  local_1f0 = FUN_140558c80(0xd8);
  local_218 = (ulonglong)local_218._4_4_ << 0x20;
  puStack_220 = (undefined8 *)0x0;
  local_228 = (ulonglong)local_228._4_4_ << 0x20;
  puStack_230 = (undefined8 *)0x0;
  local_238 = CONCAT44(local_238._4_4_,1);
  uStack_240 = (ulonglong *)&local_1d8;
  local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
  local_1f8 = FUN_140086ff0(local_1f0,param_1,0x437,0);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x50);
  local_218 = CONCAT71(local_218._1_7_,1);
  puStack_220 = (undefined8 *)CONCAT71(puStack_220._1_7_,1);
  local_228 = local_228 & 0xffffffffffffff00;
  puStack_230 = (undefined8 *)0x0;
  local_238 = CONCAT71(local_238._1_7_,1);
  uStack_240 = (ulonglong *)CONCAT44(uStack_240._4_4_,0x438);
  local_248 = param_1;
  local_1f8 = FUN_140073e40(local_1f0,0x11,4,0xffffffff);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1c0 = 0x21;
  local_1bc = 0x22;
  local_1c8 = 2;
  local_1c4 = 1;
  local_1f0 = FUN_140558c80(0xd8);
  local_218 = local_218 & 0xffffffff00000000;
  puStack_220 = (undefined8 *)0x0;
  local_228._0_4_ = 2;
  puStack_230 = (undefined8 *)&local_1c8;
  local_238._0_4_ = 2;
  uStack_240 = (ulonglong *)&local_1c0;
  local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
  local_1f8 = FUN_140086ff0(local_1f0,param_1,0x442,0);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1d4 = 0x23;
  local_1f0 = FUN_140558c80(0xd8);
  local_218 = local_218 & 0xffffffff00000000;
  puStack_220 = (undefined8 *)0x0;
  local_228 = (ulonglong)local_228._4_4_ << 0x20;
  puStack_230 = (undefined8 *)0x0;
  local_238 = CONCAT44(local_238._4_4_,1);
  uStack_240 = (ulonglong *)&local_1d4;
  local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
  local_1f8 = FUN_140086ff0(local_1f0,param_1,0x43a,0);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x48);
  local_228 = CONCAT71(local_228._1_7_,1);
  puStack_230 = (undefined8 *)CONCAT71(puStack_230._1_7_,1);
  local_238 = local_238 & 0xffffffffffffff00;
  uStack_240 = (ulonglong *)0x0;
  local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
  local_1f8 = FUN_140074180(local_1f0,1,param_1,0xffffffff);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x88);
  local_238 = local_238 & 0xffffffff00000000;
  uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
  local_248._0_1_ = 1;
  local_1f8 = FUN_140087d40(local_1f0,param_1,0x43b,0x430);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x88);
  local_238 = local_238 & 0xffffffff00000000;
  uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
  local_248._0_1_ = 1;
  local_1f8 = FUN_140087d40(local_1f0,param_1,0x43c,0x430);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x88);
  local_238 = local_238 & 0xffffffff00000000;
  uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
  local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
  local_1f8 = FUN_140087d40(local_1f0,param_1,0x43d,0x430);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_70 = 0x1040000011a;
  uStack_68 = 0x13f00000129;
  local_60 = 0x14200000140;
  uStack_58 = 0x15e0000015d;
  local_50 = 0x16c00000165;
  uStack_48 = 0x16e0000016b;
  local_40 = 0x16d;
  local_3c = 0x168;
  local_38 = 0x16f;
  local_1f0 = FUN_140558c80(0x50);
  uStack_240 = (ulonglong *)CONCAT71(uStack_240._1_7_,1);
  local_248 = (undefined8 *)CONCAT44(local_248._4_4_,0xf);
  local_1f8 = FUN_140086df0(local_1f0,param_1,0x43e,&local_70);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1d0[0] = 0x27;
  local_1f0 = FUN_140558c80(0xd8);
  local_218 = local_218 & 0xffffffff00000000;
  puStack_220 = (undefined8 *)0x0;
  local_228 = local_228 & 0xffffffff00000000;
  puStack_230 = (undefined8 *)0x0;
  local_238 = CONCAT44(local_238._4_4_,1);
  uStack_240 = (ulonglong *)local_1d0;
  local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
  local_1f8 = FUN_140086ff0(local_1f0,param_1,0x439,0);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x50);
  local_248 = param_1;
  local_1f8 = FUN_140074250(local_1f0,(longlong)param_1 + 0x1081,1,0);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x48);
  local_228._0_1_ = 1;
  puStack_230 = (undefined8 *)CONCAT71(puStack_230._1_7_,1);
  local_238 = local_238 & 0xffffffffffffff00;
  uStack_240 = (ulonglong *)0x0;
  local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
  local_1f8 = FUN_140074180(local_1f0,2,param_1,0xffffffff);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x60);
  local_218._0_1_ = 1;
  puStack_220._0_1_ = 1;
  local_228._0_1_ = 0;
  puStack_230 = (undefined8 *)0x0;
  local_238._0_1_ = 1;
  uStack_240._0_4_ = 0x43f;
  local_248 = param_1;
  local_1f8 = FUN_1400876f0(local_1f0,5,0xffffffff,1);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x60);
  local_218._0_1_ = 1;
  puStack_220._0_1_ = 1;
  local_228._0_1_ = 0;
  puStack_230 = (undefined8 *)0x0;
  local_238 = CONCAT71(local_238._1_7_,1);
  uStack_240._0_4_ = 0x440;
  local_248 = param_1;
  local_1f8 = FUN_1400876f0(local_1f0,0x3a,0xffffffff,1);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x88);
  local_238 = local_238 & 0xffffffff00000000;
  uStack_240 = (ulonglong *)((ulonglong)uStack_240._4_4_ << 0x20);
  local_248._0_1_ = 1;
  local_1f8 = FUN_140087d40(local_1f0,param_1,0x443,0x430);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x48);
  local_228 = CONCAT71(local_228._1_7_,1);
  puStack_230 = (undefined8 *)CONCAT71(puStack_230._1_7_,1);
  local_238 = local_238 & 0xffffffffffffff00;
  uStack_240 = (ulonglong *)0x0;
  local_248._0_1_ = 1;
  local_1f8 = FUN_140088dc0(local_1f0,0x3a,param_1,0x444);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x88);
  local_238 = local_238 & 0xffffffff00000000;
  uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
  local_248._0_1_ = 1;
  local_1f8 = FUN_140087d40(local_1f0,param_1,0x44a,0x430);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x88);
  local_238 = local_238 & 0xffffffff00000000;
  uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
  local_248._0_1_ = 1;
  local_1f8 = FUN_140087d40(local_1f0,param_1,1099,0x430);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x88);
  local_238 = local_238 & 0xffffffff00000000;
  uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
  local_248._0_1_ = 1;
  local_1f8 = FUN_140087d40(local_1f0,param_1,0x44c,0x430);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x58);
  local_228 = CONCAT44(local_228._4_4_,2);
  puStack_230 = (undefined8 *)CONCAT44(puStack_230._4_4_,3);
  local_238 = CONCAT44(local_238._4_4_,1);
  uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
  local_248._0_1_ = 1;
  local_1f8 = FUN_140086a00(local_1f0,param_1,0x455,0x456);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x58);
  local_228._0_1_ = 1;
  puStack_230._0_1_ = 1;
  local_238 = local_238 & 0xffffffffffffff00;
  uStack_240 = (ulonglong *)0x0;
  local_248 = (undefined8 *)((ulonglong)local_248._1_7_ << 8);
  local_1f8 = FUN_140088eb0(local_1f0,0x3a,param_1,0x445);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x50);
  local_248 = param_1;
  local_1f8 = FUN_140074250(local_1f0,(longlong)param_1 + 0x1081,2,0);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x48);
  local_228._0_1_ = 1;
  puStack_230 = (undefined8 *)CONCAT71(puStack_230._1_7_,1);
  local_238 = local_238 & 0xffffffffffffff00;
  uStack_240 = (ulonglong *)0x0;
  local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
  local_1f8 = FUN_140074180(local_1f0,3,param_1,0xffffffff);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x60);
  local_218._0_1_ = 1;
  puStack_220._0_1_ = 1;
  local_228 = (ulonglong)local_228._1_7_ << 8;
  puStack_230 = (undefined8 *)0x0;
  local_238 = CONCAT71(local_238._1_7_,1);
  uStack_240 = (ulonglong *)CONCAT44(uStack_240._4_4_,0x441);
  local_248 = param_1;
  local_1f8 = FUN_1400876f0(local_1f0,*(undefined4 *)(DAT_1407b8b58 + 0x20),0xffffffff,1);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_170 = *(undefined4 *)(DAT_1407b8b60 + 0x20);
  local_16c = *(undefined4 *)(DAT_1407b8b48 + 0x20);
  local_168 = *(undefined4 *)(DAT_1407b8b50 + 0x20);
  local_164 = *(undefined4 *)(DAT_1407b8b38 + 0x20);
  local_160 = *(undefined4 *)(DAT_1407b8b40 + 0x20);
  local_128 = 0xffffffffffffffff;
  uStack_120 = 0xffffffffffffffff;
  local_118 = 0xffffffff;
  local_1f0 = FUN_140558c80(0x60);
  uStack_210._0_1_ = 1;
  local_218._0_1_ = 1;
  puStack_220._0_1_ = 0;
  local_228 = 0;
  puStack_230._0_1_ = 1;
  local_238._0_4_ = 0x446;
  local_248._0_4_ = 1;
  uStack_240 = param_1;
  local_1f8 = FUN_140087810(local_1f0,&local_170,&local_128,5);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_158 = *(undefined4 *)(DAT_1407b8b30 + 0x20);
  local_154 = *(undefined4 *)(DAT_1407b8b20 + 0x20);
  local_150 = *(undefined4 *)(DAT_1407b8b28 + 0x20);
  local_14c = *(undefined4 *)(DAT_1407b8b10 + 0x20);
  local_148 = *(undefined4 *)(DAT_1407b8b18 + 0x20);
  local_110 = 0xffffffffffffffff;
  uStack_108 = 0xffffffffffffffff;
  local_100 = 0xffffffff;
  local_1f0 = FUN_140558c80(0x60);
  uStack_210._0_1_ = 1;
  local_218._0_1_ = 1;
  puStack_220._0_1_ = 0;
  local_228 = 0;
  puStack_230._0_1_ = 1;
  local_238._0_4_ = 0x447;
  local_248._0_4_ = 1;
  uStack_240 = param_1;
  local_1f8 = FUN_140087810(local_1f0,&local_158,&local_110,5);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_140 = *(undefined4 *)(DAT_1407b8b00 + 0x20);
  local_13c = *(undefined4 *)(DAT_1407b8b08 + 0x20);
  local_138 = *(undefined4 *)(DAT_1407b8af0 + 0x20);
  local_134 = *(undefined4 *)(DAT_1407b8af8 + 0x20);
  local_130 = *(undefined4 *)(DAT_1407b8ae0 + 0x20);
  local_f8 = 0xffffffffffffffff;
  uStack_f0 = 0xffffffffffffffff;
  local_e8 = 0xffffffff;
  local_1f0 = FUN_140558c80(0x60);
  uStack_210 = CONCAT71(uStack_210._1_7_,1);
  local_218._0_1_ = 1;
  puStack_220._0_1_ = 0;
  local_228 = 0;
  puStack_230 = (undefined8 *)CONCAT71(puStack_230._1_7_,1);
  local_238 = CONCAT44(local_238._4_4_,0x448);
  local_248 = (undefined8 *)CONCAT44(local_248._4_4_,1);
  uStack_240 = param_1;
  local_1f8 = FUN_140087810(local_1f0,&local_140,&local_f8,5);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x50);
  local_218._0_1_ = 1;
  puStack_220._0_1_ = 1;
  local_228 = local_228 & 0xffffffffffffff00;
  puStack_230 = (undefined8 *)0x0;
  local_238._0_1_ = 1;
  uStack_240._0_4_ = 0x44d;
  local_248 = param_1;
  local_1f8 = FUN_140073e40(local_1f0,4,8,0xffffffff);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x50);
  local_248 = param_1;
  local_1f8 = FUN_140074250(local_1f0,(longlong)param_1 + 0x1081,4,0);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x60);
  local_218._0_1_ = 1;
  puStack_220._0_1_ = 1;
  local_228 = local_228 & 0xffffffffffffff00;
  puStack_230 = (undefined8 *)0x0;
  local_238._0_1_ = 1;
  uStack_240 = (ulonglong *)CONCAT44(uStack_240._4_4_,0x44e);
  local_248 = param_1;
  local_1f8 = FUN_1400876f0(local_1f0,0x3d,0xffffffff,1);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x58);
  local_228._0_1_ = 1;
  puStack_230._0_1_ = 1;
  local_238._0_1_ = 0;
  uStack_240 = (ulonglong *)0x0;
  local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
  local_1f8 = FUN_140088eb0(local_1f0,0x3d,param_1,0x44f);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x50);
  local_248 = param_1;
  local_1f8 = FUN_140074250(local_1f0,(longlong)param_1 + 0x1081,8,0);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x48);
  local_228._0_1_ = 1;
  puStack_230 = (undefined8 *)CONCAT71(puStack_230._1_7_,1);
  local_238._0_1_ = 0;
  uStack_240 = (ulonglong *)0x0;
  local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
  local_1f8 = FUN_140074180(local_1f0,4,param_1,0xffffffff);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x60);
  local_218._0_1_ = 1;
  puStack_220._0_1_ = 1;
  local_228._0_1_ = 0;
  puStack_230 = (undefined8 *)0x0;
  local_238._0_1_ = 1;
  uStack_240._0_4_ = 0x450;
  local_248 = param_1;
  local_1f8 = FUN_1400876f0(local_1f0,*(undefined4 *)(DAT_1407b8ae8 + 0x20),0xffffffff,1);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x60);
  local_218._0_1_ = 1;
  puStack_220._0_1_ = 1;
  local_228._0_1_ = 0;
  puStack_230 = (undefined8 *)0x0;
  local_238._0_1_ = 1;
  uStack_240._0_4_ = 0x451;
  local_248 = param_1;
  local_1f8 = FUN_1400876f0(local_1f0,0x14,0xffffffff,1);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x60);
  local_218._0_1_ = 1;
  puStack_220._0_1_ = 1;
  local_228._0_1_ = 0;
  puStack_230 = (undefined8 *)0x0;
  local_238._0_1_ = 1;
  uStack_240 = (ulonglong *)CONCAT44(uStack_240._4_4_,0x452);
  local_248 = param_1;
  local_1f8 = FUN_1400876f0(local_1f0,*(undefined4 *)(DAT_1407b8ad8 + 0x20),0xffffffff,1);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x48);
  local_228._0_1_ = 1;
  puStack_230 = (undefined8 *)CONCAT71(puStack_230._1_7_,1);
  local_238._0_1_ = 0;
  uStack_240 = (ulonglong *)0x0;
  local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
  local_1f8 = FUN_140088dc0(local_1f0,*(undefined4 *)(DAT_1407b8ad8 + 0x20),param_1,0x453);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  local_1f0 = FUN_140558c80(0x60);
  local_218 = CONCAT71(local_218._1_7_,1);
  puStack_220._0_1_ = 1;
  local_228._0_1_ = 0;
  puStack_230 = (undefined8 *)0x0;
  local_238 = CONCAT71(local_238._1_7_,1);
  uStack_240 = (ulonglong *)CONCAT44(uStack_240._4_4_,0x454);
  local_248 = param_1;
  local_1f8 = FUN_1400876f0(local_1f0,0x32,0xffffffff,1);
  FUN_140084030(puVar4,&local_1f8);
  FUN_140084030(puVar1,&local_1f8);
  if (DAT_1407bbac8 != 0) {
    uVar3 = FUN_140078de0(&DAT_1407bb5d0);
    FUN_140054de0(local_190,L"tutorialArea");
    puVar4 = (undefined8 *)FUN_14006d370(uVar3,local_190);
    thunk_FUN_140055150(local_190);
    if (puVar4 != (undefined8 *)0x0) {
      uVar3 = FUN_140558c80(0x18);
      uVar3 = FUN_140045630(uVar3);
      local_1f0 = FUN_140558c80(0x28);
      puStack_220._0_1_ = 1;
      local_228._0_1_ = 1;
      local_238 = puVar4[4];
      puStack_230 = (undefined8 *)puVar4[5];
      local_248 = (undefined8 *)puVar4[2];
      uStack_240 = (ulonglong *)puVar4[3];
      local_1f8 = FUN_140084f80(local_1f0,0x4e0,*puVar4,puVar4[1]);
      FUN_1400453a0(uVar3,&local_1f8);
      local_1f0 = FUN_140558c80(0x48);
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,0xffffffff);
      uVar3 = FUN_140086800(local_1f0,0,param_1,uVar3);
      FUN_140083a30(param_1,0,uVar3);
    }
  }
  local_1f0 = FUN_140558c80(0x58);
  uVar5 = FUN_140073f30(local_1f0,param_1);
  local_1f0 = FUN_140558c80(0x88);
  local_238 = CONCAT44(local_238._4_4_,3);
  uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
  local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
  local_1f8 = FUN_140087d40(local_1f0,param_1,0x4ee,0x430);
  if (local_1f8 != 0) {
    FUN_140084030(uVar5 + 0x40,&local_1f8);
  }
  local_1f0 = FUN_140558c80(0x88);
  local_238 = local_238 & 0xffffffff00000000;
  uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
  local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
  local_1f8 = FUN_140087d40(local_1f0,param_1,0x4f5,0x430);
  if (local_1f8 != 0) {
    FUN_140084030(uVar5 + 0x40,&local_1f8);
  }
  local_1f0 = FUN_140558c80(0x88);
  local_238 = local_238 & 0xffffffff00000000;
  uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
  local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
  local_1f8 = FUN_140087d40(local_1f0,param_1,0x4ef,0x430);
  if (local_1f8 != 0) {
    FUN_140084030(uVar5 + 0x40,&local_1f8);
  }
  local_1f8 = uVar5;
  FUN_140084030(param_1 + 0xe6,&local_1f8);
  FUN_140084030(param_1 + 0xe9,&local_1f8);
  local_1f0 = FUN_140558c80(0x48);
  local_1f8 = FUN_140087ad0(local_1f0,param_1,1);
  FUN_140084030(param_1 + 0xec,&local_1f8);
  local_1f0 = FUN_140558c80(0x88);
  local_238 = local_238 & 0xffffffff00000000;
  uStack_240._0_4_ = 1;
  local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
  local_1f8 = FUN_140087d40(local_1f0,param_1,0x45d,0xffffffff);
  FUN_140084030(param_1 + 0xec,&local_1f8);
  local_1f0 = FUN_140558c80(0x48);
  local_1f8 = FUN_140087ad0(local_1f0,param_1,1);
  FUN_140084030(param_1 + 0xef,&local_1f8);
  local_1f0 = FUN_140558c80(0x50);
  local_248 = param_1;
  local_1f8 = FUN_140074250(local_1f0,(longlong)param_1 + 0x1081,1);
  FUN_140084030(param_1 + 0xef,&local_1f8);
  local_1f0 = FUN_140558c80(0x48);
  local_1f8 = FUN_140087ad0(local_1f0,param_1,1);
  FUN_140084030(param_1 + 0xef,&local_1f8);
  local_1f0 = FUN_140558c80(0x60);
  local_218 = CONCAT71(local_218._1_7_,1);
  puStack_220 = (undefined8 *)CONCAT71(puStack_220._1_7_,1);
  local_228._0_1_ = 0;
  puStack_230 = (undefined8 *)0x0;
  local_238._0_1_ = 1;
  uStack_240 = (ulonglong *)CONCAT44(uStack_240._4_4_,0x471);
  local_248 = param_1;
  local_1f8 = FUN_1400876f0(local_1f0,5,0xffffffff,1);
  FUN_140084030(param_1 + 0xef,&local_1f8);
  local_1f0 = FUN_140558c80(0x58);
  lVar6 = FUN_140073f30(local_1f0,param_1);
  local_1f0 = FUN_140558c80(0x50);
  local_228 = CONCAT71(local_228._1_7_,1);
  puStack_230 = (undefined8 *)CONCAT71(puStack_230._1_7_,1);
  local_238 = (ulonglong)local_238._1_7_ << 8;
  uStack_240 = (ulonglong *)0x0;
  local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
  local_1f8 = FUN_140074060(local_1f0,param_1,0x474,0);
  if (local_1f8 != 0) {
    FUN_140084030(lVar6 + 0x40,&local_1f8);
  }
  local_1f0 = FUN_140558c80(0x50);
  local_228 = CONCAT71(local_228._1_7_,1);
  puStack_230 = (undefined8 *)CONCAT71(puStack_230._1_7_,1);
  local_238 = local_238 & 0xffffffffffffff00;
  uStack_240 = (ulonglong *)0x0;
  local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
  local_1f8 = FUN_1400740f0(local_1f0,param_1,0x476,0x3a);
  if (local_1f8 != 0) {
    FUN_140084030(lVar6 + 0x40,&local_1f8);
  }
  local_1f0 = FUN_140558c80(0x60);
  local_218 = CONCAT71(local_218._1_7_,1);
  puStack_220 = (undefined8 *)CONCAT71(puStack_220._1_7_,1);
  local_228 = local_228 & 0xffffffffffffff00;
  puStack_230 = (undefined8 *)0x0;
  local_238 = CONCAT71(local_238._1_7_,1);
  uStack_240 = (ulonglong *)CONCAT44(uStack_240._4_4_,0x440);
  local_248 = param_1;
  local_1f8 = FUN_1400876f0(local_1f0,0x3a,0xffffffff,1);
  if (local_1f8 != 0) {
    FUN_140084030(lVar6 + 0x40,&local_1f8);
  }
  FUN_140083a30(param_1,2,lVar6);
  local_1f0 = FUN_140558c80(0x88);
  local_238 = local_238 & 0xffffffff00000000;
  uStack_240._0_4_ = 1;
  local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
  uVar3 = FUN_140087d40(local_1f0,param_1,0x472,0xffffffff);
  FUN_140083a30(param_1,2,uVar3);
  local_1f0 = FUN_140558c80(0x48);
  uVar3 = FUN_140087ad0(local_1f0,param_1,1);
  FUN_140083a30(param_1,3,uVar3);
  local_1f0 = FUN_140558c80(0x50);
  local_248 = param_1;
  uVar3 = FUN_140074250(local_1f0,(longlong)param_1 + 0x1081,2,1);
  FUN_140083a30(param_1,3,uVar3);
  local_1f0 = FUN_140558c80(0x60);
  local_218._0_1_ = 1;
  puStack_220._0_1_ = 1;
  local_228 = local_228 & 0xffffffffffffff00;
  puStack_230 = (undefined8 *)0x0;
  local_238._0_1_ = 1;
  uStack_240 = (ulonglong *)CONCAT44(uStack_240._4_4_,0x441);
  local_248 = param_1;
  uVar3 = FUN_1400876f0(local_1f0,*(undefined4 *)(DAT_1407b8b58 + 0x20),0xffffffff,1);
  FUN_140083a30(param_1,3,uVar3);
  local_1f0 = FUN_140558c80(0x58);
  uVar3 = FUN_140073f30(local_1f0,param_1);
  local_1f0 = FUN_140558c80(0x50);
  local_228._0_1_ = 1;
  puStack_230._0_1_ = 1;
  local_238._0_1_ = 0;
  uStack_240 = (ulonglong *)0x0;
  local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
  uVar7 = FUN_140074060(local_1f0,param_1,0x473,1);
  FUN_140088120(uVar3,uVar7);
  local_1f0 = FUN_140558c80(0x50);
  local_228 = CONCAT71(local_228._1_7_,1);
  puStack_230._0_1_ = 1;
  local_238 = (ulonglong)local_238._1_7_ << 8;
  uStack_240 = (ulonglong *)0x0;
  local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
  uVar7 = FUN_1400740f0(local_1f0,param_1,0x475,*(undefined4 *)(DAT_1407b8b60 + 0x20));
  FUN_140088120(uVar3,uVar7);
  local_1f0 = FUN_140558c80(0x60);
  uStack_210._0_1_ = 1;
  local_218._0_1_ = 1;
  puStack_220._0_1_ = 0;
  local_228 = 0;
  puStack_230._0_1_ = 1;
  local_238._0_4_ = 0x446;
  local_248._0_4_ = 1;
  uStack_240 = param_1;
  uVar7 = FUN_140087810(local_1f0,&local_170,&local_128,5);
  FUN_140088120(uVar3,uVar7);
  FUN_140083a30(param_1,3,uVar3);
  local_1f0 = FUN_140558c80(0x60);
  uStack_210._0_1_ = 1;
  local_218._0_1_ = 1;
  puStack_220._0_1_ = 0;
  local_228 = 0;
  puStack_230._0_1_ = 1;
  local_238._0_4_ = 0x447;
  local_248._0_4_ = 1;
  uStack_240 = param_1;
  uVar3 = FUN_140087810(local_1f0,&local_158,&local_110,5);
  FUN_140083a30(param_1,3,uVar3);
  local_1f0 = FUN_140558c80(0x60);
  uStack_210._0_1_ = 1;
  local_218._0_1_ = 1;
  puStack_220._0_1_ = 0;
  local_228 = 0;
  puStack_230 = (undefined8 *)CONCAT71(puStack_230._1_7_,1);
  local_238._0_4_ = 0x448;
  local_248 = (undefined8 *)CONCAT44(local_248._4_4_,1);
  uStack_240 = param_1;
  uVar3 = FUN_140087810(local_1f0,&local_140,&local_f8,5);
  FUN_140083a30(param_1,3,uVar3);
  local_1f0 = FUN_140558c80(0x88);
  local_238 = (ulonglong)local_238._4_4_ << 0x20;
  uStack_240._0_4_ = 1;
  local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
  uVar3 = FUN_140087d40(local_1f0,param_1,0x477,0xffffffff);
  FUN_140083a30(param_1,3,uVar3);
  local_1f0 = FUN_140558c80(0x50);
  local_248 = param_1;
  uVar3 = FUN_140074250(local_1f0,(longlong)param_1 + 0x1081,4,1);
  FUN_140083a30(param_1,3,uVar3);
  local_1f0 = FUN_140558c80(0x60);
  local_218._0_1_ = 1;
  puStack_220._0_1_ = 1;
  local_228 = local_228 & 0xffffffffffffff00;
  puStack_230 = (undefined8 *)0x0;
  local_238 = CONCAT71(local_238._1_7_,1);
  uStack_240._0_4_ = 0x478;
  local_248 = param_1;
  uVar3 = FUN_1400876f0(local_1f0,0x3d,0xffffffff,1);
  FUN_140083a30(param_1,3,uVar3);
  local_1f0 = FUN_140558c80(0x88);
  local_238 = local_238 & 0xffffffff00000000;
  uStack_240._0_4_ = 1;
  local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
  uVar3 = FUN_140087d40(local_1f0,param_1,0x479,0xffffffff);
  FUN_140083a30(param_1,3,uVar3);
  local_1f0 = FUN_140558c80(0x60);
  local_218._0_1_ = 1;
  puStack_220._0_1_ = 1;
  local_228 = local_228 & 0xffffffffffffff00;
  puStack_230 = (undefined8 *)0x0;
  local_238._0_1_ = 1;
  uStack_240._0_4_ = 0x452;
  local_248 = param_1;
  uVar3 = FUN_1400876f0(local_1f0,*(undefined4 *)(DAT_1407b8ad8 + 0x20),0xffffffff,1);
  FUN_140083a30(param_1,3,uVar3);
  local_1f0 = FUN_140558c80(0x60);
  local_218._0_1_ = 1;
  puStack_220._0_1_ = 1;
  local_228 = local_228 & 0xffffffffffffff00;
  puStack_230 = (undefined8 *)0x0;
  local_238._0_1_ = 1;
  uStack_240._0_4_ = 0x454;
  local_248 = param_1;
  uVar3 = FUN_1400876f0(local_1f0,0x32,0xffffffff,1);
  FUN_140083a30(param_1,3,uVar3);
  local_1f0 = FUN_140558c80(0x48);
  uVar3 = FUN_140087ad0(local_1f0,param_1,1);
  FUN_140083a30(param_1,4,uVar3);
  local_1f0 = FUN_140558c80(0x50);
  local_248 = param_1;
  uVar3 = FUN_140074250(local_1f0,(longlong)param_1 + 0x1081,8,1);
  FUN_140083a30(param_1,4,uVar3);
  local_1f0 = FUN_140558c80(0x60);
  local_218._0_1_ = 1;
  puStack_220._0_1_ = 1;
  local_228 = local_228 & 0xffffffffffffff00;
  puStack_230 = (undefined8 *)0x0;
  local_238 = CONCAT71(local_238._1_7_,1);
  uStack_240._0_4_ = 0x47f;
  local_248 = param_1;
  uVar3 = FUN_1400876f0(local_1f0,*(undefined4 *)(DAT_1407b8ae8 + 0x20),0xffffffff,1);
  FUN_140083a30(param_1,4,uVar3);
  local_1f0 = FUN_140558c80(0x88);
  local_238 = local_238 & 0xffffffff00000000;
  uStack_240._0_4_ = 0;
  local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
  uVar3 = FUN_140087d40(local_1f0,param_1,0x480,0x430);
  FUN_140083a30(param_1,4,uVar3);
  local_1f0 = FUN_140558c80(0x60);
  local_218._0_1_ = 1;
  puStack_220._0_1_ = 1;
  local_228 = local_228 & 0xffffffffffffff00;
  puStack_230 = (undefined8 *)0x0;
  local_238 = CONCAT71(local_238._1_7_,1);
  uStack_240 = (ulonglong *)CONCAT44(uStack_240._4_4_,0x481);
  local_248 = param_1;
  uVar3 = FUN_1400876f0(local_1f0,0x14,0xffffffff,1);
  FUN_140083a30(param_1,4,uVar3);
  local_1f0 = FUN_140558c80(0x50);
  local_248 = param_1;
  uVar3 = FUN_140074250(local_1f0,(longlong)param_1 + 0x1081,0x10,1);
  FUN_140083a30(param_1,0x11,uVar3);
  local_90 = 0x17500000175;
  uStack_88 = 0x17500000175;
  local_80 = 0x17500000175;
  uStack_78 = 0x17500000175;
  local_b0 = 0x600300002003;
  uStack_a8 = 0x600300002003;
  local_a0 = 0x604300002043;
  uStack_98 = 0x604300002043;
  local_1f0 = FUN_140558c80(0x60);
  uStack_210 = CONCAT71(uStack_210._1_7_,1);
  local_218 = CONCAT71(local_218._1_7_,1);
  puStack_220 = (undefined8 *)((ulonglong)puStack_220._1_7_ << 8);
  local_228 = 0;
  puStack_230 = (undefined8 *)CONCAT71(puStack_230._1_7_,1);
  local_238._0_4_ = 0x488;
  local_248 = (undefined8 *)CONCAT44(local_248._4_4_,1);
  uStack_240 = param_1;
  uVar3 = FUN_140087810(local_1f0,&local_90,&local_b0,8);
  FUN_140083a30(param_1,0x11,uVar3);
  local_1f0 = FUN_140558c80(0x88);
  local_238 = (ulonglong)local_238._4_4_ << 0x20;
  uStack_240._0_4_ = 1;
  local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
  uVar3 = FUN_140087d40(local_1f0,param_1,0x489,0xffffffff);
  FUN_140083a30(param_1,0x11,uVar3);
  lVar6 = FUN_140078de0(&DAT_1407bb5d0);
  if (lVar6 != 0) {
    uVar3 = FUN_140078de0(&DAT_1407bb5d0);
    FUN_140054de0(local_190,L"minecartArea");
    puVar8 = (ulonglong *)FUN_14006d370(uVar3,local_190);
    thunk_FUN_140055150(local_190);
    if (puVar8 != (ulonglong *)0x0) {
      local_1f0 = FUN_140558c80(0x48);
      local_200 = CONCAT71(local_200._1_7_,1);
      local_208 = 1;
      local_218 = puVar8[4];
      uStack_210 = puVar8[5];
      local_228 = puVar8[2];
      puStack_220 = (undefined8 *)puVar8[3];
      local_238 = *puVar8;
      puStack_230 = (undefined8 *)puVar8[1];
      uStack_240._0_4_ = 0x4e8;
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,5);
      uVar3 = FUN_140085ce0(local_1f0,0x24,param_1,0);
      FUN_140083ac0(param_1,0,uVar3);
    }
  }
  lVar6 = FUN_140078de0(&DAT_1407bb5d0);
  if (lVar6 != 0) {
    uVar3 = FUN_140078de0(&DAT_1407bb5d0);
    FUN_140054de0(local_190,L"boatArea");
    puVar8 = (ulonglong *)FUN_14006d370(uVar3,local_190);
    thunk_FUN_140055150(local_190);
    if (puVar8 != (ulonglong *)0x0) {
      local_1f0 = FUN_140558c80(0x48);
      local_200 = CONCAT71(local_200._1_7_,1);
      local_208 = 1;
      local_218 = puVar8[4];
      uStack_210 = puVar8[5];
      local_228 = puVar8[2];
      puStack_220 = (undefined8 *)puVar8[3];
      local_238 = *puVar8;
      puStack_230 = (undefined8 *)puVar8[1];
      uStack_240._0_4_ = 0x4e9;
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,6);
      uVar3 = FUN_140085ce0(local_1f0,0x24,param_1,0);
      FUN_140083ac0(param_1,0,uVar3);
    }
  }
  lVar6 = FUN_140078de0(&DAT_1407bb5d0);
  if (lVar6 != 0) {
    uVar3 = FUN_140078de0(&DAT_1407bb5d0);
    FUN_140054de0(local_190,L"fishingArea");
    puVar8 = (ulonglong *)FUN_14006d370(uVar3,local_190);
    thunk_FUN_140055150(local_190);
    if (puVar8 != (ulonglong *)0x0) {
      local_1f0 = FUN_140558c80(0x48);
      local_200 = CONCAT71(local_200._1_7_,1);
      local_208 = 1;
      local_218 = puVar8[4];
      uStack_210 = puVar8[5];
      local_228 = puVar8[2];
      puStack_220 = (undefined8 *)puVar8[3];
      local_238 = *puVar8;
      puStack_230 = (undefined8 *)puVar8[1];
      uStack_240._0_4_ = 0x4ea;
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,7);
      uVar3 = FUN_140085ce0(local_1f0,0x24,param_1,0);
      FUN_140083ac0(param_1,0,uVar3);
    }
  }
  lVar6 = FUN_140078de0(&DAT_1407bb5d0);
  if (lVar6 != 0) {
    uVar3 = FUN_140078de0(&DAT_1407bb5d0);
    FUN_140054de0(local_190,L"pistonBridgeArea");
    puVar8 = (ulonglong *)FUN_14006d370(uVar3,local_190);
    thunk_FUN_140055150(local_190);
    if (puVar8 != (ulonglong *)0x0) {
      local_1f0 = FUN_140558c80(0x48);
      local_200 = CONCAT71(local_200._1_7_,1);
      local_208 = 1;
      local_218 = puVar8[4];
      uStack_210 = puVar8[5];
      local_228 = puVar8[2];
      puStack_220 = (undefined8 *)puVar8[3];
      local_238 = *puVar8;
      puStack_230 = (undefined8 *)puVar8[1];
      uStack_240._0_4_ = 0x4eb;
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,0xffffffff);
      uVar3 = FUN_140085ce0(local_1f0,0x24,param_1,0);
      FUN_140083ac0(param_1,0,uVar3);
    }
  }
  lVar6 = FUN_140078de0(&DAT_1407bb5d0);
  if (lVar6 != 0) {
    uVar3 = FUN_140078de0(&DAT_1407bb5d0);
    FUN_140054de0(local_190,L"pistonArea");
    puVar8 = (ulonglong *)FUN_14006d370(uVar3,local_190);
    thunk_FUN_140055150(local_190);
    if (puVar8 != (ulonglong *)0x0) {
      local_1e0 = 0;
      local_1f0 = FUN_140558c80(0x58);
      local_200 = 0;
      local_208 = 0;
      uStack_210 = CONCAT71(uStack_210._1_7_,1);
      puStack_220 = (undefined8 *)puVar8[4];
      local_218 = puVar8[5];
      puStack_230 = (undefined8 *)puVar8[2];
      local_228 = puVar8[3];
      uStack_240 = (ulonglong *)*puVar8;
      local_238 = puVar8[1];
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,1);
      uVar3 = FUN_1400852f0(local_1f0,param_1,0xb,&local_1e0);
      FUN_140083780(param_1,uVar3);
      local_1f0 = FUN_140558c80(0x58);
      local_228 = CONCAT44(local_228._4_4_,0xb);
      puStack_230 = (undefined8 *)CONCAT44(puStack_230._4_4_,2);
      local_238._0_4_ = 1;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140086a00(local_1f0,param_1,0x4b1,0x4b2);
      FUN_140083a30(param_1,0xb,uVar3);
      local_1f0 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1f0,param_1,0x4b3,0x430);
      FUN_140083a30(param_1,0xb,uVar3);
      local_1f0 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1f0,param_1,0x86b,0x430);
      FUN_140083a30(param_1,0xb,uVar3);
      local_1f0 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1f0,param_1,0x4b4,0x430);
      FUN_140083a30(param_1,0xb,uVar3);
      local_1f0 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1f0,param_1,0x4b5,0x430);
      FUN_140083a30(param_1,0xb,uVar3);
      local_1f0 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1f0,param_1,0x4b6,0x430);
      FUN_140083a30(param_1,0xb,uVar3);
      local_1f0 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1f0,param_1,0x4b7,0x430);
      FUN_140083a30(param_1,0xb,uVar3);
      local_1f0 = FUN_140558c80(0x88);
      local_238 = (ulonglong)local_238._4_4_ << 0x20;
      uStack_240._0_4_ = 0;
      local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
      uVar3 = FUN_140087d40(local_1f0,param_1,0x4b8,0x430);
      FUN_140083a30(param_1,0xb,uVar3);
    }
  }
  if (DAT_1407bbac8 != 0) {
    uVar3 = FUN_140078de0(&DAT_1407bb5d0);
    FUN_140054de0(local_190,L"portalArea");
    puVar8 = (ulonglong *)FUN_14006d370(uVar3,local_190);
    thunk_FUN_140055150(local_190);
    if (puVar8 != (ulonglong *)0x0) {
      local_1e0 = 0;
      local_1f0 = FUN_140558c80(0x58);
      local_200 = 0;
      local_208 = 0;
      uStack_210 = CONCAT71(uStack_210._1_7_,1);
      puStack_220 = (undefined8 *)puVar8[4];
      local_218 = puVar8[5];
      puStack_230 = (undefined8 *)puVar8[2];
      local_228 = puVar8[3];
      uStack_240 = (ulonglong *)*puVar8;
      local_238 = puVar8[1];
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,1);
      uVar3 = FUN_1400852f0(local_1f0,param_1,0xc,&local_1e0);
      FUN_140083780(param_1,uVar3);
      local_1f0 = FUN_140558c80(0x58);
      local_228 = CONCAT44(local_228._4_4_,0xc);
      puStack_230 = (undefined8 *)CONCAT44(puStack_230._4_4_,2);
      local_238._0_4_ = 1;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140086a00(local_1f0,param_1,0x4b9,0x4ba);
      FUN_140083a30(param_1,0xc,uVar3);
      local_1f0 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1f0,param_1,0x4bb,0x430);
      FUN_140083a30(param_1,0xc,uVar3);
      local_1f0 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1f0,param_1,0x4bc,0x430);
      FUN_140083a30(param_1,0xc,uVar3);
      local_1f0 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1f0,param_1,0x4bd,0x430);
      FUN_140083a30(param_1,0xc,uVar3);
      local_1f0 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1f0,param_1,0x4be,0x430);
      FUN_140083a30(param_1,0xc,uVar3);
      local_1f0 = FUN_140558c80(0x88);
      local_238 = (ulonglong)local_238._4_4_ << 0x20;
      uStack_240._0_4_ = 0;
      local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
      uVar3 = FUN_140087d40(local_1f0,param_1,0x4bf,0x430);
      FUN_140083a30(param_1,0xc,uVar3);
    }
  }
  lVar6 = FUN_140078de0(&DAT_1407bb5d0);
  if (lVar6 != 0) {
    uVar3 = FUN_140078de0(&DAT_1407bb5d0);
    FUN_140054de0(local_190,L"creativeArea");
    puVar8 = (ulonglong *)FUN_14006d370(uVar3,local_190);
    thunk_FUN_140055150(local_190);
    if (puVar8 != (ulonglong *)0x0) {
      local_1e0 = 0;
      local_1f0 = FUN_140558c80(0x58);
      local_200 = DAT_1407b94d8;
      local_208 = 1;
      uStack_210 = CONCAT71(uStack_210._1_7_,1);
      puStack_220 = (undefined8 *)puVar8[4];
      local_218 = puVar8[5];
      puStack_230 = (undefined8 *)puVar8[2];
      local_228 = puVar8[3];
      uStack_240 = (ulonglong *)*puVar8;
      local_238 = puVar8[1];
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,1);
      uVar3 = FUN_1400852f0(local_1f0,param_1,0xf,&local_1e0);
      FUN_140083780(param_1,uVar3);
      local_1f0 = FUN_140558c80(0x58);
      local_228._0_4_ = 0xe;
      puStack_230 = (undefined8 *)CONCAT44(puStack_230._4_4_,3);
      local_238._0_4_ = 1;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140086a00(local_1f0,param_1,0x4c0,0x4c1);
      FUN_140083a30(param_1,0xf,uVar3);
      local_1f0 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1f0,param_1,0x4c2,0x430);
      FUN_140083a30(param_1,0xf,uVar3);
      local_1f0 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1f0,param_1,0x8a4,0x430);
      FUN_140083a30(param_1,0xf,uVar3);
      local_1f8 = CONCAT44(local_1f8._4_4_,0x27);
      local_1f0 = FUN_140558c80(0xd8);
      local_218 = local_218 & 0xffffffff00000000;
      puStack_220 = (undefined8 *)0x0;
      local_228 = (ulonglong)local_228._4_4_ << 0x20;
      puStack_230 = (undefined8 *)0x0;
      local_238 = CONCAT44(local_238._4_4_,1);
      uStack_240 = &local_1f8;
      local_248._0_1_ = 0;
      uVar3 = FUN_140086ff0(local_1f0,param_1,0x4c3,0);
      FUN_140083a30(param_1,0xf,uVar3);
      local_1f0 = FUN_140558c80(0x48);
      local_228._0_1_ = 1;
      puStack_230 = (undefined8 *)CONCAT71(puStack_230._1_7_,1);
      local_238 = local_238 & 0xffffffffffffff00;
      uStack_240 = (ulonglong *)0x0;
      local_248 = (undefined8 *)((ulonglong)local_248._1_7_ << 8);
      uVar3 = FUN_140074180(local_1f0,0xd,param_1,0xffffffff);
      FUN_140083a30(param_1,0xf,uVar3);
      local_1f0 = FUN_140558c80(0x58);
      uVar3 = FUN_140073f30(local_1f0,param_1);
      uVar7 = FUN_140078de0(&DAT_1407bb5d0);
      FUN_140054de0(local_1b0,L"creativeExitArea");
      puVar4 = (undefined8 *)FUN_14006d370(uVar7,local_1b0);
      thunk_FUN_140055150(local_1b0);
      if (puVar4 != (undefined8 *)0x0) {
        uVar7 = FUN_140558c80(0x18);
        uVar7 = FUN_140045630(uVar7);
        local_1e8 = FUN_140558c80(0x28);
        puStack_220 = (undefined8 *)((ulonglong)puStack_220 & 0xffffffffffffff00);
        local_228._0_1_ = 1;
        local_238 = puVar4[4];
        puStack_230 = (undefined8 *)puVar4[5];
        local_248 = (undefined8 *)puVar4[2];
        uStack_240 = (ulonglong *)puVar4[3];
        local_1f0 = FUN_140084f80(local_1e8,0xffffffff,*puVar4,puVar4[1]);
        FUN_1400453a0(uVar7,&local_1f0);
        local_1e8 = FUN_140558c80(0x48);
        uStack_240 = (ulonglong *)CONCAT44(uStack_240._4_4_,1);
        local_248 = (undefined8 *)CONCAT44(local_248._4_4_,0x4c4);
        uVar7 = FUN_140086800(local_1e8,0xf,param_1,uVar7);
        FUN_140088120(uVar3,uVar7);
      }
      uVar7 = FUN_140558c80(0x18);
      uVar7 = FUN_140045630(uVar7);
      local_1e8 = FUN_140558c80(0x28);
      puStack_220 = (undefined8 *)CONCAT71(puStack_220._1_7_,1);
      local_228 = CONCAT71(local_228._1_7_,1);
      local_238 = puVar8[4];
      puStack_230 = (undefined8 *)puVar8[5];
      local_248 = (undefined8 *)puVar8[2];
      uStack_240 = (ulonglong *)puVar8[3];
      local_1f0 = FUN_140084f80(local_1e8,0x4e0,*puVar8,puVar8[1]);
      FUN_1400453a0(uVar7,&local_1f0);
      local_1e8 = FUN_140558c80(0x48);
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,0xffffffff);
      uVar7 = FUN_140086800(local_1e8,0xf,param_1,uVar7);
      FUN_140088120(uVar3,uVar7);
      local_1e8 = FUN_140558c80(0x88);
      local_238 = local_238 & 0xffffffff00000000;
      uStack_240._0_4_ = 0;
      local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
      uVar7 = FUN_140087d40(local_1e8,param_1,0x4c5,0x430);
      FUN_140088120(uVar3,uVar7);
      FUN_140083a30(param_1,0xf,uVar3);
    }
  }
  lVar6 = FUN_140078de0(&DAT_1407bb5d0);
  if (lVar6 != 0) {
    uVar3 = FUN_140078de0(&DAT_1407bb5d0);
    FUN_140054de0(local_1b0,L"brewingArea");
    puVar8 = (ulonglong *)FUN_14006d370(uVar3,local_1b0);
    thunk_FUN_140055150(local_1b0);
    if (puVar8 != (ulonglong *)0x0) {
      local_1f8 = local_1f8 & 0xffffffff00000000;
      local_1e8 = FUN_140558c80(0x58);
      local_200 = 0;
      local_208 = 0;
      uStack_210._0_1_ = 1;
      puStack_220 = (undefined8 *)puVar8[4];
      local_218 = puVar8[5];
      puStack_230 = (undefined8 *)puVar8[2];
      local_228 = puVar8[3];
      uStack_240 = (ulonglong *)*puVar8;
      local_238 = puVar8[1];
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,1);
      uVar3 = FUN_1400852f0(local_1e8,param_1,0x10,&local_1f8);
      FUN_140083780(param_1,uVar3);
      local_1e8 = FUN_140558c80(0x58);
      local_228 = CONCAT44(local_228._4_4_,0x16);
      puStack_230 = (undefined8 *)CONCAT44(puStack_230._4_4_,2);
      local_238 = CONCAT44(local_238._4_4_,1);
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
      uVar3 = FUN_140086a00(local_1e8,param_1,0x48a,0x48b);
      FUN_140083a30(param_1,0x10,uVar3);
      local_1e8 = FUN_140558c80(0x58);
      uVar3 = FUN_140073f30(local_1e8,param_1);
      local_1e8 = FUN_140558c80(0x50);
      local_218._0_1_ = 1;
      puStack_220._0_1_ = 1;
      local_228 = local_228 & 0xffffffffffffff00;
      puStack_230 = (undefined8 *)0x0;
      local_238._0_1_ = 1;
      uStack_240._0_4_ = 0x48c;
      local_248 = param_1;
      uVar7 = FUN_140073e40(local_1e8,0x176,1,0xffffffff);
      FUN_140088120(uVar3,uVar7);
      local_1e8 = FUN_140558c80(0x50);
      local_218._0_1_ = 1;
      puStack_220._0_1_ = 1;
      local_228 = local_228 & 0xffffffffffffff00;
      puStack_230 = (undefined8 *)0x0;
      local_238 = CONCAT71(local_238._1_7_,1);
      uStack_240._0_4_ = 0x48d;
      local_248 = param_1;
      uVar7 = FUN_140073e40(local_1e8,0x175,1,0);
      FUN_140088120(uVar3,uVar7);
      FUN_140083a30(param_1,0x10,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238 = local_238 & 0xffffffff00000000;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240._4_4_ << 0x20);
      local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
      uVar3 = FUN_140087d40(local_1e8,param_1,0x48e,0x430);
      FUN_140083a30(param_1,0x10,uVar3);
      local_1e8 = FUN_140558c80(0x50);
      local_248 = param_1;
      uVar3 = FUN_140074250(local_1e8,(longlong)param_1 + 0x1081,0x10,0);
      FUN_140083a30(param_1,0x10,uVar3);
      local_1e8 = FUN_140558c80(0x60);
      uStack_210 = CONCAT71(uStack_210._1_7_,1);
      local_218 = CONCAT71(local_218._1_7_,1);
      puStack_220 = (undefined8 *)((ulonglong)puStack_220._1_7_ << 8);
      local_228 = 0;
      puStack_230._0_1_ = 1;
      local_238._0_4_ = 0x48f;
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,1);
      uStack_240 = param_1;
      uVar3 = FUN_140087810(local_1e8,&local_90,&local_b0,8);
      FUN_140083a30(param_1,0x10,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238 = (ulonglong)local_238._4_4_ << 0x20;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x490,0x430);
      FUN_140083a30(param_1,0x10,uVar3);
      local_1e8 = FUN_140558c80(0x50);
      local_228 = CONCAT71(local_228._1_7_,1);
      puStack_230 = (undefined8 *)CONCAT71(puStack_230._1_7_,1);
      local_238 = local_238 & 0xffffffffffffff00;
      uStack_240 = (ulonglong *)CONCAT71(uStack_240._1_7_,1);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087a20(local_1e8,param_1,0x491,DAT_1407b9688);
      FUN_140083a30(param_1,0x10,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238 = local_238 & 0xffffffff00000000;
      uStack_240._0_4_ = 0;
      local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
      uVar3 = FUN_140087d40(local_1e8,param_1,0x492,0x430);
      FUN_140083a30(param_1,0x10,uVar3);
    }
  }
  lVar6 = FUN_140078de0(&DAT_1407bb5d0);
  if (lVar6 != 0) {
    uVar3 = FUN_140078de0(&DAT_1407bb5d0);
    FUN_140054de0(local_1b0,L"enchantingArea");
    puVar8 = (ulonglong *)FUN_14006d370(uVar3,local_1b0);
    thunk_FUN_140055150(local_1b0);
    if (puVar8 != (ulonglong *)0x0) {
      local_1f8 = local_1f8 & 0xffffffff00000000;
      local_1e8 = FUN_140558c80(0x58);
      local_200 = 0;
      local_208 = 0;
      uStack_210 = CONCAT71(uStack_210._1_7_,1);
      puStack_220 = (undefined8 *)puVar8[4];
      local_218 = puVar8[5];
      puStack_230 = (undefined8 *)puVar8[2];
      local_228 = puVar8[3];
      uStack_240 = (ulonglong *)*puVar8;
      local_238 = puVar8[1];
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,1);
      uVar3 = FUN_1400852f0(local_1e8,param_1,0x12,&local_1f8);
      FUN_140083780(param_1,uVar3);
      local_1e8 = FUN_140558c80(0x58);
      local_228 = CONCAT44(local_228._4_4_,0x17);
      puStack_230 = (undefined8 *)CONCAT44(puStack_230._4_4_,2);
      local_238._0_4_ = 1;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140086a00(local_1e8,param_1,0x49a,0x49b);
      FUN_140083a30(param_1,0x12,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x49c,0x430);
      FUN_140083a30(param_1,0x12,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x86a,0x430);
      FUN_140083a30(param_1,0x12,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x49d,0x430);
      FUN_140083a30(param_1,0x12,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x49e,0x430);
      FUN_140083a30(param_1,0x12,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x49f,0x430);
      FUN_140083a30(param_1,0x12,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238 = (ulonglong)local_238._4_4_ << 0x20;
      uStack_240._0_4_ = 0;
      local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
      uVar3 = FUN_140087d40(local_1e8,param_1,0x4a0,0x430);
      FUN_140083a30(param_1,0x12,uVar3);
    }
  }
  lVar6 = FUN_140078de0(&DAT_1407bb5d0);
  if (lVar6 != 0) {
    uVar3 = FUN_140078de0(&DAT_1407bb5d0);
    FUN_140054de0(local_1b0,L"anvilArea");
    puVar8 = (ulonglong *)FUN_14006d370(uVar3,local_1b0);
    thunk_FUN_140055150(local_1b0);
    if (puVar8 != (ulonglong *)0x0) {
      local_1f8 = local_1f8 & 0xffffffff00000000;
      local_1e8 = FUN_140558c80(0x58);
      local_200 = 0;
      local_208 = 0;
      uStack_210 = CONCAT71(uStack_210._1_7_,1);
      puStack_220 = (undefined8 *)puVar8[4];
      local_218 = puVar8[5];
      puStack_230 = (undefined8 *)puVar8[2];
      local_228 = puVar8[3];
      uStack_240 = (ulonglong *)*puVar8;
      local_238 = puVar8[1];
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,1);
      uVar3 = FUN_1400852f0(local_1e8,param_1,0x19,&local_1f8);
      FUN_140083780(param_1,uVar3);
      local_1e8 = FUN_140558c80(0x58);
      local_228 = CONCAT44(local_228._4_4_,0x2d);
      puStack_230 = (undefined8 *)CONCAT44(puStack_230._4_4_,2);
      local_238._0_4_ = 1;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140086a00(local_1e8,param_1,0x836,0x837);
      FUN_140083a30(param_1,0x19,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x838,0x430);
      FUN_140083a30(param_1,0x19,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x839,0x430);
      FUN_140083a30(param_1,0x19,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x83a,0x430);
      FUN_140083a30(param_1,0x19,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x83b,0x430);
      FUN_140083a30(param_1,0x19,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x83c,0x430);
      FUN_140083a30(param_1,0x19,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238 = (ulonglong)local_238._4_4_ << 0x20;
      uStack_240._0_4_ = 0;
      local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
      uVar3 = FUN_140087d40(local_1e8,param_1,0x83d,0x430);
      FUN_140083a30(param_1,0x19,uVar3);
    }
  }
  lVar6 = FUN_140078de0(&DAT_1407bb5d0);
  if (lVar6 != 0) {
    uVar3 = FUN_140078de0(&DAT_1407bb5d0);
    FUN_140054de0(local_1b0,L"tradingArea");
    puVar8 = (ulonglong *)FUN_14006d370(uVar3,local_1b0);
    thunk_FUN_140055150(local_1b0);
    if (puVar8 != (ulonglong *)0x0) {
      local_1f8 = local_1f8 & 0xffffffff00000000;
      local_1e8 = FUN_140558c80(0x58);
      local_200 = 0;
      local_208 = 0;
      uStack_210 = CONCAT71(uStack_210._1_7_,1);
      puStack_220 = (undefined8 *)puVar8[4];
      local_218 = puVar8[5];
      puStack_230 = (undefined8 *)puVar8[2];
      local_228 = puVar8[3];
      uStack_240 = (ulonglong *)*puVar8;
      local_238 = puVar8[1];
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,1);
      uVar3 = FUN_1400852f0(local_1e8,param_1,0x17,&local_1f8);
      FUN_140083780(param_1,uVar3);
      local_1e8 = FUN_140558c80(0x58);
      local_228 = CONCAT44(local_228._4_4_,0x2f);
      puStack_230 = (undefined8 *)CONCAT44(puStack_230._4_4_,2);
      local_238._0_4_ = 1;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140086a00(local_1e8,param_1,0x845,0x846);
      FUN_140083a30(param_1,0x17,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x847,0x430);
      FUN_140083a30(param_1,0x17,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x848,0x430);
      FUN_140083a30(param_1,0x17,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x849,0x430);
      FUN_140083a30(param_1,0x17,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x84a,0x430);
      FUN_140083a30(param_1,0x17,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238 = (ulonglong)local_238._4_4_ << 0x20;
      uStack_240._0_4_ = 0;
      local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
      uVar3 = FUN_140087d40(local_1e8,param_1,0x84b,0x430);
      FUN_140083a30(param_1,0x17,uVar3);
    }
  }
  lVar6 = FUN_140078de0(&DAT_1407bb5d0);
  if (lVar6 != 0) {
    uVar3 = FUN_140078de0(&DAT_1407bb5d0);
    FUN_140054de0(local_1b0,L"fireworksArea");
    puVar8 = (ulonglong *)FUN_14006d370(uVar3,local_1b0);
    thunk_FUN_140055150(local_1b0);
    if (puVar8 != (ulonglong *)0x0) {
      local_1f8 = local_1f8 & 0xffffffff00000000;
      local_1e8 = FUN_140558c80(0x58);
      local_200 = 0;
      local_208 = 0;
      uStack_210 = CONCAT71(uStack_210._1_7_,1);
      puStack_220 = (undefined8 *)puVar8[4];
      local_218 = puVar8[5];
      puStack_230 = (undefined8 *)puVar8[2];
      local_228 = puVar8[3];
      uStack_240 = (ulonglong *)*puVar8;
      local_238 = puVar8[1];
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,1);
      uVar3 = FUN_1400852f0(local_1e8,param_1,0x22,&local_1f8);
      FUN_140083780(param_1,uVar3);
      local_1e8 = FUN_140558c80(0x58);
      local_228 = CONCAT44(local_228._4_4_,0x2f);
      puStack_230 = (undefined8 *)CONCAT44(puStack_230._4_4_,2);
      local_238._0_4_ = 1;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140086a00(local_1e8,param_1,0x527,0x528);
      FUN_140083a30(param_1,0x22,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x529,0x430);
      FUN_140083a30(param_1,0x22,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x52a,0x430);
      FUN_140083a30(param_1,0x22,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238 = (ulonglong)local_238._4_4_ << 0x20;
      uStack_240._0_4_ = 0;
      local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
      uVar3 = FUN_140087d40(local_1e8,param_1,0x52b,0x430);
      FUN_140083a30(param_1,0x22,uVar3);
    }
  }
  if (DAT_1407bbac8 != 0) {
    uVar3 = FUN_140078de0(&DAT_1407bb5d0);
    FUN_140054de0(local_1b0,L"beaconArea");
    puVar8 = (ulonglong *)FUN_14006d370(uVar3,local_1b0);
    thunk_FUN_140055150(local_1b0);
    if (puVar8 != (ulonglong *)0x0) {
      local_1f8 = local_1f8 & 0xffffffff00000000;
      local_1e8 = FUN_140558c80(0x58);
      local_200 = 0;
      local_208 = 0;
      uStack_210 = CONCAT71(uStack_210._1_7_,1);
      puStack_220 = (undefined8 *)puVar8[4];
      local_218 = puVar8[5];
      puStack_230 = (undefined8 *)puVar8[2];
      local_228 = puVar8[3];
      uStack_240 = (ulonglong *)*puVar8;
      local_238 = puVar8[1];
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,1);
      uVar3 = FUN_1400852f0(local_1e8,param_1,0x20,&local_1f8);
      FUN_140083780(param_1,uVar3);
      local_1e8 = FUN_140558c80(0x58);
      local_228 = CONCAT44(local_228._4_4_,0x33);
      puStack_230 = (undefined8 *)CONCAT44(puStack_230._4_4_,2);
      local_238._0_4_ = 1;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140086a00(local_1e8,param_1,0x50f,0x510);
      FUN_140083a30(param_1,0x20,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x511,0x430);
      FUN_140083a30(param_1,0x20,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x512,0x430);
      FUN_140083a30(param_1,0x20,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238 = (ulonglong)local_238._4_4_ << 0x20;
      uStack_240._0_4_ = 0;
      local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
      uVar3 = FUN_140087d40(local_1e8,param_1,0x513,0x430);
      FUN_140083a30(param_1,0x20,uVar3);
    }
  }
  lVar6 = FUN_140078de0(&DAT_1407bb5d0);
  if (lVar6 != 0) {
    uVar3 = FUN_140078de0(&DAT_1407bb5d0);
    FUN_140054de0(local_1b0,L"hopperArea");
    puVar8 = (ulonglong *)FUN_14006d370(uVar3,local_1b0);
    thunk_FUN_140055150(local_1b0);
    if (puVar8 != (ulonglong *)0x0) {
      local_1f8 = local_1f8 & 0xffffffff00000000;
      local_1e8 = FUN_140558c80(0x58);
      local_200 = 0;
      local_208 = 0;
      uStack_210 = CONCAT71(uStack_210._1_7_,1);
      puStack_220 = (undefined8 *)puVar8[4];
      local_218 = puVar8[5];
      puStack_230 = (undefined8 *)puVar8[2];
      local_228 = puVar8[3];
      uStack_240 = (ulonglong *)*puVar8;
      local_238 = puVar8[1];
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,1);
      uVar3 = FUN_1400852f0(local_1e8,param_1,0x1e,&local_1f8);
      FUN_140083780(param_1,uVar3);
      local_1e8 = FUN_140558c80(0x58);
      local_228 = CONCAT44(local_228._4_4_,0x32);
      puStack_230 = (undefined8 *)CONCAT44(puStack_230._4_4_,2);
      local_238._0_4_ = 1;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140086a00(local_1e8,param_1,0x514,0x515);
      FUN_140083a30(param_1,0x1e,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x516,0x430);
      FUN_140083a30(param_1,0x1e,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x517,0x430);
      FUN_140083a30(param_1,0x1e,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x518,0x430);
      FUN_140083a30(param_1,0x1e,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x519,0x430);
      FUN_140083a30(param_1,0x1e,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x51a,0x430);
      FUN_140083a30(param_1,0x1e,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238 = (ulonglong)local_238._4_4_ << 0x20;
      uStack_240._0_4_ = 0;
      local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
      uVar3 = FUN_140087d40(local_1e8,param_1,0x51b,0x430);
      FUN_140083a30(param_1,0x1e,uVar3);
    }
  }
  lVar6 = FUN_140078de0(&DAT_1407bb5d0);
  if (lVar6 != 0) {
    uVar3 = FUN_140078de0(&DAT_1407bb5d0);
    FUN_140054de0(local_1b0,L"enderchestArea");
    puVar8 = (ulonglong *)FUN_14006d370(uVar3,local_1b0);
    thunk_FUN_140055150(local_1b0);
    if (puVar8 != (ulonglong *)0x0) {
      local_1f8 = local_1f8 & 0xffffffff00000000;
      local_1e8 = FUN_140558c80(0x58);
      local_200 = 0;
      local_208 = 0;
      uStack_210 = CONCAT71(uStack_210._1_7_,1);
      puStack_220 = (undefined8 *)puVar8[4];
      local_218 = puVar8[5];
      puStack_230 = (undefined8 *)puVar8[2];
      local_228 = puVar8[3];
      uStack_240 = (ulonglong *)*puVar8;
      local_238 = puVar8[1];
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,1);
      uVar3 = FUN_1400852f0(local_1e8,param_1,0x1b,&local_1f8);
      FUN_140083780(param_1,uVar3);
      local_1e8 = FUN_140558c80(0x58);
      local_228 = CONCAT44(local_228._4_4_,0x31);
      puStack_230 = (undefined8 *)CONCAT44(puStack_230._4_4_,2);
      local_238._0_4_ = 1;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140086a00(local_1e8,param_1,0x84c,0x84d);
      FUN_140083a30(param_1,0x1b,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x84e,0x430);
      FUN_140083a30(param_1,0x1b,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x84f,0x430);
      FUN_140083a30(param_1,0x1b,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238 = (ulonglong)local_238._4_4_ << 0x20;
      uStack_240._0_4_ = 0;
      local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
      uVar3 = FUN_140087d40(local_1e8,param_1,0x850,0x430);
      FUN_140083a30(param_1,0x1b,uVar3);
    }
  }
  lVar6 = FUN_140078de0(&DAT_1407bb5d0);
  if (lVar6 != 0) {
    uVar3 = FUN_140078de0(&DAT_1407bb5d0);
    FUN_140054de0(local_1b0,L"farmingArea");
    puVar8 = (ulonglong *)FUN_14006d370(uVar3,local_1b0);
    thunk_FUN_140055150(local_1b0);
    if (puVar8 != (ulonglong *)0x0) {
      local_1f8 = local_1f8 & 0xffffffff00000000;
      local_1e8 = FUN_140558c80(0x58);
      local_200 = 0;
      local_208 = 0;
      uStack_210 = CONCAT71(uStack_210._1_7_,1);
      puStack_220 = (undefined8 *)puVar8[4];
      local_218 = puVar8[5];
      puStack_230 = (undefined8 *)puVar8[2];
      local_228 = puVar8[3];
      uStack_240 = (ulonglong *)*puVar8;
      local_238 = puVar8[1];
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,1);
      uVar3 = FUN_1400852f0(local_1e8,param_1,0x14,&local_1f8);
      FUN_140083780(param_1,uVar3);
      local_1e8 = FUN_140558c80(0x58);
      local_228 = CONCAT44(local_228._4_4_,0x18);
      puStack_230 = (undefined8 *)CONCAT44(puStack_230._4_4_,2);
      local_238._0_4_ = 1;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140086a00(local_1e8,param_1,0x4c6,0x4c7);
      FUN_140083a30(param_1,0x14,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x4c8,0x430);
      FUN_140083a30(param_1,0x14,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x4c9,0x430);
      FUN_140083a30(param_1,0x14,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x4ca,0x430);
      FUN_140083a30(param_1,0x14,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x4cb,0x430);
      FUN_140083a30(param_1,0x14,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x86d,0x430);
      FUN_140083a30(param_1,0x14,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x4cc,0x430);
      FUN_140083a30(param_1,0x14,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x4cd,0x430);
      FUN_140083a30(param_1,0x14,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x4ce,0x430);
      FUN_140083a30(param_1,0x14,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x4cf,0x430);
      FUN_140083a30(param_1,0x14,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238 = (ulonglong)local_238._4_4_ << 0x20;
      uStack_240._0_4_ = 0;
      local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
      uVar3 = FUN_140087d40(local_1e8,param_1,0x4d0,0x430);
      FUN_140083a30(param_1,0x14,uVar3);
    }
  }
  lVar6 = FUN_140078de0(&DAT_1407bb5d0);
  if (lVar6 != 0) {
    uVar3 = FUN_140078de0(&DAT_1407bb5d0);
    FUN_140054de0(local_1b0,L"breedingArea");
    puVar8 = (ulonglong *)FUN_14006d370(uVar3,local_1b0);
    thunk_FUN_140055150(local_1b0);
    if (puVar8 != (ulonglong *)0x0) {
      local_1f8 = local_1f8 & 0xffffffff00000000;
      local_1e8 = FUN_140558c80(0x58);
      local_200 = 0;
      local_208 = 0;
      uStack_210 = CONCAT71(uStack_210._1_7_,1);
      puStack_220 = (undefined8 *)puVar8[4];
      local_218 = puVar8[5];
      puStack_230 = (undefined8 *)puVar8[2];
      local_228 = puVar8[3];
      uStack_240 = (ulonglong *)*puVar8;
      local_238 = puVar8[1];
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,1);
      uVar3 = FUN_1400852f0(local_1e8,param_1,0x15,&local_1f8);
      FUN_140083780(param_1,uVar3);
      local_1e8 = FUN_140558c80(0x58);
      local_228 = CONCAT44(local_228._4_4_,0x2b);
      puStack_230 = (undefined8 *)CONCAT44(puStack_230._4_4_,2);
      local_238._0_4_ = 1;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140086a00(local_1e8,param_1,0x4d1,0x4d2);
      FUN_140083a30(param_1,0x15,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x4d3,0x430);
      FUN_140083a30(param_1,0x15,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x4d4,0x430);
      FUN_140083a30(param_1,0x15,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x4d5,0x430);
      FUN_140083a30(param_1,0x15,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x4d6,0x430);
      FUN_140083a30(param_1,0x15,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x4d7,0x430);
      FUN_140083a30(param_1,0x15,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x86e,0x430);
      FUN_140083a30(param_1,0x15,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x4d8,0x430);
      FUN_140083a30(param_1,0x15,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x86c,0x430);
      FUN_140083a30(param_1,0x15,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238 = (ulonglong)local_238._4_4_ << 0x20;
      uStack_240._0_4_ = 0;
      local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
      uVar3 = FUN_140087d40(local_1e8,param_1,0x4d9,0x430);
      FUN_140083a30(param_1,0x15,uVar3);
    }
  }
  lVar6 = FUN_140078de0(&DAT_1407bb5d0);
  if (lVar6 != 0) {
    uVar3 = FUN_140078de0(&DAT_1407bb5d0);
    FUN_140054de0(local_1b0,L"golemArea");
    puVar8 = (ulonglong *)FUN_14006d370(uVar3,local_1b0);
    thunk_FUN_140055150(local_1b0);
    if (puVar8 != (ulonglong *)0x0) {
      local_1f8 = local_1f8 & 0xffffffff00000000;
      local_1e8 = FUN_140558c80(0x58);
      local_200 = 0;
      local_208 = 0;
      uStack_210 = CONCAT71(uStack_210._1_7_,1);
      puStack_220 = (undefined8 *)puVar8[4];
      local_218 = puVar8[5];
      puStack_230 = (undefined8 *)puVar8[2];
      local_228 = puVar8[3];
      uStack_240 = (ulonglong *)*puVar8;
      local_238 = puVar8[1];
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,1);
      uVar3 = FUN_1400852f0(local_1e8,param_1,0x16,&local_1f8);
      FUN_140083780(param_1,uVar3);
      local_1e8 = FUN_140558c80(0x58);
      local_228 = CONCAT44(local_228._4_4_,0x2c);
      puStack_230 = (undefined8 *)CONCAT44(puStack_230._4_4_,2);
      local_238._0_4_ = 1;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140086a00(local_1e8,param_1,0x4da,0x4db);
      FUN_140083a30(param_1,0x16,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x4dc,0x430);
      FUN_140083a30(param_1,0x16,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x4dd,0x430);
      FUN_140083a30(param_1,0x16,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238._0_4_ = 0;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248._0_1_ = 1;
      uVar3 = FUN_140087d40(local_1e8,param_1,0x4de,0x430);
      FUN_140083a30(param_1,0x16,uVar3);
      local_1e8 = FUN_140558c80(0x88);
      local_238 = (ulonglong)local_238._4_4_ << 0x20;
      uStack_240 = (ulonglong *)((ulonglong)uStack_240 & 0xffffffff00000000);
      local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
      uVar3 = FUN_140087d40(local_1e8,param_1,0x4df,0x430);
      FUN_140083a30(param_1,0x16,uVar3);
    }
  }
  return param_1;
}



// ===== FUN_140078df0 @ 0x140078df0 [ui] =====

undefined8 * FUN_140078df0(undefined8 *param_1,uint param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  *param_1 = MultiPlayerGameMode::vftable;
  param_1[4] = 0;
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  param_1[3] = 0;
  plVar4 = (longlong *)param_1[4];
  param_1[4] = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[7] = DAT_1407b94d0;
  param_1[9] = param_3;
  param_1[8] = param_4;
  *(uint *)(param_1 + 0xc) = param_2;
  *param_1 = FullTutorialMode::vftable;
  uVar6 = FUN_140558c80(0x10a8);
  uVar6 = FUN_1400742a0(uVar6,param_2,0);
  param_1[0xb] = uVar6;
  if (DAT_1407bb76e != '\0') {
    *(byte *)(param_3 + 0x310) = *(byte *)(param_3 + 0x310) | (byte)(1 << (param_2 & 0x1f));
  }
  return param_1;
}



// ===== FUN_1400899e0 @ 0x1400899e0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1400899e0(undefined8 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [56];
  undefined8 local_60;
  undefined **local_58;
  undefined4 local_50;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = DAT_1407502c0 ^ (ulonglong)auStack_d8;
  *param_1 = 0;
  param_1[1] = 0;
  local_58 = std::
             _Func_impl_no_alloc<class_<lambda_ddaf759f4cf7af3dcc7490693c4f1ac0>,class_std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>_>
             ::vftable;
  local_20 = &local_58;
  local_a8 = param_1;
  local_50 = param_2;
  uVar7 = FUN_140558c80(0x88);
  local_b8 = local_98;
  local_60 = 0;
  local_a0 = uVar7;
  if (local_20 != (undefined ***)0x0) {
    local_60 = (*(code *)**local_20)(local_20,local_98);
  }
  uVar7 = FUN_140089790(uVar7,local_98);
  puVar8 = (undefined8 *)FUN_14008a140(&local_b8,uVar7);
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
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_b0 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0);
      }
    }
  }
  if (local_20 != (undefined ***)0x0) {
    (*(code *)(*local_20)[4])(local_20,local_20 != &local_58);
  }
  return param_1;
}



// ===== FUN_1400929a0 @ 0x1400929a0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1400929a0(longlong *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined **ppuVar8;
  undefined8 *******pppppppuVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStackY_178 [32];
  undefined8 *local_138;
  longlong *local_130;
  longlong local_128;
  longlong lStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 ******local_108 [2];
  longlong local_f8;
  ulonglong local_f0;
  ulonglong local_e8 [4];
  undefined1 local_c8 [32];
  short local_a8 [64];
  ulonglong local_28;
  
  local_28 = DAT_1407502c0 ^ (ulonglong)auStackY_178;
  if (param_2 == '\0') {
    (**(code **)(*param_1 + 0x80))(param_1,&PTR_140610690);
    return;
  }
  if (*(int *)((longlong)(int)param_1[0x7e5] * 0x194 + 8 + (longlong)param_1) < 2) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)((longlong)param_1 +
                     (longlong)*(int *)((longlong)param_1 + 0x3f2c) * 4 + 0x3f4c);
  }
  plVar6 = *(longlong **)
            ((longlong)
             *(int *)((longlong)param_1 +
                     ((longlong)(int)param_1[0x7e5] * 0x65 + (longlong)iVar11) * 4 + 0x10) * 0x40 +
             0x20 + *(longlong *)(DAT_1407b9810 + 8));
  local_128 = 0;
  lStack_120 = 0;
  (**(code **)(*plVar6 + 8))(plVar6,&local_138,&local_128);
  lVar10 = *(longlong *)(DAT_1407bdbd0 + (ulonglong)*(uint *)(local_138 + 4) * 8);
  iVar11 = *(int *)(lVar10 + 0x20);
  iVar2 = *(int *)(local_138 + 6);
  if (iVar11 < 0x100) {
    plVar6 = *(longlong **)(DAT_1407b4350 + (longlong)iVar11 * 8);
    iVar11 = *(int *)((longlong)plVar6 + 0x3c);
    uVar5 = (**(code **)(*plVar6 + 0x2e0))();
  }
  else {
    iVar11 = *(int *)(lVar10 + 0x38);
    uVar5 = (**(code **)*local_138)(local_138);
  }
  if ((iVar11 == 0x10) && (iVar2 == 0)) {
    uVar5 = 0x140;
  }
  else if ((int)uVar5 < 0) {
    (**(code **)(*param_1 + 0x80))(param_1,&PTR_140610690);
    goto LAB_140092d34;
  }
  if (*DAT_1407bb780 == '\0') {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((ulonglong)uVar5 <
      (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - *(longlong *)(DAT_1407bb780 + 0x48) >> 5)) {
    ppuVar8 = (undefined **)((ulonglong)uVar5 * 0x20 + *(longlong *)(DAT_1407bb780 + 0x48));
    if ((undefined *)0x7 < ppuVar8[3]) {
      ppuVar8 = (undefined **)*ppuVar8;
    }
  }
  else {
    ppuVar8 = &PTR_140610690;
  }
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_e8[2] = 0;
  local_e8[3] = 0;
  lVar10 = -1;
  do {
    lVar10 = lVar10 + 1;
  } while (*(short *)((longlong)ppuVar8 + lVar10 * 2) != 0);
  FUN_140054cf0(local_e8);
  (**(code **)*param_1)(param_1);
  FUN_140039b00(&DAT_1407bb5d0,local_108);
  if (7 < local_e8[3]) {
    if ((0xfff < local_e8[3] * 2 + 2) && (0x1f < (local_e8[0] - *(longlong *)(local_e8[0] - 8)) - 8)
       ) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_e8[2] = 0;
  local_e8[3] = 7;
  local_e8[0] = local_e8[0] & 0xffffffffffff0000;
  if ((*(char *)((longlong)param_1 + 0x3f79) == '\0') &&
     (cVar4 = FUN_140004470(&DAT_140784700), cVar4 == '\0')) {
    FUN_140004470(&DAT_140784700);
  }
  lVar10 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar4 = (**(code **)**(undefined8 **)(lVar10 + 0xb8))();
  plVar6 = DAT_1407915a8;
  if (cVar4 != '\0') {
    plVar6 = *(longlong **)(lVar10 + 0xb8);
  }
  lVar10 = (**(code **)(*plVar6 + 0xd8))();
  FUN_1400547f0(local_a8,0x40,L"<font color=\"#%08x\"><P ALIGN=LEFT>",
                *(undefined4 *)(lVar10 + 0x470));
  uVar7 = 0xffffffffffffffff;
  do {
    uVar7 = uVar7 + 1;
  } while (local_a8[uVar7] != 0);
  if (0x7ffffffffffffffeU - local_f8 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_140054e40();
  }
  FUN_140048da0(local_c8);
  plVar6 = (longlong *)FUN_140048d20(local_c8,L"</P>");
  local_128 = *plVar6;
  lStack_120 = plVar6[1];
  local_118 = (undefined4)plVar6[2];
  uStack_114 = *(undefined4 *)((longlong)plVar6 + 0x14);
  uStack_110 = (undefined4)plVar6[3];
  uStack_10c = *(undefined4 *)((longlong)plVar6 + 0x1c);
  plVar6[2] = 0;
  plVar6[3] = 7;
  *(undefined2 *)plVar6 = 0;
  FUN_1400546d0(local_108,&local_128);
  if (7 < CONCAT44(uStack_10c,uStack_110)) {
    if ((0xfff < CONCAT44(uStack_10c,uStack_110) * 2 + 2) &&
       (0x1f < (local_128 - *(longlong *)(local_128 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  FUN_140055150(local_c8);
  pppppppuVar9 = local_108;
  if (7 < local_f0) {
    pppppppuVar9 = (undefined8 *******)local_108[0];
  }
  (**(code **)(*param_1 + 0x80))(param_1,pppppppuVar9);
  FUN_140055150(local_108);
LAB_140092d34:
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_130 + 1;
    lVar10 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar1 = (int *)((longlong)local_130 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_130 + 8))(local_130);
      }
    }
  }
  return;
}



// ===== FUN_1400abdf0 @ 0x1400abdf0 [ui] =====

void FUN_1400abdf0(longlong param_1)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  char local_res8 [32];
  
  *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
  plVar8 = (longlong *)(param_1 + 0x70);
  lVar9 = *plVar8;
  uVar4 = 0;
  bVar5 = (lVar9 != 0) + 1;
  if (*(longlong *)(param_1 + 0x80) == 0) {
    bVar5 = lVar9 != 0;
  }
  bVar1 = bVar5 + 1;
  if (*(longlong *)(param_1 + 0x90) == 0) {
    bVar1 = bVar5;
  }
  bVar5 = bVar1 + 1;
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    bVar5 = bVar1;
  }
  if (bVar5 != 3) {
    if (bVar5 == 1) {
      if (lVar9 != 0) {
        *(undefined4 *)(lVar9 + 0x59c) = 0;
      }
      if (*(longlong *)(param_1 + 0x80) != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x59c) = 0;
      }
      if (*(longlong *)(param_1 + 0x90) != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x59c) = 0;
      }
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x59c) = 0;
      }
      goto LAB_1400ac109;
    }
    if (bVar5 == 2) {
      iVar6 = 1;
      lVar9 = 4;
      do {
        if (*plVar8 != 0) {
          iVar2 = iVar6 + 2;
          if ((*(byte *)(DAT_1407bb7b0 + 7) & 1) == 0) {
            iVar2 = iVar6;
          }
          iVar6 = iVar6 + 1;
          *(int *)(*plVar8 + 0x59c) = iVar2;
        }
        plVar8 = plVar8 + 2;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      goto LAB_1400ac109;
    }
    if (bVar5 < 3) goto LAB_1400ac109;
  }
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  if (lVar9 != 0) {
    if (DAT_1407bb76c == '\0') {
      *(undefined4 *)(lVar9 + 0x59c) = 0;
    }
    else if (*(int *)(lVar9 + 0x59c) - 5U < 4) {
      (&stack0x00000003)[*(int *)(lVar9 + 0x59c)] = 1;
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x80);
  if (lVar9 != 0) {
    if (DAT_1407bb76c == '\0') {
      *(undefined4 *)(lVar9 + 0x59c) = 0;
    }
    else if (*(int *)(lVar9 + 0x59c) - 5U < 4) {
      (&stack0x00000003)[*(int *)(lVar9 + 0x59c)] = 1;
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x90);
  if (lVar9 != 0) {
    if (DAT_1407bb76c == '\0') {
      *(undefined4 *)(lVar9 + 0x59c) = 0;
    }
    else if (*(int *)(lVar9 + 0x59c) - 5U < 4) {
      (&stack0x00000003)[*(int *)(lVar9 + 0x59c)] = 1;
    }
  }
  lVar9 = *(longlong *)(param_1 + 0xa0);
  if (lVar9 != 0) {
    if (DAT_1407bb76c == '\0') {
      *(undefined4 *)(lVar9 + 0x59c) = 0;
    }
    else if (*(int *)(lVar9 + 0x59c) - 5U < 4) {
      (&stack0x00000003)[*(int *)(lVar9 + 0x59c)] = 1;
    }
  }
  lVar9 = *plVar8;
  if ((lVar9 != 0) &&
     ((uVar3 = uVar4, uVar7 = uVar4, *(int *)(lVar9 + 0x59c) < 5 || (8 < *(int *)(lVar9 + 0x59c)))))
  {
    do {
      iVar6 = (int)uVar7;
      if (local_res8[uVar3] == '\0') {
        *(int *)(lVar9 + 0x59c) = iVar6 + 5;
        local_res8[iVar6] = '\x01';
        break;
      }
      uVar3 = uVar3 + 1;
      uVar7 = (ulonglong)(iVar6 + 1);
    } while ((longlong)uVar3 < 4);
  }
  lVar9 = *(longlong *)(param_1 + 0x80);
  if ((lVar9 != 0) &&
     ((uVar3 = uVar4, uVar7 = uVar4, *(int *)(lVar9 + 0x59c) < 5 || (8 < *(int *)(lVar9 + 0x59c)))))
  {
    do {
      iVar6 = (int)uVar7;
      if (local_res8[uVar3] == '\0') {
        *(int *)(lVar9 + 0x59c) = iVar6 + 5;
        local_res8[iVar6] = '\x01';
        break;
      }
      uVar3 = uVar3 + 1;
      uVar7 = (ulonglong)(iVar6 + 1);
    } while ((longlong)uVar3 < 4);
  }
  lVar9 = *(longlong *)(param_1 + 0x90);
  if ((lVar9 != 0) &&
     ((uVar3 = uVar4, uVar7 = uVar4, *(int *)(lVar9 + 0x59c) < 5 || (8 < *(int *)(lVar9 + 0x59c)))))
  {
    do {
      iVar6 = (int)uVar7;
      if (local_res8[uVar3] == '\0') {
        *(int *)(lVar9 + 0x59c) = iVar6 + 5;
        local_res8[iVar6] = '\x01';
        break;
      }
      uVar3 = uVar3 + 1;
      uVar7 = (ulonglong)(iVar6 + 1);
    } while ((longlong)uVar3 < 4);
  }
  lVar9 = *(longlong *)(param_1 + 0xa0);
  if ((lVar9 != 0) &&
     ((uVar3 = uVar4, *(int *)(lVar9 + 0x59c) < 5 || (8 < *(int *)(lVar9 + 0x59c))))) {
    do {
      iVar6 = (int)uVar3;
      if (local_res8[uVar4] == '\0') {
        *(int *)(lVar9 + 0x59c) = iVar6 + 5;
        local_res8[iVar6] = '\x01';
        break;
      }
      uVar4 = uVar4 + 1;
      uVar3 = (ulonglong)(iVar6 + 1);
    } while ((longlong)uVar4 < 4);
  }
  if (local_res8[0] == '\0') {
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  if (local_res8[1] == '\0') {
    *(undefined4 *)(param_1 + 0x140) = 1;
  }
  if (local_res8[2] == '\0') {
    *(undefined4 *)(param_1 + 0x140) = 2;
  }
  if (local_res8[3] == '\0') {
    *(undefined4 *)(param_1 + 0x140) = 3;
  }
LAB_1400ac109:
  if (DAT_1407bb76c == '\0') {
    return;
  }
  FUN_140268580(&DAT_1407bc300);
  return;
}



// ===== FUN_1400ac410 @ 0x1400ac410 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

longlong *
FUN_1400ac410(longlong param_1,longlong *param_2,int param_3,undefined8 *param_4,undefined4 param_5,
             int param_6,longlong *param_7,longlong param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *******pppppppuVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStackY_e8 [32];
  undefined4 local_b4;
  longlong *local_b0;
  longlong local_a8;
  undefined8 *local_98;
  longlong *plStack_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 *******local_78 [2];
  undefined8 local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1407502c0 ^ (ulonglong)auStackY_e8;
  lVar8 = (longlong)param_3;
  local_a8 = param_8;
  if (param_7 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  if (param_7 != *(longlong **)(param_1 + 0x120 + lVar8 * 8)) goto LAB_1400ac88c;
  local_b4 = 0;
  plVar14 = (longlong *)((lVar8 + 7) * 0x10 + param_1);
  if ((*plVar14 != 0) && (*(longlong *)(param_1 + 0xb0 + lVar8 * 8) == 0)) {
    local_b4 = *(undefined4 *)(*plVar14 + 0x59c);
  }
  local_b0 = param_2;
  FUN_140055000(local_78,*(undefined8 *)(param_1 + 0x170));
  if (*(undefined8 **)(param_1 + 0x170) != param_4) {
    puVar4 = param_4 + 2;
    if (7 < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    FUN_1400549d0(*(undefined8 **)(param_1 + 0x170),param_4,*puVar4);
  }
  *(undefined8 *)(param_1 + 0x120 + lVar8 * 8) = 0;
  plVar1 = (longlong *)(param_1 + 0x40);
  if (param_8 == 0) {
    plVar9 = *(longlong **)(param_1 + 0x60);
    if (param_6 == -1) {
      *plVar1 = plVar9[1];
      lVar13 = plVar9[1];
    }
    else if (param_6 == 1) {
      *plVar1 = plVar9[2];
      lVar13 = plVar9[2];
    }
    else {
      *plVar1 = *plVar9;
      lVar13 = *plVar9;
    }
    local_b0 = param_7;
    puVar4 = *(undefined8 **)(lVar13 + 0x2e8);
    if (puVar4 == *(undefined8 **)(lVar13 + 0x2f0)) {
      FUN_1400491a0(lVar13 + 0x2e0,puVar4,&local_b0);
    }
    else {
      *puVar4 = param_7;
      *(longlong *)(lVar13 + 0x2e8) = *(longlong *)(lVar13 + 0x2e8) + 8;
    }
  }
  else {
    *plVar1 = local_a8;
  }
  if (DAT_1407bb76e == '\0') {
    if (DAT_1407baaa8 != '\0') {
      local_98 = (undefined8 *)FUN_140558c80(0x68);
      plVar9 = (longlong *)FUN_1400551d0(local_98,param_3,param_1);
      goto LAB_1400ac5fb;
    }
    plVar9 = (longlong *)FUN_140558c80(0x68);
    local_b0 = plVar9;
    FUN_140078df0(plVar9,param_3,param_1);
    *plVar9 = (longlong)TrialMode::vftable;
    local_98 = (undefined8 *)FUN_140558c80(0x10a8);
    lVar13 = FUN_1400742a0(local_98,param_3,1);
    plVar9[0xb] = lVar13;
    *(longlong **)(param_1 + 0xb0 + lVar8 * 8) = plVar9;
  }
  else {
    local_b0 = (longlong *)FUN_140558c80(0x68);
    plVar9 = (longlong *)FUN_140078df0(local_b0,param_3,param_1);
LAB_1400ac5fb:
    *(longlong **)(param_1 + 0xb0 + lVar8 * 8) = plVar9;
  }
  uVar10 = (**(code **)(*plVar9 + 0x50))(plVar9,&local_98,*plVar1);
  FUN_14008db60(plVar14,uVar10);
  lVar13 = -1;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_90 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar2 = (int *)((longlong)plStack_90 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90);
      }
    }
  }
  FUN_140070df0();
  uVar10 = FUN_140070df0();
  uVar10 = FUN_140070d40(uVar10,param_3);
  plVar9 = (longlong *)(**(code **)(*DAT_140790368 + 0x50))(DAT_140790368,param_3);
  if ((plVar9 == (longlong *)0x0) || (cVar7 = (**(code **)(*plVar9 + 0x40))(plVar9), cVar7 == '\0'))
  {
    uVar11 = FUN_140070df0();
  }
  else {
    uVar11 = 0xe000d45248242f2e;
  }
  *(undefined8 *)(*plVar14 + 0x518) = uVar11;
  *(undefined8 *)(*plVar14 + 0x520) = uVar10;
  *(undefined1 *)(*plVar14 + 0x529) = 0;
  if (param_3 - 1U < 3) {
    if (((&DAT_1407a4c00)[lVar8 * 0x2c] == 0) || ((&DAT_1407a4bf1)[lVar8 * 0x58] != '\0'))
    goto LAB_1400ac726;
    do {
      lVar13 = lVar13 + 1;
    } while ((&DAT_1407a4c00 + lVar8 * 0x2c)[lVar13] != 0);
  }
  else {
LAB_1400ac726:
    do {
      lVar13 = lVar13 + 1;
    } while ((&DAT_1407aaa78)[lVar13] != 0);
  }
  local_80 = 0;
  local_88 = 0;
  plStack_90 = (longlong *)0x0;
  local_98 = (undefined8 *)0x0;
  FUN_140054cf0(&local_98);
  FUN_1400546d0(*plVar14 + 0x438,&local_98);
  if (7 < local_80) {
    if ((0xfff < local_80 * 2 + 2) && (0x1f < (ulonglong)((longlong)local_98 + (-8 - local_98[-1])))
       ) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  *(undefined4 *)(*plVar14 + 0x59c) = local_b4;
  if (local_a8 == 0) {
    plVar9 = (longlong *)*plVar1;
    pcVar5 = *(code **)(*plVar9 + 0x128);
    if (plVar14[1] != 0) {
      LOCK();
      piVar2 = (int *)(plVar14[1] + 8);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    local_98 = (undefined8 *)*plVar14;
    plStack_90 = (longlong *)plVar14[1];
    (*pcVar5)(plVar9,&local_98);
  }
  *(undefined4 *)(*plVar14 + 0x5ec) = param_5;
  if (*(longlong *)(*plVar14 + 0x558) != 0) {
    thunk_FUN_1401fe000(*(longlong *)(*plVar14 + 0x558),0x18);
  }
  local_98 = (undefined8 *)FUN_140558c80(0x18);
  *local_98 = Input::vftable;
  local_98[1] = 0;
  *(undefined4 *)(local_98 + 2) = 0;
  *(undefined2 *)((longlong)local_98 + 0x14) = 0;
  *(undefined8 **)(*plVar14 + 0x558) = local_98;
  (**(code **)(*(longlong *)*plVar14 + 0x18))();
  FUN_140124c30(*(undefined8 *)(param_1 + 0x48),param_3,*plVar1);
  *(longlong *)(*plVar14 + 0x58) = *plVar1;
  if ((undefined8 ********)*(undefined8 ********)(param_1 + 0x170) != local_78) {
    pppppppuVar12 = local_78;
    if (7 < local_60) {
      pppppppuVar12 = local_78[0];
    }
    FUN_1400549d0(*(undefined8 ********)(param_1 + 0x170),pppppppuVar12,local_68);
  }
  FUN_1400abdf0(param_1);
  FUN_140055150(local_78);
LAB_1400ac88c:
  lVar8 = lVar8 + 7;
  *param_2 = 0;
  param_2[1] = 0;
  lVar13 = *(longlong *)(param_1 + 8 + lVar8 * 0x10);
  if (lVar13 != 0) {
    LOCK();
    piVar2 = (int *)(lVar13 + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *param_2 = *(longlong *)(param_1 + lVar8 * 0x10);
  param_2[1] = *(longlong *)(param_1 + 8 + lVar8 * 0x10);
  return param_2;
}



// ===== FUN_1400acb80 @ 0x1400acb80 [ui] =====

void FUN_1400acb80(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 local_res10 [2];
  longlong local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  lVar10 = (longlong)param_2;
  if (*(longlong *)(param_1 + 0xb0 + lVar10 * 8) == 0) {
    lVar7 = *(longlong *)(param_1 + 0x120 + lVar10 * 8);
    if (lVar7 != 0) {
      local_res10[0] = 1;
      plVar8 = (longlong *)FUN_1400b56f0(local_48,local_res10);
      local_58 = *plVar8;
      plStack_50 = (longlong *)plVar8[1];
      *plVar8 = 0;
      plVar8[1] = 0;
      FUN_1400e8fc0(lVar7,&local_58);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_40 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_40 + 8))(local_40);
          }
        }
      }
      if (*(longlong *)(param_1 + 0x120 + lVar10 * 8) != 0) {
        FUN_140072550();
      }
      *(undefined8 *)(param_1 + 0x120 + lVar10 * 8) = 0;
      (**(code **)(*DAT_140790368 + 0x48))(DAT_140790368,param_2);
    }
  }
  else {
    plVar11 = (longlong *)((lVar10 + 7) * 0x10 + param_1);
    plVar8 = *(longlong **)(param_1 + 0x60);
    if (*(int *)(*plVar11 + 0x184) == -1) {
      lVar7 = plVar8[1];
    }
    else if (*(int *)(*plVar11 + 0x184) == 1) {
      lVar7 = plVar8[2];
    }
    else {
      lVar7 = *plVar8;
    }
    if (*(char *)(lVar7 + 0x268) != '\0') {
      if (plVar11[1] != 0) {
        LOCK();
        piVar1 = (int *)(plVar11[1] + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      lVar7 = *plVar11;
      plVar8 = (longlong *)plVar11[1];
      puVar4 = *(undefined8 **)(param_1 + 0x60);
      if (*(int *)(lVar7 + 0x184) == -1) {
        uVar9 = puVar4[1];
      }
      else if (*(int *)(lVar7 + 0x184) == 1) {
        uVar9 = puVar4[2];
      }
      else {
        uVar9 = *puVar4;
      }
      local_58 = lVar7;
      plStack_50 = plVar8;
      FUN_1400fe360(uVar9,*(undefined8 *)(lVar7 + 0x660),1);
      if (*(longlong *)(lVar7 + 0x660) != 0) {
        FUN_140072550();
      }
      *(undefined8 *)(lVar7 + 0x660) = 0;
      (**(code **)(*DAT_140790368 + 0x48))(DAT_140790368,param_2);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar8 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8);
          }
        }
      }
    }
    if (*(int *)(*plVar11 + 0x184) == -1) {
      plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8);
    }
    else if (*(int *)(*plVar11 + 0x184) == 1) {
      plVar8 = (longlong *)(*(undefined8 **)(param_1 + 0x60))[2];
    }
    else {
      plVar8 = (longlong *)**(undefined8 **)(param_1 + 0x60);
    }
    pcVar5 = *(code **)(*plVar8 + 0x148);
    if (plVar11[1] != 0) {
      LOCK();
      piVar1 = (int *)(plVar11[1] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_58 = *plVar11;
    plStack_50 = (longlong *)plVar11[1];
    (*pcVar5)(0,&local_58);
    FUN_1400b52f0(param_1,param_2);
    lVar7 = *(longlong *)(param_1 + 0xb0 + lVar10 * 8);
    if (lVar7 != 0) {
      plVar8 = *(longlong **)(lVar7 + 0x20);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar8 + 1;
        lVar6 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8);
          }
        }
      }
      thunk_FUN_1401fe000(lVar7,0x58);
    }
    *(undefined8 *)(param_1 + 0xb0 + lVar10 * 8) = 0;
  }
  lVar10 = lVar10 + 7;
  *(undefined8 *)(param_1 + lVar10 * 0x10) = 0;
  plVar8 = *(longlong **)(param_1 + 8 + lVar10 * 0x10);
  *(undefined8 *)(param_1 + 8 + lVar10 * 0x10) = 0;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar8 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  if (param_2 != 0) {
    if (DAT_14079038a != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"------------------DisableUpdateThread--------------------\n");
    }
    FUN_140124c30(*(undefined8 *)(param_1 + 0x48),param_2,0);
    if (DAT_14079038a == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"------------------EnableUpdateThread--------------------\n");
    }
    FUN_1402675a0(&DAT_1407bc300,param_2,1);
    FUN_1400abdf0(param_1);
  }
  return;
}



// ===== FUN_1400acf40 @ 0x1400acf40 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1400acf40(undefined8 *param_1,int param_2)

{
  ulonglong *****pppppuVar1;
  longlong lVar2;
  ulonglong ******ppppppuVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [16];
  ulonglong ******ppppppuVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar26 [16];
  undefined1 auVar34 [16];
  undefined1 auStackY_88 [32];
  ulonglong *****local_50;
  undefined8 uStack_48;
  longlong local_40;
  ulonglong uStack_38;
  undefined1 (*local_30 [3]) [16];
  ulonglong local_18;
  ulonglong local_10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 uVar42;
  
  local_10 = DAT_1407502c0 ^ (ulonglong)auStackY_88;
  uVar8 = 0;
  param_1[(longlong)param_2 + 0x16] = *param_1;
  uVar9 = FUN_140045590(param_1 + ((longlong)param_2 + 7) * 2,param_1 + 10);
  lVar2 = FUN_1402fc1b0(uVar9,0);
  local_50 = (ulonglong *****)0x0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (*(char *)(lVar2 + lVar5) != '\0');
  FUN_1400548d0(&local_50,lVar2);
  FUN_140054090(local_30,local_40);
  pauVar6 = (undefined1 (*) [16])local_30;
  if (7 < local_18) {
    pauVar6 = local_30[0];
  }
  ppppppuVar7 = &local_50;
  if (0xf < uStack_38) {
    ppppppuVar7 = (ulonglong ******)local_50;
  }
  ppppppuVar7 = (ulonglong ******)(local_40 + (longlong)ppppppuVar7);
  ppppppuVar3 = &local_50;
  if (0xf < uStack_38) {
    ppppppuVar3 = (ulonglong ******)local_50;
  }
  uVar4 = (longlong)ppppppuVar7 - (longlong)ppppppuVar3;
  if (ppppppuVar7 < ppppppuVar3) {
    uVar4 = uVar8;
  }
  if (((uVar4 != 0) && (0x1f < uVar4)) &&
     (((undefined1 (*) [16])((longlong)ppppppuVar3 + (uVar4 - 1)) < pauVar6 ||
      ((ulonglong ******)((longlong)pauVar6[-1] + uVar4 * 2 + 0xe) < ppppppuVar3)))) {
    do {
      pppppuVar1 = *ppppppuVar3;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x38);
      auVar16._8_6_ = 0;
      auVar16._0_8_ = pppppuVar1;
      auVar16[0xe] = uVar42;
      auVar16[0xf] = uVar42;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x30);
      auVar15._14_2_ = auVar16._14_2_;
      auVar15._8_5_ = 0;
      auVar15._0_8_ = pppppuVar1;
      auVar15[0xd] = uVar42;
      auVar14._13_3_ = auVar15._13_3_;
      auVar14._8_4_ = 0;
      auVar14._0_8_ = pppppuVar1;
      auVar14[0xc] = uVar42;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x28);
      auVar13._12_4_ = auVar14._12_4_;
      auVar13._8_3_ = 0;
      auVar13._0_8_ = pppppuVar1;
      auVar13[0xb] = uVar42;
      auVar12._11_5_ = auVar13._11_5_;
      auVar12._8_2_ = 0;
      auVar12._0_8_ = pppppuVar1;
      auVar12[10] = uVar42;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x20);
      auVar11._10_6_ = auVar12._10_6_;
      auVar11[8] = 0;
      auVar11._0_8_ = pppppuVar1;
      auVar11[9] = uVar42;
      auVar10._9_7_ = auVar11._9_7_;
      auVar10[8] = uVar42;
      auVar10._0_8_ = pppppuVar1;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x18);
      auVar17._8_8_ = auVar10._8_8_;
      auVar17[7] = uVar42;
      auVar17[6] = uVar42;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x10);
      auVar17[5] = uVar42;
      auVar17[4] = uVar42;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 8);
      auVar17[3] = uVar42;
      auVar17[2] = uVar42;
      auVar17[0] = SUB81(pppppuVar1,0);
      auVar17[1] = auVar17[0];
      auVar17 = psraw(auVar17,8);
      *pauVar6 = auVar17;
      pppppuVar1 = ppppppuVar3[1];
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x38);
      auVar25._8_6_ = 0;
      auVar25._0_8_ = pppppuVar1;
      auVar25[0xe] = uVar42;
      auVar25[0xf] = uVar42;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x30);
      auVar24._14_2_ = auVar25._14_2_;
      auVar24._8_5_ = 0;
      auVar24._0_8_ = pppppuVar1;
      auVar24[0xd] = uVar42;
      auVar23._13_3_ = auVar24._13_3_;
      auVar23._8_4_ = 0;
      auVar23._0_8_ = pppppuVar1;
      auVar23[0xc] = uVar42;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x28);
      auVar22._12_4_ = auVar23._12_4_;
      auVar22._8_3_ = 0;
      auVar22._0_8_ = pppppuVar1;
      auVar22[0xb] = uVar42;
      auVar21._11_5_ = auVar22._11_5_;
      auVar21._8_2_ = 0;
      auVar21._0_8_ = pppppuVar1;
      auVar21[10] = uVar42;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x20);
      auVar20._10_6_ = auVar21._10_6_;
      auVar20[8] = 0;
      auVar20._0_8_ = pppppuVar1;
      auVar20[9] = uVar42;
      auVar19._9_7_ = auVar20._9_7_;
      auVar19[8] = uVar42;
      auVar19._0_8_ = pppppuVar1;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x18);
      auVar18._8_8_ = auVar19._8_8_;
      auVar18[7] = uVar42;
      auVar18[6] = uVar42;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x10);
      auVar18[5] = uVar42;
      auVar18[4] = uVar42;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 8);
      auVar18[3] = uVar42;
      auVar18[2] = uVar42;
      auVar18[0] = SUB81(pppppuVar1,0);
      auVar18[1] = auVar18[0];
      auVar17 = psraw(auVar18,8);
      pauVar6[1] = auVar17;
      pppppuVar1 = ppppppuVar3[2];
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x38);
      auVar33._8_6_ = 0;
      auVar33._0_8_ = pppppuVar1;
      auVar33[0xe] = uVar42;
      auVar33[0xf] = uVar42;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x30);
      auVar32._14_2_ = auVar33._14_2_;
      auVar32._8_5_ = 0;
      auVar32._0_8_ = pppppuVar1;
      auVar32[0xd] = uVar42;
      auVar31._13_3_ = auVar32._13_3_;
      auVar31._8_4_ = 0;
      auVar31._0_8_ = pppppuVar1;
      auVar31[0xc] = uVar42;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x28);
      auVar30._12_4_ = auVar31._12_4_;
      auVar30._8_3_ = 0;
      auVar30._0_8_ = pppppuVar1;
      auVar30[0xb] = uVar42;
      auVar29._11_5_ = auVar30._11_5_;
      auVar29._8_2_ = 0;
      auVar29._0_8_ = pppppuVar1;
      auVar29[10] = uVar42;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x20);
      auVar28._10_6_ = auVar29._10_6_;
      auVar28[8] = 0;
      auVar28._0_8_ = pppppuVar1;
      auVar28[9] = uVar42;
      auVar27._9_7_ = auVar28._9_7_;
      auVar27[8] = uVar42;
      auVar27._0_8_ = pppppuVar1;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x18);
      auVar26._8_8_ = auVar27._8_8_;
      auVar26[7] = uVar42;
      auVar26[6] = uVar42;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x10);
      auVar26[5] = uVar42;
      auVar26[4] = uVar42;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 8);
      auVar26[3] = uVar42;
      auVar26[2] = uVar42;
      auVar26[0] = SUB81(pppppuVar1,0);
      auVar26[1] = auVar26[0];
      auVar17 = psraw(auVar26,8);
      pauVar6[2] = auVar17;
      pppppuVar1 = ppppppuVar3[3];
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x38);
      auVar41._8_6_ = 0;
      auVar41._0_8_ = pppppuVar1;
      auVar41[0xe] = uVar42;
      auVar41[0xf] = uVar42;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x30);
      auVar40._14_2_ = auVar41._14_2_;
      auVar40._8_5_ = 0;
      auVar40._0_8_ = pppppuVar1;
      auVar40[0xd] = uVar42;
      auVar39._13_3_ = auVar40._13_3_;
      auVar39._8_4_ = 0;
      auVar39._0_8_ = pppppuVar1;
      auVar39[0xc] = uVar42;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x28);
      auVar38._12_4_ = auVar39._12_4_;
      auVar38._8_3_ = 0;
      auVar38._0_8_ = pppppuVar1;
      auVar38[0xb] = uVar42;
      auVar37._11_5_ = auVar38._11_5_;
      auVar37._8_2_ = 0;
      auVar37._0_8_ = pppppuVar1;
      auVar37[10] = uVar42;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x20);
      auVar36._10_6_ = auVar37._10_6_;
      auVar36[8] = 0;
      auVar36._0_8_ = pppppuVar1;
      auVar36[9] = uVar42;
      auVar35._9_7_ = auVar36._9_7_;
      auVar35[8] = uVar42;
      auVar35._0_8_ = pppppuVar1;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x18);
      auVar34._8_8_ = auVar35._8_8_;
      auVar34[7] = uVar42;
      auVar34[6] = uVar42;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 0x10);
      auVar34[5] = uVar42;
      auVar34[4] = uVar42;
      uVar42 = (undefined1)((ulonglong)pppppuVar1 >> 8);
      auVar34[3] = uVar42;
      auVar34[2] = uVar42;
      auVar34[0] = SUB81(pppppuVar1,0);
      auVar34[1] = auVar34[0];
      auVar17 = psraw(auVar34,8);
      pauVar6[3] = auVar17;
      pauVar6 = pauVar6 + 4;
      ppppppuVar3 = ppppppuVar3 + 4;
      uVar8 = uVar8 + 0x20;
    } while (uVar8 != (uVar4 & 0xffffffffffffffe0));
  }
  for (; ppppppuVar3 != ppppppuVar7; ppppppuVar3 = (ulonglong ******)((longlong)ppppppuVar3 + 1)) {
    *(short *)*pauVar6 = (short)*(char *)ppppppuVar3;
    pauVar6 = (undefined1 (*) [16])((longlong)*pauVar6 + 2);
  }
  FUN_1400546d0(param_1[0x2e],local_30);
  FUN_140055150(local_30);
  if (0xf < uStack_38) {
    if ((0xfff < uStack_38 + 1) &&
       (0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)local_50[-1])))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  return;
}



// ===== FUN_1400b3320 @ 0x1400b3320 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1400b3320(longlong *param_1,longlong *param_2,undefined4 param_3,longlong param_4,
                  char param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  char cVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  longlong *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1407502c0 ^ (ulonglong)auStack_a8;
  uVar18 = 0;
  local_80 = param_4;
  local_78 = param_4;
  local_70 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5d));
  param_1[0x29] = 0;
  plVar9 = (longlong *)param_1[0x2a];
  param_1[0x2a] = 0;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar9 + 1;
    lVar12 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  plVar9 = (longlong *)param_1[0x39];
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9,param_3);
    (**(code **)(*(longlong *)param_1[0x39] + 0x20))((longlong *)param_1[0x39],0xffffffff);
  }
  if (DAT_14079038a != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"------------------DisableUpdateThread--------------------\n");
  }
  if ((param_2 == (longlong *)0x0) || (param_1[10] == 0)) {
    lVar12 = param_1[0x1b];
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 8) = 0;
      plVar9 = *(longlong **)(lVar12 + 0x10);
      *(undefined8 *)(lVar12 + 0x10) = 0;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar9 + 1;
        lVar15 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9);
          }
        }
      }
      *(undefined4 *)(lVar12 + 0x30) = 0xffffffff;
      *(undefined8 *)(lVar12 + 0x18) = 0;
    }
    lVar12 = param_1[0x1c];
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 8) = 0;
      plVar9 = *(longlong **)(lVar12 + 0x10);
      *(undefined8 *)(lVar12 + 0x10) = 0;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar9 + 1;
        lVar15 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9);
          }
        }
      }
      *(undefined4 *)(lVar12 + 0x30) = 0xffffffff;
      *(undefined8 *)(lVar12 + 0x18) = 0;
    }
    lVar12 = param_1[0x1d];
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 8) = 0;
      plVar9 = *(longlong **)(lVar12 + 0x10);
      *(undefined8 *)(lVar12 + 0x10) = 0;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar9 + 1;
        lVar15 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9);
          }
        }
      }
      *(undefined4 *)(lVar12 + 0x30) = 0xffffffff;
      *(undefined8 *)(lVar12 + 0x18) = 0;
    }
    lVar12 = param_1[0x1e];
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 8) = 0;
      plVar9 = *(longlong **)(lVar12 + 0x10);
      *(undefined8 *)(lVar12 + 0x10) = 0;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar9 + 1;
        lVar15 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9);
          }
        }
      }
      *(undefined4 *)(lVar12 + 0x30) = 0xffffffff;
      *(undefined8 *)(lVar12 + 0x18) = 0;
    }
  }
  if ((int)param_1[0xd] != 0) {
    do {
      if ((*(longlong *)(param_1[0xc] + uVar18 * 8) != 0) && (param_2 == (longlong *)0x0)) {
        if ((param_5 == '\x01') && (param_1[10] != 0)) {
          lVar12 = (longlong)*(int *)(param_1[10] + 0x5ec);
          FUN_1401f16e0(param_1[lVar12 + 0x4e]);
          lVar12 = param_1[lVar12 + 0x4e];
          if (DAT_1407baaa8 != '\0') {
            cVar8 = (**(code **)(*DAT_1407bdac8 + 0x18))();
            if (cVar8 == '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_14002fe50(&DAT_1407bb5d0,
                            "Failed to open a session in order to write to leaderboard\n");
            }
            (**(code **)(*DAT_1407bdac8 + 0x20))();
            *(undefined4 *)(lVar12 + 0x48) = 0;
          }
        }
        if (param_1[9] != 0) {
          uVar13 = 0;
          do {
            FUN_140124c30(param_1[9],uVar13,0);
            uVar13 = uVar13 + 1;
          } while (uVar13 < 4);
        }
        puVar14 = (undefined8 *)param_1[0x2d];
        if (puVar14 != (undefined8 *)0x0) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
          lVar12 = 3;
          do {
            lVar15 = 5;
            do {
              lVar17 = 2;
              do {
                FUN_14010c3e0(puVar14);
                puVar14 = puVar14 + 5;
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            lVar12 = lVar12 + -1;
            param_2 = local_70;
          } while (lVar12 != 0);
        }
      }
      uVar13 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar13;
    } while (uVar13 < *(uint *)(param_1 + 0xd));
  }
  lVar12 = 4;
  if (param_2 == (longlong *)0x0) {
    plVar9 = *(longlong **)param_1[0xc];
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x88))(plVar9,1);
      *(undefined8 *)param_1[0xc] = 0;
      if (*(longlong *)(param_1[0xc] + 8) != 0) {
        *(undefined8 *)(*(longlong *)(param_1[0xc] + 8) + 0x198) = 0;
      }
    }
    plVar9 = *(longlong **)(param_1[0xc] + 8);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x88))(plVar9,1);
      *(undefined8 *)(param_1[0xc] + 8) = 0;
    }
    plVar9 = *(longlong **)(param_1[0xc] + 0x10);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x88))(plVar9,1);
      *(undefined8 *)(param_1[0xc] + 0x10) = 0;
    }
    plVar16 = param_1 + 0x24;
    plVar9 = param_1 + 0xf;
    lVar15 = 4;
    do {
      if (*plVar9 != 0) {
        LOCK();
        piVar1 = (int *)(*plVar9 + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      lVar17 = plVar9[-1];
      plVar4 = (longlong *)*plVar9;
      if ((lVar17 != 0) && (*(longlong *)(lVar17 + 0x660) != 0)) {
        FUN_140072550();
        *(undefined8 *)(lVar17 + 0x660) = 0;
      }
      lVar17 = plVar16[-0xe];
      if (lVar17 != 0) {
        plVar5 = *(longlong **)(lVar17 + 0x20);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
        thunk_FUN_1401fe000(lVar17,0x58);
        plVar16[-0xe] = 0;
      }
      if (*plVar16 != 0) {
        FUN_140072550();
        *plVar16 = 0;
      }
      plVar9[-1] = 0;
      plVar5 = (longlong *)*plVar9;
      *plVar9 = 0;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar17 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
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
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar4 + 1;
        lVar17 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
        }
      }
      plVar16 = plVar16 + 1;
      plVar9 = plVar9 + 2;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    *param_1 = 0;
    param_1[10] = 0;
    plVar9 = (longlong *)param_1[0xb];
    param_1[0xb] = 0;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar9 + 1;
      lVar15 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    param_1[0x29] = 0;
    plVar9 = (longlong *)param_1[0x2a];
    param_1[0x2a] = 0;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar9 + 1;
      lVar15 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar15 = DAT_140791568;
    *(undefined8 *)(DAT_140791568 + 0x60) = 0;
    plVar9 = *(longlong **)(lVar15 + 0x68);
    *(undefined8 *)(lVar15 + 0x68) = 0;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar9 + 1;
      lVar15 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar15 = DAT_140791588;
    *(undefined8 *)(DAT_140791588 + 0x58) = 0;
    plVar9 = *(longlong **)(lVar15 + 0x60);
    *(undefined8 *)(lVar15 + 0x60) = 0;
    param_2 = local_70;
    if (plVar9 == (longlong *)0x0) goto LAB_1400b3ac7;
    LOCK();
    plVar16 = plVar9 + 1;
    lVar15 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar15 != 1) goto LAB_1400b3ac7;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    param_2 = local_70;
    if (iVar3 != 1) goto LAB_1400b3ac7;
    (**(code **)(*plVar9 + 8))(plVar9);
    param_1[8] = (longlong)local_70;
  }
  else {
LAB_1400b3ac7:
    param_1[8] = (longlong)param_2;
    if (param_2 != (longlong *)0x0) {
      puVar14 = (undefined8 *)param_1[0xc];
      if (*(int *)(param_2[0x2a] + 0x50) == -1) {
        puVar14[1] = param_2;
      }
      else if (*(int *)(param_2[0x2a] + 0x50) == 1) {
        puVar14[2] = param_2;
      }
      else {
        *puVar14 = param_2;
      }
      if (param_1[10] == 0) {
        plVar9 = (longlong *)
                 (**(code **)(*(longlong *)*param_1 + 0x50))((longlong *)*param_1,&local_70,param_2)
        ;
        lVar12 = *plVar9;
        lVar15 = plVar9[1];
        *plVar9 = 0;
        plVar9[1] = 0;
        param_1[10] = lVar12;
        plVar9 = (longlong *)param_1[0xb];
        param_1[0xb] = lVar15;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar16 = plVar9 + 1;
          lVar12 = *plVar16;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9);
            }
          }
        }
        if (plStack_68 != (longlong *)0x0) {
          LOCK();
          plVar9 = plStack_68 + 1;
          lVar12 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plStack_68)(plStack_68);
            LOCK();
            piVar1 = (int *)((longlong)plStack_68 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plStack_68 + 8))(plStack_68);
            }
          }
        }
        FUN_140070df0();
        uVar10 = FUN_140070df0();
        uVar10 = FUN_140070d40(uVar10,0);
        plVar9 = (longlong *)(**(code **)(*DAT_140790368 + 0x50))(DAT_140790368,0);
        if ((plVar9 == (longlong *)0x0) ||
           (cVar8 = (**(code **)(*plVar9 + 0x40))(plVar9), cVar8 == '\0')) {
          uVar11 = FUN_140070df0();
        }
        else {
          uVar11 = 0xe000d45248242f2e;
        }
        *(undefined8 *)(param_1[10] + 0x518) = uVar11;
        *(undefined8 *)(param_1[10] + 0x520) = uVar10;
        local_70 = (longlong *)0x0;
        plStack_68 = (longlong *)0x0;
        lVar12 = -1;
        do {
          lVar12 = lVar12 + 1;
        } while ((&DAT_1407aaa78)[lVar12] != 0);
        local_60 = 0;
        local_58 = 0;
        FUN_140054cf0(&local_70);
        FUN_1400546d0(param_1[10] + 0x438,&local_70);
        FUN_140055150(&local_70);
        (**(code **)(*(longlong *)param_1[10] + 0x18))();
        puVar14 = (undefined8 *)*param_1;
        pcVar6 = *(code **)*puVar14;
        if (param_1[0xb] != 0) {
          LOCK();
          piVar1 = (int *)(param_1[0xb] + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_70 = (longlong *)param_1[10];
        plStack_68 = (longlong *)param_1[0xb];
        (*pcVar6)(puVar14,&local_70);
        *(undefined4 *)(param_1[10] + 0x5ec) = 0;
        param_1[0x24] = 0;
        param_1[0x25] = 0;
        param_1[0x17] = 0;
        param_1[0x26] = 0;
        param_1[0x18] = 0;
        param_1[0x27] = 0;
        param_1[0x19] = 0;
      }
      if ((longlong *)param_1[10] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[10] + 0x18))();
        pcVar6 = *(code **)(*param_2 + 0x128);
        if (param_1[0xb] != 0) {
          LOCK();
          piVar1 = (int *)(param_1[0xb] + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_70 = (longlong *)param_1[10];
        plStack_68 = (longlong *)param_1[0xb];
        (*pcVar6)(param_2,&local_70);
      }
      if (*(longlong *)(param_1[10] + 0x558) != 0) {
        thunk_FUN_1401fe000(*(longlong *)(param_1[10] + 0x558),0x18);
      }
      local_70 = (longlong *)FUN_140558c80(0x18);
      *local_70 = (longlong)Input::vftable;
      local_70[1] = 0;
      *(undefined4 *)(local_70 + 2) = 0;
      *(undefined2 *)((longlong)local_70 + 0x14) = 0;
      *(longlong **)(param_1[10] + 0x558) = local_70;
      if (param_1[9] != 0) {
        FUN_140124c30(param_1[9],*(undefined4 *)(param_1[10] + 0x5ec),param_2);
      }
      if ((undefined8 *)param_1[0x2d] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2d] = param_2;
      }
      lVar12 = *param_1;
      if (param_1[0xb] != 0) {
        LOCK();
        piVar1 = (int *)(param_1[0xb] + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      lVar15 = param_1[10];
      plVar9 = (longlong *)param_1[0xb];
      lVar12 = *(longlong *)(lVar12 + 0x38);
      bVar19 = lVar12 != DAT_1407b94d8;
      if (bVar19) {
        *(undefined1 *)(lVar15 + 0x4bd) = 0;
      }
      bVar19 = !bVar19;
      *(bool *)(lVar15 + 0x4be) = bVar19;
      *(bool *)(lVar15 + 0x4bf) = bVar19;
      *(bool *)(lVar15 + 0x4bc) = bVar19;
      *(bool *)(lVar15 + 0x4c0) = lVar12 != DAT_1407b94c0;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar9 + 1;
        lVar12 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9);
          }
        }
      }
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      FUN_1400abdf0(param_1);
      if (param_1[0xb] != 0) {
        LOCK();
        piVar1 = (int *)(param_1[0xb] + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      param_1[0x29] = param_1[10];
      plVar9 = (longlong *)param_1[0x2a];
      param_1[0x2a] = param_1[0xb];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar9 + 1;
        lVar12 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9);
          }
        }
      }
      if (DAT_14079038a == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_14002fe50(&DAT_1407bb5d0,"------------------EnableUpdateThread--------------------\n");
      }
      goto LAB_1400b3a61;
    }
  }
  (**(code **)(*(longlong *)param_1[0x4c] + 0x18))();
  param_1[10] = 0;
  plVar9 = (longlong *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar9 + 1;
    lVar15 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  plVar16 = param_1 + 0x24;
  plVar9 = param_1 + 0xf;
  do {
    lVar15 = *plVar16;
    if ((lVar15 != 0) && (*(char *)(lVar15 + 8) == '\0')) {
      *(undefined1 *)(lVar15 + 8) = 1;
      FUN_1400f5690(lVar15 + 0x60);
      FUN_1400f55e0(lVar15 + 0xa0);
      lVar17 = *(longlong *)(lVar15 + 0x10);
      SetEvent(*(HANDLE *)(*(longlong *)(lVar17 + 0x100) + 8));
      SetEvent(*(HANDLE *)(*(longlong *)(lVar17 + 0x108) + 8));
      FUN_140365fb0(*(undefined8 *)(lVar15 + 0x10),2);
    }
    *plVar16 = 0;
    plVar9[-1] = 0;
    plVar4 = (longlong *)*plVar9;
    *plVar9 = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar15 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
    plVar16[-0xe] = 0;
    plVar9 = plVar9 + 2;
    plVar16 = plVar16 + 1;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
LAB_1400b3a61:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5d));
  plVar9 = *(longlong **)(local_80 + 8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar9 + 1;
    lVar12 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  return;
}



// ===== FUN_1400b6a20 @ 0x1400b6a20 [ui] =====

void FUN_1400b6a20(longlong param_1,undefined *param_2,uint param_3)

{
  int iVar1;
  
  if (param_2 == &DAT_1407bab00) {
    *(bool *)(param_1 + 0xc) = *(char *)(param_1 + 0xc) == '\0';
  }
  if (param_2 == &DAT_1407bab50) {
    *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3 & 3;
  }
  if (param_2 == &DAT_1407bac90) {
    *(uint *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + param_3 & 3;
  }
  if (param_2 == &DAT_1407bad30) {
    iVar1 = *(int *)(param_1 + 0x180) + param_3;
    *(int *)(param_1 + 0x180) =
         iVar1 + (iVar1 / 3 + (iVar1 >> 0x1f) +
                 (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                 -3;
  }
  if (param_2 == &DAT_1407bab78) {
    *(bool *)(param_1 + 0x14) = param_3 != 0;
  }
  if (param_2 == &DAT_1407bad08) {
    *(bool *)(param_1 + 0x1e) = *(char *)(param_1 + 0x1e) == '\0';
  }
  if (param_2 == &DAT_1407babc8) {
    *(bool *)(param_1 + 0x16) = *(char *)(param_1 + 0x16) == '\0';
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x120) + 0x48) + 0x18))();
  }
  if (param_2 == &DAT_1407baba0) {
    *(bool *)(param_1 + 0x15) = *(char *)(param_1 + 0x15) == '\0';
    FUN_140136e50(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x1a8));
  }
  if (param_2 == &DAT_1407babf0) {
    iVar1 = *(int *)(param_1 + 0x18) + 3 + param_3;
    *(int *)(param_1 + 0x18) =
         iVar1 + (iVar1 / 3 + (iVar1 >> 0x1f) +
                 (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                 -3;
  }
  if (param_2 == &DAT_1407bac18) {
    *(uint *)(param_1 + 0x148) = param_3 & 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"Option::DIFFICULTY = %d",*(undefined4 *)(param_1 + 0x148));
}



// ===== FUN_1400c3420 @ 0x1400c3420 [ui] =====

void FUN_1400c3420(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_2 == -1) {
    plVar4 = (longlong *)(param_1 + 8);
    lVar3 = 0x70;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x70) + lVar3) != 0) {
        lVar2 = plVar4[1];
        lVar1 = *plVar4;
        if (lVar1 != lVar2) {
          do {
            FUN_140055150(lVar1);
            lVar1 = lVar1 + 0x28;
          } while (lVar1 != lVar2);
          plVar4[1] = *plVar4;
        }
      }
      lVar3 = lVar3 + 0x10;
      plVar4 = plVar4 + 3;
    } while (lVar3 < 0xb0);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x10 + (longlong)param_2 * 0x18);
    param_1 = param_1 + (longlong)param_2 * 0x18;
    lVar2 = *(longlong *)(param_1 + 8);
    if (lVar2 != lVar3) {
      do {
        FUN_140055150(lVar2);
        lVar2 = lVar2 + 0x28;
      } while (lVar2 != lVar3);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
    }
  }
  return;
}



// ===== FUN_1400e37b0 @ 0x1400e37b0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1400e37b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong *plVar9;
  int *piVar10;
  char cVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined8 *puVar18;
  char *pcVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined4 *puVar22;
  int *piVar23;
  ulonglong uVar24;
  int *piVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 auStackY_118 [32];
  int local_d0;
  undefined8 *local_c8;
  longlong *plStack_c0;
  ulonglong local_b8;
  int local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStackY_118;
  local_a8 = param_1;
  local_90 = param_2;
  if (*(char *)(param_1 + 8) != '\0') {
    plVar15 = (longlong *)param_2[1];
    goto joined_r0x0001400e4818;
  }
  uVar13 = *(undefined4 *)(param_1 + 0x58);
  uVar14 = FUN_140070df0();
  uVar14 = FUN_140070d40(uVar14,uVar13);
  uVar24 = 0;
  cVar11 = (**(code **)(*DAT_140790368 + 0xf0))();
  uVar26 = uVar24;
  if (cVar11 == '\0') {
    local_a0 = uVar14;
    plVar15 = (longlong *)FUN_140047a70(extraout_XMM0_Da,&local_c8,&local_a0);
    uVar26 = *(ulonglong *)(*plVar15 + 0x18);
  }
  cVar11 = (**(code **)(*DAT_140790368 + 0x80))();
  if (cVar11 != '\x01') {
    (**(code **)**(undefined8 **)(DAT_140790e60 + 0x1c8))
              (*(undefined8 **)(DAT_140790e60 + 0x1c8),0x4b);
  }
  plVar15 = (longlong *)
            (**(code **)(*DAT_140790368 + 0x68))
                      (DAT_140790368,*(undefined1 *)(**(longlong **)(param_1 + 0x10) + 0xca));
  local_d0 = -1;
  if (*(int *)(param_1 + 0x58) == 0) {
    (**(code **)(*DAT_1407ba830 + 200))(DAT_1407ba830,*(undefined4 *)(*param_2 + 0x78));
    local_d0 = 0;
LAB_1400e396d:
    if (uVar26 != 0) {
      if (*(short *)(uVar26 + 0x44) != 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        local_78 = 0;
        local_70 = 0;
        lVar27 = -1;
        do {
          lVar27 = lVar27 + 1;
        } while (((short *)(uVar26 + 0x44))[lVar27] != 0);
        FUN_140054cf0(&local_88);
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1407bb6f8);
        uVar21 = uVar24;
        if (local_78 * 2 != 0) {
          do {
            uVar21 = uVar21 + 1;
          } while (uVar21 < (ulonglong)(local_78 * 2));
        }
        lVar17 = FUN_1400490c0(&DAT_1407bb678,&local_c8);
        lVar27 = DAT_1407bb680;
        if (*(longlong *)(lVar17 + 8) != 0) {
          lVar27 = *(longlong *)(lVar17 + 8);
        }
        if (lVar27 == DAT_1407bb680) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1407bb6f8);
        }
        else {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1407bb6f8);
          FUN_140038bf0(extraout_XMM0_Da_00,&local_88);
        }
        if (7 < local_70) {
          if ((0xfff < local_70 * 2 + 2) &&
             (0x1f < (ulonglong)((longlong)local_88 + (-8 - local_88[-1])))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          thunk_FUN_1401fe000();
        }
      }
      if (*(short *)(uVar26 + 4) != 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        local_78 = 0;
        local_70 = 0;
        lVar27 = -1;
        do {
          lVar27 = lVar27 + 1;
        } while (((short *)(uVar26 + 4))[lVar27] != 0);
        FUN_140054cf0(&local_88);
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1407bb6f8);
        if (local_78 * 2 != 0) {
          do {
            uVar24 = uVar24 + 1;
            param_1 = local_a8;
          } while (uVar24 < (ulonglong)(local_78 * 2));
        }
        lVar17 = FUN_1400490c0(&DAT_1407bb678,&local_c8);
        lVar27 = DAT_1407bb680;
        if (*(longlong *)(lVar17 + 8) != 0) {
          lVar27 = *(longlong *)(lVar17 + 8);
        }
        if (lVar27 == DAT_1407bb680) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1407bb6f8);
        }
        else {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1407bb6f8);
          FUN_140038bf0(extraout_XMM0_Da_01,&local_88);
        }
        if (7 < local_70) {
          if ((0xfff < local_70 * 2 + 2) &&
             (0x1f < (ulonglong)((longlong)local_88 + (-8 - local_88[-1])))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          thunk_FUN_1401fe000();
        }
      }
    }
    (&DAT_1407bba92)[local_d0] = 0;
  }
  else {
    cVar11 = (**(code **)(*plVar15 + 0x48))(plVar15);
    if ((cVar11 == '\0') && (cVar11 = (**(code **)(*plVar15 + 0x50))(plVar15), cVar11 != '\0')) {
      plVar20 = (longlong *)(**(code **)(*DAT_140790368 + 0x50))(DAT_140790368,0);
      plVar16 = (longlong *)(**(code **)(*DAT_140790368 + 0x50))(DAT_140790368,1);
      local_d0 = -(uint)(plVar20 != plVar15);
      if (plVar16 == plVar15) {
        local_d0 = 1;
      }
      plVar20 = (longlong *)(**(code **)(*DAT_140790368 + 0x50))(DAT_140790368,2);
      if (plVar20 == plVar15) {
        local_d0 = 2;
      }
      plVar20 = (longlong *)(**(code **)(*DAT_140790368 + 0x50))(DAT_140790368,3);
      if (plVar20 == plVar15) {
        local_d0 = 3;
      }
      else if (local_d0 == -1) goto LAB_1400e3bd4;
      goto LAB_1400e396d;
    }
  }
LAB_1400e3bd4:
  if (*(int *)(param_1 + 0x58) == 0) {
    if (DAT_1407bb76e == '\0') {
      if (DAT_1407baaa8 != '\0') {
        uVar14 = FUN_140558c80(0x68);
        uVar14 = FUN_1400551d0(uVar14,0,*(undefined8 *)(param_1 + 0x40),param_1);
        goto LAB_1400e3c7f;
      }
      puVar18 = (undefined8 *)FUN_140558c80(0x68);
      FUN_140078df0(puVar18,0,*(undefined8 *)(param_1 + 0x40),param_1);
      *puVar18 = TrialMode::vftable;
      local_a0 = FUN_140558c80(0x10a8);
      uVar14 = FUN_1400742a0(local_a0,0,1);
      puVar18[0xb] = uVar14;
      **(undefined8 **)(param_1 + 0x40) = puVar18;
    }
    else {
      uVar14 = FUN_140558c80(0x68);
      uVar14 = FUN_140078df0(uVar14,0,*(undefined8 *)(param_1 + 0x40),param_1);
LAB_1400e3c7f:
      **(undefined8 **)(param_1 + 0x40) = uVar14;
    }
    plVar20 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x60);
    if (*(char *)(*param_2 + 0x58) == -1) {
      lVar27 = plVar20[1];
    }
    else if (*(char *)(*param_2 + 0x58) == '\x01') {
      lVar27 = plVar20[2];
    }
    else {
      lVar27 = *plVar20;
    }
    if (lVar27 == 0) {
      plVar15 = (longlong *)FUN_140558c80(0x410);
      local_a0 = CONCAT44(local_a0._4_4_,(int)*(char *)(*param_2 + 0x70));
      cVar11 = *(char *)(*param_2 + 0x58);
      local_88 = plVar15;
      puVar18 = (undefined8 *)FUN_140558c80(0x50);
      lVar27 = *param_2;
      local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)(lVar27 + 0xa0));
      local_b0 = *(undefined4 *)(lVar27 + 0x9c);
      uVar14 = *(undefined8 *)(lVar27 + 0x90);
      uVar4 = *(undefined1 *)(lVar27 + 0x89);
      iVar3 = *(int *)(lVar27 + 0xa4);
      piVar25 = DAT_1407b94c8;
      if (((iVar3 != *DAT_1407b94c8) && (piVar25 = DAT_1407b94d0, iVar3 != *DAT_1407b94d0)) &&
         ((piVar25 = DAT_1407b94d8, iVar3 != *DAT_1407b94d8 &&
          (piVar25 = DAT_1407b94d0, iVar3 == *DAT_1407b94c0)))) {
        piVar25 = DAT_1407b94c0;
      }
      uVar7 = *(undefined8 *)(lVar27 + 0x50);
      puVar1 = puVar18 + 5;
      *puVar1 = 0;
      puVar18[6] = 0;
      puVar18[7] = 0;
      puVar18[8] = 7;
      *(undefined2 *)puVar1 = 0;
      *puVar18 = uVar7;
      puVar18[1] = piVar25;
      *(undefined2 *)(puVar18 + 2) = 0;
      *(undefined1 *)((longlong)puVar18 + 0x12) = uVar4;
      puVar18[3] = uVar14;
      *(undefined2 *)(puVar18 + 4) = 0;
      local_c8 = puVar18;
      FUN_1400549d0(puVar1,&PTR_140610690,0);
      *(int *)(puVar18 + 9) = local_b0;
      *(undefined4 *)((longlong)puVar18 + 0x4c) = (undefined4)local_a8;
      lVar27 = FUN_1400fbc90(plVar15,param_1,puVar18,(int)cVar11);
      *(longlong *)(param_1 + 0x48) = lVar27;
      if (*(char *)(*param_2 + 0x58) == '\0') {
        lVar17 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x60) + 8);
      }
      else {
        lVar17 = **(longlong **)(*(longlong *)(param_1 + 0x40) + 0x60);
      }
      if (lVar17 != 0) {
        *(undefined8 *)(lVar27 + 0x198) = *(undefined8 *)(lVar17 + 0x198);
      }
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"ClientConnection - DIFFICULTY --- %d\n",
                    (int)*(char *)(*param_2 + 0x70));
    }
    *(longlong *)(param_1 + 0x48) = lVar27;
    lVar27 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x50);
    *(uint *)(lVar27 + 0x538) = (uint)*(byte *)(*param_2 + 0x7c);
    plVar20 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x50);
    pcVar8 = *(code **)(*plVar20 + 0x800);
    uVar13 = FUN_140033790(lVar27,*(undefined4 *)(param_1 + 0x58));
    (*pcVar8)(plVar20,uVar13);
    plVar20 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x50);
    (**(code **)(*plVar20 + 0x808))
              (plVar20,*(undefined4 *)((&DAT_1407bb7b0)[*(int *)(param_1 + 0x58)] + 0x5c));
    FUN_1400acf40(*(undefined8 *)(param_1 + 0x40),0);
    *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x50) + 0x184) =
         (int)*(char *)(*param_2 + 0x58);
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x50) + 0x18) =
         *(undefined4 *)(*param_2 + 0x28);
    cVar11 = *(char *)(**(longlong **)(param_1 + 0x10) + 0xca);
    uVar13 = *(undefined4 *)(*param_2 + 0x98);
    bVar5 = *(byte *)(*param_2 + 0x7c);
    pcVar19 = &DAT_1407bbaf0;
    puVar22 = &DAT_1407bbbf0;
    lVar27 = 0x100;
    do {
      if (*pcVar19 == cVar11) {
        *pcVar19 = '\0';
        *puVar22 = 0;
      }
      pcVar19 = pcVar19 + 1;
      puVar22 = puVar22 + 1;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    (&DAT_1407bbaf0)[bVar5] = cVar11;
    (&DAT_1407bbbf0)[bVar5] = uVar13;
    FUN_1403141a0(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x50) + 0x540,0x21,
                  *(undefined4 *)(*param_2 + 0x98));
    local_b8 = CONCAT44(local_b8._4_4_,0x1800);
    cVar11 = (**(code **)(*plVar15 + 0x40))(plVar15);
    if (cVar11 != '\0') {
      uVar13 = FUN_1403141a0(&local_b8,4,1);
      uVar13 = FUN_1403141a0(&local_b8,0xd,uVar13);
      uVar13 = FUN_1403141a0(&local_b8,0xe,uVar13);
      uVar13 = FUN_1403141a0(&local_b8,0xf,uVar13);
      FUN_1403141a0(&local_b8,0x10,uVar13);
    }
    lVar27 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(lVar27 + 0x58) != 0) {
      LOCK();
      piVar25 = (int *)(*(longlong *)(lVar27 + 0x58) + 8);
      *piVar25 = *piVar25 + 1;
      UNLOCK();
    }
    local_c8 = *(undefined8 **)(lVar27 + 0x50);
    plStack_c0 = *(longlong **)(lVar27 + 0x58);
    FUN_1400f2400(param_1,&local_c8,local_b8 & 0xffffffff);
  }
  else {
    lVar27 = *(longlong *)(param_1 + 0x40);
    plVar20 = *(longlong **)(lVar27 + 0x60);
    if (*(char *)(*param_2 + 0x58) == -1) {
      lVar17 = plVar20[1];
    }
    else if (*(char *)(*param_2 + 0x58) == '\x01') {
      lVar17 = plVar20[2];
    }
    else {
      lVar17 = *plVar20;
    }
    *(longlong *)(param_1 + 0x48) = lVar17;
    local_88 = (longlong *)0x0;
    plStack_80 = (longlong *)0x0;
    if (lVar17 == 0) {
      cVar11 = *(char *)(*param_2 + 0x58);
      if (cVar11 == '\0') {
        lVar27 = (*(longlong **)(lVar27 + 0x60))[1];
      }
      else {
        lVar27 = **(longlong **)(lVar27 + 0x60);
      }
      if (lVar27 == 0) {
        plVar20 = (longlong *)(*(longlong *)(param_1 + 0x40) + 0x60);
        if ((cVar11 == '\0') || (cVar11 == -1)) {
          lVar27 = *(longlong *)(*plVar20 + 0x10);
        }
        else {
          lVar27 = *(longlong *)(*plVar20 + 8);
        }
      }
      local_b8 = FUN_140558c80(0x410);
      local_a8 = CONCAT44(local_a8._4_4_,(int)*(char *)(*param_2 + 0x70));
      local_b0 = (int)*(char *)(*param_2 + 0x58);
      puVar18 = (undefined8 *)FUN_140558c80(0x50);
      lVar17 = *param_2;
      uVar13 = *(undefined4 *)(lVar17 + 0xa0);
      uVar6 = *(undefined4 *)(lVar17 + 0x9c);
      uVar14 = *(undefined8 *)(lVar17 + 0x90);
      uVar4 = *(undefined1 *)(lVar17 + 0x89);
      iVar3 = *(int *)(lVar17 + 0xa4);
      piVar25 = DAT_1407b94c8;
      if ((((iVar3 != *DAT_1407b94c8) && (piVar25 = DAT_1407b94d0, iVar3 != *DAT_1407b94d0)) &&
          (piVar25 = DAT_1407b94d8, iVar3 != *DAT_1407b94d8)) &&
         (piVar25 = DAT_1407b94d0, iVar3 == *DAT_1407b94c0)) {
        piVar25 = DAT_1407b94c0;
      }
      uVar7 = *(undefined8 *)(lVar17 + 0x50);
      puVar1 = puVar18 + 5;
      *puVar1 = 0;
      puVar18[6] = 0;
      puVar18[7] = 0;
      puVar18[8] = 7;
      *(undefined2 *)puVar1 = 0;
      *puVar18 = uVar7;
      puVar18[1] = piVar25;
      *(undefined2 *)(puVar18 + 2) = 0;
      *(undefined1 *)((longlong)puVar18 + 0x12) = uVar4;
      puVar18[3] = uVar14;
      *(undefined2 *)(puVar18 + 4) = 0;
      local_c8 = puVar18;
      local_a0._0_4_ = uVar13;
      FUN_1400549d0(puVar1,&PTR_140610690,0);
      *(undefined4 *)(puVar18 + 9) = uVar6;
      *(undefined4 *)((longlong)puVar18 + 0x4c) = (undefined4)local_a0;
      lVar17 = FUN_1400fbc90(local_b8,param_1,puVar18,local_b0);
      *(undefined8 *)(lVar17 + 0x198) = *(undefined8 *)(lVar27 + 0x198);
      *(int *)(lVar17 + 0x13c) = (int)*(char *)(*param_2 + 0x70);
      *(undefined1 *)(lVar17 + 0x268) = 1;
      *(longlong *)(param_1 + 0x48) = lVar17;
      uVar14 = *(undefined8 *)(param_1 + 0x40);
      local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)(param_1 + 0x58));
      lVar27 = (**(code **)(*plVar15 + 0x98))(plVar15);
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0;
      lVar17 = -1;
      do {
        lVar17 = lVar17 + 1;
      } while (*(short *)(lVar27 + lVar17 * 2) != 0);
      FUN_140054cf0(&local_68,lVar27);
      puVar18 = (undefined8 *)FUN_1400ac410(uVar14,&local_c8);
      plVar15 = (longlong *)*puVar18;
      plVar20 = (longlong *)puVar18[1];
      *puVar18 = 0;
      puVar18[1] = 0;
      local_88 = plVar15;
      plStack_80 = plVar20;
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        plVar16 = plStack_c0 + 1;
        lVar27 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar27 == 1) {
          (**(code **)*plStack_c0)(plStack_c0);
          LOCK();
          piVar25 = (int *)((longlong)plStack_c0 + 0xc);
          iVar3 = *piVar25;
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_c0 + 8))(plStack_c0);
          }
        }
      }
      if (7 < local_50) {
        if ((0xfff < local_50 * 2 + 2) && (0x1f < (local_68 - *(longlong *)(local_68 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        thunk_FUN_1401fe000();
      }
      lVar27 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(lVar27 + 0x58) != 0) {
        LOCK();
        piVar25 = (int *)(*(longlong *)(lVar27 + 0x58) + 8);
        *piVar25 = *piVar25 + 1;
        UNLOCK();
      }
      uVar14 = *(undefined8 *)(lVar27 + 0x50);
      plVar16 = *(longlong **)(lVar27 + 0x58);
      local_a0 = uVar14;
      local_98 = plVar16;
      FUN_140045590(*(longlong *)(param_1 + 0x40) + 0x50,
                    ((ulonglong)*(uint *)(param_1 + 0x58) + 7) * 0x10 +
                    *(longlong *)(param_1 + 0x40));
      local_c8 = (undefined8 *)0x0;
      plStack_c0 = (longlong *)0x0;
      FUN_1400b3320(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),0xffffffff,
                    &local_c8);
      lVar27 = *(longlong *)(param_1 + 0x40);
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
      }
      *(undefined8 *)(lVar27 + 0x50) = uVar14;
      plVar9 = *(longlong **)(lVar27 + 0x58);
      *(longlong **)(lVar27 + 0x58) = plVar16;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar27 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar27 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar25 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar25;
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9);
          }
        }
      }
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar16 + 1;
        lVar27 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar27 == 1) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar25 = (int *)((longlong)plVar16 + 0xc);
          iVar3 = *piVar25;
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16);
          }
        }
      }
    }
    else {
      lVar17 = (**(code **)(*plVar15 + 0x98))(plVar15);
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0;
      lVar28 = -1;
      do {
        lVar28 = lVar28 + 1;
      } while (*(short *)(lVar17 + lVar28 * 2) != 0);
      FUN_140054cf0(&local_68,lVar17);
      puVar18 = (undefined8 *)
                FUN_1400ac410(lVar27,&local_c8,*(undefined4 *)(param_1 + 0x58),&local_68);
      plVar16 = plStack_c0;
      plVar15 = (longlong *)*puVar18;
      plVar20 = (longlong *)puVar18[1];
      *puVar18 = 0;
      puVar18[1] = 0;
      local_88 = plVar15;
      plStack_80 = plVar20;
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        plVar9 = plStack_c0 + 1;
        lVar27 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar27 == 1) {
          (**(code **)*plStack_c0)(plStack_c0);
          LOCK();
          piVar25 = (int *)((longlong)plVar16 + 0xc);
          iVar3 = *piVar25;
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16);
          }
        }
      }
      FUN_140055150(&local_68);
    }
    *(int *)((longlong)plVar15 + 0x184) = (int)*(char *)(*param_2 + 0x58);
    *(undefined4 *)(plVar15 + 3) = *(undefined4 *)(*param_2 + 0x28);
    bVar5 = *(byte *)(*param_2 + 0x7c);
    *(uint *)(plVar15 + 0xa7) = (uint)bVar5;
    pcVar8 = *(code **)(*plVar15 + 0x800);
    uVar13 = FUN_140033790(bVar5,*(undefined4 *)(param_1 + 0x58));
    (*pcVar8)(plVar15,uVar13);
    (**(code **)(*plVar15 + 0x808))
              (plVar15,*(undefined4 *)((&DAT_1407bb7b0)[*(int *)(param_1 + 0x58)] + 0x5c));
    cVar11 = *(char *)(**(longlong **)(param_1 + 0x10) + 0xca);
    uVar13 = *(undefined4 *)(*param_2 + 0x98);
    bVar5 = *(byte *)(*param_2 + 0x7c);
    pcVar19 = &DAT_1407bbaf0;
    puVar22 = &DAT_1407bbbf0;
    lVar27 = 0x100;
    do {
      if (*pcVar19 == cVar11) {
        *pcVar19 = '\0';
        *puVar22 = 0;
      }
      pcVar19 = pcVar19 + 1;
      puVar22 = puVar22 + 1;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    (&DAT_1407bbaf0)[bVar5] = cVar11;
    (&DAT_1407bbbf0)[bVar5] = uVar13;
    FUN_1403141a0(plVar15 + 0xa8,0x21,*(undefined4 *)(*param_2 + 0x98));
    puVar18 = (undefined8 *)
              (((ulonglong)*(uint *)(param_1 + 0x58) + 7) * 0x10 + *(longlong *)(param_1 + 0x40));
    if (puVar18[1] != 0) {
      LOCK();
      piVar25 = (int *)(puVar18[1] + 8);
      *piVar25 = *piVar25 + 1;
      UNLOCK();
    }
    local_c8 = (undefined8 *)*puVar18;
    plStack_c0 = (longlong *)puVar18[1];
    FUN_1400f2400(param_1,&local_c8,0x1800);
    if (plVar20 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar20 + 1;
      lVar27 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar27 == 1) {
        (**(code **)*plVar20)(plVar20);
        LOCK();
        piVar25 = (int *)((longlong)plVar20 + 0xc);
        iVar3 = *piVar25;
        *piVar25 = *piVar25 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar20 + 8))(plVar20);
        }
      }
    }
  }
  *(uint *)(param_1 + 0x54) = (uint)*(byte *)(*param_2 + 0xa9);
  lVar27 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(lVar27 + 0x58) != 0) {
    LOCK();
    piVar25 = (int *)(*(longlong *)(lVar27 + 0x58) + 8);
    *piVar25 = *piVar25 + 1;
    UNLOCK();
  }
  puVar18 = *(undefined8 **)(lVar27 + 0x50);
  plVar15 = *(longlong **)(lVar27 + 0x58);
  local_c8 = puVar18;
  plStack_c0 = plVar15;
  FUN_140045590(*(longlong *)(param_1 + 0x40) + 0x50,
                ((ulonglong)*(uint *)(param_1 + 0x58) + 7) * 0x10 + *(longlong *)(param_1 + 0x40));
  piVar10 = DAT_1407b94d8;
  piVar25 = DAT_1407b94c0;
  lVar27 = *(longlong *)
            (*(longlong *)(param_1 + 0x40) + 0xb0 + (ulonglong)*(uint *)(param_1 + 0x58) * 8);
  iVar3 = *(int *)(*param_2 + 0xa4);
  piVar23 = DAT_1407b94c8;
  if ((((iVar3 != *DAT_1407b94c8) && (piVar23 = DAT_1407b94d0, iVar3 != *DAT_1407b94d0)) &&
      (piVar23 = DAT_1407b94d8, iVar3 != *DAT_1407b94d8)) &&
     (piVar23 = DAT_1407b94d0, iVar3 == *DAT_1407b94c0)) {
    piVar23 = DAT_1407b94c0;
  }
  *(int **)(lVar27 + 0x38) = piVar23;
  lVar27 = *(longlong *)(*(longlong *)(lVar27 + 0x48) + 0x50);
  if (piVar23 != piVar10) {
    *(undefined1 *)(lVar27 + 0x4bd) = 0;
  }
  bVar12 = piVar23 == piVar10;
  *(bool *)(lVar27 + 0x4be) = bVar12;
  *(bool *)(lVar27 + 0x4bf) = bVar12;
  *(bool *)(lVar27 + 0x4bc) = bVar12;
  *(bool *)(lVar27 + 0x4c0) = piVar23 != piVar25;
  lVar27 = *(longlong *)(param_1 + 0x40);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  *(undefined8 **)(lVar27 + 0x50) = puVar18;
  plVar20 = *(longlong **)(lVar27 + 0x58);
  *(longlong **)(lVar27 + 0x58) = plVar15;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar20 + 1;
    lVar27 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar27 == 1) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar25 = (int *)((longlong)plVar20 + 0xc);
      iVar3 = *piVar25;
      *piVar25 = *piVar25 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar20 + 8))(plVar20);
      }
    }
  }
  if (local_d0 != -1) {
    FUN_14002fee0(&DAT_1407bb5d0,6,"UIController::UpdateSelectedItemPos not implemented\n");
  }
  pcVar8 = *(code **)(*DAT_1407ba830 + 0x30);
  (**(code **)(*DAT_140790368 + 0x30))();
  (*pcVar8)(DAT_1407ba830,*(undefined4 *)(param_1 + 0x58),1,3);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar15 + 1;
    lVar27 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar27 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar25 = (int *)((longlong)plVar15 + 0xc);
      iVar3 = *piVar25;
      *piVar25 = *piVar25 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15);
      }
    }
  }
  plVar15 = (longlong *)param_2[1];
joined_r0x0001400e4818:
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar15 + 1;
    lVar27 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar27 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar25 = (int *)((longlong)plVar15 + 0xc);
      iVar3 = *piVar25;
      *piVar25 = *piVar25 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15);
      }
    }
  }
  return;
}



// ===== FUN_1400f2400 @ 0x1400f2400 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1400f2400(longlong param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined **ppuVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da;
  undefined1 auStackY_a8 [32];
  longlong local_68 [6];
  
  local_68[4] = DAT_1407502c0 ^ (ulonglong)auStackY_a8;
  uVar3 = *(uint *)(*param_2 + 0x540);
  uVar11 = 0;
  do {
    if (uVar11 == 0x21) {
      uVar7 = 2;
      uVar12 = param_3;
      uVar9 = uVar3;
    }
    else {
      if ((int)uVar11 < 0x20) {
        uVar9 = 1 << ((byte)uVar11 & 0x1f) & uVar3;
      }
      else {
        uVar9 = 0;
      }
      uVar7 = 1 << ((byte)uVar11 & 0x1f);
      if ((int)uVar11 < 0x20) {
        uVar12 = uVar7 & param_3;
      }
      else {
        uVar12 = 0;
      }
    }
    if (uVar9 != uVar12) {
      uVar9 = uVar3;
      if (uVar11 != 0x21) {
        uVar9 = 0;
        if ((int)uVar11 < 0x20) {
          uVar9 = uVar7 & uVar3;
        }
      }
      local_68[0] = 0;
      local_68[1] = 0;
      local_68[2] = 0;
      local_68[3] = 0;
      uVar14 = FUN_140054cf0(local_68,&PTR_140610690,0);
      iVar8 = FUN_14003e910(uVar14,DAT_1407bbab0,0xc);
      if (iVar8 == 0) {
        switch(uVar11) {
        case 0:
          if (uVar9 == 0) {
            if (*DAT_1407bb780 == '\0') goto LAB_1400f257f;
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5) < 0x6bf)
            goto LAB_1400f2580;
            ppuVar10 = (undefined **)(lVar13 + 0xd7c0);
            uVar4 = *(ulonglong *)(lVar13 + 0xd7d8);
LAB_1400f2578:
            if (7 < uVar4) {
              ppuVar10 = (undefined **)*ppuVar10;
            }
          }
          else {
            if (*DAT_1407bb780 == '\0') {
LAB_1400f257f:
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if (0x6bd < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5)) {
              ppuVar10 = (undefined **)(lVar13 + 0xd7a0);
              uVar4 = *(ulonglong *)(lVar13 + 0xd7b8);
              goto LAB_1400f2578;
            }
LAB_1400f2580:
            ppuVar10 = &PTR_140610690;
          }
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while (*(short *)((longlong)ppuVar10 + lVar13 * 2) != 0);
          break;
        case 1:
          if (uVar9 == 0) {
            if (*DAT_1407bb780 == '\0') goto LAB_1400f260a;
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5) < 0x6c1)
            goto LAB_1400f260b;
            ppuVar10 = (undefined **)(lVar13 + 0xd800);
            uVar4 = *(ulonglong *)(lVar13 + 0xd818);
LAB_1400f2603:
            if (7 < uVar4) {
              ppuVar10 = (undefined **)*ppuVar10;
            }
          }
          else {
            if (*DAT_1407bb780 == '\0') {
LAB_1400f260a:
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if (0x6bf < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5)) {
              ppuVar10 = (undefined **)(lVar13 + 0xd7e0);
              uVar4 = *(ulonglong *)(lVar13 + 0xd7f8);
              goto LAB_1400f2603;
            }
LAB_1400f260b:
            ppuVar10 = &PTR_140610690;
          }
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while (*(short *)((longlong)ppuVar10 + lVar13 * 2) != 0);
          break;
        case 2:
          if (uVar9 == 0) {
            if (*DAT_1407bb780 == '\0') goto LAB_1400f282a;
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5) < 0x6c7)
            goto LAB_1400f282b;
            ppuVar10 = (undefined **)(lVar13 + 0xd8c0);
            uVar4 = *(ulonglong *)(lVar13 + 0xd8d8);
LAB_1400f2823:
            if (7 < uVar4) {
              ppuVar10 = (undefined **)*ppuVar10;
            }
          }
          else {
            if (*DAT_1407bb780 == '\0') {
LAB_1400f282a:
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if (0x6c5 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5)) {
              ppuVar10 = (undefined **)(lVar13 + 0xd8a0);
              uVar4 = *(ulonglong *)(lVar13 + 0xd8b8);
              goto LAB_1400f2823;
            }
LAB_1400f282b:
            ppuVar10 = &PTR_140610690;
          }
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while (*(short *)((longlong)ppuVar10 + lVar13 * 2) != 0);
          break;
        case 3:
          if (uVar9 == 0) {
            if (*DAT_1407bb780 == '\0') {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5) < 0x6c9) {
              ppuVar10 = &PTR_140610690;
            }
            else {
              ppuVar10 = (undefined **)(lVar13 + 0xd900);
              if (7 < *(ulonglong *)(lVar13 + 0xd918)) {
                ppuVar10 = (undefined **)*ppuVar10;
              }
            }
            lVar13 = -1;
            do {
              lVar13 = lVar13 + 1;
            } while (*(short *)((longlong)ppuVar10 + lVar13 * 2) != 0);
          }
          else {
            if (*DAT_1407bb780 == '\0') {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5) < 0x6c8) {
              ppuVar10 = &PTR_140610690;
            }
            else {
              ppuVar10 = (undefined **)(lVar13 + 0xd8e0);
              if (7 < *(ulonglong *)(lVar13 + 0xd8f8)) {
                ppuVar10 = (undefined **)*ppuVar10;
              }
            }
            lVar13 = -1;
            do {
              lVar13 = lVar13 + 1;
            } while (*(short *)((longlong)ppuVar10 + lVar13 * 2) != 0);
          }
          break;
        default:
          goto switchD_1400f2513_caseD_4;
        case 10:
          if (uVar9 == 0) {
            if (*DAT_1407bb780 == '\0') goto LAB_1400f279f;
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5) < 0x6cb)
            goto LAB_1400f27a0;
            ppuVar10 = (undefined **)(lVar13 + 0xd940);
            uVar4 = *(ulonglong *)(lVar13 + 0xd958);
LAB_1400f2798:
            if (7 < uVar4) {
              ppuVar10 = (undefined **)*ppuVar10;
            }
          }
          else {
            if (*DAT_1407bb780 == '\0') {
LAB_1400f279f:
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if (0x6c9 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5)) {
              ppuVar10 = (undefined **)(lVar13 + 0xd920);
              uVar4 = *(ulonglong *)(lVar13 + 0xd938);
              goto LAB_1400f2798;
            }
LAB_1400f27a0:
            ppuVar10 = &PTR_140610690;
          }
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while (*(short *)((longlong)ppuVar10 + lVar13 * 2) != 0);
          break;
        case 0xb:
          if (uVar9 == 0) {
            if (*DAT_1407bb780 == '\0') goto LAB_1400f268f;
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5) < 0x6c3)
            goto LAB_1400f2690;
            ppuVar10 = (undefined **)(lVar13 + 0xd840);
            uVar4 = *(ulonglong *)(lVar13 + 0xd858);
LAB_1400f2688:
            if (7 < uVar4) {
              ppuVar10 = (undefined **)*ppuVar10;
            }
          }
          else {
            if (*DAT_1407bb780 == '\0') {
LAB_1400f268f:
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if (0x6c1 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5)) {
              ppuVar10 = (undefined **)(lVar13 + 0xd820);
              uVar4 = *(ulonglong *)(lVar13 + 0xd838);
              goto LAB_1400f2688;
            }
LAB_1400f2690:
            ppuVar10 = &PTR_140610690;
          }
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while (*(short *)((longlong)ppuVar10 + lVar13 * 2) != 0);
          break;
        case 0xc:
          if (uVar9 == 0) {
            if (*DAT_1407bb780 == '\0') goto LAB_1400f271a;
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5) < 0x6c5)
            goto LAB_1400f271b;
            ppuVar10 = (undefined **)(lVar13 + 0xd880);
            uVar4 = *(ulonglong *)(lVar13 + 0xd898);
LAB_1400f2713:
            if (7 < uVar4) {
              ppuVar10 = (undefined **)*ppuVar10;
            }
          }
          else {
            if (*DAT_1407bb780 == '\0') {
LAB_1400f271a:
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if (0x6c3 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5)) {
              ppuVar10 = (undefined **)(lVar13 + 0xd860);
              uVar4 = *(ulonglong *)(lVar13 + 0xd878);
              goto LAB_1400f2713;
            }
LAB_1400f271b:
            ppuVar10 = &PTR_140610690;
          }
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while (*(short *)((longlong)ppuVar10 + lVar13 * 2) != 0);
        }
LAB_1400f296b:
        uVar14 = FUN_1400549d0(local_68);
      }
      else {
switchD_1400f2513_caseD_4:
        uVar14 = extraout_XMM0_Da;
        if (uVar11 == 4) {
          if (uVar9 == 0) {
            if (*DAT_1407bb780 == '\0') {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5) < 0x6cd) {
              ppuVar10 = &PTR_140610690;
            }
            else {
              ppuVar10 = (undefined **)(lVar13 + 0xd980);
              if (7 < *(ulonglong *)(lVar13 + 0xd998)) {
                ppuVar10 = (undefined **)*ppuVar10;
              }
            }
            lVar13 = -1;
            do {
              lVar13 = lVar13 + 1;
            } while (*(short *)((longlong)ppuVar10 + lVar13 * 2) != 0);
          }
          else {
            if (*DAT_1407bb780 == '\0') {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5) < 0x6cc) {
              ppuVar10 = &PTR_140610690;
            }
            else {
              ppuVar10 = (undefined **)(lVar13 + 0xd960);
              if (7 < *(ulonglong *)(lVar13 + 0xd978)) {
                ppuVar10 = (undefined **)*ppuVar10;
              }
            }
            lVar13 = -1;
            do {
              lVar13 = lVar13 + 1;
            } while (*(short *)((longlong)ppuVar10 + lVar13 * 2) != 0);
          }
          goto LAB_1400f296b;
        }
      }
      iVar8 = FUN_14003e910(uVar14,DAT_1407bbab0);
      if (iVar8 != 0) {
        switch(uVar11) {
        case 5:
          if (uVar9 == 0) {
            if (*DAT_1407bb780 == '\0') goto LAB_1400f2a50;
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5) < 0x6cf)
            goto LAB_1400f2a51;
            ppuVar10 = (undefined **)(lVar13 + 0xd9c0);
            uVar4 = *(ulonglong *)(lVar13 + 0xd9d8);
LAB_1400f2a49:
            if (7 < uVar4) {
              ppuVar10 = (undefined **)*ppuVar10;
            }
          }
          else {
            if (*DAT_1407bb780 == '\0') {
LAB_1400f2a50:
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if (0x6cd < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5)) {
              ppuVar10 = (undefined **)(lVar13 + 0xd9a0);
              uVar4 = *(ulonglong *)(lVar13 + 0xd9b8);
              goto LAB_1400f2a49;
            }
LAB_1400f2a51:
            ppuVar10 = &PTR_140610690;
          }
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while (*(short *)((longlong)ppuVar10 + lVar13 * 2) != 0);
          break;
        case 6:
          if (uVar9 == 0) {
            if (*DAT_1407bb780 == '\0') goto LAB_1400f2ada;
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5) < 0x6d1)
            goto LAB_1400f2adb;
            ppuVar10 = (undefined **)(lVar13 + 0xda00);
            uVar4 = *(ulonglong *)(lVar13 + 0xda18);
LAB_1400f2ad3:
            if (7 < uVar4) {
              ppuVar10 = (undefined **)*ppuVar10;
            }
          }
          else {
            if (*DAT_1407bb780 == '\0') {
LAB_1400f2ada:
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if (0x6cf < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5)) {
              ppuVar10 = (undefined **)(lVar13 + 0xd9e0);
              uVar4 = *(ulonglong *)(lVar13 + 0xd9f8);
              goto LAB_1400f2ad3;
            }
LAB_1400f2adb:
            ppuVar10 = &PTR_140610690;
          }
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while (*(short *)((longlong)ppuVar10 + lVar13 * 2) != 0);
          break;
        case 7:
          if (uVar9 == 0) {
            if (*DAT_1407bb780 == '\0') goto LAB_1400f2b5f;
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5) < 0x6d3)
            goto LAB_1400f2b60;
            ppuVar10 = (undefined **)(lVar13 + 0xda40);
            uVar4 = *(ulonglong *)(lVar13 + 0xda58);
LAB_1400f2b58:
            if (7 < uVar4) {
              ppuVar10 = (undefined **)*ppuVar10;
            }
          }
          else {
            if (*DAT_1407bb780 == '\0') {
LAB_1400f2b5f:
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if (0x6d1 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5)) {
              ppuVar10 = (undefined **)(lVar13 + 0xda20);
              uVar4 = *(ulonglong *)(lVar13 + 0xda38);
              goto LAB_1400f2b58;
            }
LAB_1400f2b60:
            ppuVar10 = &PTR_140610690;
          }
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while (*(short *)((longlong)ppuVar10 + lVar13 * 2) != 0);
          break;
        case 8:
          if (uVar9 == 0) {
            if (*DAT_1407bb780 == '\0') goto LAB_1400f2bea;
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5) < 0x6d5)
            goto LAB_1400f2beb;
            ppuVar10 = (undefined **)(lVar13 + 0xda80);
            uVar4 = *(ulonglong *)(lVar13 + 0xda98);
LAB_1400f2be3:
            if (7 < uVar4) {
              ppuVar10 = (undefined **)*ppuVar10;
            }
          }
          else {
            if (*DAT_1407bb780 == '\0') {
LAB_1400f2bea:
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if (0x6d3 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5)) {
              ppuVar10 = (undefined **)(lVar13 + 0xda60);
              uVar4 = *(ulonglong *)(lVar13 + 0xda78);
              goto LAB_1400f2be3;
            }
LAB_1400f2beb:
            ppuVar10 = &PTR_140610690;
          }
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while (*(short *)((longlong)ppuVar10 + lVar13 * 2) != 0);
          break;
        default:
          goto switchD_1400f29b0_caseD_9;
        case 0xd:
          if (uVar9 == 0) {
            if (*DAT_1407bb780 == '\0') goto LAB_1400f2c6f;
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5) < 0x85a)
            goto LAB_1400f2c70;
            ppuVar10 = (undefined **)(lVar13 + 0x10b20);
            uVar4 = *(ulonglong *)(lVar13 + 0x10b38);
LAB_1400f2c68:
            if (7 < uVar4) {
              ppuVar10 = (undefined **)*ppuVar10;
            }
          }
          else {
            if (*DAT_1407bb780 == '\0') {
LAB_1400f2c6f:
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if (0x858 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5)) {
              ppuVar10 = (undefined **)(lVar13 + 0x10b00);
              uVar4 = *(ulonglong *)(lVar13 + 0x10b18);
              goto LAB_1400f2c68;
            }
LAB_1400f2c70:
            ppuVar10 = &PTR_140610690;
          }
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while (*(short *)((longlong)ppuVar10 + lVar13 * 2) != 0);
          break;
        case 0xe:
          if (uVar9 == 0) {
            if (*DAT_1407bb780 == '\0') goto LAB_1400f2cfa;
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5) < 0x85c)
            goto LAB_1400f2cfb;
            ppuVar10 = (undefined **)(lVar13 + 0x10b60);
            uVar4 = *(ulonglong *)(lVar13 + 0x10b78);
LAB_1400f2cf3:
            if (7 < uVar4) {
              ppuVar10 = (undefined **)*ppuVar10;
            }
          }
          else {
            if (*DAT_1407bb780 == '\0') {
LAB_1400f2cfa:
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if (0x85a < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5)) {
              ppuVar10 = (undefined **)(lVar13 + 0x10b40);
              uVar4 = *(ulonglong *)(lVar13 + 0x10b58);
              goto LAB_1400f2cf3;
            }
LAB_1400f2cfb:
            ppuVar10 = &PTR_140610690;
          }
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while (*(short *)((longlong)ppuVar10 + lVar13 * 2) != 0);
          break;
        case 0xf:
          if (uVar9 == 0) {
            if (*DAT_1407bb780 == '\0') goto LAB_1400f2d7f;
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5) < 0x85e)
            goto LAB_1400f2d80;
            ppuVar10 = (undefined **)(lVar13 + 0x10ba0);
            uVar4 = *(ulonglong *)(lVar13 + 0x10bb8);
LAB_1400f2d78:
            if (7 < uVar4) {
              ppuVar10 = (undefined **)*ppuVar10;
            }
          }
          else {
            if (*DAT_1407bb780 == '\0') {
LAB_1400f2d7f:
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if (0x85c < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5)) {
              ppuVar10 = (undefined **)(lVar13 + 0x10b80);
              uVar4 = *(ulonglong *)(lVar13 + 0x10b98);
              goto LAB_1400f2d78;
            }
LAB_1400f2d80:
            ppuVar10 = &PTR_140610690;
          }
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while (*(short *)((longlong)ppuVar10 + lVar13 * 2) != 0);
          break;
        case 0x10:
          if (uVar9 == 0) {
            if (*DAT_1407bb780 == '\0') {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5) < 0x860) {
              ppuVar10 = &PTR_140610690;
            }
            else {
              ppuVar10 = (undefined **)(lVar13 + 0x10be0);
              if (7 < *(ulonglong *)(lVar13 + 0x10bf8)) {
                ppuVar10 = (undefined **)*ppuVar10;
              }
            }
            lVar13 = -1;
            do {
              lVar13 = lVar13 + 1;
            } while (*(short *)((longlong)ppuVar10 + lVar13 * 2) != 0);
          }
          else {
            if (*DAT_1407bb780 == '\0') {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
            if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5) < 0x85f) {
              ppuVar10 = &PTR_140610690;
            }
            else {
              ppuVar10 = (undefined **)(lVar13 + 0x10bc0);
              if (7 < *(ulonglong *)(lVar13 + 0x10bd8)) {
                ppuVar10 = (undefined **)*ppuVar10;
              }
            }
            lVar13 = -1;
            do {
              lVar13 = lVar13 + 1;
            } while (*(short *)((longlong)ppuVar10 + lVar13 * 2) != 0);
          }
        }
        FUN_1400549d0(local_68);
      }
switchD_1400f29b0_caseD_9:
      if (local_68[2] != 0) {
        FUN_1400c34e0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x1f8),local_68);
      }
      if (7 < (ulonglong)local_68[3]) {
        if ((0xfff < local_68[3] * 2 + 2U) &&
           (0x1f < (local_68[0] - *(longlong *)(local_68[0] + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        thunk_FUN_1401fe000();
      }
    }
    uVar11 = uVar11 + 1;
    if (0x1f < uVar11) {
      plVar5 = (longlong *)param_2[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
      return;
    }
  } while( true );
}



// ===== FUN_1400f34d0 @ 0x1400f34d0 [ui] =====

undefined8 FUN_1400f34d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ===== FUN_1400f5a00 @ 0x1400f5a00 [ui] =====

undefined8 * FUN_1400f5a00(float *param_1,undefined8 *param_2,byte *param_3,undefined8 param_4)

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
  if (*(longlong *)(param_1 + 4) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_140555c84("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_140558c80(0x18,puVar7,param_3,param_4,pfVar1,0);
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)param_3;
  fVar10 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar10 && fVar10 != *param_1) {
    FUN_1400f6df0(param_1);
    puVar7 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10);
    puVar9 = *(undefined8 **)pfVar1;
    if (puVar7 != puVar9) {
      iVar2 = *(int *)(puVar7 + 2);
      puVar9 = puVar7;
      while (*(int *)(puVar5 + 2) != iVar2) {
        if (puVar9 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10)
           ) goto LAB_1400f5ba6;
        puVar9 = (undefined8 *)puVar9[1];
        iVar2 = *(int *)(puVar9 + 2);
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_1400f5ba6:
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
      goto LAB_1400f5bf6;
    }
    if (*(undefined8 **)(lVar3 + 8 + uVar8 * 0x10) != puVar7) goto LAB_1400f5bf6;
  }
  *(undefined8 **)(lVar3 + 8 + uVar8 * 0x10) = puVar5;
LAB_1400f5bf6:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// ===== FUN_1400fbc90 @ 0x1400fbc90 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1400fbc90(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong local_res10 [3];
  undefined1 auStackY_a8 [32];
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  longlong local_50 [5];
  
  local_50[4] = DAT_1407502c0 ^ (ulonglong)auStackY_a8;
  local_res10[0] = param_2;
  local_58 = param_1;
  FUN_1403ef2f0(param_4);
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  FUN_140054cf0(local_50,L"MpServer",8);
  local_60 = (undefined8 *)FUN_140558c80(0x18);
  *local_60 = 0;
  local_60[1] = 0;
  *(undefined4 *)(local_60 + 1) = 1;
  *(undefined4 *)((longlong)local_60 + 0xc) = 1;
  *local_60 = std::_Ref_count_obj2<class_MockedLevelStorage>::vftable;
  local_68 = local_60 + 2;
  *local_68 = MockedLevelStorage::vftable;
  FUN_14033a760(param_1,&local_68);
  if (7 < (ulonglong)local_50[3]) {
    if (0xfff < local_50[3] * 2 + 2U) {
      if (0x1f < (local_50[0] - *(longlong *)(local_50[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  *param_1 = MultiPlayerLevel::vftable;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  FUN_1400fe9f0(param_1 + 0x62);
  FUN_1400fe940(param_1 + 0x6a);
  FUN_1400fe940(param_1 + 0x72);
  FUN_1400873e0(param_1 + 0x7a);
  param_1[0x60] = DAT_140790e60;
  uVar3 = FUN_140558c80(0x80);
  plVar4 = (longlong *)FUN_1400f7350(uVar3,param_1);
  param_1[0x5f] = plVar4;
  param_1[0x2e] = plVar4;
  uVar3 = (**(code **)(*plVar4 + 0x58))(plVar4);
  param_1[0x4e] = uVar3;
  *(undefined4 *)(param_1 + 0x4f) = *(undefined4 *)(param_1[0x2e] + 8);
  cVar2 = (**(code **)(*(longlong *)param_1[0x31] + 0x1c8))();
  if (cVar2 == '\0') {
    (**(code **)(*(longlong *)param_1[0x31] + 0x1d0))((longlong *)param_1[0x31],1);
    (**(code **)(*(longlong *)param_1[0x31] + 0x1d0))((longlong *)param_1[0x31],1);
  }
  if (param_2 != 0) {
    plVar4 = (longlong *)param_1[0x5d];
    if (plVar4 == (longlong *)param_1[0x5e]) {
      FUN_1400491a0(param_1 + 0x5c,plVar4,local_res10);
      param_2 = local_res10[0];
    }
    else {
      *plVar4 = param_2;
      param_1[0x5d] = param_1[0x5d] + 8;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x13c) = param_5;
  lVar1 = param_1[0x33];
  if (lVar1 != 0) {
    FUN_140045110(lVar1 + 0x78);
    FUN_1400451e0(lVar1 + 0x68);
    FUN_140063490(lVar1 + 0x48);
    FUN_140045110(lVar1 + 0x20);
    FUN_1400f5490(lVar1 + 0x10);
    thunk_FUN_1401fe000(lVar1,0xa0);
  }
  if (param_2 != 0) {
    param_1[0x33] = *(undefined8 *)(param_2 + 0xe0);
  }
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined1 *)(param_1 + 0x59) = 1;
  return param_1;
}



// ===== FUN_140136f20 @ 0x140136f20 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140136f20(longlong param_1,int param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  wchar_t *pwVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 uVar10;
  short sVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 ***pppuVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 ***pppuVar19;
  undefined1 auStackY_d8 [32];
  undefined8 ***local_88;
  undefined8 **ppuStack_80;
  undefined8 **local_78;
  undefined8 **ppuStack_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStackY_d8;
  uVar17 = 0;
  if (param_2 < 0x74) {
    iVar6 = 0x2e;
    uVar12 = uVar17;
    do {
      if (param_2 == iVar6) goto LAB_14013704f;
      uVar12 = uVar12 + 1;
      iVar6 = *(int *)(&UNK_140609820 + uVar12 * 4);
    } while (iVar6 < 0x74);
  }
  lVar18 = 0;
  pwVar7 = L"font/Default";
  do {
    uVar12 = 0xffffffffffffffff;
    do {
      uVar12 = uVar12 + 1;
    } while (pwVar7[uVar12] != L'\0');
    uVar1 = param_3[2];
    puVar15 = param_3;
    if (7 < (ulonglong)param_3[3]) {
      puVar15 = (undefined8 *)*param_3;
    }
    uVar16 = uVar1;
    if (uVar12 < uVar1) {
      uVar16 = uVar12;
    }
    iVar6 = FUN_140054430(puVar15,pwVar7,uVar16);
    if (((iVar6 == 0) && (uVar12 <= uVar1)) && (uVar1 <= uVar12)) goto LAB_14013704f;
    lVar18 = lVar18 + 1;
    pwVar7 = (wchar_t *)(&PTR_u_font_Default_1406097b0)[lVar18];
  } while (pwVar7 != (wchar_t *)0x0);
  cVar5 = '\0';
LAB_140136ffb:
  local_88 = (undefined8 ****)0x0;
  ppuStack_80 = (undefined8 ***)0x0;
  local_78 = (undefined8 ***)0x0;
  ppuStack_70 = (undefined8 ***)0x0;
  FUN_140054cf0(&local_88,&PTR_140610690,0);
  lVar18 = *(longlong *)(param_1 + 0x148);
  plVar13 = *(longlong **)(lVar18 + 0xb8);
  if (plVar13 != DAT_1407915a8) {
    cVar4 = (**(code **)*plVar13)();
    plVar13 = DAT_1407915a8;
    if (cVar4 != '\0') {
      plVar13 = *(longlong **)(lVar18 + 0xb8);
    }
    pcVar2 = *(code **)(*plVar13 + 0x68);
    if (0x7ffffffffffffffe - param_3[2] < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_140054e40();
    }
    FUN_140048da0(local_68);
    uVar17 = 3;
    cVar4 = (*pcVar2)(plVar13,local_68,0);
    if (cVar4 != '\0') {
      bVar3 = true;
      goto LAB_1401370ce;
    }
  }
  bVar3 = false;
LAB_1401370ce:
  if ((uVar17 & 1) != 0) {
    FUN_140055150(local_68);
  }
  if (bVar3) {
    lVar18 = *(longlong *)(param_1 + 0x148);
    cVar5 = (**(code **)**(undefined8 **)(lVar18 + 0xb8))();
    plVar13 = DAT_1407915a8;
    if (cVar5 != '\0') {
      plVar13 = *(longlong **)(lVar18 + 0xb8);
    }
    ppppuVar8 = (undefined8 ****)(**(code **)(*plVar13 + 0x80))(plVar13,local_68);
    if (&local_88 != ppppuVar8) {
      if ((undefined8 ***)0x7 < ppuStack_70) {
        ppppuVar9 = (undefined8 ****)local_88;
        if ((0xfff < (longlong)ppuStack_70 * 2 + 2U) &&
           (ppppuVar9 = (undefined8 ****)local_88[-1],
           0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar9)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        thunk_FUN_1401fe000(ppppuVar9);
      }
      local_88 = *ppppuVar8;
      ppuStack_80 = ppppuVar8[1];
      local_78 = ppppuVar8[2];
      ppuStack_70 = ppppuVar8[3];
      ppppuVar8[2] = (undefined8 ***)0x0;
      ppppuVar8[3] = (undefined8 ***)0x7;
      *(undefined2 *)ppppuVar8 = 0;
    }
    FUN_140055150(local_68);
    lVar18 = *(longlong *)(param_1 + 0x148);
    cVar5 = (**(code **)**(undefined8 **)(lVar18 + 0xb8))();
    plVar13 = DAT_1407915a8;
    if (cVar5 != '\0') {
      plVar13 = *(longlong **)(lVar18 + 0xb8);
    }
    uVar10 = (**(code **)(*plVar13 + 0x90))(plVar13,param_3);
  }
  else {
    FUN_140315d00(param_3);
    ppppuVar8 = (undefined8 ****)(**(code **)(*DAT_1407915a8 + 0x80))(DAT_1407915a8,local_68,cVar5);
    if (&local_88 != ppppuVar8) {
      if ((undefined8 ***)0x7 < ppuStack_70) {
        ppppuVar9 = (undefined8 ****)local_88;
        if ((0xfff < (longlong)ppuStack_70 * 2 + 2U) &&
           (ppppuVar9 = (undefined8 ****)local_88[-1],
           0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar9)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        thunk_FUN_1401fe000(ppppuVar9);
      }
      local_88 = *ppppuVar8;
      ppuStack_80 = ppppuVar8[1];
      local_78 = ppppuVar8[2];
      ppuStack_70 = ppppuVar8[3];
      ppppuVar8[2] = (undefined8 ***)0x0;
      ppppuVar8[3] = (undefined8 ***)0x7;
      *(undefined2 *)ppppuVar8 = 0;
    }
    pppuVar19 = (undefined8 ***)0x0;
    FUN_140055150(local_68);
    pppuVar14 = pppuVar19;
    if ((undefined8 ***)local_78 != (undefined8 ***)0x0) {
      do {
        ppppuVar8 = &local_88;
        if ((undefined8 ***)0x7 < ppuStack_70) {
          ppppuVar8 = (undefined8 ****)local_88;
        }
        sVar11 = *(short *)((longlong)ppppuVar8 + (longlong)pppuVar14 * 2);
        if (sVar11 == 0x2f) {
          sVar11 = 0x5c;
        }
        (&DAT_1407c1d60)[(longlong)pppuVar14] = (char)sVar11;
        pppuVar14 = (undefined8 ***)(ulonglong)((int)pppuVar14 + 1);
      } while (pppuVar14 < local_78);
    }
    if ((undefined8 ***)0xff < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_140559180();
    }
    (&DAT_1407c1d60)[(longlong)local_78] = 0;
    if (param_2 < 0x74) {
      iVar6 = 0x24;
      pppuVar14 = pppuVar19;
      do {
        if (param_2 == iVar6) goto LAB_140137437;
        pppuVar14 = (undefined8 ***)((longlong)pppuVar14 + 1);
        iVar6 = *(int *)(&UNK_1406097f0 + (longlong)pppuVar14 * 4);
      } while (iVar6 < 0x74);
    }
    pwVar7 = L"misc/watercolor.png";
    do {
      uVar17 = 0xffffffffffffffff;
      do {
        uVar17 = uVar17 + 1;
      } while (pwVar7[uVar17] != L'\0');
      uVar12 = param_3[2];
      puVar15 = param_3;
      if (7 < (ulonglong)param_3[3]) {
        puVar15 = (undefined8 *)*param_3;
      }
      iVar6 = FUN_140054430(puVar15,pwVar7);
      plVar13 = DAT_1407915a8;
      if (((iVar6 == 0) && (uVar17 <= uVar12)) && (uVar12 <= uVar17)) goto LAB_140137437;
      pppuVar19 = (undefined8 ***)((longlong)pppuVar19 + 1);
      pwVar7 = (wchar_t *)(&PTR_u_misc_watercolor_png_140609798)[(longlong)pppuVar19];
    } while (pwVar7 != (wchar_t *)0x0);
    if (cVar5 == '\0') {
      pcVar2 = *(code **)(*DAT_1407915a8 + 0x90);
      if (0x7ffffffffffffffe - param_3[2] < 6) {
                    /* WARNING: Subroutine does not return */
        FUN_140054e40();
      }
      FUN_140048da0(local_68);
      uVar10 = (*pcVar2)(plVar13,local_68);
      FUN_140055150(local_68);
    }
    else {
LAB_140137437:
      uVar10 = (**(code **)(*DAT_1407915a8 + 0x90))(DAT_1407915a8,param_3);
    }
  }
  if ((undefined8 ***)0x7 < ppuStack_70) {
    if ((0xfff < (longlong)ppuStack_70 * 2 + 2U) &&
       (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)local_88[-1])))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  return uVar10;
LAB_14013704f:
  cVar5 = '\x01';
  goto LAB_140136ffb;
}



// ===== FUN_1401a9770 @ 0x1401a9770 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1401a9770(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined1 auStackY_78 [32];
  undefined1 local_40 [16];
  longlong local_30 [5];
  
  local_30[4] = DAT_1407502c0 ^ (ulonglong)auStackY_78;
  lVar1 = param_1[0x24];
  bVar4 = false;
  if (lVar1 != 0) {
    local_30[0] = 0;
    local_30[1] = 0;
    local_30[2] = 0;
    local_30[3] = 0;
    FUN_140054cf0(local_30,L"skin.swf",8);
    bVar4 = true;
    uVar3 = 0;
    if (local_30[2] * 2 != 0) {
      do {
        uVar3 = uVar3 + 1;
      } while (uVar3 < (ulonglong)(local_30[2] * 2));
    }
    FUN_1400490c0(lVar1 + 0x28,local_40);
  }
  if ((bVar4) && (7 < (ulonglong)local_30[3])) {
    if ((0xfff < local_30[3] * 2 + 2U) &&
       (0x1f < (local_30[0] - *(longlong *)(local_30[0] + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  FUN_1402648a0();
  *(undefined1 *)(param_1 + 0x23) = 1;
  (**(code **)(*param_1 + 0x98))(param_1);
  cVar2 = (**(code **)(*param_1 + 8))(param_1);
  if ((cVar2 == '\0') &&
     ((DAT_1407bd9c8 == 0 ||
      ((*(char *)(DAT_1407bd9c8 + 0x55) != '\0' && (*(char *)(DAT_1407bd9c8 + 0x54) == '\0')))))) {
    FUN_140002674(&DAT_140784008,"TPACK");
  }
  return;
}



// ===== FUN_1401f1d30 @ 0x1401f1d30 [ui] =====

void FUN_1401f1d30(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_1401f23a0(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      thunk_FUN_1401fe000(puVar1,0x28);
      puVar1 = puVar2;
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_res8 = *(undefined8 *)(param_1 + 8);
    FUN_140050640(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&local_res8);
  }
  return;
}



// ===== FUN_140261470 @ 0x140261470 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140261470(longlong param_1,uint param_2,float param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 ****ppppuVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  uint local_98 [2];
  undefined8 ***local_90 [3];
  ulonglong local_78;
  ulonglong local_70;
  
  local_70 = DAT_1407502c0 ^ (ulonglong)auStack_d8;
  lVar3 = **(longlong **)(param_1 + 0x38);
  *param_4 = (ulonglong)
             (uint)((int)(((ulonglong)param_2 & 0xffffffff0000ffff) /
                         (ulonglong)*(uint *)(lVar3 + 0x58)) *
                    *(int *)(lVar3 + 100) * *(int *)(lVar3 + 0x50) +
                   (int)(((ulonglong)param_2 & 0xffffffff0000ffff) %
                        (ulonglong)*(uint *)(lVar3 + 0x58)) * *(int *)(lVar3 + 0x60)) +
             (*(longlong **)(param_1 + 0x38))[10];
  fVar7 = 1.0;
  fVar8 = 1.0 / *(float *)(**(longlong **)(param_1 + 0x38) + 0x70);
  fVar6 = fVar8 * 1.5;
  while (fVar6 < param_3) {
    fVar7 = fVar7 + 1.0;
    fVar6 = (fVar7 + 0.5) * fVar8;
  }
  fVar6 = 0.0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x10) < DAT_1407c1c90) &&
     (FUN_1405593c0(&DAT_1407c1c90), DAT_1407c1c90 == -1)) {
    _DAT_1407c1ca0 = 0;
    DAT_1407c1ca8 = 0;
    DAT_1407c1cb0 = 0;
    DAT_1407c1ca8 = FUN_140558c80(0x18);
    *(longlong *)DAT_1407c1ca8 = DAT_1407c1ca8;
    *(longlong *)(DAT_1407c1ca8 + 8) = DAT_1407c1ca8;
    DAT_1407c1cb8 = 0;
    _DAT_1407c1cc0 = 0;
    uRam00000001407c1cc8 = 0;
    _DAT_1407c1cd0 = 7;
    _DAT_1407c1cd8 = 8;
    _DAT_1407c1ca0 = 0x3f800000;
    FUN_14004bae0(&DAT_1407c1cb8,0x10,DAT_1407c1ca8);
    atexit(FUN_1405eb510);
    _Init_thread_footer(&DAT_1407c1c90);
  }
  local_98[0] = (int)(param_3 * 100.0) ^ *(uint *)(param_1 + 0x38);
  uVar4 = ((((ulonglong)(local_98[0] >> 8 & 0xff) ^
            ((ulonglong)(local_98[0] & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3
           ^ (ulonglong)(local_98[0] >> 0x10 & 0xff)) * 0x100000001b3 ^
          (ulonglong)(local_98[0] >> 0x18)) * 0x100000001b3 & _DAT_1407c1cd0;
  lVar3 = *(longlong *)(DAT_1407c1cb8 + 8 + uVar4 * 0x10);
  if (lVar3 == DAT_1407c1ca8) {
LAB_140261690:
    lVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x10);
    while (local_98[0] != uVar1) {
      if (lVar3 == *(longlong *)(DAT_1407c1cb8 + uVar4 * 0x10)) goto LAB_140261690;
      lVar3 = *(longlong *)(lVar3 + 8);
      uVar1 = *(uint *)(lVar3 + 0x10);
    }
  }
  lVar2 = DAT_1407c1ca8;
  if (lVar3 != 0) {
    lVar2 = lVar3;
  }
  if ((lVar2 == DAT_1407c1ca8) && (DAT_1407c1cb0 < 0x32)) {
    FUN_1400f5a00(&DAT_1407c1ca0,local_90,local_98);
    FUN_140054c30(local_90,**(undefined8 **)(param_1 + 0x38));
    ppppuVar5 = local_90;
    if (0xf < local_78) {
      ppppuVar5 = (undefined8 ****)local_90[0];
    }
    local_a8 = (double)fVar7;
    local_b0 = (double)fVar8;
    local_b8 = (double)param_3;
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,
                  "[FONT-DBG] GetGlyphBitmap: font=%s glyph=%d pixel_scale=%.3f truePixelScale=%.1f glyphScale=%.0f\n"
                  ,ppppuVar5,param_2);
  }
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(**(longlong **)(param_1 + 0x38) + 0x60);
  *(undefined4 *)((longlong)param_4 + 0xc) = *(undefined4 *)(**(longlong **)(param_1 + 0x38) + 100);
  *(undefined4 *)((longlong)param_4 + 0x1c) = 0;
  *(int *)(param_4 + 4) =
       (int)((float)-*(int *)(**(longlong **)(param_1 + 0x38) + 100) *
            *(float *)(**(longlong **)(param_1 + 0x38) + 0x68));
  *(undefined4 *)((longlong)param_4 + 0x14) = 0;
  *(float *)((longlong)param_4 + 0x24) = fVar8;
  fVar7 = fVar8;
  if (fVar8 <= param_3) {
    fVar6 = fVar8;
    fVar7 = 99.0;
  }
  *(float *)(param_4 + 5) = fVar6;
  *(float *)((longlong)param_4 + 0x2c) = fVar7;
  *(uint *)(param_4 + 3) = (uint)(fVar8 <= param_3);
  *(undefined4 *)(param_4 + 2) = *(undefined4 *)(**(longlong **)(param_1 + 0x38) + 0x50);
  param_4[6] = 0;
  return 1;
}



// ===== FUN_1402648a0 @ 0x1402648a0 [ui] =====

void FUN_1402648a0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  
  puVar7 = &DAT_1407bda58;
  lVar8 = 5;
  do {
    plVar9 = (longlong *)*puVar7;
    lVar10 = 8;
    do {
      plVar9 = plVar9 + 1;
      lVar1 = *plVar9;
      plVar2 = *(longlong **)(lVar1 + 0x28);
      for (plVar6 = *(longlong **)(lVar1 + 0x20); plVar6 != plVar2; plVar6 = plVar6 + 1) {
        lVar3 = *plVar6;
        IggyPlayerDestroy(*(undefined8 *)(lVar3 + 0x10));
        *(undefined8 *)(lVar3 + 0x10) = 0;
        if (*(longlong *)(lVar3 + 0x150) != *(longlong *)(lVar3 + 0x158)) {
          *(longlong *)(lVar3 + 0x158) = *(longlong *)(lVar3 + 0x150);
        }
        FUN_140052480(lVar3 + 0x58);
      }
      plVar2 = *(longlong **)(lVar1 + 0x10);
      for (plVar6 = *(longlong **)(lVar1 + 8); plVar6 != plVar2; plVar6 = plVar6 + 1) {
        lVar1 = *plVar6;
        IggyPlayerDestroy(*(undefined8 *)(lVar1 + 0x10));
        *(undefined8 *)(lVar1 + 0x10) = 0;
        if (*(longlong *)(lVar1 + 0x150) != *(longlong *)(lVar1 + 0x158)) {
          *(longlong *)(lVar1 + 0x158) = *(longlong *)(lVar1 + 0x150);
        }
        FUN_140052480(lVar1 + 0x58);
      }
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    puVar7 = puVar7 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar5 = 0x15;
  piVar4 = &DAT_1407bd8c4;
  do {
    if (*piVar4 != -1) {
      IggyLibraryDestroy();
    }
    *piVar4 = -1;
    piVar4 = piVar4 + -1;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1407a4978);
  FUN_140262a80();
  puVar7 = &DAT_1407bda60;
  do {
    FUN_140269d80(*puVar7);
    puVar7 = puVar7 + 1;
  } while ((longlong)puVar7 < 0x1407bda80);
  FUN_140269d80(DAT_1407bda58);
  (**(code **)(DAT_1407bc300 + 0x30))(&DAT_1407bc300,0,0,0x4e,1);
                    /* WARNING: Could not recover jumptable at 0x000140264a46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1407a4978);
  return;
}



// ===== FUN_140267870 @ 0x140267870 [ui] =====

void FUN_140267870(void)

{
  FUN_14002fee0(&DAT_1407bb5d0,6,"UIController::SetIgnoreAutosaveMenuDisplayed is not implemented\n"
               );
  return;
}



// ===== FUN_140267de0 @ 0x140267de0 [ui] =====

void FUN_140267de0(void)

{
  FUN_14002fee0(&DAT_1407bb5d0,6,"UIController::RefreshTooltips is not implemented\n");
  return;
}



// ===== FUN_140267f20 @ 0x140267f20 [ui] =====

void FUN_140267f20(longlong param_1,int param_2,byte param_3)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  longlong *plVar4;
  bool bVar5;
  
  param_1 = param_1 + (longlong)(param_2 + 1) * 8;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1758) + 0x60);
  if (lVar1 != 0) {
    plVar4 = (longlong *)(lVar1 + 0x198);
    (**(code **)(*plVar4 + 0xf0))
              (plVar4,(byte)((ushort)*(undefined2 *)(DAT_1407bb7b0 + 6) >> 9) & param_3);
  }
  if (DAT_140790e60 != 0) {
    bVar5 = *(longlong *)(DAT_140790e60 + 0x70) != 0;
    bVar3 = bVar5 + 1;
    if (*(longlong *)(DAT_140790e60 + 0x80) == 0) {
      bVar3 = bVar5;
    }
    bVar2 = bVar3 + 1;
    if (*(longlong *)(DAT_140790e60 + 0x90) == 0) {
      bVar2 = bVar3;
    }
    bVar3 = bVar2 + 1;
    if (*(longlong *)(DAT_140790e60 + 0xa0) == 0) {
      bVar3 = bVar2;
    }
    if (1 < bVar3) {
      lVar1 = *(longlong *)(param_1 + 0x1758);
      plVar4 = *(longlong **)(lVar1 + 0x50);
      if (((plVar4 != (longlong *)0x0) && (*(char *)(lVar1 + 0x76) == '\0')) &&
         (bVar3 = (byte)((ushort)*(undefined2 *)(DAT_1407bb7b0 + 6) >> 9) & 1,
         *(byte *)((longlong)plVar4 + 0x1ca) != bVar3)) {
        *(byte *)((longlong)plVar4 + 0x1ca) = bVar3;
                    /* WARNING: Could not recover jumptable at 0x000140267fea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0xf8))();
        return;
      }
    }
  }
  return;
}



// ===== FUN_140268050 @ 0x140268050 [ui] =====

void FUN_140268050(void)

{
  FUN_14002fee0(&DAT_1407bb5d0,6,"UIController::UpdateSelectedItemPos not implemented\n");
  return;
}



// ===== FUN_140268070 @ 0x140268070 [ui] =====

void FUN_140268070(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"UIController::HandleDLCMountingComplete - m_groups[%d]\n",0);
}



// ===== FUN_140268100 @ 0x140268100 [ui] =====

void FUN_140268100(void)

{
  FUN_14002fee0(&DAT_1407bb5d0,6,"UIController::HandleTMSDLCFileRetrieved not implemented\n");
  return;
}



// ===== FUN_140268120 @ 0x140268120 [ui] =====

void FUN_140268120(void)

{
  FUN_14002fee0(&DAT_1407bb5d0,6,"UIController::HandleTMSBanFileRetrieved not implemented\n");
  return;
}



// ===== FUN_140268630 @ 0x140268630 [ui] =====

void FUN_140268630(void)

{
  FUN_14002fee0(&DAT_1407bb5d0,6,"UIController::HideAllGameUIElements not implemented\n");
  return;
}



// ===== FUN_140269320 @ 0x140269320 [ui] =====

longlong * FUN_140269320(float *param_1,longlong *param_2,undefined8 *param_3)

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
  longlong local_48;
  longlong lStack_40;
  float *local_38;
  longlong *local_30;
  
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
  FUN_1400490c0(param_1,&local_48,param_3,uVar7);
  if (lStack_40 != 0) {
    *param_2 = lStack_40;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_140555c84("unordered_map/set too long");
  }
  local_30 = (longlong *)0x0;
  local_38 = param_1 + 2;
  plVar2 = (longlong *)FUN_140558c80(0x48);
  local_30 = plVar2;
  FUN_140055000(plVar2 + 2,param_3);
  *(undefined8 *)((longlong)plVar2 + 0x3c) = 0;
  *(undefined4 *)((longlong)plVar2 + 0x44) = 0;
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
    plVar3 = (longlong *)FUN_1400490c0(param_1,&local_38,plVar2 + 2,uVar7);
    local_48 = *plVar3;
  }
  plVar3 = *(longlong **)(local_48 + 8);
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *plVar2 = local_48;
  plVar2[1] = (longlong)plVar3;
  *plVar3 = (longlong)plVar2;
  *(longlong **)(local_48 + 8) = plVar2;
  uVar7 = *(ulonglong *)(param_1 + 0xc) & uVar7;
  lVar4 = *(longlong *)(param_1 + 6);
  lVar1 = *(longlong *)(lVar4 + uVar7 * 0x10);
  if (lVar1 == *(longlong *)(param_1 + 2)) {
    *(longlong **)(lVar4 + uVar7 * 0x10) = plVar2;
  }
  else {
    if (lVar1 == local_48) {
      *(longlong **)(lVar4 + uVar7 * 0x10) = plVar2;
      goto LAB_14026954f;
    }
    if (*(longlong **)(lVar4 + 8 + uVar7 * 0x10) != plVar3) goto LAB_14026954f;
  }
  *(longlong **)(lVar4 + 8 + uVar7 * 0x10) = plVar2;
LAB_14026954f:
  *param_2 = (longlong)plVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// ===== FUN_14026ab20 @ 0x14026ab20 [ui] =====

undefined8 FUN_14026ab20(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      iVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + lVar2 * 8) + 0x50))();
      if (iVar1 == param_2) {
        return 1;
      }
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return 0;
}



// ===== FUN_14026ad20 @ 0x14026ad20 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14026ad20(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined1 auStackY_128 [32];
  longlong *local_f8;
  longlong *local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [40];
  undefined4 local_b8;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1407502c0 ^ (ulonglong)auStackY_128;
  uVar10 = 0;
  local_e8 = param_3;
  switch(param_3) {
  case 1:
    plVar6 = (longlong *)FUN_140558c80(0x1a8);
    local_f0 = plVar6;
    FUN_14026d220(plVar6,param_2,param_1);
    *plVar6 = (longlong)UIScene_Intro::vftable;
    FUN_14026df40(plVar6);
    (**(code **)(*plVar6 + 0x40))(plVar6);
    (**(code **)(*plVar6 + 0x20))(plVar6);
    *(undefined1 *)((longlong)plVar6 + 0x124) = 1;
    *(undefined2 *)(plVar6 + 0x33) = 0;
    local_b8 = 4;
    local_a8 = 0;
    local_98 = 3;
    local_88 = 0;
    local_78 = 3;
    local_68 = 0;
    lVar4 = plVar6[0x34];
    uVar7 = IggyPlayerRootPath(plVar6[2]);
    IggyPlayerCallMethodRS(plVar6[2],local_e0,uVar7,lVar4);
    param_3 = local_e8;
    break;
  case 2:
    local_f0 = (longlong *)FUN_140558c80(0x398);
    plVar6 = (longlong *)FUN_1402b8670(local_f0,param_2);
    break;
  case 3:
    local_f0 = (longlong *)FUN_140558c80(0x878);
    plVar6 = (longlong *)FUN_1402b6520(local_f0,param_2);
    break;
  case 4:
    local_f0 = (longlong *)FUN_140558c80(0x6f0);
    plVar6 = (longlong *)FUN_140289a50(local_f0,param_2,param_4,param_1);
    break;
  case 5:
    local_f0 = (longlong *)FUN_140558c80(0x788);
    plVar6 = (longlong *)FUN_1402dc190(local_f0,param_2);
    break;
  case 6:
  case 7:
    local_f8 = (longlong *)FUN_140558c80(0x6268);
    plVar6 = (longlong *)FUN_1402d1650(local_f8,param_2,param_4,param_1);
    break;
  case 8:
    local_f8 = (longlong *)FUN_140558c80(0x1128);
    plVar6 = (longlong *)FUN_1402ed730(local_f8,param_2,param_4,param_1);
    break;
  case 9:
  case 10:
    local_f8 = (longlong *)FUN_140558c80(0xae0);
    plVar6 = (longlong *)FUN_1402e7840(local_f8,param_2,param_4,param_1);
    break;
  case 0xb:
    local_f8 = (longlong *)FUN_140558c80(0xb38);
    plVar6 = (longlong *)FUN_1402f0910(local_f8,param_2,param_4,param_1);
    break;
  case 0xc:
    local_f8 = (longlong *)FUN_140558c80(0xae0);
    plVar6 = (longlong *)FUN_1402ea3a0(local_f8,param_2,param_4,param_1);
    break;
  case 0xd:
    local_f8 = (longlong *)FUN_140558c80(0x17f0);
    plVar6 = (longlong *)FUN_1402942f0(local_f8,param_2);
    break;
  default:
    goto switchD_14026ad7a_caseD_e;
  case 0xf:
    local_f8 = (longlong *)FUN_140558c80(0x868);
    plVar6 = (longlong *)FUN_1402bd290(local_f8,param_2);
    break;
  case 0x10:
    local_f0 = (longlong *)FUN_140558c80(0x2790);
    plVar6 = (longlong *)FUN_1402bf2e0(local_f0,param_2,param_4,param_1);
    break;
  case 0x11:
    local_f8 = (longlong *)FUN_140558c80(0x2c8);
    plVar6 = (longlong *)FUN_1402c23c0(local_f8,param_2);
    break;
  case 0x12:
    local_f0 = (longlong *)FUN_140558c80(0x28c8);
    plVar6 = (longlong *)FUN_1402ba9e0(local_f0,param_2);
    break;
  case 0x13:
    local_f8 = (longlong *)FUN_140558c80(0xb30);
    plVar6 = (longlong *)FUN_1402c6980(local_f8,param_2);
    break;
  case 0x14:
    local_f8 = (longlong *)FUN_140558c80(1000);
    plVar6 = (longlong *)FUN_1402c36e0(local_f8,param_2);
    break;
  case 0x15:
    local_f8 = (longlong *)FUN_140558c80(1000);
    plVar6 = (longlong *)FUN_1402c3ec0(local_f8,param_2);
    break;
  case 0x16:
    local_f8 = (longlong *)FUN_140558c80(0x970);
    plVar6 = (longlong *)FUN_1402c4a80(local_f8,param_2);
    break;
  case 0x17:
    local_f8 = (longlong *)FUN_140558c80(0xa50);
    plVar6 = (longlong *)FUN_1402c8d70(local_f8,param_2);
    break;
  case 0x18:
    local_f8 = (longlong *)FUN_140558c80(0x860);
    plVar6 = (longlong *)FUN_1402c5c80(local_f8,param_2);
    break;
  case 0x19:
    local_f0 = (longlong *)FUN_140558c80(0x738);
    plVar6 = (longlong *)FUN_1402a8b40(local_f0,param_2);
    break;
  case 0x1a:
    local_f0 = (longlong *)FUN_140558c80(0x1b8);
    plVar6 = (longlong *)FUN_1402bbbb0(local_f0,param_2);
    break;
  case 0x1b:
    local_f0 = (longlong *)FUN_140558c80(0x488);
    plVar6 = (longlong *)FUN_1402d4430(local_f0,param_2);
    break;
  case 0x1d:
    local_f0 = (longlong *)FUN_140558c80(0x1170);
    plVar6 = (longlong *)FUN_14029b830(local_f0,param_2);
    break;
  case 0x1e:
    local_f0 = (longlong *)FUN_140558c80(0xa78);
    plVar6 = (longlong *)FUN_1402b0d20(local_f0,param_2);
    break;
  case 0x1f:
    plVar6 = (longlong *)FUN_140558c80(0x1590);
    local_f0 = plVar6;
    FUN_14026d220(plVar6,param_2,param_1);
    *plVar6 = (longlong)UIScene_JoinMenu::vftable;
    plVar1 = plVar6 + 0x33;
    local_f8 = plVar1;
    FUN_14027f6d0(plVar1);
    plVar6[0x4f] = 0;
    plVar6[0x50] = 0;
    *(undefined1 *)(plVar6 + 0x4e) = 0;
    *(undefined4 *)((longlong)plVar6 + 0x1a4) = 0;
    *plVar1 = (longlong)UIControl_Button::vftable;
    plVar1 = plVar6 + 0x52;
    local_f8 = plVar1;
    FUN_14027f6d0(plVar1);
    plVar6[0x6e] = 0;
    plVar6[0x6f] = 0;
    *(undefined1 *)(plVar6 + 0x6d) = 0;
    *(undefined4 *)((longlong)plVar6 + 0x29c) = 0;
    *plVar1 = (longlong)UIControl_ButtonList::vftable;
    plVar6[0x77] = 0;
    _eh_vector_constructor_iterator_(plVar6 + 0x78,0xf8,9,FUN_140283ab0,FUN_140271e20);
    _eh_vector_constructor_iterator_(plVar6 + 399,0xf8,9,FUN_140283ab0,FUN_140271e20);
    plVar6[0x2a9] = 0;
    plVar6[0x2aa] = 0;
    plVar6[0x2ab] = 0;
    plVar6[0x2ac] = 7;
    *(undefined2 *)(plVar6 + 0x2a9) = 0;
    plVar6[0x2ad] = 0;
    plVar6[0x2ae] = 0;
    plVar6[0x2af] = 0;
    plVar6[0x2b0] = 7;
    *(undefined2 *)(plVar6 + 0x2ad) = 0;
    FUN_14026df40(plVar6);
    (**(code **)(*plVar6 + 0x40))(plVar6);
    (**(code **)(*plVar6 + 0x20))(plVar6);
    *(undefined1 *)((longlong)plVar6 + 0x124) = 1;
    plVar6[0x2a6] = *param_4;
    *(undefined2 *)((longlong)plVar6 + 0x153a) = 0;
    *(undefined1 *)((longlong)plVar6 + 0x1539) = 0;
    *(undefined4 *)((longlong)plVar6 + 0x153c) = *(undefined4 *)((longlong)param_4 + 0xc);
    *(undefined4 *)(plVar6 + 0x2a8) = 0;
    plVar6[0x2b1] = -1;
    param_3 = local_e8;
    break;
  case 0x20:
    local_f0 = (longlong *)FUN_140558c80(0x950);
    plVar6 = (longlong *)FUN_1402dd7f0(local_f0,param_2,param_4,param_1);
    break;
  case 0x21:
    local_f0 = (longlong *)FUN_140558c80(0x4e8);
    plVar6 = (longlong *)FUN_1402d7c60(local_f0,param_2);
    break;
  case 0x22:
    local_f0 = (longlong *)FUN_140558c80(0x670);
    plVar6 = (longlong *)FUN_1402889b0(local_f0,param_2,param_4,param_1);
    break;
  case 0x23:
    local_f0 = (longlong *)FUN_140558c80(0x868);
    plVar6 = (longlong *)FUN_14029e980(local_f0,param_2,param_4,param_1);
    break;
  case 0x25:
    plVar6 = (longlong *)FUN_140558c80(0x198);
    local_f0 = plVar6;
    FUN_14026d220(plVar6,param_2,param_1);
    *plVar6 = (longlong)UIScene_TrialExitUpsell::vftable;
    FUN_14026df40(plVar6);
    (**(code **)(*plVar6 + 0x40))(plVar6);
    (**(code **)(*plVar6 + 0x20))(plVar6);
    *(undefined1 *)((longlong)plVar6 + 0x124) = 1;
    break;
  case 0x26:
    local_f0 = (longlong *)FUN_140558c80(0x1168);
    plVar6 = (longlong *)FUN_1402acc10(local_f0,param_2,param_4,param_1);
    break;
  case 0x28:
    plVar6 = (longlong *)FUN_140558c80(0x768);
    local_f0 = plVar6;
    FUN_14026d220(plVar6,param_2,param_1);
    *plVar6 = (longlong)UIScene_ReinstallMenu::vftable;
    _eh_vector_constructor_iterator_(plVar6 + 0x33,0xf8,6,FUN_140280b20,FUN_140271e20);
    FUN_14026df40(plVar6);
    (**(code **)(*plVar6 + 0x40))(plVar6);
    (**(code **)(*plVar6 + 0x20))(plVar6);
    *(undefined1 *)((longlong)plVar6 + 0x124) = 1;
    break;
  case 0x29:
    local_f8 = (longlong *)FUN_140558c80(0x1530);
    plVar6 = (longlong *)FUN_1402cac10(local_f8,param_2);
    break;
  case 0x2b:
    cVar5 = FUN_14026ab20(param_1,0x2b);
    if (cVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,
                    "Skipped eUIScene_InGameHostOptionsMenu, we have already this tab!");
    }
    local_f0 = (longlong *)FUN_140558c80(0xd18);
    plVar6 = (longlong *)FUN_1402d68d0(local_f0,param_2);
    break;
  case 0x2c:
    local_f0 = (longlong *)FUN_140558c80(0xe40);
    plVar6 = (longlong *)FUN_1402da1e0(local_f0,param_2,param_4,param_1);
    break;
  case 0x2d:
    local_f8 = (longlong *)FUN_140558c80(0x12d0);
    plVar6 = (longlong *)FUN_1402e8c40(local_f8,param_2,param_4,param_1);
    break;
  case 0x2e:
    local_f0 = (longlong *)FUN_140558c80(0x2638);
    plVar6 = (longlong *)FUN_1402a5cb0(local_f0,param_2,param_4,param_1);
    break;
  case 0x2f:
    plVar6 = (longlong *)FUN_140558c80(0x588);
    local_f0 = plVar6;
    FUN_14026d220(plVar6,param_2,param_1);
    *plVar6 = (longlong)UIScene_DLCMainMenu::vftable;
    FUN_14029df60(plVar6 + 0x33);
    plVar1 = plVar6 + 0x5c;
    local_f8 = plVar1;
    FUN_14027f6d0(plVar1);
    plVar6[0x78] = 0;
    plVar6[0x79] = 0;
    *(undefined1 *)(plVar6 + 0x77) = 0;
    *(undefined4 *)((longlong)plVar6 + 0x2ec) = 0;
    *plVar1 = (longlong)UIControl_Label::vftable;
    *(undefined1 *)(plVar6 + 0x7a) = 1;
    plVar2 = plVar6 + 0x7b;
    local_f8 = plVar2;
    FUN_14027f6d0(plVar2);
    plVar6[0x97] = 0;
    plVar6[0x98] = 0;
    *(undefined1 *)(plVar6 + 0x96) = 0;
    *(undefined4 *)((longlong)plVar6 + 0x3e4) = 0;
    *plVar2 = (longlong)UIControl_Label::vftable;
    *(undefined1 *)(plVar6 + 0x99) = 1;
    FUN_14027f6d0(plVar6 + 0x9a);
    FUN_14026da40(plVar6);
    DAT_1407bb85c = 1;
    uVar7 = FUN_1400899e0(local_e0,0x6f6);
    FUN_140283b10(plVar1,uVar7);
    FUN_140281240(plVar6 + 0x33,0);
    if ((int)plVar6[0x27] == 0) {
      uVar7 = FUN_140089d90(local_e0,&PTR_140610690);
      FUN_140283b10(plVar2,uVar7);
    }
    (**(code **)(*DAT_1407ba830 + 0x60))(DAT_1407ba830,param_2,0x2f,0);
    param_3 = local_e8;
    break;
  case 0x30:
    local_f0 = (longlong *)FUN_140558c80(0x3b0);
    plVar6 = (longlong *)FUN_1402b7b10(local_f0,param_2);
    break;
  case 0x31:
    local_f8 = (longlong *)FUN_140558c80(0xfb8);
    plVar6 = (longlong *)FUN_1402eb110(local_f8,param_2,param_4,param_1);
    break;
  case 0x32:
    local_f8 = (longlong *)FUN_140558c80(0x1048);
    plVar6 = (longlong *)FUN_1402e6790(local_f8,param_2,param_4,param_1);
    break;
  case 0x33:
    cVar5 = FUN_14026ab20(param_1,0x33);
    if (cVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Skipped EndPoem as one was already showing\n");
    }
    local_f0 = (longlong *)FUN_140558c80(0x218);
    plVar6 = (longlong *)FUN_1402d4cc0(local_f0,param_2);
    break;
  case 0x35:
    local_f8 = (longlong *)FUN_140558c80(0xcf8);
    plVar6 = (longlong *)FUN_1402f2770(local_f8,param_2,param_4,param_1);
    break;
  case 0x36:
    local_f8 = (longlong *)FUN_140558c80(0xeb8);
    plVar6 = (longlong *)FUN_1402e26a0(local_f8,param_2,param_4,param_1);
    break;
  case 0x37:
    local_f0 = (longlong *)FUN_140558c80(0x27d8);
    plVar6 = (longlong *)FUN_1402decf0(local_f0,param_2,param_4,param_1);
    break;
  case 0x38:
    local_f8 = (longlong *)FUN_140558c80(0xae0);
    plVar6 = (longlong *)FUN_1402ee5b0(local_f8,param_2,param_4,param_1);
    break;
  case 0x39:
    local_f8 = (longlong *)FUN_140558c80(0x13c0);
    plVar6 = (longlong *)FUN_1402e48b0(local_f8,param_2,param_4,param_1);
    break;
  case 0x3a:
    local_f8 = (longlong *)FUN_140558c80(0xe00);
    plVar6 = (longlong *)FUN_1402ef380(local_f8,param_2,param_4,param_1);
    break;
  case 0x3b:
    local_f8 = (longlong *)FUN_140558c80(0xd00);
    plVar6 = (longlong *)FUN_1402ec4f0(local_f8,param_2,param_4,param_1);
    break;
  case 0x43:
    local_f0 = (longlong *)FUN_140558c80(0xb48);
    plVar6 = (longlong *)FUN_14028c070(local_f0,param_2,param_4,param_1);
    break;
  case 0x44:
    local_f0 = (longlong *)FUN_140558c80(0x1b28);
    plVar6 = (longlong *)FUN_14028fc80(local_f0,param_2,param_4,param_1);
    break;
  case 0x45:
    cVar5 = FUN_14026ab20(param_1,0x45);
    if (cVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Skipped MessageBox as one was already showing\n");
    }
    local_f0 = (longlong *)FUN_140558c80(0x790);
    plVar6 = (longlong *)FUN_14028da40(local_f0,param_2,param_4,param_1);
    break;
  case 0x46:
    local_f0 = (longlong *)FUN_140558c80(0x250);
    plVar6 = (longlong *)FUN_1402909b0(local_f0,param_2,param_4,param_1);
    break;
  case 0x47:
    local_f0 = (longlong *)FUN_140558c80(0x3b0);
    plVar6 = (longlong *)FUN_14029f220(local_f0,param_2);
    break;
  case 0x49:
    plVar6 = (longlong *)FUN_140558c80(0x2e0);
    local_f8 = plVar6;
    FUN_14026d220(plVar6,param_2,param_1);
    *plVar6 = (longlong)UIScene_LanguageSelector::vftable;
    FUN_14029df60(plVar6 + 0x33);
    FUN_14026df40(plVar6);
    (**(code **)(*plVar6 + 0x40))(plVar6);
    (**(code **)(*plVar6 + 0x20))(plVar6);
    *(undefined1 *)((longlong)plVar6 + 0x124) = 1;
    FUN_140281240(plVar6 + 0x33,0);
    puVar9 = &DAT_14060bb20;
    do {
      pcVar3 = *(code **)(plVar6[0x33] + 0x38);
      uVar7 = FUN_1400899e0(local_e0,*puVar9);
      (*pcVar3)(plVar6 + 0x33,uVar7,uVar10);
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 1;
      param_3 = local_e8;
    } while (uVar10 < 0x14);
    break;
  case 0x4a:
    local_f8 = (longlong *)FUN_140558c80(0xe88);
    plVar6 = (longlong *)FUN_1402951a0(local_f8,param_2,param_4,param_1);
    break;
  case 0x4c:
    local_f8 = (longlong *)FUN_140558c80(0x1560);
    plVar6 = (longlong *)FUN_1402918c0(local_f8,param_2);
    break;
  case 0x4d:
    local_f8 = (longlong *)FUN_140558c80(0xf98);
    plVar6 = (longlong *)FUN_140298690(local_f8,param_2);
  }
  local_f8 = plVar6;
  if (local_f8 != (longlong *)0x0) {
    lVar4 = *(longlong *)(param_1 + 8);
    lVar8 = *(longlong *)(param_1 + 0x10) - lVar4 >> 3;
    if (lVar8 != 0) {
      local_f8[0x25] = *(longlong *)(lVar4 + -8 + lVar8 * 8);
    }
    FUN_1400453a0((longlong *)(param_1 + 8),&local_f8);
    FUN_14026c7d0(param_1,0);
    (**(code **)(*local_f8 + 0x58))();
    return 1;
  }
switchD_14026ad7a_caseD_e:
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,
                "WARNING: Scene %d was not created. Add it to UILayer::NavigateToScene\n",param_3);
}



// ===== FUN_14026bd00 @ 0x14026bd00 [ui] =====

void FUN_14026bd00(longlong param_1,undefined4 param_2,uint param_3,char param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  plVar4 = (longlong *)
           ((((ulonglong)((int)param_3 >> 0x18 & 0xff) ^
             ((((ulonglong)(param_3 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)((int)param_3 >> 8 & 0xff)) * 0x100000001b3 ^
             (ulonglong)((int)param_3 >> 0x10 & 0xff)) * 0x100000001b3) * 0x100000001b3 &
            *(ulonglong *)(param_1 + 0x98)) * 0x10 + *(longlong *)(param_1 + 0x80));
  lVar3 = plVar4[1];
  if (lVar3 == lVar2) {
LAB_14026bd98:
    lVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x10);
    while (param_3 != uVar1) {
      if (lVar3 == *plVar4) goto LAB_14026bd98;
      lVar3 = *(longlong *)(lVar3 + 8);
      uVar1 = *(uint *)(lVar3 + 0x10);
    }
  }
  if (lVar3 == 0) {
    lVar3 = lVar2;
  }
  if (lVar3 != lVar2) {
    *(char *)(lVar3 + 0x18) = param_4;
    return;
  }
  if (param_4 != '\0') {
    FUN_14026bdd0(param_1,param_2);
  }
  return;
}



// ===== FUN_14026bdd0 @ 0x14026bdd0 [ui] =====

longlong * FUN_14026bdd0(longlong param_1,undefined4 param_2,uint param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  uint local_res18 [2];
  longlong *local_res20;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar14;
  undefined4 local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_58 [4];
  undefined8 local_48;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar13 = (((((ulonglong)(param_3 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)((int)param_3 >> 8 & 0xff)) * 0x100000001b3 ^
            (ulonglong)((int)param_3 >> 0x10 & 0xff)) * 0x100000001b3 ^
           (ulonglong)((int)param_3 >> 0x18 & 0xff)) * 0x100000001b3 &
           *(ulonglong *)(param_1 + 0x98);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 8 + uVar13 * 0x10);
  if (lVar9 == *(longlong *)(param_1 + 0x70)) {
LAB_14026be88:
    lVar9 = 0;
  }
  else {
    uVar4 = *(uint *)(lVar9 + 0x10);
    while (param_3 != uVar4) {
      if (lVar9 == *(longlong *)(*(longlong *)(param_1 + 0x80) + uVar13 * 0x10)) goto LAB_14026be88;
      lVar9 = *(longlong *)(lVar9 + 8);
      uVar4 = *(uint *)(lVar9 + 0x10);
    }
  }
  local_res18[0] = param_3;
  local_res20 = param_4;
  if ((lVar9 != 0) && (lVar9 != *(longlong *)(param_1 + 0x70))) {
    *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    for (puVar5 = *(undefined8 **)(param_1 + 0x20); puVar5 != puVar2; puVar5 = puVar5 + 1) {
      uVar4 = (**(code **)(*(longlong *)*puVar5 + 0x50))();
      if (uVar4 == local_res18[0]) {
        return (longlong *)*puVar5;
      }
    }
    goto switchD_14026bf01_caseD_1d;
  }
  switch(param_3) {
  case 0x1c:
    local_res20 = (longlong *)FUN_140558c80(0x540);
    plVar7 = (longlong *)FUN_140276080(local_res20,param_2);
    goto LAB_14026c28d;
  default:
    goto switchD_14026bf01_caseD_1d;
  case 0x27:
    plVar7 = (longlong *)FUN_140558c80(0x1378);
    FUN_14026d220(plVar7,param_2,param_1);
    *plVar7 = (longlong)UIComponent_Chat::vftable;
    plVar8 = plVar7 + 0x34;
    lVar9 = 10;
    _eh_vector_constructor_iterator_(plVar8,0xf8,10,FUN_140283ab0,FUN_140271e20);
    plVar1 = plVar7 + 0x16a;
    local_res20 = plVar1;
    FUN_14027f6d0(plVar1);
    plVar7[0x186] = 0;
    plVar7[0x187] = 0;
    *(undefined1 *)(plVar7 + 0x185) = 0;
    *(undefined4 *)((longlong)plVar7 + 0xb5c) = 0;
    *plVar1 = (longlong)UIControl_Label::vftable;
    *(undefined1 *)(plVar7 + 0x188) = 1;
    _eh_vector_constructor_iterator_
              (plVar7 + 0x189,0xb8,10,FUN_14027f6d0,(_func_void_void_ptr *)&LAB_140271e50);
    FUN_14026df40(plVar7);
    (**(code **)(*plVar7 + 0x40))(plVar7);
    (**(code **)(*plVar7 + 0x20))(plVar7);
    *(undefined1 *)((longlong)plVar7 + 0x124) = 1;
    do {
      uVar6 = FUN_140089d90(&local_78,&PTR_140610690);
      FUN_140283b10(plVar8,uVar6);
      plVar8 = plVar8 + 0x1f;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    uVar6 = FUN_140089d90(&local_78,&PTR_140610690);
    FUN_140283b10(plVar1,uVar6);
    local_res20 = (longlong *)((ulonglong)local_res20 & 0xffffffff00000000);
    local_70 = CONCAT31(local_70._1_3_,1);
    local_78 = 100;
    iStack_74 = FUN_140352410();
    iStack_74 = iStack_74 + 100;
    plVar8 = (longlong *)FUN_140270660(plVar7 + 0x1b,local_58,&local_res20);
    lVar9 = *plVar8;
    *(ulonglong *)(lVar9 + 0x14) = CONCAT44(iStack_74,local_78);
    *(undefined4 *)(lVar9 + 0x1c) = local_70;
    goto LAB_14026c4bf;
  case 0x34:
    local_res20 = (longlong *)FUN_140558c80(0x15e8);
    plVar7 = (longlong *)FUN_14027cc10(local_res20,param_2);
LAB_14026c28d:
    local_res20 = plVar7;
    plVar8 = (longlong *)FUN_14026ced0(param_1 + 0x68,&local_78,local_res18);
    lVar9 = *plVar8;
    *(undefined1 *)(lVar9 + 0x18) = 0;
    goto LAB_14026c4db;
  case 0x3c:
    plVar7 = (longlong *)FUN_140558c80(0x1a8);
    local_res20 = plVar7;
    FUN_14026d220(plVar7,param_2,param_1);
    *plVar7 = (longlong)UIComponent_Panorama::vftable;
    FUN_14026df40(plVar7);
    (**(code **)(*plVar7 + 0x40))(plVar7);
    (**(code **)(*plVar7 + 0x20))(plVar7);
    *(undefined1 *)((longlong)plVar7 + 0x124) = 1;
    *(undefined1 *)((longlong)plVar7 + 0x199) = 1;
    cVar3 = (char)plVar7[0x2f];
    while (cVar3 == '\0') {
      cVar3 = (**(code **)(*plVar7 + 0x18))(plVar7);
      lVar9 = DAT_140790e60;
      if (cVar3 != '\0') {
        EnterCriticalSection((LPCRITICAL_SECTION)(DAT_140790e60 + 0x2e8));
        lVar10 = *(longlong *)(lVar9 + 0x40);
        if (((lVar10 == 0) || (*(int *)(*(longlong *)(lVar10 + 0x150) + 0x50) != 0)) ||
           (lVar10 = (**(code **)(**(longlong **)(lVar10 + 0x188) + 0x48))(),
           lVar11 = SUB168(SEXT816(-0x513cc1e098ead65b) * SEXT816(lVar10),8) + lVar10,
           lVar10 + ((lVar11 >> 0xe) - (lVar11 >> 0x3f)) * -24000 < 0x36b1)) {
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
        FUN_140273b80(plVar7,uVar6);
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x2e8));
        FUN_14026e310(plVar7);
      }
      cVar3 = (char)plVar7[0x2f];
    }
    puVar12 = &local_78;
    break;
  case 0x3d:
    plVar7 = (longlong *)FUN_140558c80(0x198);
    local_res20 = plVar7;
    FUN_14026d220(plVar7,param_2,param_1);
    *plVar7 = (longlong)UIComponent_Logo::vftable;
    FUN_14026df40(plVar7);
    (**(code **)(*plVar7 + 0x40))(plVar7);
    (**(code **)(*plVar7 + 0x20))(plVar7);
    *(undefined1 *)((longlong)plVar7 + 0x124) = 1;
    puVar12 = &local_78;
    break;
  case 0x3e:
    plVar7 = (longlong *)FUN_140558c80(0xb78);
    local_res20 = plVar7;
    FUN_14026d220(plVar7,param_2,param_1);
    *plVar7 = (longlong)UIComponent_DebugUIConsole::vftable;
    _eh_vector_constructor_iterator_(plVar7 + 0x33,0xf8,10,FUN_140283ab0,FUN_140271e20);
    plVar8 = plVar7 + 0x169;
    *plVar8 = 0;
    plVar7[0x16a] = 0;
    plVar7[0x16b] = 0;
    plVar7[0x16c] = 0;
    plVar7[0x16d] = 0;
    puVar5 = (undefined8 *)FUN_140558c80(0x10);
    puVar5[1] = 0;
    *plVar8 = (longlong)puVar5;
    *puVar5 = plVar8;
    FUN_14026df40(plVar7);
    (**(code **)(*plVar7 + 0x40))(plVar7);
    (**(code **)(*plVar7 + 0x20))(plVar7);
    *(undefined1 *)((longlong)plVar7 + 0x124) = 1;
    *(undefined1 *)(plVar7 + 0x16e) = 0;
    puVar12 = &local_78;
    break;
  case 0x3f:
    plVar7 = (longlong *)FUN_140558c80(0x1a0);
    local_res20 = plVar7;
    FUN_14026d220(plVar7,param_2,param_1);
    *plVar7 = (longlong)UIComponent_DebugUIMarketingGuide::vftable;
    FUN_14026df40(plVar7);
    (**(code **)(*plVar7 + 0x40))(plVar7);
    (**(code **)(*plVar7 + 0x20))(plVar7);
    *(undefined1 *)((longlong)plVar7 + 0x124) = 1;
    local_58[0] = 4;
    local_48 = 0;
    lVar9 = plVar7[0x33];
    uVar6 = IggyPlayerRootPath(plVar7[2]);
    IggyPlayerCallMethodRS(plVar7[2],&local_78,uVar6,lVar9,CONCAT44(uVar14,1),local_58);
    puVar12 = &local_78;
    break;
  case 0x40:
    plVar7 = (longlong *)FUN_140558c80(800);
    local_res20 = plVar7;
    FUN_14026d220(plVar7,param_2,param_1);
    *plVar7 = (longlong)UIComponent_Tooltips::vftable;
    _eh_vector_constructor_iterator_
              (plVar7 + 0x34,0x18,0xb,(_func_void_void_ptr *)&LAB_140274b40,
               (_func_void_void_ptr *)&LAB_140274e70);
    lVar9 = (longlong)plVar7 + 0x2ca;
    lVar10 = 4;
    do {
      *(undefined8 *)(lVar9 + -2) = 0;
      *(undefined8 *)(lVar9 + 6) = 0;
      *(undefined4 *)(lVar9 + 0xe) = 0;
      *(undefined1 *)(lVar9 + 0x12) = 0;
      lVar9 = lVar9 + 0x15;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    FUN_14026df40(plVar7);
    (**(code **)(*plVar7 + 0x40))(plVar7);
    (**(code **)(*plVar7 + 0x20))(plVar7);
    *(undefined1 *)((longlong)plVar7 + 0x124) = 1;
    puVar12 = &local_78;
    break;
  case 0x41:
    local_res20 = (longlong *)FUN_140558c80(0x640);
    plVar7 = (longlong *)FUN_140274120(local_res20,param_2);
    puVar12 = local_58;
    break;
  case 0x42:
    plVar7 = (longlong *)FUN_140558c80(0x1a0);
    local_res20 = plVar7;
    FUN_14026d220(plVar7,param_2,param_1);
    *plVar7 = (longlong)UIComponent_MenuBackground::vftable;
    *(undefined1 *)(plVar7 + 0x33) = 0;
    FUN_14026df40(plVar7);
    (**(code **)(*plVar7 + 0x40))(plVar7);
    (**(code **)(*plVar7 + 0x20))(plVar7);
    *(undefined1 *)((longlong)plVar7 + 0x124) = 1;
LAB_14026c4bf:
    puVar12 = local_58;
  }
  local_res20 = plVar7;
  plVar8 = (longlong *)FUN_14026ced0(param_1 + 0x68,puVar12,local_res18);
  lVar9 = *plVar8;
  *(undefined1 *)(lVar9 + 0x18) = 1;
LAB_14026c4db:
  *(undefined4 *)(lVar9 + 0x14) = 1;
  if (plVar7 == (longlong *)0x0) {
switchD_14026bf01_caseD_1d:
    local_res20 = (longlong *)0x0;
  }
  else {
    FUN_1400453a0(param_1 + 0x20,&local_res20);
  }
  return local_res20;
}



// ===== FUN_14026c7d0 @ 0x14026c7d0 [ui] =====

char FUN_14026c7d0(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *local_res8;
  undefined4 local_78 [4];
  undefined8 local_68;
  undefined1 local_58 [48];
  
  if (param_2 != '\0') goto LAB_14026c80c;
  uVar4 = 0;
  plVar8 = *(longlong **)(param_1 + 0xb0);
  do {
    plVar8 = plVar8 + 1;
    if (*plVar8 == param_1) {
      if ((uVar4 != 0) && (lVar9 = (longlong)(int)(uVar4 - 1), -1 < (int)(uVar4 - 1))) {
        plVar8 = *(longlong **)(param_1 + 0xb0) + lVar9 + 1;
        goto LAB_14026c990;
      }
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
  goto LAB_14026c809;
  while( true ) {
    plVar8 = plVar8 + -1;
    lVar9 = lVar9 + -1;
    if (lVar9 < 0) break;
LAB_14026c990:
    if (*(char *)(*plVar8 + 0xa8) != '\0') {
      param_2 = '\0';
      goto LAB_14026c80c;
    }
  }
LAB_14026c809:
  param_2 = '\x01';
LAB_14026c80c:
  *(undefined4 *)(param_1 + 0xa9) = 0;
  cVar3 = '\0';
  *(undefined1 *)(param_1 + 0xad) = 0;
  lVar9 = *(longlong *)(param_1 + 0x10);
  if (lVar9 != *(longlong *)(param_1 + 8)) {
    do {
      plVar8 = *(longlong **)(lVar9 + -8);
      local_res8 = plVar8;
      if (((cVar3 == '\0') && (param_2 != '\0')) &&
         (cVar2 = (**(code **)(*plVar8 + 0x68))(plVar8), cVar2 != '\0')) {
        if ((char)plVar8[0x2e] == '\0') {
          cVar3 = (**(code **)(*plVar8 + 0x68))(plVar8);
          if (cVar3 == '\0') {
            if ((char)plVar8[0x2e] != '\0') goto LAB_14026c9bd;
          }
          else {
            *(undefined1 *)(plVar8 + 0x2e) = 1;
            cVar3 = (**(code **)(*plVar8 + 0x10))(plVar8);
            if (cVar3 != '\0') {
              (**(code **)(*plVar8 + 8))(plVar8,0);
            }
            (**(code **)(*plVar8 + 0x78))(plVar8);
            (**(code **)(*plVar8 + 0x80))(plVar8);
            if (*(char *)((longlong)plVar8 + 0x13d) == '\0') {
              lVar1 = plVar8[7];
              local_68 = 0xbff0000000000000;
              local_78[0] = 4;
              uVar6 = (**(code **)*plVar8)(plVar8);
              uVar6 = IggyPlayerRootPath(uVar6);
              uVar7 = (**(code **)*plVar8)(plVar8);
              IggyPlayerCallMethodRS(uVar7,local_58,uVar6,lVar1,1,local_78);
            }
            (**(code **)(*plVar8 + 0x88))(plVar8);
            if ((char)plVar8[0x2e] != '\0') {
              *(undefined1 *)((longlong)plVar8 + 0x13d) = 1;
              cVar3 = '\x01';
              goto LAB_14026ca8b;
            }
          }
        }
        else {
LAB_14026c9bd:
          cVar3 = (**(code **)(*plVar8 + 0x68))(plVar8);
          if (cVar3 != '\0') {
            (**(code **)(*plVar8 + 0x78))(plVar8);
          }
        }
        cVar3 = '\x01';
      }
      else {
        if ((char)plVar8[0x2e] != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_14002fe50(&DAT_1407bb5d0,"Sent lose focus event to scene\n");
        }
        if ((param_2 != '\0') && (DAT_1407bb76c != '\0')) {
          FUN_1400453a0(param_1 + 0x50,&local_res8);
          plVar8 = local_res8;
        }
        iVar5 = (**(code **)(*plVar8 + 0x50))(plVar8);
        if (iVar5 == 0x13) {
          if ((char)plVar8[0x2e] != '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_14002fe50(&DAT_1407bb5d0,"Sent lose focus event to scene\n");
          }
          FUN_1400453a0(param_1 + 0x50,&local_res8);
          plVar8 = local_res8;
        }
      }
LAB_14026ca8b:
      *(undefined1 *)(param_1 + 0xa9) = 1;
      iVar5 = (**(code **)(*plVar8 + 0x50))(plVar8);
      switch(iVar5) {
      case 5:
        *(undefined1 *)(param_1 + 0xaa) = 1;
        break;
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0x2d:
      case 0x31:
      case 0x32:
      case 0x35:
      case 0x36:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
        *(undefined1 *)(param_1 + 0xab) = 1;
      case 4:
      case 0x1b:
      case 0x20:
      case 0x33:
        *(undefined1 *)(param_1 + 0xac) = 1;
      default:
        if (((iVar5 == 4) || (iVar5 == 0x19)) || ((iVar5 == 0x1a || (iVar5 == 0x33)))) {
          *(undefined1 *)(param_1 + 0xad) = 1;
        }
      }
      lVar9 = lVar9 + -8;
    } while (lVar9 != *(longlong *)(param_1 + 8));
  }
  *(char *)(param_1 + 0xa8) = cVar3;
  return cVar3;
}



// ===== FUN_14026da40 @ 0x14026da40 [ui] =====

void FUN_14026da40(longlong *param_1)

{
  FUN_14026df40();
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  return;
}



// ===== FUN_14026ee00 @ 0x14026ee00 [ui] =====

/* WARNING: Removing unreachable block (ram,0x00014026ef8a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14026ee00(longlong param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(char *)(param_1 + 0x13c) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x178) == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  fVar4 = 0.0;
  fVar5 = 0.0;
  if (param_4 == 0) {
    _DAT_1407bd908 = 0;
    DAT_1407bd90c = 0;
    if (DAT_1407bc4a0 / DAT_1407bc4a4 <= 1.7777778) {
      fVar5 = DAT_1407bc4a0 / 1.7777778;
      fVar4 = DAT_1407bc4a0;
    }
    else {
      fVar5 = DAT_1407bc4a4;
      fVar4 = DAT_1407bc4a4 * 1.7777778;
    }
    _DAT_1407bc4ac = -(int)((DAT_1407bc4a0 - (float)(int)fVar4) * -0.5);
    _DAT_1407bc4b0 = -(int)((DAT_1407bc4a4 - (float)(int)fVar5) * -0.5);
    goto LAB_14026f081;
  }
  fVar6 = DAT_1407bc4a0;
  fVar3 = DAT_1407bc4a4;
  switch(param_4) {
  case 1:
    fVar3 = DAT_1407bc4a4 * 0.5;
    break;
  case 2:
    goto switchD_14026ee80_caseD_2;
  case 3:
    fVar6 = DAT_1407bc4a0 * 0.5;
    break;
  case 4:
    fVar5 = DAT_1407bc4a0 * 0.5;
    fVar6 = fVar5;
    break;
  case 5:
    fVar6 = DAT_1407bc4a0 * 0.5;
    fVar3 = DAT_1407bc4a4 * 0.5;
    break;
  case 6:
    fVar5 = DAT_1407bc4a0 * 0.5;
    fVar6 = fVar5;
    fVar3 = DAT_1407bc4a4 * 0.5;
    break;
  case 7:
    fVar6 = DAT_1407bc4a0 * 0.5;
    goto switchD_14026ee80_caseD_2;
  case 8:
    fVar6 = DAT_1407bc4a0 * 0.5;
    fVar5 = fVar6;
switchD_14026ee80_caseD_2:
    fVar4 = DAT_1407bc4a4 * 0.5;
    fVar3 = fVar4;
  }
  if (fVar6 / fVar3 <= 1.7777778) {
    fVar1 = fVar6 / 1.7777778;
    fVar2 = fVar6;
  }
  else {
    fVar2 = fVar3 * 1.7777778;
    fVar1 = fVar3;
  }
  param_3 = (int)fVar1;
  DAT_1407bd90c = 1;
  param_2 = (int)fVar2;
  _DAT_1407bc4b0 = (int)fVar4 - (int)((fVar3 - (float)param_3) * -0.5);
  _DAT_1407bc4ac = (int)fVar5 - (int)((fVar6 - (float)param_2) * -0.5);
LAB_14026f081:
  (**(code **)(DAT_1407bc300 + 0x1a8))(&DAT_1407bc300);
  IggyPlayerSetDisplaySize(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  IggyPlayerDraw(*(undefined8 *)(param_1 + 0x10));
  return;
}



// ===== FUN_14026fd60 @ 0x14026fd60 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14026fd60(longlong param_1,undefined4 param_2,undefined8 param_3,byte param_4)

{
  int iVar1;
  undefined1 auStack_688 [32];
  int *local_668;
  int local_658 [2];
  longlong local_650;
  undefined1 local_648 [16];
  undefined1 local_638 [32];
  undefined8 local_618 [192];
  ulonglong local_18;
  
  local_18 = DAT_1407502c0 ^ (ulonglong)auStack_688;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    switch(param_2) {
    case 0:
    case 0x14:
      iVar1 = 0xd;
      break;
    case 1:
    case 0x15:
      iVar1 = 0x1b;
      break;
    case 2:
      iVar1 = 0x70;
      break;
    case 3:
      iVar1 = 0x71;
      break;
    case 4:
      iVar1 = 0x26;
      break;
    case 5:
      iVar1 = 0x28;
      break;
    case 6:
      iVar1 = 0x27;
      break;
    case 7:
      iVar1 = 0x25;
      break;
    case 8:
      iVar1 = 0x21;
      break;
    case 9:
      iVar1 = 0x22;
      break;
    case 10:
      iVar1 = 0x72;
      break;
    case 0xb:
      iVar1 = 0x73;
      break;
    default:
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,
                    "UI WARNING: Ignoring input as game action does not translate to an Iggy keycode\n"
                   );
    case 0xd:
      iVar1 = 0x74;
      break;
    case 0xe:
      iVar1 = 0x7a;
      break;
    case 0xf:
      iVar1 = 0x7b;
    }
    if ((param_4 != 0) && (iVar1 - 0x25U < 4)) {
      local_650 = 0;
      local_658[0] = 0;
      local_668 = local_658;
      IggyPlayerGetFocusableObjects(*(longlong *)(param_1 + 0x10),&local_650,local_618,0x40);
      if ((local_650 == 0) && (0 < local_658[0])) {
        IggyPlayerSetFocusRS(*(undefined8 *)(param_1 + 0x10),local_618[0],0);
        return;
      }
    }
    IggyMakeEventKey(local_638,param_4 + 9,iVar1,0);
    IggyPlayerDispatchEventRS(*(undefined8 *)(param_1 + 0x10),local_638,local_648);
  }
  return;
}



// ===== FUN_140270b40 @ 0x140270b40 [ui] =====

void FUN_140270b40(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_140054c30();
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"UITTFFont opening %s\n",param_3);
}



// ===== FUN_14027edc0 @ 0x14027edc0 [ui] =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14027edc0(undefined8 *param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 *in_stack_ffffffffffffff20;
  undefined1 local_c8 [32];
  undefined4 local_a8 [4];
  double local_98;
  undefined4 local_88;
  double local_78;
  
  if (*(char *)(param_1 + 0x46) == '\0') {
    FUN_14026ee00();
    return;
  }
  _DAT_1407bc4b0 = 0;
  _DAT_1407bc4ac = 0;
  if (param_4 != 2) {
    if ((param_4 == 4) || (param_4 == 6)) {
      _DAT_1407bc4ac = (int)(DAT_1407bc4a0 * 0.5);
      goto LAB_14027ee52;
    }
    _DAT_1407bc4ac = 0;
    if (param_4 != 7) {
      _DAT_1407bc4ac = 0;
      if (param_4 != 8) goto LAB_14027ee52;
      _DAT_1407bc4ac = (int)(DAT_1407bc4a0 * 0.5);
    }
  }
  _DAT_1407bc4b0 = (int)(DAT_1407bc4a4 * 0.5);
LAB_14027ee52:
  DAT_1407bd90c = 1;
  (**(code **)(DAT_1407bc300 + 0x1a8))(&DAT_1407bc300);
  bVar2 = false;
  switch(param_4) {
  case 1:
  case 2:
    param_2 = (int)DAT_1407bc4a0;
  case 5:
  case 6:
  case 7:
  case 8:
    bVar2 = true;
    break;
  case 3:
  case 4:
    param_3 = (int)DAT_1407bc4a4;
  }
  iVar7 = *(int *)(param_1 + 0x28);
  fVar12 = (float)*(int *)((longlong)param_1 + 0x144);
  fVar10 = (float)param_2 / (float)iVar7;
  fVar11 = (float)param_3 / fVar12;
  fVar9 = fVar10;
  if (fVar10 <= fVar11) {
    fVar9 = fVar11;
  }
  fVar1 = 1.0;
  if (1.0 <= fVar9) {
    fVar1 = fVar9;
  }
  if (bVar2) {
    iVar3 = (int)(fVar12 * fVar1) - param_3;
    iVar8 = 0;
    if (-1 < iVar3) {
      iVar8 = iVar3;
    }
    fVar9 = (float)(iVar8 + param_3) / fVar12;
    if (fVar10 <= fVar9) {
      fVar10 = fVar9;
    }
    fVar9 = 1.0;
    if (1.0 <= fVar10) {
      fVar9 = fVar10;
    }
  }
  else {
    fVar9 = fVar1;
    iVar8 = 0;
    if ((0 < *(int *)((longlong)param_1 + 0x144)) && (fVar9 = fVar11, iVar8 = 0, fVar1 <= fVar11)) {
      fVar9 = fVar1;
    }
  }
  uVar4 = (**(code **)*param_1)(param_1);
  IggyPlayerSetDisplaySize(uVar4,(int)((float)iVar7 * fVar9),(int)(fVar12 * fVar9));
  if (*(char *)(param_1 + 0x46) != '\0') {
    iVar3 = (int)((float)param_3 / fVar9);
    iVar7 = (int)((float)param_2 / fVar9);
    FUN_14002fee0(&DAT_1407bb5d0,6,"Reposition HUD: tile %dx%d, scale %.3f, visible SWF %dx%d\n",
                  param_2,param_3,(double)fVar9,iVar7,iVar3);
    uVar4 = param_1[0x2b6];
    local_98 = (double)iVar7;
    local_a8[0] = 4;
    local_88 = 4;
    local_78 = (double)iVar3;
    uVar5 = (**(code **)*param_1)(param_1);
    uVar5 = IggyPlayerRootPath(uVar5);
    uVar6 = (**(code **)*param_1)(param_1);
    in_stack_ffffffffffffff20 = local_a8;
    IggyPlayerCallMethodRS(uVar6,local_c8,uVar5,uVar4,2,in_stack_ffffffffffffff20);
  }
  *(int *)(param_1 + 0x29) = param_2;
  *(int *)((longlong)param_1 + 0x14c) = param_3;
  uVar4 = (**(code **)*param_1)(param_1);
  IggyPlayerDrawTilesStart(uVar4);
  uVar4 = (**(code **)*param_1)(param_1);
  IggyPlayerDrawTile(uVar4,0,iVar8,param_2,param_3 + iVar8,
                     (ulonglong)in_stack_ffffffffffffff20 & 0xffffffff00000000);
  uVar4 = (**(code **)*param_1)(param_1);
  IggyPlayerDrawTilesEnd(uVar4);
  return;
}



// ===== FUN_140285900 @ 0x140285900 [ui] =====

undefined8 * FUN_140285900(undefined8 *param_1)

{
  FUN_14027f6d0();
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = UIControl_Progress::vftable;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 100;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  return param_1;
}



// ===== FUN_140285ae0 @ 0x140285ae0 [ui] =====

void FUN_140285ae0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

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
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x100) = param_4;
  *(undefined4 *)(param_1 + 0x104) = param_5;
  *(undefined4 *)(param_1 + 0x108) = param_6;
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



// ===== FUN_1402889b0 @ 0x1402889b0 [ui] =====

longlong * FUN_1402889b0(longlong *param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined4 *in_stack_ffffffffffffff80;
  undefined4 local_78 [4];
  undefined4 local_68;
  undefined1 local_58 [32];
  
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_ConnectingProgress::vftable;
  FUN_140285900(param_1 + 0x37);
  FUN_14027f6d0(param_1 + 0x5a);
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  param_1[0x5a] = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x78) = 1;
  FUN_14027f6d0(param_1 + 0x79);
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0;
  param_1[0x79] = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x97) = 1;
  FUN_14027f6d0(param_1 + 0x98);
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  *(undefined1 *)(param_1 + 0xb3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0;
  param_1[0x98] = (longlong)UIControl_Button::vftable;
  FUN_14027f6d0(param_1 + 0xb7);
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  FUN_14026bdd0(param_4,param_2 & 0xffffffff,0x3c);
  FUN_14026bdd0(param_4,param_2 & 0xffffffff,0x3d);
  if ((char)param_1[0x59] != '\0') {
    *(undefined1 *)(param_1 + 0x59) = 0;
    local_78[0] = 3;
    local_68 = 0;
    lVar1 = param_1[0x56];
    uVar4 = (*(code *)**(undefined8 **)param_1[0x40])();
    in_stack_ffffffffffffff80 = local_78;
    IggyPlayerCallMethodRS(uVar4,local_58,param_1 + 0x3b,lVar1,1,in_stack_ffffffffffffff80);
  }
  if (*(char *)((longlong)param_1 + 0x26c) != '\0') {
    iVar3 = IggyValueSetBooleanRS(param_1 + 0x3b,param_1[0x4a],0,0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0x26c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x47c) != '\0') {
    iVar3 = IggyValueSetBooleanRS(param_1 + 0x7d,param_1[0x8c],0,0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0x47c) = 0;
  }
  iVar3 = *(int *)(param_3 + 4);
  ppuVar7 = &PTR_140610690;
  if (-1 < iVar3) {
    if (*DAT_1407bb780 == '\0') {
      pcVar2 = (code *)swi(3);
      plVar5 = (longlong *)(*pcVar2)();
      return plVar5;
    }
    if ((ulonglong)(longlong)iVar3 <
        (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - *(longlong *)(DAT_1407bb780 + 0x48) >> 5))
    {
      ppuVar6 = (undefined **)(*(longlong *)(DAT_1407bb780 + 0x48) + (longlong)iVar3 * 0x20);
      if ((undefined *)0x7 < ppuVar6[3]) {
        ppuVar6 = (undefined **)*ppuVar6;
      }
      goto LAB_140288bf6;
    }
  }
  ppuVar6 = &PTR_140610690;
LAB_140288bf6:
  uVar4 = FUN_140089d90(local_78,ppuVar6);
  FUN_140283b10(param_1 + 0x5a,uVar4);
  uVar4 = FUN_140089d90(local_78,&PTR_140610690);
  FUN_140285ae0(param_1 + 0x37,uVar4,0,0,100,
                (ulonglong)in_stack_ffffffffffffff80 & 0xffffffff00000000);
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar2)();
    return plVar5;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((0x59b < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5)) &&
     (ppuVar7 = (undefined **)(lVar1 + 0xb360), 7 < *(ulonglong *)(lVar1 + 0xb378))) {
    ppuVar7 = (undefined **)*ppuVar7;
  }
  uVar4 = FUN_140089d90(local_78,ppuVar7);
  FUN_140280c40(param_1 + 0x98,uVar4,0);
  if (*(char *)((longlong)param_1 + 0x574) != '\0') {
    iVar3 = IggyValueSetBooleanRS(param_1 + 0x9c,param_1[0xab],0,0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0x574) = 0;
  }
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_3 + 8);
  *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(param_3 + 9);
  *(undefined4 *)((longlong)param_1 + 0x19c) = *(undefined4 *)(param_3 + 0xc);
  param_1[0x35] = *(longlong *)(param_3 + 0x10);
  param_1[0x36] = *(longlong *)(param_3 + 0x18);
  *(undefined2 *)((longlong)param_1 + 0x1a1) = 0;
  return param_1;
}



// ===== FUN_1402895e0 @ 0x1402895e0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402895e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStackY_78 [32];
  undefined8 *local_48;
  longlong local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_1407502c0 ^ (ulonglong)auStackY_78;
  FUN_14026db10();
  uVar4 = (**(code **)*param_1)(param_1);
  IggyPlayerRootPath(uVar4);
  puVar1 = param_1 + 0x47;
  local_30 = 0xb;
  uStack_28 = 0xf;
  local_40 = 0x73736572676f7250;
  uStack_38 = 0x726142;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_28) {
    if (0xfff < uStack_28 + 1) {
      if (0x1f < (local_40 - *(longlong *)(local_40 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x4a] = 0;
  puVar2 = param_1 + 0x2a;
  plVar3 = (longlong *)param_1[0x2b];
  local_48 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_48);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x6a;
  uStack_38 = 0;
  local_30 = 5;
  uStack_28 = 0xf;
  local_40 = 0x656c746954;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_28) {
    if (0xfff < uStack_28 + 1) {
      if (0x1f < (local_40 - *(longlong *)(local_40 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x6d] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_48 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_48);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x89;
  uStack_38 = 0;
  local_30 = 3;
  uStack_28 = 0xf;
  local_40 = 0x706954;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_28) {
    if (0xfff < uStack_28 + 1) {
      if (0x1f < (local_40 - *(longlong *)(local_40 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x8c] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_48 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_48);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0xa8;
  uStack_38 = 0;
  local_30 = 7;
  uStack_28 = 0xf;
  local_40 = 0x6d7269666e6f43;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_28) {
    if (0xfff < uStack_28 + 1) {
      if (0x1f < (local_40 - *(longlong *)(local_40 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xab] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_48 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_48);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 199;
  uStack_38 = 0;
  local_30 = 5;
  uStack_28 = 0xf;
  local_40 = 0x72656d6954;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_28) {
    if (0xfff < uStack_28 + 1) {
      if (0x1f < (local_40 - *(longlong *)(local_40 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xca] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  if (plVar3 == (longlong *)param_1[0x2c]) {
    local_48 = puVar1;
    FUN_1400491a0(puVar2,plVar3,&local_48);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  return 1;
}



// ===== FUN_140289a50 @ 0x140289a50 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_140289a50(longlong *param_1,ulonglong param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined **ppuVar11;
  longlong lVar12;
  undefined1 auStackY_198 [32];
  longlong *local_158;
  longlong *local_150;
  longlong local_148;
  longlong *plStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  ulonglong local_108 [4];
  undefined1 local_e8 [16];
  longlong local_d8;
  short local_c8 [64];
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStackY_198;
  local_150 = param_1;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_FullscreenProgress::vftable;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 7;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 7;
  *(undefined2 *)(param_1 + 0x40) = 0;
  FUN_140285900(param_1 + 0x47);
  plVar7 = param_1 + 0x6a;
  local_158 = plVar7;
  FUN_14027f6d0(plVar7);
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined1 *)(param_1 + 0x85) = 0;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0;
  *plVar7 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x88) = 1;
  plVar7 = param_1 + 0x89;
  local_158 = plVar7;
  FUN_14027f6d0(plVar7);
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x454) = 0;
  *plVar7 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0xa7) = 1;
  plVar7 = param_1 + 0xa8;
  local_158 = plVar7;
  FUN_14027f6d0(plVar7);
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  *(undefined1 *)(param_1 + 0xc3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54c) = 0;
  *plVar7 = (longlong)UIControl_Button::vftable;
  FUN_14027f6d0(param_1 + 199);
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  FUN_14026bdd0(param_4,param_2 & 0xffffffff,0x3c);
  FUN_14026bdd0(param_4,param_2 & 0xffffffff,0x3d);
  FUN_14026bd00(param_4,param_2 & 0xffffffff,0x3d,1);
  FUN_14026bd00(param_4,param_2 & 0xffffffff,0x42,0);
  if (*(char *)((longlong)param_1 + 0x6ec) != '\0') {
    iVar6 = IggyValueSetBooleanRS(param_1 + 0xcb,param_1[0xda],0,0);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0x6ec) = 0;
  }
  FUN_1400549d0(param_1 + 0x3c,&PTR_140610690,0);
  FUN_1400549d0(param_1 + 0x40,&PTR_140610690,0);
  param_1[0x44] = -1;
  *(undefined4 *)(param_1 + 0x45) = 0;
  if (*DAT_1407bb780 == '\0') {
    pcVar4 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar4)();
    return plVar7;
  }
  lVar12 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar12 >> 5) < 0x59c) {
    ppuVar11 = &PTR_140610690;
  }
  else {
    ppuVar11 = (undefined **)(lVar12 + 0xb360);
    if (7 < *(ulonglong *)(lVar12 + 0xb378)) {
      ppuVar11 = (undefined **)*ppuVar11;
    }
  }
  uVar8 = FUN_140089d90(&local_148,ppuVar11);
  FUN_140280c40(plVar7,uVar8,0);
  if (*(char *)((longlong)param_1 + 0x5f4) != '\0') {
    iVar6 = IggyValueSetBooleanRS(param_1 + 0xac,param_1[0xbb],0,0);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0x5f4) = 0;
  }
  param_1[0x35] = param_3[2];
  *(undefined4 *)((longlong)param_1 + 0x1b4) = *(undefined4 *)(param_3[2] + 0x14);
  param_1[0x37] = param_3[4];
  param_1[0x39] = param_3[6];
  param_1[0x38] = param_3[5];
  param_1[0x3a] = param_3[7];
  *(undefined4 *)((longlong)param_1 + 0x22c) = *(undefined4 *)(param_3 + 3);
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x3b) = *(undefined1 *)(param_3 + 8);
  lVar12 = DAT_140790e60;
  (**(code **)(**(longlong **)(DAT_140790e60 + 0x1c8) + 8))
            (*(longlong **)(DAT_140790e60 + 0x1c8),0xffffffff);
  (**(code **)(**(longlong **)(lVar12 + 0x1c8) + 0x20))(*(longlong **)(lVar12 + 0x1c8),0xffffffff);
  uVar8 = FUN_140089d90(&local_148,&PTR_140610690);
  FUN_140285ae0(param_1 + 0x47,uVar8,0,0);
  iVar6 = FUN_1400399e0();
  if (*DAT_1407bb780 == '\0') {
    pcVar4 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar4)();
    return plVar7;
  }
  if ((ulonglong)(longlong)iVar6 <
      (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - *(longlong *)(DAT_1407bb780 + 0x48) >> 5)) {
    ppuVar11 = (undefined **)(*(longlong *)(DAT_1407bb780 + 0x48) + (longlong)iVar6 * 0x20);
    if ((undefined *)0x7 < ppuVar11[3]) {
      ppuVar11 = (undefined **)*ppuVar11;
    }
  }
  else {
    ppuVar11 = &PTR_140610690;
  }
  local_108[0] = 0;
  local_108[1] = 0;
  local_108[2] = 0;
  local_108[3] = 0;
  lVar12 = -1;
  do {
    lVar12 = lVar12 + 1;
  } while (*(short *)((longlong)ppuVar11 + lVar12 * 2) != 0);
  FUN_140054cf0(local_108);
  FUN_140039b00(&DAT_1407bb5d0,local_e8);
  if (7 < local_108[3]) {
    if ((0xfff < local_108[3] * 2 + 2) &&
       (0x1f < (local_108[0] - *(longlong *)(local_108[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_108[2] = 0;
  local_108[3] = 7;
  local_108[0] = local_108[0] & 0xffffffffffff0000;
  lVar12 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar5 = (**(code **)**(undefined8 **)(lVar12 + 0xb8))();
  plVar7 = DAT_1407915a8;
  if (cVar5 != '\0') {
    plVar7 = *(longlong **)(lVar12 + 0xb8);
  }
  lVar12 = (**(code **)(*plVar7 + 0xd8))();
  FUN_1400547f0(local_c8,0x40,L"<font color=\"#%08x\"><p align=center>",
                *(undefined4 *)(lVar12 + 0x474));
  uVar10 = 0xffffffffffffffff;
  do {
    uVar10 = uVar10 + 1;
  } while (local_c8[uVar10] != 0);
  if (uVar10 <= 0x7ffffffffffffffeU - local_d8) {
    FUN_140048da0(&local_128);
    plVar7 = (longlong *)FUN_140048d20(&local_128,L"</p>");
    local_148 = *plVar7;
    plStack_140 = (longlong *)plVar7[1];
    local_138 = (undefined4)plVar7[2];
    uStack_134 = *(undefined4 *)((longlong)plVar7 + 0x14);
    uStack_130 = (undefined4)plVar7[3];
    uStack_12c = *(undefined4 *)((longlong)plVar7 + 0x1c);
    plVar7[2] = 0;
    plVar7[3] = 7;
    *(undefined2 *)plVar7 = 0;
    FUN_1400546d0(local_e8,&local_148);
    if (7 < CONCAT44(uStack_12c,uStack_130)) {
      if ((0xfff < CONCAT44(uStack_12c,uStack_130) * 2 + 2) &&
         (0x1f < (local_148 - *(longlong *)(local_148 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
    FUN_140055150(&local_128);
    local_158 = &local_148;
    local_148 = 0;
    plStack_140 = (longlong *)0x0;
    local_128 = FUN_140558c80(0x88);
    uVar8 = FUN_1400898e0(local_128,local_e8);
    plVar9 = (longlong *)FUN_14008a140(&local_128,uVar8);
    plVar2 = plStack_140;
    local_148 = *plVar9;
    plVar7 = (longlong *)plVar9[1];
    *plVar9 = 0;
    plVar9[1] = 0;
    if (plStack_140 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_140 + 1;
      lVar12 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        puVar3 = (undefined8 *)*plStack_140;
        plStack_140 = plVar7;
        (*(code *)*puVar3)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar7 = plStack_140;
        if (iVar6 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2);
          plVar7 = plStack_140;
        }
      }
    }
    plStack_140 = plVar7;
    plVar7 = (longlong *)CONCAT44(uStack_11c,local_120);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar12 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
      }
    }
    FUN_140283b10(param_1 + 0x89,&local_148);
    local_158 = (longlong *)CONCAT44(local_158._4_4_,1);
    local_120 = CONCAT31(local_120._1_3_,1);
    local_128 = CONCAT44(local_128._4_4_,7000);
    iVar6 = FUN_140352410();
    local_128 = CONCAT44(iVar6 + 7000,(undefined4)local_128);
    plVar7 = (longlong *)FUN_140270660(param_1 + 0x1b,&local_148,&local_158);
    lVar12 = *plVar7;
    *(undefined8 *)(lVar12 + 0x14) = local_128;
    *(undefined4 *)(lVar12 + 0x1c) = local_120;
    uVar8 = FUN_140089d90(&local_148,&PTR_140610690);
    FUN_140283b10(param_1 + 0x6a,uVar8);
    FUN_14027fe70(param_1 + 0x89,*(int *)(param_1[0x35] + 0xc) != 0);
    local_128 = FUN_140558c80(0x80);
    lVar12 = FUN_140367970(local_128,*param_3,param_3[1],"FullscreenProgress");
    param_1[0x33] = lVar12;
    *(undefined1 *)(param_1 + 0x36) = 0;
    ResumeThread(*(HANDLE *)(lVar12 + 0x70));
    uVar8 = FUN_140352410();
    *(undefined8 *)(lVar12 + 0x60) = uVar8;
    *(undefined2 *)(lVar12 + 0x54) = 0x101;
    *(undefined1 *)(param_1 + 0x34) = 1;
    FUN_140055150(local_e8);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140054e40();
}



// ===== FUN_14028ae60 @ 0x14028ae60 [ui] =====

void FUN_14028ae60(longlong param_1,double param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  char *pcVar4;
  undefined1 local_res8 [8];
  
  if ((*(char *)(param_1 + 0x1b0) == '\0') || ((int)param_2 != 0)) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1b4);
  if ((DAT_1407bb76c == '\0') || ((iVar1 < 0 || (iVar1 == 0xff)))) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar1 + 1;
  }
  local_res8[0] = 0;
  plVar2 = *(longlong **)((&DAT_1407bda58)[iVar3] + 0x48);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0xe0))(plVar2,iVar1,0,0,1,0,local_res8);
  }
  if (*(code **)(param_1 + 0x1c0) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1d0));
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x1a8) + 0x10);
  if (iVar1 == 1) {
    pcVar4 = "e_ProgressCompletion_NavigateBack\n";
  }
  else {
    if (iVar1 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"e_ProgressCompletion_CloseUIScenes\n");
    }
    if (iVar1 == 3) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"e_ProgressCompletion_CloseAllPlayersUIScenes\n");
    }
    if (iVar1 == 4) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"e_ProgressCompletion_NavigateToHomeMenu\n");
    }
    if (iVar1 != 6) {
      return;
    }
    pcVar4 = "e_ProgressCompletion_NavigateBackToScene\n";
  }
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,pcVar4);
}



// ===== FUN_14028b000 @ 0x14028b000 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14028b000(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined **ppuVar11;
  longlong lVar12;
  undefined1 auStackY_178 [32];
  longlong local_130;
  longlong *plStack_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  ulonglong local_110 [4];
  undefined1 local_f0 [16];
  longlong local_e0;
  undefined8 local_d0;
  longlong *local_c8;
  short local_a8 [64];
  ulonglong local_28;
  
  if (param_2 == 1) {
    local_28 = DAT_1407502c0 ^ (ulonglong)auStackY_178;
    iVar6 = FUN_1400399e0();
    if (*DAT_1407bb780 == '\0') {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((ulonglong)(longlong)iVar6 <
        (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - *(longlong *)(DAT_1407bb780 + 0x48) >> 5))
    {
      ppuVar11 = (undefined **)(*(longlong *)(DAT_1407bb780 + 0x48) + (longlong)iVar6 * 0x20);
      if ((undefined *)0x7 < ppuVar11[3]) {
        ppuVar11 = (undefined **)*ppuVar11;
      }
    }
    else {
      ppuVar11 = &PTR_140610690;
    }
    local_110[0] = 0;
    local_110[1] = 0;
    local_110[2] = 0;
    local_110[3] = 0;
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (*(short *)((longlong)ppuVar11 + lVar12 * 2) != 0);
    FUN_140054cf0(local_110);
    FUN_140039b00(&DAT_1407bb5d0,local_f0);
    if (7 < local_110[3]) {
      if ((0xfff < local_110[3] * 2 + 2) &&
         (0x1f < (local_110[0] - *(longlong *)(local_110[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
    local_110[2] = 0;
    local_110[3] = 7;
    local_110[0] = local_110[0] & 0xffffffffffff0000;
    lVar12 = *(longlong *)(DAT_140790e60 + 0x238);
    cVar5 = (**(code **)**(undefined8 **)(lVar12 + 0xb8))();
    plVar7 = DAT_1407915a8;
    if (cVar5 != '\0') {
      plVar7 = *(longlong **)(lVar12 + 0xb8);
    }
    lVar12 = (**(code **)(*plVar7 + 0xd8))();
    FUN_1400547f0(local_a8,0x40,L"<font color=\"#%08x\"><p align=center>",
                  *(undefined4 *)(lVar12 + 0x474));
    uVar10 = 0xffffffffffffffff;
    do {
      uVar10 = uVar10 + 1;
    } while (local_a8[uVar10] != 0);
    if (0x7ffffffffffffffeU - local_e0 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_140054e40();
    }
    FUN_140048da0(&local_d0);
    plVar7 = (longlong *)FUN_140048d20(&local_d0,L"</p>");
    local_130 = *plVar7;
    plStack_128 = (longlong *)plVar7[1];
    local_120 = (undefined4)plVar7[2];
    uStack_11c = *(undefined4 *)((longlong)plVar7 + 0x14);
    uStack_118 = (undefined4)plVar7[3];
    uStack_114 = *(undefined4 *)((longlong)plVar7 + 0x1c);
    plVar7[2] = 0;
    plVar7[3] = 7;
    *(undefined2 *)plVar7 = 0;
    FUN_1400546d0(local_f0,&local_130);
    if (7 < CONCAT44(uStack_114,uStack_118)) {
      if ((0xfff < CONCAT44(uStack_114,uStack_118) * 2 + 2) &&
         (0x1f < (local_130 - *(longlong *)(local_130 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
    FUN_140055150(&local_d0);
    pcVar3 = *(code **)(*(longlong *)(param_1 + 0x448) + 0x28);
    local_130 = 0;
    plStack_128 = (longlong *)0x0;
    local_d0 = FUN_140558c80(0x88);
    uVar8 = FUN_1400898e0(local_d0,local_f0);
    plVar9 = (longlong *)FUN_14008a140(&local_d0,uVar8);
    plVar4 = plStack_128;
    local_130 = *plVar9;
    plVar7 = (longlong *)plVar9[1];
    *plVar9 = 0;
    plVar9[1] = 0;
    if (plStack_128 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_128 + 1;
      lVar12 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        puVar2 = (undefined8 *)*plStack_128;
        plStack_128 = plVar7;
        (*(code *)*puVar2)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar7 = plStack_128;
        if (iVar6 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4);
          plVar7 = plStack_128;
        }
      }
    }
    plStack_128 = plVar7;
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_c8 + 1;
      lVar12 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar1 = (int *)((longlong)local_c8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_c8 + 8))(local_c8);
        }
      }
    }
    (*pcVar3)(param_1 + 0x448,&local_130,0,0);
    FUN_140055150(local_f0);
  }
  return;
}



// ===== FUN_14028c070 @ 0x14028c070 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14028c070(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStackY_108 [32];
  wchar_t *local_d8;
  undefined1 local_90 [40];
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStackY_108;
  local_68 = param_3;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_Keyboard::vftable;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 7;
  *(undefined2 *)(param_1 + 0x36) = 0;
  FUN_14027f6d0(param_1 + 0x3c);
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3c] = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x5a) = 1;
  FUN_140287170(param_1 + 0x5b);
  plVar10 = param_1 + 0x88;
  FUN_14027f6d0(plVar10);
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  *(undefined1 *)(param_1 + 0xa3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0;
  *plVar10 = (longlong)UIControl_Button::vftable;
  plVar1 = param_1 + 0xa7;
  FUN_14027f6d0(plVar1);
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x544) = 0;
  *plVar1 = (longlong)UIControl_Button::vftable;
  plVar2 = param_1 + 0xc6;
  FUN_14027f6d0(plVar2);
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  *(undefined1 *)(param_1 + 0xe1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x63c) = 0;
  *plVar2 = (longlong)UIControl_Button::vftable;
  plVar3 = param_1 + 0xe5;
  FUN_14027f6d0(plVar3);
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x734) = 0;
  *plVar3 = (longlong)UIControl_Button::vftable;
  FUN_14027f6d0(param_1 + 0x104);
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  *(undefined1 *)(param_1 + 0x11f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x82c) = 0;
  param_1[0x104] = (longlong)UIControl_Button::vftable;
  plVar4 = param_1 + 0x123;
  FUN_14027f6d0(plVar4);
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  *(undefined1 *)(param_1 + 0x13e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x924) = 0;
  *plVar4 = (longlong)UIControl_Button::vftable;
  FUN_14027f6d0(param_1 + 0x142);
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  *(undefined1 *)(param_1 + 0x15d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1c) = 0;
  param_1[0x142] = (longlong)UIControl_Button::vftable;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  ppuVar8 = &PTR_140610690;
  FUN_1400549d0(param_1 + 0x36,&PTR_140610690,0);
  *(undefined4 *)(param_1 + 0x3a) = 0x19;
  local_d8 = L"Enter text";
  *(undefined1 *)((longlong)param_1 + 0x1d4) = 0;
  if (local_68 != (longlong *)0x0) {
    param_1[0x34] = local_68[3];
    param_1[0x35] = local_68[4];
    local_d8 = L"Enter text";
    if ((wchar_t *)*local_68 != (wchar_t *)0x0) {
      local_d8 = (wchar_t *)*local_68;
    }
    if ((undefined **)local_68[1] != (undefined **)0x0) {
      ppuVar8 = (undefined **)local_68[1];
    }
    *(int *)(param_1 + 0x3a) = (int)local_68[2];
    *(char *)((longlong)param_1 + 0x1d4) = (char)local_68[5];
  }
  lVar9 = -1;
  do {
    lVar9 = lVar9 + 1;
  } while (*(short *)((longlong)ppuVar8 + lVar9 * 2) != 0);
  FUN_1400549d0(param_1 + 0x36,ppuVar8);
  *(int *)(param_1 + 0x3b) = (int)param_1[0x38];
  uVar6 = FUN_140089d90(&local_68,local_d8);
  FUN_140283b10(param_1 + 0x3c,uVar6);
  uVar6 = FUN_140089d90(&local_68,ppuVar8);
  FUN_140280c40(param_1 + 0x5b,uVar6,0xffffffff);
  uVar6 = (*(code *)**(undefined8 **)param_1[100])();
  IggyPlayerCallMethodRS(uVar6,&local_68,param_1 + 0x5f);
  _DAT_1407aaa68 = 0;
  _DAT_1407a49b0 = 0;
  uVar6 = FUN_140089d90(&local_68,L"Space");
  FUN_140280c40(plVar10,uVar6,0xffffffff);
  uVar6 = FUN_140089d90(&local_68,L"Cur L");
  FUN_140280c40(plVar1,uVar6,0xffffffff);
  uVar6 = FUN_140089d90(&local_68,L"Cur R");
  FUN_140280c40(plVar2,uVar6,0xffffffff);
  uVar6 = FUN_140089d90(&local_68,L"Caps");
  FUN_140280c40(plVar3,uVar6,0xffffffff);
  uVar6 = FUN_140089d90(&local_68,L"Done");
  FUN_140280c40(param_1 + 0x104,uVar6,0);
  uVar6 = FUN_140089d90(&local_68,L"Symbols");
  FUN_140280c40(plVar4,uVar6,0xffffffff);
  uVar6 = FUN_140089d90(&local_68,L"Backspace");
  FUN_140280c40(param_1 + 0x142,uVar6,0xffffffff);
  if (*(char *)((longlong)param_1 + 0x1d4) == '\0') {
    local_68 = (longlong *)0x0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    FUN_140054cf0(&local_68,&DAT_140641740,3);
    uVar6 = IggyPlayerRootPath(param_1[2]);
    IggyPlayerCallMethodRS(param_1[2],local_90,uVar6);
    FUN_140055150(&local_68);
    if (*(char *)((longlong)param_1 + 0x1d4) == '\0') goto LAB_14028c800;
  }
  if (*(char *)((longlong)param_1 + 0x4f4) != '\0') {
    iVar5 = IggyValueSetBooleanRS(param_1 + 0x8c,param_1[0x9b],0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0x4f4) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x5ec) != '\0') {
    iVar5 = IggyValueSetBooleanRS(param_1 + 0xab,param_1[0xba],0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0x5ec) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x6e4) != '\0') {
    iVar5 = IggyValueSetBooleanRS(param_1 + 0xca,param_1[0xd9],0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0x6e4) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x7dc) != '\0') {
    iVar5 = IggyValueSetBooleanRS(param_1 + 0xe9,param_1[0xf8],0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0x7dc) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x9cc) != '\0') {
    iVar5 = IggyValueSetBooleanRS(param_1 + 0x127,param_1[0x136],0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0x9cc) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xac4) != '\0') {
    iVar5 = IggyValueSetBooleanRS(param_1 + 0x146,param_1[0x155],0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0xac4) = 0;
  }
  local_68 = (longlong *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140054cf0(&local_68,L"visible",7);
  uVar6 = FUN_14026eb50(param_1,&local_68);
  if (7 < uStack_50) {
    plVar10 = local_68;
    if ((0xfff < uStack_50 * 2 + 2) &&
       (plVar10 = (longlong *)local_68[-1],
       0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)plVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000(plVar10);
  }
  uVar7 = IggyPlayerRootPath(param_1[2]);
  ppuVar8 = &PTR_s_Button_q_1406417e0;
  do {
    iVar5 = IggyValuePathMakeNameRef(local_90,uVar7,*ppuVar8);
    if (iVar5 != 0) {
      IggyValueSetBooleanRS(local_90,uVar6,0,0);
    }
    ppuVar8 = ppuVar8 + 1;
  } while ((longlong)ppuVar8 < 0x140641920);
  FUN_140287520(param_1 + 0x5b,1);
  FUN_140287610(param_1 + 0x5b,(int)param_1[0x3b]);
LAB_14028c800:
  *(undefined1 *)(param_1 + 0x33) = 0;
  FUN_14026bdd0(param_4,(int)param_2,0x42);
  return param_1;
}



// ===== FUN_14028da40 @ 0x14028da40 [ui] =====

longlong * FUN_14028da40(longlong *param_1,ulonglong param_2,int *param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulonglong uVar8;
  undefined4 uVar10;
  ulonglong uVar9;
  undefined1 local_a8 [16];
  undefined1 local_98 [32];
  undefined4 local_78 [4];
  double local_68;
  undefined4 local_58;
  double local_48;
  
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_MessageBox::vftable;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(param_1 + 0x36,0xf8,4,FUN_140280b20,FUN_140271e20);
  FUN_14027f6d0(param_1 + 0xb2);
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  *(undefined1 *)(param_1 + 0xcd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x59c) = 0;
  param_1[0xb2] = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  FUN_14027f6d0(param_1 + 0xd1);
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  *(undefined1 *)(param_1 + 0xec) = 0;
  *(undefined4 *)((longlong)param_1 + 0x694) = 0;
  param_1[0xd1] = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0xef) = 1;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  *(int *)(param_1 + 0x35) = param_3[4];
  local_78[0] = 4;
  local_68 = (double)(uint)param_3[4];
  local_58 = 4;
  local_48 = (double)(uint)param_3[0xc];
  lVar1 = param_1[0xf0];
  uVar3 = IggyPlayerRootPath(param_1[2]);
  uVar9 = CONCAT44(uVar10,2);
  IggyPlayerCallMethodRS(param_1[2],local_98,uVar3,lVar1,uVar9,local_78);
  uVar5 = 0;
  ppuVar7 = &PTR_140610690;
  if (3 < (uint)param_3[4]) {
    uVar5 = (ulonglong)**(int **)(param_3 + 2);
    if (*DAT_1407bb780 == '\0') {
      pcVar2 = (code *)swi(3);
      plVar4 = (longlong *)(*pcVar2)();
      return plVar4;
    }
    if (uVar5 < (ulonglong)
                (*(longlong *)(DAT_1407bb780 + 0x50) - *(longlong *)(DAT_1407bb780 + 0x48) >> 5)) {
      ppuVar6 = (undefined **)(*(longlong *)(DAT_1407bb780 + 0x48) + uVar5 * 0x20);
      if ((undefined *)0x7 < ppuVar6[3]) {
        ppuVar6 = (undefined **)*ppuVar6;
      }
    }
    else {
      ppuVar6 = &PTR_140610690;
    }
    uVar3 = FUN_140089d90(local_a8,ppuVar6);
    FUN_140280c40(param_1 + 0x36,uVar3,0);
    uVar5 = 1;
  }
  if (2 < (uint)param_3[4]) {
    uVar8 = (ulonglong)*(int *)(*(longlong *)(param_3 + 2) + uVar5 * 4);
    if (*DAT_1407bb780 == '\0') {
      pcVar2 = (code *)swi(3);
      plVar4 = (longlong *)(*pcVar2)();
      return plVar4;
    }
    if (uVar8 < (ulonglong)
                (*(longlong *)(DAT_1407bb780 + 0x50) - *(longlong *)(DAT_1407bb780 + 0x48) >> 5)) {
      ppuVar6 = (undefined **)(*(longlong *)(DAT_1407bb780 + 0x48) + uVar8 * 0x20);
      if ((undefined *)0x7 < ppuVar6[3]) {
        ppuVar6 = (undefined **)*ppuVar6;
      }
    }
    else {
      ppuVar6 = &PTR_140610690;
    }
    uVar3 = FUN_140089d90(local_a8,ppuVar6);
    FUN_140280c40(param_1 + 0x55,uVar3,uVar5);
    uVar5 = (ulonglong)((int)uVar5 + 1);
  }
  if (1 < (uint)param_3[4]) {
    uVar8 = (ulonglong)*(int *)(*(longlong *)(param_3 + 2) + uVar5 * 4);
    if (*DAT_1407bb780 == '\0') {
      pcVar2 = (code *)swi(3);
      plVar4 = (longlong *)(*pcVar2)();
      return plVar4;
    }
    if (uVar8 < (ulonglong)
                (*(longlong *)(DAT_1407bb780 + 0x50) - *(longlong *)(DAT_1407bb780 + 0x48) >> 5)) {
      ppuVar6 = (undefined **)(*(longlong *)(DAT_1407bb780 + 0x48) + uVar8 * 0x20);
      if ((undefined *)0x7 < ppuVar6[3]) {
        ppuVar6 = (undefined **)*ppuVar6;
      }
    }
    else {
      ppuVar6 = &PTR_140610690;
    }
    uVar3 = FUN_140089d90(local_a8,ppuVar6);
    FUN_140280c40(param_1 + 0x74,uVar3,uVar5);
    uVar5 = (ulonglong)((int)uVar5 + 1);
  }
  uVar8 = (ulonglong)*(int *)(*(longlong *)(param_3 + 2) + uVar5 * 4);
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar2)();
    return plVar4;
  }
  if (uVar8 < (ulonglong)
              (*(longlong *)(DAT_1407bb780 + 0x50) - *(longlong *)(DAT_1407bb780 + 0x48) >> 5)) {
    ppuVar6 = (undefined **)(*(longlong *)(DAT_1407bb780 + 0x48) + uVar8 * 0x20);
    if ((undefined *)0x7 < ppuVar6[3]) {
      ppuVar6 = (undefined **)*ppuVar6;
    }
  }
  else {
    ppuVar6 = &PTR_140610690;
  }
  uVar3 = FUN_140089d90(local_a8,ppuVar6);
  FUN_140280c40(param_1 + 0x93,uVar3,uVar5);
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar2)();
    return plVar4;
  }
  if ((ulonglong)(longlong)*param_3 <
      (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - *(longlong *)(DAT_1407bb780 + 0x48) >> 5)) {
    ppuVar6 = (undefined **)(*(longlong *)(DAT_1407bb780 + 0x48) + (longlong)*param_3 * 0x20);
    if ((undefined *)0x7 < ppuVar6[3]) {
      ppuVar6 = (undefined **)*ppuVar6;
    }
  }
  else {
    ppuVar6 = &PTR_140610690;
  }
  uVar3 = FUN_140089d90(local_a8,ppuVar6);
  FUN_140283b10(param_1 + 0xb2,uVar3);
  if (*DAT_1407bb780 != '\0') {
    if (((ulonglong)(longlong)param_3[1] <
         (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - *(longlong *)(DAT_1407bb780 + 0x48) >> 5)
        ) && (ppuVar7 = (undefined **)
                        ((longlong)param_3[1] * 0x20 + *(longlong *)(DAT_1407bb780 + 0x48)),
             (undefined *)0x7 < ppuVar7[3])) {
      ppuVar7 = (undefined **)*ppuVar7;
    }
    uVar3 = FUN_140089d90(local_a8,ppuVar7);
    FUN_140283b10(param_1 + 0xd1,uVar3);
    lVar1 = param_1[0xf1];
    uVar3 = IggyPlayerRootPath();
    IggyPlayerCallMethodRS(param_1[2],local_98,uVar3,lVar1,uVar9 & 0xffffffff00000000,0);
    param_1[0x33] = *(longlong *)(param_3 + 6);
    param_1[0x34] = *(longlong *)(param_3 + 8);
    FUN_14026bdd0(param_4,param_2 & 0xffffffff,0x42);
    return param_1;
  }
  pcVar2 = (code *)swi(3);
  plVar4 = (longlong *)(*pcVar2)();
  return plVar4;
}



// ===== FUN_14028fc80 @ 0x14028fc80 [ui] =====

longlong * FUN_14028fc80(longlong *param_1,ulonglong param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_QuadrantSignin::vftable;
  _eh_vector_constructor_iterator_
            (param_1 + 0x3a,0xb8,4,FUN_14027f6d0,(_func_void_void_ptr *)&LAB_140271e50);
  _eh_vector_constructor_iterator_(param_1 + 0x96,0xf8,4,FUN_140283ab0,FUN_140271e20);
  _eh_vector_constructor_iterator_(param_1 + 0x112,0xf8,4,FUN_140283ab0,FUN_140271e20);
  _eh_vector_constructor_iterator_(param_1 + 0x18e,0xf8,4,FUN_140283ab0,FUN_140271e20);
  _eh_vector_constructor_iterator_(param_1 + 0x20a,0xf8,4,FUN_140283ab0,FUN_140271e20);
  _eh_vector_constructor_iterator_(param_1 + 0x286,0xf8,4,FUN_140283ab0,FUN_140271e20);
  _eh_vector_constructor_iterator_
            (param_1 + 0x302,0xc0,4,FUN_14028ff80,(_func_void_void_ptr *)&LAB_140271e50);
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 0x34) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar1;
  *(undefined4 *)(param_1 + 0x35) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = uVar3;
  param_1[0x36] = *(longlong *)(param_3 + 4);
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0xffffffff;
  FUN_1402905a0(param_1);
  FUN_14026bdd0(param_4,param_2 & 0xffffffff,0x42);
  return param_1;
}



// ===== FUN_1402900c0 @ 0x1402900c0 [ui] =====

void FUN_1402900c0(undefined8 param_1,undefined4 param_2,undefined4 param_3,char param_4,
                  char param_5,char param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = "FALSE";
  pcVar2 = "FALSE";
  pcVar1 = "FALSE";
  if (param_6 != '\0') {
    pcVar2 = "TRUE";
  }
  if (param_5 != '\0') {
    pcVar1 = "TRUE";
  }
  if (param_4 != '\0') {
    pcVar3 = "TRUE";
  }
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,
                "UIScene_QuadrantSignin handling input for pad %d, key %d, repeat- %s, pressed- %s, released- %s\n"
                ,param_2,param_3,pcVar3,pcVar1,pcVar2);
}



// ===== FUN_1402909b0 @ 0x1402909b0 [ui] =====

longlong * FUN_1402909b0(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_Timer::vftable;
  FUN_14027f6d0(param_1 + 0x33);
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  if ((param_3 == 0) && (*(char *)((longlong)param_1 + 0x24c) != '\0')) {
    iVar1 = IggyValueSetBooleanRS(param_1 + 0x37,param_1[0x46],0,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0x24c) = 0;
  }
  return param_1;
}



// ===== FUN_1402942f0 @ 0x1402942f0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1402942f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ****ppppuVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 ****ppppuVar9;
  longlong lVar10;
  undefined1 auStackY_a8 [32];
  undefined8 local_78;
  longlong *plStack_70;
  longlong *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined8 ***local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1407502c0 ^ (ulonglong)auStackY_a8;
  local_68 = param_1;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_DebugOptionsMenu::vftable;
  _eh_vector_constructor_iterator_(param_1 + 0x34,0x110,0x15,FUN_140281b10,FUN_140271e20);
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  IggyPlayerRootPath(param_1[2]);
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  do {
    local_40 = (undefined8 ****)0x0;
    uStack_38 = 0;
    local_30 = 0;
    local_28 = 0;
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (*(short *)((&PTR_u_Load_Saves_From_Local_Folder_Mod_14060b8a0)[iVar7] + lVar10 * 2) !=
             0);
    FUN_140054cf0(&local_40);
    lVar10 = param_1[0x33];
    local_60 = &local_78;
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    puVar8 = (undefined8 *)FUN_140558c80(0x88);
    *puVar8 = 0;
    puVar8[1] = 0;
    ppppuVar1 = (undefined8 ****)(puVar8 + 4);
    *ppppuVar1 = (undefined8 ***)0x0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 7;
    *(undefined2 *)ppppuVar1 = 0;
    puVar8[0x10] = 0;
    *(undefined1 *)(puVar8 + 8) = 1;
    puVar8[2] = 0xffffffffffffffff;
    puVar8[3] = 0xffffffffffffffff;
    local_58 = puVar8;
    if (ppppuVar1 != &local_40) {
      ppppuVar9 = &local_40;
      if (7 < local_28) {
        ppppuVar9 = (undefined8 ****)local_40;
      }
      FUN_1400549d0(ppppuVar1,ppppuVar9,local_30);
    }
    puVar8 = (undefined8 *)FUN_14008a140(local_50,puVar8);
    plVar4 = plStack_70;
    local_78 = *puVar8;
    plVar5 = (longlong *)puVar8[1];
    *puVar8 = 0;
    puVar8[1] = 0;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_70 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        puVar8 = (undefined8 *)*plStack_70;
        plStack_70 = plVar5;
        (*(code *)*puVar8)(plVar4);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        iVar7 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        plVar5 = plStack_70;
        if (iVar7 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4);
          plVar5 = plStack_70;
        }
      }
    }
    plStack_70 = plVar5;
    plVar5 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_48 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        iVar7 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    FUN_140281d70(param_1 + (longlong)(int)lVar10 * 0x22 + 0x34,&local_78);
    if (7 < local_28) {
      if (0xfff < local_28 * 2 + 2) {
        if (0x1f < (ulonglong)((longlong)local_40 + (-8 - (longlong)local_40[-1]))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      thunk_FUN_1401fe000();
    }
    iVar7 = (int)param_1[0x33] + 1;
    *(int *)(param_1 + 0x33) = iVar7;
  } while (iVar7 < 0x15);
  return param_1;
}



// ===== FUN_140297210 @ 0x140297210 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140297210(longlong param_1,double param_2,double param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  ulonglong uStack_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_38;
  
  lVar6 = DAT_1407c0b00;
  lVar8 = DAT_140790e60;
  local_38 = DAT_1407502c0 ^ (ulonglong)auStack_c8;
  lVar9 = 0;
  switch((int)param_2) {
  case 0:
    local_a0 = 6;
    local_a8 = 0;
    FUN_1402668d0(&DAT_1407bc300,0,0x4d,0);
    break;
  case 1:
    *(undefined8 *)(DAT_1407c0b00 + 0xc) = 0;
    *(undefined8 *)(lVar6 + 0x14) = 0;
    *(undefined8 *)(lVar6 + 0x1c) = 0;
    *(undefined8 *)(lVar6 + 0x24) = 0;
    *(undefined8 *)(lVar6 + 0x2c) = 0;
    *(undefined8 *)(lVar6 + 0x34) = 0;
    *(undefined8 *)(lVar6 + 0x3c) = 0;
    *(undefined8 *)(lVar6 + 0x44) = 0;
    *(undefined4 *)(lVar6 + 0x58) = 0;
    break;
  case 2:
    local_a0 = 6;
    local_a8 = 0;
    FUN_1402668d0(&DAT_1407bc300,0,0x4c,0);
    break;
  case 3:
    DAT_1407bb824 = 7;
    DAT_1407bb838 = 0;
    break;
  case 4:
    uVar7 = *(undefined8 *)(*(longlong *)(DAT_140790e60 + 0x70) + 0x660);
    local_80 = 0;
    uStack_78 = uStack_78 & 0xffffffff00000000;
    local_88[0] = 8;
    FUN_1401c0d00(&local_98,local_88,&local_80);
    local_68 = (undefined4)local_98;
    uStack_64 = local_98._4_4_;
    uStack_60 = (undefined4)uStack_90;
    uStack_5c = uStack_90._4_4_;
    local_98 = 0;
    uStack_90 = 0;
    FUN_1400e90b0(uVar7,&local_68);
    break;
  case 6:
    uVar7 = *(undefined8 *)(*(longlong *)(DAT_140790e60 + 0x70) + 0x660);
    plVar11 = (longlong *)FUN_140435510(&local_68,0);
    local_98 = *plVar11;
    uStack_90 = plVar11[1];
    *plVar11 = 0;
    plVar11[1] = 0;
    FUN_1400e90b0(uVar7,&local_98);
    goto LAB_140297606;
  case 7:
    uVar7 = *(undefined8 *)(*(longlong *)(DAT_140790e60 + 0x70) + 0x660);
    plVar11 = (longlong *)FUN_140435510(&local_68,0x140000001);
    local_98 = *plVar11;
    uStack_90 = plVar11[1];
    *plVar11 = 0;
    plVar11[1] = 0;
    FUN_1400e90b0(uVar7,&local_98);
    goto LAB_140297606;
  case 9:
    if ((ulonglong)(longlong)(int)param_3 <
        (ulonglong)(*(longlong *)(param_1 + 0x1b8) - *(longlong *)(param_1 + 0x1b0) >> 2)) {
      DAT_1407bb838 =
           (longlong)*(int *)(*(longlong *)(param_1 + 0x1b0) + (longlong)(int)param_3 * 4);
      DAT_1407bb824 = 4;
    }
    break;
  case 10:
    lVar6 = *(longlong *)(DAT_140790e60 + 0x70);
    uVar7 = *(undefined8 *)(lVar6 + 0x660);
    uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x1c8) + 4 + (longlong)(int)param_3 * 8);
    uVar5 = *(undefined4 *)(*(longlong *)(param_1 + 0x1c8) + (longlong)(int)param_3 * 8);
    local_98 = lVar9;
    if (lVar6 != 0) {
      if (*(longlong *)(DAT_140790e60 + 0x78) != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)(DAT_140790e60 + 0x78) + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      lVar9 = *(longlong *)(lVar8 + 0x78);
      local_98 = lVar6;
    }
    uStack_90 = lVar9;
    puVar10 = (undefined8 *)FUN_140434650(&local_68,&local_98,uVar5,uVar4);
    local_80 = *puVar10;
    uStack_78 = puVar10[1];
    *puVar10 = 0;
    puVar10[1] = 0;
    FUN_1400e90b0(uVar7,&local_80);
LAB_140297606:
    plVar11 = (longlong *)CONCAT44(uStack_5c,uStack_60);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar11 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
    }
    break;
  case 0xb:
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"UIScene_DebugOverlay::handlePress for itemsList: %f\n",param_3);
  }
  return;
}



// ===== FUN_140298690 @ 0x140298690 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_140298690(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_278 [32];
  longlong *local_258 [2];
  longlong *local_248;
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_1407502c0 ^ (ulonglong)auStack_278;
  local_248 = param_1;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_DebugSetCamera::vftable;
  FUN_140287170(param_1 + 0x36);
  FUN_140287170(param_1 + 99);
  FUN_140287170(param_1 + 0x90);
  FUN_140287170(param_1 + 0xbd);
  FUN_140287170(param_1 + 0xea);
  plVar1 = param_1 + 0x117;
  local_258[0] = plVar1;
  FUN_14027f6d0(plVar1);
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  *(undefined1 *)(param_1 + 0x132) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c4) = 0;
  *plVar1 = (longlong)UIControl_CheckBox::vftable;
  plVar1 = param_1 + 0x139;
  local_258[0] = plVar1;
  FUN_14027f6d0(plVar1);
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  *(undefined1 *)(param_1 + 0x154) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9d4) = 0;
  *plVar1 = (longlong)UIControl_Button::vftable;
  plVar1 = param_1 + 0x158;
  local_258[0] = plVar1;
  FUN_14027f6d0(plVar1);
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  *(undefined1 *)(param_1 + 0x173) = 0;
  *(undefined4 *)((longlong)param_1 + 0xacc) = 0;
  *plVar1 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x176) = 1;
  plVar2 = param_1 + 0x177;
  local_258[0] = plVar2;
  FUN_14027f6d0(plVar2);
  param_1[0x193] = 0;
  param_1[0x194] = 0;
  *(undefined1 *)(param_1 + 0x192) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc4) = 0;
  *plVar2 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x195) = 1;
  plVar3 = param_1 + 0x196;
  local_258[0] = plVar3;
  FUN_14027f6d0(plVar3);
  param_1[0x1b2] = 0;
  param_1[0x1b3] = 0;
  *(undefined1 *)(param_1 + 0x1b1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcbc) = 0;
  *plVar3 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x1b4) = 1;
  plVar4 = param_1 + 0x1b5;
  local_258[0] = plVar4;
  FUN_14027f6d0();
  param_1[0x1d1] = 0;
  param_1[0x1d2] = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdb4) = 0;
  *plVar4 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x1d3) = 1;
  plVar5 = param_1 + 0x1d4;
  local_258[0] = plVar5;
  FUN_14027f6d0(plVar5);
  param_1[0x1f0] = 0;
  param_1[0x1f1] = 0;
  *(undefined1 *)(param_1 + 0x1ef) = 0;
  *(undefined4 *)((longlong)param_1 + 0xeac) = 0;
  *plVar5 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x1f2) = 1;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  puVar8 = (undefined8 *)FUN_140558c80();
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  param_1[0x33] = (longlong)puVar8;
  *(undefined4 *)puVar8 = 0;
  lVar6 = DAT_140790e60;
  if (DAT_140790e60 != 0) {
    puVar8 = (undefined8 *)
             (**(code **)(**(longlong **)(DAT_140790e60 + 0x70) + 0x5f8))
                       (*(longlong **)(DAT_140790e60 + 0x70),0x3f800000);
    *(undefined8 *)(param_1[0x33] + 8) = *puVar8;
    *(double *)(param_1[0x33] + 0x10) = (double)puVar8[1] - 1.62;
    *(undefined8 *)(param_1[0x33] + 0x18) = puVar8[2];
    *(double *)(param_1[0x33] + 0x20) = (double)*(float *)(*(longlong *)(lVar6 + 0x70) + 0xa8);
    *(double *)(param_1[0x33] + 0x28) = (double)*(float *)(*(longlong *)(lVar6 + 0x70) + 0xac);
  }
  FUN_1400547f0(local_238,0x100,L"%.2f",*(undefined8 *)(param_1[0x33] + 8));
  uVar9 = FUN_140089d90(local_258,local_238);
  FUN_140280c40(param_1 + 0x36,uVar9,0);
  FUN_1400547f0(local_238,0x100,L"%.2f",*(undefined8 *)(param_1[0x33] + 0x10));
  uVar9 = FUN_140089d90(local_258,local_238);
  FUN_140280c40(param_1 + 99,uVar9,1);
  FUN_1400547f0(local_238,0x100,L"%.2f",*(undefined8 *)(param_1[0x33] + 0x18));
  uVar9 = FUN_140089d90(local_258,local_238);
  FUN_140280c40(param_1 + 0x90,uVar9,2);
  FUN_1400547f0(local_238,0x100,L"%.2f",*(undefined8 *)(param_1[0x33] + 0x20));
  uVar9 = FUN_140089d90(local_258,local_238);
  FUN_140280c40(param_1 + 0xbd,uVar9,3);
  FUN_1400547f0(local_238,0x100,L"%.2f",*(undefined8 *)(param_1[0x33] + 0x28));
  uVar9 = FUN_140089d90(local_258,local_238);
  FUN_140280c40(param_1 + 0xea,uVar9,4);
  uVar7 = DAT_1407bb7d5;
  uVar9 = FUN_140089d90(local_258,L"Lock Player");
  FUN_140281d70(param_1 + 0x117,uVar9,5,uVar7);
  uVar9 = FUN_140089d90(local_258,L"Teleport");
  FUN_140280c40(param_1 + 0x139,uVar9,6);
  uVar9 = FUN_140089d90(local_258,L"Set Camera Position");
  FUN_140283b10(plVar1,uVar9);
  uVar9 = FUN_140089d90(local_258,L"CamX");
  FUN_140283b10(plVar2,uVar9);
  uVar9 = FUN_140089d90(local_258,L"CamY");
  FUN_140283b10(plVar3,uVar9);
  uVar9 = FUN_140089d90(local_258,L"CamZ");
  FUN_140283b10(plVar4,uVar9);
  uVar9 = FUN_140089d90(local_258,L"Y-Rot & Elevation (Degs)");
  FUN_140283b10(plVar5,uVar9);
  return param_1;
}



// ===== FUN_14029df60 @ 0x14029df60 [ui] =====

undefined8 * FUN_14029df60(undefined8 *param_1)

{
  FUN_14027f6d0();
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = UIControl_DynamicButtonList::vftable;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  return param_1;
}



// ===== FUN_14029e980 @ 0x14029e980 [ui] =====

longlong * FUN_14029e980(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined1 local_38 [16];
  
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_DLCOffersMenu::vftable;
  FUN_14027f6d0(param_1 + 0x34);
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x59] = 0;
  param_1[0x34] = (longlong)UIControl_DLCList::vftable;
  plVar5 = param_1 + 0x5b;
  FUN_14027f6d0(plVar5);
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  *plVar5 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x79) = 1;
  FUN_14027f6d0(param_1 + 0x7a);
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0;
  param_1[0x7a] = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x98) = 1;
  FUN_14027f6d0(param_1 + 0x99);
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  param_1[0x99] = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0xb7) = 1;
  FUN_14027f6d0(param_1 + 0xb8);
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  *(undefined1 *)(param_1 + 0xd3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5cc) = 0;
  *(undefined1 *)(param_1 + 0xd6) = 1;
  param_1[0xb8] = (longlong)UIControl_HTMLLabel::vftable;
  FUN_14027f6d0(param_1 + 0xdb);
  param_1[0xdb] = (longlong)UIControl_BitmapIcon::vftable;
  FUN_14027f6d0(param_1 + 0xf3);
  *(undefined1 *)(param_1 + 0x10a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x854) = *(undefined4 *)(param_3 + 8);
  param_1[0x10b] = 0;
  *(undefined1 *)(param_1 + 0x10c) = 1;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  DAT_1407bb85c = 1;
  cVar3 = FUN_140004470(&DAT_140784700);
  if (cVar3 == '\0') {
    cVar3 = FUN_140004470(&DAT_140784700);
    if (cVar3 == '\0') {
      uVar4 = 1;
      goto LAB_14029eb6e;
    }
  }
  uVar4 = 0;
LAB_14029eb6e:
  *(undefined1 *)(param_1 + 0x33) = uVar4;
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar2)();
    return plVar5;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x6f7) {
    ppuVar7 = &PTR_140610690;
  }
  else {
    ppuVar7 = (undefined **)(lVar1 + 0xdec0);
    if (7 < *(ulonglong *)(lVar1 + 0xded8)) {
      ppuVar7 = (undefined **)*ppuVar7;
    }
  }
  uVar6 = FUN_140089d90(local_38,ppuVar7);
  FUN_140283b10(plVar5,uVar6);
  FUN_140281240(param_1 + 0x34,0);
  uVar6 = FUN_140089d90(local_38,&DAT_140614cc0);
  FUN_140283b10(param_1 + 0xb8,uVar6);
  uVar6 = FUN_140089d90(local_38,&DAT_140614cc0);
  FUN_140283b10(param_1 + 0x7a,uVar6);
  (**(code **)(*DAT_1407ba830 + 0x60))
            (DAT_1407ba830,*(undefined4 *)((longlong)param_1 + 0x174),0x23,0);
  *(undefined2 *)((longlong)param_1 + 0x199) = 0;
  if ((int)param_1[0x27] == 0) {
    uVar6 = FUN_140089d90(local_38,&PTR_140610690);
    FUN_140283b10(param_1 + 0x99,uVar6);
  }
  return param_1;
}



// ===== FUN_14029efe0 @ 0x14029efe0 [ui] =====

void FUN_14029efe0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"UIScene_DLCOffersMenu::handleFocusChange\n");
}



// ===== FUN_14029f220 @ 0x14029f220 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14029f220(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *******pppppppuVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined **ppuVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar15;
  undefined1 auStackY_f8 [32];
  longlong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 ******local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStackY_f8;
  uVar14 = 0;
  local_b0 = param_1;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_EULA::vftable;
  plVar4 = param_1 + 0x34;
  FUN_14027f6d0(plVar4);
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *plVar4 = (longlong)UIControl_Button::vftable;
  plVar1 = param_1 + 0x53;
  local_88 = plVar1;
  FUN_14027f6d0(plVar1);
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined1 *)(param_1 + 0x71) = 1;
  *plVar1 = (longlong)UIControl_DynamicLabel::vftable;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  FUN_14026bdd0(param_4,param_2 & 0xffffffff,0x3c);
  FUN_14026bdd0(param_4,param_2 & 0xffffffff,0x3d);
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar2)();
    return plVar4;
  }
  lVar11 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar11 >> 5) < 0x577) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar11 + 0xaec0);
    if (7 < *(ulonglong *)(lVar11 + 0xaed8)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  uVar5 = FUN_140089d90(&local_88,ppuVar10);
  FUN_140280c40(plVar4,uVar5,0);
  local_a8 = (undefined8 *******)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_140054cf0(&local_a8,&PTR_140610690,0);
  local_c8 = 0;
  lStack_c0 = 0;
  local_b8 = 0;
  pppppppuVar7 = &local_a8;
  if (7 < local_90) {
    pppppppuVar7 = (undefined8 *******)local_a8;
  }
  uVar12 = uVar14;
  if ((local_98 < 2) ||
     (lVar11 = (longlong)pppppppuVar7 + local_98 * 2,
     lVar6 = thunk_FUN_140556fb0(pppppppuVar7,lVar11,&DAT_140643c70), lVar6 == lVar11)) {
    lVar11 = -1;
  }
  else {
    lVar11 = lVar6 - (longlong)pppppppuVar7 >> 1;
  }
  while (lVar11 != -1) {
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    if (local_98 < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_140051220();
    }
    uVar9 = lVar11 - uVar12;
    if (local_98 - uVar12 < lVar11 - uVar12) {
      uVar9 = local_98 - uVar12;
    }
    pppppppuVar7 = &local_a8;
    if (7 < local_90) {
      pppppppuVar7 = (undefined8 *******)local_a8;
    }
    FUN_140054cf0(&local_88,(longlong)pppppppuVar7 + uVar12 * 2,uVar9);
    puVar8 = (undefined4 *)FUN_140048d20(&local_88,&DAT_140614cc0);
    local_68 = *puVar8;
    uStack_64 = puVar8[1];
    uStack_60 = puVar8[2];
    uStack_5c = puVar8[3];
    local_58 = puVar8[4];
    uStack_54 = puVar8[5];
    uStack_50 = puVar8[6];
    uStack_4c = puVar8[7];
    *(undefined8 *)(puVar8 + 4) = 0;
    *(undefined8 *)(puVar8 + 6) = 7;
    *(undefined2 *)puVar8 = 0;
    FUN_140047fd0(&local_c8,&local_68);
    if (7 < CONCAT44(uStack_4c,uStack_50)) {
      if ((0xfff < CONCAT44(uStack_4c,uStack_50) * 2 + 2) &&
         (0x1f < (CONCAT44(uStack_64,local_68) - *(longlong *)(CONCAT44(uStack_64,local_68) + -8)) -
                 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
    if (7 < uStack_70) {
      if ((0xfff < uStack_70 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_88 + (-8 - local_88[-1])))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
    uVar12 = lVar11 + 2;
    pppppppuVar7 = &local_a8;
    if (7 < local_90) {
      pppppppuVar7 = (undefined8 *******)local_a8;
    }
    if (((local_98 < 2) || (local_98 - 2 < uVar12)) ||
       (lVar11 = (longlong)pppppppuVar7 + local_98 * 2,
       lVar6 = thunk_FUN_140556fb0((longlong)pppppppuVar7 + uVar12 * 2,lVar11,&DAT_140643c70),
       lVar6 == lVar11)) {
      lVar11 = -1;
    }
    else {
      lVar11 = lVar6 - (longlong)pppppppuVar7 >> 1;
    }
  }
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  if (local_98 < uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140051220();
  }
  pppppppuVar7 = &local_a8;
  if (7 < local_90) {
    pppppppuVar7 = (undefined8 *******)local_a8;
  }
  FUN_140054cf0(&local_88,(longlong)pppppppuVar7 + uVar12 * 2);
  FUN_140047fd0(&local_c8,&local_88);
  if (7 < uStack_70) {
    if ((0xfff < uStack_70 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_88 + (-8 - local_88[-1])))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  uVar9 = lStack_c0 - local_c8 >> 5;
  uVar12 = uVar14;
  if (uVar9 != 0) {
    do {
      (**(code **)(param_1[0x53] + 0x38))
                (param_1 + 0x53,local_c8 + uVar12 * 0x20,uVar12 == uVar9 - 1);
      uVar12 = (ulonglong)((int)uVar12 + 1);
      uVar9 = lStack_c0 - local_c8 >> 5;
    } while (uVar12 < uVar9);
  }
  while( true ) {
    cVar3 = FUN_140001090(&DAT_140783060,uVar14);
    uVar15 = extraout_XMM0_Da;
    if ((((cVar3 != '\0') || ((int)uVar14 == 0)) ||
        (cVar3 = FUN_140001090(&DAT_140783060,uVar14), uVar15 = extraout_XMM0_Da_00, cVar3 != '\0'))
       && ((DAT_1407bb9f1 == '\0' && (DAT_1407bb9f2 == '\0')))) break;
    uVar13 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar13;
    if (3 < uVar13) {
LAB_14029f6c0:
      *(undefined1 *)(param_1 + 0x33) = 0;
      FUN_140048c80(&local_c8);
      FUN_140055150(&local_a8);
      return param_1;
    }
  }
  FUN_1400382a0(uVar15,uVar14);
  goto LAB_14029f6c0;
}



// ===== FUN_14029fa50 @ 0x14029fa50 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14029fa50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStackY_68 [32];
  longlong local_38 [6];
  
  local_38[4] = DAT_1407502c0 ^ (ulonglong)auStackY_68;
  FUN_14026db10();
  uVar1 = (**(code **)*param_1)(param_1);
  IggyPlayerRootPath(uVar1);
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_140054cf0(local_38,L"SetIntroPlatform");
  uVar1 = FUN_14026eb50(param_1,local_38);
  param_1[0x34] = uVar1;
  if (7 < (ulonglong)local_38[3]) {
    if (0xfff < local_38[3] * 2 + 2U) {
      if (0x1f < (local_38[0] - *(longlong *)(local_38[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  return 1;
}



// ===== FUN_14029fc70 @ 0x14029fc70 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14029fc70(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStackY_88 [32];
  undefined8 *local_58;
  longlong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1407502c0 ^ (ulonglong)auStackY_88;
  FUN_14026db10();
  uVar4 = (**(code **)*param_1)(param_1);
  IggyPlayerRootPath(uVar4);
  puVar5 = param_1 + 0x33;
  local_40 = 8;
  uStack_38 = 0xf;
  local_50 = 0x656d61476e696f4a;
  uStack_48 = 0;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x36] = 0;
  puVar1 = param_1 + 0x2a;
  plVar2 = (longlong *)param_1[0x2b];
  local_58 = puVar5;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0x52;
  local_40 = 0xb;
  uStack_38 = 0xf;
  local_50 = 0x79616c50656d6147;
  uStack_48 = 0x737265;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x55] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_58 = puVar5;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0x78;
  uStack_48 = 0;
  local_40 = 6;
  uStack_38 = 0xf;
  local_50 = 0x306c6562614c;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x7b] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_58 = puVar5;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0x97;
  uStack_48 = 0;
  local_40 = 6;
  uStack_38 = 0xf;
  local_50 = 0x316c6562614c;
  (**(code **)param_1[0x97])(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x9a] = 0;
  puVar3 = (undefined8 *)param_1[0x2b];
  local_58 = puVar5;
  if (puVar3 == (undefined8 *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,puVar3,&local_58);
  }
  else {
    *puVar3 = puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0xb6;
  uStack_48 = 0;
  local_40 = 6;
  uStack_38 = 0xf;
  local_50 = 0x326c6562614c;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xb9] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_58 = puVar5;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0xd5;
  uStack_48 = 0;
  local_40 = 6;
  uStack_38 = 0xf;
  local_50 = 0x336c6562614c;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xd8] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_58 = puVar5;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0xf4;
  uStack_48 = 0;
  local_40 = 6;
  uStack_38 = 0xf;
  local_50 = 0x346c6562614c;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xf7] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_58 = puVar5;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0x113;
  uStack_48 = 0;
  local_40 = 6;
  uStack_38 = 0xf;
  local_50 = 0x356c6562614c;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x116] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_58 = puVar5;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0x132;
  uStack_48 = 0;
  local_40 = 6;
  uStack_38 = 0xf;
  local_50 = 0x366c6562614c;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x135] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_58 = puVar5;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0x151;
  uStack_48 = 0;
  local_40 = 6;
  uStack_38 = 0xf;
  local_50 = 0x376c6562614c;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x154] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_58 = puVar5;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0x170;
  uStack_48 = 0;
  local_40 = 6;
  uStack_38 = 0xf;
  local_50 = 0x386c6562614c;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x173] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_58 = puVar5;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 399;
  uStack_48 = 0;
  local_40 = 6;
  uStack_38 = 0xf;
  local_50 = 0x3065756c6156;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x192] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_58 = puVar5;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0x1ae;
  uStack_48 = 0;
  local_40 = 6;
  uStack_38 = 0xf;
  local_50 = 0x3165756c6156;
  (**(code **)param_1[0x1ae])(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x1b1] = 0;
  puVar3 = (undefined8 *)param_1[0x2b];
  local_58 = puVar5;
  if (puVar3 == (undefined8 *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,puVar3,&local_58);
  }
  else {
    *puVar3 = puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0x1cd;
  uStack_48 = 0;
  local_40 = 6;
  uStack_38 = 0xf;
  local_50 = 0x3265756c6156;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x1d0] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_58 = puVar5;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0x1ec;
  uStack_48 = 0;
  local_40 = 6;
  uStack_38 = 0xf;
  local_50 = 0x3365756c6156;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x1ef] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_58 = puVar5;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0x20b;
  uStack_48 = 0;
  local_40 = 6;
  uStack_38 = 0xf;
  local_50 = 0x3465756c6156;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x20e] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_58 = puVar5;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0x22a;
  uStack_48 = 0;
  local_40 = 6;
  uStack_38 = 0xf;
  local_50 = 0x3565756c6156;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x22d] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_58 = puVar5;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0x249;
  uStack_48 = 0;
  local_40 = 6;
  uStack_38 = 0xf;
  local_50 = 0x3665756c6156;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x24c] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_58 = puVar5;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0x268;
  uStack_48 = 0;
  local_40 = 6;
  uStack_38 = 0xf;
  local_50 = 0x3765756c6156;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x26b] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_58 = puVar5;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0x287;
  uStack_48 = 0;
  local_40 = 6;
  uStack_38 = 0xf;
  local_50 = 0x3865756c6156;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x28a] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  if (plVar2 == (longlong *)param_1[0x2c]) {
    local_58 = puVar5;
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  return 1;
}



// ===== FUN_1402a40c0 @ 0x1402a40c0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402a40c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 auStackY_98 [32];
  undefined8 *local_68;
  undefined8 *local_60;
  char *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1407502c0 ^ (ulonglong)auStackY_98;
  FUN_14026db10();
  uVar6 = (**(code **)*param_1)(param_1);
  local_68 = (undefined8 *)IggyPlayerRootPath(uVar6);
  puVar1 = param_1 + 0x34a;
  local_48 = 9;
  uStack_40 = 0xf;
  local_58 = (char *)0x6d61476c6562614c;
  uStack_50 = 0x65;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x34d] = 0;
  puVar2 = param_1 + 0x2a;
  plVar4 = (longlong *)param_1[0x2b];
  local_60 = puVar1;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_60);
  }
  else {
    *plVar4 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x32b;
  local_48 = 10;
  uStack_40 = 0xf;
  local_58 = (char *)0x726f576c6562614c;
  uStack_50 = 0x646c;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x32e] = 0;
  plVar4 = (longlong *)param_1[0x2b];
  local_60 = puVar1;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_60);
  }
  else {
    *plVar4 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x33;
  local_48 = 0xb;
  uStack_40 = 0xf;
  local_58 = (char *)0x6974704f656d6147;
  uStack_50 = 0x736e6f;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x36] = 0;
  plVar4 = (longlong *)param_1[0x2b];
  local_60 = puVar1;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_60);
  }
  else {
    *plVar4 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x388;
  pcVar5 = *(code **)*puVar3;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)FUN_140054e60(0x20);
  local_48 = 0x17;
  uStack_40 = 0x1f;
  builtin_strncpy(local_58,"Description_GameOptions",0x18);
  (*pcVar5)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x38b] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_60 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_60);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x61;
  local_48 = 0xe;
  uStack_40 = 0xf;
  local_58 = (char *)0x786f626b63656843;
  uStack_50 = 0x656e696c6e4f;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[100] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_60 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_60);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x83;
  pcVar5 = *(code **)param_1[0x83];
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)FUN_140054e60(0x20);
  local_48 = 0x12;
  uStack_40 = 0x1f;
  builtin_strncpy(local_58,"CheckboxInviteOnly",0x13);
  (*pcVar5)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x86] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_60 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_60);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0xa5;
  pcVar5 = *(code **)*puVar3;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)FUN_140054e60(0x20);
  local_48 = 0x10;
  uStack_40 = 0x1f;
  builtin_strncpy(local_58,"CheckboxAllowFoF",0x11);
  (*pcVar5)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xa8] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_60 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_60);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 199;
  local_48 = 0xb;
  uStack_40 = 0xf;
  local_58 = (char *)0x786f626b63656843;
  uStack_50 = 0x505650;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xca] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_60 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_60);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x14f;
  pcVar5 = *(code **)*puVar3;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)FUN_140054e60(0x20);
  local_48 = 0x16;
  uStack_40 = 0x1f;
  builtin_strncpy(local_58,"CheckboxHostPrivileges",0x17);
  (*pcVar5)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x152] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_60 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_60);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x309;
  pcVar5 = *(code **)*puVar3;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)FUN_140054e60(0x20);
  local_48 = 0x15;
  uStack_40 = 0x1f;
  builtin_strncpy(local_58,"CheckboxDayLightCycle",0x16);
  (*pcVar5)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x30c] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_60 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_60);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x23d;
  pcVar5 = *(code **)*puVar3;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)FUN_140054e60(0x20);
  local_48 = 0x15;
  uStack_40 = 0x1f;
  builtin_strncpy(local_58,"CheckboxKeepInventory",0x16);
  (*pcVar5)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x240] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_60 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_60);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x25f;
  pcVar5 = *(code **)*puVar3;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)FUN_140054e60(0x20);
  local_48 = 0x13;
  uStack_40 = 0x1f;
  builtin_strncpy(local_58,"CheckboxMobSpawning",0x14);
  (*pcVar5)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x262] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_60 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_60);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x2a3;
  pcVar5 = *(code **)*puVar3;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)FUN_140054e60(0x20);
  local_48 = 0x13;
  uStack_40 = 0x1f;
  builtin_strncpy(local_58,"CheckboxMobGriefing",0x14);
  (*pcVar5)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x2a6] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_60 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_60);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x281;
  local_48 = 0xf;
  uStack_40 = 0xf;
  local_58 = (char *)0x786f626b63656843;
  uStack_50 = 0x746f6f4c626f4d;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x284] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_60 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_60);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x2c5;
  pcVar5 = *(code **)*puVar3;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)FUN_140054e60(0x20);
  local_48 = 0x11;
  uStack_40 = 0x1f;
  builtin_strncpy(local_58,"CheckboxTileDrops",0x12);
  (*pcVar5)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x2c8] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_60 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_60);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x2e7;
  pcVar5 = *(code **)*puVar3;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)FUN_140054e60(0x20);
  local_48 = 0x1b;
  uStack_40 = 0x1f;
  builtin_strncpy(local_58,"CheckboxNaturalRegeneration",0x1c);
  (*pcVar5)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x2ea] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_60 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_60);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x4a;
  local_48 = 0xc;
  uStack_40 = 0xf;
  local_58 = (char *)0x74704f646c726f57;
  uStack_50 = 0x736e6f69;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x4d] = 0;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar1;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x3ab;
  pcVar5 = *(code **)*puVar3;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)FUN_140054e60(0x20);
  local_48 = 0x18;
  uStack_40 = 0x1f;
  builtin_strncpy(local_58,"Description_WorldOptions",0x19);
  (*pcVar5)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x3ae] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x3ce;
  uStack_50 = 0;
  local_48 = 4;
  uStack_40 = 0xf;
  local_58 = (char *)0x64656553;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x3d1] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x44a;
  local_48 = 8;
  uStack_40 = 0xf;
  local_58 = (char *)0x6465655374696445;
  uStack_50 = 0;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x44d] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x3ed;
  local_48 = 10;
  uStack_40 = 0xf;
  local_58 = (char *)0x65536d6f646e6152;
  uStack_50 = 0x6465;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x3f0] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x40c;
  local_48 = 9;
  uStack_40 = 0xf;
  local_58 = (char *)0x7a6953646c726f57;
  uStack_50 = 0x65;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x40f] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x477;
  local_48 = 0xf;
  uStack_40 = 0xf;
  local_58 = (char *)0x7a6953646c726f57;
  uStack_50 = 0x726564696c5365;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x47a] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x193;
  pcVar5 = *(code **)*puVar3;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)FUN_140054e60(0x20);
  local_48 = 0x12;
  uStack_40 = 0x1f;
  builtin_strncpy(local_58,"CheckboxStructures",0x13);
  (*pcVar5)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x196] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x1d7;
  pcVar5 = *(code **)*puVar3;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)FUN_140054e60(0x20);
  local_48 = 0x12;
  uStack_40 = 0x1f;
  builtin_strncpy(local_58,"CheckboxBonusChest",0x13);
  (*pcVar5)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x1da] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x1b5;
  pcVar5 = *(code **)*puVar3;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)FUN_140054e60(0x20);
  local_48 = 0x11;
  uStack_40 = 0x1f;
  builtin_strncpy(local_58,"CheckboxFlatWorld",0x12);
  (*pcVar5)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x1b8] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x171;
  pcVar5 = *(code **)*puVar3;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)FUN_140054e60(0x20);
  local_48 = 0x13;
  uStack_40 = 0x1f;
  builtin_strncpy(local_58,"CheckboxResetNether",0x14);
  (*pcVar5)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x174] = puVar1;
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
  pcVar5 = *(code **)*puVar3;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)FUN_140054e60(0x20);
  local_48 = 0x15;
  uStack_40 = 0x1f;
  builtin_strncpy(local_58,"CheckboxDisableSaving",0x16);
  (*pcVar5)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
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
  puVar3 = param_1 + 0xe9;
  pcVar5 = *(code **)*puVar3;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)FUN_140054e60(0x20);
  local_48 = 0x13;
  uStack_40 = 0x1f;
  builtin_strncpy(local_58,"CheckboxTrustSystem",0x14);
  (*pcVar5)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xec] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x10b;
  pcVar5 = *(code **)*puVar3;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)FUN_140054e60(0x20);
  local_48 = 0x13;
  uStack_40 = 0x1f;
  builtin_strncpy(local_58,"CheckboxFireSpreads",0x14);
  (*pcVar5)(puVar3,param_1);
  if (0xf < uStack_40) {
    if (0xfff < uStack_40 + 1) {
      if ((char *)0x1f < local_58 + (-8 - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x10e] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_68 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_68);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x12d;
  local_48 = 0xb;
  uStack_40 = 0xf;
  local_58 = (char *)0x786f626b63656843;
  uStack_50 = 0x544e54;
  (**(code **)*puVar3)(puVar3,param_1,param_1 + 0x4e,&local_58);
  FUN_140054b60(&local_58);
  param_1[0x130] = puVar1;
  local_68 = puVar3;
  FUN_140272440(puVar2,&local_68);
  puVar3 = param_1 + 0x42b;
  pcVar5 = *(code **)*puVar3;
  FUN_140054990(&local_58,"ResizeLabel");
  (*pcVar5)(puVar3,param_1,param_1 + 0x4e,&local_58);
  FUN_140054b60(&local_58);
  param_1[0x42e] = puVar1;
  local_68 = puVar3;
  FUN_140272440(puVar2,&local_68);
  puVar3 = param_1 + 0x49c;
  pcVar5 = *(code **)*puVar3;
  FUN_140054990(&local_58,"ChangeWorldSizeSlider");
  (*pcVar5)(puVar3,param_1,param_1 + 0x4e,&local_58);
  FUN_140054b60(&local_58);
  param_1[0x49f] = puVar1;
  local_68 = puVar3;
  FUN_140272440(puVar2,&local_68);
  puVar3 = param_1 + 0x21b;
  pcVar5 = *(code **)*puVar3;
  FUN_140054990(&local_58,"CheckboxResizeType");
  (*pcVar5)(puVar3,param_1,param_1 + 0x4e,&local_58);
  FUN_140054b60(&local_58);
  param_1[0x21e] = puVar1;
  local_68 = puVar3;
  FUN_140272440(puVar2,&local_68);
  FUN_140054de0(&local_58,L"ChangeTab");
  uVar6 = FUN_14026eb50(param_1,&local_58);
  param_1[0x4c2] = uVar6;
  FUN_140055150(&local_58);
  FUN_140054de0(&local_58,L"SetMenuType");
  uVar6 = FUN_14026eb50(param_1,&local_58);
  param_1[0x4c1] = uVar6;
  FUN_140055150(&local_58);
  return 1;
}



// ===== FUN_1402a5cb0 @ 0x1402a5cb0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1402a5cb0(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *****pppppuVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  char *pcVar10;
  char cVar11;
  int iVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined8 *****pppppuVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined **ppuVar18;
  undefined8 *****pppppuVar19;
  undefined **ppuVar20;
  longlong lVar21;
  code *pcVar22;
  undefined1 auStackY_1c8 [32];
  undefined8 ****local_188;
  longlong *local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  longlong *local_168;
  undefined4 local_158;
  double local_148;
  undefined4 local_138;
  undefined4 local_128;
  undefined1 local_118 [32];
  undefined8 ****local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  ulonglong uStack_e0;
  undefined8 ****local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  short local_b8 [64];
  ulonglong local_38;
  
  local_38 = DAT_1407502c0 ^ (ulonglong)auStackY_1c8;
  local_168 = param_1;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_LaunchMoreOptionsMenu::vftable;
  FUN_14027f6d0(param_1 + 0x33);
  FUN_14027f6d0(param_1 + 0x4a);
  _eh_vector_constructor_iterator_(param_1 + 0x61,0x110,0x15,FUN_140281b10,FUN_140271e20);
  ppppuVar5 = (undefined8 ****)(param_1 + 0x32b);
  local_188 = ppppuVar5;
  FUN_14027f6d0(ppppuVar5);
  param_1[0x347] = 0;
  param_1[0x348] = 0;
  *(undefined1 *)(param_1 + 0x346) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1964) = 0;
  *ppppuVar5 = (undefined8 ***)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x349) = 1;
  ppppuVar6 = (undefined8 ****)(param_1 + 0x34a);
  local_188 = ppppuVar6;
  FUN_14027f6d0(ppppuVar6);
  param_1[0x366] = 0;
  param_1[0x367] = 0;
  *(undefined1 *)(param_1 + 0x365) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a5c) = 0;
  *ppppuVar6 = (undefined8 ***)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x368) = 1;
  ppppuVar6 = (undefined8 ****)(param_1 + 0x369);
  local_188 = ppppuVar6;
  FUN_14027f6d0(ppppuVar6);
  param_1[0x385] = 0;
  param_1[0x386] = 0;
  *(undefined1 *)(param_1 + 900) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b54) = 0;
  *ppppuVar6 = (undefined8 ***)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x387) = 1;
  ppppuVar6 = (undefined8 ****)(param_1 + 0x388);
  local_188 = ppppuVar6;
  FUN_14027f6d0(ppppuVar6);
  param_1[0x3a4] = 0;
  param_1[0x3a5] = 0;
  *(undefined1 *)(param_1 + 0x3a3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4c) = 0;
  *(undefined1 *)(param_1 + 0x3a6) = 1;
  *ppppuVar6 = (undefined8 ***)UIControl_HTMLLabel::vftable;
  ppppuVar6 = (undefined8 ****)(param_1 + 0x3ab);
  local_188 = ppppuVar6;
  FUN_14027f6d0(ppppuVar6);
  param_1[0x3c7] = 0;
  param_1[0x3c8] = 0;
  *(undefined1 *)(param_1 + 0x3c6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d64) = 0;
  *(undefined1 *)(param_1 + 0x3c9) = 1;
  *ppppuVar6 = (undefined8 ***)UIControl_HTMLLabel::vftable;
  ppppuVar6 = (undefined8 ****)(param_1 + 0x3ce);
  local_188 = ppppuVar6;
  FUN_14027f6d0(ppppuVar6);
  param_1[0x3ea] = 0;
  param_1[0x3eb] = 0;
  *(undefined1 *)(param_1 + 0x3e9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e7c) = 0;
  *ppppuVar6 = (undefined8 ***)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x3ec) = 1;
  ppppuVar6 = (undefined8 ****)(param_1 + 0x3ed);
  local_188 = ppppuVar6;
  FUN_14027f6d0(ppppuVar6);
  param_1[0x409] = 0;
  param_1[0x40a] = 0;
  *(undefined1 *)(param_1 + 0x408) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1f74) = 0;
  *ppppuVar6 = (undefined8 ***)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x40b) = 1;
  ppppuVar6 = (undefined8 ****)(param_1 + 0x40c);
  local_188 = ppppuVar6;
  FUN_14027f6d0(ppppuVar6);
  param_1[0x428] = 0;
  param_1[0x429] = 0;
  *(undefined1 *)(param_1 + 0x427) = 0;
  *(undefined4 *)((longlong)param_1 + 0x206c) = 0;
  *ppppuVar6 = (undefined8 ***)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x42a) = 1;
  ppppuVar6 = (undefined8 ****)(param_1 + 0x42b);
  local_188 = ppppuVar6;
  FUN_14027f6d0(ppppuVar6);
  param_1[0x447] = 0;
  param_1[0x448] = 0;
  *(undefined1 *)(param_1 + 0x446) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2164) = 0;
  *ppppuVar6 = (undefined8 ***)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x449) = 1;
  FUN_140287170(param_1 + 0x44a);
  FUN_1402860b0(param_1 + 0x477);
  FUN_1402860b0(param_1 + 0x49c);
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  param_1[0x4c4] = param_3;
  ppuVar20 = &PTR_140610690;
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x708) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xe0e0);
    if (7 < *(ulonglong *)(lVar21 + 0xe0f8)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140283b10(ppppuVar5,uVar14);
  local_158 = 4;
  local_148 = (double)(*(char *)(param_1[0x4c4] + 3) == '\0');
  local_138 = 3;
  local_128 = 0;
  iVar12 = *(int *)(param_1[0x4c4] + 0x48);
  if ((iVar12 == 1) || (iVar12 - 2U < 2)) {
    local_128 = 1;
  }
  lVar21 = param_1[0x4c1];
  uVar14 = IggyPlayerRootPath(param_1[2]);
  IggyPlayerCallMethodRS(param_1[2],local_118,uVar14,lVar21);
  *(undefined1 *)(param_1 + 0x4c5) = 1;
  pcVar10 = (char *)param_1[0x4c4];
  cVar11 = *pcVar10;
  cVar7 = pcVar10[1];
  cVar8 = pcVar10[2];
  if (cVar11 == '\0') {
    FUN_140281e90(param_1 + 0x83,0);
    FUN_140281e90(param_1 + 0xa5,0);
  }
  *(undefined1 *)(param_1 + 0x4c6) = 0;
  FUN_1402a85b0(param_1);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x71d) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xe380);
    if (7 < *(ulonglong *)(lVar21 + 0xe398)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140281d70(param_1 + 0x61,uVar14,0,cVar11);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x71e) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xe3a0);
    if (7 < *(ulonglong *)(lVar21 + 0xe3b8)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140281d70(param_1 + 0x83,uVar14,1,cVar7);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x65c) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xcb60);
    if (7 < *(ulonglong *)(lVar21 + 0xcb78)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140281d70(param_1 + 0xa5,uVar14,2,cVar8);
  uVar9 = *(undefined1 *)(param_1[0x4c4] + 7);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x702) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xe020);
    if (7 < *(ulonglong *)(lVar21 + 0xe038)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140281d70(param_1 + 199,uVar14,3,uVar9);
  uVar9 = *(undefined1 *)(param_1[0x4c4] + 8);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x703) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xe040);
    if (7 < *(ulonglong *)(lVar21 + 0xe058)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140281d70(param_1 + 0xe9,uVar14,4,uVar9);
  uVar9 = *(undefined1 *)(param_1[0x4c4] + 9);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x700) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xdfe0);
    if (7 < *(ulonglong *)(lVar21 + 0xdff8)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140281d70(param_1 + 0x10b,uVar14,5,uVar9);
  uVar9 = *(undefined1 *)(param_1[0x4c4] + 10);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x701) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xe000);
    if (7 < *(ulonglong *)(lVar21 + 0xe018)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140281d70(param_1 + 0x12d,uVar14,6,uVar9);
  uVar9 = *(undefined1 *)(param_1[0x4c4] + 0xb);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x704) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xe060);
    if (7 < *(ulonglong *)(lVar21 + 0xe078)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140281d70(param_1 + 0x14f,uVar14,7,uVar9);
  uVar9 = *(undefined1 *)(param_1[0x4c4] + 0xc);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x6df) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xdbc0);
    if (7 < *(ulonglong *)(lVar21 + 0xdbd8)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140281d70(param_1 + 0x171,uVar14,8,uVar9);
  uVar9 = *(undefined1 *)(param_1[0x4c4] + 4);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x705) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xe080);
    if (7 < *(ulonglong *)(lVar21 + 0xe098)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140281d70(param_1 + 0x193,uVar14,9,uVar9);
  uVar9 = *(undefined1 *)(param_1[0x4c4] + 5);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x706) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xe0a0);
    if (7 < *(ulonglong *)(lVar21 + 0xe0b8)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140281d70(param_1 + 0x1b5,uVar14,10,uVar9);
  uVar9 = *(undefined1 *)(param_1[0x4c4] + 6);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x707) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xe0c0);
    if (7 < *(ulonglong *)(lVar21 + 0xe0d8)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140281d70(param_1 + 0x1d7,uVar14,0xb,uVar9);
  uVar9 = *(undefined1 *)(param_1[0x4c4] + 0xe);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x70b) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xe140);
    if (7 < *(ulonglong *)(lVar21 + 0xe158)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140281d70(param_1 + 0x23d,uVar14,0xe,uVar9);
  uVar9 = *(undefined1 *)(param_1[0x4c4] + 0xf);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x70c) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xe160);
    if (7 < *(ulonglong *)(lVar21 + 0xe178)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140281d70(param_1 + 0x25f,uVar14,0xf,uVar9);
  uVar9 = *(undefined1 *)(param_1[0x4c4] + 0x10);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x70d) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xe180);
    if (7 < *(ulonglong *)(lVar21 + 0xe198)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140281d70(param_1 + 0x281,uVar14,0x10,uVar9);
  uVar9 = *(undefined1 *)(param_1[0x4c4] + 0xd);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x70a) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xe120);
    if (7 < *(ulonglong *)(lVar21 + 0xe138)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140281d70(param_1 + 0x2a3,uVar14,0x11,uVar9);
  uVar9 = *(undefined1 *)(param_1[0x4c4] + 0x11);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x70e) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xe1a0);
    if (7 < *(ulonglong *)(lVar21 + 0xe1b8)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140281d70(param_1 + 0x2c5,uVar14,0x12,uVar9);
  uVar9 = *(undefined1 *)(param_1[0x4c4] + 0x12);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x70f) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xe1c0);
    if (7 < *(ulonglong *)(lVar21 + 0xe1d8)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140281d70(param_1 + 0x2e7,uVar14,0x13,uVar9);
  uVar9 = *(undefined1 *)(param_1[0x4c4] + 0x13);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x710) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xe1e0);
    if (7 < *(ulonglong *)(lVar21 + 0xe1f8)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140281d70(param_1 + 0x309,uVar14,0x14,uVar9);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x709) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xe100);
    if (7 < *(ulonglong *)(lVar21 + 0xe118)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140283b10(param_1 + 0x34a,uVar14);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x723) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xe440);
    if (7 < *(ulonglong *)(lVar21 + 0xe458)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140283b10(param_1 + 0x3ce,uVar14);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x724) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0xe460);
    if (7 < *(ulonglong *)(lVar21 + 0xe478)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140283b10(param_1 + 0x3ed,uVar14);
  uVar14 = FUN_140089cb0(&local_f8,param_1[0x4c4] + 0x20);
  FUN_140280c40(param_1 + 0x44a,uVar14,0x16);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x8d7) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0x11ac0);
    if (7 < *(ulonglong *)(lVar21 + 0x11ad8)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140283b10(param_1 + 0x40c,uVar14);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  if ((ulonglong)(longlong)*(int *)(&DAT_14060b960 + (longlong)*(int *)(param_1[0x4c4] + 0x40) * 4)
      < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - *(longlong *)(DAT_1407bb780 + 0x48) >> 5))
  {
    ppuVar18 = (undefined **)
               (*(longlong *)(DAT_1407bb780 + 0x48) +
               (longlong)*(int *)(&DAT_14060b960 + (longlong)*(int *)(param_1[0x4c4] + 0x40) * 4) *
               0x20);
    if ((undefined *)0x7 < ppuVar18[3]) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  else {
    ppuVar18 = &PTR_140610690;
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140286290(param_1 + 0x477,uVar14,0x17,0);
  uVar9 = *(undefined1 *)(param_1[0x4c4] + 0x44);
  if (*DAT_1407bb780 == '\0') {
    pcVar22 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar22)();
    return plVar13;
  }
  lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x8d9) {
    ppuVar18 = &PTR_140610690;
  }
  else {
    ppuVar18 = (undefined **)(lVar21 + 0x11b00);
    if (7 < *(ulonglong *)(lVar21 + 0x11b18)) {
      ppuVar18 = (undefined **)*ppuVar18;
    }
  }
  uVar14 = FUN_140089d90(&local_f8,ppuVar18);
  FUN_140281d70(param_1 + 0x1f9,uVar14,0xc,uVar9);
  if (*(int *)(param_1[0x4c4] + 0x48) != 0) {
    if (*DAT_1407bb780 == '\0') {
      pcVar22 = (code *)swi(3);
      plVar13 = (longlong *)(*pcVar22)();
      return plVar13;
    }
    lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x59) {
      ppuVar18 = &PTR_140610690;
    }
    else {
      ppuVar18 = (undefined **)(lVar21 + 0xb00);
      if (7 < *(ulonglong *)(lVar21 + 0xb18)) {
        ppuVar18 = (undefined **)*ppuVar18;
      }
    }
    uVar14 = FUN_140089d90(&local_f8,ppuVar18);
    FUN_140283b10(param_1 + 0x42b,uVar14);
    iVar12 = *(int *)(param_1[0x4c4] + 0x48);
    if (*DAT_1407bb780 == '\0') {
      pcVar22 = (code *)swi(3);
      plVar13 = (longlong *)(*pcVar22)();
      return plVar13;
    }
    if ((ulonglong)
        (longlong)*(int *)(&DAT_14060b95c + (longlong)*(int *)(param_1[0x4c4] + 0x4c) * 4) <
        (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - *(longlong *)(DAT_1407bb780 + 0x48) >> 5))
    {
      ppuVar18 = (undefined **)
                 (*(longlong *)(DAT_1407bb780 + 0x48) +
                 (longlong)*(int *)(&DAT_14060b95c + (longlong)*(int *)(param_1[0x4c4] + 0x4c) * 4)
                 * 0x20);
      if ((undefined *)0x7 < ppuVar18[3]) {
        ppuVar18 = (undefined **)*ppuVar18;
      }
    }
    else {
      ppuVar18 = &PTR_140610690;
    }
    uVar14 = FUN_140089d90(&local_f8,ppuVar18);
    FUN_140286290(param_1 + 0x49c,uVar14,0x18,iVar12 + -1);
    uVar9 = *(undefined1 *)(param_1[0x4c4] + 0x50);
    if (*DAT_1407bb780 == '\0') {
      pcVar22 = (code *)swi(3);
      plVar13 = (longlong *)(*pcVar22)();
      return plVar13;
    }
    lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x5a) {
      ppuVar18 = &PTR_140610690;
    }
    else {
      ppuVar18 = (undefined **)(lVar21 + 0xb20);
      if (7 < *(ulonglong *)(lVar21 + 0xb38)) {
        ppuVar18 = (undefined **)*ppuVar18;
      }
    }
    uVar14 = FUN_140089d90(&local_f8,ppuVar18);
    FUN_140281d70(param_1 + 0x21b,uVar14,0xd,uVar9);
  }
  *(uint *)((longlong)param_1 + 0x262c) = (uint)(*(char *)(param_1[0x4c4] + 3) == '\0');
  local_d8 = (undefined8 ****)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_140054cf0(&local_d8,&PTR_140610690,0);
  if (*(char *)(param_1[0x4c4] + 3) == '\0') {
    if (*DAT_1407bb780 == '\0') {
      pcVar22 = (code *)swi(3);
      plVar13 = (longlong *)(*pcVar22)();
      return plVar13;
    }
    lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((0x677 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5)) &&
       (ppuVar20 = (undefined **)(lVar21 + 0xcee0), 7 < *(ulonglong *)(lVar21 + 0xcef8))) {
      ppuVar20 = (undefined **)*ppuVar20;
    }
    lVar21 = -1;
    do {
      lVar21 = lVar21 + 1;
    } while (*(short *)((longlong)ppuVar20 + lVar21 * 2) != 0);
  }
  else {
    if (*DAT_1407bb780 == '\0') {
      pcVar22 = (code *)swi(3);
      plVar13 = (longlong *)(*pcVar22)();
      return plVar13;
    }
    lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((0x676 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5)) &&
       (ppuVar20 = (undefined **)(lVar21 + 0xcec0), 7 < *(ulonglong *)(lVar21 + 0xced8))) {
      ppuVar20 = (undefined **)*ppuVar20;
    }
    lVar21 = -1;
    do {
      lVar21 = lVar21 + 1;
    } while (*(short *)((longlong)ppuVar20 + lVar21 * 2) != 0);
  }
  FUN_1400549d0(&local_d8,ppuVar20);
  cVar11 = FUN_140004470(&DAT_140784700);
  if (cVar11 == '\0') {
    FUN_140004470(&DAT_140784700);
  }
  lVar21 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar11 = (**(code **)**(undefined8 **)(lVar21 + 0xb8))();
  plVar13 = DAT_1407915a8;
  if (cVar11 != '\0') {
    plVar13 = *(longlong **)(lVar21 + 0xb8);
  }
  lVar21 = (**(code **)(*plVar13 + 0xd8))();
  FUN_1400547f0(local_b8,0x40,L"<font color=\"#%08x\">",*(undefined4 *)(lVar21 + 0x474));
  uVar17 = 0xffffffffffffffff;
  do {
    uVar17 = uVar17 + 1;
  } while (local_b8[uVar17] != 0);
  if (uVar17 <= 0x7ffffffffffffffeU - local_c8) {
    FUN_140048da0(&local_f8);
    if (7 < uStack_c0) {
      if ((0xfff < uStack_c0 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)local_d8[-1])))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
    local_d8 = local_f8;
    uStack_d0 = plStack_f0;
    local_c8 = local_e8;
    uStack_c0 = uStack_e0;
    local_e8 = 0;
    uStack_e0 = 7;
    local_f8 = (undefined8 ****)((ulonglong)local_f8 & 0xffffffffffff0000);
    FUN_140055150(&local_f8);
    local_f8 = (undefined8 ****)0x0;
    plStack_f0 = (longlong *)0x0;
    if (*(int *)((longlong)param_1 + 0x262c) == 0) {
      pcVar22 = *(code **)(param_1[0x3ab] + 0x28);
      local_188 = &local_f8;
      pppppuVar15 = (undefined8 *****)FUN_140558c80(0x88);
      *pppppuVar15 = (undefined8 ****)0x0;
      pppppuVar15[1] = (undefined8 ****)0x0;
      pppppuVar1 = pppppuVar15 + 4;
      *pppppuVar1 = (undefined8 ****)0x0;
      pppppuVar15[5] = (undefined8 ****)0x0;
      pppppuVar15[6] = (undefined8 ****)0x0;
      pppppuVar15[7] = (undefined8 ****)0x7;
      *(undefined2 *)pppppuVar1 = 0;
      pppppuVar15[0x10] = (undefined8 ****)0x0;
      *(undefined1 *)(pppppuVar15 + 8) = 1;
      pppppuVar15[2] = (undefined8 ****)0xffffffffffffffff;
      pppppuVar15[3] = (undefined8 ****)0xffffffffffffffff;
      local_178 = pppppuVar15;
      if (pppppuVar1 != &local_d8) {
        pppppuVar19 = &local_d8;
        if (7 < uStack_c0) {
          pppppuVar19 = (undefined8 *****)local_d8;
        }
        FUN_1400549d0(pppppuVar1,pppppuVar19,local_c8);
      }
      puVar16 = (undefined8 *)FUN_14008a140(&local_178,pppppuVar15);
      plVar4 = plStack_f0;
      local_f8 = (undefined8 ****)*puVar16;
      plVar13 = (longlong *)puVar16[1];
      *puVar16 = 0;
      puVar16[1] = 0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_f0 + 1;
        lVar21 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar21 == 1) {
          puVar16 = (undefined8 *)*plStack_f0;
          plStack_f0 = plVar13;
          (*(code *)*puVar16)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          iVar12 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          plVar13 = plStack_f0;
          if (iVar12 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4);
            plVar13 = plStack_f0;
          }
        }
      }
      plStack_f0 = plVar13;
      plVar13 = (longlong *)CONCAT44(uStack_16c,local_170);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar13 + 1;
        lVar21 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar21 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar3 = (int *)((longlong)plVar13 + 0xc);
          iVar12 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13);
          }
        }
      }
      plVar13 = param_1 + 0x3ab;
    }
    else {
      pcVar22 = *(code **)(param_1[0x388] + 0x28);
      local_178 = &local_f8;
      pppppuVar15 = (undefined8 *****)FUN_140558c80(0x88);
      *pppppuVar15 = (undefined8 ****)0x0;
      pppppuVar15[1] = (undefined8 ****)0x0;
      pppppuVar1 = pppppuVar15 + 4;
      *pppppuVar1 = (undefined8 ****)0x0;
      pppppuVar15[5] = (undefined8 ****)0x0;
      pppppuVar15[6] = (undefined8 ****)0x0;
      pppppuVar15[7] = (undefined8 ****)0x7;
      *(undefined2 *)pppppuVar1 = 0;
      pppppuVar15[0x10] = (undefined8 ****)0x0;
      *(undefined1 *)(pppppuVar15 + 8) = 1;
      pppppuVar15[2] = (undefined8 ****)0xffffffffffffffff;
      pppppuVar15[3] = (undefined8 ****)0xffffffffffffffff;
      local_188 = pppppuVar15;
      if (pppppuVar1 != &local_d8) {
        pppppuVar19 = &local_d8;
        if (7 < uStack_c0) {
          pppppuVar19 = (undefined8 *****)local_d8;
        }
        FUN_1400549d0(pppppuVar1,pppppuVar19,local_c8);
      }
      puVar16 = (undefined8 *)FUN_14008a140(&local_188,pppppuVar15);
      plVar4 = plStack_f0;
      local_f8 = (undefined8 ****)*puVar16;
      plVar13 = (longlong *)puVar16[1];
      *puVar16 = 0;
      puVar16[1] = 0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_f0 + 1;
        lVar21 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar21 == 1) {
          puVar16 = (undefined8 *)*plStack_f0;
          plStack_f0 = plVar13;
          (*(code *)*puVar16)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          iVar12 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          plVar13 = plStack_f0;
          if (iVar12 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4);
            plVar13 = plStack_f0;
          }
        }
      }
      plStack_f0 = plVar13;
      if (local_180 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_180 + 1;
        lVar21 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar21 == 1) {
          (**(code **)*local_180)(local_180);
          LOCK();
          piVar3 = (int *)((longlong)local_180 + 0xc);
          iVar12 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_180 + 8))(local_180);
          }
        }
      }
      plVar13 = param_1 + 0x388;
    }
    (*pcVar22)(plVar13,&local_f8,0,0);
    local_188 = (undefined8 ****)((ulonglong)local_188 & 0xffffffff00000000);
    local_170 = CONCAT31(local_170._1_3_,1);
    local_178 = (undefined8 *****)CONCAT44(local_178._4_4_,100);
    iVar12 = FUN_140352410();
    local_178 = (undefined8 *****)CONCAT44(iVar12 + 100,(undefined4)local_178);
    plVar13 = (longlong *)FUN_140270660(param_1 + 0x1b,&local_f8,&local_188);
    lVar21 = *plVar13;
    *(undefined8 ******)(lVar21 + 0x14) = local_178;
    *(undefined4 *)(lVar21 + 0x1c) = local_170;
    *(undefined1 *)((longlong)param_1 + 0x2629) = 0;
    FUN_140055150(&local_d8);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140054e40();
}



// ===== FUN_1402a7b50 @ 0x1402a7b50 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402a7b50(longlong param_1,double param_2)

{
  undefined8 *****pppppuVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *****pppppuVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  undefined **ppuVar11;
  undefined8 *****pppppuVar12;
  longlong lVar13;
  code *pcVar14;
  undefined1 auStackY_148 [32];
  undefined8 ****local_108;
  longlong *local_100;
  undefined8 ****local_f8;
  longlong *local_f0;
  undefined8 ****local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  undefined8 ****local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  ulonglong uStack_b0;
  short local_a8 [64];
  ulonglong local_28;
  
  local_28 = DAT_1407502c0 ^ (ulonglong)auStackY_148;
  iVar10 = 0;
  switch((int)param_2) {
  case 0:
    iVar10 = 0x677;
    break;
  case 1:
    iVar10 = 0x678;
    break;
  case 2:
    iVar10 = 0x679;
    break;
  case 3:
    iVar10 = 0x67a;
    break;
  case 4:
    iVar10 = 0x67b;
    break;
  case 5:
    iVar10 = 0x67c;
    break;
  case 6:
    iVar10 = 0x67d;
    break;
  case 7:
    iVar10 = 0x8c6;
    break;
  case 8:
    iVar10 = 0x67e;
    break;
  case 9:
    iVar10 = 0x67f;
    break;
  case 10:
    iVar10 = 0x680;
    break;
  case 0xb:
    iVar10 = 0x681;
    break;
  case 0xc:
    iVar10 = 0x8d9;
    break;
  case 0xd:
    iVar10 = 0x5b;
    break;
  case 0xe:
    iVar10 = 0x683;
    break;
  case 0xf:
    iVar10 = 0x684;
    break;
  case 0x10:
    iVar10 = 0x685;
    break;
  case 0x11:
    iVar10 = 0x682;
    break;
  case 0x12:
    iVar10 = 0x686;
    break;
  case 0x13:
    iVar10 = 0x687;
    break;
  case 0x14:
    iVar10 = 0x688;
    break;
  case 0x16:
    iVar10 = 0x676;
    break;
  case 0x17:
    iVar10 = 0x8d7;
    break;
  case 0x18:
    iVar10 = 0x5a;
  }
  if (*DAT_1407bb780 == '\0') {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if ((ulonglong)(longlong)iVar10 <
      (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - *(longlong *)(DAT_1407bb780 + 0x48) >> 5)) {
    ppuVar11 = (undefined **)((longlong)iVar10 * 0x20 + *(longlong *)(DAT_1407bb780 + 0x48));
    if ((undefined *)0x7 < ppuVar11[3]) {
      ppuVar11 = (undefined **)*ppuVar11;
    }
  }
  else {
    ppuVar11 = &PTR_140610690;
  }
  local_e8 = (undefined8 ****)0x0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  lVar13 = -1;
  do {
    lVar13 = lVar13 + 1;
  } while (*(short *)((longlong)ppuVar11 + lVar13 * 2) != 0);
  FUN_140054cf0(&local_e8);
  cVar5 = FUN_140004470(&DAT_140784700);
  if (cVar5 == '\0') {
    FUN_140004470(&DAT_140784700);
  }
  lVar13 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar5 = (**(code **)**(undefined8 **)(lVar13 + 0xb8))();
  plVar8 = DAT_1407915a8;
  if (cVar5 != '\0') {
    plVar8 = *(longlong **)(lVar13 + 0xb8);
  }
  lVar13 = (**(code **)(*plVar8 + 0xd8))();
  FUN_1400547f0(local_a8,0x40,L"<font color=\"#%08x\">",*(undefined4 *)(lVar13 + 0x474));
  uVar9 = 0xffffffffffffffff;
  do {
    uVar9 = uVar9 + 1;
  } while (local_a8[uVar9] != 0);
  if (uVar9 <= 0x7ffffffffffffffeU - local_d8) {
    FUN_140048da0(&local_c8);
    if (7 < uStack_d0) {
      if ((0xfff < uStack_d0 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)local_e8[-1])))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
    local_e8 = local_c8;
    uStack_d0 = uStack_b0;
    local_b8 = 0;
    uStack_b0 = 7;
    local_c8 = (undefined8 ****)((ulonglong)local_c8 & 0xffffffffffff0000);
    FUN_140055150(&local_c8);
    local_c8 = (undefined8 ****)0x0;
    plStack_c0 = (longlong *)0x0;
    if (*(int *)(param_1 + 0x262c) == 0) {
      pcVar14 = *(code **)(*(longlong *)(param_1 + 0x1d58) + 0x28);
      local_108 = &local_c8;
      pppppuVar6 = (undefined8 *****)FUN_140558c80(0x88);
      *pppppuVar6 = (undefined8 ****)0x0;
      pppppuVar6[1] = (undefined8 ****)0x0;
      pppppuVar1 = pppppuVar6 + 4;
      *pppppuVar1 = (undefined8 ****)0x0;
      pppppuVar6[5] = (undefined8 ****)0x0;
      pppppuVar6[6] = (undefined8 ****)0x0;
      pppppuVar6[7] = (undefined8 ****)0x7;
      *(undefined2 *)pppppuVar1 = 0;
      pppppuVar6[0x10] = (undefined8 ****)0x0;
      *(undefined1 *)(pppppuVar6 + 8) = 1;
      pppppuVar6[2] = (undefined8 ****)0xffffffffffffffff;
      pppppuVar6[3] = (undefined8 ****)0xffffffffffffffff;
      local_f8 = pppppuVar6;
      if (pppppuVar1 != &local_e8) {
        pppppuVar12 = &local_e8;
        if (7 < uStack_d0) {
          pppppuVar12 = (undefined8 *****)local_e8;
        }
        FUN_1400549d0(pppppuVar1,pppppuVar12);
      }
      puVar7 = (undefined8 *)FUN_14008a140(&local_f8,pppppuVar6);
      plVar4 = plStack_c0;
      local_c8 = (undefined8 ****)*puVar7;
      plVar8 = (longlong *)puVar7[1];
      *puVar7 = 0;
      puVar7[1] = 0;
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_c0 + 1;
        lVar13 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          puVar7 = (undefined8 *)*plStack_c0;
          plStack_c0 = plVar8;
          (*(code *)*puVar7)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          iVar10 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          plVar8 = plStack_c0;
          if (iVar10 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4);
            plVar8 = plStack_c0;
          }
        }
      }
      plStack_c0 = plVar8;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_f0 + 1;
        lVar13 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar3 = (int *)((longlong)local_f0 + 0xc);
          iVar10 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0);
          }
        }
      }
      param_1 = param_1 + 0x1d58;
    }
    else {
      pcVar14 = *(code **)(*(longlong *)(param_1 + 0x1c40) + 0x28);
      local_f8 = &local_c8;
      pppppuVar6 = (undefined8 *****)FUN_140558c80(0x88);
      *pppppuVar6 = (undefined8 ****)0x0;
      pppppuVar6[1] = (undefined8 ****)0x0;
      pppppuVar1 = pppppuVar6 + 4;
      *pppppuVar1 = (undefined8 ****)0x0;
      pppppuVar6[5] = (undefined8 ****)0x0;
      pppppuVar6[6] = (undefined8 ****)0x0;
      pppppuVar6[7] = (undefined8 ****)0x7;
      *(undefined2 *)pppppuVar1 = 0;
      pppppuVar6[0x10] = (undefined8 ****)0x0;
      *(undefined1 *)(pppppuVar6 + 8) = 1;
      pppppuVar6[2] = (undefined8 ****)0xffffffffffffffff;
      pppppuVar6[3] = (undefined8 ****)0xffffffffffffffff;
      local_108 = pppppuVar6;
      if (pppppuVar1 != &local_e8) {
        pppppuVar12 = &local_e8;
        if (7 < uStack_d0) {
          pppppuVar12 = (undefined8 *****)local_e8;
        }
        FUN_1400549d0(pppppuVar1,pppppuVar12);
      }
      puVar7 = (undefined8 *)FUN_14008a140(&local_108,pppppuVar6);
      plVar4 = plStack_c0;
      local_c8 = (undefined8 ****)*puVar7;
      plVar8 = (longlong *)puVar7[1];
      *puVar7 = 0;
      puVar7[1] = 0;
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_c0 + 1;
        lVar13 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          puVar7 = (undefined8 *)*plStack_c0;
          plStack_c0 = plVar8;
          (*(code *)*puVar7)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          iVar10 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          plVar8 = plStack_c0;
          if (iVar10 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4);
            plVar8 = plStack_c0;
          }
        }
      }
      plStack_c0 = plVar8;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_100 + 1;
        lVar13 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar3 = (int *)((longlong)local_100 + 0xc);
          iVar10 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_100 + 8))(local_100);
          }
        }
      }
      param_1 = param_1 + 0x1c40;
    }
    (*pcVar14)(param_1,&local_c8);
    if (7 < uStack_d0) {
      if ((0xfff < uStack_d0 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)local_e8[-1])))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140054e40();
}



// ===== FUN_1402a85b0 @ 0x1402a85b0 [ui] =====

void FUN_1402a85b0(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x2620) + 0xb);
  FUN_140281e90(param_1 + 0x11e8,cVar1);
  FUN_140281e90(param_1 + 0x12f8,cVar1);
  FUN_140281e90(param_1 + 0x1518,cVar1);
  FUN_140281e90(param_1 + 0x1848,cVar1);
  if (cVar1 == '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x2620) + 0xd) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x2620) + 0xe) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x2620) + 0xf) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x2620) + 0x13) = 1;
    FUN_140281f00(param_1 + 0x11e8,*(undefined1 *)(*(longlong *)(param_1 + 0x2620) + 0xe));
    FUN_140281f00(param_1 + 0x12f8,*(undefined1 *)(*(longlong *)(param_1 + 0x2620) + 0xf));
    FUN_140281f00(param_1 + 0x1518,*(undefined1 *)(*(longlong *)(param_1 + 0x2620) + 0xd));
    FUN_140281f00(param_1 + 0x1848,*(undefined1 *)(*(longlong *)(param_1 + 0x2620) + 0x13));
  }
  return;
}



// ===== FUN_1402a8b40 @ 0x1402a8b40 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1402a8b40(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 auStack_118 [32];
  undefined **local_f8;
  longlong *local_e8 [2];
  longlong *local_d8;
  undefined1 local_c8 [80];
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = DAT_1407502c0 ^ (ulonglong)auStack_118;
  local_d8 = param_1;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_LeaderboardsMenu::vftable;
  param_1[0x33] = (longlong)UIScene_LeaderboardsMenu::vftable;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  plVar3 = DAT_1407bdac8;
  param_1[0x3e] = (longlong)DAT_1407bdac8;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0xffffffff;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 5;
  param_1[0x43] = 0;
  (**(code **)(*plVar3 + 0x18))();
  plVar3 = param_1 + 0x44;
  local_e8[0] = plVar3;
  FUN_14027f6d0(plVar3);
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  *plVar3 = (longlong)UIControl_LeaderboardList::vftable;
  plVar3 = param_1 + 0x67;
  local_e8[0] = plVar3;
  FUN_14027f6d0(plVar3);
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  *plVar3 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x85) = 1;
  plVar3 = param_1 + 0x86;
  local_e8[0] = plVar3;
  FUN_14027f6d0(plVar3);
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0;
  *plVar3 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0xa4) = 1;
  plVar3 = param_1 + 0xa5;
  local_e8[0] = plVar3;
  FUN_14027f6d0(plVar3);
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x534) = 0;
  *plVar3 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0xc3) = 1;
  plVar3 = param_1 + 0xc4;
  local_e8[0] = plVar3;
  FUN_14027f6d0(plVar3);
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  *(undefined1 *)(param_1 + 0xdf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x62c) = 0;
  *plVar3 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0xe2) = 1;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  *(undefined2 *)((longlong)param_1 + 0x1e9) = 0;
  param_1[0x3c] = -1;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0xe6) = 1;
  DAT_1407bb85c = 1;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 2;
  FUN_1402ab7c0(param_1);
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  ppuVar5 = &PTR_140610690;
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar3 = (longlong *)(*pcVar2)();
    return plVar3;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x5cd) {
    local_f8 = &PTR_140610690;
  }
  else {
    local_f8 = (undefined **)(lVar1 + 0xb980);
    if (7 < *(ulonglong *)(lVar1 + 0xb998)) {
      local_f8 = (undefined **)*local_f8;
    }
  }
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar3 = (longlong *)(*pcVar2)();
    return plVar3;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x5cc) {
    ppuVar6 = &PTR_140610690;
  }
  else {
    ppuVar6 = (undefined **)(lVar1 + 0xb960);
    if (7 < *(ulonglong *)(lVar1 + 0xb978)) {
      ppuVar6 = (undefined **)*ppuVar6;
    }
  }
  FUN_1400547f0(local_c8,0x28,L"%ls%ls",ppuVar6);
  uVar4 = FUN_140089d90(local_e8,local_c8);
  FUN_140283b10(param_1 + 0x67,uVar4);
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar3 = (longlong *)(*pcVar2)();
    return plVar3;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((0x5cf < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5)) &&
     (ppuVar5 = (undefined **)(lVar1 + 0xb9e0), 7 < *(ulonglong *)(lVar1 + 0xb9f8))) {
    ppuVar5 = (undefined **)*ppuVar5;
  }
  local_f8 = (undefined **)0x0;
  FUN_1400547f0(local_78,0x28,L"%ls%i",ppuVar5);
  uVar4 = FUN_140089d90(local_e8,local_78);
  FUN_140283b10(param_1 + 0xa5,uVar4);
  FUN_1402a9720(param_1,0xffffffff);
  return param_1;
}



// ===== FUN_1402b0d20 @ 0x1402b0d20 [ui] =====

longlong * FUN_1402b0d20(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined1 local_48 [16];
  
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_LoadOrJoinMenu::vftable;
  plVar1 = param_1 + 0x36;
  FUN_14027f6d0(plVar1);
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x5b] = 0;
  *plVar1 = (longlong)UIControl_SaveList::vftable;
  plVar2 = param_1 + 0x5d;
  FUN_14027f6d0(plVar2);
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  param_1[0x82] = 0;
  *plVar2 = (longlong)UIControl_SaveList::vftable;
  plVar3 = param_1 + 0x84;
  FUN_14027f6d0(plVar3);
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0;
  *plVar3 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0xa2) = 1;
  plVar4 = param_1 + 0xa3;
  FUN_14027f6d0(plVar4);
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  *(undefined1 *)(param_1 + 0xbe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x524) = 0;
  *plVar4 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0xc1) = 1;
  plVar5 = param_1 + 0xc2;
  FUN_14027f6d0(plVar5);
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  *(undefined1 *)(param_1 + 0xdd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x61c) = 0;
  *plVar5 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0xe0) = 1;
  FUN_14027f6d0(param_1 + 0xe1);
  FUN_14027f6d0(param_1 + 0xf8);
  FUN_14027f6d0();
  param_1[299] = 0;
  param_1[300] = 0;
  *(undefined1 *)(param_1 + 0x12a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x884) = 0;
  param_1[0x10f] = (longlong)UIControl_SpaceIndicatorBar::vftable;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 100;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  param_1[0x147] = 0;
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  param_1[0x14a] = 7;
  *(undefined2 *)(param_1 + 0x147) = 0;
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  param_1[0x14d] = 0;
  param_1[0x14e] = 7;
  *(undefined2 *)(param_1 + 0x14b) = 0;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  DAT_1407bb85c = 1;
  *(undefined4 *)(param_1 + 0x142) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa24) = 0;
  *(undefined1 *)(param_1 + 0x13f) = 0;
  *(undefined2 *)((longlong)param_1 + 0x9fc) = 0;
  param_1[0x13a] = 0;
  *(undefined4 *)(param_1 + 0x139) = 0;
  FUN_140281240(plVar1,0);
  FUN_140281240(plVar2,1);
  uVar8 = FUN_1400899e0(local_48,0x726);
  FUN_140283b10(plVar3,uVar8);
  uVar8 = FUN_1400899e0(local_48,0x725);
  FUN_140283b10(plVar4,uVar8);
  uVar8 = FUN_1400899e0(local_48,0x727);
  FUN_140283b10(plVar5,uVar8);
  if (*(char *)((longlong)param_1 + 0x6c4) != '\0') {
    iVar7 = IggyValueSetBooleanRS(param_1 + 0xc6,param_1[0xd5],0,0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0x6c4) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x7bc) != '\x01') {
    iVar7 = IggyValueSetBooleanRS(param_1 + 0xe5,param_1[0xf4],0,1);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0x7bc) = 1;
  }
  if (*(char *)((longlong)param_1 + 0x874) != '\x01') {
    iVar7 = IggyValueSetBooleanRS(param_1 + 0xfc,param_1[0x10b],0,1);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0x874) = 1;
  }
  uVar8 = FUN_140089d90(local_48,&PTR_140610690);
  FUN_140286dd0(param_1 + 0x10f,uVar8,2,0,0x100000000);
  *(undefined2 *)((longlong)param_1 + 0xa31) = 0;
  *(undefined2 *)((longlong)param_1 + 0x9f9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9fb) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  param_1[0x143] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0c) = 0;
  *(undefined1 *)(param_1 + 0x146) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0x141) = 1;
  uVar10 = FUN_1400024e0(&DAT_140784008);
  cVar6 = FUN_1400382a0(uVar10,*(undefined4 *)((longlong)param_1 + 0x174));
  if ((cVar6 == '\x01') || (DAT_1407bb9f2 != '\0')) {
    *(undefined1 *)(param_1 + 0x13f) = 1;
  }
  else {
    FUN_1402b16d0(param_1);
  }
  FUN_1402b44c0(param_1);
  (**(code **)(*DAT_140790368 + 0x1b0))(DAT_140790368,&LAB_1402b44b0,param_1);
  puVar9 = (undefined8 *)FUN_140558c80(0x10);
  *puVar9 = 0;
  puVar9[1] = 0;
  param_1[0x140] = (longlong)puVar9;
  DAT_140790da7 = 0;
  DAT_140790da6 = 0;
  if ((char)param_1[0x13f] == '\0') {
    FUN_140057cc0(&DAT_1407bb5f0);
  }
  return param_1;
}



// ===== FUN_1402b3aa0 @ 0x1402b3aa0 [ui] =====

void FUN_1402b3aa0(undefined8 param_1,double param_2,double param_3)

{
  FUN_14002fee0(&DAT_1407bb5d0,6,"UIScene_LoadOrJoinMenu::handleInitFocus - %d , %d\n",(int)param_2,
                (int)param_3);
  return;
}



// ===== FUN_1402b3ad0 @ 0x1402b3ad0 [ui] =====

void FUN_1402b3ad0(longlong *param_1,double param_2,double param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_2;
  iVar2 = (int)param_3;
  FUN_14002fee0(&DAT_1407bb5d0,6,"UIScene_LoadOrJoinMenu::handleFocusChange - %d , %d\n",iVar1,iVar2
               );
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x145) = iVar2;
    *(undefined1 *)((longlong)param_1 + 0xa32) = 1;
  }
  else if (iVar1 == 1) {
    *(int *)((longlong)param_1 + 0x414) = iVar2;
    *(int *)((longlong)param_1 + 0xa2c) = iVar2 + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001402b3b45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1);
  return;
}



// ===== FUN_1402b6520 @ 0x1402b6520 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1402b6520(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  undefined **ppuVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da;
  undefined1 auStackY_128 [32];
  undefined **local_f8;
  undefined8 *local_f0;
  undefined **local_e8;
  undefined ***local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined **local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined8 local_a4;
  longlong *local_98;
  ulonglong local_90;
  ulonglong uStack_88;
  ulonglong local_80;
  ulonglong uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1407502c0 ^ (ulonglong)auStackY_128;
  local_98 = param_1;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_MainMenu::vftable;
  _eh_vector_constructor_iterator_(param_1 + 0x33,0xf8,6,FUN_140280b20,FUN_140271e20);
  FUN_14027f6d0(param_1 + 0xed);
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 7;
  *(undefined2 *)(param_1 + 0x10a) = 0;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  FUN_14026bdd0(param_4,param_2 & 0xffffffff,0x3c);
  FUN_14026bdd0(param_4,param_2 & 0xffffffff,0x3d);
  *(undefined4 *)(param_1 + 0x10e) = 0;
  *(undefined1 *)(param_1 + 0x104) = 0;
  uVar4 = FUN_1400899e0(&local_f8,0x728);
  FUN_140280c40(param_1 + 0x33,uVar4,0);
  uVar4 = FUN_1400899e0(&local_f8,0x729);
  FUN_140280c40(param_1 + 0x52,uVar4,1);
  uVar4 = FUN_1400899e0(&local_f8,0x8c8);
  FUN_140280c40(param_1 + 0x71,uVar4,2);
  uVar4 = FUN_1400899e0(&local_f8,0x72a);
  FUN_140280c40(param_1 + 0x90,uVar4,3);
  if (DAT_1407baaa8 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x821) = 1;
    uVar4 = 0x72b;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x821) = 0;
    uVar4 = 0x59d;
  }
  uVar4 = FUN_1400899e0(&local_f8,uVar4);
  FUN_140280c40(param_1 + 0xaf,uVar4,4);
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar2)();
    return plVar5;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x5a0) {
    ppuVar7 = &PTR_140610690;
  }
  else {
    ppuVar7 = (undefined **)(lVar1 + 0xb3e0);
    if (7 < *(ulonglong *)(lVar1 + 0xb3f8)) {
      ppuVar7 = (undefined **)*ppuVar7;
    }
  }
  uVar4 = FUN_140089d90(&local_f8,ppuVar7);
  FUN_140280c40(param_1 + 0xce,uVar4,5);
  FUN_14026eda0(param_1);
  FUN_1400549d0(param_1 + 0x10a,&PTR_140610690,0);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uVar9 = FUN_140054cf0(&local_50,L"splashes.txt",0xc);
  cVar3 = FUN_140040850(uVar9,&local_50);
  if (cVar3 != '\0') {
    FUN_1400409e0(extraout_XMM0_Da,&local_70);
    local_c0 = ByteArrayInputStream::vftable;
    local_a8 = uStack_68;
    local_a4 = 0;
    local_b8 = (undefined4)local_70;
    uStack_b4 = local_70._4_4_;
    uStack_b0 = uStack_68;
    uStack_ac = uStack_64;
    local_f8 = InputStreamReader::vftable;
    local_f0 = (undefined8 *)FUN_140558c80(0x18);
    *local_f0 = DataInputStream::vftable;
    local_f0[1] = DataInputStream::vftable;
    local_f0[2] = &local_c0;
    local_e8 = BufferedReader::vftable;
    local_e0 = &local_f8;
    local_d0 = 0;
    local_c4 = 0;
    local_c8 = 0x40;
    local_70 = local_f0;
    local_d8 = (undefined8 *)thunk_FUN_140558c80(0x80);
    *local_d8 = 0;
    local_d8[1] = 0;
    local_d8[2] = 0;
    local_d8[3] = 0;
    local_d8[4] = 0;
    local_d8[5] = 0;
    local_d8[6] = 0;
    local_d8[7] = 0;
    local_d8[8] = 0;
    local_d8[9] = 0;
    local_d8[10] = 0;
    local_d8[0xb] = 0;
    local_d8[0xc] = 0;
    local_d8[0xd] = 0;
    local_d8[0xe] = 0;
    local_d8[0xf] = 0;
    FUN_1403ab280(&local_e8);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    FUN_140054cf0(&local_90,&PTR_140610690);
    while( true ) {
      puVar6 = (ulonglong *)FUN_1403ab4d0(&local_e8,&local_70);
      if (&local_90 != puVar6) {
        if (7 < uStack_78) {
          if (0xfff < uStack_78 * 2 + 2) {
            if (0x1f < (local_90 - *(longlong *)(local_90 - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          thunk_FUN_1401fe000();
        }
        local_90 = *puVar6;
        uStack_88 = puVar6[1];
        local_80 = puVar6[2];
        uStack_78 = puVar6[3];
        puVar6[2] = 0;
        puVar6[3] = 7;
        *(undefined2 *)puVar6 = 0;
      }
      bVar8 = local_80 == 0;
      FUN_140055150(&local_70);
      if (bVar8) break;
      puVar6 = (ulonglong *)FUN_1403156e0(&local_70,&local_90);
      if (&local_90 != puVar6) {
        if (7 < uStack_78) {
          if (0xfff < uStack_78 * 2 + 2) {
            if (0x1f < (local_90 - *(longlong *)(local_90 - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          thunk_FUN_1401fe000();
        }
        local_90 = *puVar6;
        uStack_88 = puVar6[1];
        local_80 = puVar6[2];
        uStack_78 = puVar6[3];
        puVar6[2] = 0;
        puVar6[3] = 7;
        *(undefined2 *)puVar6 = 0;
      }
      FUN_140055150(&local_70);
      if (local_80 != 0) {
        FUN_1400481a0(param_1 + 0x107,&local_90);
      }
    }
    if ((code *)(*local_e0)[1] == FUN_1403ab600) {
      (**(code **)(*local_e0[1] + 0x20))();
    }
    else {
      (*(code *)(*local_e0)[1])();
    }
    if (7 < uStack_78) {
      if (0xfff < uStack_78 * 2 + 2) {
        if (0x1f < (local_90 - *(longlong *)(local_90 - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      thunk_FUN_1401fe000();
    }
    local_80 = 0;
    uStack_78 = 7;
    local_90 = local_90 & 0xffffffffffff0000;
    thunk_FUN_1401fe000(local_d8);
    local_f8 = Reader::vftable;
    local_c0 = ByteArrayInputStream::vftable;
    if (CONCAT44(uStack_b4,local_b8) != 0) {
      thunk_FUN_1401fe000();
    }
  }
  *(undefined1 *)(param_1 + 0x104) = 0;
  *(undefined1 *)((longlong)param_1 + 0x822) = 0;
  FUN_14005d380(&DAT_1407bbac0);
  DAT_1407bbac8 = 0;
  DAT_1407bbac0 = 0;
  (**(code **)(*DAT_140790368 + 0x110))();
  FUN_140055150(&local_50);
  return param_1;
}



// ===== FUN_1402b7b10 @ 0x1402b7b10 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

longlong * FUN_1402b7b10(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *******pppppppuVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 ******ppppppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 ******ppppppuVar14;
  undefined1 auStackY_f8 [32];
  longlong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 *******local_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 ******local_98;
  undefined8 ******ppppppuStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStackY_f8;
  ppppppuVar14 = (undefined8 ******)0x0;
  local_b0 = param_1;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_NewUpdateMessage::vftable;
  plVar3 = param_1 + 0x34;
  FUN_14027f6d0(plVar3);
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *plVar3 = (longlong)UIControl_Button::vftable;
  plVar1 = param_1 + 0x53;
  local_88 = plVar1;
  FUN_14027f6d0(plVar1);
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined1 *)(param_1 + 0x71) = 1;
  *plVar1 = (longlong)UIControl_DynamicLabel::vftable;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  FUN_14026bdd0(param_4,param_2 & 0xffffffff,0x3c);
  FUN_14026bdd0(param_4,param_2 & 0xffffffff,0x3d);
  ppuVar11 = &PTR_140610690;
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar3 = (longlong *)(*pcVar2)();
    return plVar3;
  }
  lVar12 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar12 >> 5) < 0x577) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar12 + 0xaec0);
    if (7 < *(ulonglong *)(lVar12 + 0xaed8)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  uVar4 = FUN_140089d90(&local_88,ppuVar10);
  FUN_140280c40(plVar3,uVar4,0);
  if (*DAT_1407bb780 != '\0') {
    lVar12 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((0xc9 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar12 >> 5)) &&
       (ppuVar11 = (undefined **)(lVar12 + 0x1920), 7 < *(ulonglong *)(lVar12 + 0x1938))) {
      ppuVar11 = (undefined **)*ppuVar11;
    }
    local_a8 = (undefined8 *******)0x0;
    ppppppuStack_a0 = (undefined8 ******)0x0;
    local_98 = (undefined8 ******)0x0;
    ppppppuStack_90 = (undefined8 ******)0x0;
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (*(short *)((longlong)ppuVar11 + lVar12 * 2) != 0);
    FUN_140054cf0(&local_a8,ppuVar11);
    FUN_140048d20(&local_a8,&DAT_140643c70,2);
    pppppppuVar5 = (undefined8 *******)FUN_140039b00(&DAT_1407bb5d0,&local_68);
    if (&local_a8 != (undefined8 ********)pppppppuVar5) {
      if ((undefined8 ******)0x7 < ppppppuStack_90) {
        pppppppuVar6 = local_a8;
        if ((0xfff < (longlong)ppppppuStack_90 * 2 + 2U) &&
           (pppppppuVar6 = (undefined8 *******)local_a8[-1],
           0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)pppppppuVar6)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        thunk_FUN_1401fe000(pppppppuVar6);
      }
      local_a8 = (undefined8 *******)*pppppppuVar5;
      ppppppuStack_a0 = pppppppuVar5[1];
      local_98 = pppppppuVar5[2];
      ppppppuStack_90 = pppppppuVar5[3];
      pppppppuVar5[2] = (undefined8 ******)0x0;
      pppppppuVar5[3] = (undefined8 ******)0x7;
      *(undefined2 *)pppppppuVar5 = 0;
    }
    FUN_140055150(&local_68);
    local_c8 = 0;
    lStack_c0 = 0;
    local_b8 = 0;
    pppppppuVar5 = &local_a8;
    if ((undefined8 ******)0x7 < ppppppuStack_90) {
      pppppppuVar5 = local_a8;
    }
    ppppppuVar9 = ppppppuVar14;
    if ((local_98 < (undefined8 ******)0x2) ||
       (lVar12 = (longlong)pppppppuVar5 + (longlong)local_98 * 2,
       lVar7 = thunk_FUN_140556fb0(pppppppuVar5,lVar12,&DAT_140643c70), lVar7 == lVar12)) {
      lVar12 = -1;
    }
    else {
      lVar12 = lVar7 - (longlong)pppppppuVar5 >> 1;
    }
    while (lVar12 != -1) {
      local_88 = (longlong *)0x0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      if (local_98 < ppppppuVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_140051220();
      }
      uVar13 = lVar12 - (longlong)ppppppuVar9;
      if ((ulonglong)((longlong)local_98 - (longlong)ppppppuVar9) <
          (ulonglong)(lVar12 - (longlong)ppppppuVar9)) {
        uVar13 = (longlong)local_98 - (longlong)ppppppuVar9;
      }
      pppppppuVar5 = &local_a8;
      if ((undefined8 ******)0x7 < ppppppuStack_90) {
        pppppppuVar5 = local_a8;
      }
      FUN_140054cf0(&local_88,(longlong)pppppppuVar5 + (longlong)ppppppuVar9 * 2,uVar13);
      puVar8 = (undefined4 *)FUN_140048d20(&local_88,&DAT_140614cc0);
      local_68 = *puVar8;
      uStack_64 = puVar8[1];
      uStack_60 = puVar8[2];
      uStack_5c = puVar8[3];
      local_58 = puVar8[4];
      uStack_54 = puVar8[5];
      uStack_50 = puVar8[6];
      uStack_4c = puVar8[7];
      *(undefined8 *)(puVar8 + 4) = 0;
      *(undefined8 *)(puVar8 + 6) = 7;
      *(undefined2 *)puVar8 = 0;
      FUN_140047fd0(&local_c8,&local_68);
      if (7 < CONCAT44(uStack_4c,uStack_50)) {
        if ((0xfff < CONCAT44(uStack_4c,uStack_50) * 2 + 2) &&
           (0x1f < (CONCAT44(uStack_64,local_68) - *(longlong *)(CONCAT44(uStack_64,local_68) + -8))
                   - 8U)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        thunk_FUN_1401fe000();
      }
      if (7 < uStack_70) {
        if ((0xfff < uStack_70 * 2 + 2) &&
           (0x1f < (ulonglong)((longlong)local_88 + (-8 - local_88[-1])))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        thunk_FUN_1401fe000();
      }
      ppppppuVar9 = (undefined8 ******)(lVar12 + 2);
      pppppppuVar5 = &local_a8;
      if ((undefined8 ******)0x7 < ppppppuStack_90) {
        pppppppuVar5 = local_a8;
      }
      if (((local_98 < (undefined8 ******)0x2) ||
          ((undefined8 ******)((longlong)local_98 - 2U) < ppppppuVar9)) ||
         (lVar12 = (longlong)pppppppuVar5 + (longlong)local_98 * 2,
         lVar7 = thunk_FUN_140556fb0((longlong)pppppppuVar5 + (longlong)ppppppuVar9 * 2,lVar12,
                                     &DAT_140643c70), lVar7 == lVar12)) {
        lVar12 = -1;
      }
      else {
        lVar12 = lVar7 - (longlong)pppppppuVar5 >> 1;
      }
    }
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    if (local_98 < ppppppuVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_140051220();
    }
    pppppppuVar5 = &local_a8;
    if ((undefined8 ******)0x7 < ppppppuStack_90) {
      pppppppuVar5 = local_a8;
    }
    FUN_140054cf0(&local_88,(longlong)pppppppuVar5 + (longlong)ppppppuVar9 * 2);
    FUN_140047fd0(&local_c8,&local_88);
    if (7 < uStack_70) {
      if ((0xfff < uStack_70 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_88 + (-8 - local_88[-1])))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
    ppppppuVar9 = (undefined8 ******)(lStack_c0 - local_c8 >> 5);
    if (ppppppuVar9 != (undefined8 ******)0x0) {
      do {
        (**(code **)(param_1[0x53] + 0x38))
                  (param_1 + 0x53,local_c8 + (longlong)ppppppuVar14 * 0x20,
                   ppppppuVar14 == (undefined8 ******)((longlong)ppppppuVar9 - 1U));
        ppppppuVar14 = (undefined8 ******)(ulonglong)((int)ppppppuVar14 + 1);
        ppppppuVar9 = (undefined8 ******)(lStack_c0 - local_c8 >> 5);
      } while (ppppppuVar14 < ppppppuVar9);
    }
    *(undefined1 *)(param_1 + 0x33) = 0;
    FUN_140048c80(&local_c8);
    FUN_140055150(&local_a8);
    return param_1;
  }
  pcVar2 = (code *)swi(3);
  plVar3 = (longlong *)(*pcVar2)();
  return plVar3;
}



// ===== FUN_1402b8670 @ 0x1402b8670 [ui] =====

longlong * FUN_1402b8670(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined **ppuVar8;
  undefined1 local_58 [16];
  undefined1 local_48 [32];
  
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_SaveMessage::vftable;
  plVar4 = param_1 + 0x34;
  FUN_14027f6d0(plVar4);
  uVar7 = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *plVar4 = (longlong)UIControl_Button::vftable;
  FUN_14027f6d0(param_1 + 0x53);
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  param_1[0x53] = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x71) = 1;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  FUN_14026bdd0(param_4,param_2 & 0xffffffff,0x3c);
  FUN_14026bdd0(param_4,param_2 & 0xffffffff,0x3d);
  ppuVar8 = &PTR_140610690;
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar2)();
    return plVar4;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x59c) {
    ppuVar6 = &PTR_140610690;
  }
  else {
    ppuVar6 = (undefined **)(lVar1 + 0xb360);
    if (7 < *(ulonglong *)(lVar1 + 0xb378)) {
      ppuVar6 = (undefined **)*ppuVar6;
    }
  }
  uVar5 = FUN_140089d90(local_58,ppuVar6);
  FUN_140280c40(plVar4,uVar5,0);
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar2)();
    return plVar4;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((0x8c5 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5)) &&
     (ppuVar8 = (undefined **)(lVar1 + 0x118a0), 7 < *(ulonglong *)(lVar1 + 0x118b8))) {
    ppuVar8 = (undefined **)*ppuVar8;
  }
  uVar5 = FUN_140089d90(local_58,ppuVar8);
  FUN_140283b10(param_1 + 0x53,uVar5);
  lVar1 = param_1[0x72];
  uVar5 = IggyPlayerRootPath(param_1[2]);
  IggyPlayerCallMethodRS(param_1[2],local_48,uVar5,lVar1,0,0);
  while ((((cVar3 = FUN_140001090(&DAT_140783060,uVar7), cVar3 == '\0' && (uVar7 != 0)) &&
          (cVar3 = FUN_140001090(&DAT_140783060,uVar7), cVar3 == '\0')) ||
         ((DAT_1407bb9f1 != '\0' || (DAT_1407bb9f2 != '\0'))))) {
    uVar7 = uVar7 + 1;
    if (3 < uVar7) {
LAB_1402b888a:
      *(undefined1 *)(param_1 + 0x33) = 0;
      return param_1;
    }
  }
  FUN_1400382a0();
  goto LAB_1402b888a;
}



// ===== FUN_1402b8a60 @ 0x1402b8a60 [ui] =====

undefined8 FUN_1402b8a60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14026db10();
  uVar1 = (**(code **)*param_1)(param_1);
  IggyPlayerRootPath(uVar1);
  return 1;
}



// ===== FUN_1402ba9e0 @ 0x1402ba9e0 [ui] =====

longlong * FUN_1402ba9e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined **ppuVar13;
  uint uVar14;
  char *pcVar15;
  undefined **ppuVar16;
  longlong lVar17;
  undefined4 uVar18;
  undefined1 local_d8 [12];
  undefined4 local_cc;
  undefined4 local_b8 [4];
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98 [4];
  undefined8 local_88;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_ControlsMenu::vftable;
  FUN_14027f6d0(param_1 + 0x36);
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x36] = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x54) = 1;
  plVar8 = param_1 + 0x55;
  FUN_14027f6d0(plVar8);
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  *plVar8 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x73) = 1;
  lVar17 = 0x13;
  _eh_vector_constructor_iterator_(param_1 + 0x74,0xf8,0x13,FUN_140283ab0,FUN_140271e20);
  _eh_vector_constructor_iterator_
            (param_1 + 0x2c1,0xb8,0x13,FUN_14027f6d0,(_func_void_void_ptr *)&LAB_140271e50);
  uVar18 = 1;
  _eh_vector_constructor_iterator_(param_1 + 0x476,0xf8,3,FUN_140280b20,FUN_140271e20);
  plVar1 = param_1 + 0x4d3;
  FUN_14027f6d0(plVar1);
  param_1[0x4ef] = 0;
  param_1[0x4f0] = 0;
  *(undefined1 *)(param_1 + 0x4ee) = 0;
  *(undefined4 *)((longlong)param_1 + 0x26a4) = 0;
  *plVar1 = (longlong)UIControl_CheckBox::vftable;
  FUN_14027f6d0(param_1 + 0x4f5);
  param_1[0x511] = 0;
  param_1[0x512] = 0;
  *(undefined1 *)(param_1 + 0x510) = 0;
  *(undefined4 *)((longlong)param_1 + 0x27b4) = 0;
  param_1[0x4f5] = (longlong)UIControl_CheckBox::vftable;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  local_98[0] = 4;
  local_88 = 0;
  lVar10 = param_1[0x517];
  uVar6 = IggyPlayerRootPath(param_1[2]);
  IggyPlayerCallMethodRS(param_1[2],local_78,uVar6,lVar10,CONCAT44(uVar18,1),local_98);
  if (*(longlong *)(DAT_140790e60 + 0x40) == 0) {
    uVar6 = thunk_FUN_140558c80(0x100);
    FUN_1400547f0(uVar6,0x80,&DAT_140642338,L"9e715cb3");
    uVar7 = FUN_140089d90(local_d8,uVar6);
    FUN_140283b10(plVar8,uVar7);
    thunk_FUN_1401fe000(uVar6);
  }
  else {
    uVar6 = FUN_140089d90(local_d8,&DAT_140614cc0);
    FUN_140283b10(plVar8,uVar6);
    lVar10 = *(longlong *)
              (DAT_140790e60 + ((longlong)*(int *)((longlong)param_1 + 0x174) + 7) * 0x10);
    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x4be) != '\0')) {
      uVar4 = 1;
      goto LAB_1402bac47;
    }
  }
  uVar4 = 0;
LAB_1402bac47:
  *(undefined1 *)(param_1 + 0x35) = uVar4;
  uVar6 = FUN_140089d90(local_d8,&DAT_140633bf0);
  FUN_140280c40(param_1 + 0x476,uVar6,0);
  uVar6 = FUN_140089d90(local_d8,&DAT_14064593c);
  FUN_140280c40(param_1 + 0x495,uVar6,1);
  uVar6 = FUN_140089d90(local_d8,&DAT_140645940);
  FUN_140280c40(param_1 + 0x4b4,uVar6,2);
  bVar2 = *(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 6);
  if (*DAT_1407bb780 == '\0') {
    pcVar3 = (code *)swi(3);
    plVar8 = (longlong *)(*pcVar3)();
    return plVar8;
  }
  lVar10 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar10 >> 5) < 0x6f3) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar10 + 0xde40);
    if (7 < *(ulonglong *)(lVar10 + 0xde58)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar6 = FUN_140089d90(local_d8,ppuVar13);
  FUN_140281d70(plVar1,uVar6,3,bVar2 >> 6 & 1);
  bVar2 = *(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 6);
  if (*DAT_1407bb780 == '\0') {
    pcVar3 = (code *)swi(3);
    plVar8 = (longlong *)(*pcVar3)();
    return plVar8;
  }
  lVar10 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar10 >> 5) < 0x6f4) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar10 + 0xde60);
    if (7 < *(ulonglong *)(lVar10 + 0xde78)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar6 = FUN_140089d90(local_d8,ppuVar13);
  FUN_140281d70(param_1 + 0x4f5,uVar6,4,bVar2 >> 7);
  *(undefined4 *)(param_1 + 0x33) = 0x419;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x41a;
  *(undefined4 *)(param_1 + 0x34) = 0x41b;
  uVar14 = *(ushort *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 6) >> 4 & 3;
  uVar6 = thunk_FUN_140558c80(0x100);
  if (*DAT_1407bb780 == '\0') {
    pcVar3 = (code *)swi(3);
    plVar8 = (longlong *)(*pcVar3)();
    return plVar8;
  }
  uVar12 = (ulonglong)*(int *)((longlong)param_1 + (ulonglong)uVar14 * 4 + 0x198);
  if (uVar12 < (ulonglong)
               (*(longlong *)(DAT_1407bb780 + 0x50) - *(longlong *)(DAT_1407bb780 + 0x48) >> 5)) {
    ppuVar13 = (undefined **)(uVar12 * 0x20 + *(longlong *)(DAT_1407bb780 + 0x48));
    if ((undefined *)0x7 < ppuVar13[3]) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  else {
    ppuVar13 = &PTR_140610690;
  }
  if (*DAT_1407bb780 == '\0') {
    pcVar3 = (code *)swi(3);
    plVar8 = (longlong *)(*pcVar3)();
    return plVar8;
  }
  lVar10 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar10 >> 5) < 0x408) {
    ppuVar16 = &PTR_140610690;
  }
  else {
    ppuVar16 = (undefined **)(lVar10 + 0x80e0);
    if (7 < *(ulonglong *)(lVar10 + 0x80f8)) {
      ppuVar16 = (undefined **)*ppuVar16;
    }
  }
  FUN_1400547f0(uVar6,0x80,L"%ls : %ls",ppuVar16,ppuVar13);
  uVar18 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
  uVar6 = FUN_140089d90(local_d8,uVar6);
  FUN_140283b10(param_1 + 0x36,uVar6);
  *(uint *)((longlong)param_1 + 0x1a4) = uVar14;
  local_b8[0] = 4;
  local_a8 = (undefined8 *)(double)uVar14;
  lVar10 = param_1[0x518];
  uVar6 = IggyPlayerRootPath(param_1[2]);
  uVar7 = CONCAT44(uVar18,1);
  IggyPlayerCallMethodRS(param_1[2],local_d8,uVar6,lVar10,uVar7,local_b8);
  pcVar15 = (char *)((longlong)param_1 + 0x16bc);
  plVar8 = param_1 + 0x8b;
  do {
    uVar18 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar6 = FUN_140089d90(local_d8,&PTR_140610690);
    FUN_140045590(plVar8 + 5,uVar6);
    local_b8[0] = 6;
    puVar9 = (undefined8 *)FUN_14008a010(uVar6);
    if (7 < (ulonglong)puVar9[3]) {
      puVar9 = (undefined8 *)*puVar9;
    }
    lVar10 = FUN_14008a010(uVar6);
    local_a0 = *(undefined4 *)(lVar10 + 0x10);
    local_9c = local_cc;
    lVar10 = *plVar8;
    local_a8 = puVar9;
    uVar11 = (*(code *)**(undefined8 **)plVar8[-0xe])();
    uVar7 = CONCAT44(uVar18,1);
    IggyPlayerCallMethodRS(uVar11,local_58,plVar8 + -0x13,lVar10,uVar7,local_b8);
    FUN_140089f70(uVar6);
    if (*pcVar15 != '\0') {
      iVar5 = IggyValueSetBooleanRS(pcVar15 + -0x94,*(undefined8 *)(pcVar15 + -0x1c),0,0);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
      }
      *pcVar15 = '\0';
    }
    plVar8 = plVar8 + 0x1f;
    pcVar15 = pcVar15 + 0xb8;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  *(undefined1 *)((longlong)param_1 + 0x1a9) = 0;
  FUN_1402bb570(param_1);
  return param_1;
}



// ===== FUN_1402bbbb0 @ 0x1402bbbb0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1402bbbb0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStackY_78 [32];
  ulonglong local_40 [5];
  
  local_40[4] = DAT_1407502c0 ^ (ulonglong)auStackY_78;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_Credits::vftable;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x196;
  *(int *)((longlong)param_1 + 0x19c) = (int)(DAT_1407bb9e0 - _DAT_1407bb9d8 >> 3) + 0x196;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  uVar3 = 0;
  do {
    *(int *)(param_1 + 0x33) = (int)param_1[0x33] + 1;
    if (*(int *)(&DAT_140752028 + uVar3 * 0x18) == -1) {
      local_40[0] = 0;
      local_40[1] = 0;
      local_40[2] = 0;
      local_40[3] = 0;
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (*(short *)((&PTR_u_MOJANG_140752020)[uVar3 * 3] + lVar5 * 2) != 0);
      FUN_140054cf0(local_40);
      FUN_1402bcb70(param_1,local_40);
      if (7 < local_40[3]) {
        if ((0xfff < local_40[3] * 2 + 2) &&
           (0x1f < (local_40[0] - *(longlong *)(local_40[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        thunk_FUN_1401fe000();
      }
    }
    else {
      lVar5 = thunk_FUN_140558c80(0x100);
      if (*(int *)(&DAT_14075202c + uVar3 * 0x18) == -1) {
        if (*DAT_1407bb780 == '\0') {
          pcVar1 = (code *)swi(3);
          plVar2 = (longlong *)(*pcVar1)();
          return plVar2;
        }
        FUN_1400547f0(lVar5,0x80,(&PTR_u_MOJANG_140752020)[uVar3 * 3]);
      }
      else {
        if (*DAT_1407bb780 == '\0') {
          pcVar1 = (code *)swi(3);
          plVar2 = (longlong *)(*pcVar1)();
          return plVar2;
        }
        if (*DAT_1407bb780 == '\0') {
          pcVar1 = (code *)swi(3);
          plVar2 = (longlong *)(*pcVar1)();
          return plVar2;
        }
        FUN_1400547f0(lVar5,0x80,(&PTR_u_MOJANG_140752020)[uVar3 * 3]);
      }
      local_40[0] = 0;
      local_40[1] = 0;
      local_40[2] = 0;
      local_40[3] = 0;
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (*(short *)(lVar5 + lVar6 * 2) != 0);
      FUN_140054cf0(local_40,lVar5);
      FUN_1402bcb70(param_1,local_40);
      if (7 < local_40[3]) {
        if ((0xfff < local_40[3] * 2 + 2) &&
           (0x1f < (local_40[0] - *(longlong *)(local_40[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        thunk_FUN_1401fe000();
      }
      local_40[2] = 0;
      local_40[3] = 7;
      local_40[0] = local_40[0] & 0xffffffffffff0000;
      thunk_FUN_1401fe000(lVar5);
    }
    uVar4 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar4;
    if (0x13 < uVar4) {
      return param_1;
    }
  } while( true );
}



// ===== FUN_1402bd290 @ 0x1402bd290 [ui] =====

longlong * FUN_1402bd290(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  bool bVar4;
  undefined1 local_28 [16];
  
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_HelpAndOptionsMenu::vftable;
  _eh_vector_constructor_iterator_(param_1 + 0x33,0xf8,7,FUN_140280b20,FUN_140271e20);
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  *(bool *)(param_1 + 0x10c) = *(longlong *)(DAT_140790e60 + 0x40) == 0;
  uVar2 = FUN_1400899e0(local_28,0x6f7);
  FUN_140280c40(param_1 + 0x33,uVar2,0);
  uVar2 = FUN_1400899e0(local_28,0x6f8);
  FUN_140280c40(param_1 + 0x52,uVar2,1);
  uVar2 = FUN_1400899e0(local_28,0x6f9);
  FUN_140280c40(param_1 + 0x71,uVar2,2);
  uVar2 = FUN_1400899e0(local_28,0x6fa);
  FUN_140280c40(param_1 + 0x90,uVar2,3);
  uVar2 = FUN_1400899e0(local_28,0x6fc);
  FUN_140280c40(param_1 + 0xaf,uVar2,4);
  uVar2 = FUN_1400899e0(local_28,0x6fe);
  FUN_140280c40(param_1 + 0xed,uVar2,6);
  FUN_14026ec30(param_1,param_1 + 0xce,0);
  FUN_14026ec30(param_1,param_1 + 0xed,0);
  if ((*(int *)((longlong)param_1 + 0x174) == 0) && (*(longlong *)(DAT_140790e60 + 0x40) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"Reinstall Menu required...\n");
  }
  FUN_14026ec30(param_1,param_1 + 0xce,0);
  if (DAT_140790e60 != 0) {
    bVar4 = *(longlong *)(DAT_140790e60 + 0x70) != 0;
    bVar3 = bVar4 + 1;
    if (*(longlong *)(DAT_140790e60 + 0x80) == 0) {
      bVar3 = bVar4;
    }
    bVar1 = bVar3 + 1;
    if (*(longlong *)(DAT_140790e60 + 0x90) == 0) {
      bVar1 = bVar3;
    }
    bVar3 = bVar1 + 1;
    if (*(longlong *)(DAT_140790e60 + 0xa0) == 0) {
      bVar3 = bVar1;
    }
    if (1 < bVar3) {
      FUN_14026ec30(param_1,param_1 + 0xaf,0);
      if (*(int *)((longlong)param_1 + 0x174) != 0) {
        FUN_14026ec30(param_1,param_1 + 0xce,0);
      }
    }
  }
  if (DAT_1407baaa8 == '\0') {
    FUN_14026ec30(param_1,param_1 + 0x33,0);
  }
  FUN_14026eda0(param_1);
  return param_1;
}



// ===== FUN_1402bf2e0 @ 0x1402bf2e0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1402bf2e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  int iVar5;
  code *pcVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined8 *****pppppuVar12;
  undefined **ppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 *puVar15;
  undefined **ppuVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined2 *puVar20;
  undefined1 auStackY_138 [32];
  ulonglong *local_108;
  longlong *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  ulonglong local_e0;
  longlong *plStack_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  undefined8 ****local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  ulonglong *local_a0;
  longlong *plStack_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  ulonglong uStack_68;
  undefined2 local_60;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  ulonglong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1407502c0 ^ (ulonglong)auStackY_138;
  uVar19 = 0;
  local_f8 = 0;
  local_f0 = param_3;
  local_e8 = param_1;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_HowToPlay::vftable;
  puVar9 = (ulonglong *)(param_1 + 0x35);
  local_108 = puVar9;
  FUN_14027f6d0(puVar9);
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined1 *)(param_1 + 0x53) = 1;
  *puVar9 = (ulonglong)UIControl_DynamicLabel::vftable;
  _eh_vector_constructor_iterator_(param_1 + 0x58,0xf8,0x26,FUN_140283ab0,FUN_140271e20);
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  ppuVar16 = &PTR_140610690;
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar17 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar17 >> 5) < 0x615) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar17 + 0xc280);
    if (7 < *(ulonglong *)(lVar17 + 0xc298)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  local_c0 = (undefined8 *****)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  lVar17 = -1;
  lVar18 = -1;
  do {
    lVar18 = lVar18 + 1;
  } while (*(short *)((longlong)ppuVar13 + lVar18 * 2) != 0);
  FUN_140054cf0(&local_c0);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x253) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0x4a40);
    if (7 < *(ulonglong *)(lVar18 + 0x4a58)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar8 = FUN_140089d90(&local_e0,ppuVar13);
  FUN_140283b10(param_1 + 0x150,uVar8);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x5ed) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0xbd80);
    if (7 < *(ulonglong *)(lVar18 + 0xbd98)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar8 = FUN_140089d90(&local_e0,ppuVar13);
  FUN_140283b10(param_1 + 0x16f,uVar8);
  local_108 = &local_e0;
  local_e0 = 0;
  plStack_d8 = (longlong *)0x0;
  puVar9 = (ulonglong *)FUN_140558c80(0x88);
  *puVar9 = 0;
  puVar9[1] = 0;
  pppppuVar14 = (undefined8 *****)(puVar9 + 4);
  *pppppuVar14 = (undefined8 ****)0x0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 7;
  *(undefined2 *)pppppuVar14 = 0;
  puVar9[0x10] = 0;
  *(undefined1 *)(puVar9 + 8) = 1;
  puVar9[2] = 0xffffffffffffffff;
  puVar9[3] = 0xffffffffffffffff;
  local_a0 = puVar9;
  if (pppppuVar14 != &local_c0) {
    pppppuVar12 = &local_c0;
    if (7 < local_a8) {
      pppppuVar12 = (undefined8 *****)local_c0;
    }
    FUN_1400549d0(pppppuVar14,pppppuVar12,local_b0);
  }
  puVar9 = (ulonglong *)FUN_14008a140(&local_a0,puVar9);
  plVar3 = plStack_d8;
  local_e0 = *puVar9;
  plVar7 = (longlong *)puVar9[1];
  *puVar9 = 0;
  puVar9[1] = 0;
  if (plStack_d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_d8 + 1;
    lVar18 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      puVar15 = (undefined8 *)*plStack_d8;
      plStack_d8 = plVar7;
      (*(code *)*puVar15)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar7 = plStack_d8;
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
        plVar7 = plStack_d8;
      }
    }
  }
  plStack_d8 = plVar7;
  if (plStack_98 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_98 + 1;
    lVar18 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plStack_98)(plStack_98);
      LOCK();
      piVar2 = (int *)((longlong)plStack_98 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_98 + 8))(plStack_98);
      }
    }
  }
  FUN_140283b10(param_1 + 0x18e,&local_e0);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x355) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0x6a80);
    if (7 < *(ulonglong *)(lVar18 + 0x6a98)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar8 = FUN_140089d90(&local_e0,ppuVar13);
  FUN_140283b10(param_1 + 0xf3,uVar8);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x5f0) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0xbde0);
    if (7 < *(ulonglong *)(lVar18 + 0xbdf8)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar8 = FUN_140089d90(&local_e0,ppuVar13);
  FUN_140283b10(param_1 + 0x112,uVar8);
  local_a0 = &local_e0;
  local_e0 = 0;
  plStack_d8 = (longlong *)0x0;
  puVar9 = (ulonglong *)FUN_140558c80(0x88);
  *puVar9 = 0;
  puVar9[1] = 0;
  pppppuVar14 = (undefined8 *****)(puVar9 + 4);
  *pppppuVar14 = (undefined8 ****)0x0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 7;
  *(undefined2 *)pppppuVar14 = 0;
  puVar9[0x10] = 0;
  *(undefined1 *)(puVar9 + 8) = 1;
  puVar9[2] = 0xffffffffffffffff;
  puVar9[3] = 0xffffffffffffffff;
  local_108 = puVar9;
  if (pppppuVar14 != &local_c0) {
    pppppuVar12 = &local_c0;
    if (7 < local_a8) {
      pppppuVar12 = (undefined8 *****)local_c0;
    }
    FUN_1400549d0(pppppuVar14,pppppuVar12,local_b0);
  }
  puVar9 = (ulonglong *)FUN_14008a140(&local_108,puVar9);
  plVar3 = plStack_d8;
  local_e0 = *puVar9;
  plVar7 = (longlong *)puVar9[1];
  *puVar9 = 0;
  puVar9[1] = 0;
  if (plStack_d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_d8 + 1;
    lVar18 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      puVar15 = (undefined8 *)*plStack_d8;
      plStack_d8 = plVar7;
      (*(code *)*puVar15)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar7 = plStack_d8;
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
        plVar7 = plStack_d8;
      }
    }
  }
  plStack_d8 = plVar7;
  plVar7 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_100 + 1;
    lVar18 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  FUN_140283b10(param_1 + 0x131,&local_e0);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x61c) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0xc360);
    if (7 < *(ulonglong *)(lVar18 + 0xc378)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar8 = FUN_140089d90(&local_e0,ppuVar13);
  FUN_140283b10(param_1 + 0x1ad,uVar8);
  local_a0 = &local_e0;
  local_e0 = 0;
  plStack_d8 = (longlong *)0x0;
  puVar9 = (ulonglong *)FUN_140558c80(0x88);
  *puVar9 = 0;
  puVar9[1] = 0;
  pppppuVar14 = (undefined8 *****)(puVar9 + 4);
  *pppppuVar14 = (undefined8 ****)0x0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 7;
  *(undefined2 *)pppppuVar14 = 0;
  puVar9[0x10] = 0;
  *(undefined1 *)(puVar9 + 8) = 1;
  puVar9[2] = 0xffffffffffffffff;
  puVar9[3] = 0xffffffffffffffff;
  local_108 = puVar9;
  if (pppppuVar14 != &local_c0) {
    pppppuVar12 = &local_c0;
    if (7 < local_a8) {
      pppppuVar12 = (undefined8 *****)local_c0;
    }
    FUN_1400549d0(pppppuVar14,pppppuVar12,local_b0);
  }
  puVar9 = (ulonglong *)FUN_14008a140(&local_108,puVar9);
  plVar3 = plStack_d8;
  local_e0 = *puVar9;
  plVar7 = (longlong *)puVar9[1];
  *puVar9 = 0;
  puVar9[1] = 0;
  if (plStack_d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_d8 + 1;
    lVar18 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      puVar15 = (undefined8 *)*plStack_d8;
      plStack_d8 = plVar7;
      (*(code *)*puVar15)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar7 = plStack_d8;
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
        plVar7 = plStack_d8;
      }
    }
  }
  plStack_d8 = plVar7;
  plVar7 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_100 + 1;
    lVar18 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  FUN_140283b10(param_1 + 0x1cc,&local_e0);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x61b) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0xc340);
    if (7 < *(ulonglong *)(lVar18 + 0xc358)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar8 = FUN_140089d90(&local_e0,ppuVar13);
  FUN_140283b10(param_1 + 0x1eb,uVar8);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x61a) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0xc320);
    if (7 < *(ulonglong *)(lVar18 + 0xc338)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar8 = FUN_140089d90(&local_e0,ppuVar13);
  FUN_140283b10(param_1 + 0x20a,uVar8);
  local_a0 = &local_e0;
  local_e0 = 0;
  plStack_d8 = (longlong *)0x0;
  puVar9 = (ulonglong *)FUN_140558c80(0x88);
  *puVar9 = 0;
  puVar9[1] = 0;
  pppppuVar14 = (undefined8 *****)(puVar9 + 4);
  *pppppuVar14 = (undefined8 ****)0x0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 7;
  *(undefined2 *)pppppuVar14 = 0;
  puVar9[0x10] = 0;
  *(undefined1 *)(puVar9 + 8) = 1;
  puVar9[2] = 0xffffffffffffffff;
  puVar9[3] = 0xffffffffffffffff;
  local_108 = puVar9;
  if (pppppuVar14 != &local_c0) {
    pppppuVar12 = &local_c0;
    if (7 < local_a8) {
      pppppuVar12 = (undefined8 *****)local_c0;
    }
    FUN_1400549d0(pppppuVar14,pppppuVar12,local_b0);
  }
  puVar9 = (ulonglong *)FUN_14008a140(&local_108,puVar9);
  plVar3 = plStack_d8;
  local_e0 = *puVar9;
  plVar7 = (longlong *)puVar9[1];
  *puVar9 = 0;
  puVar9[1] = 0;
  if (plStack_d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_d8 + 1;
    lVar18 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      puVar15 = (undefined8 *)*plStack_d8;
      plStack_d8 = plVar7;
      (*(code *)*puVar15)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar7 = plStack_d8;
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
        plVar7 = plStack_d8;
      }
    }
  }
  plStack_d8 = plVar7;
  plVar7 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_100 + 1;
    lVar18 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  FUN_140283b10(param_1 + 0xb5,&local_e0);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x5f5) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0xbe80);
    if (7 < *(ulonglong *)(lVar18 + 0xbe98)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar8 = FUN_140089d90(&local_e0,ppuVar13);
  FUN_140283b10(param_1 + 0x267,uVar8);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x86a) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0x10d20);
    if (7 < *(ulonglong *)(lVar18 + 0x10d38)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar8 = FUN_140089d90(&local_e0,ppuVar13);
  FUN_140283b10(param_1 + 0xd4,uVar8);
  local_a0 = &local_e0;
  local_e0 = 0;
  plStack_d8 = (longlong *)0x0;
  puVar9 = (ulonglong *)FUN_140558c80(0x88);
  *puVar9 = 0;
  puVar9[1] = 0;
  pppppuVar14 = (undefined8 *****)(puVar9 + 4);
  *pppppuVar14 = (undefined8 ****)0x0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 7;
  *(undefined2 *)pppppuVar14 = 0;
  puVar9[0x10] = 0;
  *(undefined1 *)(puVar9 + 8) = 1;
  puVar9[2] = 0xffffffffffffffff;
  puVar9[3] = 0xffffffffffffffff;
  local_108 = puVar9;
  if (pppppuVar14 != &local_c0) {
    pppppuVar12 = &local_c0;
    if (7 < local_a8) {
      pppppuVar12 = (undefined8 *****)local_c0;
    }
    FUN_1400549d0(pppppuVar14,pppppuVar12,local_b0);
  }
  puVar9 = (ulonglong *)FUN_14008a140(&local_108,puVar9);
  plVar3 = plStack_d8;
  local_e0 = *puVar9;
  plVar7 = (longlong *)puVar9[1];
  *puVar9 = 0;
  puVar9[1] = 0;
  if (plStack_d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_d8 + 1;
    lVar18 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      puVar15 = (undefined8 *)*plStack_d8;
      plStack_d8 = plVar7;
      (*(code *)*puVar15)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar7 = plStack_d8;
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
        plVar7 = plStack_d8;
      }
    }
  }
  plStack_d8 = plVar7;
  plVar7 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_100 + 1;
    lVar18 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  FUN_140283b10(param_1 + 0x77,&local_e0);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x618) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0xc2e0);
    if (7 < *(ulonglong *)(lVar18 + 0xc2f8)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar8 = FUN_140089d90(&local_e0,ppuVar13);
  FUN_140283b10(param_1 + 0x96,uVar8);
  local_a0 = &local_e0;
  local_e0 = 0;
  plStack_d8 = (longlong *)0x0;
  puVar9 = (ulonglong *)FUN_140558c80(0x88);
  *puVar9 = 0;
  puVar9[1] = 0;
  pppppuVar14 = (undefined8 *****)(puVar9 + 4);
  *pppppuVar14 = (undefined8 ****)0x0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 7;
  *(undefined2 *)pppppuVar14 = 0;
  puVar9[0x10] = 0;
  *(undefined1 *)(puVar9 + 8) = 1;
  puVar9[2] = 0xffffffffffffffff;
  puVar9[3] = 0xffffffffffffffff;
  local_108 = puVar9;
  if (pppppuVar14 != &local_c0) {
    pppppuVar12 = &local_c0;
    if (7 < local_a8) {
      pppppuVar12 = (undefined8 *****)local_c0;
    }
    FUN_1400549d0(pppppuVar14,pppppuVar12,local_b0);
  }
  puVar9 = (ulonglong *)FUN_14008a140(&local_108,puVar9);
  plVar3 = plStack_d8;
  local_e0 = *puVar9;
  plVar7 = (longlong *)puVar9[1];
  *puVar9 = 0;
  puVar9[1] = 0;
  if (plStack_d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_d8 + 1;
    lVar18 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      puVar15 = (undefined8 *)*plStack_d8;
      plStack_d8 = plVar7;
      (*(code *)*puVar15)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar7 = plStack_d8;
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
        plVar7 = plStack_d8;
      }
    }
  }
  plStack_d8 = plVar7;
  plVar7 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_100 + 1;
    lVar18 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  FUN_140283b10(param_1 + 0x58,&local_e0);
  local_a0 = &local_e0;
  local_e0 = 0;
  plStack_d8 = (longlong *)0x0;
  puVar9 = (ulonglong *)FUN_140558c80(0x88);
  *puVar9 = 0;
  puVar9[1] = 0;
  pppppuVar14 = (undefined8 *****)(puVar9 + 4);
  *pppppuVar14 = (undefined8 ****)0x0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 7;
  *(undefined2 *)pppppuVar14 = 0;
  puVar9[0x10] = 0;
  *(undefined1 *)(puVar9 + 8) = 1;
  puVar9[2] = 0xffffffffffffffff;
  puVar9[3] = 0xffffffffffffffff;
  local_108 = puVar9;
  if (pppppuVar14 != &local_c0) {
    pppppuVar12 = &local_c0;
    if (7 < local_a8) {
      pppppuVar12 = (undefined8 *****)local_c0;
    }
    FUN_1400549d0(pppppuVar14,pppppuVar12,local_b0);
  }
  puVar9 = (ulonglong *)FUN_14008a140(&local_108,puVar9);
  plVar3 = plStack_d8;
  local_e0 = *puVar9;
  plVar7 = (longlong *)puVar9[1];
  *puVar9 = 0;
  puVar9[1] = 0;
  if (plStack_d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_d8 + 1;
    lVar18 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      puVar15 = (undefined8 *)*plStack_d8;
      plStack_d8 = plVar7;
      (*(code *)*puVar15)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar7 = plStack_d8;
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
        plVar7 = plStack_d8;
      }
    }
  }
  plStack_d8 = plVar7;
  plVar7 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_100 + 1;
    lVar18 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  FUN_140283b10(param_1 + 0x248,&local_e0);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x61d) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0xc380);
    if (7 < *(ulonglong *)(lVar18 + 0xc398)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar8 = FUN_140089d90(&local_e0,ppuVar13);
  FUN_140283b10(param_1 + 0x229,uVar8);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x619) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0xc300);
    if (7 < *(ulonglong *)(lVar18 + 0xc318)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar8 = FUN_140089d90(&local_e0,ppuVar13);
  FUN_140283b10(param_1 + 0x286,uVar8);
  local_a0 = &local_e0;
  local_e0 = 0;
  plStack_d8 = (longlong *)0x0;
  puVar9 = (ulonglong *)FUN_140558c80(0x88);
  *puVar9 = 0;
  puVar9[1] = 0;
  pppppuVar14 = (undefined8 *****)(puVar9 + 4);
  *pppppuVar14 = (undefined8 ****)0x0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 7;
  *(undefined2 *)pppppuVar14 = 0;
  puVar9[0x10] = 0;
  *(undefined1 *)(puVar9 + 8) = 1;
  puVar9[2] = 0xffffffffffffffff;
  puVar9[3] = 0xffffffffffffffff;
  local_108 = puVar9;
  if (pppppuVar14 != &local_c0) {
    pppppuVar12 = &local_c0;
    if (7 < local_a8) {
      pppppuVar12 = (undefined8 *****)local_c0;
    }
    FUN_1400549d0(pppppuVar14,pppppuVar12,local_b0);
  }
  puVar9 = (ulonglong *)FUN_14008a140(&local_108,puVar9);
  plVar3 = plStack_d8;
  local_e0 = *puVar9;
  plVar7 = (longlong *)puVar9[1];
  *puVar9 = 0;
  puVar9[1] = 0;
  if (plStack_d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_d8 + 1;
    lVar18 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      puVar15 = (undefined8 *)*plStack_d8;
      plStack_d8 = plVar7;
      (*(code *)*puVar15)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar7 = plStack_d8;
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
        plVar7 = plStack_d8;
      }
    }
  }
  plStack_d8 = plVar7;
  plVar7 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_100 + 1;
    lVar18 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  FUN_140283b10(param_1 + 0x2a5,&local_e0);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x617) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0xc2c0);
    if (7 < *(ulonglong *)(lVar18 + 0xc2d8)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar8 = FUN_140089d90(&local_e0,ppuVar13);
  FUN_140283b10(param_1 + 0x2c4,uVar8);
  local_a0 = &local_e0;
  local_e0 = 0;
  plStack_d8 = (longlong *)0x0;
  puVar9 = (ulonglong *)FUN_140558c80(0x88);
  *puVar9 = 0;
  puVar9[1] = 0;
  pppppuVar14 = (undefined8 *****)(puVar9 + 4);
  *pppppuVar14 = (undefined8 ****)0x0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 7;
  *(undefined2 *)pppppuVar14 = 0;
  puVar9[0x10] = 0;
  *(undefined1 *)(puVar9 + 8) = 1;
  puVar9[2] = 0xffffffffffffffff;
  puVar9[3] = 0xffffffffffffffff;
  local_108 = puVar9;
  if (pppppuVar14 != &local_c0) {
    pppppuVar12 = &local_c0;
    if (7 < local_a8) {
      pppppuVar12 = (undefined8 *****)local_c0;
    }
    FUN_1400549d0(pppppuVar14,pppppuVar12,local_b0);
  }
  puVar9 = (ulonglong *)FUN_14008a140(&local_108,puVar9);
  plVar3 = plStack_d8;
  local_e0 = *puVar9;
  plVar7 = (longlong *)puVar9[1];
  *puVar9 = 0;
  puVar9[1] = 0;
  if (plStack_d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_d8 + 1;
    lVar18 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      puVar15 = (undefined8 *)*plStack_d8;
      plStack_d8 = plVar7;
      (*(code *)*puVar15)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar7 = plStack_d8;
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
        plVar7 = plStack_d8;
      }
    }
  }
  plStack_d8 = plVar7;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_100 + 1;
    lVar18 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar2 = (int *)((longlong)local_100 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_100 + 8))(local_100);
      }
    }
  }
  FUN_140283b10(param_1 + 0x2e3,&local_e0);
  pppppuVar14 = &local_c0;
  if (7 < local_a8) {
    pppppuVar14 = (undefined8 *****)local_c0;
  }
  uVar8 = FUN_140089d90(&local_e0,pppppuVar14);
  FUN_140283b10(param_1 + 0x302,uVar8);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x825) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0x10480);
    if (7 < *(ulonglong *)(lVar18 + 0x10498)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  lVar18 = -1;
  do {
    lVar18 = lVar18 + 1;
  } while (*(short *)((longlong)ppuVar13 + lVar18 * 2) != 0);
  FUN_140054cf0(&local_80);
  local_e0 = 0;
  plStack_d8 = (longlong *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  FUN_140054cf0(&local_e0,&DAT_1406469a0,1);
  puVar15 = &local_80;
  if (7 < uStack_68) {
    puVar15 = local_80;
  }
  if ((local_70 < 2) ||
     (lVar18 = (longlong)puVar15 + local_70 * 2,
     lVar10 = thunk_FUN_140556fb0(puVar15,lVar18,&DAT_14061a828,2), lVar10 == lVar18)) {
    lVar18 = -1;
  }
  else {
    lVar18 = lVar10 - (longlong)puVar15 >> 1;
  }
  FUN_1400a47c0(&local_80,lVar18);
  if (7 < local_c8) {
    if ((0xfff < local_c8 * 2 + 2) && (0x1f < (local_e0 - *(longlong *)(local_e0 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_d0 = 0;
  local_c8 = 7;
  local_e0 = local_e0 & 0xffffffffffff0000;
  puVar15 = &local_80;
  if (7 < uStack_68) {
    puVar15 = local_80;
  }
  uVar8 = FUN_140089d90(&local_e0,puVar15);
  FUN_140283b10(param_1 + 0x321,uVar8);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x824) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0x10460);
    if (7 < *(ulonglong *)(lVar18 + 0x10478)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar8 = FUN_140089d90(&local_e0,ppuVar13);
  FUN_140283b10(param_1 + 0x340,uVar8);
  pppppuVar14 = &local_c0;
  if (7 < local_a8) {
    pppppuVar14 = (undefined8 *****)local_c0;
  }
  uVar8 = FUN_140089d90(&local_e0,pppppuVar14);
  FUN_140283b10(param_1 + 0x35f,uVar8);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x7e9) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0xfd00);
    if (7 < *(ulonglong *)(lVar18 + 0xfd18)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar8 = FUN_140089d90(&local_e0,ppuVar13);
  FUN_140283b10(param_1 + 0x37e,uVar8);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x7e9) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0xfd00);
    if (7 < *(ulonglong *)(lVar18 + 0xfd18)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar8 = FUN_140089d90(&local_e0,ppuVar13);
  FUN_140283b10(param_1 + 0x39d,uVar8);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x829) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0x10500);
    if (7 < *(ulonglong *)(lVar18 + 0x10518)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar8 = FUN_140089d90(&local_e0,ppuVar13);
  FUN_140283b10(param_1 + 0x3bc,uVar8);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x622) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0xc420);
    if (7 < *(ulonglong *)(lVar18 + 0xc438)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar8 = FUN_140089d90(&local_e0,ppuVar13);
  FUN_140283b10(param_1 + 0x3fa,uVar8);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x623) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0xc440);
    if (7 < *(ulonglong *)(lVar18 + 0xc458)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar8 = FUN_140089d90(&local_e0,ppuVar13);
  FUN_140283b10(param_1 + 0x419,uVar8);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0xcf) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0x19c0);
    if (7 < *(ulonglong *)(lVar18 + 0x19d8)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar8 = FUN_140089d90(&local_e0,ppuVar13);
  FUN_140283b10(param_1 + 0x438,uVar8);
  pppppuVar14 = &local_c0;
  if (7 < local_a8) {
    pppppuVar14 = (undefined8 *****)local_c0;
  }
  uVar8 = FUN_140089d90(&local_108,pppppuVar14);
  FUN_140283b10(param_1 + 0x457,uVar8);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x3b4) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0x7660);
    if (7 < *(ulonglong *)(lVar18 + 0x7678)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar8 = FUN_140089d90(&local_e0,ppuVar13);
  FUN_140283b10(param_1 + 0x476,uVar8);
  pppppuVar14 = &local_c0;
  if (7 < local_a8) {
    pppppuVar14 = (undefined8 *****)local_c0;
  }
  uVar8 = FUN_140089d90(&local_108,pppppuVar14);
  FUN_140283b10(param_1 + 0x495,uVar8);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x3b6) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0x76a0);
    if (7 < *(ulonglong *)(lVar18 + 0x76b8)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar8 = FUN_140089d90(&local_e0,ppuVar13);
  FUN_140283b10(param_1 + 0x4b4,uVar8);
  pppppuVar14 = &local_c0;
  if (7 < local_a8) {
    pppppuVar14 = (undefined8 *****)local_c0;
  }
  uVar8 = FUN_140089d90(&local_108,pppppuVar14);
  FUN_140283b10(param_1 + 0x4d3,uVar8);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x82a) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0x10520);
    if (7 < *(ulonglong *)(lVar18 + 0x10538)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  lVar18 = -1;
  do {
    lVar18 = lVar18 + 1;
  } while (*(short *)((longlong)ppuVar13 + lVar18 * 2) != 0);
  FUN_1400549d0(&local_80);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x866) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar18 + 0x10ca0);
    if (7 < *(ulonglong *)(lVar18 + 0x10cb8)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  local_a0 = (ulonglong *)0x0;
  plStack_98 = (longlong *)0x0;
  local_90 = 0;
  local_88 = 0;
  lVar18 = -1;
  do {
    lVar18 = lVar18 + 1;
  } while (*(short *)((longlong)ppuVar13 + lVar18 * 2) != 0);
  FUN_140054cf0(&local_a0);
  local_e0 = 0;
  plStack_d8 = (longlong *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  FUN_140054cf0(&local_e0,L"{*VILLAGER_TYPE*}",0x11);
  FUN_140055000(&local_60,&local_80);
  local_f8 = 1;
  do {
    puVar20 = &local_60;
    if (7 < uStack_48) {
      puVar20 = (undefined2 *)CONCAT44(uStack_5c,CONCAT22(uStack_5e,local_60));
    }
    if ((local_50 < local_d0) || (local_50 - local_d0 < uVar19)) goto LAB_1402c0aeb;
    if (local_d0 != 0) {
      puVar4 = puVar20 + local_50;
      puVar11 = (undefined2 *)thunk_FUN_140556fb0(puVar20 + uVar19,puVar4);
      if (puVar11 == puVar4) {
LAB_1402c0aeb:
        if (7 < uStack_68) {
          if ((0xfff < uStack_68 * 2 + 2) &&
             (0x1f < (ulonglong)((longlong)local_80 + (-8 - local_80[-1])))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          thunk_FUN_1401fe000();
        }
        local_80 = (undefined8 *)CONCAT44(uStack_5c,CONCAT22(uStack_5e,local_60));
        local_70 = local_50;
        uStack_68 = uStack_48;
        local_50 = 0;
        uStack_48 = 7;
        local_60 = 0;
        FUN_140055150(&local_60);
        if (7 < local_c8) {
          if ((0xfff < local_c8 * 2 + 2) && (0x1f < (local_e0 - *(longlong *)(local_e0 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          thunk_FUN_1401fe000();
        }
        local_d0 = 0;
        local_c8 = 7;
        local_e0 = local_e0 & 0xffffffffffff0000;
        if (7 < local_88) {
          if ((0xfff < local_88 * 2 + 2) && (0x1f < (longlong)local_a0 + (-8 - local_a0[-1]))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          thunk_FUN_1401fe000();
        }
        local_88 = 7;
        if (*DAT_1407bb780 == '\0') {
          pcVar6 = (code *)swi(3);
          plVar7 = (longlong *)(*pcVar6)();
          return plVar7;
        }
        lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
        if ((0x370 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5)) &&
           (ppuVar16 = (undefined **)(lVar18 + 0x6e00), 7 < *(ulonglong *)(lVar18 + 0x6e18))) {
          ppuVar16 = (undefined **)*ppuVar16;
        }
        puVar15 = &local_80;
        if (7 < uStack_68) {
          puVar15 = local_80;
        }
        if ((local_70 < 2) ||
           (lVar18 = (longlong)puVar15 + local_70 * 2,
           lVar10 = thunk_FUN_140556fb0(puVar15,lVar18,&DAT_14061ab50,2), lVar10 == lVar18)) {
          lVar18 = -1;
        }
        else {
          lVar18 = lVar10 - (longlong)puVar15 >> 1;
        }
        do {
          lVar17 = lVar17 + 1;
        } while (*(short *)((longlong)ppuVar16 + lVar17 * 2) != 0);
        FUN_1400a47c0(&local_80,lVar18,2,ppuVar16);
        puVar15 = &local_80;
        if (7 < uStack_68) {
          puVar15 = local_80;
        }
        uVar8 = FUN_140089d90(&local_e0,puVar15);
        FUN_140283b10(param_1 + 0x3db,uVar8);
        uVar19 = (ulonglong)local_f0 >> 0x10;
        (**(code **)(*DAT_1407ba830 + 0x60))
                  (DAT_1407ba830,*(undefined4 *)((longlong)param_1 + 0x174));
        FUN_1402c1160(param_1,(uint)uVar19 & 0xfff);
        if (7 < uStack_68) {
          if ((0xfff < uStack_68 * 2 + 2) &&
             (0x1f < (ulonglong)((longlong)local_80 + (-8 - local_80[-1])))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          thunk_FUN_1401fe000();
        }
        local_70 = 0;
        uStack_68 = 7;
        local_80 = (undefined8 *)((ulonglong)local_80 & 0xffffffffffff0000);
        if (7 < local_a8) {
          if ((0xfff < local_a8 * 2 + 2) &&
             (0x1f < (ulonglong)((longlong)local_c0 + (-8 - (longlong)local_c0[-1])))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          thunk_FUN_1401fe000();
        }
        return param_1;
      }
      uVar19 = (longlong)puVar11 - (longlong)puVar20 >> 1;
    }
    if (uVar19 == 0xffffffffffffffff) goto LAB_1402c0aeb;
    FUN_1400a47c0(&local_60,uVar19);
    uVar19 = uVar19 + 1;
  } while( true );
}



// ===== FUN_1402c2290 @ 0x1402c2290 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402c2290(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStackY_68 [32];
  undefined8 *local_38;
  longlong local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_1407502c0 ^ (ulonglong)auStackY_68;
  FUN_14026db10();
  uVar3 = (**(code **)*param_1)(param_1);
  IggyPlayerRootPath(uVar3);
  puVar1 = param_1 + 0x33;
  local_20 = 9;
  uStack_18 = 0xf;
  local_30 = 0x73694c6f54776f48;
  uStack_28 = 0x74;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_18) {
    if (0xfff < uStack_18 + 1) {
      if (0x1f < (local_30 - *(longlong *)(local_30 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x36] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  if (plVar2 == (longlong *)param_1[0x2c]) {
    local_38 = puVar1;
    FUN_1400491a0(param_1 + 0x2a,plVar2,&local_38);
  }
  else {
    *plVar2 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  return 1;
}



// ===== FUN_1402c23c0 @ 0x1402c23c0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1402c23c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStackY_e8 [32];
  undefined1 local_68 [32];
  longlong local_48 [6];
  
  local_48[4] = DAT_1407502c0 ^ (ulonglong)auStackY_e8;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_HowToPlayMenu::vftable;
  plVar2 = param_1 + 0x33;
  FUN_14027f6d0(plVar2);
  uVar6 = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *plVar2 = (longlong)UIControl_ButtonList::vftable;
  param_1[0x58] = 0;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  FUN_140281240(plVar2,0);
  do {
    if (*DAT_1407bb780 == '\0') {
      pcVar1 = (code *)swi(3);
      plVar2 = (longlong *)(*pcVar1)();
      return plVar2;
    }
    if ((ulonglong)(longlong)(int)(&DAT_14060ba60)[uVar6] <
        (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - *(longlong *)(DAT_1407bb780 + 0x48) >> 5))
    {
      ppuVar5 = (undefined **)
                (*(longlong *)(DAT_1407bb780 + 0x48) + (longlong)(int)(&DAT_14060ba60)[uVar6] * 0x20
                );
      if ((undefined *)0x7 < ppuVar5[3]) {
        ppuVar5 = (undefined **)*ppuVar5;
      }
    }
    else {
      ppuVar5 = &PTR_140610690;
    }
    local_48[0] = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    local_48[3] = 0;
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (*(short *)((longlong)ppuVar5 + lVar8 * 2) != 0);
    FUN_140054cf0(local_48);
    uVar3 = (*(code *)**(undefined8 **)param_1[0x3c])();
    IggyPlayerCallMethodRS(uVar3,local_68);
    *(int *)(param_1 + 0x58) = (int)param_1[0x58] + 1;
    if (7 < (ulonglong)local_48[3]) {
      if ((0xfff < local_48[3] * 2 + 2U) &&
         (0x1f < (local_48[0] - *(longlong *)(local_48[0] + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
    uVar7 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar7;
    if (0x17 < uVar7) {
      lVar8 = param_1[8];
      uVar3 = (**(code **)*param_1)(param_1);
      uVar3 = IggyPlayerRootPath(uVar3);
      uVar4 = (**(code **)*param_1)(param_1);
      IggyPlayerCallMethodRS(uVar4,local_68,uVar3,lVar8);
      return param_1;
    }
  } while( true );
}



// ===== FUN_1402c2d60 @ 0x1402c2d60 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402c2d60(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStackY_88 [32];
  undefined8 *local_58;
  longlong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1407502c0 ^ (ulonglong)auStackY_88;
  FUN_14026db10();
  uVar4 = (**(code **)*param_1)(param_1);
  IggyPlayerRootPath(uVar4);
  puVar5 = param_1 + 0x33;
  uStack_48 = 0;
  local_40 = 7;
  uStack_38 = 0xf;
  local_50 = 0x316e6f74747542;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x36] = 0;
  puVar1 = param_1 + 0x2a;
  plVar2 = (longlong *)param_1[0x2b];
  local_58 = puVar5;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0x52;
  uStack_48 = 0;
  local_40 = 7;
  uStack_38 = 0xf;
  local_50 = 0x326e6f74747542;
  (**(code **)param_1[0x52])(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x55] = 0;
  puVar3 = (undefined8 *)param_1[0x2b];
  local_58 = puVar5;
  if (puVar3 == (undefined8 *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,puVar3,&local_58);
  }
  else {
    *puVar3 = puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0x71;
  uStack_48 = 0;
  local_40 = 7;
  uStack_38 = 0xf;
  local_50 = 0x336e6f74747542;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x74] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_58 = puVar5;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0x90;
  uStack_48 = 0;
  local_40 = 7;
  uStack_38 = 0xf;
  local_50 = 0x346e6f74747542;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x93] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_58 = puVar5;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0xaf;
  uStack_48 = 0;
  local_40 = 7;
  uStack_38 = 0xf;
  local_50 = 0x356e6f74747542;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xb2] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_58 = puVar5;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar5 = param_1 + 0xce;
  uStack_48 = 0;
  local_40 = 7;
  uStack_38 = 0xf;
  local_50 = 0x366e6f74747542;
  (**(code **)*puVar5)(puVar5,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xd1] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  if (plVar2 == (longlong *)param_1[0x2c]) {
    local_58 = puVar5;
    FUN_1400491a0(puVar1,plVar2,&local_58);
  }
  else {
    *plVar2 = (longlong)puVar5;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  return 1;
}



// ===== FUN_1402c36e0 @ 0x1402c36e0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1402c36e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined1 auStack_268 [32];
  uint local_248;
  uint local_240;
  undefined1 local_238 [16];
  longlong *local_228;
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_1407502c0 ^ (ulonglong)auStack_268;
  local_228 = param_1;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_SettingsAudioMenu::vftable;
  FUN_1402860b0(param_1 + 0x33);
  FUN_1402860b0(param_1 + 0x58);
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  ppuVar6 = &PTR_140610690;
  if (*DAT_1407bb780 == '\0') {
    pcVar3 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar3)();
    return plVar4;
  }
  lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5) < 0x5fd) {
    ppuVar7 = &PTR_140610690;
  }
  else {
    ppuVar7 = (undefined **)(lVar2 + 0xbf80);
    if (7 < *(ulonglong *)(lVar2 + 0xbf98)) {
      ppuVar7 = (undefined **)*ppuVar7;
    }
  }
  local_248 = (uint)*(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 1);
  FUN_1400547f0(local_218,0x100,L"%ls: %d%%",ppuVar7);
  bVar1 = *(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 1);
  uVar5 = FUN_140089d90(local_238,local_218);
  local_240 = (uint)bVar1;
  local_248 = 100;
  FUN_140286290(param_1 + 0x33,uVar5,0,0);
  if (*DAT_1407bb780 == '\0') {
    pcVar3 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar3)();
    return plVar4;
  }
  lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((0x5fd < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5)) &&
     (ppuVar6 = (undefined **)(lVar2 + 0xbfa0), 7 < *(ulonglong *)(lVar2 + 0xbfb8))) {
    ppuVar6 = (undefined **)*ppuVar6;
  }
  local_248 = (uint)*(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 2);
  FUN_1400547f0(local_218,0x100,L"%ls: %d%%",ppuVar6);
  bVar1 = *(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 2);
  uVar5 = FUN_140089d90(local_238,local_218);
  local_240 = (uint)bVar1;
  local_248 = 100;
  FUN_140286290(param_1 + 0x58,uVar5,1,0);
  FUN_14026eda0(param_1);
  return param_1;
}



// ===== FUN_1402c3ec0 @ 0x1402c3ec0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1402c3ec0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined1 auStack_268 [32];
  uint local_248;
  uint local_240;
  undefined1 local_238 [16];
  longlong *local_228;
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_1407502c0 ^ (ulonglong)auStack_268;
  local_228 = param_1;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_SettingsControlMenu::vftable;
  FUN_1402860b0(param_1 + 0x33);
  FUN_1402860b0(param_1 + 0x58);
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  ppuVar6 = &PTR_140610690;
  if (*DAT_1407bb780 == '\0') {
    pcVar3 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar3)();
    return plVar4;
  }
  lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5) < 0x600) {
    ppuVar7 = &PTR_140610690;
  }
  else {
    ppuVar7 = (undefined **)(lVar2 + 0xbfe0);
    if (7 < *(ulonglong *)(lVar2 + 0xbff8)) {
      ppuVar7 = (undefined **)*ppuVar7;
    }
  }
  local_248 = (uint)*(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 3);
  FUN_1400547f0(local_218,0x100,L"%ls: %d%%",ppuVar7);
  bVar1 = *(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 3);
  uVar5 = FUN_140089d90(local_238,local_218);
  local_240 = (uint)bVar1;
  local_248 = 200;
  FUN_140286290(param_1 + 0x33,uVar5,0,0);
  if (*DAT_1407bb780 == '\0') {
    pcVar3 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar3)();
    return plVar4;
  }
  lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((0x600 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5)) &&
     (ppuVar6 = (undefined **)(lVar2 + 0xc000), 7 < *(ulonglong *)(lVar2 + 0xc018))) {
    ppuVar6 = (undefined **)*ppuVar6;
  }
  local_248 = (uint)*(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 0x50);
  FUN_1400547f0(local_218,0x100,L"%ls: %d%%",ppuVar6);
  bVar1 = *(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 0x50);
  uVar5 = FUN_140089d90(local_238,local_218);
  local_240 = (uint)bVar1;
  local_248 = 200;
  FUN_140286290(param_1 + 0x58,uVar5,1,0);
  FUN_14026eda0(param_1);
  return param_1;
}



// ===== FUN_1402c5c80 @ 0x1402c5c80 [ui] =====

longlong * FUN_1402c5c80(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 local_28 [16];
  
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_SettingsMenu::vftable;
  _eh_vector_constructor_iterator_(param_1 + 0x33,0xf8,7,FUN_140280b20,FUN_140271e20);
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  bVar2 = *(longlong *)(DAT_140790e60 + 0x40) == 0;
  uVar1 = FUN_1400899e0(local_28,0x73c);
  FUN_140280c40(param_1 + 0x33,uVar1,0);
  uVar1 = FUN_1400899e0(local_28,0x73d);
  FUN_140280c40(param_1 + 0x52,uVar1,1);
  uVar1 = FUN_1400899e0(local_28,0x73e);
  FUN_140280c40(param_1 + 0x71,uVar1,2);
  uVar1 = FUN_1400899e0(local_28,0x73f);
  FUN_140280c40(param_1 + 0xaf,uVar1,4);
  uVar1 = FUN_1400899e0(local_28,0x740);
  FUN_140280c40(param_1 + 0xce,uVar1,5);
  uVar1 = FUN_1400899e0(local_28,0x741);
  FUN_140280c40(param_1 + 0xed,uVar1,6);
  if (*(int *)((longlong)param_1 + 0x174) != 0) {
    FUN_14026ec30(param_1,param_1 + 0x52,bVar2);
    FUN_14026ec30(param_1,param_1 + 0xaf,bVar2);
  }
  FUN_14026eda0(param_1);
  return param_1;
}



// ===== FUN_1402c6980 @ 0x1402c6980 [ui] =====

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1402c6980(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  byte bVar6;
  undefined2 uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  char cVar10;
  int iVar11;
  undefined8 uVar12;
  longlong *plVar13;
  ulonglong *puVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  undefined **ppuVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined **ppuVar21;
  bool bVar22;
  undefined1 auStackY_1b68 [32];
  undefined8 local_1b18;
  longlong *local_1b10;
  longlong *local_1b08;
  ulonglong local_1b00;
  longlong *plStack_1af8;
  undefined8 local_1af0;
  undefined8 uStack_1ae8;
  longlong local_1ae0 [5];
  short local_1ab8 [64];
  undefined1 local_1a38 [2048];
  undefined1 local_1238 [4608];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x1402c69aa;
  local_38 = DAT_1407502c0 ^ (ulonglong)auStackY_1b68;
  local_1b08 = param_1;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_SettingsOptionsMenu::vftable;
  plVar13 = param_1 + 0x33;
  FUN_14027f6d0(plVar13);
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *plVar13 = (longlong)UIControl_CheckBox::vftable;
  plVar2 = param_1 + 0x55;
  FUN_14027f6d0(plVar2);
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  *plVar2 = (longlong)UIControl_CheckBox::vftable;
  plVar3 = param_1 + 0x77;
  FUN_14027f6d0(plVar3);
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined1 *)(param_1 + 0x92) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  *plVar3 = (longlong)UIControl_CheckBox::vftable;
  plVar4 = param_1 + 0x99;
  FUN_14027f6d0(plVar4);
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  *plVar4 = (longlong)UIControl_CheckBox::vftable;
  plVar5 = param_1 + 0xbb;
  FUN_14027f6d0(plVar5);
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5e4) = 0;
  *plVar5 = (longlong)UIControl_CheckBox::vftable;
  FUN_1402860b0(param_1 + 0xdd);
  FUN_1402860b0(param_1 + 0x102);
  FUN_14027f6d0(param_1 + 0x127);
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  *(undefined1 *)(param_1 + 0x142) = 0;
  *(undefined4 *)((longlong)param_1 + 0x944) = 0;
  param_1[0x127] = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x145) = 1;
  FUN_14027f6d0(param_1 + 0x146);
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  *(undefined1 *)(param_1 + 0x161) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa3c) = 0;
  param_1[0x146] = (longlong)UIControl_Button::vftable;
  *(undefined1 *)((longlong)param_1 + 0xb2a) = 0;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  *(bool *)(param_1 + 0x165) = *(longlong *)(DAT_140790e60 + 0x40) == 0;
  bVar6 = *(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 6);
  uVar12 = FUN_1400899e0(&local_1b00,0x742);
  FUN_140281d70(plVar13,uVar12,0,bVar6 >> 2 & 1);
  uVar7 = *(undefined2 *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 6);
  uVar12 = FUN_1400899e0(&local_1b00,0x743);
  FUN_140281d70(plVar2,uVar12,1,(byte)((ushort)uVar7 >> 10) & 1);
  uVar7 = *(undefined2 *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 6);
  uVar12 = FUN_1400899e0(&local_1b00,0x744);
  FUN_140281d70(plVar3,uVar12,2,(byte)((ushort)uVar7 >> 0xf));
  bVar6 = *(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 6);
  uVar12 = FUN_1400899e0(&local_1b00,0x8ca);
  FUN_140281d70(plVar4,uVar12,3,bVar6 >> 3 & 1);
  if (((char)param_1[0x165] == '\0') ||
     (*(int *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 0x8c) == -1)) {
    FUN_14026ec30(param_1,plVar5,1);
    *(undefined1 *)((longlong)param_1 + 0xb29) = 0;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0xb29) = 1;
    uVar12 = FUN_1400899e0(&local_1b00,0x35);
    FUN_140281d70(plVar5,uVar12,4,0);
  }
  uVar7 = *(undefined2 *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 6);
  uVar19 = 0;
  ppuVar17 = &PTR_140610690;
  uVar16 = uVar19;
  do {
    while ((int)uVar16 == 0) {
      if (*DAT_1407bb780 == '\0') {
        pcVar9 = (code *)swi(3);
        plVar13 = (longlong *)(*pcVar9)();
        return plVar13;
      }
      lVar20 = *(longlong *)(DAT_1407bb780 + 0x48);
      if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar20 >> 5) < 0x641) {
        ppuVar21 = &PTR_140610690;
      }
      else {
        ppuVar21 = (undefined **)(lVar20 + 0xc800);
        if (7 < *(ulonglong *)(lVar20 + 0xc818)) {
          ppuVar21 = (undefined **)*ppuVar21;
        }
      }
      FUN_1400547f0(local_1238,0x100,&DAT_140642338,ppuVar21);
      uVar16 = 1;
    }
    if (*DAT_1407bb780 == '\0') {
      pcVar9 = (code *)swi(3);
      plVar13 = (longlong *)(*pcVar9)();
      return plVar13;
    }
    if (*DAT_1407bb780 == '\0') {
      pcVar9 = (code *)swi(3);
      plVar13 = (longlong *)(*pcVar9)();
      return plVar13;
    }
    lVar20 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar20 >> 5) < 0x640) {
      ppuVar21 = &PTR_140610690;
    }
    else {
      ppuVar21 = (undefined **)(lVar20 + 0xc7e0);
      if (7 < *(ulonglong *)(lVar20 + 0xc7f8)) {
        ppuVar21 = (undefined **)*ppuVar21;
      }
    }
    FUN_1400547f0(local_1238 + uVar16 * 0x200,0x100,L"%ls: %d %ls",ppuVar21);
    uVar18 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar18;
  } while (uVar18 < 9);
  (**(code **)(param_1[0xdd] + 0x30))(param_1 + 0xdd,9,local_1238);
  uVar12 = FUN_140089d90(&local_1b00,
                         local_1238 + (ulonglong)((byte)((ushort)uVar7 >> 0xb) & 0xf) * 0x200);
  FUN_140286290(param_1 + 0xdd,uVar12,5,0);
  bVar6 = *(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 6);
  do {
    if (*DAT_1407bb780 == '\0') {
      pcVar9 = (code *)swi(3);
      plVar13 = (longlong *)(*pcVar9)();
      return plVar13;
    }
    if (*DAT_1407bb780 == '\0') {
      pcVar9 = (code *)swi(3);
      plVar13 = (longlong *)(*pcVar9)();
      return plVar13;
    }
    lVar20 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar20 >> 5) < 0x5fc) {
      ppuVar21 = &PTR_140610690;
    }
    else {
      ppuVar21 = (undefined **)(lVar20 + 0xbf60);
      if (7 < *(ulonglong *)(lVar20 + 0xbf78)) {
        ppuVar21 = (undefined **)*ppuVar21;
      }
    }
    FUN_1400547f0(local_1a38 + uVar19 * 0x200,0x100,L"%ls: %ls",ppuVar21);
    uVar18 = (int)uVar19 + 1;
    uVar19 = (ulonglong)uVar18;
  } while (uVar18 < 4);
  (**(code **)(param_1[0x102] + 0x30))(param_1 + 0x102,4,local_1a38);
  uVar12 = FUN_140089d90(&local_1b00,local_1a38 + (ulonglong)(bVar6 & 3) * 0x200);
  FUN_140286290(param_1 + 0x102,uVar12,7,0);
  if (*DAT_1407bb780 == '\0') {
    pcVar9 = (code *)swi(3);
    plVar13 = (longlong *)(*pcVar9)();
    return plVar13;
  }
  if (((ulonglong)
       (longlong)
       *(int *)(&DAT_14060bc20 +
               (ulonglong)(*(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 6) & 3)
               * 4) <
       (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - *(longlong *)(DAT_1407bb780 + 0x48) >> 5))
     && (ppuVar17 = (undefined **)
                    ((longlong)
                     *(int *)(&DAT_14060bc20 +
                             (ulonglong)
                             (*(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 6) &
                             3) * 4) * 0x20 + *(longlong *)(DAT_1407bb780 + 0x48)),
        (undefined *)0x7 < ppuVar17[3])) {
    ppuVar17 = (undefined **)*ppuVar17;
  }
  local_1ae0[0] = 0;
  local_1ae0[1] = 0;
  local_1ae0[2] = 0;
  local_1ae0[3] = 0;
  lVar20 = -1;
  do {
    lVar20 = lVar20 + 1;
  } while (*(short *)((longlong)ppuVar17 + lVar20 * 2) != 0);
  FUN_140054cf0(local_1ae0,ppuVar17);
  cVar10 = FUN_140004470(&DAT_140784700);
  if (cVar10 == '\0') {
    FUN_140004470(&DAT_140784700);
  }
  lVar20 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar10 = (**(code **)**(undefined8 **)(lVar20 + 0xb8))();
  plVar13 = DAT_1407915a8;
  if (cVar10 != '\0') {
    plVar13 = *(longlong **)(lVar20 + 0xb8);
  }
  lVar20 = (**(code **)(*plVar13 + 0xd8))();
  FUN_1400547f0(local_1ab8,0x40,L"<font color=\"#%08x\">",*(undefined4 *)(lVar20 + 0x474));
  uVar16 = 0xffffffffffffffff;
  do {
    uVar16 = uVar16 + 1;
  } while (local_1ab8[uVar16] != 0);
  if (0x7ffffffffffffffeU - local_1ae0[2] < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140054e40();
  }
  FUN_140048da0(&local_1b00);
  if (7 < (ulonglong)local_1ae0[3]) {
    if ((0xfff < local_1ae0[3] * 2 + 2U) &&
       (0x1f < (local_1ae0[0] - *(longlong *)(local_1ae0[0] + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_1af0 = 0;
  uStack_1ae8 = 7;
  local_1b00 = local_1b00 & 0xffffffffffff0000;
  FUN_140055150(&local_1b00);
  local_1b00 = 0;
  plStack_1af8 = (longlong *)0x0;
  local_1b18 = FUN_140558c80(0x88);
  uVar12 = FUN_1400898e0(local_1b18,local_1ae0);
  puVar14 = (ulonglong *)FUN_14008a140(&local_1b18,uVar12);
  plVar2 = plStack_1af8;
  local_1b00 = *puVar14;
  plVar13 = (longlong *)puVar14[1];
  *puVar14 = 0;
  puVar14[1] = 0;
  if (plStack_1af8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_1af8 + 1;
    lVar20 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      puVar8 = (undefined8 *)*plStack_1af8;
      plStack_1af8 = plVar13;
      (*(code *)*puVar8)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar13 = plStack_1af8;
      if (iVar11 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2);
        plVar13 = plStack_1af8;
      }
    }
  }
  plStack_1af8 = plVar13;
  if (local_1b10 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_1b10 + 1;
    lVar20 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*local_1b10)(local_1b10);
      LOCK();
      piVar1 = (int *)((longlong)local_1b10 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_1b10 + 8))(local_1b10);
      }
    }
  }
  FUN_140283b10(param_1 + 0x127,&local_1b00);
  bVar22 = *(int *)((longlong)param_1 + 0x174) != 0;
  if (*(longlong *)(DAT_140790e60 + 0x40) == 0) {
    if (*(int *)((longlong)param_1 + 0x174) == 0) goto LAB_1402c7338;
  }
  else {
    cVar10 = (**(code **)(*DAT_140790368 + 0x80))();
    if (cVar10 != '\x01') {
      bVar22 = true;
    }
  }
  if (*(char *)((longlong)param_1 + 0x9ec) != '\0') {
    iVar11 = IggyValueSetBooleanRS(param_1 + 299,param_1[0x13a],0,0);
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0x9ec) = 0;
  }
  FUN_14026ec30(param_1,param_1 + 0x102,1);
LAB_1402c7338:
  if (bVar22) {
    FUN_14026ec30(param_1,param_1 + 0xdd,1);
    FUN_14026ec30(param_1,param_1 + 0x99,1);
  }
  FUN_14026ec30(param_1,param_1 + 0x146,0);
  lVar20 = param_1[8];
  uVar12 = (**(code **)*param_1)(param_1);
  uVar12 = IggyPlayerRootPath(uVar12);
  uVar15 = (**(code **)*param_1)(param_1);
  IggyPlayerCallMethodRS(uVar15,&local_1b00,uVar12,lVar20);
  *(undefined1 *)(param_1 + 0x145) = 0;
  FUN_140055150(local_1ae0);
  return param_1;
}



// ===== FUN_1402c7850 @ 0x1402c7850 [ui] =====

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402c7850(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  undefined2 uVar4;
  code *pcVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined **ppuVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined **ppuVar22;
  bool bVar23;
  undefined1 auStackY_1be8 [32];
  undefined8 *local_1ba0 [2];
  undefined8 local_1b90;
  longlong *plStack_1b88;
  undefined8 *local_1b80 [2];
  undefined1 local_1b70 [16];
  undefined1 local_1b60 [16];
  undefined1 local_1b50 [16];
  undefined1 local_1b40 [16];
  undefined1 local_1b30 [8];
  longlong *local_1b28;
  undefined1 local_1b20 [32];
  undefined8 local_1b00;
  undefined8 uStack_1af8;
  longlong local_1af0;
  ulonglong uStack_1ae8;
  uint local_1ae0;
  undefined4 uStack_1adc;
  undefined8 local_1ad0;
  ulonglong uStack_1ac8;
  short local_1ab8 [64];
  undefined1 local_1a38 [2048];
  undefined1 local_1238 [4608];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x1402c787a;
  local_38 = DAT_1407502c0 ^ (ulonglong)auStackY_1be8;
  uVar16 = 0;
  *(undefined1 *)((longlong)param_1 + 0xb2a) = 0;
  bVar3 = *(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 6);
  uVar9 = FUN_1400899e0(local_1b80,0x742);
  FUN_140281d70(param_1 + 0x33,uVar9,0,bVar3 >> 2 & 1);
  uVar4 = *(undefined2 *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 6);
  uVar9 = FUN_1400899e0(local_1ba0,0x743);
  FUN_140281d70(param_1 + 0x55,uVar9,1,(byte)((ushort)uVar4 >> 10) & 1);
  uVar4 = *(undefined2 *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 6);
  uVar9 = FUN_1400899e0(local_1b70,0x744);
  FUN_140281d70(param_1 + 0x77,uVar9,2,(byte)((ushort)uVar4 >> 0xf));
  bVar3 = *(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 6);
  uVar9 = FUN_1400899e0(local_1b60,0x8ca);
  FUN_140281d70(param_1 + 0x99,uVar9,3,bVar3 >> 3 & 1);
  if ((*(char *)(param_1 + 0x165) == '\0') ||
     (*(int *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 0x8c) == -1)) {
    FUN_14026ec30(param_1,param_1 + 0xbb,1);
    uVar14 = 0;
  }
  else {
    uVar14 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0xb29) = uVar14;
  uVar4 = *(undefined2 *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 6);
  ppuVar18 = &PTR_140610690;
  uVar20 = uVar16;
  do {
    while ((int)uVar20 == 0) {
      if (*DAT_1407bb780 == '\0') {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
      if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x641) {
        ppuVar22 = &PTR_140610690;
      }
      else {
        ppuVar22 = (undefined **)(lVar21 + 0xc800);
        if (7 < *(ulonglong *)(lVar21 + 0xc818)) {
          ppuVar22 = (undefined **)*ppuVar22;
        }
      }
      FUN_1400547f0(local_1238,0x100,&DAT_140642338,ppuVar22);
      uVar20 = 1;
    }
    if (*DAT_1407bb780 == '\0') {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*DAT_1407bb780 == '\0') {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x640) {
      ppuVar22 = &PTR_140610690;
    }
    else {
      ppuVar22 = (undefined **)(lVar21 + 0xc7e0);
      if (7 < *(ulonglong *)(lVar21 + 0xc7f8)) {
        ppuVar22 = (undefined **)*ppuVar22;
      }
    }
    FUN_1400547f0(local_1238 + uVar20 * 0x200,0x100,L"%ls: %d %ls",ppuVar22);
    uVar19 = (int)uVar20 + 1;
    uVar20 = (ulonglong)uVar19;
  } while (uVar19 < 9);
  (**(code **)(param_1[0xdd] + 0x30))(param_1 + 0xdd,9,local_1238);
  uVar9 = FUN_140089d90(local_1b50,
                        local_1238 + (ulonglong)((byte)((ushort)uVar4 >> 0xb) & 0xf) * 0x200);
  FUN_140286290(param_1 + 0xdd,uVar9,5,0);
  bVar3 = *(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 6);
  do {
    if (*DAT_1407bb780 == '\0') {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*DAT_1407bb780 == '\0') {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar21 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar21 >> 5) < 0x5fc) {
      ppuVar22 = &PTR_140610690;
    }
    else {
      ppuVar22 = (undefined **)(lVar21 + 0xbf60);
      if (7 < *(ulonglong *)(lVar21 + 0xbf78)) {
        ppuVar22 = (undefined **)*ppuVar22;
      }
    }
    FUN_1400547f0(local_1a38 + uVar16 * 0x200,0x100,L"%ls: %ls",ppuVar22);
    uVar19 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar19;
  } while (uVar19 < 4);
  (**(code **)(param_1[0x102] + 0x30))(param_1 + 0x102,4,local_1a38);
  uVar9 = FUN_140089d90(local_1b40,local_1a38 + (ulonglong)(bVar3 & 3) * 0x200);
  FUN_140286290(param_1 + 0x102,uVar9,7,0);
  if (*DAT_1407bb780 == '\0') {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((ulonglong)
       (longlong)
       *(int *)(&DAT_14060bc20 +
               (ulonglong)(*(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 6) & 3)
               * 4) <
       (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - *(longlong *)(DAT_1407bb780 + 0x48) >> 5))
     && (ppuVar18 = (undefined **)
                    ((longlong)
                     *(int *)(&DAT_14060bc20 +
                             (ulonglong)
                             (*(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 6) &
                             3) * 4) * 0x20 + *(longlong *)(DAT_1407bb780 + 0x48)),
        (undefined *)0x7 < ppuVar18[3])) {
    ppuVar18 = (undefined **)*ppuVar18;
  }
  local_1b00 = (undefined8 *)0x0;
  uStack_1af8 = 0;
  local_1af0 = 0;
  uStack_1ae8 = 0;
  lVar21 = -1;
  do {
    lVar21 = lVar21 + 1;
  } while (*(short *)((longlong)ppuVar18 + lVar21 * 2) != 0);
  FUN_140054cf0(&local_1b00,ppuVar18);
  cVar7 = FUN_140004470(&DAT_140784700);
  if (cVar7 == '\0') {
    FUN_140004470(&DAT_140784700);
  }
  lVar21 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar7 = (**(code **)**(undefined8 **)(lVar21 + 0xb8))();
  plVar15 = DAT_1407915a8;
  if (cVar7 != '\0') {
    plVar15 = *(longlong **)(lVar21 + 0xb8);
  }
  lVar21 = (**(code **)(*plVar15 + 0xd8))();
  FUN_1400547f0(local_1ab8,0x40,L"<font color=\"#%08x\">",*(undefined4 *)(lVar21 + 0x474));
  uVar16 = 0xffffffffffffffff;
  do {
    uVar16 = uVar16 + 1;
  } while (local_1ab8[uVar16] != 0);
  if (0x7ffffffffffffffeU - local_1af0 < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140054e40();
  }
  FUN_140048da0(&local_1ae0);
  if (7 < uStack_1ae8) {
    if ((0xfff < uStack_1ae8 * 2 + 2) &&
       (0x1f < ((longlong)local_1b00 - *(longlong *)((longlong)local_1b00 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_1b00 = (undefined8 *)CONCAT44(uStack_1adc,local_1ae0);
  local_1af0 = local_1ad0;
  uStack_1ae8 = uStack_1ac8;
  local_1ad0 = 0;
  uStack_1ac8 = 7;
  local_1ae0 = local_1ae0 & 0xffff0000;
  FUN_140055150(&local_1ae0);
  local_1ba0[0] = &local_1b90;
  local_1b90 = 0;
  plStack_1b88 = (longlong *)0x0;
  puVar10 = (undefined8 *)FUN_140558c80(0x88);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar11 = puVar10 + 4;
  *puVar11 = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[7] = 7;
  *(undefined2 *)puVar11 = 0;
  puVar10[0x10] = 0;
  *(undefined1 *)(puVar10 + 8) = 1;
  puVar10[2] = 0xffffffffffffffff;
  puVar10[3] = 0xffffffffffffffff;
  local_1b80[0] = puVar10;
  if (puVar11 != &local_1b00) {
    puVar17 = &local_1b00;
    if (7 < uStack_1ae8) {
      puVar17 = local_1b00;
    }
    FUN_1400549d0(puVar11,puVar17,local_1af0);
  }
  puVar11 = (undefined8 *)FUN_14008a140(local_1b30,puVar10);
  plVar6 = plStack_1b88;
  local_1b90 = *puVar11;
  plVar15 = (longlong *)puVar11[1];
  *puVar11 = 0;
  puVar11[1] = 0;
  if (plStack_1b88 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_1b88 + 1;
    lVar21 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar21 == 1) {
      puVar11 = (undefined8 *)*plStack_1b88;
      plStack_1b88 = plVar15;
      (*(code *)*puVar11)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar15 = plStack_1b88;
      if (iVar8 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
        plVar15 = plStack_1b88;
      }
    }
  }
  plStack_1b88 = plVar15;
  if (local_1b28 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1b28 + 1;
    lVar21 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar21 == 1) {
      (**(code **)*local_1b28)(local_1b28);
      LOCK();
      piVar2 = (int *)((longlong)local_1b28 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_1b28 + 8))(local_1b28);
      }
    }
  }
  FUN_140283b10(param_1 + 0x127,&local_1b90);
  bVar23 = *(int *)((longlong)param_1 + 0x174) != 0;
  if (*(longlong *)(DAT_140790e60 + 0x40) == 0) {
    if (*(int *)((longlong)param_1 + 0x174) == 0) goto LAB_1402c8039;
  }
  else {
    cVar7 = (**(code **)(*DAT_140790368 + 0x80))();
    if (cVar7 != '\x01') {
      bVar23 = true;
    }
  }
  if (*(char *)((longlong)param_1 + 0x9ec) != '\0') {
    iVar8 = IggyValueSetBooleanRS(param_1 + 299,param_1[0x13a],0,0);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0x9ec) = 0;
  }
  FUN_14026ec30(param_1,param_1 + 0x102,1);
LAB_1402c8039:
  if (bVar23) {
    FUN_14026ec30(param_1,param_1 + 0xdd,1);
    FUN_14026ec30(param_1,param_1 + 0x99,1);
  }
  FUN_14026ec30(param_1,param_1 + 0x146,0);
  uVar9 = param_1[8];
  uVar12 = (**(code **)*param_1)(param_1);
  uVar12 = IggyPlayerRootPath(uVar12);
  uVar13 = (**(code **)*param_1)(param_1);
  IggyPlayerCallMethodRS(uVar13,local_1b20,uVar12,uVar9);
  FUN_140055150(&local_1b00);
  return;
}



// ===== FUN_1402c8110 @ 0x1402c8110 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402c8110(longlong param_1,double param_2,double param_3)

{
  ushort uVar1;
  code *pcVar2;
  undefined8 *****pppppuVar3;
  char cVar4;
  DWORD DVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined **ppuVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *****pppppuVar12;
  undefined1 auStackY_148 [32];
  undefined8 ****local_108;
  undefined8 uStack_100;
  longlong local_f8;
  ulonglong uStack_f0;
  undefined2 local_e8;
  undefined6 uStack_e6;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  short local_c8 [64];
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStackY_148;
  if ((int)param_2 == 5) {
    FUN_140286420(param_1 + 0x6e8,(int)param_3);
    FUN_140033e40(&DAT_1407bb5d0,*(undefined4 *)(param_1 + 0x174),0xe,(int)param_3 & 0xff);
    uVar1 = *(ushort *)(DAT_1407bb7b0 + 6);
    DVar5 = GetTickCount();
    DAT_1407bba98 = DVar5 + (uVar1 >> 0xb & 0xf) * 900000;
  }
  else if ((int)param_2 == 7) {
    uVar9 = (uint)param_3;
    FUN_140286420(param_1 + 0x810,uVar9);
    FUN_140033e40(&DAT_1407bb5d0,*(undefined4 *)(param_1 + 0x174),5,uVar9 & 0xff);
    if (*DAT_1407bb780 == '\0') {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((ulonglong)(longlong)*(int *)(&DAT_14060bc20 + (longlong)(int)uVar9 * 4) <
        (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - *(longlong *)(DAT_1407bb780 + 0x48) >> 5))
    {
      ppuVar8 = (undefined **)
                (*(longlong *)(DAT_1407bb780 + 0x48) +
                (longlong)*(int *)(&DAT_14060bc20 + (longlong)(int)uVar9 * 4) * 0x20);
      if ((undefined *)0x7 < ppuVar8[3]) {
        ppuVar8 = (undefined **)*ppuVar8;
      }
    }
    else {
      ppuVar8 = &PTR_140610690;
    }
    local_108 = (undefined8 ****)0x0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    uVar10 = 0xffffffffffffffff;
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (*(short *)((longlong)ppuVar8 + lVar11 * 2) != 0);
    FUN_140054cf0(&local_108);
    cVar4 = FUN_140004470(&DAT_140784700);
    if (cVar4 == '\0') {
      FUN_140004470(&DAT_140784700);
    }
    lVar11 = *(longlong *)(DAT_140790e60 + 0x238);
    cVar4 = (**(code **)**(undefined8 **)(lVar11 + 0xb8))();
    plVar7 = DAT_1407915a8;
    if (cVar4 != '\0') {
      plVar7 = *(longlong **)(lVar11 + 0xb8);
    }
    lVar11 = (**(code **)(*plVar7 + 0xd8))();
    FUN_1400547f0(local_c8,0x40,L"<font color=\"#%08x\">",*(undefined4 *)(lVar11 + 0x474));
    do {
      uVar10 = uVar10 + 1;
    } while (local_c8[uVar10] != 0);
    if (0x7ffffffffffffffeU - local_f8 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_140054e40();
    }
    FUN_140048da0(&local_e8);
    if (7 < uStack_f0) {
      if ((0xfff < uStack_f0 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)local_108[-1])))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
    uVar10 = uStack_d0;
    pppppuVar3 = (undefined8 *****)CONCAT62(uStack_e6,local_e8);
    uStack_100 = uStack_e0;
    local_f8 = local_d8;
    uStack_f0 = uStack_d0;
    local_d8 = 0;
    uStack_d0 = 7;
    local_e8 = 0;
    local_108 = pppppuVar3;
    FUN_140055150(&local_e8);
    pcVar2 = *(code **)(*(longlong *)(param_1 + 0x938) + 0x28);
    pppppuVar12 = &local_108;
    if (7 < uVar10) {
      pppppuVar12 = pppppuVar3;
    }
    uVar6 = FUN_140089d90(&local_e8,pppppuVar12);
    (*pcVar2)(param_1 + 0x938,uVar6);
    if (7 < uStack_f0) {
      if ((0xfff < uStack_f0 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)local_108[-1])))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
  }
  return;
}



// ===== FUN_1402c8d70 @ 0x1402c8d70 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1402c8d70(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  code *pcVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined1 auStack_278 [32];
  int local_258;
  int local_250;
  longlong *local_248 [2];
  longlong *local_238;
  undefined1 local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_1407502c0 ^ (ulonglong)auStack_278;
  local_238 = param_1;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_SettingsUIMenu::vftable;
  plVar8 = param_1 + 0x33;
  FUN_14027f6d0(plVar8);
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *plVar8 = (longlong)UIControl_CheckBox::vftable;
  plVar1 = param_1 + 0x55;
  local_248[0] = plVar1;
  FUN_14027f6d0(plVar1);
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  *plVar1 = (longlong)UIControl_CheckBox::vftable;
  plVar1 = param_1 + 0x77;
  local_248[0] = plVar1;
  FUN_14027f6d0(plVar1);
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined1 *)(param_1 + 0x92) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  *plVar1 = (longlong)UIControl_CheckBox::vftable;
  plVar1 = param_1 + 0x99;
  local_248[0] = plVar1;
  FUN_14027f6d0(plVar1);
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  *plVar1 = (longlong)UIControl_CheckBox::vftable;
  plVar1 = param_1 + 0xbb;
  local_248[0] = plVar1;
  FUN_14027f6d0(plVar1);
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5e4) = 0;
  *plVar1 = (longlong)UIControl_CheckBox::vftable;
  plVar1 = param_1 + 0xdd;
  local_248[0] = plVar1;
  FUN_14027f6d0(plVar1);
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6f4) = 0;
  *plVar1 = (longlong)UIControl_CheckBox::vftable;
  FUN_1402860b0(param_1 + 0xff);
  FUN_1402860b0(param_1 + 0x124);
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  *(bool *)(param_1 + 0x149) = *(longlong *)(DAT_140790e60 + 0x40) == 0;
  uVar4 = *(uint *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 0x54);
  ppuVar11 = &PTR_140610690;
  if (*DAT_1407bb780 == '\0') {
    pcVar7 = (code *)swi(3);
    plVar8 = (longlong *)(*pcVar7)();
    return plVar8;
  }
  lVar6 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar6 >> 5) < 0x6b9) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar6 + 0xd700);
    if (7 < *(ulonglong *)(lVar6 + 0xd718)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  uVar9 = FUN_140089d90(local_248,ppuVar10);
  FUN_140281d70(plVar8,uVar9,0,(byte)(uVar4 >> 7) & 1);
  uVar5 = *(undefined4 *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 0x54);
  if (*DAT_1407bb780 == '\0') {
    pcVar7 = (code *)swi(3);
    plVar8 = (longlong *)(*pcVar7)();
    return plVar8;
  }
  lVar6 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar6 >> 5) < 0x6ba) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar6 + 0xd720);
    if (7 < *(ulonglong *)(lVar6 + 0xd738)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  uVar9 = FUN_140089d90(local_248,ppuVar10);
  FUN_140281d70(param_1 + 0x55,uVar9,1,(byte)((uint)uVar5 >> 8) & 1);
  uVar4 = *(uint *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 0x54);
  if (*DAT_1407bb780 == '\0') {
    pcVar7 = (code *)swi(3);
    plVar8 = (longlong *)(*pcVar7)();
    return plVar8;
  }
  lVar6 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar6 >> 5) < 0x6bb) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar6 + 0xd740);
    if (7 < *(ulonglong *)(lVar6 + 0xd758)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  uVar9 = FUN_140089d90(local_248,ppuVar10);
  FUN_140281d70(param_1 + 0x77,uVar9,2,(byte)(uVar4 >> 10) & 1);
  uVar4 = *(uint *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 0x54);
  if (*DAT_1407bb780 == '\0') {
    pcVar7 = (code *)swi(3);
    plVar8 = (longlong *)(*pcVar7)();
    return plVar8;
  }
  lVar6 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar6 >> 5) < 0x6bc) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar6 + 0xd760);
    if (7 < *(ulonglong *)(lVar6 + 0xd778)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  uVar9 = FUN_140089d90(local_248,ppuVar10);
  FUN_140281d70(param_1 + 0x99,uVar9,3,(byte)(uVar4 >> 0xf) & 1);
  bVar2 = *(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 7);
  if (*DAT_1407bb780 == '\0') {
    pcVar7 = (code *)swi(3);
    plVar8 = (longlong *)(*pcVar7)();
    return plVar8;
  }
  lVar6 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar6 >> 5) < 0x746) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar6 + 0xe8a0);
    if (7 < *(ulonglong *)(lVar6 + 0xe8b8)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  uVar9 = FUN_140089d90(local_248,ppuVar10);
  FUN_140281d70(param_1 + 0xbb,uVar9,4,bVar2 & 1);
  uVar3 = *(undefined2 *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 6);
  if (*DAT_1407bb780 == '\0') {
    pcVar7 = (code *)swi(3);
    plVar8 = (longlong *)(*pcVar7)();
    return plVar8;
  }
  lVar6 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar6 >> 5) < 0x8c8) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar6 + 0x118e0);
    if (7 < *(ulonglong *)(lVar6 + 0x118f8)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  uVar9 = FUN_140089d90(local_248,ppuVar10);
  FUN_140281d70(param_1 + 0xdd,uVar9,5,(byte)((ushort)uVar3 >> 9) & 1);
  if (*DAT_1407bb780 == '\0') {
    pcVar7 = (code *)swi(3);
    plVar8 = (longlong *)(*pcVar7)();
    return plVar8;
  }
  lVar6 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar6 >> 5) < 0x647) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar6 + 0xc8c0);
    if (7 < *(ulonglong *)(lVar6 + 0xc8d8)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  local_258 = (*(uint *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 0x54) >> 0xb & 3) +
              1;
  FUN_1400547f0(local_228,0x100,L"%ls: %d",ppuVar10);
  uVar4 = *(uint *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 0x54);
  uVar9 = FUN_140089d90(local_248,local_228);
  local_250 = (uVar4 >> 0xb & 3) + 1;
  local_258 = 3;
  FUN_140286290(param_1 + 0xff,uVar9,6,1);
  if (*DAT_1407bb780 == '\0') {
    pcVar7 = (code *)swi(3);
    plVar8 = (longlong *)(*pcVar7)();
    return plVar8;
  }
  lVar6 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((0x647 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar6 >> 5)) &&
     (ppuVar11 = (undefined **)(lVar6 + 0xc8e0), 7 < *(ulonglong *)(lVar6 + 0xc8f8))) {
    ppuVar11 = (undefined **)*ppuVar11;
  }
  local_258 = (*(uint *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 0x54) >> 0xd & 3) +
              1;
  FUN_1400547f0(local_228,0x100,L"%ls: %d",ppuVar11);
  uVar4 = *(uint *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 0x54);
  uVar9 = FUN_140089d90(local_248,local_228);
  local_250 = (uVar4 >> 0xd & 3) + 1;
  local_258 = 3;
  FUN_140286290(param_1 + 0x124,uVar9,7,1);
  FUN_14026eda0(param_1);
  if ((*(longlong *)(DAT_140790e60 + 0x40) != 0) && (*(int *)((longlong)param_1 + 0x174) != 0)) {
    FUN_14026ec30(param_1,param_1 + 0xbb,1);
    FUN_14026ec30(param_1,param_1 + 0xdd,1);
  }
  return param_1;
}



// ===== FUN_1402c9930 @ 0x1402c9930 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402c9930(longlong param_1,double param_2,double param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined1 auStack_268 [32];
  int local_248;
  undefined1 local_238 [16];
  undefined1 local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_1407502c0 ^ (ulonglong)auStack_268;
  iVar4 = (int)param_3;
  local_248 = iVar4;
  if ((int)param_2 == 6) {
    FUN_140286420(param_1 + 0x7f8,iVar4);
    if (*DAT_1407bb780 == '\0') {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar3 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar3 >> 5) < 0x647) {
      ppuVar5 = &PTR_140610690;
    }
    else {
      ppuVar5 = (undefined **)(lVar3 + 0xc8c0);
      if (7 < *(ulonglong *)(lVar3 + 0xc8d8)) {
        ppuVar5 = (undefined **)*ppuVar5;
      }
    }
    FUN_1400547f0(local_228,0x100,L"%ls: %d",ppuVar5);
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0x7f8) + 0x28);
    uVar2 = FUN_140089d90(local_238,local_228);
    (*pcVar1)(param_1 + 0x7f8,uVar2,0,0);
    lVar3 = (longlong)*(int *)(param_1 + 0x174);
    if (iVar4 == (*(uint *)((&DAT_1407bb7b0)[lVar3] + 0x54) >> 0xb & 3) + 1) {
      return;
    }
    uVar2 = 0x1d;
  }
  else {
    if ((int)param_2 != 7) {
      return;
    }
    FUN_140286420(param_1 + 0x920,iVar4);
    if (*DAT_1407bb780 == '\0') {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar3 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar3 >> 5) < 0x648) {
      ppuVar5 = &PTR_140610690;
    }
    else {
      ppuVar5 = (undefined **)(lVar3 + 0xc8e0);
      if (7 < *(ulonglong *)(lVar3 + 0xc8f8)) {
        ppuVar5 = (undefined **)*ppuVar5;
      }
    }
    FUN_1400547f0(local_228,0x100,L"%ls: %d",ppuVar5);
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0x920) + 0x28);
    uVar2 = FUN_140089d90(local_238,local_228);
    (*pcVar1)(param_1 + 0x920,uVar2,0,0);
    lVar3 = (longlong)*(int *)(param_1 + 0x174);
    if (iVar4 == (*(uint *)((&DAT_1407bb7b0)[lVar3] + 0x54) >> 0xd & 3) + 1) {
      return;
    }
    uVar2 = 0x1e;
  }
  FUN_140033e40(&DAT_1407bb5d0,lVar3,uVar2,iVar4 + -1);
  FUN_14002fee0(&DAT_1407bb5d0,6,"UIController::UpdateSelectedItemPos not implemented\n");
  return;
}



// ===== FUN_1402c9b60 @ 0x1402c9b60 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402c9b60(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStackY_a8 [32];
  undefined8 *local_78;
  undefined8 *local_70;
  char *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStackY_a8;
  FUN_14026db10();
  uVar6 = (**(code **)*param_1)(param_1);
  local_78 = (undefined8 *)IggyPlayerRootPath(uVar6);
  puVar1 = param_1 + 0x225;
  local_58 = 0xd;
  uStack_50 = 0xf;
  local_68 = (char *)0x656d614e6e696b53;
  uStack_60 = 0x6574616c50;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_50) {
    if (0xfff < uStack_50 + 1) {
      if ((char *)0x1f < local_68 + (-8 - *(longlong *)(local_68 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x228] = 0;
  puVar2 = param_1 + 0x2a;
  plVar3 = (longlong *)param_1[0x2b];
  local_70 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_70);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x1c8;
  local_58 = 10;
  uStack_50 = 0xf;
  local_68 = (char *)0x6c7469546e696b53;
  uStack_60 = 0x3165;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < uStack_50) {
    if (0xfff < uStack_50 + 1) {
      if ((char *)0x1f < local_68 + (-8 - *(longlong *)(local_68 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x1cb] = puVar1;
  plVar3 = (longlong *)param_1[0x2b];
  local_70 = puVar7;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_70);
  }
  else {
    *plVar3 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x1e7;
  local_58 = 10;
  uStack_50 = 0xf;
  local_68 = (char *)0x6c7469546e696b53;
  uStack_60 = 0x3265;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < uStack_50) {
    if (0xfff < uStack_50 + 1) {
      if ((char *)0x1f < local_68 + (-8 - *(longlong *)(local_68 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x1ea] = puVar1;
  plVar3 = (longlong *)param_1[0x2b];
  local_70 = puVar7;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_70);
  }
  else {
    *plVar3 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x23c;
  local_58 = 0xd;
  uStack_50 = 0xf;
  local_68 = (char *)0x64657463656c6553;
  uStack_60 = 0x6c656e6150;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_50) {
    if (0xfff < uStack_50 + 1) {
      if ((char *)0x1f < local_68 + (-8 - *(longlong *)(local_68 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x23f] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_70 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_70);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x206;
  pcVar4 = *(code **)*puVar7;
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (char *)FUN_140054e60(0x20);
  local_58 = 0x12;
  uStack_50 = 0x1f;
  builtin_strncpy(local_68,"SelectedPanelLabel",0x13);
  (*pcVar4)(puVar7,param_1);
  if (0xf < uStack_50) {
    if (0xfff < uStack_50 + 1) {
      if ((char *)0x1f < local_68 + (-8 - *(longlong *)(local_68 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x209] = puVar1;
  plVar3 = (longlong *)param_1[0x2b];
  local_70 = puVar7;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_70);
  }
  else {
    *plVar3 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x26a;
  uStack_60 = 0;
  local_58 = 5;
  uStack_50 = 0xf;
  local_68 = (char *)0x72656d6954;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_50) {
    if (0xfff < uStack_50 + 1) {
      if ((char *)0x1f < local_68 + (-8 - *(longlong *)(local_68 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x26d] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_78 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_78);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x253;
  local_58 = 0xe;
  uStack_50 = 0xf;
  local_68 = (char *)0x7261684379676749;
  uStack_60 = 0x737265746361;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_50) {
    if (0xfff < uStack_50 + 1) {
      if ((char *)0x1f < local_68 + (-8 - *(longlong *)(local_68 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x256] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_78 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_78);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x33;
  local_58 = 0xf;
  uStack_50 = 0xf;
  local_68 = (char *)0x6168435f79676769;
  uStack_60 = 0x30726574636172;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < uStack_50) {
    if (0xfff < uStack_50 + 1) {
      if ((char *)0x1f < local_68 + (-8 - *(longlong *)(local_68 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x36] = puVar1;
  plVar3 = (longlong *)param_1[0x2b];
  local_78 = puVar7;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_78);
  }
  else {
    *plVar3 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x60;
  local_58 = 0xf;
  uStack_50 = 0xf;
  local_68 = (char *)0x6168435f79676769;
  uStack_60 = 0x31726574636172;
  (**(code **)param_1[0x60])(puVar7,param_1);
  if (0xf < uStack_50) {
    if (0xfff < uStack_50 + 1) {
      if ((char *)0x1f < local_68 + (-8 - *(longlong *)(local_68 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[99] = puVar1;
  puVar5 = (undefined8 *)param_1[0x2b];
  local_78 = puVar7;
  if (puVar5 == (undefined8 *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,puVar5,&local_78);
  }
  else {
    *puVar5 = puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x8d;
  local_58 = 0xf;
  uStack_50 = 0xf;
  local_68 = (char *)0x6168435f79676769;
  uStack_60 = 0x32726574636172;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < uStack_50) {
    if (0xfff < uStack_50 + 1) {
      if ((char *)0x1f < local_68 + (-8 - *(longlong *)(local_68 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x90] = puVar1;
  plVar3 = (longlong *)param_1[0x2b];
  local_78 = puVar7;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_78);
  }
  else {
    *plVar3 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0xba;
  local_58 = 0xf;
  uStack_50 = 0xf;
  local_68 = (char *)0x6168435f79676769;
  uStack_60 = 0x33726574636172;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < uStack_50) {
    if (0xfff < uStack_50 + 1) {
      if ((char *)0x1f < local_68 + (-8 - *(longlong *)(local_68 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xbd] = puVar1;
  plVar3 = (longlong *)param_1[0x2b];
  local_78 = puVar7;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_78);
  }
  else {
    *plVar3 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0xe7;
  local_58 = 0xf;
  uStack_50 = 0xf;
  local_68 = (char *)0x6168435f79676769;
  uStack_60 = 0x34726574636172;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < uStack_50) {
    if (0xfff < uStack_50 + 1) {
      if ((char *)0x1f < local_68 + (-8 - *(longlong *)(local_68 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xea] = puVar1;
  plVar3 = (longlong *)param_1[0x2b];
  local_78 = puVar7;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_78);
  }
  else {
    *plVar3 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x114;
  local_58 = 0xf;
  uStack_50 = 0xf;
  local_68 = (char *)0x6168435f79676769;
  uStack_60 = 0x35726574636172;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < uStack_50) {
    if (0xfff < uStack_50 + 1) {
      if ((char *)0x1f < local_68 + (-8 - *(longlong *)(local_68 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x117] = puVar1;
  plVar3 = (longlong *)param_1[0x2b];
  local_78 = puVar7;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_78);
  }
  else {
    *plVar3 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x141;
  local_58 = 0xf;
  uStack_50 = 0xf;
  local_68 = (char *)0x6168435f79676769;
  uStack_60 = 0x36726574636172;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < uStack_50) {
    if (0xfff < uStack_50 + 1) {
      if ((char *)0x1f < local_68 + (-8 - *(longlong *)(local_68 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x144] = puVar1;
  plVar3 = (longlong *)param_1[0x2b];
  local_78 = puVar7;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_78);
  }
  else {
    *plVar3 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x16e;
  local_58 = 0xf;
  uStack_50 = 0xf;
  local_68 = (char *)0x6168435f79676769;
  uStack_60 = 0x37726574636172;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < uStack_50) {
    if (0xfff < uStack_50 + 1) {
      if ((char *)0x1f < local_68 + (-8 - *(longlong *)(local_68 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x171] = puVar1;
  plVar3 = (longlong *)param_1[0x2b];
  local_78 = puVar7;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_78);
  }
  else {
    *plVar3 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x19b;
  local_58 = 0xf;
  uStack_50 = 0xf;
  local_68 = (char *)0x6168435f79676769;
  uStack_60 = 0x38726574636172;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < uStack_50) {
    if (0xfff < uStack_50 + 1) {
      if ((char *)0x1f < local_68 + (-8 - *(longlong *)(local_68 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x19e] = puVar1;
  plVar3 = (longlong *)param_1[0x2b];
  local_78 = puVar7;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_78);
  }
  else {
    *plVar3 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140054cf0(&local_68,L"SetPlayerCharacterSelected");
  uVar6 = FUN_14026eb50(param_1,&local_68);
  param_1[0x281] = uVar6;
  if (7 < uStack_50) {
    if (0xfff < uStack_50 * 2 + 2) {
      if ((char *)0x1f < local_68 + (-8 - *(longlong *)(local_68 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140054cf0(&local_68,L"SetCharacterLocked");
  uVar6 = FUN_14026eb50(param_1,&local_68);
  param_1[0x282] = uVar6;
  if (7 < uStack_50) {
    if (0xfff < uStack_50 * 2 + 2) {
      if ((char *)0x1f < local_68 + (-8 - *(longlong *)(local_68 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140054cf0(&local_68,L"SetLeftLabel");
  uVar6 = FUN_14026eb50(param_1,&local_68);
  param_1[0x283] = uVar6;
  if (7 < uStack_50) {
    if (0xfff < uStack_50 * 2 + 2) {
      if ((char *)0x1f < local_68 + (-8 - *(longlong *)(local_68 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140054cf0(&local_68,L"SetCenterLabel");
  uVar6 = FUN_14026eb50(param_1,&local_68);
  param_1[0x285] = uVar6;
  if (7 < uStack_50) {
    if (0xfff < uStack_50 * 2 + 2) {
      if ((char *)0x1f < local_68 + (-8 - *(longlong *)(local_68 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140054cf0(&local_68,L"SetRightLabel");
  uVar6 = FUN_14026eb50(param_1,&local_68);
  param_1[0x284] = uVar6;
  if (7 < uStack_50) {
    if (0xfff < uStack_50 * 2 + 2) {
      if ((char *)0x1f < local_68 + (-8 - *(longlong *)(local_68 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  return 1;
}



// ===== FUN_1402cac10 @ 0x1402cac10 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1402cac10(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  undefined **ppuVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong *plVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined1 auStackY_b8 [32];
  longlong *local_88 [2];
  longlong *local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong lStack_38;
  ulonglong local_30;
  ulonglong uVar13;
  
  local_30 = DAT_1407502c0 ^ (ulonglong)auStackY_b8;
  uVar11 = 0;
  local_78 = param_1;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_SkinSelectMenu::vftable;
  _eh_vector_constructor_iterator_(param_1 + 0x33,0x168,9,FUN_140284d60,FUN_1402cb4f0);
  plVar5 = param_1 + 0x1c8;
  local_88[0] = plVar5;
  FUN_14027f6d0(plVar5);
  param_1[0x1e4] = 0;
  param_1[0x1e5] = 0;
  *(undefined1 *)(param_1 + 0x1e3) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4c) = 0;
  *plVar5 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x1e6) = 1;
  plVar5 = param_1 + 0x1e7;
  local_88[0] = plVar5;
  FUN_14027f6d0(plVar5);
  param_1[0x203] = 0;
  param_1[0x204] = 0;
  *(undefined1 *)(param_1 + 0x202) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf44) = 0;
  *plVar5 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x205) = 1;
  plVar5 = param_1 + 0x206;
  FUN_14027f6d0(plVar5);
  param_1[0x222] = 0;
  param_1[0x223] = 0;
  *(undefined1 *)(param_1 + 0x221) = 0;
  *(undefined4 *)((longlong)param_1 + 0x103c) = 0;
  *plVar5 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x224) = 1;
  FUN_14027f6d0(param_1 + 0x225);
  FUN_14027f6d0(param_1 + 0x23c);
  FUN_14027f6d0(param_1 + 0x253);
  FUN_14027f6d0(param_1 + 0x26a);
  param_1[0x289] = 0;
  param_1[0x28a] = 0;
  param_1[0x28b] = 0;
  param_1[0x28c] = 7;
  *(undefined2 *)(param_1 + 0x289) = 0;
  param_1[0x28d] = 0;
  param_1[0x28e] = 0;
  param_1[0x28f] = 0;
  param_1[0x290] = 7;
  *(undefined2 *)(param_1 + 0x28d) = 0;
  param_1[0x291] = 0;
  param_1[0x292] = 0;
  param_1[0x293] = 0;
  param_1[0x294] = 7;
  *(undefined2 *)(param_1 + 0x291) = 0;
  param_1[0x299] = 0;
  param_1[0x29a] = 0;
  param_1[0x29b] = 0;
  param_1[0x29c] = 7;
  *(undefined2 *)(param_1 + 0x299) = 0;
  param_1[0x29d] = 0;
  param_1[0x29e] = 0;
  param_1[0x29f] = 0;
  param_1[0x2a0] = 7;
  *(undefined2 *)(param_1 + 0x29d) = 0;
  param_1[0x2a1] = 0;
  param_1[0x2a2] = 0;
  param_1[0x2a3] = 0;
  param_1[0x2a4] = 7;
  *(undefined2 *)(param_1 + 0x2a1) = 0;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  if (*DAT_1407bb780 == '\0') {
    pcVar1 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar1)();
    return plVar5;
  }
  lVar7 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar7 >> 5) < 0x65f) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar7 + 0xcbc0);
    if (7 < *(ulonglong *)(lVar7 + 0xcbd8)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  uVar6 = FUN_140089d90(local_88,ppuVar10);
  uVar6 = FUN_140283b10(plVar5,uVar6);
  *(undefined1 *)(param_1 + 0x298) = 0;
  *(undefined1 *)(param_1 + 0x297) = 0;
  param_1[0x286] = 0;
  param_1[0x287] = 0;
  uVar3 = FUN_140033790(uVar6,param_2);
  *(undefined4 *)(param_1 + 0x288) = uVar3;
  FUN_140040770(&local_50,*(undefined4 *)((&DAT_1407bb7b0)[param_2] + 0x4c));
  plVar5 = param_1 + 0x289;
  if (plVar5 != &local_50) {
    if (7 < (ulonglong)param_1[0x28c]) {
      lVar7 = *plVar5;
      lVar8 = lVar7;
      if ((0xfff < param_1[0x28c] * 2 + 2U) &&
         (lVar8 = *(longlong *)(lVar7 + -8), 0x1f < (lVar7 - lVar8) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000(lVar8);
    }
    *plVar5 = CONCAT62(local_50._2_6_,(undefined2)local_50);
    param_1[0x28a] = lStack_48;
    param_1[0x28b] = local_40;
    param_1[0x28c] = lStack_38;
    local_40 = 0;
    lStack_38 = 7;
    local_50._0_2_ = 0;
  }
  FUN_140055150(&local_50);
  FUN_1400549d0(param_1 + 0x28d,&PTR_140610690,0);
  FUN_1400549d0(param_1 + 0x291,&PTR_140610690,0);
  param_1[0x295] = 0;
  *(undefined2 *)(param_1 + 0x296) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14c1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14b4) = 1;
  *(undefined4 *)((longlong)param_1 + 0x14bc) = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2d5) = 1;
  *(undefined4 *)((longlong)param_1 + 700) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0x42340000;
  *(undefined1 *)((longlong)param_1 + 0x43d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0x2d;
  *(undefined1 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined4 *)(param_1 + 0xb5) = 0x42340000;
  *(undefined1 *)((longlong)param_1 + 0x5a5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58c) = 0x2d;
  *(undefined1 *)((longlong)param_1 + 0x5b4) = 0;
  *(undefined4 *)(param_1 + 0xe2) = 0x42340000;
  *(undefined1 *)((longlong)param_1 + 0x70d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6f4) = 0x2d;
  *(undefined1 *)((longlong)param_1 + 0x71c) = 0;
  *(undefined4 *)(param_1 + 0x10f) = 0x42340000;
  *(undefined1 *)((longlong)param_1 + 0x875) = 0;
  *(undefined4 *)((longlong)param_1 + 0x85c) = 0x2d;
  *(undefined1 *)((longlong)param_1 + 0x884) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0xc2340000;
  *(undefined1 *)((longlong)param_1 + 0x9dd) = 1;
  *(undefined4 *)((longlong)param_1 + 0x9c4) = 0xffffffd3;
  *(undefined1 *)((longlong)param_1 + 0x9ec) = 0;
  *(undefined4 *)(param_1 + 0x169) = 0xc2340000;
  *(undefined1 *)((longlong)param_1 + 0xb45) = 1;
  *(undefined4 *)((longlong)param_1 + 0xb2c) = 0xffffffd3;
  *(undefined1 *)((longlong)param_1 + 0xb54) = 0;
  *(undefined4 *)(param_1 + 0x196) = 0xc2340000;
  *(undefined1 *)((longlong)param_1 + 0xcad) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc94) = 0xffffffd3;
  *(undefined1 *)((longlong)param_1 + 0xcbc) = 0;
  *(undefined4 *)(param_1 + 0x1c3) = 0xc2340000;
  *(undefined1 *)((longlong)param_1 + 0xe15) = 1;
  *(undefined4 *)((longlong)param_1 + 0xdfc) = 0xffffffd3;
  *(undefined1 *)((longlong)param_1 + 0xe24) = 0;
  uVar6 = FUN_140089d90(local_70,&PTR_140610690);
  FUN_140283b10(param_1 + 0x1c8,uVar6);
  uVar6 = FUN_140089d90(local_60,&PTR_140610690);
  FUN_140283b10(param_1 + 0x1e7,uVar6);
  FUN_1400549d0(param_1 + 0x299,&PTR_140610690,0);
  FUN_1400549d0(param_1 + 0x29d,&PTR_140610690,0);
  uVar6 = FUN_1400549d0(param_1 + 0x2a1,&PTR_140610690,0);
  cVar2 = FUN_1400382a0(uVar6,*(undefined4 *)((longlong)param_1 + 0x174));
  if (cVar2 == '\0') {
    uVar6 = extraout_XMM0_Qa;
    if (*(char *)((longlong)param_1 + 0x1404) != '\0') {
      iVar4 = IggyValueSetBooleanRS(param_1 + 0x26e,param_1[0x27d],0,0);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
      }
      *(undefined1 *)((longlong)param_1 + 0x1404) = 0;
      uVar6 = extraout_XMM0_Qa_00;
    }
    plVar5 = DAT_1407bb5f0;
    uVar13 = uVar11;
    plVar14 = DAT_1407bb5f8;
    if (DAT_1407bb5f0 != DAT_1407bb5f8) {
      do {
        if ((*plVar5 != 0) &&
           (iVar4 = FUN_140059d20(*plVar5,0), uVar6 = extraout_XMM0_Qa_01, iVar4 != 0)) {
          uVar13 = (ulonglong)((int)uVar13 + 1);
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar14);
      if ((int)uVar13 != 0) {
        lVar7 = FUN_140057c30(&DAT_1407bb5f0,param_1 + 0x289);
        param_1[0x286] = lVar7;
        plVar14 = DAT_1407bb5f8;
        uVar6 = extraout_XMM0_Qa_02;
        uVar13 = uVar11;
        plVar5 = DAT_1407bb5f0;
        if (lVar7 != 0) {
          for (; iVar4 = 0, plVar5 != plVar14; plVar5 = plVar5 + 1) {
            lVar8 = *plVar5;
            iVar4 = FUN_140059d20(lVar8,0);
            uVar6 = extraout_XMM0_Qa_03;
            if (iVar4 != 0) {
              iVar4 = (int)uVar13;
              if (lVar8 == lVar7) break;
              uVar13 = (ulonglong)(iVar4 + 1);
            }
          }
          *(int *)(param_1 + 0x287) = iVar4 + 2;
        }
      }
    }
    FUN_140033aa0(uVar6,*(undefined4 *)((longlong)param_1 + 0x174));
    piVar9 = (int *)((&DAT_1407bb7b0)[*(int *)((longlong)param_1 + 0x174)] + 0x60);
    uVar13 = uVar11;
    do {
      uVar12 = (uint)uVar13;
      if (*piVar9 == -1) break;
      uVar12 = uVar12 + 1;
      uVar13 = (ulonglong)uVar12;
      uVar11 = uVar11 + 1;
      piVar9 = piVar9 + 1;
    } while ((longlong)uVar11 < 10);
    if (uVar12 != 0) {
      *(undefined4 *)(param_1 + 0x287) = 1;
    }
    FUN_1402ce570(param_1);
  }
  else {
    *(undefined1 *)(param_1 + 0x298) = 1;
    if (*(char *)((longlong)param_1 + 0x1404) != '\x01') {
      iVar4 = IggyValueSetBooleanRS(param_1 + 0x26e,param_1[0x27d],0,1);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
      }
      *(undefined1 *)((longlong)param_1 + 0x1404) = 1;
    }
    if (*(char *)((longlong)param_1 + 0x134c) != '\0') {
      iVar4 = IggyValueSetBooleanRS(param_1 + 599,param_1[0x266],0,0);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
      }
      *(undefined1 *)((longlong)param_1 + 0x134c) = 0;
    }
    if (*(char *)((longlong)param_1 + 0x11dc) != '\0') {
      iVar4 = IggyValueSetBooleanRS(param_1 + 0x229,param_1[0x238],0,0);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
      }
      *(undefined1 *)((longlong)param_1 + 0x11dc) = 0;
    }
    FUN_1402cf1e0(param_1,0);
    FUN_1402cf160(param_1,0);
  }
  return param_1;
}



// ===== FUN_1402cf560 @ 0x1402cf560 [ui] =====

void FUN_1402cf560(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  FUN_14002fee0(&DAT_1407bb5d0,4,"UIScene_SkinSelectMenu::HandleDLCInstalled\n");
  cVar1 = FUN_1400382a0();
  if (cVar1 == '\0') {
    FUN_14002fee0(&DAT_1407bb5d0,4,
                  "UIScene_SkinSelectMenu::HandleDLCInstalled - not doing a mount, so re-enable input\n"
                 );
    *(undefined1 *)(param_1 + 0x14c0) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x14c0) = 1;
  if (*(char *)(param_1 + 0x1404) != '\x01') {
    iVar2 = IggyValueSetBooleanRS(param_1 + 0x1370,*(undefined8 *)(param_1 + 0x13e8),0,1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)(param_1 + 0x1404) = 1;
  }
  if (*(char *)(param_1 + 0x134c) != '\0') {
    iVar2 = IggyValueSetBooleanRS(param_1 + 0x12b8,*(undefined8 *)(param_1 + 0x1330),0,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)(param_1 + 0x134c) = 0;
  }
  if (*(char *)(param_1 + 0x11dc) != '\0') {
    iVar2 = IggyValueSetBooleanRS(param_1 + 0x1148,*(undefined8 *)(param_1 + 0x11c0),0,0);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x11dc) = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
  }
  return;
}



// ===== FUN_1402cf6a0 @ 0x1402cf6a0 [ui] =====

void FUN_1402cf6a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  
  FUN_14002fee0(&DAT_1407bb5d0,4,"UIScene_SkinSelectMenu::HandleDLCMountingComplete\n");
  if (*(char *)(param_1 + 0x1404) != '\0') {
    iVar1 = IggyValueSetBooleanRS(param_1 + 0x1370,*(undefined8 *)(param_1 + 0x13e8),0,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)(param_1 + 0x1404) = 0;
  }
  if (*(char *)(param_1 + 0x134c) != '\x01') {
    iVar1 = IggyValueSetBooleanRS(param_1 + 0x12b8,*(undefined8 *)(param_1 + 0x1330),0,1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)(param_1 + 0x134c) = 1;
  }
  if (*(char *)(param_1 + 0x11dc) != '\x01') {
    iVar1 = IggyValueSetBooleanRS(param_1 + 0x1148,*(undefined8 *)(param_1 + 0x11c0),0,1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)(param_1 + 0x11dc) = 1;
  }
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0x1438) = 0;
  plVar6 = DAT_1407bb5f0;
  uVar7 = uVar5;
  plVar8 = DAT_1407bb5f8;
  if (DAT_1407bb5f0 != DAT_1407bb5f8) {
    do {
      if ((*plVar6 != 0) && (iVar1 = FUN_140059d20(*plVar6,0), iVar1 != 0)) {
        uVar7 = (ulonglong)((int)uVar7 + 1);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar8);
    if ((int)uVar7 != 0) {
      lVar2 = FUN_140057c30(&DAT_1407bb5f0,param_1 + 0x1448);
      *(longlong *)(param_1 + 0x1430) = lVar2;
      plVar8 = DAT_1407bb5f8;
      uVar7 = uVar5;
      plVar6 = DAT_1407bb5f0;
      if (lVar2 != 0) {
        for (; iVar1 = 0, plVar6 != plVar8; plVar6 = plVar6 + 1) {
          lVar9 = *plVar6;
          iVar1 = FUN_140059d20(lVar9,0);
          if (iVar1 != 0) {
            iVar1 = (int)uVar7;
            if (lVar9 == lVar2) break;
            uVar7 = (ulonglong)(iVar1 + 1);
          }
        }
        *(int *)(param_1 + 0x1438) = iVar1 + 2;
      }
    }
  }
  FUN_140033aa0();
  piVar3 = (int *)((&DAT_1407bb7b0)[*(int *)(param_1 + 0x174)] + 0x60);
  uVar7 = uVar5;
  do {
    uVar4 = (uint)uVar5;
    if (*piVar3 == -1) break;
    uVar4 = uVar4 + 1;
    uVar5 = (ulonglong)uVar4;
    uVar7 = uVar7 + 1;
    piVar3 = piVar3 + 1;
  } while ((longlong)uVar7 < 10);
  if (uVar4 != 0) {
    *(undefined4 *)(param_1 + 0x1438) = 1;
  }
  FUN_1402ce570(param_1);
  *(undefined1 *)(param_1 + 0x14c0) = 0;
  FUN_140057cc0(&DAT_1407bb5f0);
  return;
}



// ===== FUN_1402d1650 @ 0x1402d1650 [ui] =====

longlong * FUN_1402d1650(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined **ppuVar16;
  ulonglong uVar18;
  uint uVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  undefined4 uVar23;
  longlong lVar24;
  code *pcVar25;
  longlong *local_b8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong uVar17;
  
  FUN_14026d220(param_1,param_2,param_4);
  uVar18 = 0;
  iVar22 = 0;
  param_1[0x81a] = 0;
  param_1[0x81b] = 0;
  iVar21 = 0;
  *(undefined4 *)(param_1 + 0x818) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40c4) = 1;
  FUN_140595d50(param_1 + 0x34,0,0x3f20);
  *(undefined4 *)(param_1 + 0x819) = 0;
  param_1[0x81c] = 0;
  *(undefined4 *)(param_1 + 0x81d) = 1;
  *(undefined4 *)((longlong)param_1 + 0x40ec) = 2;
  param_1[0x821] = 0;
  *param_1 = (longlong)UIScene_CraftingMenu::vftable;
  param_1[0x33] = (longlong)UIScene_CraftingMenu::vftable;
  _eh_vector_constructor_iterator_
            (param_1 + 0x823,0x18,0x28,(_func_void_void_ptr *)&LAB_1402cfbb0,FUN_140045540);
  _eh_vector_constructor_iterator_
            (param_1 + 0x89b,0x18,3,(_func_void_void_ptr *)&LAB_1402cfbb0,FUN_140045540);
  _eh_vector_constructor_iterator_
            (param_1 + 0x8a4,0x18,9,(_func_void_void_ptr *)&LAB_1402cfbb0,FUN_140045540);
  param_1[0x8bf] = 0;
  param_1[0x8c0] = 0;
  *(undefined4 *)(param_1 + 0x8c1) = 0x1f;
  *(undefined1 *)((longlong)param_1 + 0x460c) = 1;
  _eh_vector_constructor_iterator_
            (param_1 + 0x8c2,0x18,4,(_func_void_void_ptr *)&LAB_1402cfbb0,FUN_140045540);
  FUN_14027f6d0(param_1 + 0x8d3);
  FUN_14027f6d0(param_1 + 0x8ea);
  FUN_14027f6d0(param_1 + 0x901);
  FUN_14027f6d0(param_1 + 0x918);
  plVar8 = param_1 + 0x92f;
  local_b8[0] = plVar8;
  FUN_14027f6d0(plVar8);
  param_1[0x94b] = 0;
  param_1[0x94c] = 0;
  *(undefined1 *)(param_1 + 0x94a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4984) = 0;
  *plVar8 = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x950) = 0xffffffff;
  plVar8 = param_1 + 0x951;
  local_b8[0] = plVar8;
  FUN_14027f6d0(plVar8);
  param_1[0x96d] = 0;
  param_1[0x96e] = 0;
  *(undefined1 *)(param_1 + 0x96c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4a94) = 0;
  *plVar8 = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x972) = 0xffffffff;
  _eh_vector_constructor_iterator_(param_1 + 0x973,0x110,2,FUN_1402867c0,FUN_140271e20);
  _eh_vector_constructor_iterator_(param_1 + 0x9b7,0x110,3,FUN_1402867c0,FUN_140271e20);
  plVar8 = param_1 + 0xa1d;
  local_b8[0] = plVar8;
  FUN_14027f6d0(plVar8);
  param_1[0xa39] = 0;
  param_1[0xa3a] = 0;
  *(undefined1 *)(param_1 + 0xa38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50f4) = 0;
  *plVar8 = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0xa3e) = 0xffffffff;
  plVar8 = param_1 + 0xa3f;
  local_b8[0] = plVar8;
  FUN_14027f6d0(plVar8);
  param_1[0xa5b] = 0;
  param_1[0xa5c] = 0;
  *(undefined1 *)(param_1 + 0xa5a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5204) = 0;
  *plVar8 = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0xa60) = 0xffffffff;
  _eh_vector_constructor_iterator_(param_1 + 0xa61,0x110,4,FUN_1402867c0,FUN_140271e20);
  plVar8 = param_1 + 0xae9;
  local_b8[0] = plVar8;
  FUN_14027f6d0(plVar8);
  param_1[0xb05] = 0;
  param_1[0xb06] = 0;
  *(undefined1 *)(param_1 + 0xb04) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5754) = 0;
  *plVar8 = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0xb0a) = 0xffffffff;
  plVar8 = param_1 + 0xb0b;
  local_b8[0] = plVar8;
  FUN_14027f6d0(plVar8);
  param_1[0xb27] = 0;
  param_1[0xb28] = 0;
  *(undefined1 *)(param_1 + 0xb26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5864) = 0;
  *plVar8 = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0xb2c) = 0xffffffff;
  plVar8 = param_1 + 0xb2d;
  pcVar25 = FUN_140271e20;
  _eh_vector_constructor_iterator_(plVar8,0xf8,4,FUN_140283ab0,FUN_140271e20);
  plVar5 = param_1 + 0xba9;
  local_b8[0] = plVar5;
  FUN_14027f6d0(plVar5);
  param_1[0xbc5] = 0;
  param_1[0xbc6] = 0;
  *(undefined1 *)(param_1 + 0xbc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5d54) = 0;
  *(undefined1 *)(param_1 + 0xbc7) = 1;
  *plVar5 = (longlong)UIControl_HTMLLabel::vftable;
  plVar5 = param_1 + 0xbcc;
  local_b8[0] = plVar5;
  FUN_14027f6d0(plVar5);
  param_1[0xbe8] = 0;
  param_1[0xbe9] = 0;
  *(undefined1 *)(param_1 + 0xbe7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5e6c) = 0;
  *plVar5 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0xbea) = 1;
  plVar5 = param_1 + 0xbeb;
  local_b8[0] = plVar5;
  FUN_14027f6d0(plVar5);
  param_1[0xc07] = 0;
  param_1[0xc08] = 0;
  *(undefined1 *)(param_1 + 0xc06) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5f64) = 0;
  *plVar5 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0xc09) = 1;
  plVar5 = param_1 + 0xc0a;
  local_b8[0] = plVar5;
  FUN_14027f6d0(plVar5);
  param_1[0xc26] = 0;
  param_1[0xc27] = 0;
  *(undefined1 *)(param_1 + 0xc25) = 0;
  *(undefined4 *)((longlong)param_1 + 0x605c) = 0;
  *plVar5 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0xc28) = 1;
  plVar5 = param_1 + 0xc29;
  local_b8[0] = plVar5;
  FUN_14027f6d0(plVar5);
  param_1[0xc45] = 0;
  param_1[0xc46] = 0;
  *(undefined1 *)(param_1 + 0xc44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6154) = 0;
  *plVar5 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0xc47) = 1;
  *(undefined1 *)(param_1 + 0x8d2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4684) = 0;
  *(undefined4 *)(param_1 + 0x8d0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x468c) = 0;
  *(undefined1 *)(param_1 + 0x822) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40cc) = *(undefined4 *)(param_3 + 0x10);
  FUN_140045590(param_1 + 0x81a,param_3);
  *(undefined1 *)((longlong)param_1 + 0x4111) = *(undefined1 *)(param_3 + 0x14);
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  lVar24 = 4;
  ppuVar16 = &PTR_140610690;
  do {
    uVar7 = FUN_140089d90(local_98,&PTR_140610690);
    FUN_140283b10(plVar8,uVar7);
    uVar10 = (undefined4)((ulonglong)pcVar25 >> 0x20);
    plVar8 = plVar8 + 0x1f;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  uVar7 = FUN_140089d90(local_b8,&PTR_140610690);
  FUN_140283b10(param_1 + 0xba9,uVar7);
  uVar7 = FUN_140089d90(local_88,&PTR_140610690);
  FUN_140283b10(param_1 + 0xbcc,uVar7);
  uVar7 = FUN_140089d90(local_78,&PTR_140610690);
  FUN_140283b10(param_1 + 0xbeb,uVar7);
  if (*DAT_1407bb780 == '\0') {
    pcVar25 = (code *)swi(3);
    plVar8 = (longlong *)(*pcVar25)();
    return plVar8;
  }
  lVar24 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar24 >> 5) < 0x615) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar24 + 0xc280);
    if (7 < *(ulonglong *)(lVar24 + 0xc298)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar7 = FUN_140089d90(local_68,ppuVar13);
  FUN_140283b10(param_1 + 0xc0a,uVar7);
  if (*DAT_1407bb780 != '\0') {
    lVar24 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((0x615 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar24 >> 5)) &&
       (ppuVar16 = (undefined **)(lVar24 + 0xc2a0), 7 < *(ulonglong *)(lVar24 + 0xc2b8))) {
      ppuVar16 = (undefined **)*ppuVar16;
    }
    uVar7 = FUN_140089d90(local_58,ppuVar16);
    FUN_140283b10(param_1 + 0xc29,uVar7);
    uVar23 = 10;
    if (*(int *)((longlong)param_1 + 0x40cc) == 0) {
      uVar10 = 0x24;
      uVar12 = 9;
      lVar24 = *(longlong *)(param_1[0x81a] + 0x360);
    }
    else {
      local_b8[0] = (longlong *)FUN_140558c80(0x120);
      uVar12 = *(undefined4 *)(param_3 + 0x24);
      uVar20 = *(undefined4 *)(param_3 + 0x20);
      uVar4 = *(undefined4 *)(param_3 + 0x1c);
      lVar24 = param_1[0x81a];
      uVar7 = *(undefined8 *)(lVar24 + 0x58);
      if (*(longlong *)(lVar24 + 0x348) != 0) {
        LOCK();
        piVar2 = (int *)(*(longlong *)(lVar24 + 0x348) + 8);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      local_a8 = *(undefined8 *)(lVar24 + 0x340);
      uStack_a0 = *(undefined8 *)(lVar24 + 0x348);
      lVar24 = FUN_14043d080(local_b8[0],&local_a8,uVar7,uVar4,CONCAT44(uVar10,uVar20),uVar12);
      *(longlong *)
       (*(longlong *)(DAT_140790e60 + ((longlong)*(int *)((longlong)param_1 + 0x174) + 7) * 0x10) +
       0x368) = lVar24;
      uVar10 = 0x25;
      uVar12 = 10;
    }
    uVar20 = 9;
    param_1[0x8ce] = lVar24;
    *(undefined4 *)(param_1 + 0x8cf) = uVar12;
    *(undefined4 *)((longlong)param_1 + 0x467c) = uVar10;
    uVar17 = uVar18;
    do {
      FUN_140286a50(param_1 + 0xae9,uVar17);
      uVar15 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar15;
    } while (uVar15 < 0x1b);
    uVar15 = 0x1b;
    do {
      FUN_140286a50(param_1 + 0xb0b,uVar15);
      uVar15 = uVar15 + 1;
    } while (uVar15 < 0x24);
    if (*(int *)((longlong)param_1 + 0x40cc) == 1) {
      uVar23 = 0xc;
      puVar9 = &DAT_140751e00;
      puVar11 = &DAT_140751e38;
    }
    else {
      puVar9 = &DAT_140751e20;
      puVar11 = &DAT_140751e58;
      uVar20 = 4;
    }
    *(undefined4 *)((longlong)param_1 + 0x4104) = uVar20;
    param_1[0x81e] = (longlong)puVar11;
    param_1[0x81f] = (longlong)puVar9;
    *(undefined4 *)(param_1 + 0x820) = uVar23;
    plVar8 = param_1 + 0x33;
    uVar7 = FUN_14008ffb0(puVar11,*(undefined4 *)
                                   (param_1[0x81e] + (longlong)(int)param_1[0x81c] * 4));
    pcVar25 = *(code **)(param_1[0xbcc] + 0x28);
    uVar7 = FUN_140089d90(local_48,uVar7);
    (*pcVar25)(param_1 + 0xbcc,uVar7,0,0);
    plVar5 = *(longlong **)
              (DAT_140790e60 + 0xb0 + (longlong)*(int *)((longlong)param_1 + 0x174) * 8);
    if (plVar5 != (longlong *)0x0) {
      lVar24 = (**(code **)(*plVar5 + 0xd8))(plVar5);
      *(undefined4 *)((longlong)param_1 + 0x4114) = *(undefined4 *)(lVar24 + 8);
      if (*(int *)((longlong)param_1 + 0x40cc) == 0) {
        uVar7 = (**(code **)(*plVar5 + 0xd8))();
        uVar14 = 2;
      }
      else {
        uVar7 = (**(code **)(*plVar5 + 0xd8))(plVar5);
        uVar14 = 3;
      }
      FUN_140083c10(uVar7,uVar14,param_1);
    }
    do {
      FUN_140286a50(param_1 + uVar18 * 0x22 + 0xa61,(int)uVar18 + 0x24);
      uVar15 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar15;
    } while (uVar15 < 4);
    FUN_140286a50(param_1 + 0xa3f,0x28);
    uVar19 = *(int *)((longlong)param_1 + 0x4104) + 0x29;
    uVar15 = 0x29;
    if (0x29 < uVar19) {
      do {
        FUN_140286a50(param_1 + 0xa1d,uVar15);
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar19);
    }
    FUN_140286a50(param_1 + 0x9b7,0x32);
    FUN_140286a50(param_1 + 0x9d9,0x33);
    FUN_140286a50(param_1 + 0x9fb,0x34);
    FUN_140286a50(param_1 + 0x973,0x33);
    FUN_140286a50(param_1 + 0x995,0x32);
    FUN_140286a50(param_1 + 0x951,0x32);
    uVar19 = (int)param_1[0x820] + 0x35;
    uVar15 = 0x35;
    if (0x35 < uVar19) {
      do {
        FUN_140286a50(param_1 + 0x92f,uVar15);
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar19);
    }
    FUN_140091620(plVar8);
    *(int *)((longlong)param_1 + 0x40e4) =
         *(int *)((longlong)(int)param_1[0x818] * 0x194 + 0x1a0 + (longlong)param_1) + -1;
    *(undefined4 *)(param_1 + 0x81d) = 0;
    *(undefined4 *)((longlong)param_1 + 0x40ec) = 1;
    FUN_140091fd0(plVar8);
    FUN_140091d40(plVar8);
    plVar5 = *(longlong **)(param_3 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar24 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar24 == 1) {
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
    thunk_FUN_1401fe000(param_3,0x28);
    iVar3 = *(int *)((longlong)param_1 + 0x174);
    if (((DAT_1407bb76c == '\0') || (iVar3 < 0)) || (iVar6 = iVar3 + 1, iVar3 == 0xff)) {
      iVar6 = iVar21;
    }
    if (*(longlong *)((&DAT_1407bda58)[iVar6] + 0x48) != 0) {
      *(undefined1 *)
       ((longlong)iVar3 * 0x15 + 0x2c8 + *(longlong *)((&DAT_1407bda58)[iVar6] + 0x48)) = 1;
    }
    iVar3 = *(int *)((longlong)param_1 + 0x174);
    if (((DAT_1407bb76c == '\0') || (iVar3 < 0)) || (iVar6 = iVar3 + 1, iVar3 == 0xff)) {
      iVar6 = iVar21;
    }
    if (*(longlong *)((&DAT_1407bda58)[iVar6] + 0x48) != 0) {
      *(undefined1 *)
       ((longlong)iVar3 * 0x15 + 0x2dc + *(longlong *)((&DAT_1407bda58)[iVar6] + 0x48)) = 1;
    }
    iVar3 = *(int *)((longlong)param_1 + 0x174);
    if (((DAT_1407bb76c == '\0') || (iVar3 < 0)) || (iVar6 = iVar3 + 1, iVar3 == 0xff)) {
      iVar6 = iVar21;
    }
    if (*(longlong *)((&DAT_1407bda58)[iVar6] + 0x48) != 0) {
      *(undefined1 *)
       ((longlong)iVar3 * 0x15 + 0x2d3 + *(longlong *)((&DAT_1407bda58)[iVar6] + 0x48)) = 1;
    }
    iVar3 = *(int *)((longlong)param_1 + 0x174);
    if (((DAT_1407bb76c == '\0') || (iVar3 < 0)) || (iVar6 = iVar3 + 1, iVar3 == 0xff)) {
      iVar6 = iVar21;
    }
    if (*(longlong *)((&DAT_1407bda58)[iVar6] + 0x48) != 0) {
      *(undefined1 *)
       ((longlong)iVar3 * 0x15 + 0x2d2 + *(longlong *)((&DAT_1407bda58)[iVar6] + 0x48)) = 1;
    }
    iVar3 = *(int *)((longlong)param_1 + 0x174);
    if (((DAT_1407bb76c == '\0') || (iVar3 < 0)) || (iVar6 = iVar3 + 1, iVar3 == 0xff)) {
      iVar6 = iVar21;
    }
    if (*(longlong *)((&DAT_1407bda58)[iVar6] + 0x48) != 0) {
      *(undefined1 *)
       ((longlong)iVar3 * 0x15 + 0x2cf + *(longlong *)((&DAT_1407bda58)[iVar6] + 0x48)) = 1;
    }
    iVar3 = *(int *)((longlong)param_1 + 0x174);
    if (((DAT_1407bb76c == '\0') || (iVar3 < 0)) || (iVar6 = iVar3 + 1, iVar3 == 0xff)) {
      iVar6 = iVar21;
    }
    if (*(longlong *)((&DAT_1407bda58)[iVar6] + 0x48) != 0) {
      *(undefined1 *)
       ((longlong)iVar3 * 0x15 + 0x2ce + *(longlong *)((&DAT_1407bda58)[iVar6] + 0x48)) = 1;
    }
    iVar3 = *(int *)((longlong)param_1 + 0x174);
    if (((DAT_1407bb76c == '\0') || (iVar3 < 0)) || (iVar6 = iVar3 + 1, iVar3 == 0xff)) {
      iVar6 = iVar21;
    }
    if (*(longlong *)((&DAT_1407bda58)[iVar6] + 0x48) != 0) {
      *(undefined1 *)
       ((longlong)iVar3 * 0x15 + 0x2cc + *(longlong *)((&DAT_1407bda58)[iVar6] + 0x48)) = 1;
    }
    iVar21 = *(int *)((longlong)param_1 + 0x174);
    if (((DAT_1407bb76c != '\0') && (-1 < iVar21)) && (iVar21 != 0xff)) {
      iVar22 = iVar21 + 1;
    }
    if (*(longlong *)((&DAT_1407bda58)[iVar22] + 0x48) != 0) {
      *(undefined1 *)
       ((longlong)iVar21 * 0x15 + 0x2cd + *(longlong *)((&DAT_1407bda58)[iVar22] + 0x48)) = 1;
    }
    FUN_140092dd0(plVar8);
    return param_1;
  }
  pcVar25 = (code *)swi(3);
  plVar8 = (longlong *)(*pcVar25)();
  return plVar8;
}



// ===== FUN_1402d4430 @ 0x1402d4430 [ui] =====

longlong * FUN_1402d4430(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 local_38 [16];
  
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_DeathMenu::vftable;
  plVar3 = param_1 + 0x34;
  FUN_14027f6d0(plVar3);
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *plVar3 = (longlong)UIControl_Button::vftable;
  FUN_14027f6d0(param_1 + 0x53);
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  param_1[0x53] = (longlong)UIControl_Button::vftable;
  FUN_14027f6d0(param_1 + 0x72);
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0;
  param_1[0x72] = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x90) = 1;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  ppuVar6 = &PTR_140610690;
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar3 = (longlong *)(*pcVar2)();
    return plVar3;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x6f6) {
    ppuVar5 = &PTR_140610690;
  }
  else {
    ppuVar5 = (undefined **)(lVar1 + 0xdea0);
    if (7 < *(ulonglong *)(lVar1 + 0xdeb8)) {
      ppuVar5 = (undefined **)*ppuVar5;
    }
  }
  uVar4 = FUN_140089d90(local_38,ppuVar5);
  FUN_140280c40(plVar3,uVar4,0);
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar3 = (longlong *)(*pcVar2)();
    return plVar3;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x5a0) {
    ppuVar5 = &PTR_140610690;
  }
  else {
    ppuVar5 = (undefined **)(lVar1 + 0xb3e0);
    if (7 < *(ulonglong *)(lVar1 + 0xb3f8)) {
      ppuVar5 = (undefined **)*ppuVar5;
    }
  }
  uVar4 = FUN_140089d90(local_38,ppuVar5);
  FUN_140280c40(param_1 + 0x53,uVar4,1);
  pcVar2 = *(code **)(param_1[0x72] + 0x28);
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar3 = (longlong *)(*pcVar2)();
    return plVar3;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((0x6f4 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5)) &&
     (ppuVar6 = (undefined **)(lVar1 + 0xde80), 7 < *(ulonglong *)(lVar1 + 0xde98))) {
    ppuVar6 = (undefined **)*ppuVar6;
  }
  uVar4 = FUN_140089d90(local_38,ppuVar6);
  (*pcVar2)(param_1 + 0x72,uVar4,0,0);
  *(undefined1 *)(param_1 + 0x33) = 0;
  if ((DAT_140790e60 != 0) &&
     (plVar3 = *(longlong **)(DAT_140790e60 + 0xb0 + (longlong)param_2 * 8),
     plVar3 != (longlong *)0x0)) {
    uVar4 = (**(code **)(*plVar3 + 0xd8))();
    FUN_140083050(uVar4,0);
  }
  return param_1;
}



// ===== FUN_1402d4cc0 @ 0x1402d4cc0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1402d4cc0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined **ppuVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStackY_e8 [32];
  int local_b4;
  longlong *local_b0;
  longlong local_a8 [3];
  undefined8 ****local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulonglong uStack_78;
  undefined8 ****local_70;
  undefined8 ***pppuStack_68;
  undefined8 ***local_60;
  undefined8 ***pppuStack_58;
  longlong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1407502c0 ^ (ulonglong)auStackY_e8;
  local_b0 = param_1;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_EndPoem::vftable;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 7;
  *(undefined2 *)(param_1 + 0x33) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 7;
  *(undefined2 *)(param_1 + 0x37) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  if (*DAT_1407bb780 == '\0') {
    pcVar1 = (code *)swi(3);
    plVar2 = (longlong *)(*pcVar1)();
    return plVar2;
  }
  lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5) < 0x6da) {
    ppuVar9 = &PTR_140610690;
  }
  else {
    ppuVar9 = (undefined **)(lVar13 + 0xdb20);
    if (7 < *(ulonglong *)(lVar13 + 0xdb38)) {
      ppuVar9 = (undefined **)*ppuVar9;
    }
  }
  lVar13 = -1;
  do {
    lVar13 = lVar13 + 1;
  } while (*(short *)((longlong)ppuVar9 + lVar13 * 2) != 0);
  FUN_140048d20(param_1 + 0x33);
  if (*DAT_1407bb780 == '\0') {
    pcVar1 = (code *)swi(3);
    plVar2 = (longlong *)(*pcVar1)();
    return plVar2;
  }
  lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5) < 0x6db) {
    ppuVar9 = &PTR_140610690;
  }
  else {
    ppuVar9 = (undefined **)(lVar13 + 0xdb40);
    if (7 < *(ulonglong *)(lVar13 + 0xdb58)) {
      ppuVar9 = (undefined **)*ppuVar9;
    }
  }
  lVar13 = -1;
  do {
    lVar13 = lVar13 + 1;
  } while (*(short *)((longlong)ppuVar9 + lVar13 * 2) != 0);
  FUN_140048d20(param_1 + 0x33);
  if (*DAT_1407bb780 == '\0') {
    pcVar1 = (code *)swi(3);
    plVar2 = (longlong *)(*pcVar1)();
    return plVar2;
  }
  lVar13 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar13 >> 5) < 0x6dc) {
    ppuVar9 = &PTR_140610690;
  }
  else {
    ppuVar9 = (undefined **)(lVar13 + 0xdb60);
    if (7 < *(ulonglong *)(lVar13 + 0xdb78)) {
      ppuVar9 = (undefined **)*ppuVar9;
    }
  }
  lVar13 = -1;
  do {
    lVar13 = lVar13 + 1;
  } while (*(short *)((longlong)ppuVar9 + lVar13 * 2) != 0);
  plVar2 = param_1 + 0x33;
  FUN_140048d20(plVar2);
  FUN_140048d20(plVar2,&DAT_140614cc0,1);
  uVar3 = FUN_140039b00(&DAT_1407bb5d0,&local_90);
  FUN_1400546d0(plVar2,uVar3);
  FUN_140055150(&local_90);
  lVar13 = DAT_140790e60;
  local_70 = (undefined8 *****)0x0;
  pppuStack_68 = (undefined8 ****)0x0;
  local_60 = (undefined8 ****)0x0;
  pppuStack_58 = (undefined8 ****)0x0;
  FUN_140054cf0(&local_70,&PTR_140610690);
  plVar6 = *(longlong **)(lVar13 + ((ulonglong)DAT_1407bd9a8 + 7) * 0x10);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar13 + 0x70);
    uVar3 = (**(code **)(*plVar6 + 0x318))(plVar6,&local_50);
    pppppuVar4 = (undefined8 *****)FUN_1403166b0(&local_90,uVar3);
    if (&local_70 != pppppuVar4) {
      if ((undefined8 ****)0x7 < pppuStack_58) {
        pppppuVar5 = (undefined8 *****)local_70;
        if ((0xfff < (longlong)pppuStack_58 * 2 + 2U) &&
           (pppppuVar5 = (undefined8 *****)local_70[-1],
           0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)pppppuVar5)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        thunk_FUN_1401fe000(pppppuVar5);
      }
      local_70 = *pppppuVar4;
      pppuStack_68 = pppppuVar4[1];
      local_60 = pppppuVar4[2];
      pppuStack_58 = pppppuVar4[3];
      pppppuVar4[2] = (undefined8 ****)0x0;
      pppppuVar4[3] = (undefined8 ****)0x7;
      *(undefined2 *)pppppuVar4 = 0;
    }
    FUN_140055150(&local_90);
  }
  else {
    uVar3 = (**(code **)(*plVar6 + 0x318))();
    pppppuVar4 = (undefined8 *****)FUN_1403166b0(&local_90,uVar3);
    if (&local_70 != pppppuVar4) {
      if ((undefined8 ****)0x7 < pppuStack_58) {
        pppppuVar5 = (undefined8 *****)local_70;
        if ((0xfff < (longlong)pppuStack_58 * 2 + 2U) &&
           (pppppuVar5 = (undefined8 *****)local_70[-1],
           0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)pppppuVar5)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        thunk_FUN_1401fe000(pppppuVar5);
      }
      local_70 = *pppppuVar4;
      pppuStack_68 = pppppuVar4[1];
      local_60 = pppppuVar4[2];
      pppuStack_58 = pppppuVar4[3];
      pppppuVar4[2] = (undefined8 ****)0x0;
      pppppuVar4[3] = (undefined8 ****)0x7;
      *(undefined2 *)pppppuVar4 = 0;
    }
    FUN_140055150(&local_90);
  }
  FUN_140055150(&local_50);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_140054cf0(&local_50,L"{*PLAYER*}",10);
  FUN_140055000(&local_90,plVar2);
  while( true ) {
    pppppuVar4 = &local_90;
    if (7 < uStack_78) {
      pppppuVar4 = (undefined8 *****)local_90;
    }
    lVar13 = FUN_1400a4750(pppppuVar4,local_80);
    if (lVar13 == -1) break;
    pppppuVar4 = &local_70;
    if ((undefined8 ****)0x7 < pppuStack_58) {
      pppppuVar4 = (undefined8 *****)local_70;
    }
    FUN_1400a47c0(&local_90,lVar13,local_40,pppppuVar4);
  }
  FUN_1400546d0(plVar2,&local_90);
  FUN_140055150(&local_90);
  if (7 < local_38) {
    if ((0xfff < local_38 * 2 + 2) && (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  uVar11 = 0x5de9711be;
  plVar6 = plVar2;
  if (7 < (ulonglong)param_1[0x36]) {
    plVar6 = (longlong *)*plVar2;
  }
  for (lVar13 = FUN_1400a4750(plVar6,param_1[0x35],0); lVar13 != -1;
      lVar13 = FUN_1400a4750(plVar6,param_1[0x35],lVar13 + 1)) {
    uVar11 = uVar11 * 0x5deece66d + 0xb & 0xffffffffffff;
    local_b4 = (uint)(uVar11 >> 0x2e) + 3;
    FUN_140083f10(param_1 + 0x3b,&local_b4);
    plVar6 = plVar2;
    if (7 < (ulonglong)param_1[0x36]) {
      plVar6 = (longlong *)*plVar2;
    }
  }
  uVar8 = 0;
  FUN_1402d59d0(param_1);
  plVar2 = param_1 + 0x3f;
  uVar11 = uVar8;
  if (plVar2 != local_a8) {
    FUN_140048c80(plVar2);
    *plVar2 = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
  }
  do {
    local_90 = (undefined8 ****)0x0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    uVar10 = (ulonglong)(int)uVar11;
    if ((ulonglong)param_1[0x39] < uVar10) goto LAB_1402d5496;
    iVar12 = (int)uVar8;
    uVar11 = (ulonglong)(iVar12 - (int)uVar11);
    uVar8 = param_1[0x39] - uVar10;
    if (uVar8 < uVar11) {
      uVar11 = uVar8;
    }
    plVar6 = param_1 + 0x37;
    if (7 < (ulonglong)param_1[0x3a]) {
      plVar6 = (longlong *)param_1[0x37];
    }
    FUN_140054cf0(&local_90,(longlong)plVar6 + uVar10 * 2,uVar11);
    FUN_140047fd0(plVar2,&local_90);
    FUN_140055150(&local_90);
    uVar11 = (ulonglong)iVar12;
    uVar8 = param_1[0x39];
    plVar6 = param_1 + 0x37;
    if (7 < (ulonglong)param_1[0x3a]) {
      plVar6 = (longlong *)param_1[0x37];
    }
    if (((uVar8 < 0xc) || (uVar8 - 0xc < (ulonglong)(longlong)(iVar12 + 0xc))) ||
       (lVar13 = (longlong)plVar6 + uVar8 * 2,
       lVar7 = thunk_FUN_140556fb0((longlong)plVar6 + (longlong)(iVar12 + 0xc) * 2,lVar13,
                                   L"<br /><br />"), lVar7 == lVar13)) {
      uVar8 = 0xffffffffffffffff;
    }
    else {
      uVar8 = lVar7 - (longlong)plVar6 >> 1;
    }
  } while ((int)uVar8 != -1);
  plVar2 = param_1 + 0x37;
  local_90 = (undefined8 ****)0x0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  if (uVar11 <= (ulonglong)param_1[0x39]) {
    if (7 < (ulonglong)param_1[0x3a]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_140054cf0(&local_90,(longlong)plVar2 + uVar11 * 2);
    FUN_140047fd0(param_1 + 0x3f,&local_90);
    if (7 < uStack_78) {
      if ((0xfff < uStack_78 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)local_90[-1])))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
    *(undefined4 *)((longlong)param_1 + 500) = 0;
    FUN_140055150(&local_70);
    return param_1;
  }
LAB_1402d5496:
  uStack_78 = 0;
  local_80 = 0;
  uStack_88 = 0;
  local_90 = (undefined8 ****)0x0;
                    /* WARNING: Subroutine does not return */
  FUN_140051220();
}



// ===== FUN_1402d59d0 @ 0x1402d59d0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d59d0(longlong param_1)

{
  short sVar1;
  uint uVar2;
  ulonglong *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *****pppppuVar8;
  ulonglong uVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  uint *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined1 auStack_168 [32];
  undefined8 ****local_148;
  longlong local_138;
  uint *local_130;
  longlong *local_128;
  longlong local_120;
  undefined8 ****local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  ulonglong local_100;
  undefined8 ****local_f8;
  undefined8 uStack_f0;
  undefined8 ****local_e8;
  ulonglong local_e0;
  undefined8 ****local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
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
  
  lVar6 = DAT_140790e60;
  local_38 = DAT_1407502c0 ^ (ulonglong)auStack_168;
  plVar10 = (longlong *)(param_1 + 0x198);
  plVar15 = (longlong *)(param_1 + 0x1b8);
  local_128 = plVar15;
  local_120 = param_1;
  if (plVar15 != plVar10) {
    if (7 < *(ulonglong *)(param_1 + 0x1b0)) {
      plVar10 = (longlong *)*plVar10;
    }
    FUN_1400549d0(plVar15,plVar10,*(undefined8 *)(param_1 + 0x1a8));
  }
  local_d8 = (undefined8 *****)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_140054cf0(&local_d8,&PTR_140610690,0);
  puVar3 = *(ulonglong **)(*(longlong *)(lVar6 + 0x1b0) + 0x10);
  local_f8 = (undefined8 *****)0x0;
  uStack_f0 = 0;
  local_e8 = (undefined8 *****)0x0;
  local_e0 = 0;
  FUN_140054cf0(&local_f8,L"{*NOISE*}",9);
  puVar12 = *(uint **)(param_1 + 0x1d8);
  pppppuVar8 = &local_f8;
  if (7 < local_e0) {
    pppppuVar8 = (undefined8 *****)local_f8;
  }
  plVar10 = plVar15;
  if (7 < *(ulonglong *)(param_1 + 0x1d0)) {
    plVar10 = (longlong *)*plVar15;
  }
  local_148 = local_e8;
  lVar6 = FUN_1400a4750(plVar10,*(undefined8 *)(param_1 + 0x1c8),0,pppppuVar8);
  do {
    local_138 = lVar6;
    if ((lVar6 == -1) || (puVar12 == *(uint **)(param_1 + 0x1e0))) {
      FUN_140055150(&local_f8);
      FUN_140055150(&local_d8);
      return;
    }
    uVar2 = *puVar12;
    local_130 = puVar12 + 1;
    FUN_1400549d0(&local_d8,&PTR_140610690,0);
    puVar12 = puVar12 + 1;
    if (0 < (int)uVar2) {
      uVar14 = (ulonglong)uVar2;
      do {
        if (DAT_1407bc4b4 == 1) {
          iVar5 = FUN_140319290(puVar3,(undefined4)DAT_14076efb0);
          lVar6 = (longlong)iVar5;
          puVar7 = &DAT_14076efa0;
          if (7 < DAT_14076efb8) {
            puVar7 = DAT_14076efa0;
          }
        }
        else {
          if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x10) < DAT_1407c1ce0) &&
             (FUN_1405593c0(&DAT_1407c1ce0), DAT_1407c1ce0 == -1)) {
            DAT_1407c1ce8 = (undefined8 *)0x0;
            uRam00000001407c1cf0 = 0;
            _DAT_1407c1cf8 = 0;
            DAT_1407c1d00 = 0;
            FUN_140054cf0(&DAT_1407c1ce8,L"!\"#$%&\'()*+,-./0123456789:;<=>?@[\\]^_\'|}~",0x29);
            atexit((_func_5014 *)&LAB_1405eb560);
            _Init_thread_footer(&DAT_1407c1ce0);
          }
          iVar5 = FUN_140319290(puVar3,_DAT_1407c1cf8 & 0xffffffff);
          lVar6 = (longlong)iVar5;
          puVar7 = &DAT_1407c1ce8;
          if (7 < DAT_1407c1d00) {
            puVar7 = DAT_1407c1ce8;
          }
        }
        sVar1 = *(short *)((longlong)puVar7 + lVar6 * 2);
        local_118 = (undefined8 *****)0x0;
        uStack_110 = 0;
        local_108 = 0;
        local_100 = 0;
        FUN_140054cf0(&local_118,&PTR_140610690,0);
        uVar9 = local_108;
        if (local_108 < local_100) {
          pppppuVar8 = &local_118;
          if (7 < local_100) {
            pppppuVar8 = (undefined8 *****)local_118;
          }
          lVar6 = local_108 * 2;
          local_108 = local_108 + 1;
          *(short *)((longlong)pppppuVar8 + lVar6) = sVar1;
          *(undefined2 *)((longlong)pppppuVar8 + uVar9 * 2 + 2) = 0;
        }
        else {
          FUN_140051c00(&local_118);
        }
        if (sVar1 == 0x3c) {
          uVar13 = 4;
          pwVar11 = L"&lt;";
LAB_1402d5ce9:
          FUN_1400549d0(&local_118,pwVar11,uVar13);
        }
        else {
          if (sVar1 == 0x3e) {
            uVar13 = 4;
            pwVar11 = L"&gt;";
            goto LAB_1402d5ce9;
          }
          if (sVar1 == 0x22) {
            uVar13 = 6;
            pwVar11 = L"&quot;";
            goto LAB_1402d5ce9;
          }
          if (sVar1 == 0x26) {
            uVar13 = 5;
            pwVar11 = L"&amp;";
            goto LAB_1402d5ce9;
          }
          if (sVar1 == 0x5c) {
            uVar13 = 2;
            pwVar11 = L"\\\\";
            goto LAB_1402d5ce9;
          }
          if (sVar1 == 0x7b) {
            uVar13 = 1;
            pwVar11 = L"}";
            goto LAB_1402d5ce9;
          }
        }
        uVar9 = *puVar3 * 0x5deece66d + 0xb & 0xffffffffffff;
        *puVar3 = uVar9;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
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
        pppppuVar8 = &local_118;
        if (7 < local_100) {
          pppppuVar8 = (undefined8 *****)local_118;
        }
        lVar6 = *(longlong *)(DAT_140790e60 + 0x238);
        cVar4 = (**(code **)**(undefined8 **)(lVar6 + 0xb8))();
        plVar10 = DAT_1407915a8;
        if (cVar4 != '\0') {
          plVar10 = *(longlong **)(lVar6 + 0xb8);
        }
        lVar6 = (**(code **)(*plVar10 + 0xd8))();
        local_148 = pppppuVar8;
        FUN_1400547f0(&local_b8,0x40,L"<font color=\"#%08x\" shadowcolor=\"#80000000\">%ls</font>",
                      *(undefined4 *)(lVar6 + 0x404 + (uVar9 >> 0x2f) * 4));
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (*(short *)((longlong)&local_b8 + lVar6 * 2) != 0);
        FUN_140048d20(&local_d8,&local_b8);
        FUN_140055150(&local_118);
        uVar14 = uVar14 - 1;
        puVar12 = local_130;
        lVar6 = local_138;
        plVar15 = local_128;
      } while (uVar14 != 0);
    }
    pppppuVar8 = &local_d8;
    if (7 < local_c0) {
      pppppuVar8 = (undefined8 *****)local_d8;
    }
    local_148 = (undefined8 ****)local_c8;
    FUN_1400a47c0(plVar15,lVar6,local_e8,pppppuVar8);
    pppppuVar8 = &local_f8;
    if (7 < local_e0) {
      pppppuVar8 = (undefined8 *****)local_f8;
    }
    plVar10 = plVar15;
    if (7 < (ulonglong)plVar15[3]) {
      plVar10 = (longlong *)*plVar15;
    }
    local_148 = local_e8;
    lVar6 = FUN_1400a4750(plVar10,plVar15[2],lVar6 + 1,pppppuVar8);
    param_1 = local_120;
  } while( true );
}



// ===== FUN_1402d68d0 @ 0x1402d68d0 [ui] =====

longlong * FUN_1402d68d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  char *pcVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  uint uVar12;
  undefined1 local_38 [16];
  ulonglong uVar8;
  
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_InGameHostOptionsMenu::vftable;
  plVar5 = param_1 + 0x33;
  FUN_14027f6d0(plVar5);
  uVar8 = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  uVar12 = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *plVar5 = (longlong)UIControl_CheckBox::vftable;
  FUN_14027f6d0(param_1 + 0x55);
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x55] = (longlong)UIControl_CheckBox::vftable;
  FUN_14027f6d0(param_1 + 0x77);
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined1 *)(param_1 + 0x92) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  param_1[0x77] = (longlong)UIControl_CheckBox::vftable;
  FUN_14027f6d0(param_1 + 0x99);
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  param_1[0x99] = (longlong)UIControl_CheckBox::vftable;
  FUN_14027f6d0(param_1 + 0xbb);
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5e4) = 0;
  param_1[0xbb] = (longlong)UIControl_CheckBox::vftable;
  FUN_14027f6d0(param_1 + 0xdd);
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6f4) = 0;
  param_1[0xdd] = (longlong)UIControl_CheckBox::vftable;
  FUN_14027f6d0(param_1 + 0xff);
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  *(undefined1 *)(param_1 + 0x11a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x804) = 0;
  param_1[0xff] = (longlong)UIControl_CheckBox::vftable;
  FUN_14027f6d0(param_1 + 0x121);
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  *(undefined1 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x914) = 0;
  param_1[0x121] = (longlong)UIControl_CheckBox::vftable;
  FUN_14027f6d0(param_1 + 0x143);
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  *(undefined1 *)(param_1 + 0x15e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa24) = 0;
  param_1[0x143] = (longlong)UIControl_CheckBox::vftable;
  FUN_14027f6d0(param_1 + 0x165);
  param_1[0x181] = 0;
  param_1[0x182] = 0;
  *(undefined1 *)(param_1 + 0x180) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb34) = 0;
  param_1[0x165] = (longlong)UIControl_Button::vftable;
  FUN_14027f6d0(param_1 + 0x184);
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  *(undefined1 *)(param_1 + 0x19f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc2c) = 0;
  param_1[0x184] = (longlong)UIControl_Button::vftable;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  iVar4 = FUN_14003e910();
  ppuVar11 = &PTR_140610690;
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar2)();
    return plVar5;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x700) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar1 + 0xdfe0);
    if (7 < *(ulonglong *)(lVar1 + 0xdff8)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  uVar6 = FUN_140089d90(local_38,ppuVar10);
  FUN_140281d70(plVar5,uVar6,0,iVar4 != 0);
  iVar4 = FUN_14003e910();
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar2)();
    return plVar5;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x701) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar1 + 0xe000);
    if (7 < *(ulonglong *)(lVar1 + 0xe018)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  uVar6 = FUN_140089d90(local_38,ppuVar10);
  FUN_140281d70(param_1 + 0x55,uVar6,1,iVar4 != 0);
  iVar4 = FUN_14003e910();
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar2)();
    return plVar5;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x70d) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar1 + 0xe180);
    if (7 < *(ulonglong *)(lVar1 + 0xe198)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  uVar6 = FUN_140089d90(local_38,ppuVar10);
  FUN_140281d70(param_1 + 0xdd,uVar6,5,iVar4 != 0);
  iVar4 = FUN_14003e910();
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar2)();
    return plVar5;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x70e) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar1 + 0xe1a0);
    if (7 < *(ulonglong *)(lVar1 + 0xe1b8)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  uVar6 = FUN_140089d90(local_38,ppuVar10);
  FUN_140281d70(param_1 + 0xff,uVar6,6,iVar4 != 0);
  iVar4 = FUN_14003e910();
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar2)();
    return plVar5;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x70f) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar1 + 0xe1c0);
    if (7 < *(ulonglong *)(lVar1 + 0xe1d8)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  uVar6 = FUN_140089d90(local_38,ppuVar10);
  FUN_140281d70(param_1 + 0x121,uVar6,7,iVar4 != 0);
  iVar4 = FUN_14003e910();
  if (iVar4 == 0) {
    FUN_14026ec30(param_1,param_1 + 0x77,1);
    FUN_14026ec30(param_1,param_1 + 0x99,1);
    FUN_14026ec30(param_1,param_1 + 0xbb,1);
    FUN_14026ec30(param_1,param_1 + 0x143,1);
  }
  iVar4 = FUN_14003e910();
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar2)();
    return plVar5;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x70a) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar1 + 0xe120);
    if (7 < *(ulonglong *)(lVar1 + 0xe138)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  uVar6 = FUN_140089d90(local_38,ppuVar10);
  FUN_140281d70(param_1 + 0x77,uVar6,2,iVar4 != 0);
  iVar4 = FUN_14003e910();
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar2)();
    return plVar5;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x70b) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar1 + 0xe140);
    if (7 < *(ulonglong *)(lVar1 + 0xe158)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  uVar6 = FUN_140089d90(local_38,ppuVar10);
  FUN_140281d70(param_1 + 0x99,uVar6,3,iVar4 != 0);
  iVar4 = FUN_14003e910();
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar2)();
    return plVar5;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x70c) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar1 + 0xe160);
    if (7 < *(ulonglong *)(lVar1 + 0xe178)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  uVar6 = FUN_140089d90(local_38,ppuVar10);
  FUN_140281d70(param_1 + 0xbb,uVar6,4,iVar4 != 0);
  iVar4 = FUN_14003e910();
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar2)();
    return plVar5;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x710) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar1 + 0xe1e0);
    if (7 < *(ulonglong *)(lVar1 + 0xe1f8)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  uVar6 = FUN_140089d90(local_38,ppuVar10);
  FUN_140281d70(param_1 + 0x143,uVar6,8,iVar4 != 0);
  plVar5 = (longlong *)
           (**(code **)(*DAT_140790368 + 0x50))
                     (DAT_140790368,*(undefined4 *)((longlong)param_1 + 0x174));
  cVar3 = (**(code **)(*plVar5 + 8))(plVar5);
  pcVar9 = &DAT_1407bbaf0;
  do {
    if (*pcVar9 == cVar3) {
      uVar12 = (&DAT_1407bbbf0)[uVar8];
      break;
    }
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
    pcVar9 = pcVar9 + 1;
  } while (uVar7 < 0x100);
  iVar4 = FUN_14003e910(uVar8,DAT_1407bbab0,0xf);
  if (((iVar4 == 0) || ((uVar12 >> 0x10 & 1) == 0)) ||
     (iVar4 = (**(code **)(*DAT_140790368 + 0x28))(), iVar4 < 2)) {
    FUN_14026ec30(param_1,param_1 + 0x165,1);
    FUN_14026ec30(param_1,param_1 + 0x184,1);
  }
  else {
    if (*DAT_1407bb780 == '\0') {
      pcVar2 = (code *)swi(3);
      plVar5 = (longlong *)(*pcVar2)();
      return plVar5;
    }
    lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x855) {
      ppuVar10 = &PTR_140610690;
    }
    else {
      ppuVar10 = (undefined **)(lVar1 + 0x10a80);
      if (7 < *(ulonglong *)(lVar1 + 0x10a98)) {
        ppuVar10 = (undefined **)*ppuVar10;
      }
    }
    uVar6 = FUN_140089d90(local_38,ppuVar10);
    FUN_140280c40(param_1 + 0x165,uVar6,9);
    if (*DAT_1407bb780 == '\0') {
      pcVar2 = (code *)swi(3);
      plVar5 = (longlong *)(*pcVar2)();
      return plVar5;
    }
    lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((0x855 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5)) &&
       (ppuVar11 = (undefined **)(lVar1 + 0x10aa0), 7 < *(ulonglong *)(lVar1 + 0x10ab8))) {
      ppuVar11 = (undefined **)*ppuVar11;
    }
    uVar6 = FUN_140089d90(local_38,ppuVar11);
    FUN_140280c40(param_1 + 0x184,uVar6,10);
  }
  return param_1;
}



// ===== FUN_1402d7c60 @ 0x1402d7c60 [ui] =====

longlong * FUN_1402d7c60(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  longlong lVar14;
  uint uVar15;
  longlong *local_res18 [2];
  longlong local_58;
  longlong *local_50;
  longlong local_48 [4];
  
  local_res18[0] = param_3;
  FUN_14026d220();
  *param_1 = (longlong)UIScene_InGameInfoMenu::vftable;
  uVar15 = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  plVar8 = param_1 + 0x37;
  FUN_14027f6d0(plVar8);
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *plVar8 = (longlong)UIControl_Button::vftable;
  plVar4 = param_1 + 0x56;
  local_res18[0] = plVar4;
  FUN_14027f6d0(plVar4);
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(undefined4 *)((longlong)param_1 + 700) = 0;
  param_1[0x7b] = 0;
  *plVar4 = (longlong)UIControl_PlayerList::vftable;
  plVar4 = param_1 + 0x7e;
  local_res18[0] = plVar4;
  FUN_14027f6d0(plVar4);
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined1 *)(param_1 + 0x99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3fc) = 0;
  *plVar4 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x9c) = 1;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  ppuVar13 = &PTR_140610690;
  if (*DAT_1407bb780 == '\0') {
    pcVar5 = (code *)swi(3);
    plVar8 = (longlong *)(*pcVar5)();
    return plVar8;
  }
  lVar10 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar10 >> 5) < 0x71b) {
    ppuVar12 = &PTR_140610690;
  }
  else {
    ppuVar12 = (undefined **)(lVar10 + 0xe340);
    if (7 < *(ulonglong *)(lVar10 + 0xe358)) {
      ppuVar12 = (undefined **)*ppuVar12;
    }
  }
  uVar9 = FUN_140089d90(&local_58,ppuVar12);
  FUN_140280c40(plVar8,uVar9);
  if (*DAT_1407bb780 != '\0') {
    lVar10 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((0x71b < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar10 >> 5)) &&
       (ppuVar13 = (undefined **)(lVar10 + 0xe360), 7 < *(ulonglong *)(lVar10 + 0xe378))) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
    uVar9 = FUN_140089d90(&local_58,ppuVar13);
    FUN_140283b10(param_1 + 0x7e,uVar9);
    FUN_140281240(param_1 + 0x56,1);
    plVar8 = param_1 + 0x34;
    if (plVar8 != local_48) {
      lVar10 = *plVar8;
      if (lVar10 != 0) {
        lVar11 = lVar10;
        if ((0xfff < (param_1[0x36] - lVar10 & 0xfffffffffffffff8U)) &&
           (lVar11 = *(longlong *)(lVar10 + -8), 0x1f < (lVar10 - lVar11) - 8U)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        thunk_FUN_1401fe000(lVar11);
        param_1[0x35] = 0;
      }
      *plVar8 = 0;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
    }
    uVar7 = (**(code **)(*DAT_140790368 + 0x28))();
    if (uVar7 != 0) {
      do {
        lVar10 = (**(code **)(*DAT_140790368 + 0x58))(DAT_140790368,uVar15);
        if (lVar10 != 0) {
          local_res18[0] = (longlong *)FUN_1402d92e0(param_1,lVar10);
          puVar3 = (undefined8 *)param_1[0x35];
          if (puVar3 == (undefined8 *)param_1[0x36]) {
            FUN_1400491a0(param_1 + 0x34,puVar3,local_res18);
          }
          else {
            *puVar3 = local_res18[0];
            param_1[0x35] = param_1[0x35] + 8;
          }
          FUN_140284bc0(param_1 + 0x56,local_res18[0] + 1,
                        (int)*(short *)((longlong)local_res18[0] + 2),
                        (int)*(char *)((longlong)local_res18[0] + 1));
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar7);
    }
    (**(code **)(*DAT_140790368 + 0x118))
              (DAT_140790368,*(undefined4 *)((longlong)param_1 + 0x174),FUN_1402d8f10,param_1);
    plVar8 = (longlong *)
             (**(code **)(*DAT_140790368 + 0x50))
                       (DAT_140790368,*(undefined4 *)((longlong)param_1 + 0x174));
    *(undefined1 *)(param_1 + 0x33) = 0;
    if (plVar8 != (longlong *)0x0) {
      cVar6 = (**(code **)(*plVar8 + 0x40))(plVar8);
      *(bool *)(param_1 + 0x33) = cVar6 == '\x01';
    }
    lVar11 = DAT_140790e60;
    lVar14 = (longlong)*(int *)((longlong)param_1 + 0x174) + 7;
    lVar10 = *(longlong *)(DAT_140790e60 + 8 + lVar14 * 0x10);
    if (lVar10 != 0) {
      LOCK();
      piVar1 = (int *)(lVar10 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_58 = *(longlong *)(lVar11 + lVar14 * 0x10);
    plVar8 = *(longlong **)(lVar11 + 8 + lVar14 * 0x10);
    local_50 = plVar8;
    if (((char)param_1[0x33] == '\0') && ((*(byte *)(local_58 + 0x540) & 0x10) == 0)) {
      FUN_14026ec30(param_1,param_1 + 0x37,0);
    }
    FUN_1402d8270(param_1);
    DAT_1407bd904 = 0;
    plVar4 = *(longlong **)(DAT_1407bda58 + 0x58);
    if (plVar4 != (longlong *)0x0) {
      *(undefined1 *)((longlong)plVar4 + 0x19b) = 0;
      cVar6 = FUN_140264ab0(&DAT_1407bc300);
      if ((cVar6 == '\0') && (cVar6 = (**(code **)(*plVar4 + 0x18))(plVar4), cVar6 != '\0')) {
        FUN_14027fe70(plVar4 + 0xb0,0);
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar8 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
    return param_1;
  }
  pcVar5 = (code *)swi(3);
  plVar8 = (longlong *)(*pcVar5)();
  return plVar8;
}



// ===== FUN_1402d8f10 @ 0x1402d8f10 [ui] =====

void FUN_1402d8f10(undefined8 param_1,longlong *param_2,char param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  pcVar3 = "joining";
  if (param_3 != '\0') {
    pcVar3 = "leaving";
  }
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,
                "<UIScene_InGameInfoMenu::OnPlayerChanged> Player \"%ls\" %s (smallId: %d)\n",uVar2,
                pcVar3,uVar1);
}



// ===== FUN_1402da1e0 @ 0x1402da1e0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1402da1e0(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  undefined **ppuVar12;
  undefined1 uVar13;
  undefined **ppuVar14;
  short sVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auStackY_e8 [32];
  longlong *local_b8;
  undefined4 local_b0;
  int iStack_ac;
  undefined4 local_a8;
  longlong *local_a0;
  undefined4 local_98;
  double local_88;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_1407502c0 ^ (ulonglong)auStackY_e8;
  local_a0 = param_1;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_InGamePlayerOptionsMenu::vftable;
  plVar10 = param_1 + 0x34;
  FUN_14027f6d0(plVar10);
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *plVar10 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x52) = 1;
  _eh_vector_constructor_iterator_(param_1 + 0x53,0x110,10,FUN_140281b10,FUN_140271e20);
  plVar7 = param_1 + 0x1a7;
  local_b8 = plVar7;
  FUN_14027f6d0(plVar7);
  param_1[0x1c3] = 0;
  param_1[0x1c4] = 0;
  *(undefined1 *)(param_1 + 0x1c2) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd44) = 0;
  *plVar7 = (longlong)UIControl_Button::vftable;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined1 *)((longlong)param_1 + 0x19a) = *(undefined1 *)(param_3 + 4);
  *(undefined4 *)((longlong)param_1 + 0x19c) = *(undefined4 *)(param_3 + 8);
  plVar7 = (longlong *)
           (**(code **)(*DAT_140790368 + 0x50))
                     (DAT_140790368,*(undefined4 *)((longlong)param_1 + 0x174));
  plVar8 = (longlong *)
           (**(code **)(*DAT_140790368 + 0x68))
                     (DAT_140790368,*(undefined1 *)((longlong)param_1 + 0x19a));
  uVar9 = extraout_XMM0_Qa;
  if (plVar8 != (longlong *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0xa0))(plVar8,local_58);
    uVar9 = FUN_140089cb0(&local_b0,uVar9);
    FUN_140283b10(plVar10,uVar9);
    uVar9 = FUN_140055150(local_58);
  }
  iVar5 = FUN_14003e910(uVar9,DAT_1407bbab0,0xc);
  iVar6 = FUN_14003e910(extraout_XMM0_Qa_00,DAT_1407bbab0,0xf);
  ppuVar14 = &PTR_140610690;
  if ((plVar7 == (longlong *)0x0) || (plVar7 != plVar8)) {
    *(undefined1 *)((longlong)param_1 + 0x199) = 0;
    if ((iVar5 != 0) || (cVar4 = (**(code **)(*plVar8 + 0x40))(plVar8), cVar4 != '\0'))
    goto LAB_1402da3ba;
    bVar1 = *(byte *)((longlong)param_1 + 0x19c);
    if (*DAT_1407bb780 == '\0') {
      pcVar3 = (code *)swi(3);
      plVar10 = (longlong *)(*pcVar3)();
      return plVar10;
    }
    lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5) < 0x711) {
      ppuVar12 = &PTR_140610690;
    }
    else {
      ppuVar12 = (undefined **)(lVar2 + 0xe200);
      if (7 < *(ulonglong *)(lVar2 + 0xe218)) {
        ppuVar12 = (undefined **)*ppuVar12;
      }
    }
    uVar9 = FUN_140089d90(&local_b0,ppuVar12);
    FUN_140281d70(param_1 + 0x53,uVar9,0,(bVar1 & 3) == 0);
    uVar11 = *(uint *)((longlong)param_1 + 0x19c);
    if (*DAT_1407bb780 == '\0') {
      pcVar3 = (code *)swi(3);
      plVar10 = (longlong *)(*pcVar3)();
      return plVar10;
    }
    lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5) < 0x712) {
      ppuVar12 = &PTR_140610690;
    }
    else {
      ppuVar12 = (undefined **)(lVar2 + 0xe220);
      if (7 < *(ulonglong *)(lVar2 + 0xe238)) {
        ppuVar12 = (undefined **)*ppuVar12;
      }
    }
    uVar9 = FUN_140089d90(&local_b0,ppuVar12);
    FUN_140281d70(param_1 + 0x75,uVar9,1,(byte)(uVar11 >> 0xb) & 1);
    uVar11 = *(uint *)((longlong)param_1 + 0x19c);
    if (*DAT_1407bb780 == '\0') {
      pcVar3 = (code *)swi(3);
      plVar10 = (longlong *)(*pcVar3)();
      return plVar10;
    }
    lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5) < 0x713) {
      ppuVar12 = &PTR_140610690;
    }
    else {
      ppuVar12 = (undefined **)(lVar2 + 0xe240);
      if (7 < *(ulonglong *)(lVar2 + 0xe258)) {
        ppuVar12 = (undefined **)*ppuVar12;
      }
    }
    uVar9 = FUN_140089d90(&local_b0,ppuVar12);
    FUN_140281d70(param_1 + 0x97,uVar9,2,(byte)(uVar11 >> 0xc) & 1);
    uVar11 = *(uint *)((longlong)param_1 + 0x19c);
    if (*DAT_1407bb780 == '\0') {
      pcVar3 = (code *)swi(3);
      plVar10 = (longlong *)(*pcVar3)();
      return plVar10;
    }
    lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5) < 0x714) {
      ppuVar12 = &PTR_140610690;
    }
    else {
      ppuVar12 = (undefined **)(lVar2 + 0xe260);
      if (7 < *(ulonglong *)(lVar2 + 0xe278)) {
        ppuVar12 = (undefined **)*ppuVar12;
      }
    }
    uVar9 = FUN_140089d90(&local_b0,ppuVar12);
    FUN_140281d70(param_1 + 0xb9,uVar9,3,~(byte)(uVar11 >> 3) & 1);
    uVar11 = *(uint *)((longlong)param_1 + 0x19c);
    if (*DAT_1407bb780 == '\0') {
      pcVar3 = (code *)swi(3);
      plVar10 = (longlong *)(*pcVar3)();
      return plVar10;
    }
    lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5) < 0x715) {
      ppuVar12 = &PTR_140610690;
    }
    else {
      ppuVar12 = (undefined **)(lVar2 + 0xe280);
      if (7 < *(ulonglong *)(lVar2 + 0xe298)) {
        ppuVar12 = (undefined **)*ppuVar12;
      }
    }
    uVar9 = FUN_140089d90(&local_b0,ppuVar12);
    FUN_140281d70(param_1 + 0xdb,uVar9,4,~(byte)(uVar11 >> 10) & 1);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x199) = 1;
LAB_1402da3ba:
    FUN_14026ec30(param_1,param_1 + 0x53,1);
    FUN_14026ec30(param_1,param_1 + 0x75,1);
    FUN_14026ec30(param_1,param_1 + 0x97,1);
    FUN_14026ec30(param_1,param_1 + 0xb9,1);
    FUN_14026ec30(param_1,param_1 + 0xdb,1);
  }
  if (*(char *)((longlong)param_1 + 0x199) == '\0') {
    cVar4 = (**(code **)(*plVar7 + 0x40))(plVar7);
    if (cVar4 == '\0') {
      FUN_14026ec30(param_1,param_1 + 0xfd,1);
    }
    else {
      uVar11 = *(uint *)((longlong)param_1 + 0x19c);
      if (*DAT_1407bb780 == '\0') {
        pcVar3 = (code *)swi(3);
        plVar10 = (longlong *)(*pcVar3)();
        return plVar10;
      }
      lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
      if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5) < 0x716) {
        ppuVar12 = &PTR_140610690;
      }
      else {
        ppuVar12 = (undefined **)(lVar2 + 0xe2a0);
        if (7 < *(ulonglong *)(lVar2 + 0xe2b8)) {
          ppuVar12 = (undefined **)*ppuVar12;
        }
      }
      uVar9 = FUN_140089d90(&local_b0,ppuVar12);
      FUN_140281d70(param_1 + 0xfd,uVar9,5,(byte)(uVar11 >> 4) & 1);
    }
    cVar4 = (**(code **)(*plVar7 + 0x40))(plVar7);
    if ((cVar4 == '\0') || (iVar6 == 0)) {
      FUN_14026ec30(param_1,param_1 + 0x185,1);
      FUN_14026ec30(param_1,param_1 + 0x141,1);
      FUN_14026ec30(param_1,param_1 + 0x163,1);
      FUN_14026ec30(param_1,param_1 + 0x11f,1);
    }
    else {
      FUN_140281e90(param_1 + 0x185,1);
      uVar11 = *(uint *)((longlong)param_1 + 0x19c);
      if (*DAT_1407bb780 == '\0') {
        pcVar3 = (code *)swi(3);
        plVar10 = (longlong *)(*pcVar3)();
        return plVar10;
      }
      lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
      if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5) < 0x858) {
        ppuVar12 = &PTR_140610690;
      }
      else {
        ppuVar12 = (undefined **)(lVar2 + 0x10ae0);
        if (7 < *(ulonglong *)(lVar2 + 0x10af8)) {
          ppuVar12 = (undefined **)*ppuVar12;
        }
      }
      uVar9 = FUN_140089d90(&local_b0,ppuVar12);
      FUN_140281d70(param_1 + 0x185,uVar9,9,(byte)(uVar11 >> 0xd) & 1);
      if ((*(uint *)((longlong)param_1 + 0x19c) & 0x200) == 0) {
        FUN_140281e90(param_1 + 0x141,1);
        uVar11 = *(uint *)((longlong)param_1 + 0x19c);
        if (*DAT_1407bb780 == '\0') {
          pcVar3 = (code *)swi(3);
          plVar10 = (longlong *)(*pcVar3)();
          return plVar10;
        }
        lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
        if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5) < 0x718) {
          ppuVar12 = &PTR_140610690;
        }
        else {
          ppuVar12 = (undefined **)(lVar2 + 0xe2e0);
          if (7 < *(ulonglong *)(lVar2 + 0xe2f8)) {
            ppuVar12 = (undefined **)*ppuVar12;
          }
        }
        uVar9 = FUN_140089d90(&local_b0,ppuVar12);
        FUN_140281d70(param_1 + 0x141,uVar9,7,(byte)(uVar11 >> 0xe) & 1);
        FUN_140281e90(param_1 + 0x163,1);
        uVar11 = *(uint *)((longlong)param_1 + 0x19c);
        if (*DAT_1407bb780 == '\0') {
          pcVar3 = (code *)swi(3);
          plVar10 = (longlong *)(*pcVar3)();
          return plVar10;
        }
        lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
        if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5) < 0x857) {
          ppuVar12 = &PTR_140610690;
        }
        else {
          ppuVar12 = (undefined **)(lVar2 + 0x10ac0);
          if (7 < *(ulonglong *)(lVar2 + 0x10ad8)) {
            ppuVar12 = (undefined **)*ppuVar12;
          }
        }
        uVar9 = FUN_140089d90(&local_b0,ppuVar12);
        FUN_140281d70(param_1 + 0x163,uVar9,8,(byte)(uVar11 >> 0xf) & 1);
      }
      else {
        FUN_14026ec30(param_1,param_1 + 0x141,1);
        FUN_14026ec30(param_1,param_1 + 0x163,1);
      }
      bVar1 = *(byte *)((longlong)param_1 + 0x19e);
      if (*DAT_1407bb780 == '\0') {
        pcVar3 = (code *)swi(3);
        plVar10 = (longlong *)(*pcVar3)();
        return plVar10;
      }
      lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
      if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5) < 0x853) {
        ppuVar12 = &PTR_140610690;
      }
      else {
        ppuVar12 = (undefined **)(lVar2 + 0x10a40);
        if (7 < *(ulonglong *)(lVar2 + 0x10a58)) {
          ppuVar12 = (undefined **)*ppuVar12;
        }
      }
      uVar9 = FUN_140089d90(&local_b0,ppuVar12);
      FUN_140281d70(param_1 + 0x11f,uVar9,6,bVar1 & 1);
    }
    cVar4 = (**(code **)(*plVar8 + 0x50))(plVar8);
    if (cVar4 != '\x01') {
      pcVar3 = *(code **)(*plVar8 + 0x18);
      uVar9 = (**(code **)(*DAT_140790368 + 0x78))();
      cVar4 = (*pcVar3)(plVar8,uVar9);
      if (cVar4 != '\x01') {
        if (*DAT_1407bb780 == '\0') {
          pcVar3 = (code *)swi(3);
          plVar10 = (longlong *)(*pcVar3)();
          return plVar10;
        }
        lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
        if ((0x716 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5)) &&
           (ppuVar14 = (undefined **)(lVar2 + 0xe2c0), 7 < *(ulonglong *)(lVar2 + 0xe2d8))) {
          ppuVar14 = (undefined **)*ppuVar14;
        }
        uVar9 = FUN_140089d90(&local_b0,ppuVar14);
        FUN_140280c40(param_1 + 0x1a7,uVar9,10);
        goto LAB_1402dac86;
      }
    }
    plVar10 = param_1 + 0x1a7;
  }
  else {
    FUN_14026ec30(param_1,param_1 + 0xfd,1);
    FUN_14026ec30(param_1,param_1 + 0x1a7,1);
    FUN_14026ec30(param_1,param_1 + 0x11f,1);
    if (iVar6 == 0) {
      FUN_14026ec30(param_1,param_1 + 0x185,1);
    }
    else {
      uVar11 = *(uint *)((longlong)param_1 + 0x19c);
      FUN_140281e90(param_1 + 0x185,(uVar11 >> 0xd & 1) != 0);
      if (((uVar11 >> 0xd & 1) == 0) || ((*(uint *)((longlong)param_1 + 0x19c) & 0x180) != 0x180)) {
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
      if (*DAT_1407bb780 == '\0') {
        pcVar3 = (code *)swi(3);
        plVar10 = (longlong *)(*pcVar3)();
        return plVar10;
      }
      lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
      if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5) < 0x71a) {
        ppuVar12 = &PTR_140610690;
      }
      else {
        ppuVar12 = (undefined **)(lVar2 + 0xe320);
        if (7 < *(ulonglong *)(lVar2 + 0xe338)) {
          ppuVar12 = (undefined **)*ppuVar12;
        }
      }
      uVar9 = FUN_140089d90(&local_b0,ppuVar12);
      FUN_140281d70(param_1 + 0x185,uVar9,9,uVar13);
      uVar11 = *(uint *)((longlong)param_1 + 0x19c);
      if ((uVar11 >> 9 & 1) == 0) {
        FUN_140281e90(param_1 + 0x141,(uVar11 >> 0xe & 1) != 0);
        if (((uVar11 >> 0xe & 1) == 0) || ((*(byte *)((longlong)param_1 + 0x19c) & 0x20) == 0)) {
          uVar13 = 0;
        }
        else {
          uVar13 = 1;
        }
        if (*DAT_1407bb780 == '\0') {
          pcVar3 = (code *)swi(3);
          plVar10 = (longlong *)(*pcVar3)();
          return plVar10;
        }
        lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
        if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5) < 0x718) {
          ppuVar12 = &PTR_140610690;
        }
        else {
          ppuVar12 = (undefined **)(lVar2 + 0xe2e0);
          if (7 < *(ulonglong *)(lVar2 + 0xe2f8)) {
            ppuVar12 = (undefined **)*ppuVar12;
          }
        }
        uVar9 = FUN_140089d90(&local_b0,ppuVar12);
        FUN_140281d70(param_1 + 0x141,uVar9,7,uVar13);
        FUN_140281e90(param_1 + 0x163,(uVar11 & 0x8000) != 0);
        if (((uVar11 & 0x8000) == 0) || ((*(byte *)((longlong)param_1 + 0x19c) & 0x40) == 0)) {
          uVar13 = 0;
        }
        else {
          uVar13 = 1;
        }
        if (*DAT_1407bb780 == '\0') {
          pcVar3 = (code *)swi(3);
          plVar10 = (longlong *)(*pcVar3)();
          return plVar10;
        }
        lVar2 = *(longlong *)(DAT_1407bb780 + 0x48);
        if ((0x718 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar2 >> 5)) &&
           (ppuVar14 = (undefined **)(lVar2 + 0xe300), 7 < *(ulonglong *)(lVar2 + 0xe318))) {
          ppuVar14 = (undefined **)*ppuVar14;
        }
        uVar9 = FUN_140089d90(&local_b0,ppuVar14);
        FUN_140281d70(param_1 + 0x163,uVar9,8,uVar13);
        goto LAB_1402dac86;
      }
    }
    FUN_14026ec30(param_1,param_1 + 0x141,1);
    plVar10 = param_1 + 0x163;
  }
  FUN_14026ec30(param_1,plVar10,1);
LAB_1402dac86:
  sVar15 = -1;
  uVar11 = 0;
  do {
    if ((&DAT_1407bbaf0)[uVar11] == *(char *)((longlong)param_1 + 0x19a)) {
      sVar15 = (short)uVar11;
      break;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 0x100);
  local_98 = 4;
  local_88 = (double)(int)sVar15;
  lVar2 = param_1[0x1c6];
  uVar9 = IggyPlayerRootPath(param_1[2]);
  IggyPlayerCallMethodRS(param_1[2],local_78,uVar9,lVar2);
  local_b8 = (longlong *)((ulonglong)local_b8 & 0xffffffff00000000);
  IggyValueGetBooleanRS(param_1 + 0x101,param_1[0x11b],0,&local_b8);
  *(bool *)(param_1 + 0x11e) = (int)local_b8 != 0;
  *(bool *)(param_1 + 0x1c7) = (int)local_b8 != 0;
  FUN_1402dbb50(param_1);
  local_b8 = (longlong *)((ulonglong)local_b8 & 0xffffffff00000000);
  local_a8 = CONCAT31(local_a8._1_3_,1);
  local_b0 = 100;
  iStack_ac = FUN_140352410();
  iStack_ac = iStack_ac + 100;
  plVar10 = (longlong *)FUN_140270660(param_1 + 0x1b,local_58,&local_b8);
  lVar2 = *plVar10;
  *(ulonglong *)(lVar2 + 0x14) = CONCAT44(iStack_ac,local_b0);
  *(undefined4 *)(lVar2 + 0x1c) = local_a8;
  (**(code **)(*DAT_140790368 + 0x118))
            (DAT_140790368,*(undefined4 *)((longlong)param_1 + 0x174),FUN_1402dbad0,param_1);
  return param_1;
}



// ===== FUN_1402dbad0 @ 0x1402dbad0 [ui] =====

void FUN_1402dbad0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"UIScene_InGamePlayerOptionsMenu::OnPlayerChanged");
}



// ===== FUN_1402dc190 @ 0x1402dc190 [ui] =====

longlong * FUN_1402dc190(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined1 local_28 [16];
  
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_PauseMenu::vftable;
  param_1[0x33] = (longlong)UIScene_PauseMenu::vftable;
  _eh_vector_constructor_iterator_(param_1 + 0x36,0xf8,6,FUN_140280b20,FUN_140271e20);
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  ppuVar8 = &PTR_140610690;
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar2)();
    return plVar5;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x72d) {
    ppuVar7 = &PTR_140610690;
  }
  else {
    ppuVar7 = (undefined **)(lVar1 + 0xe580);
    if (7 < *(ulonglong *)(lVar1 + 0xe598)) {
      ppuVar7 = (undefined **)*ppuVar7;
    }
  }
  uVar6 = FUN_140089d90(local_28,ppuVar7);
  FUN_140280c40(param_1 + 0x36,uVar6,0);
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar2)();
    return plVar5;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x72b) {
    ppuVar7 = &PTR_140610690;
  }
  else {
    ppuVar7 = (undefined **)(lVar1 + 0xe540);
    if (7 < *(ulonglong *)(lVar1 + 0xe558)) {
      ppuVar7 = (undefined **)*ppuVar7;
    }
  }
  uVar6 = FUN_140089d90(local_28,ppuVar7);
  FUN_140280c40(param_1 + 0x55,uVar6,1);
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar2)();
    return plVar5;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x72a) {
    ppuVar7 = &PTR_140610690;
  }
  else {
    ppuVar7 = (undefined **)(lVar1 + 0xe520);
    if (7 < *(ulonglong *)(lVar1 + 0xe538)) {
      ppuVar7 = (undefined **)*ppuVar7;
    }
  }
  uVar6 = FUN_140089d90(local_28,ppuVar7);
  FUN_140280c40(param_1 + 0x74,uVar6,2);
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar2)();
    return plVar5;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x8c9) {
    ppuVar7 = &PTR_140610690;
  }
  else {
    ppuVar7 = (undefined **)(lVar1 + 0x11900);
    if (7 < *(ulonglong *)(lVar1 + 0x11918)) {
      ppuVar7 = (undefined **)*ppuVar7;
    }
  }
  uVar6 = FUN_140089d90(local_28,ppuVar7);
  FUN_140280c40(param_1 + 0x93,uVar6,3);
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar2)();
    return plVar5;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5) < 0x72e) {
    ppuVar7 = &PTR_140610690;
  }
  else {
    ppuVar7 = (undefined **)(lVar1 + 0xe5a0);
    if (7 < *(ulonglong *)(lVar1 + 0xe5b8)) {
      ppuVar7 = (undefined **)*ppuVar7;
    }
  }
  uVar6 = FUN_140089d90(local_28,ppuVar7);
  FUN_140280c40(param_1 + 0xb2,uVar6,4);
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar2)();
    return plVar5;
  }
  lVar1 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((0x59f < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar1 >> 5)) &&
     (ppuVar8 = (undefined **)(lVar1 + 0xb3e0), 7 < *(ulonglong *)(lVar1 + 0xb3f8))) {
    ppuVar8 = (undefined **)*ppuVar8;
  }
  uVar6 = FUN_140089d90(local_28,ppuVar8);
  FUN_140280c40(param_1 + 0xd1,uVar6,5);
  if ((DAT_1407baaa8 == '\0') &&
     (plVar5 = *(longlong **)(DAT_1407bda58 + 0x58), plVar5 != (longlong *)0x0)) {
    *(undefined1 *)((longlong)plVar5 + 0x19a) = 0;
    cVar3 = FUN_140264ab0(&DAT_1407bc300);
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*plVar5 + 0x18))(plVar5);
      if (cVar3 != '\0') {
        FUN_14027fe70(plVar5 + 0x3c,0);
      }
    }
  }
  FUN_1402dc970(param_1);
  FUN_14026eda0(param_1);
  DAT_1407bd904 = 0;
  plVar5 = *(longlong **)(DAT_1407bda58 + 0x58);
  if (plVar5 != (longlong *)0x0) {
    *(undefined1 *)((longlong)plVar5 + 0x19b) = 0;
    cVar3 = FUN_140264ab0(&DAT_1407bc300);
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*plVar5 + 0x18))(plVar5);
      if (cVar3 != '\0') {
        FUN_14027fe70(plVar5 + 0xb0,0);
      }
    }
  }
  cVar3 = (**(code **)(*DAT_140790368 + 0xf0))();
  if (cVar3 != '\0') {
    iVar4 = (**(code **)(*DAT_140790368 + 0x28))();
    if (iVar4 == 1) {
      DAT_1407bb824 = 5;
      DAT_1407bb838 = 1;
    }
  }
  (**(code **)(*DAT_1407ba830 + 0x60))(DAT_1407ba830,*(undefined4 *)((longlong)param_1 + 0x174),5,0)
  ;
  (**(code **)(*DAT_1407ba830 + 0x50))(DAT_1407ba830,*(undefined4 *)((longlong)param_1 + 0x174));
  if ((DAT_140790e60 != 0) &&
     (plVar5 = *(longlong **)(DAT_140790e60 + 0xb0 + (longlong)param_2 * 8),
     plVar5 != (longlong *)0x0)) {
    uVar6 = (**(code **)(*plVar5 + 0xd8))();
    FUN_140083050(uVar6,0);
  }
  *(undefined1 *)((longlong)param_1 + 0x1aa) = 0;
  return param_1;
}



// ===== FUN_1402dd200 @ 0x1402dd200 [ui] =====

void FUN_1402dd200(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"UIScene_PauseMenu::ShowScene is not implemented\n");
}



// ===== FUN_1402dd220 @ 0x1402dd220 [ui] =====

void FUN_1402dd220(longlong param_1)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = FUN_1400382a0(param_1,*(undefined4 *)(param_1 + 0x174));
  pcVar2 = "UIScene_PauseMenu::HandleDLCInstalled - m_bIgnoreInput false\n";
  if (cVar1 != '\0') {
    pcVar2 = "UIScene_PauseMenu::HandleDLCInstalled - m_bIgnoreInput true\n";
  }
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,pcVar2);
}



// ===== FUN_1402dd260 @ 0x1402dd260 [ui] =====

void FUN_1402dd260(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,
                "UIScene_PauseMenu::HandleDLCMountingComplete - m_bIgnoreInput false \n");
}



// ===== FUN_1402dd7f0 @ 0x1402dd7f0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1402dd7f0(longlong *param_1,ulonglong param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 ***pppuVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined **ppuVar13;
  undefined1 auStackY_b8 [32];
  longlong *local_88 [2];
  longlong *local_78;
  undefined1 local_70 [16];
  undefined8 **local_60 [3];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1407502c0 ^ (ulonglong)auStackY_b8;
  uVar12 = 0;
  local_78 = param_1;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_SignEntryMenu::vftable;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  plVar7 = param_1 + 0x38;
  FUN_14027f6d0(plVar7);
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  *plVar7 = (longlong)UIControl_Button::vftable;
  plVar5 = param_1 + 0x57;
  local_88[0] = plVar5;
  FUN_14027f6d0(plVar5);
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  *plVar5 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x75) = 1;
  _eh_vector_constructor_iterator_(param_1 + 0x76,0x168,4,FUN_140287170,FUN_14028c9b0);
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  lVar4 = param_3[1];
  param_1[0x33] = *param_3;
  plVar5 = (longlong *)param_1[0x34];
  param_1[0x34] = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  *(undefined2 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x37) = 1;
  ppuVar13 = &PTR_140610690;
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar4 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar4 >> 5) < 0x747) {
    ppuVar9 = &PTR_140610690;
  }
  else {
    ppuVar9 = (undefined **)(lVar4 + 0xe8c0);
    if (7 < *(ulonglong *)(lVar4 + 0xe8d8)) {
      ppuVar9 = (undefined **)*ppuVar9;
    }
  }
  uVar8 = FUN_140089d90(local_88,ppuVar9);
  FUN_140280c40(plVar7,uVar8,4);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar6)();
    return plVar7;
  }
  lVar4 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((0x747 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar4 >> 5)) &&
     (ppuVar13 = (undefined **)(lVar4 + 0xe8e0), 7 < *(ulonglong *)(lVar4 + 0xe8f8))) {
    ppuVar13 = (undefined **)*ppuVar13;
  }
  uVar8 = FUN_140089d90(local_88,ppuVar13);
  FUN_140283b10(param_1 + 0x57,uVar8);
  do {
    FUN_140055000(local_60,param_1[0x33] + 0x58 + (longlong)(int)uVar12 * 0x20);
    pppuVar10 = local_60;
    if (7 < local_48) {
      pppuVar10 = (undefined8 ***)local_60[0];
    }
    uVar8 = FUN_140089d90(local_70,pppuVar10);
    FUN_140280c40(param_1 + uVar12 * 0x2d + 0x76,uVar8,uVar12);
    FUN_140055150(local_60);
    uVar11 = (int)uVar12 + 1;
    uVar12 = (ulonglong)uVar11;
  } while (uVar11 < 4);
  FUN_14026bdd0(param_4,param_2 & 0xffffffff,0x42);
  return param_1;
}



// ===== FUN_1402decf0 @ 0x1402decf0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1402decf0(longlong *param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 ****ppppuVar9;
  undefined2 uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined **ppuVar13;
  char cVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStackY_c8 [32];
  undefined8 ***local_88;
  undefined8 **ppuStack_80;
  undefined8 **local_78;
  undefined8 **ppuStack_70;
  longlong *local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStackY_c8;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_TeleportMenu::vftable;
  _eh_vector_constructor_iterator_
            (param_1 + 0xb4,0x20,0x100,(_func_void_void_ptr *)&LAB_140054e20,thunk_FUN_140055150);
  plVar8 = param_1 + 0x4b4;
  local_68[0] = plVar8;
  FUN_14027f6d0(plVar8);
  param_1[0x4d0] = 0;
  param_1[0x4d1] = 0;
  *(undefined1 *)(param_1 + 0x4cf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25ac) = 0;
  param_1[0x4d9] = 0;
  *plVar8 = (longlong)UIControl_PlayerList::vftable;
  plVar8 = param_1 + 0x4dc;
  FUN_14027f6d0(plVar8);
  param_1[0x4f8] = 0;
  param_1[0x4f9] = 0;
  *(undefined1 *)(param_1 + 0x4f7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x26ec) = 0;
  *plVar8 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x4fa) = 1;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(param_3 + 4);
  thunk_FUN_1401fe000(param_3,8);
  if ((char)param_1[0x33] == '\0') {
    if (*DAT_1407bb780 == '\0') goto LAB_1402dee88;
    lVar15 = *(longlong *)(DAT_1407bb780 + 0x48);
    if (0x855 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar15 >> 5)) {
      ppuVar13 = (undefined **)(lVar15 + 0x10aa0);
      if (7 < *(ulonglong *)(lVar15 + 0x10ab8)) {
        ppuVar13 = (undefined **)*ppuVar13;
      }
      goto LAB_1402dee90;
    }
  }
  else {
    if (*DAT_1407bb780 == '\0') {
LAB_1402dee88:
      pcVar2 = (code *)swi(3);
      plVar8 = (longlong *)(*pcVar2)();
      return plVar8;
    }
    lVar15 = *(longlong *)(DAT_1407bb780 + 0x48);
    if (0x854 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar15 >> 5)) {
      ppuVar13 = (undefined **)(lVar15 + 0x10a80);
      if (7 < *(ulonglong *)(lVar15 + 0x10a98)) {
        ppuVar13 = (undefined **)*ppuVar13;
      }
      goto LAB_1402dee90;
    }
  }
  ppuVar13 = &PTR_140610690;
LAB_1402dee90:
  uVar7 = FUN_140089d90(local_68,ppuVar13);
  FUN_140283b10(plVar8,uVar7);
  FUN_140281240(param_1 + 0x4b4,0);
  plVar8 = param_1 + 0xb4;
  lVar15 = 0x100;
  do {
    FUN_1400549d0(plVar8,&PTR_140610690,0);
    plVar8 = plVar8 + 4;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  uVar5 = (**(code **)(*DAT_140790368 + 0x28))();
  uVar16 = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  if (uVar5 != 0) {
    do {
      plVar8 = (longlong *)(**(code **)(*DAT_140790368 + 0x58))(DAT_140790368,uVar16);
      if ((plVar8 != (longlong *)0x0) &&
         ((cVar3 = (**(code **)(*plVar8 + 0x50))(plVar8), cVar3 == '\0' ||
          (iVar1 = *(int *)((longlong)param_1 + 0x174),
          iVar6 = (**(code **)(*plVar8 + 0x80))(plVar8), iVar6 != iVar1)))) {
        uVar4 = (**(code **)(*plVar8 + 8))(plVar8);
        *(undefined1 *)((longlong)*(int *)((longlong)param_1 + 0x19c) + 0x1a0 + (longlong)param_1) =
             uVar4;
        *(int *)((longlong)param_1 + 0x19c) = *(int *)((longlong)param_1 + 0x19c) + 1;
        local_88 = (undefined8 ****)0x0;
        ppuStack_80 = (undefined8 ***)0x0;
        local_78 = (undefined8 ***)0x0;
        ppuStack_70 = (undefined8 ***)0x0;
        FUN_140054cf0(&local_88,&PTR_140610690,0);
        ppppuVar9 = (undefined8 ****)(**(code **)(*plVar8 + 0xa0))(plVar8,local_68);
        if (&local_88 != ppppuVar9) {
          if ((undefined8 ***)0x7 < ppuStack_70) {
            if ((0xfff < (longlong)ppuStack_70 * 2 + 2U) &&
               (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)local_88[-1])))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
            thunk_FUN_1401fe000();
          }
          local_88 = *ppppuVar9;
          ppuStack_80 = ppppuVar9[1];
          local_78 = ppppuVar9[2];
          ppuStack_70 = ppppuVar9[3];
          ppppuVar9[2] = (undefined8 ***)0x0;
          ppppuVar9[3] = (undefined8 ***)0x7;
          *(undefined2 *)ppppuVar9 = 0;
        }
        FUN_140055150(local_68);
        cVar14 = '\0';
        cVar3 = (**(code **)(*plVar8 + 0x70))();
        if (cVar3 != '\0') {
          cVar3 = (**(code **)(*plVar8 + 0x68))(plVar8,*(undefined4 *)((longlong)param_1 + 0x174));
          if (cVar3 == '\0') {
            cVar3 = (**(code **)(*plVar8 + 0x60))();
            cVar14 = (cVar3 != '\0') + '\x01';
          }
          else {
            cVar14 = '\x03';
          }
        }
        *(char *)((longlong)*(int *)((longlong)param_1 + 0x19c) + 0x2a0 + (longlong)param_1) =
             cVar14;
        uVar10 = 0xffff;
        uVar12 = 0;
        do {
          if ((&DAT_1407bbaf0)[uVar12] ==
              *(char *)((longlong)*(int *)((longlong)param_1 + 0x19c) + 0x1a0 + (longlong)param_1))
          {
            uVar10 = (undefined2)uVar12;
            break;
          }
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < 0x100);
        *(undefined2 *)
         ((longlong)param_1 + (longlong)*(int *)((longlong)param_1 + 0x19c) * 2 + 0x3a0) = uVar10;
        if ((undefined8 ****)(param_1 + ((longlong)*(int *)((longlong)param_1 + 0x19c) + 0x2d) * 4)
            != &local_88) {
          ppppuVar9 = &local_88;
          if ((undefined8 ***)0x7 < ppuStack_70) {
            ppppuVar9 = (undefined8 ****)local_88;
          }
          FUN_1400549d0(param_1 + ((longlong)*(int *)((longlong)param_1 + 0x19c) + 0x2d) * 4,
                        ppppuVar9,local_78);
        }
        uVar12 = 0;
        do {
          if ((&DAT_1407bbaf0)[uVar12] ==
              *(char *)((longlong)*(int *)((longlong)param_1 + 0x19c) + 0x1a0 + (longlong)param_1))
          break;
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < 0x100);
        FUN_140284bc0(param_1 + 0x4b4,&local_88);
        FUN_140055150(&local_88);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar5);
  }
  (**(code **)(*DAT_140790368 + 0x118))
            (DAT_140790368,*(undefined4 *)((longlong)param_1 + 0x174),FUN_1402dfda0,param_1);
  FUN_14026bdd0(param_4,param_2 & 0xffffffff,0x42);
  DAT_1407bd904 = 0;
  plVar8 = *(longlong **)(DAT_1407bda58 + 0x58);
  if (plVar8 != (longlong *)0x0) {
    *(undefined1 *)((longlong)plVar8 + 0x19b) = 0;
    cVar3 = FUN_140264ab0(&DAT_1407bc300);
    if ((cVar3 == '\0') && (cVar3 = (**(code **)(*plVar8 + 0x18))(plVar8), cVar3 != '\0')) {
      FUN_14027fe70(plVar8 + 0xb0,0);
    }
  }
  return param_1;
}



// ===== FUN_1402e0b50 @ 0x1402e0b50 [ui] =====

void FUN_1402e0b50(undefined8 *param_1)

{
  *param_1 = UIScene_AbstractContainerMenu::vftable;
  *(undefined ***)((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1) =
       UIScene_AbstractContainerMenu::vftable;
  *(int *)((longlong)*(int *)(param_1[0x33] + 4) + 0x194 + (longlong)param_1) =
       *(int *)(param_1[0x33] + 4) + -0x688;
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"UIScene_AbstractContainerMenu::~UIScene_AbstractContainerMenu\n");
}



// ===== FUN_1402e0c50 @ 0x1402e0c50 [ui] =====

void FUN_1402e0c50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"UIScene_AbstractContainerMenu::handleDestroy\n");
}



// ===== FUN_1402e26a0 @ 0x1402e26a0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

longlong * FUN_1402e26a0(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  longlong *plVar14;
  undefined **ppuVar15;
  undefined4 uVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_348 [32];
  undefined4 local_328;
  undefined4 *local_320;
  undefined8 *local_318;
  undefined1 local_310;
  longlong *local_308;
  int local_300;
  undefined4 local_2fc;
  longlong local_2f8;
  longlong *plStack_2f0;
  undefined8 local_2e8;
  longlong *plStack_2e0;
  longlong *local_2d0;
  undefined1 local_2c8 [12];
  undefined4 local_2bc;
  undefined4 local_2a8 [4];
  undefined8 *******local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_278;
  undefined8 *******local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  ulonglong local_250;
  short local_248 [256];
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStack_348;
  local_300 = (int)param_2;
  param_1[0x33] = (longlong)&DAT_14064a4d8;
  param_1[0x104] = (longlong)&DAT_14064a4d0;
  param_1[0x1c2] = (longlong)IUIScene_AbstractContainerMenu::vftable;
  param_1[0x1c3] = 0;
  *(undefined1 *)(param_1 + 0x1c4) = 0;
  param_1[0x1d5] = 0;
  param_1[0x1c5] = 0;
  *(undefined1 *)(param_1 + 0x1c6) = 0;
  local_2fc = 1;
  local_2d0 = param_1;
  FUN_1402e06a0(param_1,param_2,param_4);
  plVar10 = param_1 + 0x103;
  *plVar10 = (longlong)IUIScene_AnvilMenu::vftable;
  *(undefined ***)((longlong)*(int *)(param_1[0x104] + 4) + 8 + (longlong)plVar10) =
       IUIScene_AnvilMenu::vftable;
  *(int *)((longlong)*(int *)(param_1[0x104] + 4) + 4 + (longlong)plVar10) =
       *(int *)(param_1[0x104] + 4) + -0x48;
  param_1[0x106] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 7;
  *(undefined2 *)(param_1 + 0x108) = 0;
  param_1[0x105] = 0;
  plVar3 = (longlong *)param_1[0x106];
  param_1[0x106] = 0;
  local_308 = plVar10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar3 + 1;
    lVar17 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  param_1[0x107] = 0;
  ppuVar15 = &PTR_140610690;
  FUN_1400549d0(param_1 + 0x108,&PTR_140610690,0);
  *param_1 = (longlong)UIScene_AnvilMenu::vftable;
  *plVar10 = (longlong)UIScene_AnvilMenu::vftable;
  *(undefined ***)((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1) =
       UIScene_AnvilMenu::vftable;
  *(int *)((longlong)*(int *)(param_1[0x33] + 4) + 0x194 + (longlong)param_1) =
       *(int *)(param_1[0x33] + 4) + -0xc78;
  plVar10 = param_1 + 0x10d;
  local_308 = plVar10;
  FUN_14027f6d0(plVar10);
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined4 *)((longlong)param_1 + 0x874) = 0;
  *plVar10 = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x12e) = 0xffffffff;
  plVar10 = param_1 + 0x12f;
  local_308 = plVar10;
  FUN_14027f6d0(plVar10);
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  *(undefined1 *)(param_1 + 0x14a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x984) = 0;
  *plVar10 = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x150) = 0xffffffff;
  plVar10 = param_1 + 0x151;
  local_308 = plVar10;
  FUN_14027f6d0(plVar10);
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  *(undefined1 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa94) = 0;
  *plVar10 = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x172) = 0xffffffff;
  plVar10 = param_1 + 0x173;
  local_308 = plVar10;
  FUN_14027f6d0(plVar10);
  param_1[399] = 0;
  param_1[400] = 0;
  *(undefined1 *)(param_1 + 0x18e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xba4) = 0;
  *plVar10 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x191) = 1;
  FUN_140287170(param_1 + 0x192);
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  *(undefined1 *)(param_1 + 0x10c) = 0;
  uVar9 = FUN_140089cb0(&local_2f8,param_1 + 0x108);
  FUN_140280c40(param_1 + 0x192,uVar9,0);
  if (*DAT_1407bb780 == '\0') {
    pcVar5 = (code *)swi(3);
    plVar10 = (longlong *)(*pcVar5)();
    return plVar10;
  }
  lVar17 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar17 >> 5) < 0x824) {
    ppuVar13 = &PTR_140610690;
  }
  else {
    ppuVar13 = (undefined **)(lVar17 + 0x10460);
    if (7 < *(ulonglong *)(lVar17 + 0x10478)) {
      ppuVar13 = (undefined **)*ppuVar13;
    }
  }
  uVar9 = FUN_140089d90(local_2c8,ppuVar13);
  FUN_140283b10(plVar10,uVar9);
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  lVar17 = param_3[1];
  param_1[0x105] = *param_3;
  plVar10 = (longlong *)param_1[0x106];
  param_1[0x106] = lVar17;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    lVar17 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  lVar4 = DAT_140790e60;
  lVar17 = (longlong)local_300;
  plVar10 = *(longlong **)(DAT_140790e60 + 0xb0 + lVar17 * 8);
  if (plVar10 != (longlong *)0x0) {
    lVar11 = (**(code **)(*plVar10 + 0xd8))(plVar10);
    *(undefined4 *)((longlong)*(int *)(param_1[0x33] + 4) + 0x1ac + (longlong)param_1) =
         *(undefined4 *)(lVar11 + 8);
    uVar9 = (**(code **)(*plVar10 + 0xd8))(plVar10);
    FUN_140083c10(uVar9,0x1a,param_1);
  }
  local_308 = (longlong *)FUN_140558c80(0x158);
  lVar17 = lVar17 + 7;
  lVar11 = *(longlong *)(lVar4 + 8 + lVar17 * 0x10);
  if (lVar11 != 0) {
    LOCK();
    piVar1 = (int *)(lVar11 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_2e8 = *(undefined8 *)(lVar4 + lVar17 * 0x10);
  plStack_2e0 = *(longlong **)(lVar4 + 8 + lVar17 * 0x10);
  local_320._0_4_ = (undefined4)param_3[4];
  local_328 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar6 = param_3[3];
  lVar11 = param_3[2];
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_2f8 = *param_3;
  plStack_2f0 = (longlong *)param_3[1];
  local_318 = &local_2e8;
  plVar10 = (longlong *)FUN_140378810(local_308,&local_2f8,lVar11,(int)lVar6);
  param_1[0x107] = (longlong)plVar10;
  (**(code **)(*plVar10 + 8))(plVar10,param_1 + 0x103);
  local_310 = 0;
  local_318 = (undefined8 *)CONCAT44(local_318._4_4_,0x32);
  local_320 = (undefined4 *)CONCAT44(local_320._4_4_,0x2c);
  local_328 = 3;
  FUN_14008b090((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1,local_300,
                param_1[0x107],1);
  FUN_140286a50(param_1 + 0x10d,0);
  FUN_140286a50(param_1 + 0x12f,1);
  FUN_140286a50(param_1 + 0x151,2);
  local_268 = (undefined8 *******)0x0;
  uStack_260 = 0;
  uVar16 = 0;
  local_258 = 0;
  local_250 = 0;
  FUN_140054cf0(&local_268,&PTR_140610690,0);
  plVar10 = (longlong *)param_1[0x107];
  if (*(int *)((longlong)plVar10 + 0x11c) < 1) goto LAB_1402e2c71;
  if ((*(int *)((longlong)plVar10 + 0x11c) < 0x28) ||
     (*(char *)(*(longlong *)(lVar4 + lVar17 * 0x10) + 0x4bf) != '\0')) {
    plVar10 = (longlong *)(**(code **)(*plVar10 + 0x48))(plVar10,2);
    uVar16 = 0;
    cVar7 = (**(code **)(*plVar10 + 0x30))(plVar10);
    if (cVar7 == '\0') goto LAB_1402e2c71;
    if (*DAT_1407bb780 == '\0') {
      pcVar5 = (code *)swi(3);
      plVar10 = (longlong *)(*pcVar5)();
      return plVar10;
    }
    lVar17 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((0x824 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar17 >> 5)) &&
       (ppuVar15 = (undefined **)(lVar17 + 0x10480), 7 < *(ulonglong *)(lVar17 + 0x10498))) {
      ppuVar15 = (undefined **)*ppuVar15;
    }
    FUN_1400547f0(local_248,0x100,ppuVar15,*(undefined4 *)(param_1[0x107] + 0x11c));
    lVar17 = -1;
    do {
      lVar17 = lVar17 + 1;
    } while (local_248[lVar17] != 0);
    FUN_1400549d0(&local_268,local_248);
    plVar10 = (longlong *)
              (**(code **)(*(longlong *)param_1[0x107] + 0x48))((longlong *)param_1[0x107],2);
    pcVar5 = *(code **)(*plVar10 + 0x68);
    lVar17 = *(longlong *)(param_1[0x105] + 0x30);
    local_2e8 = 0;
    plStack_2e0 = (longlong *)0x0;
    lVar4 = *(longlong *)(lVar17 + 0x10);
    if (lVar4 == 0) {
LAB_1402e2f18:
                    /* WARNING: Subroutine does not return */
      FUN_14008ea80();
    }
    iVar2 = *(int *)(lVar4 + 8);
    do {
      if (iVar2 == 0) goto LAB_1402e2f18;
      LOCK();
      iVar8 = *(int *)(lVar4 + 8);
      bVar18 = iVar2 == iVar8;
      if (bVar18) {
        *(int *)(lVar4 + 8) = iVar2 + 1;
        iVar8 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar8;
    } while (!bVar18);
    local_2e8 = *(undefined8 *)(lVar17 + 8);
    plVar3 = *(longlong **)(lVar17 + 0x10);
    local_2fc = 3;
    local_328 = 0;
    plStack_2e0 = plVar3;
    local_2f8 = FUN_14055b4d8(local_2e8,0,&Entity::RTTI_Type_Descriptor,
                              &Player::RTTI_Type_Descriptor);
    if (local_2f8 == 0) {
      local_2f8 = 0;
      plStack_2f0 = (longlong *)0x0;
      plVar14 = plVar3;
    }
    else {
      local_2e8 = 0;
      plStack_2e0 = (longlong *)0x0;
      plVar14 = (longlong *)0x0;
      plStack_2f0 = plVar3;
    }
    cVar7 = (*pcVar5)(plVar10,&local_2f8);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar14 + 1;
      lVar17 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
    }
    uVar16 = 0;
    if (cVar7 != '\0') goto LAB_1402e2c71;
  }
  else {
    if (*DAT_1407bb780 == '\0') {
      pcVar5 = (code *)swi(3);
      plVar10 = (longlong *)(*pcVar5)();
      return plVar10;
    }
    lVar17 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((0x825 < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar17 >> 5)) &&
       (ppuVar15 = (undefined **)(lVar17 + 0x104a0), 7 < *(ulonglong *)(lVar17 + 0x104b8))) {
      ppuVar15 = (undefined **)*ppuVar15;
    }
    lVar17 = -1;
    do {
      lVar17 = lVar17 + 1;
    } while (*(short *)((longlong)ppuVar15 + lVar17 * 2) != 0);
    FUN_1400549d0(&local_268,ppuVar15);
  }
  uVar16 = 1;
LAB_1402e2c71:
  lVar17 = (**(code **)*param_1)(param_1);
  if (lVar17 != 0) {
    local_298 = &local_268;
    if (7 < local_250) {
      local_298 = local_268;
    }
    local_2a8[0] = 6;
    local_290 = (undefined4)local_258;
    local_28c = local_2bc;
    local_288 = 3;
    lVar17 = param_1[0x1c0];
    local_278 = uVar16;
    uVar9 = (**(code **)*param_1)(param_1);
    uVar9 = IggyPlayerRootPath(uVar9);
    uVar12 = (**(code **)*param_1)(param_1);
    local_320 = local_2a8;
    local_328 = 2;
    IggyPlayerCallMethodRS(uVar12,local_2c8,uVar9,lVar17);
  }
  plVar10 = (longlong *)param_3[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    lVar17 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  thunk_FUN_1401fe000(param_3,0x30);
  *(undefined1 *)((longlong)param_1 + 0x1a4) = 0;
  FUN_140055150(&local_268);
  return param_1;
}



// ===== FUN_1402e48b0 @ 0x1402e48b0 [ui] =====

longlong *
FUN_1402e48b0(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined4 uStack0000000000000028;
  undefined4 uVar11;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  param_1[0x33] = (longlong)&DAT_14064a8d0;
  param_1[0x104] = (longlong)&DAT_14064a8c8;
  param_1[0x263] = (longlong)IUIScene_AbstractContainerMenu::vftable;
  param_1[0x264] = 0;
  *(undefined1 *)(param_1 + 0x265) = 0;
  param_1[0x276] = 0;
  param_1[0x266] = 0;
  *(undefined1 *)(param_1 + 0x267) = 0;
  uStack0000000000000028 = 1;
  FUN_1402e06a0(param_1,param_2,param_4);
  param_1[0x103] = (longlong)IUIScene_BeaconMenu::vftable;
  *(undefined ***)((longlong)*(int *)(param_1[0x104] + 4) + 0x820 + (longlong)param_1) =
       IUIScene_BeaconMenu::vftable;
  *(int *)((longlong)*(int *)(param_1[0x104] + 4) + 0x81c + (longlong)param_1) =
       *(int *)(param_1[0x104] + 4) + -0x28;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  *(undefined1 *)(param_1 + 0x107) = 1;
  *param_1 = (longlong)UIScene_BeaconMenu::vftable;
  param_1[0x103] = (longlong)UIScene_BeaconMenu::vftable;
  *(undefined ***)((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1) =
       UIScene_BeaconMenu::vftable;
  *(int *)((longlong)*(int *)(param_1[0x33] + 4) + 0x194 + (longlong)param_1) =
       *(int *)(param_1[0x33] + 4) + -0x1180;
  FUN_14027f6d0(param_1 + 0x108);
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  *(undefined1 *)(param_1 + 0x123) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84c) = 0;
  param_1[0x108] = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x129) = 0xffffffff;
  plVar4 = param_1 + 0x12a;
  FUN_14027f6d0(plVar4);
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  *(undefined1 *)(param_1 + 0x145) = 0;
  *(undefined4 *)((longlong)param_1 + 0x95c) = 0;
  *plVar4 = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x14b) = 0xffffffff;
  plVar3 = param_1 + 0x14c;
  FUN_14027f6d0(plVar3);
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  *(undefined1 *)(param_1 + 0x167) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa6c) = 0;
  *plVar3 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x16a) = 1;
  plVar2 = param_1 + 0x16b;
  FUN_14027f6d0(plVar2);
  param_1[0x187] = 0;
  param_1[0x188] = 0;
  *(undefined1 *)(param_1 + 0x186) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb64) = 0;
  *plVar2 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x189) = 1;
  uVar11 = 1;
  _eh_vector_constructor_iterator_
            (param_1 + 0x18a,0xd8,7,FUN_140280710,(_func_void_void_ptr *)&LAB_140271e50);
  FUN_14027f6d0(param_1 + 0x247);
  param_1[0x247] = (longlong)UIControl_BeaconEffectButton::vftable;
  *(undefined8 *)((longlong)param_1 + 0x12f4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x12fc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12fe) = 0;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  uVar6 = FUN_1400899e0(&local_50,0x621);
  FUN_140283b10(plVar3,uVar6);
  uVar6 = FUN_1400899e0(&local_50,0x622);
  FUN_140283b10(plVar2,uVar6);
  if (*(char *)((longlong)param_1 + 0xd04) != '\0') {
    iVar5 = IggyValueSetBooleanRS(param_1 + 0x18e,param_1[0x19d],0,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0xd04) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xddc) != '\0') {
    iVar5 = IggyValueSetBooleanRS(param_1 + 0x1a9,param_1[0x1b8],0,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0xddc) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xeb4) != '\0') {
    iVar5 = IggyValueSetBooleanRS(param_1 + 0x1c4,param_1[0x1d3],0,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0xeb4) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xf8c) != '\0') {
    iVar5 = IggyValueSetBooleanRS(param_1 + 0x1df,param_1[0x1ee],0,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0xf8c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1064) != '\0') {
    iVar5 = IggyValueSetBooleanRS(param_1 + 0x1fa,param_1[0x209],0,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0x1064) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x113c) != '\0') {
    iVar5 = IggyValueSetBooleanRS(param_1 + 0x215,param_1[0x224],0,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0x113c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1214) != '\0') {
    iVar5 = IggyValueSetBooleanRS(param_1 + 0x230,param_1[0x23f],0,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
    }
    *(undefined1 *)((longlong)param_1 + 0x1214) = 0;
  }
  plVar3 = *(longlong **)(DAT_140790e60 + 0xb0 + (longlong)*(int *)(param_3 + 4) * 8);
  if (plVar3 != (longlong *)0x0) {
    lVar7 = (**(code **)(*plVar3 + 0xd8))(plVar3);
    *(undefined4 *)((longlong)*(int *)(param_1[0x33] + 4) + 0x1ac + (longlong)param_1) =
         *(undefined4 *)(lVar7 + 8);
    uVar6 = (**(code **)(*plVar3 + 0xd8))(plVar3);
    FUN_140083c10(uVar6,0x21,param_1);
  }
  FUN_140045590(param_1 + 0x105,param_3 + 2);
  uVar6 = FUN_140558c80(0x110);
  if (param_3[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[3] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_60 = param_3[2];
  uStack_58 = param_3[3];
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_50 = *param_3;
  uStack_48 = param_3[1];
  uVar6 = FUN_140443e40(uVar6,&local_50,&local_60);
  FUN_14008b090((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1,
                *(undefined4 *)(param_3 + 4),uVar6,1,CONCAT44(uVar11,1),0x33,0x3e,0);
  FUN_140286a50(param_1 + 0x108,0);
  lVar7 = *(longlong *)((longlong)*(int *)(param_1[0x33] + 4) + 0x1a0 + (longlong)param_1);
  uVar9 = *(longlong *)(lVar7 + 0x28) - *(longlong *)(lVar7 + 0x20) >> 3;
  uVar8 = (uint)uVar9;
  uVar10 = uVar8 + 4;
  while (uVar8 < uVar10) {
    FUN_140286a50(plVar4,uVar9 & 0xffffffff);
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
  }
  plVar4 = (longlong *)param_3[3];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  thunk_FUN_1401fe000(param_3,0x28);
  return param_1;
}



// ===== FUN_1402e6790 @ 0x1402e6790 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1402e6790(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  undefined1 auStackY_d8 [32];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStackY_d8;
  param_1[0x33] = (longlong)&DAT_14064a984;
  param_1[0x103] = (longlong)&DAT_14064a97c;
  param_1[500] = (longlong)IUIScene_AbstractContainerMenu::vftable;
  param_1[0x1f5] = 0;
  *(undefined1 *)(param_1 + 0x1f6) = 0;
  param_1[0x207] = 0;
  param_1[0x1f7] = 0;
  *(undefined1 *)(param_1 + 0x1f8) = 0;
  local_80 = 1;
  local_78 = param_3;
  local_70 = param_1;
  FUN_1402e06a0(param_1,param_2,param_4);
  *(undefined ***)((longlong)*(int *)(param_1[0x103] + 4) + 0x818 + (longlong)param_1) =
       IUIScene_BrewingMenu::vftable;
  *param_1 = (longlong)UIScene_BrewingStandMenu::vftable;
  *(undefined ***)((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1) =
       UIScene_BrewingStandMenu::vftable;
  *(int *)((longlong)*(int *)(param_1[0x33] + 4) + 0x194 + (longlong)param_1) =
       *(int *)(param_1[0x33] + 4) + -0xe08;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  plVar9 = param_1 + 0x106;
  _eh_vector_constructor_iterator_(plVar9,0x110,3,FUN_1402867c0,FUN_140271e20);
  FUN_14027f6d0(param_1 + 0x16c);
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  *(undefined1 *)(param_1 + 0x187) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb6c) = 0;
  param_1[0x16c] = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x18d) = 0xffffffff;
  plVar3 = param_1 + 0x18e;
  FUN_14027f6d0(plVar3);
  param_1[0x1aa] = 0;
  param_1[0x1ab] = 0;
  *(undefined1 *)(param_1 + 0x1a9) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc7c) = 0;
  *plVar3 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_140285900(param_1 + 0x1ad);
  FUN_140285900(param_1 + 0x1d0);
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  uVar5 = FUN_140089d90(&local_90,&PTR_140610690);
  FUN_140285ae0(param_1 + 0x1ad,uVar5,0,0);
  uVar5 = FUN_140089d90(&local_90,&PTR_140610690);
  FUN_140285ae0(param_1 + 0x1d0,uVar5,0,0);
  puVar4 = local_78;
  FUN_140045590(param_1 + 0x104,local_78 + 2);
  uVar5 = (**(code **)(*(longlong *)(param_1[0x104] + 0x40) + 0x30))
                    ((longlong *)(param_1[0x104] + 0x40),&local_68);
  uVar5 = FUN_140089cb0(&local_90,uVar5);
  FUN_140283b10(plVar3,uVar5);
  FUN_140055150(&local_68);
  plVar3 = *(longlong **)(DAT_140790e60 + 0xb0 + (longlong)*(int *)(puVar4 + 4) * 8);
  if (plVar3 != (longlong *)0x0) {
    lVar6 = (**(code **)(*plVar3 + 0xd8))(plVar3);
    *(undefined4 *)((longlong)*(int *)(param_1[0x33] + 4) + 0x1ac + (longlong)param_1) =
         *(undefined4 *)(lVar6 + 8);
    uVar5 = (**(code **)(*plVar3 + 0xd8))(plVar3);
    FUN_140083c10(uVar5,0x11,param_1);
  }
  uVar5 = FUN_140558c80(0x108);
  if (puVar4[3] != 0) {
    LOCK();
    piVar1 = (int *)(puVar4[3] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_68 = puVar4[2];
  uStack_60 = puVar4[3];
  if (puVar4[1] != 0) {
    LOCK();
    piVar1 = (int *)(puVar4[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_90 = *puVar4;
  uStack_88 = puVar4[1];
  uVar5 = FUN_140442490(uVar5,&local_90,&local_68);
  FUN_14008b090((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1,
                *(undefined4 *)(puVar4 + 4),uVar5,1);
  FUN_140286a50(param_1 + 0x16c,3);
  uVar8 = 0;
  do {
    uVar7 = uVar8 + 1;
    for (; uVar8 < uVar7; uVar8 = uVar8 + 1) {
      FUN_140286a50(plVar9,uVar8);
    }
    plVar9 = plVar9 + 0x22;
    uVar8 = uVar7;
  } while (uVar7 < 3);
  plVar9 = (longlong *)puVar4[3];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar9 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  plVar9 = (longlong *)puVar4[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar9 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  thunk_FUN_1401fe000(puVar4,0x28);
  return param_1;
}



// ===== FUN_1402e7840 @ 0x1402e7840 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1402e7840(longlong *param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined1 local_90;
  undefined4 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_38;
  
  local_38 = DAT_1407502c0 ^ (ulonglong)auStack_c8;
  uVar9 = 0;
  param_1[0x33] = (longlong)&DAT_14064aef0;
  param_1[0x103] = (longlong)&DAT_14064b198;
  param_1[0x147] = (longlong)IUIScene_AbstractContainerMenu::vftable;
  param_1[0x148] = 0;
  *(undefined1 *)(param_1 + 0x149) = 0;
  param_1[0x15a] = 0;
  param_1[0x14a] = 0;
  *(undefined1 *)(param_1 + 0x14b) = 0;
  local_88 = 1;
  local_60 = param_1;
  FUN_1402e06a0(param_1,param_2,param_4);
  *(undefined ***)((longlong)*(int *)(param_1[0x103] + 4) + 0x818 + (longlong)param_1) =
       IUIScene_ContainerMenu::vftable;
  *param_1 = (longlong)UIScene_ContainerMenu::vftable;
  *(undefined ***)((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1) =
       UIScene_ContainerMenu::vftable;
  *(int *)((longlong)*(int *)(param_1[0x33] + 4) + 0x194 + (longlong)param_1) =
       *(int *)(param_1[0x33] + 4) + -0x8a0;
  plVar4 = param_1 + 0x105;
  local_80 = plVar4;
  FUN_14027f6d0(plVar4);
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x834) = 0;
  *plVar4 = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x126) = 0xffffffff;
  plVar4 = param_1 + 0x127;
  local_80 = plVar4;
  FUN_14027f6d0(plVar4);
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  *(undefined1 *)(param_1 + 0x142) = 0;
  *(undefined4 *)((longlong)param_1 + 0x944) = 0;
  *plVar4 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x145) = 1;
  uVar5 = (**(code **)(*(longlong *)param_3[2] + 8))();
  *(bool *)(param_1 + 0x104) = 0x1b < uVar5;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  uVar6 = (**(code **)(*(longlong *)param_3[2] + 0x30))((longlong *)param_3[2],&local_58);
  uVar6 = FUN_140089cb0(&local_78,uVar6);
  FUN_140283b10(plVar4,uVar6);
  FUN_140055150(&local_58);
  local_80 = (longlong *)FUN_140558c80(0x100);
  if (param_3[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[3] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_58 = param_3[2];
  uStack_50 = param_3[3];
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_78 = *param_3;
  uStack_70 = param_3[1];
  lVar7 = FUN_140440160(local_80,&local_78,&local_58);
  if (*(longlong *)(DAT_140790e60 + 0xb0 + (longlong)param_2 * 8) != 0) {
    plVar4 = *(longlong **)(DAT_140790e60 + 0xb0 + (longlong)*(int *)(param_3 + 4) * 8);
    lVar8 = (**(code **)(*plVar4 + 0xd8))(plVar4);
    *(undefined4 *)((longlong)*(int *)(param_1[0x33] + 4) + 0x1ac + (longlong)param_1) =
         *(undefined4 *)(lVar8 + 8);
    uVar6 = (**(code **)(*plVar4 + 0xd8))(plVar4);
    FUN_140083c10(uVar6,9,param_1);
  }
  uVar5 = (int)(*(longlong *)(lVar7 + 0x28) - *(longlong *)(lVar7 + 0x20) >> 3) - 0x24;
  local_90 = 0;
  local_98 = 3;
  local_a0 = 0;
  local_a8 = uVar5;
  FUN_14008b090((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1,
                *(undefined4 *)(param_3 + 4),lVar7,1);
  if (uVar5 != 0) {
    do {
      FUN_140286a50(param_1 + 0x105,uVar9);
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar5);
  }
  plVar4 = (longlong *)param_3[3];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  thunk_FUN_1401fe000(param_3,0x28);
  return param_1;
}



// ===== FUN_1402e8c40 @ 0x1402e8c40 [ui] =====

longlong * FUN_1402e8c40(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uStack0000000000000028;
  undefined4 uVar11;
  longlong *plVar12;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined8 local_40;
  
  param_1[0x33] = (longlong)&DAT_14064b438;
  param_1[0x104] = (longlong)&DAT_14064b430;
  param_1[0x245] = (longlong)IUIScene_AbstractContainerMenu::vftable;
  param_1[0x246] = 0;
  *(undefined1 *)(param_1 + 0x247) = 0;
  param_1[600] = 0;
  param_1[0x248] = 0;
  *(undefined1 *)(param_1 + 0x249) = 0;
  uStack0000000000000028 = 1;
  FUN_1402e06a0(param_1,param_2,param_4);
  plVar2 = param_1 + 0x103;
  *plVar2 = (longlong)IUIScene_CreativeMenu::vftable;
  *(undefined ***)((longlong)*(int *)(param_1[0x104] + 4) + 8 + (longlong)plVar2) =
       IUIScene_CreativeMenu::vftable;
  *(int *)((longlong)*(int *)(param_1[0x104] + 4) + 4 + (longlong)plVar2) =
       *(int *)(param_1[0x104] + 4) + -0x70;
  *(undefined1 *)(param_1 + 0x106) = 0;
  *(undefined8 *)((longlong)param_1 + 0x83c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x834) = 0;
  param_1[0x109] = 0;
  param_1[0x10d] = 0;
  param_1[0x10a] = 0;
  param_1[0x10e] = 0;
  param_1[0x10b] = 0;
  param_1[0x10f] = 0;
  param_1[0x10c] = 0;
  param_1[0x110] = 0;
  *param_1 = (longlong)UIScene_CreativeMenu::vftable;
  *plVar2 = (longlong)UIScene_CreativeMenu::vftable;
  *(undefined ***)((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1) =
       UIScene_CreativeMenu::vftable;
  *(int *)((longlong)*(int *)(param_1[0x33] + 4) + 0x194 + (longlong)param_1) =
       *(int *)(param_1[0x33] + 4) + -0x1090;
  FUN_14027f6d0(param_1 + 0x111);
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  *(undefined1 *)(param_1 + 300) = 0;
  *(undefined4 *)((longlong)param_1 + 0x894) = 0;
  param_1[0x111] = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x132) = 0xffffffff;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(param_1 + 0x135,0xf0,9,FUN_14027fee0,FUN_140271e20);
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  plVar6 = (longlong *)FUN_140558c80(0x60);
  *plVar6 = 0;
  plVar6[1] = 0;
  *(undefined4 *)(plVar6 + 1) = 1;
  *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
  *plVar6 = (longlong)std::_Ref_count_obj2<class_SimpleContainer>::vftable;
  plVar5 = plVar6 + 2;
  local_58 = (longlong *)0x0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0;
  local_40 = 0;
  plVar12 = plVar6;
  FUN_140054cf0(&local_58,&PTR_140610690,0);
  uVar10 = 0x32;
  uVar7 = CONCAT44(uVar11,0x32);
  FUN_1403ec630(plVar5,0,&local_58,0,uVar7);
  uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack0000000000000028 = 3;
  local_58 = plVar5;
  plStack_50 = plVar6;
  uVar7 = FUN_140558c80(0x108);
  lVar8 = *param_3;
  if (*(longlong *)(lVar8 + 0x348) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(lVar8 + 0x348) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_78 = *(undefined8 *)(lVar8 + 0x340);
  uStack_70 = *(undefined8 *)(lVar8 + 0x348);
  LOCK();
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  UNLOCK();
  local_68 = plVar5;
  plStack_60 = plVar6;
  lVar8 = FUN_14009e0c0(uVar7,&local_68,&local_78);
  param_1[0x105] = lVar8;
  FUN_14008b090((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1,
                *(undefined4 *)((longlong)param_3 + 0x14),lVar8,0,CONCAT44(uVar11,0xffffffff),0x12,
                0x1d,(char)param_3[2],plVar12,uVar7);
  pcVar4 = *(code **)(param_1[0xae] + 0x28);
  uVar7 = FUN_140089d90(&local_68,&PTR_140610690);
  (*pcVar4)(param_1 + 0xae,uVar7,0,0);
  *(undefined1 *)(param_1 + 0x243) = 1;
  uVar9 = 0;
  do {
    FUN_140286a50(param_1 + 0x111,uVar9);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x32);
  do {
    FUN_140286a50(param_1 + 0x4c,uVar10);
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0x3b);
  plVar5 = *(longlong **)(DAT_140790e60 + 0xb0 + (longlong)*(int *)((longlong)param_3 + 0x14) * 8);
  if (plVar5 != (longlong *)0x0) {
    lVar8 = (**(code **)(*plVar5 + 0xd8))(plVar5);
    *(undefined4 *)((longlong)*(int *)(param_1[0x33] + 4) + 0x1ac + (longlong)param_1) =
         *(undefined4 *)(lVar8 + 8);
    uVar7 = (**(code **)(*plVar5 + 0xd8))(plVar5);
    FUN_140083c10(uVar7,0xd,param_1);
  }
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar5 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
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
  thunk_FUN_1401fe000(param_3,0x20);
  *(undefined4 *)((longlong)param_1 + 0x844) = 8;
  if (*(int *)((longlong)param_1 + 0x844) != 0) {
    (**(code **)*plVar2)(plVar2,0);
  }
  *(undefined4 *)((longlong)param_1 + 0x844) = 0;
  (**(code **)(*plVar2 + 8))(plVar2,(int)param_1[0x10d] + 1,*(undefined4 *)(*DAT_140790380 + 0x38));
  FUN_14009de60(*DAT_140790380,param_1[0x105],
                *(undefined4 *)
                 ((longlong)param_1 + (longlong)*(int *)((longlong)param_1 + 0x844) * 4 + 0x848),
                *(undefined4 *)
                 ((longlong)param_1 + (longlong)*(int *)((longlong)param_1 + 0x844) * 4 + 0x868));
  LOCK();
  plVar2 = plVar6 + 1;
  lVar8 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)lVar8 == 1) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  return param_1;
}



// ===== FUN_1402ea3a0 @ 0x1402ea3a0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1402ea3a0(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined1 local_90;
  undefined4 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_38;
  
  local_38 = DAT_1407502c0 ^ (ulonglong)auStack_c8;
  uVar7 = 0;
  param_1[0x33] = (longlong)&DAT_14064aef0;
  param_1[0x103] = (longlong)&DAT_14064b198;
  param_1[0x147] = (longlong)IUIScene_AbstractContainerMenu::vftable;
  param_1[0x148] = 0;
  *(undefined1 *)(param_1 + 0x149) = 0;
  param_1[0x15a] = 0;
  param_1[0x14a] = 0;
  *(undefined1 *)(param_1 + 0x14b) = 0;
  local_88 = 1;
  local_60 = param_1;
  FUN_1402e06a0(param_1,param_2,param_4);
  *(undefined ***)((longlong)*(int *)(param_1[0x103] + 4) + 0x818 + (longlong)param_1) =
       IUIScene_DispenserMenu::vftable;
  *param_1 = (longlong)UIScene_DispenserMenu::vftable;
  *(undefined ***)((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1) =
       UIScene_DispenserMenu::vftable;
  *(int *)((longlong)*(int *)(param_1[0x33] + 4) + 0x194 + (longlong)param_1) =
       *(int *)(param_1[0x33] + 4) + -0x8a0;
  plVar4 = param_1 + 0x105;
  local_80 = plVar4;
  FUN_14027f6d0(plVar4);
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x834) = 0;
  *plVar4 = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x126) = 0xffffffff;
  plVar3 = param_1 + 0x127;
  local_80 = plVar3;
  FUN_14027f6d0(plVar3);
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  *(undefined1 *)(param_1 + 0x142) = 0;
  *(undefined4 *)((longlong)param_1 + 0x944) = 0;
  *plVar3 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x145) = 1;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  uVar5 = (**(code **)(*(longlong *)(param_3[2] + 0x40) + 0x30))
                    ((longlong *)(param_3[2] + 0x40),&local_58);
  uVar5 = FUN_140089cb0(&local_78,uVar5);
  FUN_140283b10(plVar3,uVar5);
  FUN_140055150(&local_58);
  plVar3 = *(longlong **)(DAT_140790e60 + 0xb0 + (longlong)*(int *)(param_3 + 4) * 8);
  if (plVar3 != (longlong *)0x0) {
    lVar6 = (**(code **)(*plVar3 + 0xd8))(plVar3);
    *(undefined4 *)((longlong)*(int *)(param_1[0x33] + 4) + 0x1ac + (longlong)param_1) =
         *(undefined4 *)(lVar6 + 8);
    uVar5 = (**(code **)(*plVar3 + 0xd8))(plVar3);
    FUN_140083c10(uVar5,10,param_1);
  }
  local_80 = (longlong *)FUN_140558c80(0xf8);
  if (param_3[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[3] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_58 = param_3[2];
  uStack_50 = param_3[3];
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_78 = *param_3;
  uStack_70 = param_3[1];
  uVar5 = FUN_140441dd0(local_80,&local_78,&local_58);
  local_a8 = (**(code **)(*(longlong *)(param_3[2] + 0x40) + 8))();
  *(undefined4 *)(param_1 + 0x104) = local_a8;
  local_90 = 0;
  local_98 = 0x11;
  local_a0 = 0xe;
  FUN_14008b090((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1,
                *(undefined4 *)(param_3 + 4),uVar5,1);
  do {
    FUN_140286a50(plVar4,uVar7);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 9);
  plVar4 = (longlong *)param_3[3];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
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
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
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
  thunk_FUN_1401fe000(param_3,0x28);
  return param_1;
}



// ===== FUN_1402eab90 @ 0x1402eab90 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402eab90(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStackY_98 [32];
  undefined8 *local_68;
  char *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1407502c0 ^ (ulonglong)auStackY_98;
  FUN_1402e0100();
  uVar6 = (**(code **)*param_1)(param_1);
  IggyPlayerRootPath(uVar6);
  puVar1 = param_1 + 0x35;
  puVar7 = param_1 + 0x104;
  local_50 = 10;
  uStack_48 = 0xf;
  local_60 = (char *)0x6569646572676e69;
  uStack_58 = 0x746e;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x107] = puVar1;
  puVar2 = param_1 + 0x2a;
  plVar3 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_68);
  }
  else {
    *plVar3 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x145;
  uStack_58 = 0;
  local_50 = 7;
  uStack_48 = 0xf;
  local_60 = (char *)0x316e6f74747542;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x148] = puVar1;
  plVar3 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_68);
  }
  else {
    *plVar3 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x16e;
  uStack_58 = 0;
  local_50 = 7;
  uStack_48 = 0xf;
  local_60 = (char *)0x326e6f74747542;
  (**(code **)param_1[0x16e])(puVar7,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x171] = puVar1;
  puVar4 = (undefined8 *)param_1[0x2b];
  local_68 = puVar7;
  if (puVar4 == (undefined8 *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,puVar4,&local_68);
  }
  else {
    *puVar4 = puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x197;
  uStack_58 = 0;
  local_50 = 7;
  uStack_48 = 0xf;
  local_60 = (char *)0x336e6f74747542;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x19a] = puVar1;
  plVar3 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_68);
  }
  else {
    *plVar3 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x126;
  local_50 = 0xc;
  uStack_48 = 0xf;
  local_60 = (char *)0x4c746e6168636e65;
  uStack_58 = 0x6c656261;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if (0x1f < ((longlong)local_60 - *(longlong *)((longlong)local_60 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x129] = puVar1;
  plVar3 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_68);
  }
  else {
    *plVar3 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x1c0;
  pcVar5 = *(code **)*puVar7;
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = (char *)FUN_140054e60(0x20);
  local_50 = 0x14;
  uStack_48 = 0x1f;
  builtin_strncpy(local_60,"iggy_EnchantmentBook",0x15);
  (*pcVar5)(puVar7,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x1c3] = puVar1;
  plVar3 = (longlong *)param_1[0x2b];
  if (plVar3 == (longlong *)param_1[0x2c]) {
    local_68 = puVar7;
    FUN_1400491a0(puVar2,plVar3,&local_68);
  }
  else {
    *plVar3 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  return 1;
}



// ===== FUN_1402eb110 @ 0x1402eb110 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1402eb110(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  LARGE_INTEGER LVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  longlong lVar12;
  undefined1 auStackY_e8 [32];
  LARGE_INTEGER local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  longlong local_80 [4];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_1407502c0 ^ (ulonglong)auStackY_e8;
  param_1[0x33] = (longlong)&DAT_14064bde8;
  param_1[0x103] = (longlong)&DAT_14064bde0;
  param_1[0x1e2] = (longlong)IUIScene_AbstractContainerMenu::vftable;
  param_1[0x1e3] = 0;
  *(undefined1 *)(param_1 + 0x1e4) = 0;
  param_1[0x1f5] = 0;
  param_1[0x1e5] = 0;
  *(undefined1 *)(param_1 + 0x1e6) = 0;
  local_88 = param_1;
  FUN_1402e06a0(param_1,param_2,param_4);
  *(undefined ***)((longlong)*(int *)(param_1[0x103] + 4) + 0x818 + (longlong)param_1) =
       IUIScene_EnchantingMenu::vftable;
  *param_1 = (longlong)UIScene_EnchantingMenu::vftable;
  *(undefined ***)((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1) =
       UIScene_EnchantingMenu::vftable;
  *(int *)((longlong)*(int *)(param_1[0x33] + 4) + 0x194 + (longlong)param_1) =
       *(int *)(param_1[0x33] + 4) + -0xd78;
  LVar3.QuadPart = (LONGLONG)(param_1 + 0x104);
  local_a0.QuadPart = LVar3.QuadPart;
  FUN_14027f6d0(LVar3.QuadPart);
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  *(undefined1 *)(param_1 + 0x11f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x82c) = 0;
  *(undefined ***)LVar3 = UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x125) = 0xffffffff;
  LVar3.QuadPart = (LONGLONG)(param_1 + 0x126);
  local_a0.QuadPart = LVar3.QuadPart;
  FUN_14027f6d0(LVar3.QuadPart);
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  *(undefined1 *)(param_1 + 0x141) = 0;
  *(undefined4 *)((longlong)param_1 + 0x93c) = 0;
  *(undefined ***)LVar3 = UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x144) = 1;
  _eh_vector_constructor_iterator_(param_1 + 0x145,0x148,3,FUN_140282b50,FUN_1402eb740);
  LVar3.QuadPart = (LONGLONG)(param_1 + 0x1c0);
  local_a0.QuadPart = LVar3.QuadPart;
  FUN_14027f6d0(LVar3.QuadPart);
  *(undefined ***)LVar3 = UIControl_EnchantmentBook::vftable;
  QueryPerformanceCounter(&local_a0);
  local_a0.QuadPart = local_a0.QuadPart + 0x1ed8b55fac9dec;
  param_1[0x1d8] = (local_a0.QuadPart ^ 0x5deece66dU) & 0xffffffffffff;
  *(undefined1 *)(param_1 + 0x1d9) = 0;
  param_1[0x1e0] = 0;
  *(undefined4 *)(param_1 + 0x1c1) = 7;
  param_1[0x1d7] = 0;
  param_1[0x1df] = 0;
  plVar9 = (longlong *)param_1[0x1e0];
  param_1[0x1e0] = 0;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  param_1[0x1db] = 0;
  *(undefined8 *)((longlong)param_1 + 0xee4) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xeec) = 0;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  *(undefined4 *)(param_1 + 0x165) = 0;
  *(undefined4 *)(param_1 + 0x18e) = 1;
  *(undefined4 *)(param_1 + 0x1b7) = 2;
  if (param_3[8] == 0) {
    if (*DAT_1407bb780 == '\0') {
      pcVar6 = (code *)swi(3);
      plVar9 = (longlong *)(*pcVar6)();
      return plVar9;
    }
    lVar12 = *(longlong *)(DAT_1407bb780 + 0x48);
    if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar12 >> 5) < 0x619) {
      ppuVar11 = &PTR_140610690;
    }
    else {
      ppuVar11 = (undefined **)(lVar12 + 0xc300);
      if (7 < *(ulonglong *)(lVar12 + 0xc318)) {
        ppuVar11 = (undefined **)*ppuVar11;
      }
    }
    local_80[0] = 0;
    local_80[1] = 0;
    local_80[2] = 0;
    local_80[3] = 0;
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (*(short *)((longlong)ppuVar11 + lVar12 * 2) != 0);
    FUN_140054cf0(local_80);
    plVar9 = local_80;
    bVar8 = true;
    bVar7 = false;
  }
  else {
    plVar9 = (longlong *)FUN_140055000(local_60,param_3 + 6);
    bVar8 = false;
    bVar7 = true;
  }
  uVar10 = FUN_140089cb0(&local_98,plVar9);
  FUN_140283b10(param_1 + 0x126,uVar10);
  if (bVar7) {
    FUN_140055150(local_60);
  }
  if (bVar8) {
    if (7 < (ulonglong)local_80[3]) {
      if (0xfff < local_80[3] * 2 + 2U) {
        if (0x1f < (local_80[0] - *(longlong *)(local_80[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      thunk_FUN_1401fe000();
    }
  }
  plVar9 = *(longlong **)(DAT_140790e60 + 0xb0 + (longlong)*(int *)((longlong)param_3 + 0x24) * 8);
  if (plVar9 != (longlong *)0x0) {
    lVar12 = (**(code **)(*plVar9 + 0xd8))(plVar9);
    *(undefined4 *)((longlong)*(int *)(param_1[0x33] + 4) + 0x1ac + (longlong)param_1) =
         *(undefined4 *)(lVar12 + 8);
    uVar10 = (**(code **)(*plVar9 + 0xd8))(plVar9);
    FUN_140083c10(uVar10,0x13,param_1);
  }
  local_a0.QuadPart = FUN_140558c80(0x148);
  uVar5 = *(undefined4 *)(param_3 + 3);
  uVar10 = param_3[2];
  if (param_3[1] != 0) {
    LOCK();
    piVar2 = (int *)(param_3[1] + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  local_98 = *param_3;
  uStack_90 = param_3[1];
  uVar10 = FUN_14043ee10(local_a0.QuadPart,&local_98,uVar10,uVar5);
  FUN_14008b090((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1,
                *(undefined4 *)((longlong)param_3 + 0x24),uVar10,1);
  FUN_140286a50(param_1 + 0x104,0);
  FUN_140055150(param_3 + 6);
  plVar9 = (longlong *)param_3[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  thunk_FUN_1401fe000(param_3,0x50);
  return param_1;
}



// ===== FUN_1402ec4f0 @ 0x1402ec4f0 [ui] =====

longlong * FUN_1402ec4f0(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  uint uVar13;
  undefined4 uStack0000000000000028;
  undefined8 local_48;
  undefined8 uStack_40;
  
  param_1[0x33] = (longlong)&DAT_14064c050;
  param_1[0x103] = (longlong)&DAT_14064c048;
  param_1[0x18b] = (longlong)IUIScene_AbstractContainerMenu::vftable;
  param_1[0x18c] = 0;
  *(undefined1 *)(param_1 + 0x18d) = 0;
  param_1[0x19e] = 0;
  param_1[0x18e] = 0;
  *(undefined1 *)(param_1 + 399) = 0;
  uVar13 = 1;
  uStack0000000000000028 = 1;
  FUN_1402e06a0(param_1,param_2,param_4);
  *(undefined ***)((longlong)*(int *)(param_1[0x103] + 4) + 0x818 + (longlong)param_1) =
       IUIScene_FireworksMenu::vftable;
  *param_1 = (longlong)UIScene_FireworksMenu::vftable;
  *(undefined ***)((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1) =
       UIScene_FireworksMenu::vftable;
  *(int *)((longlong)*(int *)(param_1[0x33] + 4) + 0x194 + (longlong)param_1) =
       *(int *)(param_1[0x33] + 4) + -0xac0;
  FUN_14027f6d0(param_1 + 0x104);
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  *(undefined1 *)(param_1 + 0x11f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x82c) = 0;
  param_1[0x104] = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x125) = 0xffffffff;
  FUN_14027f6d0(param_1 + 0x126);
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  *(undefined1 *)(param_1 + 0x141) = 0;
  *(undefined4 *)((longlong)param_1 + 0x93c) = 0;
  param_1[0x126] = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x147) = 0xffffffff;
  FUN_14027f6d0(param_1 + 0x148);
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  *(undefined1 *)(param_1 + 0x163) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4c) = 0;
  param_1[0x148] = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x169) = 0xffffffff;
  plVar8 = param_1 + 0x16a;
  FUN_14027f6d0(plVar8);
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  *(undefined1 *)(param_1 + 0x185) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb5c) = 0;
  *plVar8 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x188) = 1;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  if (*DAT_1407bb780 == '\0') {
    pcVar5 = (code *)swi(3);
    plVar8 = (longlong *)(*pcVar5)();
    return plVar8;
  }
  lVar10 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar10 >> 5) < 0xcf) {
    ppuVar12 = &PTR_140610690;
  }
  else {
    ppuVar12 = (undefined **)(lVar10 + 0x19c0);
    if (7 < *(ulonglong *)(lVar10 + 0x19d8)) {
      ppuVar12 = (undefined **)*ppuVar12;
    }
  }
  uVar9 = FUN_140089d90(&local_48,ppuVar12);
  FUN_140283b10(plVar8,uVar9);
  plVar8 = *(longlong **)(DAT_140790e60 + 0xb0 + (longlong)*(int *)((longlong)param_3 + 0x14) * 8);
  if (plVar8 != (longlong *)0x0) {
    lVar10 = (**(code **)(*plVar8 + 0xd8))(plVar8);
    *(undefined4 *)((longlong)*(int *)(param_1[0x33] + 4) + 0x1ac + (longlong)param_1) =
         *(undefined4 *)(lVar10 + 8);
    uVar9 = (**(code **)(*plVar8 + 0xd8))(plVar8);
    FUN_140083c10(uVar9,0x23,param_1);
  }
  uVar11 = FUN_140558c80(0x120);
  lVar6 = param_3[4];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar7 = param_3[3];
  lVar10 = *param_3;
  uVar9 = *(undefined8 *)(lVar10 + 0x58);
  if (*(longlong *)(lVar10 + 0x348) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(lVar10 + 0x348) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_48 = *(undefined8 *)(lVar10 + 0x340);
  uStack_40 = *(undefined8 *)(lVar10 + 0x348);
  uVar9 = FUN_14043dfc0(uVar11,&local_48,uVar9,(int)lVar7,uVar4,(int)lVar6);
  FUN_14008b090((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1,
                *(undefined4 *)((longlong)param_3 + 0x14),uVar9,1,10,0x49,0x4d,0);
  FUN_140286a50(param_1 + 0x104,0);
  do {
    FUN_140286a50(param_1 + 0x126,uVar13);
    uVar13 = uVar13 + 1;
  } while (uVar13 < 10);
  FUN_1402ece40(param_1);
  plVar8 = (longlong *)param_3[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  thunk_FUN_1401fe000(param_3,0x28);
  return param_1;
}



// ===== FUN_1402ed730 @ 0x1402ed730 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1402ed730(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined **ppuVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined1 local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStack_d8;
  param_1[0x33] = (longlong)&DAT_14064c4a8;
  param_1[0x103] = (longlong)&DAT_14064c4a0;
  param_1[0x210] = (longlong)IUIScene_AbstractContainerMenu::vftable;
  param_1[0x211] = 0;
  *(undefined1 *)(param_1 + 0x212) = 0;
  param_1[0x223] = 0;
  param_1[0x213] = 0;
  *(undefined1 *)(param_1 + 0x214) = 0;
  local_80 = 1;
  local_70 = param_1;
  FUN_1402e06a0(param_1,param_2,param_4);
  *(undefined ***)((longlong)*(int *)(param_1[0x103] + 4) + 0x818 + (longlong)param_1) =
       IUIScene_FurnaceMenu::vftable;
  *param_1 = (longlong)UIScene_FurnaceMenu::vftable;
  *(undefined ***)((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1) =
       UIScene_FurnaceMenu::vftable;
  *(int *)((longlong)*(int *)(param_1[0x33] + 4) + 0x194 + (longlong)param_1) =
       *(int *)(param_1[0x33] + 4) + -0xee8;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  plVar8 = param_1 + 0x106;
  local_98 = plVar8;
  FUN_14027f6d0(plVar8);
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  *(undefined1 *)(param_1 + 0x121) = 0;
  *(undefined4 *)((longlong)param_1 + 0x83c) = 0;
  *plVar8 = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x127) = 0xffffffff;
  plVar8 = param_1 + 0x128;
  local_98 = plVar8;
  FUN_14027f6d0(plVar8);
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  *(undefined1 *)(param_1 + 0x143) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94c) = 0;
  *plVar8 = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x149) = 0xffffffff;
  plVar8 = param_1 + 0x14a;
  local_98 = plVar8;
  FUN_14027f6d0(plVar8);
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  *(undefined1 *)(param_1 + 0x165) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa5c) = 0;
  *plVar8 = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x16b) = 0xffffffff;
  plVar8 = param_1 + 0x16c;
  local_98 = plVar8;
  FUN_14027f6d0(plVar8);
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  *(undefined1 *)(param_1 + 0x187) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb6c) = 0;
  *plVar8 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x18a) = 1;
  plVar3 = param_1 + 0x18b;
  local_98 = plVar3;
  FUN_14027f6d0(plVar3);
  param_1[0x1a7] = 0;
  param_1[0x1a8] = 0;
  *(undefined1 *)(param_1 + 0x1a6) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc64) = 0;
  *plVar3 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x1a9) = 1;
  plVar5 = param_1 + 0x1aa;
  local_98 = plVar5;
  FUN_14027f6d0(plVar5);
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  *(undefined1 *)(param_1 + 0x1c5) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd5c) = 0;
  *plVar5 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x1c8) = 1;
  FUN_140285900(param_1 + 0x1c9);
  FUN_140285900(param_1 + 0x1ec);
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  if (param_3[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[3] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  lVar9 = param_3[3];
  param_1[0x104] = param_3[2];
  plVar5 = (longlong *)param_1[0x105];
  param_1[0x105] = lVar9;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  uVar7 = (**(code **)(*(longlong *)(param_1[0x104] + 0x40) + 0x30))
                    ((longlong *)(param_1[0x104] + 0x40),&local_68);
  uVar7 = FUN_140089cb0(&local_90,uVar7);
  FUN_140283b10(plVar8,uVar7);
  FUN_140055150(&local_68);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar8 = (longlong *)(*pcVar6)();
    return plVar8;
  }
  lVar9 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar9 >> 5) < 0x61b) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar9 + 0xc340);
    if (7 < *(ulonglong *)(lVar9 + 0xc358)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  uVar7 = FUN_140089d90(&local_90,ppuVar10);
  FUN_140283b10(plVar3,uVar7);
  if (*DAT_1407bb780 == '\0') {
    pcVar6 = (code *)swi(3);
    plVar8 = (longlong *)(*pcVar6)();
    return plVar8;
  }
  lVar9 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar9 >> 5) < 0x61c) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar9 + 0xc360);
    if (7 < *(ulonglong *)(lVar9 + 0xc378)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  uVar7 = FUN_140089d90(&local_90,ppuVar10);
  FUN_140283b10(param_1 + 0x1aa,uVar7);
  uVar7 = FUN_140089d90(&local_90,&PTR_140610690);
  local_b0 = 0;
  local_b8 = 0xc;
  FUN_140285ae0(param_1 + 0x1c9,uVar7,0,0);
  uVar7 = FUN_140089d90(&local_90,&PTR_140610690);
  local_b0 = 0;
  local_b8 = 0x18;
  FUN_140285ae0(param_1 + 0x1ec,uVar7,0,0);
  plVar8 = *(longlong **)(DAT_140790e60 + 0xb0 + (longlong)*(int *)(param_3 + 4) * 8);
  if (plVar8 != (longlong *)0x0) {
    lVar9 = (**(code **)(*plVar8 + 0xd8))(plVar8);
    *(undefined4 *)((longlong)*(int *)(param_1[0x33] + 4) + 0x1ac + (longlong)param_1) =
         *(undefined4 *)(lVar9 + 8);
    uVar7 = (**(code **)(*plVar8 + 0xd8))(plVar8);
    FUN_140083c10(uVar7,4,param_1);
  }
  local_98 = (longlong *)FUN_140558c80(0x108);
  if (param_3[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[3] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_68 = param_3[2];
  uStack_60 = param_3[3];
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_90 = *param_3;
  uStack_88 = param_3[1];
  uVar7 = FUN_140440f40(local_98,&local_90,&local_68);
  local_a0 = 0;
  local_a8 = 9;
  local_b0 = 4;
  local_b8 = 3;
  FUN_14008b090((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1,
                *(undefined4 *)(param_3 + 4),uVar7,1);
  FUN_140286a50(param_1 + 0x106,1);
  FUN_140286a50(param_1 + 0x128,0);
  FUN_140286a50(param_1 + 0x14a,2);
  plVar8 = (longlong *)param_3[3];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  plVar8 = (longlong *)param_3[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  thunk_FUN_1401fe000(param_3,0x28);
  return param_1;
}



// ===== FUN_1402ee5b0 @ 0x1402ee5b0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1402ee5b0(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined1 local_90;
  undefined4 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_38;
  
  local_38 = DAT_1407502c0 ^ (ulonglong)auStack_c8;
  uVar7 = 0;
  param_1[0x33] = (longlong)&DAT_14064aef0;
  param_1[0x103] = (longlong)&DAT_14064b198;
  param_1[0x147] = (longlong)IUIScene_AbstractContainerMenu::vftable;
  param_1[0x148] = 0;
  *(undefined1 *)(param_1 + 0x149) = 0;
  param_1[0x15a] = 0;
  param_1[0x14a] = 0;
  *(undefined1 *)(param_1 + 0x14b) = 0;
  local_88 = 1;
  local_60 = param_1;
  FUN_1402e06a0(param_1,param_2,param_4);
  *(undefined ***)((longlong)*(int *)(param_1[0x103] + 4) + 0x818 + (longlong)param_1) =
       IUIScene_HopperMenu::vftable;
  *param_1 = (longlong)UIScene_HopperMenu::vftable;
  *(undefined ***)((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1) =
       UIScene_HopperMenu::vftable;
  *(int *)((longlong)*(int *)(param_1[0x33] + 4) + 0x194 + (longlong)param_1) =
       *(int *)(param_1[0x33] + 4) + -0x8a0;
  plVar4 = param_1 + 0x105;
  local_80 = plVar4;
  FUN_14027f6d0(plVar4);
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x834) = 0;
  *plVar4 = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x126) = 0xffffffff;
  plVar3 = param_1 + 0x127;
  local_80 = plVar3;
  FUN_14027f6d0(plVar3);
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  *(undefined1 *)(param_1 + 0x142) = 0;
  *(undefined4 *)((longlong)param_1 + 0x944) = 0;
  *plVar3 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x145) = 1;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  uVar5 = (**(code **)(*(longlong *)param_3[2] + 0x30))((longlong *)param_3[2],&local_58);
  uVar5 = FUN_140089cb0(&local_78,uVar5);
  FUN_140283b10(plVar3,uVar5);
  FUN_140055150(&local_58);
  plVar3 = *(longlong **)(DAT_140790e60 + 0xb0 + (longlong)*(int *)(param_3 + 4) * 8);
  if (plVar3 != (longlong *)0x0) {
    lVar6 = (**(code **)(*plVar3 + 0xd8))(plVar3);
    *(undefined4 *)((longlong)*(int *)(param_1[0x33] + 4) + 0x1ac + (longlong)param_1) =
         *(undefined4 *)(lVar6 + 8);
    uVar5 = (**(code **)(*plVar3 + 0xd8))(plVar3);
    FUN_140083c10(uVar5,0x1f,param_1);
  }
  local_80 = (longlong *)FUN_140558c80(0xf8);
  if (param_3[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[3] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_58 = param_3[2];
  uStack_50 = param_3[3];
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_78 = *param_3;
  uStack_70 = param_3[1];
  uVar5 = FUN_140440920(local_80,&local_78,&local_58);
  local_a8 = (**(code **)(*(longlong *)param_3[2] + 8))();
  *(undefined4 *)(param_1 + 0x104) = local_a8;
  local_90 = 0;
  local_98 = 0x42;
  local_a0 = 0x3f;
  FUN_14008b090((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1,
                *(undefined4 *)(param_3 + 4),uVar5,1);
  do {
    FUN_140286a50(plVar4,uVar7);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 9);
  plVar4 = (longlong *)param_3[3];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
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
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
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
  thunk_FUN_1401fe000(param_3,0x28);
  return param_1;
}



// ===== FUN_1402eeda0 @ 0x1402eeda0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402eeda0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 auStackY_88 [32];
  undefined8 *local_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1407502c0 ^ (ulonglong)auStackY_88;
  FUN_1402e0100();
  uVar6 = (**(code **)*param_1)(param_1);
  IggyPlayerRootPath(uVar6);
  puVar1 = param_1 + 0x35;
  puVar2 = param_1 + 0x10a;
  local_40 = 10;
  uStack_38 = 0xf;
  local_50 = (char *)0x64646153746f6c53;
  uStack_48 = 0x656c;
  (**(code **)*puVar2)(puVar2,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if ((char *)0x1f < local_50 + (-8 - *(longlong *)(local_50 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x10d] = puVar1;
  puVar3 = param_1 + 0x2a;
  plVar4 = (longlong *)param_1[0x2b];
  local_58 = puVar2;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar3,plVar4,&local_58);
  }
  else {
    *plVar4 = (longlong)puVar2;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar2 = param_1 + 300;
  local_40 = 9;
  uStack_38 = 0xf;
  local_50 = (char *)0x6f6d7241746f6c53;
  uStack_48 = 0x72;
  (**(code **)*puVar2)(puVar2,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if ((char *)0x1f < local_50 + (-8 - *(longlong *)(local_50 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x12f] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_58 = puVar2;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar3,plVar4,&local_58);
  }
  else {
    *plVar4 = (longlong)puVar2;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar2 = param_1 + 0x14e;
  pcVar5 = *(code **)*puVar2;
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = (char *)FUN_140054e60(0x20);
  local_40 = 0x13;
  uStack_38 = 0x1f;
  builtin_strncpy(local_50,"DonkeyInventoryList",0x14);
  (*pcVar5)(puVar2,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if ((char *)0x1f < local_50 + (-8 - *(longlong *)(local_50 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x151] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_58 = puVar2;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar3,plVar4,&local_58);
  }
  else {
    *plVar4 = (longlong)puVar2;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar2 = param_1 + 0x170;
  pcVar5 = *(code **)*puVar2;
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = (char *)FUN_140054e60(0x20);
  local_40 = 0x12;
  uStack_38 = 0x1f;
  builtin_strncpy(local_50,"horseinventoryText",0x13);
  (*pcVar5)(puVar2,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if ((char *)0x1f < local_50 + (-8 - *(longlong *)(local_50 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x173] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_58 = puVar2;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar3,plVar4,&local_58);
  }
  else {
    *plVar4 = (longlong)puVar2;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar2 = param_1 + 0x191;
  local_40 = 10;
  uStack_38 = 0xf;
  local_50 = (char *)0x726f685f79676769;
  uStack_48 = 0x6573;
  (**(code **)*puVar2)(puVar2,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if ((char *)0x1f < local_50 + (-8 - *(longlong *)(local_50 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x194] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_58 = puVar2;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar3,plVar4,&local_58);
  }
  else {
    *plVar4 = (longlong)puVar2;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_140054cf0(&local_50,L"SetIsDonkey");
  uVar6 = FUN_14026eb50(param_1,&local_50);
  param_1[399] = uVar6;
  if (7 < uStack_38) {
    if (0xfff < uStack_38 * 2 + 2) {
      if ((char *)0x1f < local_50 + (-8 - *(longlong *)(local_50 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_140054cf0(&local_50,L"SetHasInventory");
  uVar6 = FUN_14026eb50(param_1,&local_50);
  param_1[400] = uVar6;
  if (7 < uStack_38) {
    if (0xfff < uStack_38 * 2 + 2) {
      if ((char *)0x1f < local_50 + (-8 - *(longlong *)(local_50 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  return 1;
}



// ===== FUN_1402ef380 @ 0x1402ef380 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1402ef380(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined1 local_b0;
  longlong *local_a8;
  int local_a0;
  undefined4 local_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  longlong *local_70;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStack_e8;
  local_a0 = (int)param_2;
  param_1[0x33] = (longlong)&DAT_14064ce90;
  param_1[0x103] = (longlong)&DAT_14064ce88;
  param_1[0x1ab] = (longlong)IUIScene_AbstractContainerMenu::vftable;
  param_1[0x1ac] = 0;
  *(undefined1 *)(param_1 + 0x1ad) = 0;
  param_1[0x1be] = 0;
  param_1[0x1ae] = 0;
  *(undefined1 *)(param_1 + 0x1af) = 0;
  local_98 = 1;
  local_70 = param_1;
  FUN_1402e06a0(param_1,param_2,param_4);
  *(undefined ***)((longlong)*(int *)(param_1[0x103] + 4) + 0x818 + (longlong)param_1) =
       IUIScene_HorseInventoryMenu::vftable;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  *param_1 = (longlong)UIScene_HorseInventoryMenu::vftable;
  *(undefined ***)((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1) =
       UIScene_HorseInventoryMenu::vftable;
  *(int *)((longlong)*(int *)(param_1[0x33] + 4) + 0x194 + (longlong)param_1) =
       *(int *)(param_1[0x33] + 4) + -0xbc0;
  plVar6 = param_1 + 0x10a;
  local_a8 = plVar6;
  FUN_14027f6d0(plVar6);
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  *(undefined1 *)(param_1 + 0x125) = 0;
  *(undefined4 *)((longlong)param_1 + 0x85c) = 0;
  *plVar6 = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 299) = 0xffffffff;
  plVar6 = param_1 + 300;
  local_a8 = plVar6;
  FUN_14027f6d0(plVar6);
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  *(undefined1 *)(param_1 + 0x147) = 0;
  *(undefined4 *)((longlong)param_1 + 0x96c) = 0;
  *plVar6 = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x14d) = 0xffffffff;
  plVar6 = param_1 + 0x14e;
  local_a8 = plVar6;
  FUN_14027f6d0(plVar6);
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  *(undefined1 *)(param_1 + 0x169) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa7c) = 0;
  *plVar6 = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x16f) = 0xffffffff;
  plVar5 = param_1 + 0x170;
  local_a8 = plVar5;
  FUN_14027f6d0(plVar5);
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  *(undefined1 *)(param_1 + 0x18b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb8c) = 0;
  *plVar5 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x18e) = 1;
  plVar2 = param_1 + 0x191;
  local_a8 = plVar2;
  FUN_14027f6d0(plVar2);
  *plVar2 = (longlong)UIControl_MinecraftHorse::vftable;
  *(undefined4 *)(param_1 + 0x192) = 0xd;
  iVar3 = *(int *)(DAT_140790e60 + 0x24);
  iVar4 = *(int *)(DAT_140790e60 + 0x20);
  iVar12 = 1;
  iVar13 = *(int *)(*(longlong *)(DAT_140790e60 + 0x218) + 0x17c);
  uVar11 = 2;
  if (iVar13 == 0) {
    iVar13 = 1000;
  }
  else if (iVar13 < 2) goto LAB_1402ef624;
  iVar10 = 2;
  do {
    if ((iVar4 / iVar10 < 0x140) || (iVar3 / iVar10 < 0xf0)) break;
    iVar12 = iVar12 + 1;
    iVar10 = iVar10 + 1;
  } while (iVar12 < iVar13);
LAB_1402ef624:
  *(float *)(param_1 + 0x1a8) = (float)iVar4;
  *(float *)(param_1 + 0x1a9) = (float)iVar4 / (float)iVar12;
  *(float *)((longlong)param_1 + 0xd44) = (float)*(int *)(DAT_140790e60 + 0x24);
  *(float *)((longlong)param_1 + 0xd4c) = (float)iVar3 / (float)iVar12;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  uVar8 = (**(code **)(*(longlong *)param_3[2] + 0x30))((longlong *)param_3[2],&local_68);
  uVar8 = FUN_140089cb0(&local_90,uVar8);
  FUN_140283b10(plVar5,uVar8);
  FUN_140055150(&local_68);
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  lVar9 = param_3[1];
  param_1[0x104] = *param_3;
  plVar5 = (longlong *)param_1[0x105];
  param_1[0x105] = lVar9;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (param_3[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[5] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  lVar9 = param_3[5];
  param_1[0x108] = param_3[4];
  plVar5 = (longlong *)param_1[0x109];
  param_1[0x109] = lVar9;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  iVar3 = local_a0;
  plVar5 = *(longlong **)(DAT_140790e60 + 0xb0 + (longlong)local_a0 * 8);
  if (plVar5 != (longlong *)0x0) {
    lVar9 = (**(code **)(*plVar5 + 0xd8))(plVar5);
    *(undefined4 *)((longlong)*(int *)(param_1[0x33] + 4) + 0x1ac + (longlong)param_1) =
         *(undefined4 *)(lVar9 + 8);
    uVar8 = (**(code **)(*plVar5 + 0xd8))(plVar5);
    FUN_140083c10(uVar8,0x1d,param_1);
  }
  local_a8 = (longlong *)FUN_140558c80(0x108);
  if (param_3[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[5] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_80 = param_3[4];
  lStack_78 = param_3[5];
  if (param_3[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[3] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_68 = param_3[2];
  lStack_60 = param_3[3];
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_90 = *param_3;
  lStack_88 = param_3[1];
  uVar8 = FUN_140444ca0(local_a8,&local_90,&local_68,&local_80);
  cVar7 = (**(code **)(*(longlong *)param_1[0x108] + 0x8e0))((longlong *)param_1[0x108]);
  local_c8 = 0x11;
  if (cVar7 == '\0') {
    local_c8 = 2;
  }
  local_b0 = 0;
  local_b8 = 0x48;
  local_c0 = 0x43;
  FUN_14008b090((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1,iVar3,uVar8,1);
  FUN_140286a50(param_1 + 0x10a,0);
  FUN_140286a50(param_1 + 300,1);
  cVar7 = (**(code **)(*(longlong *)param_1[0x108] + 0x8e0))();
  if (cVar7 != '\0') {
    do {
      FUN_140286a50(plVar6,uVar11);
      uVar11 = uVar11 + 1;
    } while (uVar11 < 0x11);
  }
  cVar7 = (**(code **)(*(longlong *)param_1[0x108] + 0x8e0))();
  if (cVar7 == '\0') {
    FUN_1402f0300(param_1);
  }
  cVar7 = (**(code **)(*(longlong *)param_1[0x108] + 0x9f0))();
  if (cVar7 == '\0') {
    FUN_1402f03a0(param_1);
  }
  plVar6 = (longlong *)param_3[5];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  plVar6 = (longlong *)param_3[3];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  plVar6 = (longlong *)param_3[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  thunk_FUN_1401fe000(param_3,0x38);
  *(undefined1 *)((longlong)param_1 + 0x1a4) = 0;
  return param_1;
}



// ===== FUN_1402f05c0 @ 0x1402f05c0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402f05c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStackY_78 [32];
  undefined8 *local_48;
  longlong local_40 [5];
  
  local_40[4] = DAT_1407502c0 ^ (ulonglong)auStackY_78;
  FUN_1402e0100();
  uVar3 = (**(code **)*param_1)(param_1);
  IggyPlayerRootPath(uVar3);
  puVar1 = param_1 + 0x114;
  local_40[2] = 9;
  local_40[3] = 0xf;
  local_40[0] = 0x73694c726f6d7261;
  local_40[1] = 0x74;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < (ulonglong)local_40[3]) {
    if (0xfff < local_40[3] + 1U) {
      if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x117] = param_1 + 0x35;
  plVar2 = (longlong *)param_1[0x2b];
  local_48 = puVar1;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(param_1 + 0x2a,plVar2,&local_48);
  }
  else {
    *plVar2 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x136;
  local_40[2] = 0xb;
  local_40[3] = 0xf;
  local_40[0] = 0x616c705f79676769;
  local_40[1] = 0x726579;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < (ulonglong)local_40[3]) {
    if (0xfff < local_40[3] + 1U) {
      if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x139] = param_1 + 0x35;
  plVar2 = (longlong *)param_1[0x2b];
  local_48 = puVar1;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(param_1 + 0x2a,plVar2,&local_48);
  }
  else {
    *plVar2 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  FUN_140054cf0(local_40,L"UpdateEffects");
  uVar3 = FUN_14026eb50(param_1,local_40);
  param_1[0x14f] = uVar3;
  if (7 < (ulonglong)local_40[3]) {
    if (0xfff < local_40[3] * 2 + 2U) {
      if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  FUN_140054cf0(local_40,L"AddEffect");
  uVar3 = FUN_14026eb50(param_1,local_40);
  param_1[0x150] = uVar3;
  if (7 < (ulonglong)local_40[3]) {
    if (0xfff < local_40[3] * 2 + 2U) {
      if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  return 1;
}



// ===== FUN_1402f0910 @ 0x1402f0910 [ui] =====

longlong * FUN_1402f0910(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong *local_res18;
  undefined4 uStack0000000000000028;
  undefined4 local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined1 local_48 [32];
  
  param_1[0x33] = (longlong)&DAT_14064d168;
  param_1[0x103] = (longlong)&DAT_14064d410;
  param_1[0x152] = (longlong)IUIScene_AbstractContainerMenu::vftable;
  param_1[0x153] = 0;
  *(undefined1 *)(param_1 + 0x154) = 0;
  param_1[0x165] = 0;
  param_1[0x155] = 0;
  *(undefined1 *)(param_1 + 0x156) = 0;
  uStack0000000000000028 = 1;
  FUN_1402e06a0(param_1,param_2,param_4);
  *(undefined ***)((longlong)*(int *)(param_1[0x103] + 4) + 0x818 + (longlong)param_1) =
       IUIScene_InventoryMenu::vftable;
  *param_1 = (longlong)UIScene_InventoryMenu::vftable;
  *(undefined ***)((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1) =
       UIScene_InventoryMenu::vftable;
  *(int *)((longlong)*(int *)(param_1[0x33] + 4) + 0x194 + (longlong)param_1) =
       *(int *)(param_1[0x33] + 4) + -0x8f8;
  plVar7 = param_1 + 0x114;
  FUN_14027f6d0(plVar7);
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  *(undefined1 *)(param_1 + 0x12f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8ac) = 0;
  *plVar7 = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x135) = 0xffffffff;
  plVar3 = param_1 + 0x136;
  local_res18 = plVar3;
  FUN_14027f6d0(plVar3);
  *plVar3 = (longlong)UIControl_MinecraftPlayer::vftable;
  *(undefined4 *)(param_1 + 0x137) = 0xc;
  lVar5 = DAT_140790e60;
  iVar1 = *(int *)(DAT_140790e60 + 0x24);
  iVar2 = *(int *)(DAT_140790e60 + 0x20);
  iVar10 = 1;
  iVar11 = *(int *)(*(longlong *)(DAT_140790e60 + 0x218) + 0x17c);
  if (iVar11 == 0) {
    iVar11 = 1000;
  }
  else if (iVar11 < 2) goto LAB_1402f0ab5;
  iVar8 = 2;
  do {
    if ((iVar2 / iVar8 < 0x140) || (iVar1 / iVar8 < 0xf0)) break;
    iVar10 = iVar10 + 1;
    iVar8 = iVar8 + 1;
  } while (iVar10 < iVar11);
LAB_1402f0ab5:
  *(float *)(param_1 + 0x14d) = (float)iVar2;
  *(float *)(param_1 + 0x14e) = (float)iVar2 / (float)iVar10;
  *(float *)((longlong)param_1 + 0xa6c) = (float)*(int *)(lVar5 + 0x24);
  *(float *)((longlong)param_1 + 0xa74) = (float)iVar1 / (float)iVar10;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  plVar3 = *(longlong **)(DAT_140790e60 + 0xb0 + (longlong)*(int *)((longlong)param_3 + 0x14) * 8);
  if (plVar3 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar3 + 0xd8))(plVar3);
    *(undefined4 *)((longlong)*(int *)(param_1[0x33] + 4) + 0x1ac + (longlong)param_1) =
         *(undefined4 *)(lVar5 + 8);
    uVar6 = (**(code **)(*plVar3 + 0xd8))(plVar3);
    FUN_140083c10(uVar6,1,param_1);
  }
  plVar3 = (longlong *)*param_3;
  lVar5 = plVar3[0x6c];
  pcVar4 = *(code **)(*plVar3 + 0x7a0);
  (**(code **)(*DAT_1407b9858 + 0x200))(DAT_1407b9858,&local_58,0);
  uVar6 = (**(code **)(*DAT_1407b9858 + 8))(DAT_1407b9858,0);
  (*pcVar4)(plVar3,uVar6,local_48);
  FUN_14008b090((longlong)*(int *)(param_1[0x33] + 4) + 0x198 + (longlong)param_1,
                *(undefined4 *)((longlong)param_3 + 0x14),lVar5,0,9,10,0xd,(char)param_3[2]);
  uVar9 = 5;
  do {
    FUN_140286a50(plVar7,uVar9);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 9);
  FUN_1402e91a0(param_3);
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  FUN_1402f1380(param_1);
  local_res18 = (longlong *)CONCAT44(local_res18._4_4_,10);
  uStack_50 = CONCAT31(uStack_50._1_3_,1);
  local_58 = 1000;
  iStack_54 = FUN_140352410();
  iStack_54 = iStack_54 + 1000;
  plVar7 = (longlong *)FUN_140270660(param_1 + 0x1b,local_48,&local_res18);
  lVar5 = *plVar7;
  *(ulonglong *)(lVar5 + 0x14) = CONCAT44(iStack_54,local_58);
  *(undefined4 *)(lVar5 + 0x1c) = uStack_50;
  return param_1;
}



// ===== FUN_1402f2770 @ 0x1402f2770 [ui] =====

longlong *
FUN_1402f2770(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  FUN_14026d220(param_1,param_2,param_4);
  iVar12 = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  iVar11 = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x34] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1dc) = 0;
  *param_1 = (longlong)UIScene_TradingMenu::vftable;
  param_1[0x33] = (longlong)UIScene_TradingMenu::vftable;
  FUN_14027f6d0(param_1 + 0x3e);
  FUN_14027f6d0(param_1 + 0x55);
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x55] = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x76) = 0xffffffff;
  FUN_14027f6d0(param_1 + 0x77);
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined1 *)(param_1 + 0x92) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  param_1[0x77] = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  FUN_14027f6d0(param_1 + 0x99);
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  param_1[0x99] = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0xba) = 0xffffffff;
  FUN_14027f6d0(param_1 + 0xbb);
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5e4) = 0;
  param_1[0xbb] = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0xdc) = 0xffffffff;
  FUN_14027f6d0(param_1 + 0xdd);
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6f4) = 0;
  param_1[0xdd] = (longlong)UIControl_SlotList::vftable;
  *(undefined4 *)(param_1 + 0xfe) = 0xffffffff;
  plVar7 = param_1 + 0xff;
  FUN_14027f6d0(plVar7);
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  *(undefined1 *)(param_1 + 0x11a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x804) = 0;
  *plVar7 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x11d) = 1;
  plVar2 = param_1 + 0x11e;
  FUN_14027f6d0(plVar2);
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  *(undefined1 *)(param_1 + 0x139) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8fc) = 0;
  *plVar2 = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x13c) = 1;
  FUN_14027f6d0(param_1 + 0x13d);
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  *(undefined1 *)(param_1 + 0x158) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9f4) = 0;
  param_1[0x13d] = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x15b) = 1;
  FUN_14027f6d0(param_1 + 0x15c);
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  *(undefined1 *)(param_1 + 0x177) = 0;
  *(undefined4 *)((longlong)param_1 + 0xaec) = 0;
  param_1[0x15c] = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x17a) = 1;
  FUN_14027f6d0(param_1 + 0x17b);
  param_1[0x197] = 0;
  param_1[0x198] = 0;
  *(undefined1 *)(param_1 + 0x196) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbe4) = 0;
  param_1[0x17b] = (longlong)UIControl_Label::vftable;
  *(undefined1 *)(param_1 + 0x199) = 1;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  *(undefined2 *)(param_1 + 0x3d) = 0x101;
  uVar6 = FUN_140089d90(&local_48,&PTR_140610690);
  FUN_140283b10(plVar2,uVar6);
  if (*DAT_1407bb780 == '\0') {
    pcVar4 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar4)();
    return plVar7;
  }
  lVar8 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar8 >> 5) < 0x615) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar8 + 0xc280);
    if (7 < *(ulonglong *)(lVar8 + 0xc298)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  uVar6 = FUN_140089d90(&local_48,ppuVar10);
  FUN_140283b10(plVar7,uVar6);
  if (*DAT_1407bb780 == '\0') {
    pcVar4 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar4)();
    return plVar7;
  }
  lVar8 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar8 >> 5) < 0x829) {
    ppuVar10 = &PTR_140610690;
  }
  else {
    ppuVar10 = (undefined **)(lVar8 + 0x10500);
    if (7 < *(ulonglong *)(lVar8 + 0x10518)) {
      ppuVar10 = (undefined **)*ppuVar10;
    }
  }
  uVar6 = FUN_140089d90(&local_48,ppuVar10);
  FUN_140283b10(param_1 + 0x13d,uVar6);
  uVar6 = FUN_140089d90(&local_48,&PTR_140610690);
  FUN_140283b10(param_1 + 0x15c,uVar6);
  uVar6 = FUN_140089d90(&local_48,&PTR_140610690);
  FUN_140283b10(param_1 + 0x17b,uVar6);
  if (param_3[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[3] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  lVar8 = param_3[3];
  param_1[0x35] = param_3[2];
  plVar7 = (longlong *)param_1[0x36];
  param_1[0x36] = lVar8;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  plVar7 = *(longlong **)(DAT_140790e60 + 0xb0 + (longlong)(int)param_2 * 8);
  if (plVar7 != (longlong *)0x0) {
    lVar8 = (**(code **)(*plVar7 + 0xd8))(plVar7);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(lVar8 + 8);
    uVar6 = (**(code **)(*plVar7 + 0xd8))(plVar7);
    FUN_140083c10(uVar6,0x18,param_1);
  }
  uVar9 = FUN_140558c80(0x110);
  uVar6 = param_3[4];
  if (param_3[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[3] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_58 = param_3[2];
  uStack_50 = param_3[3];
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_48 = *param_3;
  uStack_40 = param_3[1];
  lVar8 = FUN_14038c2d0(uVar9,&local_48,&local_58,uVar6,uVar9);
  param_1[0x34] = lVar8;
  *(longlong *)(*(longlong *)(DAT_140790e60 + ((longlong)(int)param_2 + 7) * 0x10) + 0x368) = lVar8;
  FUN_140286a50(param_1 + 0x77,0x27);
  FUN_140286a50(param_1 + 0x99,0x28);
  uVar13 = 0x29;
  do {
    FUN_140286a50(param_1 + 0x55,uVar13);
    uVar13 = uVar13 + 1;
  } while (uVar13 < 0x30);
  uVar13 = 3;
  do {
    FUN_140286a50(param_1 + 0xdd,uVar13);
    uVar13 = uVar13 + 1;
  } while (uVar13 < 0x1e);
  uVar13 = 0x1e;
  do {
    FUN_140286a50(param_1 + 0xbb,uVar13);
    uVar13 = uVar13 + 1;
  } while (uVar13 < 0x27);
  plVar7 = (longlong *)param_3[3];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  plVar7 = (longlong *)param_3[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  thunk_FUN_1401fe000(param_3,0x30);
  iVar3 = *(int *)((longlong)param_1 + 0x174);
  if (((DAT_1407bb76c == '\0') || (iVar3 < 0)) || (iVar5 = iVar3 + 1, iVar3 == 0xff)) {
    iVar5 = iVar11;
  }
  if (*(longlong *)((&DAT_1407bda58)[iVar5] + 0x48) != 0) {
    *(undefined1 *)((longlong)iVar3 * 0x15 + 0x2c8 + *(longlong *)((&DAT_1407bda58)[iVar5] + 0x48))
         = 1;
  }
  iVar3 = *(int *)((longlong)param_1 + 0x174);
  if (((DAT_1407bb76c == '\0') || (iVar3 < 0)) || (iVar5 = iVar3 + 1, iVar3 == 0xff)) {
    iVar5 = iVar11;
  }
  if (*(longlong *)((&DAT_1407bda58)[iVar5] + 0x48) != 0) {
    *(undefined1 *)((longlong)iVar3 * 0x15 + 0x2dc + *(longlong *)((&DAT_1407bda58)[iVar5] + 0x48))
         = 1;
  }
  iVar3 = *(int *)((longlong)param_1 + 0x174);
  if (((DAT_1407bb76c == '\0') || (iVar3 < 0)) || (iVar5 = iVar3 + 1, iVar3 == 0xff)) {
    iVar5 = iVar11;
  }
  if (*(longlong *)((&DAT_1407bda58)[iVar5] + 0x48) != 0) {
    *(undefined1 *)((longlong)iVar3 * 0x15 + 0x2d3 + *(longlong *)((&DAT_1407bda58)[iVar5] + 0x48))
         = 1;
  }
  iVar3 = *(int *)((longlong)param_1 + 0x174);
  if (((DAT_1407bb76c == '\0') || (iVar3 < 0)) || (iVar5 = iVar3 + 1, iVar3 == 0xff)) {
    iVar5 = iVar11;
  }
  if (*(longlong *)((&DAT_1407bda58)[iVar5] + 0x48) != 0) {
    *(undefined1 *)((longlong)iVar3 * 0x15 + 0x2d2 + *(longlong *)((&DAT_1407bda58)[iVar5] + 0x48))
         = 1;
  }
  iVar3 = *(int *)((longlong)param_1 + 0x174);
  if (((DAT_1407bb76c == '\0') || (iVar3 < 0)) || (iVar5 = iVar3 + 1, iVar3 == 0xff)) {
    iVar5 = iVar11;
  }
  if (*(longlong *)((&DAT_1407bda58)[iVar5] + 0x48) != 0) {
    *(undefined1 *)((longlong)iVar3 * 0x15 + 0x2cf + *(longlong *)((&DAT_1407bda58)[iVar5] + 0x48))
         = 1;
  }
  iVar3 = *(int *)((longlong)param_1 + 0x174);
  if (((DAT_1407bb76c == '\0') || (iVar3 < 0)) || (iVar5 = iVar3 + 1, iVar3 == 0xff)) {
    iVar5 = iVar11;
  }
  if (*(longlong *)((&DAT_1407bda58)[iVar5] + 0x48) != 0) {
    *(undefined1 *)((longlong)iVar3 * 0x15 + 0x2ce + *(longlong *)((&DAT_1407bda58)[iVar5] + 0x48))
         = 1;
  }
  iVar3 = *(int *)((longlong)param_1 + 0x174);
  if (((DAT_1407bb76c == '\0') || (iVar3 < 0)) || (iVar5 = iVar3 + 1, iVar3 == 0xff)) {
    iVar5 = iVar11;
  }
  if (*(longlong *)((&DAT_1407bda58)[iVar5] + 0x48) != 0) {
    *(undefined1 *)((longlong)iVar3 * 0x15 + 0x2cc + *(longlong *)((&DAT_1407bda58)[iVar5] + 0x48))
         = 1;
  }
  iVar11 = *(int *)((longlong)param_1 + 0x174);
  if (((DAT_1407bb76c != '\0') && (-1 < iVar11)) && (iVar11 != 0xff)) {
    iVar12 = iVar11 + 1;
  }
  if (*(longlong *)((&DAT_1407bda58)[iVar12] + 0x48) != 0) {
    *(undefined1 *)
     ((longlong)iVar11 * 0x15 + 0x2cd + *(longlong *)((&DAT_1407bda58)[iVar12] + 0x48)) = 1;
  }
  return param_1;
}



// ===== FUN_1402f32b0 @ 0x1402f32b0 [ui] =====

void FUN_1402f32b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"UIScene_TradingMenu::handleDestroy\n");
}



// ===== FUN_140319290 @ 0x140319290 [ui] =====

ulonglong FUN_140319290(ulonglong *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = *param_1;
  if ((-param_2 & param_2) == param_2) {
    uVar2 = uVar2 * 0x5deece66d + 0xb & 0xffffffffffff;
    *param_1 = uVar2;
    return (longlong)((longlong)(int)param_2 * (uVar2 >> 0x11)) >> 0x1f;
  }
  do {
    uVar2 = uVar2 * 0x5deece66d + 0xb & 0xffffffffffff;
    uVar1 = (longlong)(uVar2 >> 0x11) % (longlong)(int)param_2;
  } while ((int)(((int)(uVar2 >> 0x11) - (int)uVar1) + -1 + param_2) < 0);
  *param_1 = uVar2;
  return uVar1 & 0xffffffff;
}



// ===== FUN_140329240 @ 0x140329240 [ui] =====

longlong * FUN_140329240(longlong *param_1,undefined1 *param_2)

{
  int iVar1;
  longlong *plVar2;
  short *psVar3;
  char cVar4;
  short sVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [48];
  
  lVar12 = 0;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (param_2[lVar11] != '\0');
  lVar9 = *(longlong *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1);
  if ((0 < lVar9) && (lVar11 < lVar9)) {
    lVar12 = lVar9 - lVar11;
  }
  plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  lVar9 = *param_1;
  if (*(int *)((longlong)*(int *)(lVar9 + 4) + 0x10 + (longlong)param_1) == 0) {
    plVar2 = *(longlong **)((longlong)*(int *)(lVar9 + 4) + 0x50 + (longlong)param_1);
    if ((plVar2 == (longlong *)0x0) || (plVar2 == param_1)) {
      bVar15 = true;
    }
    else {
      FUN_14004be70(plVar2);
      lVar9 = *param_1;
      bVar15 = *(int *)((longlong)*(int *)(lVar9 + 4) + 0x10 + (longlong)param_1) == 0;
    }
  }
  else {
    bVar15 = false;
  }
  if (bVar15) {
    plVar2 = *(longlong **)
              (*(longlong *)((longlong)*(int *)(lVar9 + 4) + 0x40 + (longlong)param_1) + 8);
    local_70 = plVar2;
    (**(code **)(*plVar2 + 8))(plVar2);
    plVar6 = (longlong *)FUN_140051b20(local_78);
    puVar7 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2);
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7);
    }
    uVar13 = 0;
    if ((*(uint *)((longlong)*(int *)(*param_1 + 4) + 0x18 + (longlong)param_1) & 0x1c0) != 0x40) {
      for (; 0 < lVar12; lVar12 = lVar12 + -1) {
        plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
        sVar5 = *(short *)((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1);
        if (*(longlong *)plVar2[8] == 0) {
LAB_1403293ba:
          sVar5 = (**(code **)(*plVar2 + 0x18))(plVar2);
        }
        else {
          iVar1 = *(int *)plVar2[0xb];
          if (iVar1 < 1) goto LAB_1403293ba;
          *(int *)plVar2[0xb] = iVar1 + -1;
          psVar3 = *(short **)plVar2[8];
          *(short **)plVar2[8] = psVar3 + 1;
          *psVar3 = sVar5;
        }
        if (sVar5 == -1) {
          uVar13 = 4;
          break;
        }
      }
    }
LAB_1403293f0:
    uVar14 = uVar13;
    if (uVar14 == 0) {
      if (lVar11 < 1) goto LAB_140329490;
      plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
      sVar5 = (**(code **)(*plVar6 + 0x60))(plVar6,*param_2);
      if (*(longlong *)plVar2[8] == 0) {
LAB_140329453:
        sVar5 = (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      else {
        iVar1 = *(int *)plVar2[0xb];
        if (iVar1 < 1) goto LAB_140329453;
        *(int *)plVar2[0xb] = iVar1 + -1;
        psVar3 = *(short **)plVar2[8];
        *(short **)plVar2[8] = psVar3 + 1;
        *psVar3 = sVar5;
      }
      lVar11 = lVar11 + -1;
      param_2 = param_2 + 1;
      uVar13 = 4;
      if (sVar5 != -1) {
        uVar13 = uVar14;
      }
      goto LAB_1403293f0;
    }
LAB_1403294f4:
    *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1) = 0;
  }
  else {
    uVar14 = 4;
  }
  lVar12 = (longlong)*(int *)(*param_1 + 4);
  uVar13 = 4;
  if (*(longlong *)(lVar12 + 0x48 + (longlong)param_1) != 0) {
    uVar13 = 0;
  }
  uVar14 = uVar13 | *(uint *)(lVar12 + 0x10 + (longlong)param_1) & 0x17 | uVar14;
  *(uint *)(lVar12 + 0x10 + (longlong)param_1) = uVar14;
  uVar14 = uVar14 & *(uint *)(lVar12 + 0x14 + (longlong)param_1);
  if (uVar14 != 0) {
    if ((uVar14 & 4) == 0) {
      pcVar10 = "ios_base::failbit set";
      if ((uVar14 & 2) == 0) {
        pcVar10 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar10 = "ios_base::badbit set";
    }
    uVar8 = FUN_140053c00(local_78,1);
    FUN_1400539e0(local_68,pcVar10,uVar8);
                    /* WARNING: Subroutine does not return */
    FUN_14055b910(local_68,&DAT_14074e1a8);
  }
  cVar4 = __uncaught_exception();
  if (cVar4 == '\0') {
    FUN_14004bfc0(param_1);
  }
  plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  return param_1;
LAB_140329490:
  if (lVar12 < 1) goto LAB_1403294f4;
  plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  sVar5 = *(short *)((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1);
  if (*(longlong *)plVar2[8] == 0) {
LAB_1403294d3:
    sVar5 = (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  else {
    iVar1 = *(int *)plVar2[0xb];
    if (iVar1 < 1) goto LAB_1403294d3;
    *(int *)plVar2[0xb] = iVar1 + -1;
    psVar3 = *(short **)plVar2[8];
    *(short **)plVar2[8] = psVar3 + 1;
    *psVar3 = sVar5;
  }
  if (sVar5 == -1) {
    uVar14 = 4;
    goto LAB_1403294f4;
  }
  lVar12 = lVar12 + -1;
  goto LAB_140329490;
}



// ===== FUN_1403295f0 @ 0x1403295f0 [ui] =====

longlong * FUN_1403295f0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  longlong *plVar2;
  short *psVar3;
  char cVar4;
  short sVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined1 local_68 [16];
  undefined1 local_58 [48];
  
  lVar8 = 0;
  uVar6 = *(ulonglong *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1);
  lVar10 = lVar8;
  if ((0 < (longlong)uVar6) && (param_3 < uVar6)) {
    lVar10 = uVar6 - param_3;
  }
  plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  lVar9 = *param_1;
  if (*(int *)((longlong)*(int *)(lVar9 + 4) + 0x10 + (longlong)param_1) == 0) {
    plVar2 = *(longlong **)((longlong)*(int *)(lVar9 + 4) + 0x50 + (longlong)param_1);
    if ((plVar2 == (longlong *)0x0) || (plVar2 == param_1)) {
      bVar14 = true;
    }
    else {
      FUN_14004be70(plVar2);
      lVar9 = *param_1;
      bVar14 = *(int *)((longlong)*(int *)(lVar9 + 4) + 0x10 + (longlong)param_1) == 0;
    }
  }
  else {
    bVar14 = false;
  }
  if (bVar14) {
    if ((*(uint *)((longlong)*(int *)(lVar9 + 4) + 0x18 + (longlong)param_1) & 0x1c0) != 0x40) {
      for (; lVar10 != 0; lVar10 = lVar10 + -1) {
        plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
        sVar5 = *(short *)((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1);
        if (*(longlong *)plVar2[8] == 0) {
LAB_140329718:
          sVar5 = (**(code **)(*plVar2 + 0x18))(plVar2);
        }
        else {
          iVar1 = *(int *)plVar2[0xb];
          if (iVar1 < 1) goto LAB_140329718;
          *(int *)plVar2[0xb] = iVar1 + -1;
          psVar3 = *(short **)plVar2[8];
          *(short **)plVar2[8] = psVar3 + 1;
          *psVar3 = sVar5;
        }
        if (sVar5 == -1) {
          lVar8 = 4;
          goto LAB_140329740;
        }
      }
    }
    plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    uVar6 = (**(code **)(*plVar2 + 0x48))(plVar2,param_2,param_3);
    if (uVar6 == param_3) {
LAB_140329740:
      do {
        uVar13 = (uint)lVar8;
        if (lVar10 == 0) goto LAB_1403297b6;
        plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
        sVar5 = *(short *)((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1);
        if (*(longlong *)plVar2[8] == 0) {
LAB_1403297c6:
          sVar5 = (**(code **)(*plVar2 + 0x18))(plVar2);
        }
        else {
          iVar1 = *(int *)plVar2[0xb];
          if (iVar1 < 1) goto LAB_1403297c6;
          *(int *)plVar2[0xb] = iVar1 + -1;
          psVar3 = *(short **)plVar2[8];
          *(short **)plVar2[8] = psVar3 + 1;
          *psVar3 = sVar5;
        }
        if (sVar5 == -1) {
          uVar13 = 4;
          goto LAB_1403297b6;
        }
        lVar10 = lVar10 + -1;
      } while( true );
    }
    uVar13 = 4;
LAB_1403297b6:
    *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1) = 0;
  }
  else {
    uVar13 = 4;
  }
  lVar10 = (longlong)*(int *)(*param_1 + 4);
  uVar12 = 4;
  if (*(longlong *)(lVar10 + 0x48 + (longlong)param_1) != 0) {
    uVar12 = 0;
  }
  uVar13 = uVar12 | uVar13 | *(uint *)(lVar10 + 0x10 + (longlong)param_1) & 0x17;
  *(uint *)(lVar10 + 0x10 + (longlong)param_1) = uVar13;
  uVar13 = uVar13 & *(uint *)(lVar10 + 0x14 + (longlong)param_1);
  if (uVar13 != 0) {
    if ((uVar13 & 4) == 0) {
      pcVar11 = "ios_base::failbit set";
      if ((uVar13 & 2) == 0) {
        pcVar11 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar11 = "ios_base::badbit set";
    }
    uVar7 = FUN_140053c00(local_68,1);
    FUN_1400539e0(local_58,pcVar11,uVar7);
                    /* WARNING: Subroutine does not return */
    FUN_14055b910(local_58,&DAT_14074e1a8);
  }
  cVar4 = __uncaught_exception();
  if (cVar4 == '\0') {
    FUN_14004bfc0(param_1);
  }
  plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  return param_1;
}



// ===== FUN_140360080 @ 0x140360080 [ui] =====

longlong * FUN_140360080(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  longlong lVar10;
  longlong *local_res20;
  _Lockit local_a8 [8];
  longlong *local_a0 [2];
  longlong *local_90;
  bool local_88;
  uint local_78 [2];
  longlong *plStack_70;
  undefined1 local_68 [48];
  
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  local_90 = param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  lVar10 = *param_1;
  if (*(int *)((longlong)*(int *)(lVar10 + 4) + 0x10 + (longlong)param_1) == 0) {
    plVar1 = *(longlong **)((longlong)*(int *)(lVar10 + 4) + 0x50 + (longlong)param_1);
    if ((plVar1 == (longlong *)0x0) || (plVar1 == param_1)) {
      local_88 = true;
    }
    else {
      FUN_14004be70(plVar1);
      lVar10 = *param_1;
      local_88 = *(int *)((longlong)*(int *)(lVar10 + 4) + 0x10 + (longlong)param_1) == 0;
    }
  }
  else {
    local_88 = false;
  }
  uVar8 = 0;
  if (local_88) {
    plVar1 = *(longlong **)
              (*(longlong *)((longlong)*(int *)(lVar10 + 4) + 0x40 + (longlong)param_1) + 8);
    plStack_70 = plVar1;
    (**(code **)(*plVar1 + 8))(plVar1);
    std::_Lockit::_Lockit(local_a8,0);
    plVar2 = DAT_1407c1b08;
    local_a0[0] = DAT_1407c1b08;
    if (DAT_1407c1f60 == 0) {
      std::_Lockit::_Lockit((_Lockit *)&local_res20,0);
      if (DAT_1407c1f60 == 0) {
        DAT_14078ee70 = DAT_14078ee70 + 1;
        DAT_1407c1f60 = (longlong)DAT_14078ee70;
      }
      std::_Lockit::~_Lockit((_Lockit *)&local_res20);
    }
    plVar4 = (longlong *)FUN_140054250(local_78,DAT_1407c1f60);
    if ((plVar4 == (longlong *)0x0) && (plVar4 = plVar2, plVar2 == (longlong *)0x0)) {
      lVar10 = FUN_140362060(local_a0,local_78);
      plVar4 = local_a0[0];
      if (lVar10 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_140054230();
      }
      local_res20 = local_a0[0];
      FUN_140557744(local_a0[0]);
      (**(code **)(*plVar4 + 8))(plVar4);
      DAT_1407c1b08 = plVar4;
    }
    std::_Lockit::~_Lockit(local_a8);
    puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    lVar10 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
    local_78[0] = local_78[0] & 0xffffff00;
    plStack_70 = *(longlong **)(lVar10 + 0x48);
    (**(code **)(*plVar4 + 0x48))
              (plVar4,local_a0,local_78,lVar10,*(undefined2 *)(lVar10 + 0x58),param_2);
    uVar8 = 0;
    if ((char)local_a0[0] != '\0') {
      uVar8 = 4;
    }
  }
  lVar10 = (longlong)*(int *)(*param_1 + 4);
  uVar7 = 4;
  if (*(longlong *)(lVar10 + 0x48 + (longlong)param_1) != 0) {
    uVar7 = 0;
  }
  uVar8 = uVar7 | *(uint *)(lVar10 + 0x10 + (longlong)param_1) & 0x17 | uVar8;
  *(uint *)(lVar10 + 0x10 + (longlong)param_1) = uVar8;
  uVar8 = uVar8 & *(uint *)(lVar10 + 0x14 + (longlong)param_1);
  if (uVar8 != 0) {
    if ((uVar8 & 4) == 0) {
      pcVar9 = "ios_base::failbit set";
      if ((uVar8 & 2) == 0) {
        pcVar9 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar9 = "ios_base::badbit set";
    }
    uVar6 = FUN_140053c00(local_78,1);
    FUN_1400539e0(local_68,pcVar9,uVar6);
                    /* WARNING: Subroutine does not return */
    FUN_14055b910(local_68,&DAT_14074e1a8);
  }
  cVar3 = __uncaught_exception();
  if (cVar3 == '\0') {
    FUN_14004bfc0(param_1);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return param_1;
}



// ===== FUN_140361100 @ 0x140361100 [ui] =====

undefined8 * FUN_140361100(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 7;
  *(undefined2 *)param_2 = 0;
  if ((((byte)*(uint *)(param_1 + 0x70) & 0x22) == 2) ||
     (uVar2 = **(ulonglong **)(param_1 + 0x40), uVar2 == 0)) {
    if (((*(uint *)(param_1 + 0x70) & 4) == 0) &&
       (param_4 = **(longlong **)(param_1 + 0x38), param_4 != 0)) {
      lVar1 = **(longlong **)(param_1 + 0x18);
      lVar3 = ((longlong)**(int **)(param_1 + 0x50) * 2 - lVar1) + param_4 >> 1;
    }
    else {
      lVar3 = 0;
      lVar1 = 0;
    }
  }
  else {
    lVar1 = **(longlong **)(param_1 + 0x20);
    if (uVar2 < *(ulonglong *)(param_1 + 0x68)) {
      uVar2 = *(ulonglong *)(param_1 + 0x68);
    }
    lVar3 = (longlong)(uVar2 - lVar1) >> 1;
  }
  if (lVar1 != 0) {
    FUN_1400549d0(param_2,lVar1,lVar3,param_4,1);
  }
  return param_2;
}



// ===== FUN_140367970 @ 0x140367970 [ui] =====

undefined8 *
FUN_140367970(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5)

{
  HANDLE pvVar1;
  
  param_1[1] = param_2;
  *param_1 = param_3;
  *(int *)(param_1 + 2) = param_5;
  if (param_5 == 0) {
    *(undefined4 *)(param_1 + 2) = 0x20000;
  }
  else if (param_5 < 0x4000) {
    *(undefined4 *)(param_1 + 2) = 0x4000;
  }
  FUN_140114000((longlong)param_1 + 0x14,0x40,"(4J) %s");
  *(undefined2 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x103;
  *(DWORD *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,(longlong)*(int *)(param_1 + 2),FUN_140367ad0,
                        param_1,4,(LPDWORD)(param_1 + 0xd));
  param_1[0xe] = pvVar1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1407b9400);
  if (DAT_1407bdc78 == DAT_1407bdc80) {
    FUN_140367b90();
  }
  else {
    *DAT_1407bdc78 = param_1;
    DAT_1407bdc78 = DAT_1407bdc78 + 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1407b9400);
  return param_1;
}



// ===== FUN_14037bfb0 @ 0x14037bfb0 [ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14037bfb0(undefined8 *param_1,longlong *param_2)

{
  char *pcVar1;
  uint *puVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 ****ppppuVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_2a8 [32];
  undefined8 *local_288;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [8];
  undefined1 local_250 [232];
  undefined1 local_168 [16];
  undefined1 local_158 [8];
  undefined1 local_150 [232];
  undefined8 ***local_68 [2];
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStack_2a8;
  uVar14 = 0;
  local_288 = param_1;
  if (param_2 == (longlong *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_140054cf0(0,&PTR_140610690,0);
  }
  else {
    FUN_140045710(local_168);
    lVar8 = param_2[1];
    lVar15 = *param_2;
    lVar3 = lVar8 - lVar15 >> 0x3f;
    uVar16 = uVar14;
    if ((lVar8 - lVar15) / 0x28 + lVar3 != lVar3) {
      do {
        if ((ulonglong)((lVar8 - lVar15) / 0x28) <= (ulonglong)(longlong)(int)uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_140048ae0();
        }
        plVar12 = (longlong *)(uVar16 + lVar15);
        FUN_140045710(local_268);
        if (*(char *)((longlong)plVar12 + 0x25) != '\0') {
          FUN_140044db0(local_258,L"&nbsp;&nbsp;");
        }
        pcVar1 = (char *)((longlong)plVar12 + 0x24);
        if (*pcVar1 != '\0') {
          FUN_140329240(local_258,&DAT_140653ae8);
        }
        iVar5 = (int)plVar12[4];
        if (iVar5 == 0) {
          iVar5 = 0x100;
        }
        local_288 = (undefined8 *)CONCAT44(local_288._4_4_,iVar5);
        plVar6 = (longlong *)FUN_140044db0(local_258,L"<font color=\"#");
        *(undefined2 *)((longlong)*(int *)(*plVar6 + 4) + 0x58 + (longlong)plVar6) = 0x30;
        puVar7 = (undefined8 *)FUN_14055880c(local_278,6);
        (*(code *)*puVar7)((longlong)*(int *)(*plVar6 + 4) + (longlong)plVar6,puVar7[1]);
        iVar5 = *(int *)(*plVar6 + 4);
        puVar2 = (uint *)((longlong)iVar5 + 0x18 + (longlong)plVar6);
        *puVar2 = *puVar2 & 0xfffff9ff;
        puVar2 = (uint *)((longlong)iVar5 + 0x18 + (longlong)plVar6);
        *puVar2 = *puVar2 | 0x800;
        lVar8 = *(longlong *)(DAT_140790e60 + 0x238);
        cVar4 = (**(code **)**(undefined8 **)(lVar8 + 0xb8))();
        plVar10 = DAT_1407915a8;
        if (cVar4 != '\0') {
          plVar10 = *(longlong **)(lVar8 + 0xb8);
        }
        lVar8 = (**(code **)(*plVar10 + 0xd8))();
        uVar9 = FUN_140360080(plVar6,*(undefined4 *)(lVar8 + (longlong)(int)local_288 * 4));
        uVar9 = FUN_140044db0(uVar9,&DAT_140653b10);
        plVar10 = plVar12 + 2;
        if (7 < (ulonglong)plVar12[3]) {
          plVar12 = (longlong *)*plVar12;
        }
        uVar9 = FUN_1403295f0(uVar9,plVar12,*plVar10);
        FUN_140329240(uVar9,"</font>");
        if (*pcVar1 != '\0') {
          FUN_140329240(local_258,&DAT_140653b24);
        }
        FUN_140361100(local_250,local_68);
        FUN_140040690(local_268);
        ppppuVar11 = local_68;
        if (7 < local_50) {
          ppppuVar11 = (undefined8 ****)local_68[0];
        }
        FUN_1403295f0(local_158,ppppuVar11,local_58);
        FUN_140055150(local_68);
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        if ((ulonglong)(longlong)(int)uVar13 < (ulonglong)((param_2[1] - *param_2) / 0x28)) {
          FUN_140044db0(local_158,L"<br>");
        }
        lVar8 = param_2[1];
        lVar15 = *param_2;
        uVar16 = uVar16 + 0x28;
      } while ((ulonglong)(longlong)(int)uVar13 < (ulonglong)((lVar8 - lVar15) / 0x28));
    }
    FUN_140361100(local_150,param_1);
    FUN_140040690(local_168);
  }
  return param_1;
}



// ===== FUN_140434650 @ 0x140434650 [ui] =====

undefined8 * FUN_140434650(undefined8 *param_1,longlong *param_2,uint param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined **local_70;
  undefined **local_68;
  undefined ***local_60;
  int local_58;
  undefined **local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  if (*param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    plVar7 = (longlong *)param_2[1];
  }
  else {
    local_50 = ByteArrayOutputStream::vftable;
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    local_38 = 0;
    local_48 = (undefined8 *)thunk_FUN_140558c80(0x20);
    *local_48 = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    local_48[3] = 0;
    local_40 = 0x20;
    local_3c = local_74;
    local_70 = DataOutputStream::vftable;
    local_68 = DataOutputStream::vftable;
    local_60 = &local_50;
    local_58 = 0;
    FUN_140325590(&local_68,*(undefined8 *)(*param_2 + 0x518));
    (*(code *)(*local_60)[3])(local_60,(int)param_3 >> 0x18 & 0xff);
    (*(code *)(*local_60)[3])(local_60,(int)param_3 >> 0x10 & 0xff);
    (*(code *)(*local_60)[3])(local_60,(int)param_3 >> 8 & 0xff);
    (*(code *)(*local_60)[3])(local_60,param_3 & 0xff);
    local_58 = local_58 + 4;
    (*(code *)(*local_60)[3])(local_60,(int)param_4 >> 0x18 & 0xff);
    (*(code *)(*local_60)[3])(local_60,(int)param_4 >> 0x10 & 0xff);
    (*(code *)(*local_60)[3])(local_60,(int)param_4 >> 8 & 0xff);
    (*(code *)(*local_60)[3])(local_60,param_4 & 0xff);
    uVar5 = local_38;
    local_58 = local_58 + 4;
    uVar6 = thunk_FUN_140558c80(local_38);
    local_80 = uVar6;
    FUN_140595d50(uVar6,0,uVar5);
    local_78 = uVar5;
    FUN_140596110(uVar6,local_48,local_38);
    local_88[0] = 2;
    FUN_1401c0d00(param_1,local_88,&local_80);
    local_70 = OutputStream::vftable;
    local_50 = ByteArrayOutputStream::vftable;
    if (local_48 != (undefined8 *)0x0) {
      thunk_FUN_1401fe000();
    }
    local_50 = OutputStream::vftable;
    plVar7 = (longlong *)param_2[1];
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return param_1;
}



// ===== FUN_140435510 @ 0x140435510 [ui] =====

undefined8 FUN_140435510(undefined8 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_res10 [2];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined **local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined **local_40;
  undefined **local_38;
  undefined ***local_30;
  undefined4 local_28;
  
  local_60 = ByteArrayOutputStream::vftable;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_58 = (undefined8 *)thunk_FUN_140558c80(0x20);
  *local_58 = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_50 = 0x20;
  local_4c = local_64;
  local_40 = DataOutputStream::vftable;
  local_38 = DataOutputStream::vftable;
  local_30 = &local_60;
  local_28 = 0;
  (*(code *)local_60[3])(&local_60,param_2);
  uVar1 = local_48;
  local_28 = 1;
  uVar2 = thunk_FUN_140558c80(local_48);
  local_70 = uVar2;
  FUN_140595d50(uVar2,0,uVar1);
  local_68 = uVar1;
  FUN_140596110(uVar2,local_58,local_48);
  local_res10[0] = 7;
  FUN_1401c0d00(param_1,local_res10,&local_70);
  local_60 = ByteArrayOutputStream::vftable;
  if (local_58 != (undefined8 *)0x0) {
    thunk_FUN_1401fe000();
  }
  return param_1;
}



// ===== FUN_14055880c @ 0x14055880c [ui] =====

undefined8 * FUN_14055880c(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = FUN_140173490;
  return param_1;
}



