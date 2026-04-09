// Category: input - 261 functions
// Decompiled from Minecraft.Client.exe

// ===== FUN_140001024 @ 0x140001024 [input] =====

void FUN_140001024(void)

{
  FUN_140001280(&DAT_140783070);
  return;
}



// ===== FUN_14000103c @ 0x14000103c [input] =====

void FUN_14000103c(void)

{
  FUN_1400012dc(&DAT_140783070);
  return;
}



// ===== FUN_14002a0d0 @ 0x14002a0d0 [input] =====

void FUN_14002a0d0(void)

{
  FUN_140054cf0(&DAT_1407beab0,L"piston_top_sticky",0x11);
  atexit((_func_5014 *)&LAB_1405ebbb0);
  return;
}



// ===== FUN_14002fe50 @ 0x14002fe50 [profile,storage,input,ui,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14002fe50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_458 [32];
  undefined8 local_438;
  undefined8 *local_430;
  CHAR local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_1407502c0 ^ (ulonglong)auStack_458;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (ulonglong *)FUN_140054850();
  local_438 = 0;
  local_430 = &local_res18;
  FUN_1405664c4(*puVar1 | 2,local_428,0x400,param_2);
  OutputDebugStringA(local_428);
  return;
}



// ===== FUN_14003d6b0 @ 0x14003d6b0 [input] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_14003d6b0(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStackY_188 [32];
  longlong local_148 [4];
  short local_128 [128];
  ulonglong local_28;
  
  local_28 = DAT_1407502c0 ^ (ulonglong)auStackY_188;
  uVar1 = FUN_14000103c(&DAT_140783060,param_3);
  uVar2 = FUN_140001024(&DAT_140783060,uVar1,param_4);
  local_148[0] = 0;
  local_148[1] = 0;
  local_148[2] = 0;
  local_148[3] = 0;
  FUN_140054cf0(local_148,&PTR_140610690,0);
  if ((uVar2 & 1) == 0) {
    if ((uVar2 & 2) == 0) {
      if ((uVar2 & 4) == 0) {
        if ((uVar2 & 8) == 0) {
          if ((uVar2 & 0x30c000) == 0) {
            if ((uVar2 & 0xf0000) == 0) {
              if ((uVar2 >> 0xc & 1) == 0) {
                if ((uVar2 >> 0xd & 1) == 0) {
                  if ((uVar2 >> 10 & 1) == 0) {
                    if ((uVar2 >> 0xb & 1) == 0) {
                      if ((uVar2 >> 0x17 & 1) == 0) {
                        if ((uVar2 >> 0x16 & 1) == 0) {
                          if ((uVar2 & 0x40) == 0) {
                            if ((char)uVar2 < '\0') {
                              uVar4 = 0x10;
                              pwVar3 = L"ButtonLeftBumper";
                            }
                            else if ((uVar2 & 0x20) == 0) {
                              if ((uVar2 & 0x10) == 0) {
                                if ((uVar2 >> 8 & 1) == 0) {
                                  if ((uVar2 >> 9 & 1) == 0) goto LAB_14003d8d0;
                                  uVar4 = 8;
                                  pwVar3 = L"ButtonLS";
                                }
                                else {
                                  uVar4 = 8;
                                  pwVar3 = L"ButtonRS";
                                }
                              }
                              else {
                                uVar4 = 0xb;
                                pwVar3 = L"ButtonStart";
                              }
                            }
                            else {
                              uVar4 = 10;
                              pwVar3 = L"ButtonBack";
                            }
                          }
                          else {
                            uVar4 = 0x11;
                            pwVar3 = L"ButtonRightBumper";
                          }
                        }
                        else {
                          uVar4 = 0x12;
                          pwVar3 = L"ButtonRightTrigger";
                        }
                      }
                      else {
                        uVar4 = 0x11;
                        pwVar3 = L"ButtonLeftTrigger";
                      }
                    }
                    else {
                      uVar4 = 0xb;
                      pwVar3 = L"ButtonDpadD";
                    }
                  }
                  else {
                    uVar4 = 0xb;
                    pwVar3 = L"ButtonDpadU";
                  }
                }
                else {
                  uVar4 = 0xb;
                  pwVar3 = L"ButtonDpadR";
                }
              }
              else {
                uVar4 = 0xb;
                pwVar3 = L"ButtonDpadL";
              }
            }
            else {
              uVar4 = 0x10;
              pwVar3 = L"ButtonRightStick";
            }
          }
          else {
            uVar4 = 0xf;
            pwVar3 = L"ButtonLeftStick";
          }
        }
        else {
          uVar4 = 7;
          pwVar3 = L"ButtonY";
        }
      }
      else {
        uVar4 = 7;
        pwVar3 = L"ButtonX";
      }
    }
    else {
      uVar4 = 7;
      pwVar3 = L"ButtonB";
    }
  }
  else {
    uVar4 = 7;
    pwVar3 = L"ButtonA";
  }
  FUN_1400549d0(local_148,pwVar3,uVar4);
LAB_14003d8d0:
  FUN_1400547f0(local_128,0x80,L"<img src=\"%ls\" align=\"middle\" height=\"%d\" width=\"%d\"/>");
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (local_128[lVar5] != 0);
  FUN_140054cf0(param_2,local_128);
  if (7 < (ulonglong)local_148[3]) {
    if ((0xfff < local_148[3] * 2 + 2U) &&
       (0x1f < (local_148[0] - *(longlong *)(local_148[0] + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  return param_2;
}



// ===== FUN_14003d9d0 @ 0x14003d9d0 [storage,input,ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14003d9d0(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStackY_178 [32];
  longlong local_138 [4];
  short local_118 [128];
  ulonglong local_18;
  
  local_18 = DAT_1407502c0 ^ (ulonglong)auStackY_178;
  local_138[0] = 0;
  local_138[1] = 0;
  local_138[2] = 0;
  local_138[3] = 0;
  FUN_140054cf0(local_138,&PTR_140610690,0);
  switch(param_3) {
  case 0x5800:
    uVar2 = 7;
    pwVar1 = L"ButtonA";
    break;
  case 0x5801:
    uVar2 = 7;
    pwVar1 = L"ButtonB";
    break;
  case 0x5802:
    uVar2 = 7;
    pwVar1 = L"ButtonX";
    break;
  case 0x5803:
    uVar2 = 7;
    pwVar1 = L"ButtonY";
    break;
  case 0x5804:
    uVar2 = 0x11;
    pwVar1 = L"ButtonRightBumper";
    break;
  case 0x5805:
    pwVar1 = L"ButtonLeftBumper";
    goto LAB_14003dad9;
  case 0x5806:
    uVar2 = 0x11;
    pwVar1 = L"ButtonLeftTrigger";
    break;
  case 0x5807:
    uVar2 = 0x12;
    pwVar1 = L"ButtonRightTrigger";
    break;
  default:
    goto switchD_14003da4f_caseD_5808;
  case 0x5820:
  case 0x5821:
  case 0x5822:
  case 0x5823:
  case 0x5824:
  case 0x5825:
  case 0x5826:
  case 0x5827:
    uVar2 = 0xf;
    pwVar1 = L"ButtonLeftStick";
    break;
  case 0x5830:
  case 0x5831:
  case 0x5832:
  case 0x5833:
  case 0x5834:
  case 0x5835:
  case 0x5836:
  case 0x5837:
    pwVar1 = L"ButtonRightStick";
LAB_14003dad9:
    uVar2 = 0x10;
  }
  FUN_1400549d0(local_138,pwVar1,uVar2);
switchD_14003da4f_caseD_5808:
  FUN_1400547f0(local_118,0x80,L"<img src=\"%ls\" align=\"middle\" height=\"%d\" width=\"%d\"/>");
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (local_118[lVar3] != 0);
  FUN_140054cf0(param_2,local_118);
  if (7 < (ulonglong)local_138[3]) {
    if ((0xfff < local_138[3] * 2 + 2U) &&
       (0x1f < (local_138[0] - *(longlong *)(local_138[0] + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  return param_2;
}



// ===== FUN_140048c80 @ 0x140048c80 [profile,storage,input,ui] =====

void FUN_140048c80(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    for (; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
      FUN_140055150(lVar2);
    }
    lVar2 = *param_1;
    lVar1 = lVar2;
    if ((0xfff < (param_1[2] - lVar2 & 0xffffffffffffffe0U)) &&
       (lVar1 = *(longlong *)(lVar2 + -8), 0x1f < (lVar2 - lVar1) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// ===== FUN_1400491a0 @ 0x1400491a0 [profile,storage,input,ui,render] =====

longlong FUN_1400491a0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar7 = param_2 - lVar2 >> 3;
  lVar3 = param_1[1] - lVar2 >> 3;
  if (lVar3 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140050870();
  }
  uVar5 = param_1[2] - lVar2 >> 3;
  uVar1 = lVar3 + 1;
  if (0x1fffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar6 = 0x1fffffffffffffff;
  }
  else {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar6 = uVar1;
    if (uVar1 <= uVar5) {
      uVar6 = uVar5;
    }
    if (0x1fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_140054fe0();
    }
  }
  lVar4 = FUN_140054e60(uVar6 * 8);
  *(undefined8 *)(lVar4 + lVar7 * 8) = *param_3;
  lVar3 = *param_1;
  lVar2 = lVar4 + lVar7 * 8;
  lVar7 = lVar4;
  if (param_2 != param_1[1]) {
    FUN_140596110(lVar4,lVar3,param_2 - lVar3);
    lVar7 = lVar2 + 8;
    lVar3 = param_2;
  }
  FUN_140596110(lVar7,lVar3);
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar7 = lVar3;
    if ((0xfff < (param_1[2] - lVar3 & 0xfffffffffffffff8U)) &&
       (lVar7 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar7) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000(lVar7);
  }
  *param_1 = lVar4;
  param_1[1] = lVar4 + uVar1 * 8;
  param_1[2] = uVar6 * 8 + lVar4;
  return lVar2;
}



// ===== FUN_140051220 @ 0x140051220 [profile,storage,input,ui] =====

void FUN_140051220(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_140555ca8("invalid string position");
}



// ===== thunk_FUN_140055150 @ 0x140051b00 [input] =====

void thunk_FUN_140055150(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (7 < (ulonglong)param_1[3]) {
    lVar1 = *param_1;
    lVar2 = lVar1;
    if ((0xfff < param_1[3] * 2 + 2U) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000(lVar2);
  }
  param_1[3] = 7;
  param_1[2] = 0;
  *(undefined2 *)param_1 = 0;
  return;
}



// ===== FUN_140052480 @ 0x140052480 [input] =====

void FUN_140052480(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_140052860(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      FUN_140055150(puVar1 + 2);
      thunk_FUN_1401fe000(puVar1,0x38);
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



// ===== FUN_1400546d0 @ 0x1400546d0 [profile,storage,input,ui,render] =====

longlong * FUN_1400546d0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    if (7 < (ulonglong)param_1[3]) {
      lVar1 = *param_1;
      lVar2 = lVar1;
      if ((0xfff < param_1[3] * 2 + 2U) &&
         (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000(lVar2);
    }
    param_1[3] = 7;
    param_1[2] = 0;
    *(undefined2 *)param_1 = 0;
    lVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    lVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    param_2[2] = 0;
    param_2[3] = 7;
    *(undefined2 *)param_2 = 0;
  }
  return param_1;
}



// ===== FUN_1400547f0 @ 0x1400547f0 [profile,storage,input,ui,render] =====

int FUN_1400547f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_140054850();
  iVar1 = FUN_14056682c(*puVar2,param_1,param_2,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// ===== FUN_1400548d0 @ 0x1400548d0 [storage,input,render] =====

void FUN_1400548d0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_3 < 0x8000000000000000) {
    if (param_3 < 0x10) {
      param_1[2] = param_3;
      param_1[3] = 0xf;
      FUN_140596110();
      *(undefined1 *)(param_3 + (longlong)param_1) = 0;
    }
    else {
      uVar1 = param_3 | 0xf;
      uVar3 = 0x7fffffffffffffff;
      if ((uVar1 < 0x8000000000000000) && (uVar3 = uVar1, uVar1 < 0x16)) {
        uVar3 = 0x16;
      }
      lVar2 = FUN_140054e60(uVar3 + 1);
      *param_1 = lVar2;
      param_1[2] = param_3;
      param_1[3] = uVar3;
      FUN_140596110(lVar2,param_2,param_3);
      *(undefined1 *)(lVar2 + param_3) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140054e40();
}



// ===== FUN_140054990 @ 0x140054990 [storage,input] =====

undefined8 * FUN_140054990(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  FUN_1400548d0();
  return param_1;
}



// ===== FUN_1400549d0 @ 0x1400549d0 [profile,storage,input,ui,render] =====

longlong * FUN_1400549d0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  uVar2 = param_1[3];
  if (uVar2 < param_3) {
    uVar7 = 0x7ffffffffffffffe;
    if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_140054e40();
    }
    uVar5 = param_3 | 7;
    if ((uVar5 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) {
      uVar1 = uVar2 + (uVar2 >> 1);
      uVar7 = uVar5;
      if (uVar5 < uVar1) {
        uVar7 = uVar1;
      }
      uVar5 = uVar7 + 1;
      if (0x7fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_140054fe0();
      }
    }
    else {
      uVar5 = 0x7fffffffffffffff;
    }
    lVar4 = FUN_140054e60(uVar5 * 2);
    param_1[3] = uVar7;
    param_1[2] = param_3;
    FUN_140596110(lVar4,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + lVar4) = 0;
    if (7 < uVar2) {
      lVar3 = *param_1;
      lVar6 = lVar3;
      if ((0xfff < uVar2 * 2 + 2) &&
         (lVar6 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar6) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000(lVar6);
    }
    *param_1 = lVar4;
  }
  else {
    plVar8 = param_1;
    if (7 < uVar2) {
      plVar8 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    FUN_140596110(plVar8,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)plVar8) = 0;
  }
  return param_1;
}



// ===== FUN_140054b30 @ 0x140054b30 [input] =====

undefined8 * FUN_140054b30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_2 + 2;
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_1400549d0(param_1,param_2,*puVar1);
  }
  return param_1;
}



// ===== FUN_140054b60 @ 0x140054b60 [storage,input,render] =====

void FUN_140054b60(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0xf < (ulonglong)param_1[3]) {
    lVar1 = *param_1;
    lVar2 = lVar1;
    if ((0xfff < param_1[3] + 1U) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000(lVar2);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



// ===== FUN_140054bf0 @ 0x140054bf0 [input] =====

undefined8 * FUN_140054bf0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



// ===== FUN_140054cf0 @ 0x140054cf0 [profile,storage,input,ui,render] =====

void FUN_140054cf0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_140054e40();
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    FUN_140596110(param_1,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)param_1) = 0;
  }
  else {
    uVar1 = param_3 | 7;
    if (uVar1 < 0x7fffffffffffffff) {
      if (uVar1 < 10) {
        uVar1 = 10;
      }
      uVar3 = uVar1 + 1;
      if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_140054fe0();
      }
    }
    else {
      uVar3 = 0x7fffffffffffffff;
      uVar1 = 0x7ffffffffffffffe;
    }
    lVar2 = FUN_140054e60(uVar3 * 2);
    param_1[2] = param_3;
    *param_1 = lVar2;
    param_1[3] = uVar1;
    FUN_140596110(lVar2,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + lVar2) = 0;
  }
  return;
}



// ===== FUN_140054de0 @ 0x140054de0 [profile,storage,input,ui] =====

undefined8 * FUN_140054de0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(short *)(param_2 + lVar1 * 2) != 0);
  FUN_140054cf0();
  return param_1;
}



// ===== FUN_140055000 @ 0x140055000 [profile,storage,input,ui,render] =====

undefined8 * FUN_140055000(undefined8 *param_1,undefined8 *param_2)

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
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x7ffffffffffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_140054e40();
  }
  if (uVar1 < 8) {
    param_1[2] = uVar1;
    param_1[3] = 7;
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
  }
  else {
    uVar2 = uVar1 | 7;
    if (uVar2 < 0x7fffffffffffffff) {
      if (uVar2 < 10) {
        uVar2 = 10;
      }
      uVar4 = uVar2 + 1;
      if (0x7fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_140054fe0();
      }
    }
    else {
      uVar4 = 0x7fffffffffffffff;
      uVar2 = 0x7ffffffffffffffe;
    }
    uVar3 = FUN_140054e60(uVar4 * 2);
    *param_1 = uVar3;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
    FUN_140596110(uVar3,param_2,uVar1 * 2 + 2);
  }
  return param_1;
}



// ===== FUN_140055150 @ 0x140055150 [profile,storage,input,ui,render] =====

void FUN_140055150(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (7 < (ulonglong)param_1[3]) {
    lVar1 = *param_1;
    lVar2 = lVar1;
    if ((0xfff < param_1[3] * 2 + 2U) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000(lVar2);
  }
  param_1[3] = 7;
  param_1[2] = 0;
  *(undefined2 *)param_1 = 0;
  return;
}



// ===== FUN_14005e1a0 @ 0x14005e1a0 [storage,input,render] =====

undefined4 FUN_14005e1a0(undefined8 param_1)

{
  undefined4 local_res10 [6];
  int iStack_fc;
  longlong local_f8 [2];
  undefined **local_e8 [16];
  undefined **local_68 [13];
  
  FUN_1400559a0(local_f8,param_1);
  FUN_140055be0(local_f8,local_res10);
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



// ===== FUN_14006a410 @ 0x14006a410 [input] =====

longlong FUN_14006a410(longlong *param_1,uint param_2)

{
  return *param_1 + (ulonglong)param_2 * 8;
}



// ===== FUN_14006abe0 @ 0x14006abe0 [storage,input,render] =====

void FUN_14006abe0(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014006abed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return;
  }
  return;
}



// ===== FUN_14006ac00 @ 0x14006ac00 [input,render] =====

void FUN_14006ac00(longlong param_1)

{
  FUN_14006ac40(param_1 + 0x10,0);
  return;
}



// ===== FUN_14008db60 @ 0x14008db60 [input] =====

undefined8 * FUN_14008db60(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  plVar6 = (longlong *)param_1[1];
  *param_1 = uVar4;
  param_1[1] = uVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
    return param_1;
  }
  return param_1;
}



// ===== FUN_1400a4750 @ 0x1400a4750 [profile,storage,input,ui] =====

ulonglong FUN_1400a4750(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                       ulonglong param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_5 <= param_2) && (param_3 <= param_2 - param_5)) {
    if (param_5 == 0) {
      return param_3;
    }
    lVar1 = param_1 + param_2 * 2;
    lVar2 = thunk_FUN_140556fb0(param_1 + param_3 * 2,lVar1,param_4);
    if (lVar2 != lVar1) {
      return lVar2 - param_1 >> 1;
    }
  }
  return 0xffffffffffffffff;
}



// ===== FUN_1400a47c0 @ 0x1400a47c0 [profile,storage,input,ui] =====

undefined8 *
FUN_1400a47c0(undefined8 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
             ulonglong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar3 = param_1[2];
  if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140051220();
  }
  uVar6 = uVar3 - param_2;
  uVar7 = param_3;
  if (uVar6 < param_3) {
    uVar7 = uVar6;
  }
  if (uVar7 != param_5) {
    uVar4 = param_1[3];
    if (param_5 < uVar7) {
      puVar5 = param_1;
      if (7 < uVar4) {
        puVar5 = (undefined8 *)*param_1;
      }
      lVar1 = (longlong)puVar5 + param_2 * 2;
      FUN_140596110(lVar1,param_4,param_5 * 2);
      FUN_140596110(lVar1 + param_5 * 2,lVar1 + uVar7 * 2,(uVar6 - uVar7) * 2 + 2);
      param_1[2] = (uVar3 - uVar7) + param_5;
    }
    else {
      uVar9 = param_5 - uVar7;
      if (uVar4 - uVar3 < uVar9) {
        param_1 = (undefined8 *)FUN_1400a4b40(param_1,uVar9,param_3,param_2,uVar7,param_4,param_5);
      }
      else {
        param_1[2] = uVar3 + uVar9;
        puVar5 = param_1;
        if (7 < uVar4) {
          puVar5 = (undefined8 *)*param_1;
        }
        uVar4 = (longlong)puVar5 + param_2 * 2;
        uVar2 = uVar4 + uVar7 * 2;
        uVar8 = param_5;
        if ((uVar4 < param_4 + param_5 * 2) && (param_4 <= (longlong)puVar5 + uVar3 * 2)) {
          if (param_4 < uVar2) {
            uVar8 = (longlong)(uVar2 - param_4) >> 1;
          }
          else {
            uVar8 = 0;
          }
        }
        FUN_140596110(uVar2 + uVar9 * 2,uVar2,(uVar6 - uVar7) * 2 + 2);
        FUN_140596110(uVar4,param_4,uVar8 * 2);
        FUN_140596110(uVar8 * 2 + uVar4,param_4 + (uVar8 + uVar9) * 2,(param_5 - uVar8) * 2);
      }
    }
    return param_1;
  }
  puVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  FUN_140596110((longlong)puVar5 + param_2 * 2,param_4,param_5 * 2);
  return param_1;
}



// ===== FUN_1400a62c0 @ 0x1400a62c0 [input] =====

undefined8 * FUN_1400a62c0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  return param_1;
}



// ===== FUN_140181b90 @ 0x140181b90 [input] =====

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140181b90(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_c868 [32];
  undefined4 local_c848;
  undefined4 local_c840;
  undefined4 local_c838;
  undefined4 local_c828;
  undefined8 local_c820;
  undefined1 local_c818 [8];
  undefined1 local_c810 [8];
  undefined1 local_c808 [32];
  undefined1 local_c7e8 [32];
  undefined1 local_c7c8 [32];
  undefined1 local_c7a8 [32];
  undefined1 local_c788 [32];
  undefined1 local_c768 [32];
  undefined1 local_c748 [32];
  undefined1 local_c728 [32];
  undefined1 local_c708 [32];
  undefined1 local_c6e8 [32];
  undefined1 local_c6c8 [32];
  undefined1 local_c6a8 [32];
  undefined1 local_c688 [32];
  undefined1 local_c668 [32];
  undefined1 local_c648 [32];
  undefined1 local_c628 [32];
  undefined1 local_c608 [32];
  undefined1 local_c5e8 [32];
  undefined1 local_c5c8 [32];
  undefined1 local_c5a8 [32];
  undefined1 local_c588 [32];
  undefined1 local_c568 [32];
  undefined1 local_c548 [32];
  undefined1 local_c528 [32];
  undefined1 local_c508 [32];
  undefined1 local_c4e8 [32];
  undefined1 local_c4c8 [32];
  undefined1 local_c4a8 [32];
  undefined1 local_c488 [32];
  undefined1 local_c468 [32];
  undefined1 local_c448 [32];
  undefined1 local_c428 [32];
  undefined1 local_c408 [32];
  undefined1 local_c3e8 [32];
  undefined1 local_c3c8 [32];
  undefined1 local_c3a8 [32];
  undefined1 local_c388 [32];
  undefined1 local_c368 [32];
  undefined1 local_c348 [32];
  undefined1 local_c328 [32];
  undefined1 local_c308 [32];
  undefined1 local_c2e8 [32];
  undefined1 local_c2c8 [32];
  undefined1 local_c2a8 [32];
  undefined1 local_c288 [32];
  undefined1 local_c268 [32];
  undefined1 local_c248 [32];
  undefined1 local_c228 [32];
  undefined1 local_c208 [32];
  undefined1 local_c1e8 [32];
  undefined1 local_c1c8 [32];
  undefined1 local_c1a8 [32];
  undefined1 local_c188 [32];
  undefined1 local_c168 [32];
  undefined1 local_c148 [32];
  undefined1 local_c128 [32];
  undefined1 local_c108 [32];
  undefined1 local_c0e8 [32];
  undefined1 local_c0c8 [32];
  undefined1 local_c0a8 [32];
  undefined1 local_c088 [32];
  undefined1 local_c068 [32];
  undefined1 local_c048 [32];
  undefined1 local_c028 [32];
  undefined1 local_c008 [32];
  undefined1 local_bfe8 [32];
  undefined1 local_bfc8 [32];
  undefined1 local_bfa8 [32];
  undefined1 local_bf88 [32];
  undefined1 local_bf68 [32];
  undefined1 local_bf48 [32];
  undefined1 local_bf28 [32];
  undefined1 local_bf08 [32];
  undefined1 local_bee8 [32];
  undefined1 local_bec8 [32];
  undefined1 local_bea8 [32];
  undefined1 local_be88 [32];
  undefined1 local_be68 [32];
  undefined1 local_be48 [32];
  undefined1 local_be28 [32];
  undefined1 local_be08 [32];
  undefined1 local_bde8 [32];
  undefined1 local_bdc8 [32];
  undefined1 local_bda8 [32];
  undefined1 local_bd88 [32];
  undefined1 local_bd68 [32];
  undefined1 local_bd48 [32];
  undefined1 local_bd28 [32];
  undefined1 local_bd08 [32];
  undefined1 local_bce8 [32];
  undefined1 local_bcc8 [32];
  undefined1 local_bca8 [32];
  undefined1 local_bc88 [32];
  undefined1 local_bc68 [32];
  undefined1 local_bc48 [32];
  undefined1 local_bc28 [32];
  undefined1 local_bc08 [32];
  undefined1 local_bbe8 [32];
  undefined1 local_bbc8 [32];
  undefined1 local_bba8 [32];
  undefined1 local_bb88 [32];
  undefined1 local_bb68 [32];
  undefined1 local_bb48 [32];
  undefined1 local_bb28 [32];
  undefined1 local_bb08 [32];
  undefined1 local_bae8 [32];
  undefined1 local_bac8 [32];
  undefined1 local_baa8 [32];
  undefined1 local_ba88 [32];
  undefined1 local_ba68 [32];
  undefined1 local_ba48 [32];
  undefined1 local_ba28 [32];
  undefined1 local_ba08 [32];
  undefined1 local_b9e8 [32];
  undefined1 local_b9c8 [32];
  undefined1 local_b9a8 [32];
  undefined1 local_b988 [32];
  undefined1 local_b968 [32];
  undefined1 local_b948 [32];
  undefined1 local_b928 [32];
  undefined1 local_b908 [32];
  undefined1 local_b8e8 [32];
  undefined1 local_b8c8 [32];
  undefined1 local_b8a8 [32];
  undefined1 local_b888 [32];
  undefined1 local_b868 [32];
  undefined1 local_b848 [32];
  undefined1 local_b828 [32];
  undefined1 local_b808 [32];
  undefined1 local_b7e8 [32];
  undefined1 local_b7c8 [32];
  undefined1 local_b7a8 [32];
  undefined1 local_b788 [32];
  undefined1 local_b768 [32];
  undefined1 local_b748 [32];
  undefined1 local_b728 [32];
  undefined1 local_b708 [32];
  undefined1 local_b6e8 [32];
  undefined1 local_b6c8 [32];
  undefined1 local_b6a8 [32];
  undefined1 local_b688 [32];
  undefined1 local_b668 [32];
  undefined1 local_b648 [32];
  undefined1 local_b628 [32];
  undefined1 local_b608 [32];
  undefined1 local_b5e8 [32];
  undefined1 local_b5c8 [32];
  undefined1 local_b5a8 [32];
  undefined1 local_b588 [32];
  undefined1 local_b568 [32];
  undefined1 local_b548 [32];
  undefined1 local_b528 [32];
  undefined1 local_b508 [32];
  undefined1 local_b4e8 [32];
  undefined1 local_b4c8 [32];
  undefined1 local_b4a8 [32];
  undefined1 local_b488 [32];
  undefined1 local_b468 [32];
  undefined1 local_b448 [32];
  undefined1 local_b428 [32];
  undefined1 local_b408 [32];
  undefined1 local_b3e8 [32];
  undefined1 local_b3c8 [32];
  undefined1 local_b3a8 [32];
  undefined1 local_b388 [32];
  undefined1 local_b368 [32];
  undefined1 local_b348 [32];
  undefined1 local_b328 [32];
  undefined1 local_b308 [32];
  undefined1 local_b2e8 [32];
  undefined1 local_b2c8 [32];
  undefined1 local_b2a8 [32];
  undefined1 local_b288 [32];
  undefined1 local_b268 [32];
  undefined1 local_b248 [32];
  undefined1 local_b228 [32];
  undefined1 local_b208 [32];
  undefined1 local_b1e8 [32];
  undefined1 local_b1c8 [32];
  undefined1 local_b1a8 [32];
  undefined1 local_b188 [32];
  undefined1 local_b168 [32];
  undefined1 local_b148 [32];
  undefined1 local_b128 [32];
  undefined1 local_b108 [32];
  undefined1 local_b0e8 [32];
  undefined1 local_b0c8 [32];
  undefined1 local_b0a8 [32];
  undefined1 local_b088 [32];
  undefined1 local_b068 [32];
  undefined1 local_b048 [32];
  undefined1 local_b028 [32];
  undefined1 local_b008 [32];
  undefined1 local_afe8 [32];
  undefined1 local_afc8 [32];
  undefined1 local_afa8 [32];
  undefined1 local_af88 [32];
  undefined1 local_af68 [32];
  undefined1 local_af48 [32];
  undefined1 local_af28 [32];
  undefined1 local_af08 [32];
  undefined1 local_aee8 [32];
  undefined1 local_aec8 [32];
  undefined1 local_aea8 [32];
  undefined1 local_ae88 [32];
  undefined1 local_ae68 [32];
  undefined1 local_ae48 [32];
  undefined1 local_ae28 [32];
  undefined1 local_ae08 [32];
  undefined1 local_ade8 [32];
  undefined1 local_adc8 [32];
  undefined1 local_ada8 [32];
  undefined1 local_ad88 [32];
  undefined1 local_ad68 [32];
  undefined1 local_ad48 [32];
  undefined1 local_ad28 [32];
  undefined1 local_ad08 [32];
  undefined1 local_ace8 [32];
  undefined1 local_acc8 [32];
  undefined1 local_aca8 [32];
  undefined1 local_ac88 [32];
  undefined1 local_ac68 [32];
  undefined1 local_ac48 [32];
  undefined1 local_ac28 [32];
  undefined1 local_ac08 [32];
  undefined1 local_abe8 [32];
  undefined1 local_abc8 [32];
  undefined1 local_aba8 [32];
  undefined1 local_ab88 [32];
  undefined1 local_ab68 [32];
  undefined1 local_ab48 [32];
  undefined1 local_ab28 [32];
  undefined1 local_ab08 [32];
  undefined1 local_aae8 [32];
  undefined1 local_aac8 [32];
  undefined1 local_aaa8 [32];
  undefined1 local_aa88 [32];
  undefined1 local_aa68 [32];
  undefined1 local_aa48 [32];
  undefined1 local_aa28 [32];
  undefined1 local_aa08 [32];
  undefined1 local_a9e8 [32];
  undefined1 local_a9c8 [32];
  undefined1 local_a9a8 [32];
  undefined1 local_a988 [32];
  undefined1 local_a968 [32];
  undefined1 local_a948 [32];
  undefined1 local_a928 [32];
  undefined1 local_a908 [32];
  undefined1 local_a8e8 [32];
  undefined1 local_a8c8 [32];
  undefined1 local_a8a8 [32];
  undefined1 local_a888 [32];
  undefined1 local_a868 [32];
  undefined1 local_a848 [32];
  undefined1 local_a828 [32];
  undefined1 local_a808 [32];
  undefined1 local_a7e8 [32];
  undefined1 local_a7c8 [32];
  undefined1 local_a7a8 [32];
  undefined1 local_a788 [32];
  undefined1 local_a768 [32];
  undefined1 local_a748 [32];
  undefined1 local_a728 [32];
  undefined1 local_a708 [32];
  undefined1 local_a6e8 [32];
  undefined1 local_a6c8 [32];
  undefined1 local_a6a8 [32];
  undefined1 local_a688 [32];
  undefined1 local_a668 [32];
  undefined1 local_a648 [32];
  undefined1 local_a628 [32];
  undefined1 local_a608 [32];
  undefined1 local_a5e8 [32];
  undefined1 local_a5c8 [32];
  undefined1 local_a5a8 [32];
  undefined1 local_a588 [32];
  undefined1 local_a568 [32];
  undefined1 local_a548 [32];
  undefined1 local_a528 [32];
  undefined1 local_a508 [32];
  undefined1 local_a4e8 [32];
  undefined1 local_a4c8 [32];
  undefined1 local_a4a8 [32];
  undefined1 local_a488 [32];
  undefined1 local_a468 [32];
  undefined1 local_a448 [32];
  undefined1 local_a428 [32];
  undefined1 local_a408 [32];
  undefined1 local_a3e8 [32];
  undefined1 local_a3c8 [32];
  undefined1 local_a3a8 [32];
  undefined1 local_a388 [32];
  undefined1 local_a368 [32];
  undefined1 local_a348 [32];
  undefined1 local_a328 [32];
  undefined1 local_a308 [32];
  undefined1 local_a2e8 [32];
  undefined1 local_a2c8 [32];
  undefined1 local_a2a8 [32];
  undefined1 local_a288 [32];
  undefined1 local_a268 [32];
  undefined1 local_a248 [32];
  undefined1 local_a228 [32];
  undefined1 local_a208 [32];
  undefined1 local_a1e8 [32];
  undefined1 local_a1c8 [32];
  undefined1 local_a1a8 [32];
  undefined1 local_a188 [32];
  undefined1 local_a168 [32];
  undefined1 local_a148 [32];
  undefined1 local_a128 [32];
  undefined1 local_a108 [32];
  undefined1 local_a0e8 [32];
  undefined1 local_a0c8 [32];
  undefined1 local_a0a8 [32];
  undefined1 local_a088 [32];
  undefined1 local_a068 [32];
  undefined1 local_a048 [32];
  undefined1 local_a028 [32];
  undefined1 local_a008 [32];
  undefined1 local_9fe8 [32];
  undefined1 local_9fc8 [32];
  undefined1 local_9fa8 [32];
  undefined1 local_9f88 [32];
  undefined1 local_9f68 [32];
  undefined1 local_9f48 [32];
  undefined1 local_9f28 [32];
  undefined1 local_9f08 [32];
  undefined1 local_9ee8 [32];
  undefined1 local_9ec8 [32];
  undefined1 local_9ea8 [32];
  undefined1 local_9e88 [32];
  undefined1 local_9e68 [32];
  undefined1 local_9e48 [32];
  undefined1 local_9e28 [32];
  undefined1 local_9e08 [32];
  undefined1 local_9de8 [32];
  undefined1 local_9dc8 [32];
  undefined1 local_9da8 [32];
  undefined1 local_9d88 [32];
  undefined1 local_9d68 [32];
  undefined1 local_9d48 [32];
  undefined1 local_9d28 [32];
  undefined1 local_9d08 [32];
  undefined1 local_9ce8 [32];
  undefined1 local_9cc8 [32];
  undefined1 local_9ca8 [32];
  undefined1 local_9c88 [32];
  undefined1 local_9c68 [32];
  undefined1 local_9c48 [32];
  undefined1 local_9c28 [32];
  undefined1 local_9c08 [32];
  undefined1 local_9be8 [32];
  undefined1 local_9bc8 [32];
  undefined1 local_9ba8 [32];
  undefined1 local_9b88 [32];
  undefined1 local_9b68 [32];
  undefined1 local_9b48 [32];
  undefined1 local_9b28 [32];
  undefined1 local_9b08 [32];
  undefined1 local_9ae8 [32];
  undefined1 local_9ac8 [32];
  undefined1 local_9aa8 [32];
  undefined1 local_9a88 [32];
  undefined1 local_9a68 [32];
  undefined1 local_9a48 [32];
  undefined1 local_9a28 [32];
  undefined1 local_9a08 [32];
  undefined1 local_99e8 [32];
  undefined1 local_99c8 [32];
  undefined1 local_99a8 [32];
  undefined1 local_9988 [32];
  undefined1 local_9968 [32];
  undefined1 local_9948 [32];
  undefined1 local_9928 [32];
  undefined1 local_9908 [32];
  undefined1 local_98e8 [32];
  undefined1 local_98c8 [32];
  undefined1 local_98a8 [32];
  undefined1 local_9888 [32];
  undefined1 local_9868 [32];
  undefined1 local_9848 [32];
  undefined1 local_9828 [32];
  undefined1 local_9808 [32];
  undefined1 local_97e8 [32];
  undefined1 local_97c8 [32];
  undefined1 local_97a8 [32];
  undefined1 local_9788 [32];
  undefined1 local_9768 [32];
  undefined1 local_9748 [32];
  undefined1 local_9728 [32];
  undefined1 local_9708 [32];
  undefined1 local_96e8 [32];
  undefined1 local_96c8 [32];
  undefined1 local_96a8 [32];
  undefined1 local_9688 [32];
  undefined1 local_9668 [32];
  undefined1 local_9648 [32];
  undefined1 local_9628 [32];
  undefined1 local_9608 [32];
  undefined1 local_95e8 [32];
  undefined1 local_95c8 [32];
  undefined1 local_95a8 [32];
  undefined1 local_9588 [32];
  undefined1 local_9568 [32];
  undefined1 local_9548 [32];
  undefined1 local_9528 [32];
  undefined1 local_9508 [32];
  undefined1 local_94e8 [32];
  undefined1 local_94c8 [32];
  undefined1 local_94a8 [32];
  undefined1 local_9488 [32];
  undefined1 local_9468 [32];
  undefined1 local_9448 [32];
  undefined1 local_9428 [32];
  undefined1 local_9408 [32];
  undefined1 local_93e8 [32];
  undefined1 local_93c8 [32];
  undefined1 local_93a8 [32];
  undefined1 local_9388 [32];
  undefined1 local_9368 [32];
  undefined1 local_9348 [32];
  undefined1 local_9328 [32];
  undefined1 local_9308 [32];
  undefined1 local_92e8 [32];
  undefined1 local_92c8 [32];
  undefined1 local_92a8 [32];
  undefined1 local_9288 [32];
  undefined1 local_9268 [32];
  undefined1 local_9248 [32];
  undefined1 local_9228 [32];
  undefined1 local_9208 [32];
  undefined1 local_91e8 [32];
  undefined1 local_91c8 [32];
  undefined1 local_91a8 [32];
  undefined1 local_9188 [32];
  undefined1 local_9168 [32];
  undefined1 local_9148 [32];
  undefined1 local_9128 [32];
  undefined1 local_9108 [32];
  undefined1 local_90e8 [32];
  undefined1 local_90c8 [32];
  undefined1 local_90a8 [32];
  undefined1 local_9088 [32];
  undefined1 local_9068 [32];
  undefined1 local_9048 [32];
  undefined1 local_9028 [32];
  undefined1 local_9008 [32];
  undefined1 local_8fe8 [32];
  undefined1 local_8fc8 [32];
  undefined1 local_8fa8 [32];
  undefined1 local_8f88 [32];
  undefined1 local_8f68 [32];
  undefined1 local_8f48 [32];
  undefined1 local_8f28 [32];
  undefined1 local_8f08 [32];
  undefined1 local_8ee8 [32];
  undefined1 local_8ec8 [32];
  undefined1 local_8ea8 [32];
  undefined1 local_8e88 [32];
  undefined1 local_8e68 [32];
  undefined1 local_8e48 [32];
  undefined1 local_8e28 [32];
  undefined1 local_8e08 [32];
  undefined1 local_8de8 [32];
  undefined1 local_8dc8 [32];
  undefined1 local_8da8 [32];
  undefined1 local_8d88 [32];
  undefined1 local_8d68 [32];
  undefined1 local_8d48 [32];
  undefined1 local_8d28 [32];
  undefined1 local_8d08 [32];
  undefined1 local_8ce8 [32];
  undefined1 local_8cc8 [32];
  undefined1 local_8ca8 [32];
  undefined1 local_8c88 [32];
  undefined1 local_8c68 [32];
  undefined1 local_8c48 [32];
  undefined1 local_8c28 [32];
  undefined1 local_8c08 [32];
  undefined1 local_8be8 [32];
  undefined1 local_8bc8 [32];
  undefined1 local_8ba8 [32];
  undefined1 local_8b88 [32];
  undefined1 local_8b68 [32];
  undefined1 local_8b48 [32];
  undefined1 local_8b28 [32];
  undefined1 local_8b08 [32];
  undefined1 local_8ae8 [32];
  undefined1 local_8ac8 [32];
  undefined1 local_8aa8 [32];
  undefined1 local_8a88 [32];
  undefined1 local_8a68 [32];
  undefined1 local_8a48 [32];
  undefined1 local_8a28 [32];
  undefined1 local_8a08 [32];
  undefined1 local_89e8 [32];
  undefined1 local_89c8 [32];
  undefined1 local_89a8 [32];
  undefined1 local_8988 [32];
  undefined1 local_8968 [32];
  undefined1 local_8948 [32];
  undefined1 local_8928 [32];
  undefined1 local_8908 [32];
  undefined1 local_88e8 [32];
  undefined1 local_88c8 [32];
  undefined1 local_88a8 [32];
  undefined1 local_8888 [32];
  undefined1 local_8868 [32];
  undefined1 local_8848 [32];
  undefined1 local_8828 [32];
  undefined1 local_8808 [32];
  undefined1 local_87e8 [32];
  undefined1 local_87c8 [32];
  undefined1 local_87a8 [32];
  undefined1 local_8788 [32];
  undefined1 local_8768 [32];
  undefined1 local_8748 [32];
  undefined1 local_8728 [32];
  undefined1 local_8708 [32];
  undefined1 local_86e8 [32];
  undefined1 local_86c8 [32];
  undefined1 local_86a8 [32];
  undefined1 local_8688 [32];
  undefined1 local_8668 [32];
  undefined1 local_8648 [32];
  undefined1 local_8628 [32];
  undefined1 local_8608 [32];
  undefined1 local_85e8 [32];
  undefined1 local_85c8 [32];
  undefined1 local_85a8 [32];
  undefined1 local_8588 [32];
  undefined1 local_8568 [32];
  undefined1 local_8548 [32];
  undefined1 local_8528 [32];
  undefined1 local_8508 [32];
  undefined1 local_84e8 [32];
  undefined1 local_84c8 [32];
  undefined1 local_84a8 [32];
  undefined1 local_8488 [32];
  undefined1 local_8468 [32];
  undefined1 local_8448 [32];
  undefined1 local_8428 [32];
  undefined1 local_8408 [32];
  undefined1 local_83e8 [32];
  undefined1 local_83c8 [32];
  undefined1 local_83a8 [32];
  undefined1 local_8388 [32];
  undefined1 local_8368 [32];
  undefined1 local_8348 [32];
  undefined1 local_8328 [32];
  undefined1 local_8308 [32];
  undefined1 local_82e8 [32];
  undefined1 local_82c8 [32];
  undefined1 local_82a8 [32];
  undefined1 local_8288 [32];
  undefined1 local_8268 [32];
  undefined1 local_8248 [32];
  undefined1 local_8228 [32];
  undefined1 local_8208 [32];
  undefined1 local_81e8 [32];
  undefined1 local_81c8 [32];
  undefined1 local_81a8 [32];
  undefined1 local_8188 [32];
  undefined1 local_8168 [32];
  undefined1 local_8148 [32];
  undefined1 local_8128 [32];
  undefined1 local_8108 [32];
  undefined1 local_80e8 [32];
  undefined1 local_80c8 [32];
  undefined1 local_80a8 [32];
  undefined1 local_8088 [32];
  undefined1 local_8068 [32];
  undefined1 local_8048 [32];
  undefined1 local_8028 [32];
  undefined1 local_8008 [32];
  undefined1 local_7fe8 [32];
  undefined1 local_7fc8 [32];
  undefined1 local_7fa8 [32];
  undefined1 local_7f88 [32];
  undefined1 local_7f68 [32];
  undefined1 local_7f48 [32];
  undefined1 local_7f28 [32];
  undefined1 local_7f08 [32];
  undefined1 local_7ee8 [32];
  undefined1 local_7ec8 [32];
  undefined1 local_7ea8 [32];
  undefined1 local_7e88 [32];
  undefined1 local_7e68 [32];
  undefined1 local_7e48 [32];
  undefined1 local_7e28 [32];
  undefined1 local_7e08 [32];
  undefined1 local_7de8 [32];
  undefined1 local_7dc8 [32];
  undefined1 local_7da8 [32];
  undefined1 local_7d88 [32];
  undefined1 local_7d68 [32];
  undefined1 local_7d48 [32];
  undefined1 local_7d28 [32];
  undefined1 local_7d08 [32];
  undefined1 local_7ce8 [32];
  undefined1 local_7cc8 [32];
  undefined1 local_7ca8 [32];
  undefined1 local_7c88 [32];
  undefined1 local_7c68 [32];
  undefined1 local_7c48 [32];
  undefined1 local_7c28 [32];
  undefined1 local_7c08 [32];
  undefined1 local_7be8 [32];
  undefined1 local_7bc8 [32];
  undefined1 local_7ba8 [32];
  undefined1 local_7b88 [32];
  undefined1 local_7b68 [32];
  undefined1 local_7b48 [32];
  undefined1 local_7b28 [32];
  undefined1 local_7b08 [32];
  undefined1 local_7ae8 [32];
  undefined1 local_7ac8 [32];
  undefined1 local_7aa8 [32];
  undefined1 local_7a88 [32];
  undefined1 local_7a68 [32];
  undefined1 local_7a48 [32];
  undefined1 local_7a28 [32];
  undefined1 local_7a08 [32];
  undefined1 local_79e8 [32];
  undefined1 local_79c8 [32];
  undefined1 local_79a8 [32];
  undefined1 local_7988 [32];
  undefined1 local_7968 [32];
  undefined1 local_7948 [32];
  undefined1 local_7928 [32];
  undefined1 local_7908 [32];
  undefined1 local_78e8 [32];
  undefined1 local_78c8 [32];
  undefined1 local_78a8 [32];
  undefined1 local_7888 [32];
  undefined1 local_7868 [32];
  undefined1 local_7848 [32];
  undefined1 local_7828 [32];
  undefined1 local_7808 [32];
  undefined1 local_77e8 [32];
  undefined1 local_77c8 [32];
  undefined1 local_77a8 [32];
  undefined1 local_7788 [32];
  undefined1 local_7768 [32];
  undefined1 local_7748 [32];
  undefined1 local_7728 [32];
  undefined1 local_7708 [32];
  undefined1 local_76e8 [32];
  undefined1 local_76c8 [32];
  undefined1 local_76a8 [32];
  undefined1 local_7688 [32];
  undefined1 local_7668 [32];
  undefined1 local_7648 [32];
  undefined1 local_7628 [32];
  undefined1 local_7608 [32];
  undefined1 local_75e8 [32];
  undefined1 local_75c8 [32];
  undefined1 local_75a8 [32];
  undefined1 local_7588 [32];
  undefined1 local_7568 [32];
  undefined1 local_7548 [32];
  undefined1 local_7528 [32];
  undefined1 local_7508 [32];
  undefined1 local_74e8 [32];
  undefined1 local_74c8 [32];
  undefined1 local_74a8 [32];
  undefined1 local_7488 [32];
  undefined1 local_7468 [32];
  undefined1 local_7448 [32];
  undefined1 local_7428 [32];
  undefined1 local_7408 [32];
  undefined1 local_73e8 [32];
  undefined1 local_73c8 [32];
  undefined1 local_73a8 [32];
  undefined1 local_7388 [32];
  undefined1 local_7368 [32];
  undefined1 local_7348 [32];
  undefined1 local_7328 [32];
  undefined1 local_7308 [32];
  undefined1 local_72e8 [32];
  undefined1 local_72c8 [32];
  undefined1 local_72a8 [32];
  undefined1 local_7288 [32];
  undefined1 local_7268 [32];
  undefined1 local_7248 [32];
  undefined1 local_7228 [32];
  undefined1 local_7208 [32];
  undefined1 local_71e8 [32];
  undefined1 local_71c8 [32];
  undefined1 local_71a8 [32];
  undefined1 local_7188 [32];
  undefined1 local_7168 [32];
  undefined1 local_7148 [32];
  undefined1 local_7128 [32];
  undefined1 local_7108 [32];
  undefined1 local_70e8 [32];
  undefined1 local_70c8 [32];
  undefined1 local_70a8 [32];
  undefined1 local_7088 [32];
  undefined1 local_7068 [32];
  undefined1 local_7048 [32];
  undefined1 local_7028 [32];
  undefined1 local_7008 [32];
  undefined1 local_6fe8 [32];
  undefined1 local_6fc8 [32];
  undefined1 local_6fa8 [32];
  undefined1 local_6f88 [32];
  undefined1 local_6f68 [32];
  undefined1 local_6f48 [32];
  undefined1 local_6f28 [32];
  undefined1 local_6f08 [32];
  undefined1 local_6ee8 [32];
  undefined1 local_6ec8 [32];
  undefined1 local_6ea8 [32];
  undefined1 local_6e88 [32];
  undefined1 local_6e68 [32];
  undefined1 local_6e48 [32];
  undefined1 local_6e28 [32];
  undefined1 local_6e08 [32];
  undefined1 local_6de8 [32];
  undefined1 local_6dc8 [32];
  undefined1 local_6da8 [32];
  undefined1 local_6d88 [32];
  undefined1 local_6d68 [32];
  undefined1 local_6d48 [32];
  undefined1 local_6d28 [32];
  undefined1 local_6d08 [32];
  undefined1 local_6ce8 [32];
  undefined1 local_6cc8 [32];
  undefined1 local_6ca8 [32];
  undefined1 local_6c88 [32];
  undefined1 local_6c68 [32];
  undefined1 local_6c48 [32];
  undefined1 local_6c28 [32];
  undefined1 local_6c08 [32];
  undefined1 local_6be8 [32];
  undefined1 local_6bc8 [32];
  undefined1 local_6ba8 [32];
  undefined1 local_6b88 [32];
  undefined1 local_6b68 [32];
  undefined1 local_6b48 [32];
  undefined1 local_6b28 [32];
  undefined1 local_6b08 [32];
  undefined1 local_6ae8 [32];
  undefined1 local_6ac8 [32];
  undefined1 local_6aa8 [32];
  undefined1 local_6a88 [32];
  undefined1 local_6a68 [32];
  undefined1 local_6a48 [32];
  undefined1 local_6a28 [32];
  undefined1 local_6a08 [32];
  undefined1 local_69e8 [32];
  undefined1 local_69c8 [32];
  undefined1 local_69a8 [32];
  undefined1 local_6988 [32];
  undefined1 local_6968 [32];
  undefined1 local_6948 [32];
  undefined1 local_6928 [32];
  undefined1 local_6908 [32];
  undefined1 local_68e8 [32];
  undefined1 local_68c8 [32];
  undefined1 local_68a8 [32];
  undefined1 local_6888 [32];
  undefined1 local_6868 [32];
  undefined1 local_6848 [32];
  undefined1 local_6828 [32];
  undefined1 local_6808 [32];
  undefined1 local_67e8 [32];
  undefined1 local_67c8 [32];
  undefined1 local_67a8 [32];
  undefined1 local_6788 [32];
  undefined1 local_6768 [32];
  undefined1 local_6748 [32];
  undefined1 local_6728 [32];
  undefined1 local_6708 [32];
  undefined1 local_66e8 [32];
  undefined1 local_66c8 [32];
  undefined1 local_66a8 [32];
  undefined1 local_6688 [32];
  undefined1 local_6668 [32];
  undefined1 local_6648 [32];
  undefined1 local_6628 [32];
  undefined1 local_6608 [32];
  undefined1 local_65e8 [32];
  undefined1 local_65c8 [32];
  undefined1 local_65a8 [32];
  undefined1 local_6588 [32];
  undefined1 local_6568 [32];
  undefined1 local_6548 [32];
  undefined1 local_6528 [32];
  undefined1 local_6508 [32];
  undefined1 local_64e8 [32];
  undefined1 local_64c8 [32];
  undefined1 local_64a8 [32];
  undefined1 local_6488 [32];
  undefined1 local_6468 [32];
  undefined1 local_6448 [32];
  undefined1 local_6428 [32];
  undefined1 local_6408 [32];
  undefined1 local_63e8 [32];
  undefined1 local_63c8 [32];
  undefined1 local_63a8 [32];
  undefined1 local_6388 [32];
  undefined1 local_6368 [32];
  undefined1 local_6348 [32];
  undefined1 local_6328 [32];
  undefined1 local_6308 [32];
  undefined1 local_62e8 [32];
  undefined1 local_62c8 [32];
  undefined1 local_62a8 [32];
  undefined1 local_6288 [32];
  undefined1 local_6268 [32];
  undefined1 local_6248 [32];
  undefined1 local_6228 [32];
  undefined1 local_6208 [32];
  undefined1 local_61e8 [32];
  undefined1 local_61c8 [32];
  undefined1 local_61a8 [32];
  undefined1 local_6188 [32];
  undefined1 local_6168 [32];
  undefined1 local_6148 [32];
  undefined1 local_6128 [32];
  undefined1 local_6108 [32];
  undefined1 local_60e8 [32];
  undefined1 local_60c8 [32];
  undefined1 local_60a8 [32];
  undefined1 local_6088 [32];
  undefined1 local_6068 [32];
  undefined1 local_6048 [32];
  undefined1 local_6028 [32];
  undefined1 local_6008 [32];
  undefined1 local_5fe8 [32];
  undefined1 local_5fc8 [32];
  undefined1 local_5fa8 [32];
  undefined1 local_5f88 [32];
  undefined1 local_5f68 [32];
  undefined1 local_5f48 [32];
  undefined1 local_5f28 [32];
  undefined1 local_5f08 [32];
  undefined1 local_5ee8 [32];
  undefined1 local_5ec8 [32];
  undefined1 local_5ea8 [32];
  undefined1 local_5e88 [32];
  undefined1 local_5e68 [32];
  undefined1 local_5e48 [32];
  undefined1 local_5e28 [32];
  undefined1 local_5e08 [32];
  undefined1 local_5de8 [32];
  undefined1 local_5dc8 [32];
  undefined1 local_5da8 [32];
  undefined1 local_5d88 [32];
  undefined1 local_5d68 [32];
  undefined1 local_5d48 [32];
  undefined1 local_5d28 [32];
  undefined1 local_5d08 [32];
  undefined1 local_5ce8 [32];
  undefined1 local_5cc8 [32];
  undefined1 local_5ca8 [32];
  undefined1 local_5c88 [32];
  undefined1 local_5c68 [32];
  undefined1 local_5c48 [32];
  undefined1 local_5c28 [32];
  undefined1 local_5c08 [32];
  undefined1 local_5be8 [32];
  undefined1 local_5bc8 [32];
  undefined1 local_5ba8 [32];
  undefined1 local_5b88 [32];
  undefined1 local_5b68 [32];
  undefined1 local_5b48 [32];
  undefined1 local_5b28 [32];
  undefined1 local_5b08 [32];
  undefined1 local_5ae8 [32];
  undefined1 local_5ac8 [32];
  undefined1 local_5aa8 [32];
  undefined1 local_5a88 [32];
  undefined1 local_5a68 [32];
  undefined1 local_5a48 [32];
  undefined1 local_5a28 [32];
  undefined1 local_5a08 [32];
  undefined1 local_59e8 [32];
  undefined1 local_59c8 [32];
  undefined1 local_59a8 [32];
  undefined1 local_5988 [32];
  undefined1 local_5968 [32];
  undefined1 local_5948 [32];
  undefined1 local_5928 [32];
  undefined1 local_5908 [32];
  undefined1 local_58e8 [32];
  undefined1 local_58c8 [32];
  undefined1 local_58a8 [32];
  undefined1 local_5888 [32];
  undefined1 local_5868 [32];
  undefined1 local_5848 [32];
  undefined1 local_5828 [32];
  undefined1 local_5808 [32];
  undefined1 local_57e8 [32];
  undefined1 local_57c8 [32];
  undefined1 local_57a8 [32];
  undefined1 local_5788 [32];
  undefined1 local_5768 [32];
  undefined1 local_5748 [32];
  undefined1 local_5728 [32];
  undefined1 local_5708 [32];
  undefined1 local_56e8 [32];
  undefined1 local_56c8 [32];
  undefined1 local_56a8 [32];
  undefined1 local_5688 [32];
  undefined1 local_5668 [32];
  undefined1 local_5648 [32];
  undefined1 local_5628 [32];
  undefined1 local_5608 [32];
  undefined1 local_55e8 [32];
  undefined1 local_55c8 [32];
  undefined1 local_55a8 [32];
  undefined1 local_5588 [32];
  undefined1 local_5568 [32];
  undefined1 local_5548 [32];
  undefined1 local_5528 [32];
  undefined1 local_5508 [32];
  undefined1 local_54e8 [32];
  undefined1 local_54c8 [32];
  undefined1 local_54a8 [32];
  undefined1 local_5488 [32];
  undefined1 local_5468 [32];
  undefined1 local_5448 [32];
  undefined1 local_5428 [32];
  undefined1 local_5408 [32];
  undefined1 local_53e8 [32];
  undefined1 local_53c8 [32];
  undefined1 local_53a8 [32];
  undefined1 local_5388 [32];
  undefined1 local_5368 [32];
  undefined1 local_5348 [32];
  undefined1 local_5328 [32];
  undefined1 local_5308 [32];
  undefined1 local_52e8 [32];
  undefined1 local_52c8 [32];
  undefined1 local_52a8 [32];
  undefined1 local_5288 [32];
  undefined1 local_5268 [32];
  undefined1 local_5248 [32];
  undefined1 local_5228 [32];
  undefined1 local_5208 [32];
  undefined1 local_51e8 [32];
  undefined1 local_51c8 [32];
  undefined1 local_51a8 [32];
  undefined1 local_5188 [32];
  undefined1 local_5168 [32];
  undefined1 local_5148 [32];
  undefined1 local_5128 [32];
  undefined1 local_5108 [32];
  undefined1 local_50e8 [32];
  undefined1 local_50c8 [32];
  undefined1 local_50a8 [32];
  undefined1 local_5088 [32];
  undefined1 local_5068 [32];
  undefined1 local_5048 [32];
  undefined1 local_5028 [32];
  undefined1 local_5008 [32];
  undefined1 local_4fe8 [32];
  undefined1 local_4fc8 [32];
  undefined1 local_4fa8 [32];
  undefined1 local_4f88 [32];
  undefined1 local_4f68 [32];
  undefined1 local_4f48 [32];
  undefined1 local_4f28 [32];
  undefined1 local_4f08 [32];
  undefined1 local_4ee8 [32];
  undefined1 local_4ec8 [32];
  undefined1 local_4ea8 [32];
  undefined1 local_4e88 [32];
  undefined1 local_4e68 [32];
  undefined1 local_4e48 [32];
  undefined1 local_4e28 [32];
  undefined1 local_4e08 [32];
  undefined1 local_4de8 [32];
  undefined1 local_4dc8 [32];
  undefined1 local_4da8 [32];
  undefined1 local_4d88 [32];
  undefined1 local_4d68 [32];
  undefined1 local_4d48 [32];
  undefined1 local_4d28 [32];
  undefined1 local_4d08 [32];
  undefined1 local_4ce8 [32];
  undefined1 local_4cc8 [32];
  undefined1 local_4ca8 [32];
  undefined1 local_4c88 [32];
  undefined1 local_4c68 [32];
  undefined1 local_4c48 [32];
  undefined1 local_4c28 [32];
  undefined1 local_4c08 [32];
  undefined1 local_4be8 [32];
  undefined1 local_4bc8 [32];
  undefined1 local_4ba8 [32];
  undefined1 local_4b88 [32];
  undefined1 local_4b68 [32];
  undefined1 local_4b48 [32];
  undefined1 local_4b28 [32];
  undefined1 local_4b08 [32];
  undefined1 local_4ae8 [32];
  undefined1 local_4ac8 [32];
  undefined1 local_4aa8 [32];
  undefined1 local_4a88 [32];
  undefined1 local_4a68 [32];
  undefined1 local_4a48 [32];
  undefined1 local_4a28 [32];
  undefined1 local_4a08 [32];
  undefined1 local_49e8 [32];
  undefined1 local_49c8 [32];
  undefined1 local_49a8 [32];
  undefined1 local_4988 [32];
  undefined1 local_4968 [32];
  undefined1 local_4948 [32];
  undefined1 local_4928 [32];
  undefined1 local_4908 [32];
  undefined1 local_48e8 [32];
  undefined1 local_48c8 [32];
  undefined1 local_48a8 [32];
  undefined1 local_4888 [32];
  undefined1 local_4868 [32];
  undefined1 local_4848 [32];
  undefined1 local_4828 [32];
  undefined1 local_4808 [32];
  undefined1 local_47e8 [32];
  undefined1 local_47c8 [32];
  undefined1 local_47a8 [32];
  undefined1 local_4788 [32];
  undefined1 local_4768 [32];
  undefined1 local_4748 [32];
  undefined1 local_4728 [32];
  undefined1 local_4708 [32];
  undefined1 local_46e8 [32];
  undefined1 local_46c8 [32];
  undefined1 local_46a8 [32];
  undefined1 local_4688 [32];
  undefined1 local_4668 [32];
  undefined1 local_4648 [32];
  undefined1 local_4628 [32];
  undefined1 local_4608 [32];
  undefined1 local_45e8 [32];
  undefined1 local_45c8 [32];
  undefined1 local_45a8 [32];
  undefined1 local_4588 [32];
  undefined1 local_4568 [32];
  undefined1 local_4548 [32];
  undefined1 local_4528 [32];
  undefined1 local_4508 [32];
  undefined1 local_44e8 [32];
  undefined1 local_44c8 [32];
  undefined1 local_44a8 [32];
  undefined1 local_4488 [32];
  undefined1 local_4468 [32];
  undefined1 local_4448 [32];
  undefined1 local_4428 [32];
  undefined1 local_4408 [32];
  undefined1 local_43e8 [32];
  undefined1 local_43c8 [32];
  undefined1 local_43a8 [32];
  undefined1 local_4388 [32];
  undefined1 local_4368 [32];
  undefined1 local_4348 [32];
  undefined1 local_4328 [32];
  undefined1 local_4308 [32];
  undefined1 local_42e8 [32];
  undefined1 local_42c8 [32];
  undefined1 local_42a8 [32];
  undefined1 local_4288 [32];
  undefined1 local_4268 [32];
  undefined1 local_4248 [32];
  undefined1 local_4228 [32];
  undefined1 local_4208 [32];
  undefined1 local_41e8 [32];
  undefined1 local_41c8 [32];
  undefined1 local_41a8 [32];
  undefined1 local_4188 [32];
  undefined1 local_4168 [32];
  undefined1 local_4148 [32];
  undefined1 local_4128 [32];
  undefined1 local_4108 [32];
  undefined1 local_40e8 [32];
  undefined1 local_40c8 [32];
  undefined1 local_40a8 [32];
  undefined1 local_4088 [32];
  undefined1 local_4068 [32];
  undefined1 local_4048 [32];
  undefined1 local_4028 [32];
  undefined1 local_4008 [32];
  undefined1 local_3fe8 [32];
  undefined1 local_3fc8 [32];
  undefined1 local_3fa8 [32];
  undefined1 local_3f88 [32];
  undefined1 local_3f68 [32];
  undefined1 local_3f48 [32];
  undefined1 local_3f28 [32];
  undefined1 local_3f08 [32];
  undefined1 local_3ee8 [32];
  undefined1 local_3ec8 [32];
  undefined1 local_3ea8 [32];
  undefined1 local_3e88 [32];
  undefined1 local_3e68 [32];
  undefined1 local_3e48 [32];
  undefined1 local_3e28 [32];
  undefined1 local_3e08 [32];
  undefined1 local_3de8 [32];
  undefined1 local_3dc8 [32];
  undefined1 local_3da8 [32];
  undefined1 local_3d88 [32];
  undefined1 local_3d68 [32];
  undefined1 local_3d48 [32];
  undefined1 local_3d28 [32];
  undefined1 local_3d08 [32];
  undefined1 local_3ce8 [32];
  undefined1 local_3cc8 [32];
  undefined1 local_3ca8 [32];
  undefined1 local_3c88 [32];
  undefined1 local_3c68 [32];
  undefined1 local_3c48 [32];
  undefined1 local_3c28 [32];
  undefined1 local_3c08 [32];
  undefined1 local_3be8 [32];
  undefined1 local_3bc8 [32];
  undefined1 local_3ba8 [32];
  undefined1 local_3b88 [32];
  undefined1 local_3b68 [32];
  undefined1 local_3b48 [32];
  undefined1 local_3b28 [32];
  undefined1 local_3b08 [32];
  undefined1 local_3ae8 [32];
  undefined1 local_3ac8 [32];
  undefined1 local_3aa8 [32];
  undefined1 local_3a88 [32];
  undefined1 local_3a68 [32];
  undefined1 local_3a48 [32];
  undefined1 local_3a28 [32];
  undefined1 local_3a08 [32];
  undefined1 local_39e8 [32];
  undefined1 local_39c8 [32];
  undefined1 local_39a8 [32];
  undefined1 local_3988 [32];
  undefined1 local_3968 [32];
  undefined1 local_3948 [32];
  undefined1 local_3928 [32];
  undefined1 local_3908 [32];
  undefined1 local_38e8 [32];
  undefined1 local_38c8 [32];
  undefined1 local_38a8 [32];
  undefined1 local_3888 [32];
  undefined1 local_3868 [32];
  undefined1 local_3848 [32];
  undefined1 local_3828 [32];
  undefined1 local_3808 [32];
  undefined1 local_37e8 [32];
  undefined1 local_37c8 [32];
  undefined1 local_37a8 [32];
  undefined1 local_3788 [32];
  undefined1 local_3768 [32];
  undefined1 local_3748 [32];
  undefined1 local_3728 [32];
  undefined1 local_3708 [32];
  undefined1 local_36e8 [32];
  undefined1 local_36c8 [32];
  undefined1 local_36a8 [32];
  undefined1 local_3688 [32];
  undefined1 local_3668 [32];
  undefined1 local_3648 [32];
  undefined1 local_3628 [32];
  undefined1 local_3608 [32];
  undefined1 local_35e8 [32];
  undefined1 local_35c8 [32];
  undefined1 local_35a8 [32];
  undefined1 local_3588 [32];
  undefined1 local_3568 [32];
  undefined1 local_3548 [32];
  undefined1 local_3528 [32];
  undefined1 local_3508 [32];
  undefined1 local_34e8 [32];
  undefined1 local_34c8 [32];
  undefined1 local_34a8 [32];
  undefined1 local_3488 [32];
  undefined1 local_3468 [32];
  undefined1 local_3448 [32];
  undefined1 local_3428 [32];
  undefined1 local_3408 [32];
  undefined1 local_33e8 [32];
  undefined1 local_33c8 [32];
  undefined1 local_33a8 [32];
  undefined1 local_3388 [32];
  undefined1 local_3368 [32];
  undefined1 local_3348 [32];
  undefined1 local_3328 [32];
  undefined1 local_3308 [32];
  undefined1 local_32e8 [32];
  undefined1 local_32c8 [32];
  undefined1 local_32a8 [32];
  undefined1 local_3288 [32];
  undefined1 local_3268 [32];
  undefined1 local_3248 [32];
  undefined1 local_3228 [32];
  undefined1 local_3208 [32];
  undefined1 local_31e8 [32];
  undefined1 local_31c8 [32];
  undefined1 local_31a8 [32];
  undefined1 local_3188 [32];
  undefined1 local_3168 [32];
  undefined1 local_3148 [32];
  undefined1 local_3128 [32];
  undefined1 local_3108 [32];
  undefined1 local_30e8 [32];
  undefined1 local_30c8 [32];
  undefined1 local_30a8 [32];
  undefined1 local_3088 [32];
  undefined1 local_3068 [32];
  undefined1 local_3048 [32];
  undefined1 local_3028 [32];
  undefined1 local_3008 [32];
  undefined1 local_2fe8 [32];
  undefined1 local_2fc8 [32];
  undefined1 local_2fa8 [32];
  undefined1 local_2f88 [32];
  undefined1 local_2f68 [32];
  undefined1 local_2f48 [32];
  undefined1 local_2f28 [32];
  undefined1 local_2f08 [32];
  undefined1 local_2ee8 [32];
  undefined1 local_2ec8 [32];
  undefined1 local_2ea8 [32];
  undefined1 local_2e88 [32];
  undefined1 local_2e68 [32];
  undefined1 local_2e48 [32];
  undefined1 local_2e28 [32];
  undefined1 local_2e08 [32];
  undefined1 local_2de8 [32];
  undefined1 local_2dc8 [32];
  undefined1 local_2da8 [32];
  undefined1 local_2d88 [32];
  undefined1 local_2d68 [32];
  undefined1 local_2d48 [32];
  undefined1 local_2d28 [32];
  undefined1 local_2d08 [32];
  undefined1 local_2ce8 [32];
  undefined1 local_2cc8 [32];
  undefined1 local_2ca8 [32];
  undefined1 local_2c88 [32];
  undefined1 local_2c68 [32];
  undefined1 local_2c48 [32];
  undefined1 local_2c28 [32];
  undefined1 local_2c08 [32];
  undefined1 local_2be8 [32];
  undefined1 local_2bc8 [32];
  undefined1 local_2ba8 [32];
  undefined1 local_2b88 [32];
  undefined1 local_2b68 [32];
  undefined1 local_2b48 [32];
  undefined1 local_2b28 [32];
  undefined1 local_2b08 [32];
  undefined1 local_2ae8 [32];
  undefined1 local_2ac8 [32];
  undefined1 local_2aa8 [32];
  undefined1 local_2a88 [32];
  undefined1 local_2a68 [32];
  undefined1 local_2a48 [32];
  undefined1 local_2a28 [32];
  undefined1 local_2a08 [32];
  undefined1 local_29e8 [32];
  undefined1 local_29c8 [32];
  undefined1 local_29a8 [32];
  undefined1 local_2988 [32];
  undefined1 local_2968 [32];
  undefined1 local_2948 [32];
  undefined1 local_2928 [32];
  undefined1 local_2908 [32];
  undefined1 local_28e8 [32];
  undefined1 local_28c8 [32];
  undefined1 local_28a8 [32];
  undefined1 local_2888 [32];
  undefined1 local_2868 [32];
  undefined1 local_2848 [32];
  undefined1 local_2828 [32];
  undefined1 local_2808 [32];
  undefined1 local_27e8 [32];
  undefined1 local_27c8 [32];
  undefined1 local_27a8 [32];
  undefined1 local_2788 [32];
  undefined1 local_2768 [32];
  undefined1 local_2748 [32];
  undefined1 local_2728 [32];
  undefined1 local_2708 [32];
  undefined1 local_26e8 [32];
  undefined1 local_26c8 [32];
  undefined1 local_26a8 [32];
  undefined1 local_2688 [32];
  undefined1 local_2668 [32];
  undefined1 local_2648 [32];
  undefined1 local_2628 [32];
  undefined1 local_2608 [32];
  undefined1 local_25e8 [32];
  undefined1 local_25c8 [32];
  undefined1 local_25a8 [32];
  undefined1 local_2588 [32];
  undefined1 local_2568 [32];
  undefined1 local_2548 [32];
  undefined1 local_2528 [32];
  undefined1 local_2508 [32];
  undefined1 local_24e8 [32];
  undefined1 local_24c8 [32];
  undefined1 local_24a8 [32];
  undefined1 local_2488 [32];
  undefined1 local_2468 [32];
  undefined1 local_2448 [32];
  undefined1 local_2428 [32];
  undefined1 local_2408 [32];
  undefined1 local_23e8 [32];
  undefined1 local_23c8 [32];
  undefined1 local_23a8 [32];
  undefined1 local_2388 [32];
  undefined1 local_2368 [32];
  undefined1 local_2348 [32];
  undefined1 local_2328 [32];
  undefined1 local_2308 [32];
  undefined1 local_22e8 [32];
  undefined1 local_22c8 [32];
  undefined1 local_22a8 [32];
  undefined1 local_2288 [32];
  undefined1 local_2268 [32];
  undefined1 local_2248 [32];
  undefined1 local_2228 [32];
  undefined1 local_2208 [32];
  undefined1 local_21e8 [32];
  undefined1 local_21c8 [32];
  undefined1 local_21a8 [32];
  undefined1 local_2188 [32];
  undefined1 local_2168 [32];
  undefined1 local_2148 [32];
  undefined1 local_2128 [32];
  undefined1 local_2108 [32];
  undefined1 local_20e8 [32];
  undefined1 local_20c8 [32];
  undefined1 local_20a8 [32];
  undefined1 local_2088 [32];
  undefined1 local_2068 [32];
  undefined1 local_2048 [32];
  undefined1 local_2028 [32];
  undefined1 local_2008 [32];
  undefined1 local_1fe8 [32];
  undefined1 local_1fc8 [32];
  undefined1 local_1fa8 [32];
  undefined1 local_1f88 [32];
  undefined1 local_1f68 [32];
  undefined1 local_1f48 [32];
  undefined1 local_1f28 [32];
  undefined1 local_1f08 [32];
  undefined1 local_1ee8 [32];
  undefined1 local_1ec8 [32];
  undefined1 local_1ea8 [32];
  undefined1 local_1e88 [32];
  undefined1 local_1e68 [32];
  undefined1 local_1e48 [32];
  undefined1 local_1e28 [32];
  undefined1 local_1e08 [32];
  undefined1 local_1de8 [32];
  undefined1 local_1dc8 [32];
  undefined1 local_1da8 [32];
  undefined1 local_1d88 [32];
  undefined1 local_1d68 [32];
  undefined1 local_1d48 [32];
  undefined1 local_1d28 [32];
  undefined1 local_1d08 [32];
  undefined1 local_1ce8 [32];
  undefined1 local_1cc8 [32];
  undefined1 local_1ca8 [32];
  undefined1 local_1c88 [32];
  undefined1 local_1c68 [32];
  undefined1 local_1c48 [32];
  undefined1 local_1c28 [32];
  undefined1 local_1c08 [32];
  undefined1 local_1be8 [32];
  undefined1 local_1bc8 [32];
  undefined1 local_1ba8 [32];
  undefined1 local_1b88 [32];
  undefined1 local_1b68 [32];
  undefined1 local_1b48 [32];
  undefined1 local_1b28 [32];
  undefined1 local_1b08 [32];
  undefined1 local_1ae8 [32];
  undefined1 local_1ac8 [32];
  undefined1 local_1aa8 [32];
  undefined1 local_1a88 [32];
  undefined1 local_1a68 [32];
  undefined1 local_1a48 [32];
  undefined1 local_1a28 [32];
  undefined1 local_1a08 [32];
  undefined1 local_19e8 [32];
  undefined1 local_19c8 [32];
  undefined1 local_19a8 [32];
  undefined1 local_1988 [32];
  undefined1 local_1968 [32];
  undefined1 local_1948 [32];
  undefined1 local_1928 [32];
  undefined1 local_1908 [32];
  undefined1 local_18e8 [32];
  undefined1 local_18c8 [32];
  undefined1 local_18a8 [32];
  undefined1 local_1888 [32];
  undefined1 local_1868 [32];
  undefined1 local_1848 [32];
  undefined1 local_1828 [32];
  undefined1 local_1808 [32];
  undefined1 local_17e8 [32];
  undefined1 local_17c8 [32];
  undefined1 local_17a8 [32];
  undefined1 local_1788 [32];
  undefined1 local_1768 [32];
  undefined1 local_1748 [32];
  undefined1 local_1728 [32];
  undefined1 local_1708 [32];
  undefined1 local_16e8 [32];
  undefined1 local_16c8 [32];
  undefined1 local_16a8 [32];
  undefined1 local_1688 [32];
  undefined1 local_1668 [32];
  undefined1 local_1648 [32];
  undefined1 local_1628 [32];
  undefined1 local_1608 [32];
  undefined1 local_15e8 [32];
  undefined1 local_15c8 [32];
  undefined1 local_15a8 [32];
  undefined1 local_1588 [32];
  undefined1 local_1568 [32];
  undefined1 local_1548 [32];
  undefined1 local_1528 [32];
  undefined1 local_1508 [32];
  undefined1 local_14e8 [32];
  undefined1 local_14c8 [32];
  undefined1 local_14a8 [32];
  undefined1 local_1488 [32];
  undefined1 local_1468 [32];
  undefined1 local_1448 [32];
  undefined1 local_1428 [32];
  undefined1 local_1408 [32];
  undefined1 local_13e8 [32];
  undefined1 local_13c8 [32];
  undefined1 local_13a8 [32];
  undefined1 local_1388 [32];
  undefined1 local_1368 [32];
  undefined1 local_1348 [32];
  undefined1 local_1328 [32];
  undefined1 local_1308 [32];
  undefined1 local_12e8 [32];
  undefined1 local_12c8 [32];
  undefined1 local_12a8 [32];
  undefined1 local_1288 [32];
  undefined1 local_1268 [32];
  undefined1 local_1248 [32];
  undefined1 local_1228 [32];
  undefined1 local_1208 [32];
  undefined1 local_11e8 [32];
  undefined1 local_11c8 [32];
  undefined1 local_11a8 [32];
  undefined1 local_1188 [32];
  undefined1 local_1168 [32];
  undefined1 local_1148 [32];
  undefined1 local_1128 [32];
  undefined1 local_1108 [32];
  undefined1 local_10e8 [32];
  undefined1 local_10c8 [32];
  undefined1 local_10a8 [32];
  undefined1 local_1088 [32];
  undefined1 local_1068 [32];
  undefined1 local_1048 [32];
  undefined1 local_1028 [32];
  undefined1 local_1008 [32];
  undefined1 local_fe8 [32];
  undefined1 local_fc8 [32];
  undefined1 local_fa8 [32];
  undefined1 local_f88 [32];
  undefined1 local_f68 [32];
  undefined1 local_f48 [32];
  undefined1 local_f28 [32];
  undefined1 local_f08 [32];
  undefined1 local_ee8 [32];
  undefined1 local_ec8 [32];
  undefined1 local_ea8 [32];
  undefined1 local_e88 [32];
  undefined1 local_e68 [32];
  undefined1 local_e48 [32];
  undefined1 local_e28 [32];
  undefined1 local_e08 [32];
  undefined1 local_de8 [32];
  undefined1 local_dc8 [32];
  undefined1 local_da8 [32];
  undefined1 local_d88 [32];
  undefined1 local_d68 [32];
  undefined1 local_d48 [32];
  undefined1 local_d28 [32];
  undefined1 local_d08 [32];
  undefined1 local_ce8 [32];
  undefined1 local_cc8 [32];
  undefined1 local_ca8 [32];
  undefined1 local_c88 [32];
  undefined1 local_c68 [32];
  undefined1 local_c48 [32];
  undefined1 local_c28 [32];
  undefined1 local_c08 [32];
  undefined1 local_be8 [32];
  undefined1 local_bc8 [32];
  undefined1 local_ba8 [32];
  undefined1 local_b88 [32];
  undefined1 local_b68 [32];
  undefined1 local_b48 [32];
  undefined1 local_b28 [32];
  undefined1 local_b08 [32];
  undefined1 local_ae8 [32];
  undefined1 local_ac8 [32];
  undefined1 local_aa8 [32];
  undefined1 local_a88 [32];
  undefined1 local_a68 [32];
  undefined1 local_a48 [32];
  undefined1 local_a28 [32];
  undefined1 local_a08 [32];
  undefined1 local_9e8 [32];
  undefined1 local_9c8 [32];
  undefined1 local_9a8 [32];
  undefined1 local_988 [32];
  undefined1 local_968 [32];
  undefined1 local_948 [32];
  undefined1 local_928 [32];
  undefined1 local_908 [32];
  undefined1 local_8e8 [32];
  undefined1 local_8c8 [32];
  undefined1 local_8a8 [32];
  undefined1 local_888 [32];
  undefined1 local_868 [32];
  undefined1 local_848 [32];
  undefined1 local_828 [32];
  undefined1 local_808 [32];
  undefined1 local_7e8 [32];
  undefined1 local_7c8 [32];
  undefined1 local_7a8 [32];
  undefined1 local_788 [32];
  undefined1 local_768 [32];
  undefined1 local_748 [32];
  undefined1 local_728 [32];
  undefined1 local_708 [32];
  undefined1 local_6e8 [32];
  undefined1 local_6c8 [32];
  undefined1 local_6a8 [32];
  undefined1 local_688 [32];
  undefined1 local_668 [32];
  undefined1 local_648 [32];
  undefined1 local_628 [32];
  undefined1 local_608 [32];
  undefined1 local_5e8 [32];
  undefined1 local_5c8 [32];
  undefined1 local_5a8 [32];
  undefined1 local_588 [32];
  undefined1 local_568 [32];
  undefined1 local_548 [32];
  undefined1 local_528 [32];
  undefined1 local_508 [32];
  undefined1 local_4e8 [32];
  undefined1 local_4c8 [32];
  undefined1 local_4a8 [32];
  undefined1 local_488 [32];
  undefined1 local_468 [32];
  undefined1 local_448 [32];
  undefined1 local_428 [32];
  undefined1 local_408 [32];
  undefined1 local_3e8 [32];
  undefined1 local_3c8 [32];
  undefined1 local_3a8 [32];
  undefined1 local_388 [32];
  undefined1 local_368 [32];
  undefined1 local_348 [32];
  undefined1 local_328 [32];
  undefined1 local_308 [32];
  undefined1 local_2e8 [32];
  undefined1 local_2c8 [32];
  undefined1 local_2a8 [32];
  undefined1 local_288 [32];
  undefined1 local_268 [32];
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  ulonglong local_c8;
  
  local_c8 = DAT_1407502c0 ^ (ulonglong)auStack_c868;
  local_c828 = 0;
  lVar1 = param_1 + 0x78;
  cVar3 = FUN_14019d460(lVar1);
  if (cVar3 != '\0') {
    FUN_14019d480(lVar1,local_c818);
    FUN_14019d470(lVar1,local_c810);
    cVar3 = FUN_14019d430(local_c818,local_c810);
    while (cVar3 != '\0') {
      lVar4 = FUN_14019d450(local_c818);
      thunk_FUN_1401fe000(*(undefined8 *)(lVar4 + 0x20),8);
      FUN_14019d440(local_c818);
      cVar3 = FUN_14019d430(local_c818,local_c810);
    }
    FUN_140052480(lVar1);
    if (*(int *)(param_1 + 8) == 0) {
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7388,L"grass_top");
      local_c828 = 0x100000;
      FUN_140054de0(local_73a8,L"grass_top");
      local_c828 = 0x300000;
      local_c838 = 0x3d000000;
      local_c840 = 0x3d800000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_73a8,local_7388,0);
      FUN_140054de0(local_73c8,L"grass_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_73c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_73c8);
      thunk_FUN_140055150(local_73a8);
      thunk_FUN_140055150(local_7388);
      FUN_140054de0(local_7368,L"grass_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7368);
      (**(code **)(*(longlong *)*puVar6 + 0x70))((longlong *)*puVar6,2);
      thunk_FUN_140055150(local_7368);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7308,L"stone");
      local_c828 = 0x400000;
      FUN_140054de0(local_7328,L"stone");
      local_c828 = 0xc00000;
      local_c838 = 0x3d000000;
      local_c840 = 0x3e000000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_7328,local_7308,0x3d800000);
      FUN_140054de0(local_7348,L"stone");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7348);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7348);
      thunk_FUN_140055150(local_7328);
      thunk_FUN_140055150(local_7308);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_72a8,L"dirt");
      local_c828 = 0x1000000;
      FUN_140054de0(local_72c8,L"dirt");
      local_c828 = 0x3000000;
      local_c838 = 0x3d000000;
      local_c840 = 0x3e400000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_72c8,local_72a8,0x3e000000);
      FUN_140054de0(local_72e8,L"dirt");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_72e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_72e8);
      thunk_FUN_140055150(local_72c8);
      thunk_FUN_140055150(local_72a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7248,L"grass_side");
      local_c828 = 0x4000000;
      FUN_140054de0(local_7268,L"grass_side");
      local_c828 = 0xc000000;
      local_c838 = 0x3d000000;
      local_c840 = 0x3e800000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_7268,local_7248,0x3e400000);
      FUN_140054de0(local_7288,L"grass_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7288);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7288);
      thunk_FUN_140055150(local_7268);
      thunk_FUN_140055150(local_7248);
      FUN_140054de0(local_7228,L"grass_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7228);
      (**(code **)(*(longlong *)*puVar6 + 0x70))((longlong *)*puVar6,1);
      thunk_FUN_140055150(local_7228);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_71c8,L"planks_oak");
      local_c828 = 0x10000000;
      FUN_140054de0(local_71e8,L"planks_oak");
      local_c828 = 0x30000000;
      local_c838 = 0x3d000000;
      local_c840 = 0x3ea00000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_71e8,local_71c8,0x3e800000);
      FUN_140054de0(local_7208,L"planks_oak");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7208);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7208);
      thunk_FUN_140055150(local_71e8);
      thunk_FUN_140055150(local_71c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7168,L"stoneslab_side");
      local_c828 = 0x40000000;
      FUN_140054de0(local_7188,L"stoneslab_side");
      local_c828 = 0xc0000000;
      local_c838 = 0x3d000000;
      local_c840 = 0x3ec00000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_7188,local_7168,0x3ea00000);
      FUN_140054de0(local_71a8,L"stoneslab_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_71a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_71a8);
      thunk_FUN_140055150(local_7188);
      thunk_FUN_140055150(local_7168);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7108,L"stoneslab_top");
      local_c828 = 1;
      FUN_140054de0(local_7128,L"stoneslab_top");
      local_c828 = 3;
      local_c838 = 0x3d000000;
      local_c840 = 0x3ee00000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_7128,local_7108,0x3ec00000);
      FUN_140054de0(local_7148,L"stoneslab_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7148);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7148);
      thunk_FUN_140055150(local_7128);
      thunk_FUN_140055150(local_7108);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_70a8,L"brick");
      local_c828 = 4;
      FUN_140054de0(local_70c8,L"brick");
      local_c828 = 0xc;
      local_c838 = 0x3d000000;
      local_c840 = 0x3f000000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_70c8,local_70a8,0x3ee00000);
      FUN_140054de0(local_70e8,L"brick");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_70e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_70e8);
      thunk_FUN_140055150(local_70c8);
      thunk_FUN_140055150(local_70a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7048,L"tnt_side");
      local_c828 = 0x10;
      FUN_140054de0(local_7068,L"tnt_side");
      local_c828 = 0x30;
      local_c838 = 0x3d000000;
      local_c840 = 0x3f100000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_7068,local_7048,0x3f000000);
      FUN_140054de0(local_7088,L"tnt_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7088);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7088);
      thunk_FUN_140055150(local_7068);
      thunk_FUN_140055150(local_7048);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6fe8,L"tnt_top");
      local_c828 = 0x40;
      FUN_140054de0(local_7008,L"tnt_top");
      local_c828 = 0xc0;
      local_c838 = 0x3d000000;
      local_c840 = 0x3f200000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_7008,local_6fe8,0x3f100000);
      FUN_140054de0(local_7028,L"tnt_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7028);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7028);
      thunk_FUN_140055150(local_7008);
      thunk_FUN_140055150(local_6fe8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6f88,L"tnt_bottom");
      local_c828 = 0x100;
      FUN_140054de0(local_6fa8,L"tnt_bottom");
      local_c828 = 0x300;
      local_c838 = 0x3d000000;
      local_c840 = 0x3f300000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_6fa8,local_6f88,0x3f200000);
      FUN_140054de0(local_6fc8,L"tnt_bottom");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6fc8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6fc8);
      thunk_FUN_140055150(local_6fa8);
      thunk_FUN_140055150(local_6f88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6f28,&DAT_14062ebb8);
      local_c828 = 0x400;
      FUN_140054de0(local_6f48,&DAT_14062ebb8);
      local_c828 = 0xc00;
      local_c838 = 0x3d000000;
      local_c840 = 0x3f400000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_6f48,local_6f28,0x3f300000);
      FUN_140054de0(local_6f68,&DAT_14062ebb8);
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6f68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6f68);
      thunk_FUN_140055150(local_6f48);
      thunk_FUN_140055150(local_6f28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6ec8,L"flower_rose");
      local_c828 = 0x1000;
      FUN_140054de0(local_6ee8,L"flower_rose");
      local_c828 = 0x3000;
      local_c838 = 0x3d000000;
      local_c840 = 0x3f500000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_6ee8,local_6ec8,0x3f400000);
      FUN_140054de0(local_6f08,L"flower_rose");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6f08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6f08);
      thunk_FUN_140055150(local_6ee8);
      thunk_FUN_140055150(local_6ec8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6e68,L"flower_dandelion");
      local_c828 = 0x4000;
      FUN_140054de0(local_6e88,L"flower_dandelion");
      local_c828 = 0xc000;
      local_c838 = 0x3d000000;
      local_c840 = 0x3f600000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_6e88,local_6e68,0x3f500000);
      FUN_140054de0(local_6ea8,L"flower_dandelion");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6ea8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6ea8);
      thunk_FUN_140055150(local_6e88);
      thunk_FUN_140055150(local_6e68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6e08,L"portal");
      local_c828 = 0x10000;
      FUN_140054de0(local_6e28,L"portal");
      local_c828 = 0x30000;
      local_c838 = 0x3d000000;
      local_c840 = 0x3f700000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_6e28,local_6e08,0x3f600000);
      FUN_140054de0(local_6e48,L"portal");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6e48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6e48);
      thunk_FUN_140055150(local_6e28);
      thunk_FUN_140055150(local_6e08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6da8,L"sapling");
      local_c828 = 0x40000;
      FUN_140054de0(local_6dc8,L"sapling");
      local_c828 = 0xc0000;
      local_c838 = 0x3d000000;
      local_c840 = 0x3f800000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_6dc8,local_6da8,0x3f700000);
      FUN_140054de0(local_6de8,L"sapling");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6de8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6de8);
      thunk_FUN_140055150(local_6dc8);
      thunk_FUN_140055150(local_6da8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6d48,L"cobblestone");
      local_c828 = 0x100000;
      FUN_140054de0(local_6d68,L"cobblestone");
      local_c828 = 0x300000;
      local_c838 = 0x3d800000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3d000000;
      uVar5 = FUN_14019d730(uVar5,local_6d68,local_6d48,0);
      FUN_140054de0(local_6d88,L"cobblestone");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6d88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6d88);
      thunk_FUN_140055150(local_6d68);
      thunk_FUN_140055150(local_6d48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6ce8,L"bedrock");
      local_c828 = 0x400000;
      FUN_140054de0(local_6d08,L"bedrock");
      local_c828 = 0xc00000;
      local_c838 = 0x3d800000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3d000000;
      uVar5 = FUN_14019d730(uVar5,local_6d08,local_6ce8,0x3d800000);
      FUN_140054de0(local_6d28,L"bedrock");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6d28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6d28);
      thunk_FUN_140055150(local_6d08);
      thunk_FUN_140055150(local_6ce8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6c88,L"sand");
      local_c828 = 0x1000000;
      FUN_140054de0(local_6ca8,L"sand");
      local_c828 = 0x3000000;
      local_c838 = 0x3d800000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3d000000;
      uVar5 = FUN_14019d730(uVar5,local_6ca8,local_6c88,0x3e000000);
      FUN_140054de0(local_6cc8,L"sand");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6cc8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6cc8);
      thunk_FUN_140055150(local_6ca8);
      thunk_FUN_140055150(local_6c88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6c28,L"gravel");
      local_c828 = 0x4000000;
      FUN_140054de0(local_6c48,L"gravel");
      local_c828 = 0xc000000;
      local_c838 = 0x3d800000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3d000000;
      uVar5 = FUN_14019d730(uVar5,local_6c48,local_6c28,0x3e400000);
      FUN_140054de0(local_6c68,L"gravel");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6c68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6c68);
      thunk_FUN_140055150(local_6c48);
      thunk_FUN_140055150(local_6c28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6bc8,L"log_oak");
      local_c828 = 0x10000000;
      FUN_140054de0(local_6be8,L"log_oak");
      local_c828 = 0x30000000;
      local_c838 = 0x3d800000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3d000000;
      uVar5 = FUN_14019d730(uVar5,local_6be8,local_6bc8,0x3e800000);
      FUN_140054de0(local_6c08,L"log_oak");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6c08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6c08);
      thunk_FUN_140055150(local_6be8);
      thunk_FUN_140055150(local_6bc8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6b68,L"log_oak_top");
      local_c828 = 0x40000000;
      FUN_140054de0(local_6b88,L"log_oak_top");
      local_c828 = 0xc0000000;
      local_c838 = 0x3d800000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3d000000;
      uVar5 = FUN_14019d730(uVar5,local_6b88,local_6b68,0x3ea00000);
      FUN_140054de0(local_6ba8,L"log_oak_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6ba8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6ba8);
      thunk_FUN_140055150(local_6b88);
      thunk_FUN_140055150(local_6b68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6b08,L"iron_block");
      local_c828 = 1;
      FUN_140054de0(local_6b28,L"iron_block");
      local_c828 = 3;
      local_c838 = 0x3d800000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3d000000;
      uVar5 = FUN_14019d730(uVar5,local_6b28,local_6b08,0x3ec00000);
      FUN_140054de0(local_6b48,L"iron_block");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6b48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6b48);
      thunk_FUN_140055150(local_6b28);
      thunk_FUN_140055150(local_6b08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6aa8,L"gold_block");
      local_c828 = 4;
      FUN_140054de0(local_6ac8,L"gold_block");
      local_c828 = 0xc;
      local_c838 = 0x3d800000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3d000000;
      uVar5 = FUN_14019d730(uVar5,local_6ac8,local_6aa8,0x3ee00000);
      FUN_140054de0(local_6ae8,L"gold_block");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6ae8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6ae8);
      thunk_FUN_140055150(local_6ac8);
      thunk_FUN_140055150(local_6aa8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6a48,L"diamond_block");
      local_c828 = 0x10;
      FUN_140054de0(local_6a68,L"diamond_block");
      local_c828 = 0x30;
      local_c838 = 0x3d800000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3d000000;
      uVar5 = FUN_14019d730(uVar5,local_6a68,local_6a48,0x3f000000);
      FUN_140054de0(local_6a88,L"diamond_block");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6a88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6a88);
      thunk_FUN_140055150(local_6a68);
      thunk_FUN_140055150(local_6a48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_69e8,L"emerald_block");
      local_c828 = 0x40;
      FUN_140054de0(local_6a08,L"emerald_block");
      local_c828 = 0xc0;
      local_c838 = 0x3d800000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3d000000;
      uVar5 = FUN_14019d730(uVar5,local_6a08,local_69e8,0x3f100000);
      FUN_140054de0(local_6a28,L"emerald_block");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6a28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6a28);
      thunk_FUN_140055150(local_6a08);
      thunk_FUN_140055150(local_69e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6988,L"redstone_block");
      local_c828 = 0x100;
      FUN_140054de0(local_69a8,L"redstone_block");
      local_c828 = 0x300;
      local_c838 = 0x3d800000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3d000000;
      uVar5 = FUN_14019d730(uVar5,local_69a8,local_6988,0x3f200000);
      FUN_140054de0(local_69c8,L"redstone_block");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_69c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_69c8);
      thunk_FUN_140055150(local_69a8);
      thunk_FUN_140055150(local_6988);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6928,L"dropper_front_horizontal");
      local_c828 = 0x400;
      FUN_140054de0(local_6948,L"dropper_front_horizontal");
      local_c828 = 0xc00;
      local_c838 = 0x3d800000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3d000000;
      uVar5 = FUN_14019d730(uVar5,local_6948,local_6928,0x3f300000);
      FUN_140054de0(local_6968,L"dropper_front_horizontal");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6968);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6968);
      thunk_FUN_140055150(local_6948);
      thunk_FUN_140055150(local_6928);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_68c8,L"mushroom_red");
      local_c828 = 0x1000;
      FUN_140054de0(local_68e8,L"mushroom_red");
      local_c828 = 0x3000;
      local_c838 = 0x3d800000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3d000000;
      uVar5 = FUN_14019d730(uVar5,local_68e8,local_68c8,0x3f400000);
      FUN_140054de0(local_6908,L"mushroom_red");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6908);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6908);
      thunk_FUN_140055150(local_68e8);
      thunk_FUN_140055150(local_68c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6868,L"mushroom_brown");
      local_c828 = 0x4000;
      FUN_140054de0(local_6888,L"mushroom_brown");
      local_c828 = 0xc000;
      local_c838 = 0x3d800000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3d000000;
      uVar5 = FUN_14019d730(uVar5,local_6888,local_6868,0x3f500000);
      FUN_140054de0(local_68a8,L"mushroom_brown");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_68a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_68a8);
      thunk_FUN_140055150(local_6888);
      thunk_FUN_140055150(local_6868);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6808,L"sapling_jungle");
      local_c828 = 0x10000;
      FUN_140054de0(local_6828,L"sapling_jungle");
      local_c828 = 0x30000;
      local_c838 = 0x3d800000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3d000000;
      uVar5 = FUN_14019d730(uVar5,local_6828,local_6808,0x3f600000);
      FUN_140054de0(local_6848,L"sapling_jungle");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6848);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6848);
      thunk_FUN_140055150(local_6828);
      thunk_FUN_140055150(local_6808);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_67a8,L"fire_0");
      local_c828 = 0x40000;
      FUN_140054de0(local_67c8,L"fire_0");
      local_c828 = 0xc0000;
      local_c838 = 0x3d800000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3d000000;
      uVar5 = FUN_14019d730(uVar5,local_67c8,local_67a8,0x3f700000);
      FUN_140054de0(local_67e8,L"fire_0");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_67e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_67e8);
      thunk_FUN_140055150(local_67c8);
      thunk_FUN_140055150(local_67a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6748,L"gold_ore");
      local_c828 = 0x100000;
      FUN_140054de0(local_6768,L"gold_ore");
      local_c828 = 0x300000;
      local_c838 = 0x3dc00000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_6768,local_6748,0);
      FUN_140054de0(local_6788,L"gold_ore");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6788);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6788);
      thunk_FUN_140055150(local_6768);
      thunk_FUN_140055150(local_6748);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_66e8,L"iron_ore");
      local_c828 = 0x400000;
      FUN_140054de0(local_6708,L"iron_ore");
      local_c828 = 0xc00000;
      local_c838 = 0x3dc00000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_6708,local_66e8,0x3d800000);
      FUN_140054de0(local_6728,L"iron_ore");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6728);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6728);
      thunk_FUN_140055150(local_6708);
      thunk_FUN_140055150(local_66e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6688,L"coal_ore");
      local_c828 = 0x1000000;
      FUN_140054de0(local_66a8,L"coal_ore");
      local_c828 = 0x3000000;
      local_c838 = 0x3dc00000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_66a8,local_6688,0x3e000000);
      FUN_140054de0(local_66c8,L"coal_ore");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_66c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_66c8);
      thunk_FUN_140055150(local_66a8);
      thunk_FUN_140055150(local_6688);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6628,L"bookshelf");
      local_c828 = 0x4000000;
      FUN_140054de0(local_6648,L"bookshelf");
      local_c828 = 0xc000000;
      local_c838 = 0x3dc00000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_6648,local_6628,0x3e400000);
      FUN_140054de0(local_6668,L"bookshelf");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6668);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6668);
      thunk_FUN_140055150(local_6648);
      thunk_FUN_140055150(local_6628);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_65c8,L"cobblestone_mossy");
      local_c828 = 0x10000000;
      FUN_140054de0(local_65e8,L"cobblestone_mossy");
      local_c828 = 0x30000000;
      local_c838 = 0x3dc00000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_65e8,local_65c8,0x3e800000);
      FUN_140054de0(local_6608,L"cobblestone_mossy");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6608);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6608);
      thunk_FUN_140055150(local_65e8);
      thunk_FUN_140055150(local_65c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6568,L"obsidian");
      local_c828 = 0x40000000;
      FUN_140054de0(local_6588,L"obsidian");
      local_c828 = 0xc0000000;
      local_c838 = 0x3dc00000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_6588,local_6568,0x3ea00000);
      FUN_140054de0(local_65a8,L"obsidian");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_65a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_65a8);
      thunk_FUN_140055150(local_6588);
      thunk_FUN_140055150(local_6568);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6508,L"grass_side_overlay");
      local_c828 = 1;
      FUN_140054de0(local_6528,L"grass_side_overlay");
      local_c828 = 3;
      local_c838 = 0x3dc00000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_6528,local_6508,0x3ec00000);
      FUN_140054de0(local_6548,L"grass_side_overlay");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6548);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6548);
      thunk_FUN_140055150(local_6528);
      thunk_FUN_140055150(local_6508);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_64a8,L"tallgrass");
      local_c828 = 4;
      FUN_140054de0(local_64c8,L"tallgrass");
      local_c828 = 0xc;
      local_c838 = 0x3dc00000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_64c8,local_64a8,0x3ee00000);
      FUN_140054de0(local_64e8,L"tallgrass");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_64e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_64e8);
      thunk_FUN_140055150(local_64c8);
      thunk_FUN_140055150(local_64a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6448,L"dispenser_front_vertical");
      local_c828 = 0x10;
      FUN_140054de0(local_6468,L"dispenser_front_vertical");
      local_c828 = 0x30;
      local_c838 = 0x3dc00000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_6468,local_6448,0x3f000000);
      FUN_140054de0(local_6488,L"dispenser_front_vertical");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6488);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6488);
      thunk_FUN_140055150(local_6468);
      thunk_FUN_140055150(local_6448);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_63e8,L"beacon");
      local_c828 = 0x40;
      FUN_140054de0(local_6408,L"beacon");
      local_c828 = 0xc0;
      local_c838 = 0x3dc00000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_6408,local_63e8,0x3f100000);
      FUN_140054de0(local_6428,L"beacon");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6428);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6428);
      thunk_FUN_140055150(local_6408);
      thunk_FUN_140055150(local_63e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6388,L"dropper_front_vertical");
      local_c828 = 0x100;
      FUN_140054de0(local_63a8,L"dropper_front_vertical");
      local_c828 = 0x300;
      local_c838 = 0x3dc00000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_63a8,local_6388,0x3f200000);
      FUN_140054de0(local_63c8,L"dropper_front_vertical");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_63c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_63c8);
      thunk_FUN_140055150(local_63a8);
      thunk_FUN_140055150(local_6388);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6328,L"workbench_top");
      local_c828 = 0x400;
      FUN_140054de0(local_6348,L"workbench_top");
      local_c828 = 0xc00;
      local_c838 = 0x3dc00000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_6348,local_6328,0x3f300000);
      FUN_140054de0(local_6368,L"workbench_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6368);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6368);
      thunk_FUN_140055150(local_6348);
      thunk_FUN_140055150(local_6328);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_62c8,L"furnace_front");
      local_c828 = 0x1000;
      FUN_140054de0(local_62e8,L"furnace_front");
      local_c828 = 0x3000;
      local_c838 = 0x3dc00000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_62e8,local_62c8,0x3f400000);
      FUN_140054de0(local_6308,L"furnace_front");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6308);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6308);
      thunk_FUN_140055150(local_62e8);
      thunk_FUN_140055150(local_62c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6268,L"furnace_side");
      local_c828 = 0x4000;
      FUN_140054de0(local_6288,L"furnace_side");
      local_c828 = 0xc000;
      local_c838 = 0x3dc00000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_6288,local_6268,0x3f500000);
      FUN_140054de0(local_62a8,L"furnace_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_62a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_62a8);
      thunk_FUN_140055150(local_6288);
      thunk_FUN_140055150(local_6268);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6208,L"dispenser_front");
      local_c828 = 0x10000;
      FUN_140054de0(local_6228,L"dispenser_front");
      local_c828 = 0x30000;
      local_c838 = 0x3dc00000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_6228,local_6208,0x3f600000);
      FUN_140054de0(local_6248,L"dispenser_front");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6248);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6248);
      thunk_FUN_140055150(local_6228);
      thunk_FUN_140055150(local_6208);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_61a8,L"fire_1");
      local_c828 = 0x40000;
      FUN_140054de0(local_61c8,L"fire_1");
      local_c828 = 0xc0000;
      local_c838 = 0x3dc00000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_61c8,local_61a8,0x3f700000);
      FUN_140054de0(local_61e8,L"fire_1");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_61e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_61e8);
      thunk_FUN_140055150(local_61c8);
      thunk_FUN_140055150(local_61a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6148,L"sponge");
      local_c828 = 0x100000;
      FUN_140054de0(local_6168,L"sponge");
      local_c828 = 0x300000;
      local_c838 = 0x3e000000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3dc00000;
      uVar5 = FUN_14019d730(uVar5,local_6168,local_6148,0);
      FUN_140054de0(local_6188,L"sponge");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6188);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6188);
      thunk_FUN_140055150(local_6168);
      thunk_FUN_140055150(local_6148);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_60e8,L"glass");
      local_c828 = 0x400000;
      FUN_140054de0(local_6108,L"glass");
      local_c828 = 0xc00000;
      local_c838 = 0x3e000000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3dc00000;
      uVar5 = FUN_14019d730(uVar5,local_6108,local_60e8,0x3d800000);
      FUN_140054de0(local_6128,L"glass");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6128);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6128);
      thunk_FUN_140055150(local_6108);
      thunk_FUN_140055150(local_60e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6088,L"diamond_ore");
      local_c828 = 0x1000000;
      FUN_140054de0(local_60a8,L"diamond_ore");
      local_c828 = 0x3000000;
      local_c838 = 0x3e000000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3dc00000;
      uVar5 = FUN_14019d730(uVar5,local_60a8,local_6088,0x3e000000);
      FUN_140054de0(local_60c8,L"diamond_ore");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_60c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_60c8);
      thunk_FUN_140055150(local_60a8);
      thunk_FUN_140055150(local_6088);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6028,L"redstone_ore");
      local_c828 = 0x4000000;
      FUN_140054de0(local_6048,L"redstone_ore");
      local_c828 = 0xc000000;
      local_c838 = 0x3e000000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3dc00000;
      uVar5 = FUN_14019d730(uVar5,local_6048,local_6028,0x3e400000);
      FUN_140054de0(local_6068,L"redstone_ore");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6068);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6068);
      thunk_FUN_140055150(local_6048);
      thunk_FUN_140055150(local_6028);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5fc8,L"leaves");
      local_c828 = 0x10000000;
      FUN_140054de0(local_5fe8,L"leaves");
      local_c828 = 0x30000000;
      local_c838 = 0x3e000000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3dc00000;
      uVar5 = FUN_14019d730(uVar5,local_5fe8,local_5fc8,0x3e800000);
      FUN_140054de0(local_6008,L"leaves");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6008);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6008);
      thunk_FUN_140055150(local_5fe8);
      thunk_FUN_140055150(local_5fc8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5f68,L"leaves_opaque");
      local_c828 = 0x40000000;
      FUN_140054de0(local_5f88,L"leaves_opaque");
      local_c828 = 0xc0000000;
      local_c838 = 0x3e000000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3dc00000;
      uVar5 = FUN_14019d730(uVar5,local_5f88,local_5f68,0x3ea00000);
      FUN_140054de0(local_5fa8,L"leaves_opaque");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5fa8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5fa8);
      thunk_FUN_140055150(local_5f88);
      thunk_FUN_140055150(local_5f68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5f08,L"stonebrick");
      local_c828 = 1;
      FUN_140054de0(local_5f28,L"stonebrick");
      local_c828 = 3;
      local_c838 = 0x3e000000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3dc00000;
      uVar5 = FUN_14019d730(uVar5,local_5f28,local_5f08,0x3ec00000);
      FUN_140054de0(local_5f48,L"stonebrick");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5f48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5f48);
      thunk_FUN_140055150(local_5f28);
      thunk_FUN_140055150(local_5f08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5ea8,L"deadbush");
      local_c828 = 4;
      FUN_140054de0(local_5ec8,L"deadbush");
      local_c828 = 0xc;
      local_c838 = 0x3e000000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3dc00000;
      uVar5 = FUN_14019d730(uVar5,local_5ec8,local_5ea8,0x3ee00000);
      FUN_140054de0(local_5ee8,L"deadbush");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5ee8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5ee8);
      thunk_FUN_140055150(local_5ec8);
      thunk_FUN_140055150(local_5ea8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5e48,L"fern");
      local_c828 = 0x10;
      FUN_140054de0(local_5e68,L"fern");
      local_c828 = 0x30;
      local_c838 = 0x3e000000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3dc00000;
      uVar5 = FUN_14019d730(uVar5,local_5e68,local_5e48,0x3f000000);
      FUN_140054de0(local_5e88,L"fern");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5e88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5e88);
      thunk_FUN_140055150(local_5e68);
      thunk_FUN_140055150(local_5e48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5de8,L"daylight_detector_top");
      local_c828 = 0x40;
      FUN_140054de0(local_5e08,L"daylight_detector_top");
      local_c828 = 0xc0;
      local_c838 = 0x3e000000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3dc00000;
      uVar5 = FUN_14019d730(uVar5,local_5e08,local_5de8,0x3f100000);
      FUN_140054de0(local_5e28,L"daylight_detector_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5e28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5e28);
      thunk_FUN_140055150(local_5e08);
      thunk_FUN_140055150(local_5de8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5d88,L"daylight_detector_side");
      local_c828 = 0x100;
      FUN_140054de0(local_5da8,L"daylight_detector_side");
      local_c828 = 0x300;
      local_c838 = 0x3e000000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3dc00000;
      uVar5 = FUN_14019d730(uVar5,local_5da8,local_5d88,0x3f200000);
      FUN_140054de0(local_5dc8,L"daylight_detector_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5dc8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5dc8);
      thunk_FUN_140055150(local_5da8);
      thunk_FUN_140055150(local_5d88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5d28,L"workbench_side");
      local_c828 = 0x400;
      FUN_140054de0(local_5d48,L"workbench_side");
      local_c828 = 0xc00;
      local_c838 = 0x3e000000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3dc00000;
      uVar5 = FUN_14019d730(uVar5,local_5d48,local_5d28,0x3f300000);
      FUN_140054de0(local_5d68,L"workbench_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5d68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5d68);
      thunk_FUN_140055150(local_5d48);
      thunk_FUN_140055150(local_5d28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5cc8,L"workbench_front");
      local_c828 = 0x1000;
      FUN_140054de0(local_5ce8,L"workbench_front");
      local_c828 = 0x3000;
      local_c838 = 0x3e000000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3dc00000;
      uVar5 = FUN_14019d730(uVar5,local_5ce8,local_5cc8,0x3f400000);
      FUN_140054de0(local_5d08,L"workbench_front");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5d08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5d08);
      thunk_FUN_140055150(local_5ce8);
      thunk_FUN_140055150(local_5cc8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5c68,L"furnace_front_lit");
      local_c828 = 0x4000;
      FUN_140054de0(local_5c88,L"furnace_front_lit");
      local_c828 = 0xc000;
      local_c838 = 0x3e000000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3dc00000;
      uVar5 = FUN_14019d730(uVar5,local_5c88,local_5c68,0x3f500000);
      FUN_140054de0(local_5ca8,L"furnace_front_lit");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5ca8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5ca8);
      thunk_FUN_140055150(local_5c88);
      thunk_FUN_140055150(local_5c68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5c08,L"furnace_top");
      local_c828 = 0x10000;
      FUN_140054de0(local_5c28,L"furnace_top");
      local_c828 = 0x30000;
      local_c838 = 0x3e000000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3dc00000;
      uVar5 = FUN_14019d730(uVar5,local_5c28,local_5c08,0x3f600000);
      FUN_140054de0(local_5c48,L"furnace_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5c48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5c48);
      thunk_FUN_140055150(local_5c28);
      thunk_FUN_140055150(local_5c08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5ba8,L"sapling_spruce");
      local_c828 = 0x40000;
      FUN_140054de0(local_5bc8,L"sapling_spruce");
      local_c828 = 0xc0000;
      local_c838 = 0x3e000000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3dc00000;
      uVar5 = FUN_14019d730(uVar5,local_5bc8,local_5ba8,0x3f700000);
      FUN_140054de0(local_5be8,L"sapling_spruce");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5be8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5be8);
      thunk_FUN_140055150(local_5bc8);
      thunk_FUN_140055150(local_5ba8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5b48,L"wool_colored_white");
      local_c828 = 0x100000;
      FUN_140054de0(local_5b68,L"wool_colored_white");
      local_c828 = 0x300000;
      local_c838 = 0x3e200000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_5b68,local_5b48,0);
      FUN_140054de0(local_5b88,L"wool_colored_white");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5b88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5b88);
      thunk_FUN_140055150(local_5b68);
      thunk_FUN_140055150(local_5b48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5ae8,L"mob_spawner");
      local_c828 = 0x400000;
      FUN_140054de0(local_5b08,L"mob_spawner");
      local_c828 = 0xc00000;
      local_c838 = 0x3e200000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_5b08,local_5ae8,0x3d800000);
      FUN_140054de0(local_5b28,L"mob_spawner");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5b28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5b28);
      thunk_FUN_140055150(local_5b08);
      thunk_FUN_140055150(local_5ae8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5a88,L"snow");
      local_c828 = 0x1000000;
      FUN_140054de0(local_5aa8,L"snow");
      local_c828 = 0x3000000;
      local_c838 = 0x3e200000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_5aa8,local_5a88,0x3e000000);
      FUN_140054de0(local_5ac8,L"snow");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5ac8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5ac8);
      thunk_FUN_140055150(local_5aa8);
      thunk_FUN_140055150(local_5a88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5a28,&DAT_14062f1a8);
      local_c828 = 0x4000000;
      FUN_140054de0(local_5a48,&DAT_14062f1a8);
      local_c828 = 0xc000000;
      local_c838 = 0x3e200000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_5a48,local_5a28,0x3e400000);
      FUN_140054de0(local_5a68,&DAT_14062f1a8);
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5a68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5a68);
      thunk_FUN_140055150(local_5a48);
      thunk_FUN_140055150(local_5a28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_59c8,L"snow_side");
      local_c828 = 0x10000000;
      FUN_140054de0(local_59e8,L"snow_side");
      local_c828 = 0x30000000;
      local_c838 = 0x3e200000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_59e8,local_59c8,0x3e800000);
      FUN_140054de0(local_5a08,L"snow_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5a08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5a08);
      thunk_FUN_140055150(local_59e8);
      thunk_FUN_140055150(local_59c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5968,L"cactus_top");
      local_c828 = 0x40000000;
      FUN_140054de0(local_5988,L"cactus_top");
      local_c828 = 0xc0000000;
      local_c838 = 0x3e200000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_5988,local_5968,0x3ea00000);
      FUN_140054de0(local_59a8,L"cactus_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_59a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_59a8);
      thunk_FUN_140055150(local_5988);
      thunk_FUN_140055150(local_5968);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5908,L"cactus_side");
      local_c828 = 1;
      FUN_140054de0(local_5928,L"cactus_side");
      local_c828 = 3;
      local_c838 = 0x3e200000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_5928,local_5908,0x3ec00000);
      FUN_140054de0(local_5948,L"cactus_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5948);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5948);
      thunk_FUN_140055150(local_5928);
      thunk_FUN_140055150(local_5908);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_58a8,L"cactus_bottom");
      local_c828 = 4;
      FUN_140054de0(local_58c8,L"cactus_bottom");
      local_c828 = 0xc;
      local_c838 = 0x3e200000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_58c8,local_58a8,0x3ee00000);
      FUN_140054de0(local_58e8,L"cactus_bottom");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_58e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_58e8);
      thunk_FUN_140055150(local_58c8);
      thunk_FUN_140055150(local_58a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5848,L"clay");
      local_c828 = 0x10;
      FUN_140054de0(local_5868,L"clay");
      local_c828 = 0x30;
      local_c838 = 0x3e200000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_5868,local_5848,0x3f000000);
      FUN_140054de0(local_5888,L"clay");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5888);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5888);
      thunk_FUN_140055150(local_5868);
      thunk_FUN_140055150(local_5848);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_57e8,L"reeds");
      local_c828 = 0x40;
      FUN_140054de0(local_5808,L"reeds");
      local_c828 = 0xc0;
      local_c838 = 0x3e200000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_5808,local_57e8,0x3f100000);
      FUN_140054de0(local_5828,L"reeds");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5828);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5828);
      thunk_FUN_140055150(local_5808);
      thunk_FUN_140055150(local_57e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5788,L"jukebox_side");
      local_c828 = 0x100;
      FUN_140054de0(local_57a8,L"jukebox_side");
      local_c828 = 0x300;
      local_c838 = 0x3e200000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_57a8,local_5788,0x3f200000);
      FUN_140054de0(local_57c8,L"jukebox_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_57c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_57c8);
      thunk_FUN_140055150(local_57a8);
      thunk_FUN_140055150(local_5788);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5728,L"jukebox_top");
      local_c828 = 0x400;
      FUN_140054de0(local_5748,L"jukebox_top");
      local_c828 = 0xc00;
      local_c838 = 0x3e200000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_5748,local_5728,0x3f300000);
      FUN_140054de0(local_5768,L"jukebox_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5768);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5768);
      thunk_FUN_140055150(local_5748);
      thunk_FUN_140055150(local_5728);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_56c8,L"waterlily");
      local_c828 = 0x1000;
      FUN_140054de0(local_56e8,L"waterlily");
      local_c828 = 0x3000;
      local_c838 = 0x3e200000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_56e8,local_56c8,0x3f400000);
      FUN_140054de0(local_5708,L"waterlily");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5708);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5708);
      thunk_FUN_140055150(local_56e8);
      thunk_FUN_140055150(local_56c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5668,L"mycel_side");
      local_c828 = 0x4000;
      FUN_140054de0(local_5688,L"mycel_side");
      local_c828 = 0xc000;
      local_c838 = 0x3e200000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_5688,local_5668,0x3f500000);
      FUN_140054de0(local_56a8,L"mycel_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_56a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_56a8);
      thunk_FUN_140055150(local_5688);
      thunk_FUN_140055150(local_5668);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5608,L"mycel_top");
      local_c828 = 0x10000;
      FUN_140054de0(local_5628,L"mycel_top");
      local_c828 = 0x30000;
      local_c838 = 0x3e200000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_5628,local_5608,0x3f600000);
      FUN_140054de0(local_5648,L"mycel_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5648);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5648);
      thunk_FUN_140055150(local_5628);
      thunk_FUN_140055150(local_5608);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_55a8,L"sapling_birch");
      local_c828 = 0x40000;
      FUN_140054de0(local_55c8,L"sapling_birch");
      local_c828 = 0xc0000;
      local_c838 = 0x3e200000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_55c8,local_55a8,0x3f700000);
      FUN_140054de0(local_55e8,L"sapling_birch");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_55e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_55e8);
      thunk_FUN_140055150(local_55c8);
      thunk_FUN_140055150(local_55a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5548,L"torch_on");
      local_c828 = 0x100000;
      FUN_140054de0(local_5568,L"torch_on");
      local_c828 = 0x300000;
      local_c838 = 0x3e400000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3e200000;
      uVar5 = FUN_14019d730(uVar5,local_5568,local_5548,0);
      FUN_140054de0(local_5588,L"torch_on");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5588);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5588);
      thunk_FUN_140055150(local_5568);
      thunk_FUN_140055150(local_5548);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_54e8,L"door_wood_upper");
      local_c828 = 0x400000;
      FUN_140054de0(local_5508,L"door_wood_upper");
      local_c828 = 0xc00000;
      local_c838 = 0x3e400000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3e200000;
      uVar5 = FUN_14019d730(uVar5,local_5508,local_54e8,0x3d800000);
      FUN_140054de0(local_5528,L"door_wood_upper");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5528);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5528);
      thunk_FUN_140055150(local_5508);
      thunk_FUN_140055150(local_54e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5488,L"door_iron_upper");
      local_c828 = 0x1000000;
      FUN_140054de0(local_54a8,L"door_iron_upper");
      local_c828 = 0x3000000;
      local_c838 = 0x3e400000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3e200000;
      uVar5 = FUN_14019d730(uVar5,local_54a8,local_5488,0x3e000000);
      FUN_140054de0(local_54c8,L"door_iron_upper");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_54c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_54c8);
      thunk_FUN_140055150(local_54a8);
      thunk_FUN_140055150(local_5488);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5428,L"ladder");
      local_c828 = 0x4000000;
      FUN_140054de0(local_5448,L"ladder");
      local_c828 = 0xc000000;
      local_c838 = 0x3e400000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3e200000;
      uVar5 = FUN_14019d730(uVar5,local_5448,local_5428,0x3e400000);
      FUN_140054de0(local_5468,L"ladder");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5468);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5468);
      thunk_FUN_140055150(local_5448);
      thunk_FUN_140055150(local_5428);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_53c8,L"trapdoor");
      local_c828 = 0x10000000;
      FUN_140054de0(local_53e8,L"trapdoor");
      local_c828 = 0x30000000;
      local_c838 = 0x3e400000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3e200000;
      uVar5 = FUN_14019d730(uVar5,local_53e8,local_53c8,0x3e800000);
      FUN_140054de0(local_5408,L"trapdoor");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5408);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5408);
      thunk_FUN_140055150(local_53e8);
      thunk_FUN_140055150(local_53c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5368,L"iron_bars");
      local_c828 = 0x40000000;
      FUN_140054de0(local_5388,L"iron_bars");
      local_c828 = 0xc0000000;
      local_c838 = 0x3e400000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3e200000;
      uVar5 = FUN_14019d730(uVar5,local_5388,local_5368,0x3ea00000);
      FUN_140054de0(local_53a8,L"iron_bars");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_53a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_53a8);
      thunk_FUN_140055150(local_5388);
      thunk_FUN_140055150(local_5368);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5308,L"farmland_wet");
      local_c828 = 1;
      FUN_140054de0(local_5328,L"farmland_wet");
      local_c828 = 3;
      local_c838 = 0x3e400000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3e200000;
      uVar5 = FUN_14019d730(uVar5,local_5328,local_5308,0x3ec00000);
      FUN_140054de0(local_5348,L"farmland_wet");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5348);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5348);
      thunk_FUN_140055150(local_5328);
      thunk_FUN_140055150(local_5308);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_52a8,L"farmland_dry");
      local_c828 = 4;
      FUN_140054de0(local_52c8,L"farmland_dry");
      local_c828 = 0xc;
      local_c838 = 0x3e400000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3e200000;
      uVar5 = FUN_14019d730(uVar5,local_52c8,local_52a8,0x3ee00000);
      FUN_140054de0(local_52e8,L"farmland_dry");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_52e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_52e8);
      thunk_FUN_140055150(local_52c8);
      thunk_FUN_140055150(local_52a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5248,L"crops_0");
      local_c828 = 0x10;
      FUN_140054de0(local_5268,L"crops_0");
      local_c828 = 0x30;
      local_c838 = 0x3e400000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3e200000;
      uVar5 = FUN_14019d730(uVar5,local_5268,local_5248,0x3f000000);
      FUN_140054de0(local_5288,L"crops_0");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5288);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5288);
      thunk_FUN_140055150(local_5268);
      thunk_FUN_140055150(local_5248);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_51e8,L"crops_1");
      local_c828 = 0x40;
      FUN_140054de0(local_5208,L"crops_1");
      local_c828 = 0xc0;
      local_c838 = 0x3e400000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3e200000;
      uVar5 = FUN_14019d730(uVar5,local_5208,local_51e8,0x3f100000);
      FUN_140054de0(local_5228,L"crops_1");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5228);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5228);
      thunk_FUN_140055150(local_5208);
      thunk_FUN_140055150(local_51e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5188,L"crops_2");
      local_c828 = 0x100;
      FUN_140054de0(local_51a8,L"crops_2");
      local_c828 = 0x300;
      local_c838 = 0x3e400000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3e200000;
      uVar5 = FUN_14019d730(uVar5,local_51a8,local_5188,0x3f200000);
      FUN_140054de0(local_51c8,L"crops_2");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_51c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_51c8);
      thunk_FUN_140055150(local_51a8);
      thunk_FUN_140055150(local_5188);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5128,L"crops_3");
      local_c828 = 0x400;
      FUN_140054de0(local_5148,L"crops_3");
      local_c828 = 0xc00;
      local_c838 = 0x3e400000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3e200000;
      uVar5 = FUN_14019d730(uVar5,local_5148,local_5128,0x3f300000);
      FUN_140054de0(local_5168,L"crops_3");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5168);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5168);
      thunk_FUN_140055150(local_5148);
      thunk_FUN_140055150(local_5128);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_50c8,L"crops_4");
      local_c828 = 0x1000;
      FUN_140054de0(local_50e8,L"crops_4");
      local_c828 = 0x3000;
      local_c838 = 0x3e400000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3e200000;
      uVar5 = FUN_14019d730(uVar5,local_50e8,local_50c8,0x3f400000);
      FUN_140054de0(local_5108,L"crops_4");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5108);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5108);
      thunk_FUN_140055150(local_50e8);
      thunk_FUN_140055150(local_50c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5068,L"crops_5");
      local_c828 = 0x4000;
      FUN_140054de0(local_5088,L"crops_5");
      local_c828 = 0xc000;
      local_c838 = 0x3e400000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3e200000;
      uVar5 = FUN_14019d730(uVar5,local_5088,local_5068,0x3f500000);
      FUN_140054de0(local_50a8,L"crops_5");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_50a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_50a8);
      thunk_FUN_140055150(local_5088);
      thunk_FUN_140055150(local_5068);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5008,L"crops_6");
      local_c828 = 0x10000;
      FUN_140054de0(local_5028,L"crops_6");
      local_c828 = 0x30000;
      local_c838 = 0x3e400000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3e200000;
      uVar5 = FUN_14019d730(uVar5,local_5028,local_5008,0x3f600000);
      FUN_140054de0(local_5048,L"crops_6");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5048);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5048);
      thunk_FUN_140055150(local_5028);
      thunk_FUN_140055150(local_5008);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4fa8,L"crops_7");
      local_c828 = 0x40000;
      FUN_140054de0(local_4fc8,L"crops_7");
      local_c828 = 0xc0000;
      local_c838 = 0x3e400000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3e200000;
      uVar5 = FUN_14019d730(uVar5,local_4fc8,local_4fa8,0x3f700000);
      FUN_140054de0(local_4fe8,L"crops_7");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4fe8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4fe8);
      thunk_FUN_140055150(local_4fc8);
      thunk_FUN_140055150(local_4fa8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4f48,L"lever");
      local_c828 = 0x100000;
      FUN_140054de0(local_4f68,L"lever");
      local_c828 = 0x300000;
      local_c838 = 0x3e600000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_4f68,local_4f48,0);
      FUN_140054de0(local_4f88,L"lever");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4f88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4f88);
      thunk_FUN_140055150(local_4f68);
      thunk_FUN_140055150(local_4f48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4ee8,L"door_wood_lower");
      local_c828 = 0x400000;
      FUN_140054de0(local_4f08,L"door_wood_lower");
      local_c828 = 0xc00000;
      local_c838 = 0x3e600000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_4f08,local_4ee8,0x3d800000);
      FUN_140054de0(local_4f28,L"door_wood_lower");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4f28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4f28);
      thunk_FUN_140055150(local_4f08);
      thunk_FUN_140055150(local_4ee8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4e88,L"door_iron_lower");
      local_c828 = 0x1000000;
      FUN_140054de0(local_4ea8,L"door_iron_lower");
      local_c828 = 0x3000000;
      local_c838 = 0x3e600000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_4ea8,local_4e88,0x3e000000);
      FUN_140054de0(local_4ec8,L"door_iron_lower");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4ec8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4ec8);
      thunk_FUN_140055150(local_4ea8);
      thunk_FUN_140055150(local_4e88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4e28,L"redstone_torch_on");
      local_c828 = 0x4000000;
      FUN_140054de0(local_4e48,L"redstone_torch_on");
      local_c828 = 0xc000000;
      local_c838 = 0x3e600000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_4e48,local_4e28,0x3e400000);
      FUN_140054de0(local_4e68,L"redstone_torch_on");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4e68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4e68);
      thunk_FUN_140055150(local_4e48);
      thunk_FUN_140055150(local_4e28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4dc8,L"stonebrick_mossy");
      local_c828 = 0x10000000;
      FUN_140054de0(local_4de8,L"stonebrick_mossy");
      local_c828 = 0x30000000;
      local_c838 = 0x3e600000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_4de8,local_4dc8,0x3e800000);
      FUN_140054de0(local_4e08,L"stonebrick_mossy");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4e08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4e08);
      thunk_FUN_140055150(local_4de8);
      thunk_FUN_140055150(local_4dc8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4d68,L"stonebrick_cracked");
      local_c828 = 0x40000000;
      FUN_140054de0(local_4d88,L"stonebrick_cracked");
      local_c828 = 0xc0000000;
      local_c838 = 0x3e600000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_4d88,local_4d68,0x3ea00000);
      FUN_140054de0(local_4da8,L"stonebrick_cracked");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4da8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4da8);
      thunk_FUN_140055150(local_4d88);
      thunk_FUN_140055150(local_4d68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4d08,L"pumpkin_top");
      local_c828 = 1;
      FUN_140054de0(local_4d28,L"pumpkin_top");
      local_c828 = 3;
      local_c838 = 0x3e600000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_4d28,local_4d08,0x3ec00000);
      FUN_140054de0(local_4d48,L"pumpkin_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4d48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4d48);
      thunk_FUN_140055150(local_4d28);
      thunk_FUN_140055150(local_4d08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4ca8,L"netherrack");
      local_c828 = 4;
      FUN_140054de0(local_4cc8,L"netherrack");
      local_c828 = 0xc;
      local_c838 = 0x3e600000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_4cc8,local_4ca8,0x3ee00000);
      FUN_140054de0(local_4ce8,L"netherrack");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4ce8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4ce8);
      thunk_FUN_140055150(local_4cc8);
      thunk_FUN_140055150(local_4ca8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4c48,L"soul_sand");
      local_c828 = 0x10;
      FUN_140054de0(local_4c68,L"soul_sand");
      local_c828 = 0x30;
      local_c838 = 0x3e600000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_4c68,local_4c48,0x3f000000);
      FUN_140054de0(local_4c88,L"soul_sand");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4c88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4c88);
      thunk_FUN_140055150(local_4c68);
      thunk_FUN_140055150(local_4c48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4be8,L"glowstone");
      local_c828 = 0x40;
      FUN_140054de0(local_4c08,L"glowstone");
      local_c828 = 0xc0;
      local_c838 = 0x3e600000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_4c08,local_4be8,0x3f100000);
      FUN_140054de0(local_4c28,L"glowstone");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4c28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4c28);
      thunk_FUN_140055150(local_4c08);
      thunk_FUN_140055150(local_4be8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4b88,L"piston_top_sticky");
      local_c828 = 0x100;
      FUN_140054de0(local_4ba8,L"piston_top_sticky");
      local_c828 = 0x300;
      local_c838 = 0x3e600000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_4ba8,local_4b88,0x3f200000);
      FUN_140054de0(local_4bc8,L"piston_top_sticky");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4bc8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4bc8);
      thunk_FUN_140055150(local_4ba8);
      thunk_FUN_140055150(local_4b88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4b28,L"piston_top");
      local_c828 = 0x400;
      FUN_140054de0(local_4b48,L"piston_top");
      local_c828 = 0xc00;
      local_c838 = 0x3e600000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_4b48,local_4b28,0x3f300000);
      FUN_140054de0(local_4b68,L"piston_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4b68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4b68);
      thunk_FUN_140055150(local_4b48);
      thunk_FUN_140055150(local_4b28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4ac8,L"piston_side");
      local_c828 = 0x1000;
      FUN_140054de0(local_4ae8,L"piston_side");
      local_c828 = 0x3000;
      local_c838 = 0x3e600000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_4ae8,local_4ac8,0x3f400000);
      FUN_140054de0(local_4b08,L"piston_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4b08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4b08);
      thunk_FUN_140055150(local_4ae8);
      thunk_FUN_140055150(local_4ac8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4a68,L"piston_bottom");
      local_c828 = 0x4000;
      FUN_140054de0(local_4a88,L"piston_bottom");
      local_c828 = 0xc000;
      local_c838 = 0x3e600000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_4a88,local_4a68,0x3f500000);
      FUN_140054de0(local_4aa8,L"piston_bottom");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4aa8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4aa8);
      thunk_FUN_140055150(local_4a88);
      thunk_FUN_140055150(local_4a68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4a08,L"piston_inner_top");
      local_c828 = 0x10000;
      FUN_140054de0(local_4a28,L"piston_inner_top");
      local_c828 = 0x30000;
      local_c838 = 0x3e600000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_4a28,local_4a08,0x3f600000);
      FUN_140054de0(local_4a48,L"piston_inner_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4a48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4a48);
      thunk_FUN_140055150(local_4a28);
      thunk_FUN_140055150(local_4a08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_49a8,L"stem_straight");
      local_c828 = 0x40000;
      FUN_140054de0(local_49c8,L"stem_straight");
      local_c828 = 0xc0000;
      local_c838 = 0x3e600000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_49c8,local_49a8,0x3f700000);
      FUN_140054de0(local_49e8,L"stem_straight");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_49e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_49e8);
      thunk_FUN_140055150(local_49c8);
      thunk_FUN_140055150(local_49a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4948,L"rail_normal_turned");
      local_c828 = 0x100000;
      FUN_140054de0(local_4968,L"rail_normal_turned");
      local_c828 = 0x300000;
      local_c838 = 0x3e800000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3e600000;
      uVar5 = FUN_14019d730(uVar5,local_4968,local_4948,0);
      FUN_140054de0(local_4988,L"rail_normal_turned");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4988);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4988);
      thunk_FUN_140055150(local_4968);
      thunk_FUN_140055150(local_4948);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_48e8,L"wool_colored_black");
      local_c828 = 0x400000;
      FUN_140054de0(local_4908,L"wool_colored_black");
      local_c828 = 0xc00000;
      local_c838 = 0x3e800000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3e600000;
      uVar5 = FUN_14019d730(uVar5,local_4908,local_48e8,0x3d800000);
      FUN_140054de0(local_4928,L"wool_colored_black");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4928);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4928);
      thunk_FUN_140055150(local_4908);
      thunk_FUN_140055150(local_48e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4888,L"wool_colored_gray");
      local_c828 = 0x1000000;
      FUN_140054de0(local_48a8,L"wool_colored_gray");
      local_c828 = 0x3000000;
      local_c838 = 0x3e800000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3e600000;
      uVar5 = FUN_14019d730(uVar5,local_48a8,local_4888,0x3e000000);
      FUN_140054de0(local_48c8,L"wool_colored_gray");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_48c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_48c8);
      thunk_FUN_140055150(local_48a8);
      thunk_FUN_140055150(local_4888);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4828,L"redstone_torch_off");
      local_c828 = 0x4000000;
      FUN_140054de0(local_4848,L"redstone_torch_off");
      local_c828 = 0xc000000;
      local_c838 = 0x3e800000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3e600000;
      uVar5 = FUN_14019d730(uVar5,local_4848,local_4828,0x3e400000);
      FUN_140054de0(local_4868,L"redstone_torch_off");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4868);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4868);
      thunk_FUN_140055150(local_4848);
      thunk_FUN_140055150(local_4828);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_47c8,L"log_spruce");
      local_c828 = 0x10000000;
      FUN_140054de0(local_47e8,L"log_spruce");
      local_c828 = 0x30000000;
      local_c838 = 0x3e800000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3e600000;
      uVar5 = FUN_14019d730(uVar5,local_47e8,local_47c8,0x3e800000);
      FUN_140054de0(local_4808,L"log_spruce");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4808);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4808);
      thunk_FUN_140055150(local_47e8);
      thunk_FUN_140055150(local_47c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4768,L"log_birch");
      local_c828 = 0x40000000;
      FUN_140054de0(local_4788,L"log_birch");
      local_c828 = 0xc0000000;
      local_c838 = 0x3e800000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3e600000;
      uVar5 = FUN_14019d730(uVar5,local_4788,local_4768,0x3ea00000);
      FUN_140054de0(local_47a8,L"log_birch");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_47a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_47a8);
      thunk_FUN_140055150(local_4788);
      thunk_FUN_140055150(local_4768);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4708,L"pumpkin_side");
      local_c828 = 1;
      FUN_140054de0(local_4728,L"pumpkin_side");
      local_c828 = 3;
      local_c838 = 0x3e800000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3e600000;
      uVar5 = FUN_14019d730(uVar5,local_4728,local_4708,0x3ec00000);
      FUN_140054de0(local_4748,L"pumpkin_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4748);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4748);
      thunk_FUN_140055150(local_4728);
      thunk_FUN_140055150(local_4708);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_46a8,L"pumpkin_face_off");
      local_c828 = 4;
      FUN_140054de0(local_46c8,L"pumpkin_face_off");
      local_c828 = 0xc;
      local_c838 = 0x3e800000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3e600000;
      uVar5 = FUN_14019d730(uVar5,local_46c8,local_46a8,0x3ee00000);
      FUN_140054de0(local_46e8,L"pumpkin_face_off");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_46e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_46e8);
      thunk_FUN_140055150(local_46c8);
      thunk_FUN_140055150(local_46a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4648,L"pumpkin_face_on");
      local_c828 = 0x10;
      FUN_140054de0(local_4668,L"pumpkin_face_on");
      local_c828 = 0x30;
      local_c838 = 0x3e800000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3e600000;
      uVar5 = FUN_14019d730(uVar5,local_4668,local_4648,0x3f000000);
      FUN_140054de0(local_4688,L"pumpkin_face_on");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4688);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4688);
      thunk_FUN_140055150(local_4668);
      thunk_FUN_140055150(local_4648);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_45e8,L"cake_top");
      local_c828 = 0x40;
      FUN_140054de0(local_4608,L"cake_top");
      local_c828 = 0xc0;
      local_c838 = 0x3e800000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3e600000;
      uVar5 = FUN_14019d730(uVar5,local_4608,local_45e8,0x3f100000);
      FUN_140054de0(local_4628,L"cake_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4628);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4628);
      thunk_FUN_140055150(local_4608);
      thunk_FUN_140055150(local_45e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4588,L"cake_side");
      local_c828 = 0x100;
      FUN_140054de0(local_45a8,L"cake_side");
      local_c828 = 0x300;
      local_c838 = 0x3e800000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3e600000;
      uVar5 = FUN_14019d730(uVar5,local_45a8,local_4588,0x3f200000);
      FUN_140054de0(local_45c8,L"cake_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_45c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_45c8);
      thunk_FUN_140055150(local_45a8);
      thunk_FUN_140055150(local_4588);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4528,L"cake_inner");
      local_c828 = 0x400;
      FUN_140054de0(local_4548,L"cake_inner");
      local_c828 = 0xc00;
      local_c838 = 0x3e800000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3e600000;
      uVar5 = FUN_14019d730(uVar5,local_4548,local_4528,0x3f300000);
      FUN_140054de0(local_4568,L"cake_inner");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4568);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4568);
      thunk_FUN_140055150(local_4548);
      thunk_FUN_140055150(local_4528);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_44c8,L"cake_bottom");
      local_c828 = 0x1000;
      FUN_140054de0(local_44e8,L"cake_bottom");
      local_c828 = 0x3000;
      local_c838 = 0x3e800000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3e600000;
      uVar5 = FUN_14019d730(uVar5,local_44e8,local_44c8,0x3f400000);
      FUN_140054de0(local_4508,L"cake_bottom");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4508);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4508);
      thunk_FUN_140055150(local_44e8);
      thunk_FUN_140055150(local_44c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4468,L"mushroom_block_skin_red");
      local_c828 = 0x4000;
      FUN_140054de0(local_4488,L"mushroom_block_skin_red");
      local_c828 = 0xc000;
      local_c838 = 0x3e800000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3e600000;
      uVar5 = FUN_14019d730(uVar5,local_4488,local_4468,0x3f500000);
      FUN_140054de0(local_44a8,L"mushroom_block_skin_red");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_44a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_44a8);
      thunk_FUN_140055150(local_4488);
      thunk_FUN_140055150(local_4468);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4408,L"mushroom_block_skin_brown");
      local_c828 = 0x10000;
      FUN_140054de0(local_4428,L"mushroom_block_skin_brown");
      local_c828 = 0x30000;
      local_c838 = 0x3e800000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3e600000;
      uVar5 = FUN_14019d730(uVar5,local_4428,local_4408,0x3f600000);
      FUN_140054de0(local_4448,L"mushroom_block_skin_brown");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4448);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4448);
      thunk_FUN_140055150(local_4428);
      thunk_FUN_140055150(local_4408);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_43a8,L"stem_bent");
      local_c828 = 0x40000;
      FUN_140054de0(local_43c8,L"stem_bent");
      local_c828 = 0xc0000;
      local_c838 = 0x3e800000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3e600000;
      uVar5 = FUN_14019d730(uVar5,local_43c8,local_43a8,0x3f700000);
      FUN_140054de0(local_43e8,L"stem_bent");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_43e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_43e8);
      thunk_FUN_140055150(local_43c8);
      thunk_FUN_140055150(local_43a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4348,L"rail_normal");
      local_c828 = 0x100000;
      FUN_140054de0(local_4368,L"rail_normal");
      local_c828 = 0x300000;
      local_c838 = 0x3e900000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_4368,local_4348,0);
      FUN_140054de0(local_4388,L"rail_normal");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4388);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4388);
      thunk_FUN_140055150(local_4368);
      thunk_FUN_140055150(local_4348);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_42e8,L"wool_colored_red");
      local_c828 = 0x400000;
      FUN_140054de0(local_4308,L"wool_colored_red");
      local_c828 = 0xc00000;
      local_c838 = 0x3e900000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_4308,local_42e8,0x3d800000);
      FUN_140054de0(local_4328,L"wool_colored_red");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4328);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4328);
      thunk_FUN_140055150(local_4308);
      thunk_FUN_140055150(local_42e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4288,L"wool_colored_pink");
      local_c828 = 0x1000000;
      FUN_140054de0(local_42a8,L"wool_colored_pink");
      local_c828 = 0x3000000;
      local_c838 = 0x3e900000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_42a8,local_4288,0x3e000000);
      FUN_140054de0(local_42c8,L"wool_colored_pink");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_42c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_42c8);
      thunk_FUN_140055150(local_42a8);
      thunk_FUN_140055150(local_4288);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4228,L"repeater_off");
      local_c828 = 0x4000000;
      FUN_140054de0(local_4248,L"repeater_off");
      local_c828 = 0xc000000;
      local_c838 = 0x3e900000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_4248,local_4228,0x3e400000);
      FUN_140054de0(local_4268,L"repeater_off");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4268);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4268);
      thunk_FUN_140055150(local_4248);
      thunk_FUN_140055150(local_4228);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_41c8,L"leaves_spruce");
      local_c828 = 0x10000000;
      FUN_140054de0(local_41e8,L"leaves_spruce");
      local_c828 = 0x30000000;
      local_c838 = 0x3e900000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_41e8,local_41c8,0x3e800000);
      FUN_140054de0(local_4208,L"leaves_spruce");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4208);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4208);
      thunk_FUN_140055150(local_41e8);
      thunk_FUN_140055150(local_41c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4168,L"leaves_spruce_opaque");
      local_c828 = 0x40000000;
      FUN_140054de0(local_4188,L"leaves_spruce_opaque");
      local_c828 = 0xc0000000;
      local_c838 = 0x3e900000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_4188,local_4168,0x3ea00000);
      FUN_140054de0(local_41a8,L"leaves_spruce_opaque");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_41a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_41a8);
      thunk_FUN_140055150(local_4188);
      thunk_FUN_140055150(local_4168);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4108,L"bed_feet_top");
      local_c828 = 1;
      FUN_140054de0(local_4128,L"bed_feet_top");
      local_c828 = 3;
      local_c838 = 0x3e900000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_4128,local_4108,0x3ec00000);
      FUN_140054de0(local_4148,L"bed_feet_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4148);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4148);
      thunk_FUN_140055150(local_4128);
      thunk_FUN_140055150(local_4108);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_40a8,L"bed_head_top");
      local_c828 = 4;
      FUN_140054de0(local_40c8,L"bed_head_top");
      local_c828 = 0xc;
      local_c838 = 0x3e900000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_40c8,local_40a8,0x3ee00000);
      FUN_140054de0(local_40e8,L"bed_head_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_40e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_40e8);
      thunk_FUN_140055150(local_40c8);
      thunk_FUN_140055150(local_40a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4048,L"melon_side");
      local_c828 = 0x10;
      FUN_140054de0(local_4068,L"melon_side");
      local_c828 = 0x30;
      local_c838 = 0x3e900000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_4068,local_4048,0x3f000000);
      FUN_140054de0(local_4088,L"melon_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4088);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4088);
      thunk_FUN_140055150(local_4068);
      thunk_FUN_140055150(local_4048);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3fe8,L"melon_top");
      local_c828 = 0x40;
      FUN_140054de0(local_4008,L"melon_top");
      local_c828 = 0xc0;
      local_c838 = 0x3e900000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_4008,local_3fe8,0x3f100000);
      FUN_140054de0(local_4028,L"melon_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4028);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4028);
      thunk_FUN_140055150(local_4008);
      thunk_FUN_140055150(local_3fe8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3f88,L"cauldron_top");
      local_c828 = 0x100;
      FUN_140054de0(local_3fa8,L"cauldron_top");
      local_c828 = 0x300;
      local_c838 = 0x3e900000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_3fa8,local_3f88,0x3f200000);
      FUN_140054de0(local_3fc8,L"cauldron_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3fc8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3fc8);
      thunk_FUN_140055150(local_3fa8);
      thunk_FUN_140055150(local_3f88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3f28,L"cauldron_inner");
      local_c828 = 0x400;
      FUN_140054de0(local_3f48,L"cauldron_inner");
      local_c828 = 0xc00;
      local_c838 = 0x3e900000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_3f48,local_3f28,0x3f300000);
      FUN_140054de0(local_3f68,L"cauldron_inner");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3f68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3f68);
      thunk_FUN_140055150(local_3f48);
      thunk_FUN_140055150(local_3f28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3ec8,L"mushroom_block_skin_stem");
      local_c828 = 0x1000;
      FUN_140054de0(local_3ee8,L"mushroom_block_skin_stem");
      local_c828 = 0x3000;
      local_c838 = 0x3e900000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_3ee8,local_3ec8,0x3f500000);
      FUN_140054de0(local_3f08,L"mushroom_block_skin_stem");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3f08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3f08);
      thunk_FUN_140055150(local_3ee8);
      thunk_FUN_140055150(local_3ec8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3e68,L"mushroom_block_inside");
      local_c828 = 0x4000;
      FUN_140054de0(local_3e88,L"mushroom_block_inside");
      local_c828 = 0xc000;
      local_c838 = 0x3e900000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_3e88,local_3e68,0x3f600000);
      FUN_140054de0(local_3ea8,L"mushroom_block_inside");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3ea8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3ea8);
      thunk_FUN_140055150(local_3e88);
      thunk_FUN_140055150(local_3e68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3e08,L"vine");
      local_c828 = 0x10000;
      FUN_140054de0(local_3e28,L"vine");
      local_c828 = 0x30000;
      local_c838 = 0x3e900000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_3e28,local_3e08,0x3f700000);
      FUN_140054de0(local_3e48,L"vine");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3e48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3e48);
      thunk_FUN_140055150(local_3e28);
      thunk_FUN_140055150(local_3e08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3da8,L"lapis_block");
      local_c828 = 0x40000;
      FUN_140054de0(local_3dc8,L"lapis_block");
      local_c828 = 0xc0000;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3e900000;
      uVar5 = FUN_14019d730(uVar5,local_3dc8,local_3da8,0);
      FUN_140054de0(local_3de8,L"lapis_block");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3de8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3de8);
      thunk_FUN_140055150(local_3dc8);
      thunk_FUN_140055150(local_3da8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3d48,L"wool_colored_green");
      local_c828 = 0x100000;
      FUN_140054de0(local_3d68,L"wool_colored_green");
      local_c828 = 0x300000;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3e900000;
      uVar5 = FUN_14019d730(uVar5,local_3d68,local_3d48,0x3d800000);
      FUN_140054de0(local_3d88,L"wool_colored_green");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3d88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3d88);
      thunk_FUN_140055150(local_3d68);
      thunk_FUN_140055150(local_3d48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3ce8,L"wool_colored_lime");
      local_c828 = 0x400000;
      FUN_140054de0(local_3d08,L"wool_colored_lime");
      local_c828 = 0xc00000;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3e900000;
      uVar5 = FUN_14019d730(uVar5,local_3d08,local_3ce8,0x3e000000);
      FUN_140054de0(local_3d28,L"wool_colored_lime");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3d28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3d28);
      thunk_FUN_140055150(local_3d08);
      thunk_FUN_140055150(local_3ce8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3c88,L"repeater_on");
      local_c828 = 0x1000000;
      FUN_140054de0(local_3ca8,L"repeater_on");
      local_c828 = 0x3000000;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3e900000;
      uVar5 = FUN_14019d730(uVar5,local_3ca8,local_3c88,0x3e400000);
      FUN_140054de0(local_3cc8,L"repeater_on");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3cc8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3cc8);
      thunk_FUN_140055150(local_3ca8);
      thunk_FUN_140055150(local_3c88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3c28,L"glass_pane_top");
      local_c828 = 0x4000000;
      FUN_140054de0(local_3c48,L"glass_pane_top");
      local_c828 = 0xc000000;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3e900000;
      uVar5 = FUN_14019d730(uVar5,local_3c48,local_3c28,0x3e800000);
      FUN_140054de0(local_3c68,L"glass_pane_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3c68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3c68);
      thunk_FUN_140055150(local_3c48);
      thunk_FUN_140055150(local_3c28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3bc8,L"bed_feet_end");
      local_c828 = 0x10000000;
      FUN_140054de0(local_3be8,L"bed_feet_end");
      local_c828 = 0x30000000;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3e900000;
      uVar5 = FUN_14019d730(uVar5,local_3be8,local_3bc8,0x3ea00000);
      FUN_140054de0(local_3c08,L"bed_feet_end");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3c08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3c08);
      thunk_FUN_140055150(local_3be8);
      thunk_FUN_140055150(local_3bc8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3b68,L"bed_feet_side");
      local_c828 = 0x40000000;
      FUN_140054de0(local_3b88,L"bed_feet_side");
      local_c828 = 0xc0000000;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3e900000;
      uVar5 = FUN_14019d730(uVar5,local_3b88,local_3b68,0x3ec00000);
      FUN_140054de0(local_3ba8,L"bed_feet_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3ba8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3ba8);
      thunk_FUN_140055150(local_3b88);
      thunk_FUN_140055150(local_3b68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3b08,L"bed_head_side");
      local_c828 = 1;
      FUN_140054de0(local_3b28,L"bed_head_side");
      local_c828 = 3;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3e900000;
      uVar5 = FUN_14019d730(uVar5,local_3b28,local_3b08,0x3ee00000);
      FUN_140054de0(local_3b48,L"bed_head_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3b48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3b48);
      thunk_FUN_140055150(local_3b28);
      thunk_FUN_140055150(local_3b08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3aa8,L"bed_head_end");
      local_c828 = 4;
      FUN_140054de0(local_3ac8,L"bed_head_end");
      local_c828 = 0xc;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3e900000;
      uVar5 = FUN_14019d730(uVar5,local_3ac8,local_3aa8,0x3f000000);
      FUN_140054de0(local_3ae8,L"bed_head_end");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3ae8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3ae8);
      thunk_FUN_140055150(local_3ac8);
      thunk_FUN_140055150(local_3aa8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3a48,L"log_jungle");
      local_c828 = 0x10;
      FUN_140054de0(local_3a68,L"log_jungle");
      local_c828 = 0x30;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3e900000;
      uVar5 = FUN_14019d730(uVar5,local_3a68,local_3a48,0x3f100000);
      FUN_140054de0(local_3a88,L"log_jungle");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3a88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3a88);
      thunk_FUN_140055150(local_3a68);
      thunk_FUN_140055150(local_3a48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_39e8,L"cauldron_side");
      local_c828 = 0x40;
      FUN_140054de0(local_3a08,L"cauldron_side");
      local_c828 = 0xc0;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3e900000;
      uVar5 = FUN_14019d730(uVar5,local_3a08,local_39e8,0x3f200000);
      FUN_140054de0(local_3a28,L"cauldron_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3a28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3a28);
      thunk_FUN_140055150(local_3a08);
      thunk_FUN_140055150(local_39e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3988,L"cauldron_bottom");
      local_c828 = 0x100;
      FUN_140054de0(local_39a8,L"cauldron_bottom");
      local_c828 = 0x300;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3e900000;
      uVar5 = FUN_14019d730(uVar5,local_39a8,local_3988,0x3f300000);
      FUN_140054de0(local_39c8,L"cauldron_bottom");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_39c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_39c8);
      thunk_FUN_140055150(local_39a8);
      thunk_FUN_140055150(local_3988);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3928,L"brewing_stand_base");
      local_c828 = 0x400;
      FUN_140054de0(local_3948,L"brewing_stand_base");
      local_c828 = 0xc00;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3e900000;
      uVar5 = FUN_14019d730(uVar5,local_3948,local_3928,0x3f400000);
      FUN_140054de0(local_3968,L"brewing_stand_base");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3968);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3968);
      thunk_FUN_140055150(local_3948);
      thunk_FUN_140055150(local_3928);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_38c8,L"brewing_stand");
      local_c828 = 0x1000;
      FUN_140054de0(local_38e8,L"brewing_stand");
      local_c828 = 0x3000;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3e900000;
      uVar5 = FUN_14019d730(uVar5,local_38e8,local_38c8,0x3f500000);
      FUN_140054de0(local_3908,L"brewing_stand");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3908);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3908);
      thunk_FUN_140055150(local_38e8);
      thunk_FUN_140055150(local_38c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3868,L"endframe_top");
      local_c828 = 0x4000;
      FUN_140054de0(local_3888,L"endframe_top");
      local_c828 = 0xc000;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3e900000;
      uVar5 = FUN_14019d730(uVar5,local_3888,local_3868,0x3f600000);
      FUN_140054de0(local_38a8,L"endframe_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_38a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_38a8);
      thunk_FUN_140055150(local_3888);
      thunk_FUN_140055150(local_3868);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3808,L"endframe_side");
      local_c828 = 0x10000;
      FUN_140054de0(local_3828,L"endframe_side");
      local_c828 = 0x30000;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3e900000;
      uVar5 = FUN_14019d730(uVar5,local_3828,local_3808,0x3f700000);
      FUN_140054de0(local_3848,L"endframe_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3848);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3848);
      thunk_FUN_140055150(local_3828);
      thunk_FUN_140055150(local_3808);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_37a8,L"lapis_ore");
      local_c828 = 0x40000;
      FUN_140054de0(local_37c8,L"lapis_ore");
      local_c828 = 0xc0000;
      local_c838 = 0x3eb00000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_37c8,local_37a8,0);
      FUN_140054de0(local_37e8,L"lapis_ore");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_37e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_37e8);
      thunk_FUN_140055150(local_37c8);
      thunk_FUN_140055150(local_37a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3748,L"wool_colored_brown");
      local_c828 = 0x100000;
      FUN_140054de0(local_3768,L"wool_colored_brown");
      local_c828 = 0x300000;
      local_c838 = 0x3eb00000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_3768,local_3748,0x3d800000);
      FUN_140054de0(local_3788,L"wool_colored_brown");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3788);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3788);
      thunk_FUN_140055150(local_3768);
      thunk_FUN_140055150(local_3748);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_36e8,L"wool_colored_yellow");
      local_c828 = 0x400000;
      FUN_140054de0(local_3708,L"wool_colored_yellow");
      local_c828 = 0xc00000;
      local_c838 = 0x3eb00000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_3708,local_36e8,0x3e000000);
      FUN_140054de0(local_3728,L"wool_colored_yellow");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3728);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3728);
      thunk_FUN_140055150(local_3708);
      thunk_FUN_140055150(local_36e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3688,L"rail_golden");
      local_c828 = 0x1000000;
      FUN_140054de0(local_36a8,L"rail_golden");
      local_c828 = 0x3000000;
      local_c838 = 0x3eb00000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_36a8,local_3688,0x3e400000);
      FUN_140054de0(local_36c8,L"rail_golden");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_36c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_36c8);
      thunk_FUN_140055150(local_36a8);
      thunk_FUN_140055150(local_3688);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3628,L"redstone_dust_cross");
      local_c828 = 0x4000000;
      FUN_140054de0(local_3648,L"redstone_dust_cross");
      local_c828 = 0xc000000;
      local_c838 = 0x3eb00000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_3648,local_3628,0x3e800000);
      FUN_140054de0(local_3668,L"redstone_dust_cross");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3668);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3668);
      thunk_FUN_140055150(local_3648);
      thunk_FUN_140055150(local_3628);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_35c8,L"redstone_dust_line");
      local_c828 = 0x10000000;
      FUN_140054de0(local_35e8,L"redstone_dust_line");
      local_c828 = 0x30000000;
      local_c838 = 0x3eb00000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_35e8,local_35c8,0x3ea00000);
      FUN_140054de0(local_3608,L"redstone_dust_line");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3608);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3608);
      thunk_FUN_140055150(local_35e8);
      thunk_FUN_140055150(local_35c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3568,L"enchantment_top");
      local_c828 = 0x40000000;
      FUN_140054de0(local_3588,L"enchantment_top");
      local_c828 = 0xc0000000;
      local_c838 = 0x3eb00000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_3588,local_3568,0x3ec00000);
      FUN_140054de0(local_35a8,L"enchantment_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_35a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_35a8);
      thunk_FUN_140055150(local_3588);
      thunk_FUN_140055150(local_3568);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3508,L"dragon_egg");
      local_c828 = 1;
      FUN_140054de0(local_3528,L"dragon_egg");
      local_c828 = 3;
      local_c838 = 0x3eb00000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_3528,local_3508,0x3ee00000);
      FUN_140054de0(local_3548,L"dragon_egg");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3548);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3548);
      thunk_FUN_140055150(local_3528);
      thunk_FUN_140055150(local_3508);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_34a8,L"cocoa_2");
      local_c828 = 4;
      FUN_140054de0(local_34c8,L"cocoa_2");
      local_c828 = 0xc;
      local_c838 = 0x3eb00000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_34c8,local_34a8,0x3f000000);
      FUN_140054de0(local_34e8,L"cocoa_2");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_34e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_34e8);
      thunk_FUN_140055150(local_34c8);
      thunk_FUN_140055150(local_34a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3448,L"cocoa_1");
      local_c828 = 0x10;
      FUN_140054de0(local_3468,L"cocoa_1");
      local_c828 = 0x30;
      local_c838 = 0x3eb00000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_3468,local_3448,0x3f100000);
      FUN_140054de0(local_3488,L"cocoa_1");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3488);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3488);
      thunk_FUN_140055150(local_3468);
      thunk_FUN_140055150(local_3448);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_33e8,L"cocoa_0");
      local_c828 = 0x40;
      FUN_140054de0(local_3408,L"cocoa_0");
      local_c828 = 0xc0;
      local_c838 = 0x3eb00000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_3408,local_33e8,0x3f200000);
      FUN_140054de0(local_3428,L"cocoa_0");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3428);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3428);
      thunk_FUN_140055150(local_3408);
      thunk_FUN_140055150(local_33e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3388,L"emerald_ore");
      local_c828 = 0x100;
      FUN_140054de0(local_33a8,L"emerald_ore");
      local_c828 = 0x300;
      local_c838 = 0x3eb00000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_33a8,local_3388,0x3f300000);
      FUN_140054de0(local_33c8,L"emerald_ore");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_33c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_33c8);
      thunk_FUN_140055150(local_33a8);
      thunk_FUN_140055150(local_3388);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3328,L"trip_wire_source");
      local_c828 = 0x400;
      FUN_140054de0(local_3348,L"trip_wire_source");
      local_c828 = 0xc00;
      local_c838 = 0x3eb00000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_3348,local_3328,0x3f400000);
      FUN_140054de0(local_3368,L"trip_wire_source");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3368);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3368);
      thunk_FUN_140055150(local_3348);
      thunk_FUN_140055150(local_3328);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_32c8,L"trip_wire");
      local_c828 = 0x1000;
      FUN_140054de0(local_32e8,L"trip_wire");
      local_c828 = 0x3000;
      local_c838 = 0x3eb00000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_32e8,local_32c8,0x3f500000);
      FUN_140054de0(local_3308,L"trip_wire");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3308);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3308);
      thunk_FUN_140055150(local_32e8);
      thunk_FUN_140055150(local_32c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3268,L"endframe_eye");
      local_c828 = 0x4000;
      FUN_140054de0(local_3288,L"endframe_eye");
      local_c828 = 0xc000;
      local_c838 = 0x3eb00000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_3288,local_3268,0x3f600000);
      FUN_140054de0(local_32a8,L"endframe_eye");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_32a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_32a8);
      thunk_FUN_140055150(local_3288);
      thunk_FUN_140055150(local_3268);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3208,L"end_stone");
      local_c828 = 0x10000;
      FUN_140054de0(local_3228,L"end_stone");
      local_c828 = 0x30000;
      local_c838 = 0x3eb00000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_3228,local_3208,0x3f700000);
      FUN_140054de0(local_3248,L"end_stone");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3248);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3248);
      thunk_FUN_140055150(local_3228);
      thunk_FUN_140055150(local_3208);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_31a8,L"sandstone_top");
      local_c828 = 0x40000;
      FUN_140054de0(local_31c8,L"sandstone_top");
      local_c828 = 0xc0000;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3eb00000;
      uVar5 = FUN_14019d730(uVar5,local_31c8,local_31a8,0);
      FUN_140054de0(local_31e8,L"sandstone_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_31e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_31e8);
      thunk_FUN_140055150(local_31c8);
      thunk_FUN_140055150(local_31a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3148,L"wool_colored_blue");
      local_c828 = 0x100000;
      FUN_140054de0(local_3168,L"wool_colored_blue");
      local_c828 = 0x300000;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3eb00000;
      uVar5 = FUN_14019d730(uVar5,local_3168,local_3148,0x3d800000);
      FUN_140054de0(local_3188,L"wool_colored_blue");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3188);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3188);
      thunk_FUN_140055150(local_3168);
      thunk_FUN_140055150(local_3148);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_30e8,L"wool_colored_light_blue");
      local_c828 = 0x400000;
      FUN_140054de0(local_3108,L"wool_colored_light_blue");
      local_c828 = 0xc00000;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3eb00000;
      uVar5 = FUN_14019d730(uVar5,local_3108,local_30e8,0x3e000000);
      FUN_140054de0(local_3128,L"wool_colored_light_blue");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3128);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3128);
      thunk_FUN_140055150(local_3108);
      thunk_FUN_140055150(local_30e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3088,L"rail_golden_powered");
      local_c828 = 0x1000000;
      FUN_140054de0(local_30a8,L"rail_golden_powered");
      local_c828 = 0x3000000;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3eb00000;
      uVar5 = FUN_14019d730(uVar5,local_30a8,local_3088,0x3e400000);
      FUN_140054de0(local_30c8,L"rail_golden_powered");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_30c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_30c8);
      thunk_FUN_140055150(local_30a8);
      thunk_FUN_140055150(local_3088);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3028,L"redstone_dust_cross_overlay");
      local_c828 = 0x4000000;
      FUN_140054de0(local_3048,L"redstone_dust_cross_overlay");
      local_c828 = 0xc000000;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3eb00000;
      uVar5 = FUN_14019d730(uVar5,local_3048,local_3028,0x3e800000);
      FUN_140054de0(local_3068,L"redstone_dust_cross_overlay");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3068);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3068);
      thunk_FUN_140055150(local_3048);
      thunk_FUN_140055150(local_3028);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2fc8,L"redstone_dust_line_overlay");
      local_c828 = 0x10000000;
      FUN_140054de0(local_2fe8,L"redstone_dust_line_overlay");
      local_c828 = 0x30000000;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3eb00000;
      uVar5 = FUN_14019d730(uVar5,local_2fe8,local_2fc8,0x3ea00000);
      FUN_140054de0(local_3008,L"redstone_dust_line_overlay");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3008);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3008);
      thunk_FUN_140055150(local_2fe8);
      thunk_FUN_140055150(local_2fc8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2f68,L"enchantment_side");
      local_c828 = 0x40000000;
      FUN_140054de0(local_2f88,L"enchantment_side");
      local_c828 = 0xc0000000;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3eb00000;
      uVar5 = FUN_14019d730(uVar5,local_2f88,local_2f68,0x3ec00000);
      FUN_140054de0(local_2fa8,L"enchantment_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2fa8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2fa8);
      thunk_FUN_140055150(local_2f88);
      thunk_FUN_140055150(local_2f68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2f08,L"enchantment_bottom");
      local_c828 = 1;
      FUN_140054de0(local_2f28,L"enchantment_bottom");
      local_c828 = 3;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3eb00000;
      uVar5 = FUN_14019d730(uVar5,local_2f28,local_2f08,0x3ee00000);
      FUN_140054de0(local_2f48,L"enchantment_bottom");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2f48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2f48);
      thunk_FUN_140055150(local_2f28);
      thunk_FUN_140055150(local_2f08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2ea8,L"command_block");
      local_c828 = 4;
      FUN_140054de0(local_2ec8,L"command_block");
      local_c828 = 0xc;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3eb00000;
      uVar5 = FUN_14019d730(uVar5,local_2ec8,local_2ea8,0x3f000000);
      FUN_140054de0(local_2ee8,L"command_block");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2ee8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2ee8);
      thunk_FUN_140055150(local_2ec8);
      thunk_FUN_140055150(local_2ea8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2e48,L"itemframe_back");
      local_c828 = 0x10;
      FUN_140054de0(local_2e68,L"itemframe_back");
      local_c828 = 0x30;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3eb00000;
      uVar5 = FUN_14019d730(uVar5,local_2e68,local_2e48,0x3f100000);
      FUN_140054de0(local_2e88,L"itemframe_back");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2e88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2e88);
      thunk_FUN_140055150(local_2e68);
      thunk_FUN_140055150(local_2e48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2de8,L"flower_pot");
      local_c828 = 0x40;
      FUN_140054de0(local_2e08,L"flower_pot");
      local_c828 = 0xc0;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3eb00000;
      uVar5 = FUN_14019d730(uVar5,local_2e08,local_2de8,0x3f200000);
      FUN_140054de0(local_2e28,L"flower_pot");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2e28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2e28);
      thunk_FUN_140055150(local_2e08);
      thunk_FUN_140055150(local_2de8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2d88,L"comparator_off");
      local_c828 = 0x100;
      FUN_140054de0(local_2da8,L"comparator_off");
      local_c828 = 0x300;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3eb00000;
      uVar5 = FUN_14019d730(uVar5,local_2da8,local_2d88,0x3f300000);
      FUN_140054de0(local_2dc8,L"comparator_off");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2dc8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2dc8);
      thunk_FUN_140055150(local_2da8);
      thunk_FUN_140055150(local_2d88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2d28,L"comparator_on");
      local_c828 = 0x400;
      FUN_140054de0(local_2d48,L"comparator_on");
      local_c828 = 0xc00;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3eb00000;
      uVar5 = FUN_14019d730(uVar5,local_2d48,local_2d28,0x3f400000);
      FUN_140054de0(local_2d68,L"comparator_on");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2d68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2d68);
      thunk_FUN_140055150(local_2d48);
      thunk_FUN_140055150(local_2d28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2cc8,L"rail_activator");
      local_c828 = 0x1000;
      FUN_140054de0(local_2ce8,L"rail_activator");
      local_c828 = 0x3000;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3eb00000;
      uVar5 = FUN_14019d730(uVar5,local_2ce8,local_2cc8,0x3f500000);
      FUN_140054de0(local_2d08,L"rail_activator");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2d08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2d08);
      thunk_FUN_140055150(local_2ce8);
      thunk_FUN_140055150(local_2cc8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2c68,L"rail_activator_powered");
      local_c828 = 0x4000;
      FUN_140054de0(local_2c88,L"rail_activator_powered");
      local_c828 = 0xc000;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3eb00000;
      uVar5 = FUN_14019d730(uVar5,local_2c88,local_2c68,0x3f600000);
      FUN_140054de0(local_2ca8,L"rail_activator_powered");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2ca8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2ca8);
      thunk_FUN_140055150(local_2c88);
      thunk_FUN_140055150(local_2c68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2c08,L"quartz_ore");
      local_c828 = 0x10000;
      FUN_140054de0(local_2c28,L"quartz_ore");
      local_c828 = 0x30000;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3eb00000;
      uVar5 = FUN_14019d730(uVar5,local_2c28,local_2c08,0x3f700000);
      FUN_140054de0(local_2c48,L"quartz_ore");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2c48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2c48);
      thunk_FUN_140055150(local_2c28);
      thunk_FUN_140055150(local_2c08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2ba8,L"sandstone_side");
      local_c828 = 0x40000;
      FUN_140054de0(local_2bc8,L"sandstone_side");
      local_c828 = 0xc0000;
      local_c838 = 0x3ed00000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_2bc8,local_2ba8,0);
      FUN_140054de0(local_2be8,L"sandstone_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2be8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2be8);
      thunk_FUN_140055150(local_2bc8);
      thunk_FUN_140055150(local_2ba8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2b48,L"wool_colored_purple");
      local_c828 = 0x100000;
      FUN_140054de0(local_2b68,L"wool_colored_purple");
      local_c828 = 0x300000;
      local_c838 = 0x3ed00000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_2b68,local_2b48,0x3d800000);
      FUN_140054de0(local_2b88,L"wool_colored_purple");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2b88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2b88);
      thunk_FUN_140055150(local_2b68);
      thunk_FUN_140055150(local_2b48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2ae8,L"wool_colored_magenta");
      local_c828 = 0x400000;
      FUN_140054de0(local_2b08,L"wool_colored_magenta");
      local_c828 = 0xc00000;
      local_c838 = 0x3ed00000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_2b08,local_2ae8,0x3e000000);
      FUN_140054de0(local_2b28,L"wool_colored_magenta");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2b28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2b28);
      thunk_FUN_140055150(local_2b08);
      thunk_FUN_140055150(local_2ae8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2a88,L"detectorRail");
      local_c828 = 0x1000000;
      FUN_140054de0(local_2aa8,L"detectorRail");
      local_c828 = 0x3000000;
      local_c838 = 0x3ed00000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_2aa8,local_2a88,0x3e400000);
      FUN_140054de0(local_2ac8,L"detectorRail");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2ac8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2ac8);
      thunk_FUN_140055150(local_2aa8);
      thunk_FUN_140055150(local_2a88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2a28,L"leaves_jungle");
      local_c828 = 0x4000000;
      FUN_140054de0(local_2a48,L"leaves_jungle");
      local_c828 = 0xc000000;
      local_c838 = 0x3ed00000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_2a48,local_2a28,0x3e800000);
      FUN_140054de0(local_2a68,L"leaves_jungle");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2a68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2a68);
      thunk_FUN_140055150(local_2a48);
      thunk_FUN_140055150(local_2a28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_29c8,L"leaves_jungle_opaque");
      local_c828 = 0x10000000;
      FUN_140054de0(local_29e8,L"leaves_jungle_opaque");
      local_c828 = 0x30000000;
      local_c838 = 0x3ed00000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_29e8,local_29c8,0x3ea00000);
      FUN_140054de0(local_2a08,L"leaves_jungle_opaque");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2a08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2a08);
      thunk_FUN_140055150(local_29e8);
      thunk_FUN_140055150(local_29c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2968,L"planks_spruce");
      local_c828 = 0x40000000;
      FUN_140054de0(local_2988,L"planks_spruce");
      local_c828 = 0xc0000000;
      local_c838 = 0x3ed00000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_2988,local_2968,0x3ec00000);
      FUN_140054de0(local_29a8,L"planks_spruce");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_29a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_29a8);
      thunk_FUN_140055150(local_2988);
      thunk_FUN_140055150(local_2968);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2908,L"planks_jungle");
      local_c828 = 1;
      FUN_140054de0(local_2928,L"planks_jungle");
      local_c828 = 3;
      local_c838 = 0x3ed00000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_2928,local_2908,0x3ee00000);
      FUN_140054de0(local_2948,L"planks_jungle");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2948);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2948);
      thunk_FUN_140055150(local_2928);
      thunk_FUN_140055150(local_2908);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_28a8,L"carrots_stage_0");
      local_c828 = 4;
      FUN_140054de0(local_28c8,L"carrots_stage_0");
      local_c828 = 0xc;
      local_c838 = 0x3ed00000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_28c8,local_28a8,0x3f000000);
      FUN_140054de0(local_28e8,L"carrots_stage_0");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_28e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_28e8);
      thunk_FUN_140055150(local_28c8);
      thunk_FUN_140055150(local_28a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2848,L"carrots_stage_1");
      local_c828 = 0x10;
      FUN_140054de0(local_2868,L"carrots_stage_1");
      local_c828 = 0x30;
      local_c838 = 0x3ed00000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_2868,local_2848,0x3f100000);
      FUN_140054de0(local_2888,L"carrots_stage_1");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2888);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2888);
      thunk_FUN_140055150(local_2868);
      thunk_FUN_140055150(local_2848);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_27e8,L"carrots_stage_2");
      local_c828 = 0x40;
      FUN_140054de0(local_2808,L"carrots_stage_2");
      local_c828 = 0xc0;
      local_c838 = 0x3ed00000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_2808,local_27e8,0x3f200000);
      FUN_140054de0(local_2828,L"carrots_stage_2");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2828);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2828);
      thunk_FUN_140055150(local_2808);
      thunk_FUN_140055150(local_27e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2788,L"carrots_stage_3");
      local_c828 = 0x100;
      FUN_140054de0(local_27a8,L"carrots_stage_3");
      local_c828 = 0x300;
      local_c838 = 0x3ed00000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_27a8,local_2788,0x3f300000);
      FUN_140054de0(local_27c8,L"carrots_stage_3");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_27c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_27c8);
      thunk_FUN_140055150(local_27a8);
      thunk_FUN_140055150(local_2788);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2728,L"water");
      local_c828 = 0x400;
      FUN_140054de0(local_2748,L"water");
      local_c828 = 0xc00;
      local_c838 = 0x3ed00000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_2748,local_2728,0x3f500000);
      FUN_140054de0(local_2768,L"water");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2768);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2768);
      thunk_FUN_140055150(local_2748);
      thunk_FUN_140055150(local_2728);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_26c8,L"water_flow");
      local_c828 = 0x1000;
      FUN_140054de0(local_26e8,L"water_flow");
      local_c828 = 0x3000;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_26e8,local_26c8,0x3f600000);
      FUN_140054de0(local_2708,L"water_flow");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2708);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2708);
      thunk_FUN_140055150(local_26e8);
      thunk_FUN_140055150(local_26c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2668,L"sandstone_bottom");
      local_c828 = 0x4000;
      FUN_140054de0(local_2688,L"sandstone_bottom");
      local_c828 = 0xc000;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3ed00000;
      uVar5 = FUN_14019d730(uVar5,local_2688,local_2668,0);
      FUN_140054de0(local_26a8,L"sandstone_bottom");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_26a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_26a8);
      thunk_FUN_140055150(local_2688);
      thunk_FUN_140055150(local_2668);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2608,L"wool_colored_cyan");
      local_c828 = 0x10000;
      FUN_140054de0(local_2628,L"wool_colored_cyan");
      local_c828 = 0x30000;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3ed00000;
      uVar5 = FUN_14019d730(uVar5,local_2628,local_2608,0x3d800000);
      FUN_140054de0(local_2648,L"wool_colored_cyan");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2648);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2648);
      thunk_FUN_140055150(local_2628);
      thunk_FUN_140055150(local_2608);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_25a8,L"wool_colored_orange");
      local_c828 = 0x40000;
      FUN_140054de0(local_25c8,L"wool_colored_orange");
      local_c828 = 0xc0000;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3ed00000;
      uVar5 = FUN_14019d730(uVar5,local_25c8,local_25a8,0x3e000000);
      FUN_140054de0(local_25e8,L"wool_colored_orange");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_25e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_25e8);
      thunk_FUN_140055150(local_25c8);
      thunk_FUN_140055150(local_25a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2548,L"redstoneLight");
      local_c828 = 0x100000;
      FUN_140054de0(local_2568,L"redstoneLight");
      local_c828 = 0x300000;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3ed00000;
      uVar5 = FUN_14019d730(uVar5,local_2568,local_2548,0x3e400000);
      FUN_140054de0(local_2588,L"redstoneLight");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2588);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2588);
      thunk_FUN_140055150(local_2568);
      thunk_FUN_140055150(local_2548);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_24e8,L"redstoneLight_lit");
      local_c828 = 0x400000;
      FUN_140054de0(local_2508,L"redstoneLight_lit");
      local_c828 = 0xc00000;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3ed00000;
      uVar5 = FUN_14019d730(uVar5,local_2508,local_24e8,0x3e800000);
      FUN_140054de0(local_2528,L"redstoneLight_lit");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2528);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2528);
      thunk_FUN_140055150(local_2508);
      thunk_FUN_140055150(local_24e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2488,L"stonebrick_carved");
      local_c828 = 0x1000000;
      FUN_140054de0(local_24a8,L"stonebrick_carved");
      local_c828 = 0x3000000;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3ed00000;
      uVar5 = FUN_14019d730(uVar5,local_24a8,local_2488,0x3ea00000);
      FUN_140054de0(local_24c8,L"stonebrick_carved");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_24c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_24c8);
      thunk_FUN_140055150(local_24a8);
      thunk_FUN_140055150(local_2488);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2428,L"planks_birch");
      local_c828 = 0x4000000;
      FUN_140054de0(local_2448,L"planks_birch");
      local_c828 = 0xc000000;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3ed00000;
      uVar5 = FUN_14019d730(uVar5,local_2448,local_2428,0x3ec00000);
      FUN_140054de0(local_2468,L"planks_birch");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2468);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2468);
      thunk_FUN_140055150(local_2448);
      thunk_FUN_140055150(local_2428);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_23c8,L"anvil_base");
      local_c828 = 0x10000000;
      FUN_140054de0(local_23e8,L"anvil_base");
      local_c828 = 0x30000000;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3ed00000;
      uVar5 = FUN_14019d730(uVar5,local_23e8,local_23c8,0x3ee00000);
      FUN_140054de0(local_2408,L"anvil_base");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2408);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2408);
      thunk_FUN_140055150(local_23e8);
      thunk_FUN_140055150(local_23c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2368,L"anvil_top_damaged_1");
      local_c828 = 0x40000000;
      FUN_140054de0(local_2388,L"anvil_top_damaged_1");
      local_c828 = 0xc0000000;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3ed00000;
      uVar5 = FUN_14019d730(uVar5,local_2388,local_2368,0x3f000000);
      FUN_140054de0(local_23a8,L"anvil_top_damaged_1");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_23a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_23a8);
      thunk_FUN_140055150(local_2388);
      thunk_FUN_140055150(local_2368);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2308,L"quartz_block_chiseled_top");
      local_c828 = 1;
      FUN_140054de0(local_2328,L"quartz_block_chiseled_top");
      local_c828 = 3;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3ed00000;
      uVar5 = FUN_14019d730(uVar5,local_2328,local_2308,0x3f100000);
      FUN_140054de0(local_2348,L"quartz_block_chiseled_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2348);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2348);
      thunk_FUN_140055150(local_2328);
      thunk_FUN_140055150(local_2308);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_22a8,L"quartz_block_lines_top");
      local_c828 = 4;
      FUN_140054de0(local_22c8,L"quartz_block_lines_top");
      local_c828 = 0xc;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3ed00000;
      uVar5 = FUN_14019d730(uVar5,local_22c8,local_22a8,0x3f200000);
      FUN_140054de0(local_22e8,L"quartz_block_lines_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_22e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_22e8);
      thunk_FUN_140055150(local_22c8);
      thunk_FUN_140055150(local_22a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2248,L"quartz_block_top");
      local_c828 = 0x10;
      FUN_140054de0(local_2268,L"quartz_block_top");
      local_c828 = 0x30;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3ed00000;
      uVar5 = FUN_14019d730(uVar5,local_2268,local_2248,0x3f300000);
      FUN_140054de0(local_2288,L"quartz_block_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2288);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2288);
      thunk_FUN_140055150(local_2268);
      thunk_FUN_140055150(local_2248);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_21e8,L"hopper_outside");
      local_c828 = 0x40;
      FUN_140054de0(local_2208,L"hopper_outside");
      local_c828 = 0xc0;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3ed00000;
      uVar5 = FUN_14019d730(uVar5,local_2208,local_21e8,0x3f400000);
      FUN_140054de0(local_2228,L"hopper_outside");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2228);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2228);
      thunk_FUN_140055150(local_2208);
      thunk_FUN_140055150(local_21e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2188,L"detectorRail_on");
      local_c828 = 0x100;
      FUN_140054de0(local_21a8,L"detectorRail_on");
      local_c828 = 0x300;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3ed00000;
      uVar5 = FUN_14019d730(uVar5,local_21a8,local_2188,0x3f500000);
      FUN_140054de0(local_21c8,L"detectorRail_on");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_21c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_21c8);
      thunk_FUN_140055150(local_21a8);
      thunk_FUN_140055150(local_2188);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2128,L"nether_brick");
      local_c828 = 0x400;
      FUN_140054de0(local_2148,L"nether_brick");
      local_c828 = 0xc00;
      local_c838 = 0x3ef00000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_2148,local_2128,0);
      FUN_140054de0(local_2168,L"nether_brick");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2168);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2168);
      thunk_FUN_140055150(local_2148);
      thunk_FUN_140055150(local_2128);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_20c8,L"wool_colored_silver");
      local_c828 = 0x1000;
      FUN_140054de0(local_20e8,L"wool_colored_silver");
      local_c828 = 0x3000;
      local_c838 = 0x3ef00000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_20e8,local_20c8,0x3d800000);
      FUN_140054de0(local_2108,L"wool_colored_silver");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2108);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2108);
      thunk_FUN_140055150(local_20e8);
      thunk_FUN_140055150(local_20c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2068,L"nether_wart_stage_0");
      local_c828 = 0x4000;
      FUN_140054de0(local_2088,L"nether_wart_stage_0");
      local_c828 = 0xc000;
      local_c838 = 0x3ef00000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_2088,local_2068,0x3e000000);
      FUN_140054de0(local_20a8,L"nether_wart_stage_0");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_20a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_20a8);
      thunk_FUN_140055150(local_2088);
      thunk_FUN_140055150(local_2068);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2008,L"nether_wart_stage_1");
      local_c828 = 0x10000;
      FUN_140054de0(local_2028,L"nether_wart_stage_1");
      local_c828 = 0x30000;
      local_c838 = 0x3ef00000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_2028,local_2008,0x3e400000);
      FUN_140054de0(local_2048,L"nether_wart_stage_1");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2048);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2048);
      thunk_FUN_140055150(local_2028);
      thunk_FUN_140055150(local_2008);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1fa8,L"nether_wart_stage_2");
      local_c828 = 0x40000;
      FUN_140054de0(local_1fc8,L"nether_wart_stage_2");
      local_c828 = 0xc0000;
      local_c838 = 0x3ef00000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_1fc8,local_1fa8,0x3e800000);
      FUN_140054de0(local_1fe8,L"nether_wart_stage_2");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1fe8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1fe8);
      thunk_FUN_140055150(local_1fc8);
      thunk_FUN_140055150(local_1fa8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1f48,L"sandstone_carved");
      local_c828 = 0x100000;
      FUN_140054de0(local_1f68,L"sandstone_carved");
      local_c828 = 0x300000;
      local_c838 = 0x3ef00000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_1f68,local_1f48,0x3ea00000);
      FUN_140054de0(local_1f88,L"sandstone_carved");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1f88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1f88);
      thunk_FUN_140055150(local_1f68);
      thunk_FUN_140055150(local_1f48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1ee8,L"sandstone_smooth");
      local_c828 = 0x400000;
      FUN_140054de0(local_1f08,L"sandstone_smooth");
      local_c828 = 0xc00000;
      local_c838 = 0x3ef00000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_1f08,local_1ee8,0x3ec00000);
      FUN_140054de0(local_1f28,L"sandstone_smooth");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1f28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1f28);
      thunk_FUN_140055150(local_1f08);
      thunk_FUN_140055150(local_1ee8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1e88,L"anvil_top");
      local_c828 = 0x1000000;
      FUN_140054de0(local_1ea8,L"anvil_top");
      local_c828 = 0x3000000;
      local_c838 = 0x3ef00000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_1ea8,local_1e88,0x3ee00000);
      FUN_140054de0(local_1ec8,L"anvil_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1ec8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1ec8);
      thunk_FUN_140055150(local_1ea8);
      thunk_FUN_140055150(local_1e88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1e28,L"anvil_top_damaged_2");
      local_c828 = 0x4000000;
      FUN_140054de0(local_1e48,L"anvil_top_damaged_2");
      local_c828 = 0xc000000;
      local_c838 = 0x3ef00000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_1e48,local_1e28,0x3f000000);
      FUN_140054de0(local_1e68,L"anvil_top_damaged_2");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1e68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1e68);
      thunk_FUN_140055150(local_1e48);
      thunk_FUN_140055150(local_1e28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1dc8,L"quartz_block_chiseled");
      local_c828 = 0x10000000;
      FUN_140054de0(local_1de8,L"quartz_block_chiseled");
      local_c828 = 0x30000000;
      local_c838 = 0x3ef00000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_1de8,local_1dc8,0x3f100000);
      FUN_140054de0(local_1e08,L"quartz_block_chiseled");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1e08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1e08);
      thunk_FUN_140055150(local_1de8);
      thunk_FUN_140055150(local_1dc8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1d68,L"quartz_block_lines");
      local_c828 = 0x40000000;
      FUN_140054de0(local_1d88,L"quartz_block_lines");
      local_c828 = 0xc0000000;
      local_c838 = 0x3ef00000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_1d88,local_1d68,0x3f200000);
      FUN_140054de0(local_1da8,L"quartz_block_lines");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1da8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1da8);
      thunk_FUN_140055150(local_1d88);
      thunk_FUN_140055150(local_1d68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1d08,L"quartz_block_side");
      local_c828 = 1;
      FUN_140054de0(local_1d28,L"quartz_block_side");
      local_c828 = 3;
      local_c838 = 0x3ef00000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_1d28,local_1d08,0x3f300000);
      FUN_140054de0(local_1d48,L"quartz_block_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1d48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1d48);
      thunk_FUN_140055150(local_1d28);
      thunk_FUN_140055150(local_1d08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1ca8,L"hopper_inside");
      local_c828 = 4;
      FUN_140054de0(local_1cc8,L"hopper_inside");
      local_c828 = 0xc;
      local_c838 = 0x3ef00000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_1cc8,local_1ca8,0x3f400000);
      FUN_140054de0(local_1ce8,L"hopper_inside");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1ce8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1ce8);
      thunk_FUN_140055150(local_1cc8);
      thunk_FUN_140055150(local_1ca8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1c48,L"lava");
      local_c828 = 0x10;
      FUN_140054de0(local_1c68,L"lava");
      local_c828 = 0x30;
      local_c838 = 0x3ef00000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_1c68,local_1c48,0x3f500000);
      FUN_140054de0(local_1c88,L"lava");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1c88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1c88);
      thunk_FUN_140055150(local_1c68);
      thunk_FUN_140055150(local_1c48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1be8,L"lava_flow");
      local_c828 = 0x40;
      FUN_140054de0(local_1c08,L"lava_flow");
      local_c828 = 0xc0;
      local_c838 = 0x3f000000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_1c08,local_1be8,0x3f600000);
      FUN_140054de0(local_1c28,L"lava_flow");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1c28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1c28);
      thunk_FUN_140055150(local_1c08);
      thunk_FUN_140055150(local_1be8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1b88,L"destroy_0");
      local_c828 = 0x100;
      FUN_140054de0(local_1ba8,L"destroy_0");
      local_c828 = 0x300;
      local_c838 = 0x3f000000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3ef00000;
      uVar5 = FUN_14019d730(uVar5,local_1ba8,local_1b88,0);
      FUN_140054de0(local_1bc8,L"destroy_0");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1bc8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1bc8);
      thunk_FUN_140055150(local_1ba8);
      thunk_FUN_140055150(local_1b88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1b28,L"destroy_1");
      local_c828 = 0x400;
      FUN_140054de0(local_1b48,L"destroy_1");
      local_c828 = 0xc00;
      local_c838 = 0x3f000000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3ef00000;
      uVar5 = FUN_14019d730(uVar5,local_1b48,local_1b28,0x3d800000);
      FUN_140054de0(local_1b68,L"destroy_1");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1b68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1b68);
      thunk_FUN_140055150(local_1b48);
      thunk_FUN_140055150(local_1b28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1ac8,L"destroy_2");
      local_c828 = 0x1000;
      FUN_140054de0(local_1ae8,L"destroy_2");
      local_c828 = 0x3000;
      local_c838 = 0x3f000000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3ef00000;
      uVar5 = FUN_14019d730(uVar5,local_1ae8,local_1ac8,0x3e000000);
      FUN_140054de0(local_1b08,L"destroy_2");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1b08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1b08);
      thunk_FUN_140055150(local_1ae8);
      thunk_FUN_140055150(local_1ac8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1a68,L"destroy_3");
      local_c828 = 0x4000;
      FUN_140054de0(local_1a88,L"destroy_3");
      local_c828 = 0xc000;
      local_c838 = 0x3f000000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3ef00000;
      uVar5 = FUN_14019d730(uVar5,local_1a88,local_1a68,0x3e400000);
      FUN_140054de0(local_1aa8,L"destroy_3");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1aa8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1aa8);
      thunk_FUN_140055150(local_1a88);
      thunk_FUN_140055150(local_1a68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1a08,L"destroy_4");
      local_c828 = 0x10000;
      FUN_140054de0(local_1a28,L"destroy_4");
      local_c828 = 0x30000;
      local_c838 = 0x3f000000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3ef00000;
      uVar5 = FUN_14019d730(uVar5,local_1a28,local_1a08,0x3e800000);
      FUN_140054de0(local_1a48,L"destroy_4");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1a48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1a48);
      thunk_FUN_140055150(local_1a28);
      thunk_FUN_140055150(local_1a08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_19a8,L"destroy_5");
      local_c828 = 0x40000;
      FUN_140054de0(local_19c8,L"destroy_5");
      local_c828 = 0xc0000;
      local_c838 = 0x3f000000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3ef00000;
      uVar5 = FUN_14019d730(uVar5,local_19c8,local_19a8,0x3ea00000);
      FUN_140054de0(local_19e8,L"destroy_5");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_19e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_19e8);
      thunk_FUN_140055150(local_19c8);
      thunk_FUN_140055150(local_19a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1948,L"destroy_6");
      local_c828 = 0x100000;
      FUN_140054de0(local_1968,L"destroy_6");
      local_c828 = 0x300000;
      local_c838 = 0x3f000000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3ef00000;
      uVar5 = FUN_14019d730(uVar5,local_1968,local_1948,0x3ec00000);
      FUN_140054de0(local_1988,L"destroy_6");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1988);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1988);
      thunk_FUN_140055150(local_1968);
      thunk_FUN_140055150(local_1948);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_18e8,L"destroy_7");
      local_c828 = 0x400000;
      FUN_140054de0(local_1908,L"destroy_7");
      local_c828 = 0xc00000;
      local_c838 = 0x3f000000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3ef00000;
      uVar5 = FUN_14019d730(uVar5,local_1908,local_18e8,0x3ee00000);
      FUN_140054de0(local_1928,L"destroy_7");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1928);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1928);
      thunk_FUN_140055150(local_1908);
      thunk_FUN_140055150(local_18e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1888,L"destroy_8");
      local_c828 = 0x1000000;
      FUN_140054de0(local_18a8,L"destroy_8");
      local_c828 = 0x3000000;
      local_c838 = 0x3f000000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3ef00000;
      uVar5 = FUN_14019d730(uVar5,local_18a8,local_1888,0x3f000000);
      FUN_140054de0(local_18c8,L"destroy_8");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_18c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_18c8);
      thunk_FUN_140055150(local_18a8);
      thunk_FUN_140055150(local_1888);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1828,L"destroy_9");
      local_c828 = 0x4000000;
      FUN_140054de0(local_1848,L"destroy_9");
      local_c828 = 0xc000000;
      local_c838 = 0x3f000000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3ef00000;
      uVar5 = FUN_14019d730(uVar5,local_1848,local_1828,0x3f100000);
      FUN_140054de0(local_1868,L"destroy_9");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1868);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1868);
      thunk_FUN_140055150(local_1848);
      thunk_FUN_140055150(local_1828);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_17c8,L"hay_block_side");
      local_c828 = 0x10000000;
      FUN_140054de0(local_17e8,L"hay_block_side");
      local_c828 = 0x30000000;
      local_c838 = 0x3f000000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3ef00000;
      uVar5 = FUN_14019d730(uVar5,local_17e8,local_17c8,0x3f200000);
      FUN_140054de0(local_1808,L"hay_block_side");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1808);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1808);
      thunk_FUN_140055150(local_17e8);
      thunk_FUN_140055150(local_17c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1768,L"quartz_block_bottom");
      local_c828 = 0x40000000;
      FUN_140054de0(local_1788,L"quartz_block_bottom");
      local_c828 = 0xc0000000;
      local_c838 = 0x3f000000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3ef00000;
      uVar5 = FUN_14019d730(uVar5,local_1788,local_1768,0x3f300000);
      FUN_140054de0(local_17a8,L"quartz_block_bottom");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_17a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_17a8);
      thunk_FUN_140055150(local_1788);
      thunk_FUN_140055150(local_1768);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1708,L"hopper_top");
      local_c828 = 1;
      FUN_140054de0(local_1728,L"hopper_top");
      local_c828 = 3;
      local_c838 = 0x3f000000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3ef00000;
      uVar5 = FUN_14019d730(uVar5,local_1728,local_1708,0x3f400000);
      FUN_140054de0(local_1748,L"hopper_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1748);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1748);
      thunk_FUN_140055150(local_1728);
      thunk_FUN_140055150(local_1708);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_16a8,L"hay_block_top");
      local_c828 = 4;
      FUN_140054de0(local_16c8,L"hay_block_top");
      local_c828 = 0xc;
      local_c838 = 0x3f000000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3ef00000;
      uVar5 = FUN_14019d730(uVar5,local_16c8,local_16a8,0x3f500000);
      FUN_140054de0(local_16e8,L"hay_block_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_16e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_16e8);
      thunk_FUN_140055150(local_16c8);
      thunk_FUN_140055150(local_16a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1648,L"coal_block");
      local_c828 = 0x10;
      FUN_140054de0(local_1668,L"coal_block");
      local_c828 = 0x30;
      local_c838 = 0x3f080000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_1668,local_1648,0);
      FUN_140054de0(local_1688,L"coal_block");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1688);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1688);
      thunk_FUN_140055150(local_1668);
      thunk_FUN_140055150(local_1648);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_15e8,L"hardened_clay");
      local_c828 = 0x40;
      FUN_140054de0(local_1608,L"hardened_clay");
      local_c828 = 0xc0;
      local_c838 = 0x3f080000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_1608,local_15e8,0x3d800000);
      FUN_140054de0(local_1628,L"hardened_clay");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1628);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1628);
      thunk_FUN_140055150(local_1608);
      thunk_FUN_140055150(local_15e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1588,L"noteblock");
      local_c828 = 0x100;
      FUN_140054de0(local_15a8,L"noteblock");
      local_c828 = 0x300;
      local_c838 = 0x3f080000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_15a8,local_1588,0x3e000000);
      FUN_140054de0(local_15c8,L"noteblock");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_15c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_15c8);
      thunk_FUN_140055150(local_15a8);
      thunk_FUN_140055150(local_1588);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1528,L"potatoes_stage_0");
      local_c828 = 0x400;
      FUN_140054de0(local_1548,L"potatoes_stage_0");
      local_c828 = 0xc00;
      local_c838 = 0x3f080000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_1548,local_1528,0x3f100000);
      FUN_140054de0(local_1568,L"potatoes_stage_0");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1568);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1568);
      thunk_FUN_140055150(local_1548);
      thunk_FUN_140055150(local_1528);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_14c8,L"potatoes_stage_1");
      local_c828 = 0x1000;
      FUN_140054de0(local_14e8,L"potatoes_stage_1");
      local_c828 = 0x3000;
      local_c838 = 0x3f080000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_14e8,local_14c8,0x3f200000);
      FUN_140054de0(local_1508,L"potatoes_stage_1");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1508);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1508);
      thunk_FUN_140055150(local_14e8);
      thunk_FUN_140055150(local_14c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1468,L"potatoes_stage_2");
      local_c828 = 0x4000;
      FUN_140054de0(local_1488,L"potatoes_stage_2");
      local_c828 = 0xc000;
      local_c838 = 0x3f080000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_1488,local_1468,0x3f300000);
      FUN_140054de0(local_14a8,L"potatoes_stage_2");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_14a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_14a8);
      thunk_FUN_140055150(local_1488);
      thunk_FUN_140055150(local_1468);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1408,L"potatoes_stage_3");
      local_c828 = 0x10000;
      FUN_140054de0(local_1428,L"potatoes_stage_3");
      local_c828 = 0x30000;
      local_c838 = 0x3f080000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_1428,local_1408,0x3f400000);
      FUN_140054de0(local_1448,L"potatoes_stage_3");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1448);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1448);
      thunk_FUN_140055150(local_1428);
      thunk_FUN_140055150(local_1408);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_13a8,L"log_spruce_top");
      local_c828 = 0x40000;
      FUN_140054de0(local_13c8,L"log_spruce_top");
      local_c828 = 0xc0000;
      local_c838 = 0x3f080000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_13c8,local_13a8,0x3f500000);
      FUN_140054de0(local_13e8,L"log_spruce_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_13e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_13e8);
      thunk_FUN_140055150(local_13c8);
      thunk_FUN_140055150(local_13a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1348,L"log_jungle_top");
      local_c828 = 0x100000;
      FUN_140054de0(local_1368,L"log_jungle_top");
      local_c828 = 0x300000;
      local_c838 = 0x3f080000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_1368,local_1348,0x3f600000);
      FUN_140054de0(local_1388,L"log_jungle_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1388);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1388);
      thunk_FUN_140055150(local_1368);
      thunk_FUN_140055150(local_1348);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_12e8,L"log_birch_top");
      local_c828 = 0x400000;
      FUN_140054de0(local_1308,L"log_birch_top");
      local_c828 = 0xc00000;
      local_c838 = 0x3f080000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_1308,local_12e8,0x3f700000);
      FUN_140054de0(local_1328,L"log_birch_top");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1328);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1328);
      thunk_FUN_140055150(local_1308);
      thunk_FUN_140055150(local_12e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1288,L"hardened_clay_stained_black");
      local_c828 = 0x1000000;
      FUN_140054de0(local_12a8,L"hardened_clay_stained_black");
      local_c828 = 0x3000000;
      local_c838 = 0x3f100000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3f080000;
      uVar5 = FUN_14019d730(uVar5,local_12a8,local_1288,0);
      FUN_140054de0(local_12c8,L"hardened_clay_stained_black");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_12c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_12c8);
      thunk_FUN_140055150(local_12a8);
      thunk_FUN_140055150(local_1288);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1228,L"hardened_clay_stained_blue");
      local_c828 = 0x4000000;
      FUN_140054de0(local_1248,L"hardened_clay_stained_blue");
      local_c828 = 0xc000000;
      local_c838 = 0x3f100000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3f080000;
      uVar5 = FUN_14019d730(uVar5,local_1248,local_1228,0x3d800000);
      FUN_140054de0(local_1268,L"hardened_clay_stained_blue");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1268);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1268);
      thunk_FUN_140055150(local_1248);
      thunk_FUN_140055150(local_1228);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_11c8,L"hardened_clay_stained_brown");
      local_c828 = 0x10000000;
      FUN_140054de0(local_11e8,L"hardened_clay_stained_brown");
      local_c828 = 0x30000000;
      local_c838 = 0x3f100000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3f080000;
      uVar5 = FUN_14019d730(uVar5,local_11e8,local_11c8,0x3e000000);
      FUN_140054de0(local_1208,L"hardened_clay_stained_brown");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1208);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1208);
      thunk_FUN_140055150(local_11e8);
      thunk_FUN_140055150(local_11c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1168,L"hardened_clay_stained_cyan");
      local_c828 = 0x40000000;
      FUN_140054de0(local_1188,L"hardened_clay_stained_cyan");
      local_c828 = 0xc0000000;
      local_c838 = 0x3f100000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3f080000;
      uVar5 = FUN_14019d730(uVar5,local_1188,local_1168,0x3e400000);
      FUN_140054de0(local_11a8,L"hardened_clay_stained_cyan");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_11a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_11a8);
      thunk_FUN_140055150(local_1188);
      thunk_FUN_140055150(local_1168);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1108,L"hardened_clay_stained_gray");
      local_c828 = 1;
      FUN_140054de0(local_1128,L"hardened_clay_stained_gray");
      local_c828 = 3;
      local_c838 = 0x3f100000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3f080000;
      uVar5 = FUN_14019d730(uVar5,local_1128,local_1108,0x3e800000);
      FUN_140054de0(local_1148,L"hardened_clay_stained_gray");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1148);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1148);
      thunk_FUN_140055150(local_1128);
      thunk_FUN_140055150(local_1108);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_10a8,L"hardened_clay_stained_green");
      local_c828 = 4;
      FUN_140054de0(local_10c8,L"hardened_clay_stained_green");
      local_c828 = 0xc;
      local_c838 = 0x3f100000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3f080000;
      uVar5 = FUN_14019d730(uVar5,local_10c8,local_10a8,0x3ea00000);
      FUN_140054de0(local_10e8,L"hardened_clay_stained_green");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_10e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_10e8);
      thunk_FUN_140055150(local_10c8);
      thunk_FUN_140055150(local_10a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1048,L"hardened_clay_stained_light_blue");
      local_c828 = 0x10;
      FUN_140054de0(local_1068,L"hardened_clay_stained_light_blue");
      local_c828 = 0x30;
      local_c838 = 0x3f100000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3f080000;
      uVar5 = FUN_14019d730(uVar5,local_1068,local_1048,0x3ec00000);
      FUN_140054de0(local_1088,L"hardened_clay_stained_light_blue");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1088);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1088);
      thunk_FUN_140055150(local_1068);
      thunk_FUN_140055150(local_1048);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_fe8,L"hardened_clay_stained_lime");
      local_c828 = 0x40;
      FUN_140054de0(local_1008,L"hardened_clay_stained_lime");
      local_c828 = 0xc0;
      local_c838 = 0x3f100000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3f080000;
      uVar5 = FUN_14019d730(uVar5,local_1008,local_fe8,0x3ee00000);
      FUN_140054de0(local_1028,L"hardened_clay_stained_lime");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1028);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1028);
      thunk_FUN_140055150(local_1008);
      thunk_FUN_140055150(local_fe8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_f88,L"hardened_clay_stained_magenta");
      local_c828 = 0x100;
      FUN_140054de0(local_fa8,L"hardened_clay_stained_magenta");
      local_c828 = 0x300;
      local_c838 = 0x3f100000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3f080000;
      uVar5 = FUN_14019d730(uVar5,local_fa8,local_f88,0x3f000000);
      FUN_140054de0(local_fc8,L"hardened_clay_stained_magenta");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_fc8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_fc8);
      thunk_FUN_140055150(local_fa8);
      thunk_FUN_140055150(local_f88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_f28,L"hardened_clay_stained_orange");
      local_c828 = 0x400;
      FUN_140054de0(local_f48,L"hardened_clay_stained_orange");
      local_c828 = 0xc00;
      local_c838 = 0x3f100000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3f080000;
      uVar5 = FUN_14019d730(uVar5,local_f48,local_f28,0x3f100000);
      FUN_140054de0(local_f68,L"hardened_clay_stained_orange");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_f68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_f68);
      thunk_FUN_140055150(local_f48);
      thunk_FUN_140055150(local_f28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_ec8,L"hardened_clay_stained_pink");
      local_c828 = 0x1000;
      FUN_140054de0(local_ee8,L"hardened_clay_stained_pink");
      local_c828 = 0x3000;
      local_c838 = 0x3f100000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3f080000;
      uVar5 = FUN_14019d730(uVar5,local_ee8,local_ec8,0x3f200000);
      FUN_140054de0(local_f08,L"hardened_clay_stained_pink");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_f08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_f08);
      thunk_FUN_140055150(local_ee8);
      thunk_FUN_140055150(local_ec8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_e68,L"hardened_clay_stained_purple");
      local_c828 = 0x4000;
      FUN_140054de0(local_e88,L"hardened_clay_stained_purple");
      local_c828 = 0xc000;
      local_c838 = 0x3f100000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3f080000;
      uVar5 = FUN_14019d730(uVar5,local_e88,local_e68,0x3f300000);
      FUN_140054de0(local_ea8,L"hardened_clay_stained_purple");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_ea8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_ea8);
      thunk_FUN_140055150(local_e88);
      thunk_FUN_140055150(local_e68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_e08,L"hardened_clay_stained_red");
      local_c828 = 0x10000;
      FUN_140054de0(local_e28,L"hardened_clay_stained_red");
      local_c828 = 0x30000;
      local_c838 = 0x3f100000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3f080000;
      uVar5 = FUN_14019d730(uVar5,local_e28,local_e08,0x3f400000);
      FUN_140054de0(local_e48,L"hardened_clay_stained_red");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_e48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_e48);
      thunk_FUN_140055150(local_e28);
      thunk_FUN_140055150(local_e08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_da8,L"hardened_clay_stained_silver");
      local_c828 = 0x40000;
      FUN_140054de0(local_dc8,L"hardened_clay_stained_silver");
      local_c828 = 0xc0000;
      local_c838 = 0x3f100000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3f080000;
      uVar5 = FUN_14019d730(uVar5,local_dc8,local_da8,0x3f500000);
      FUN_140054de0(local_de8,L"hardened_clay_stained_silver");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_de8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_de8);
      thunk_FUN_140055150(local_dc8);
      thunk_FUN_140055150(local_da8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_d48,L"hardened_clay_stained_white");
      local_c828 = 0x100000;
      FUN_140054de0(local_d68,L"hardened_clay_stained_white");
      local_c828 = 0x300000;
      local_c838 = 0x3f100000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3f080000;
      uVar5 = FUN_14019d730(uVar5,local_d68,local_d48,0x3f600000);
      FUN_140054de0(local_d88,L"hardened_clay_stained_white");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_d88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_d88);
      thunk_FUN_140055150(local_d68);
      thunk_FUN_140055150(local_d48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_ce8,L"hardened_clay_stained_yellow");
      local_c828 = 0x400000;
      FUN_140054de0(local_d08,L"hardened_clay_stained_yellow");
      local_c828 = 0xc00000;
      local_c838 = 0x3f100000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3f080000;
      uVar5 = FUN_14019d730(uVar5,local_d08,local_ce8,0x3f700000);
      FUN_140054de0(local_d28,L"hardened_clay_stained_yellow");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_d28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_d28);
      thunk_FUN_140055150(local_d08);
      thunk_FUN_140055150(local_ce8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c88,L"glass_black");
      local_c828 = 0x1000000;
      FUN_140054de0(local_ca8,L"glass_black");
      local_c828 = 0x3000000;
      local_c838 = 0x3f180000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_ca8,local_c88,0);
      FUN_140054de0(local_cc8,L"glass_black");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_cc8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_cc8);
      thunk_FUN_140055150(local_ca8);
      thunk_FUN_140055150(local_c88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c28,L"glass_blue");
      local_c828 = 0x4000000;
      FUN_140054de0(local_c48,L"glass_blue");
      local_c828 = 0xc000000;
      local_c838 = 0x3f180000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_c48,local_c28,0x3d800000);
      FUN_140054de0(local_c68,L"glass_blue");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c68);
      thunk_FUN_140055150(local_c48);
      thunk_FUN_140055150(local_c28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_bc8,L"glass_brown");
      local_c828 = 0x10000000;
      FUN_140054de0(local_be8,L"glass_brown");
      local_c828 = 0x30000000;
      local_c838 = 0x3f180000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_be8,local_bc8,0x3e000000);
      FUN_140054de0(local_c08,L"glass_brown");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c08);
      thunk_FUN_140055150(local_be8);
      thunk_FUN_140055150(local_bc8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b68,L"glass_cyan");
      local_c828 = 0x40000000;
      FUN_140054de0(local_b88,L"glass_cyan");
      local_c828 = 0xc0000000;
      local_c838 = 0x3f180000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_b88,local_b68,0x3e400000);
      FUN_140054de0(local_ba8,L"glass_cyan");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_ba8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_ba8);
      thunk_FUN_140055150(local_b88);
      thunk_FUN_140055150(local_b68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b08,L"glass_gray");
      local_c828 = 1;
      FUN_140054de0(local_b28,L"glass_gray");
      local_c828 = 3;
      local_c838 = 0x3f180000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_b28,local_b08,0x3e800000);
      FUN_140054de0(local_b48,L"glass_gray");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b48);
      thunk_FUN_140055150(local_b28);
      thunk_FUN_140055150(local_b08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_aa8,L"glass_green");
      local_c828 = 4;
      FUN_140054de0(local_ac8,L"glass_green");
      local_c828 = 0xc;
      local_c838 = 0x3f180000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_ac8,local_aa8,0x3ea00000);
      FUN_140054de0(local_ae8,L"glass_green");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_ae8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_ae8);
      thunk_FUN_140055150(local_ac8);
      thunk_FUN_140055150(local_aa8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a48,L"glass_light_blue");
      local_c828 = 0x10;
      FUN_140054de0(local_a68,L"glass_light_blue");
      local_c828 = 0x30;
      local_c838 = 0x3f180000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_a68,local_a48,0x3ec00000);
      FUN_140054de0(local_a88,L"glass_light_blue");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a88);
      thunk_FUN_140055150(local_a68);
      thunk_FUN_140055150(local_a48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9e8,L"glass_lime");
      local_c828 = 0x40;
      FUN_140054de0(local_a08,L"glass_lime");
      local_c828 = 0xc0;
      local_c838 = 0x3f180000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_a08,local_9e8,0x3ee00000);
      FUN_140054de0(local_a28,L"glass_lime");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a28);
      thunk_FUN_140055150(local_a08);
      thunk_FUN_140055150(local_9e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_988,L"glass_magenta");
      local_c828 = 0x100;
      FUN_140054de0(local_9a8,L"glass_magenta");
      local_c828 = 0x300;
      local_c838 = 0x3f180000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_9a8,local_988,0x3f000000);
      FUN_140054de0(local_9c8,L"glass_magenta");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9c8);
      thunk_FUN_140055150(local_9a8);
      thunk_FUN_140055150(local_988);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_928,L"glass_orange");
      local_c828 = 0x400;
      FUN_140054de0(local_948,L"glass_orange");
      local_c828 = 0xc00;
      local_c838 = 0x3f180000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_948,local_928,0x3f100000);
      FUN_140054de0(local_968,L"glass_orange");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_968);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_968);
      thunk_FUN_140055150(local_948);
      thunk_FUN_140055150(local_928);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8c8,L"glass_pink");
      local_c828 = 0x1000;
      FUN_140054de0(local_8e8,L"glass_pink");
      local_c828 = 0x3000;
      local_c838 = 0x3f180000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_8e8,local_8c8,0x3f200000);
      FUN_140054de0(local_908,L"glass_pink");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_908);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_908);
      thunk_FUN_140055150(local_8e8);
      thunk_FUN_140055150(local_8c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_868,L"glass_purple");
      local_c828 = 0x4000;
      FUN_140054de0(local_888,L"glass_purple");
      local_c828 = 0xc000;
      local_c838 = 0x3f180000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_888,local_868,0x3f300000);
      FUN_140054de0(local_8a8,L"glass_purple");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8a8);
      thunk_FUN_140055150(local_888);
      thunk_FUN_140055150(local_868);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_808,L"glass_red");
      local_c828 = 0x10000;
      FUN_140054de0(local_828,L"glass_red");
      local_c828 = 0x30000;
      local_c838 = 0x3f180000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_828,local_808,0x3f400000);
      FUN_140054de0(local_848,L"glass_red");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_848);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_848);
      thunk_FUN_140055150(local_828);
      thunk_FUN_140055150(local_808);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7a8,L"glass_silver");
      local_c828 = 0x40000;
      FUN_140054de0(local_7c8,L"glass_silver");
      local_c828 = 0xc0000;
      local_c838 = 0x3f180000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_7c8,local_7a8,0x3f500000);
      FUN_140054de0(local_7e8,L"glass_silver");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7e8);
      thunk_FUN_140055150(local_7c8);
      thunk_FUN_140055150(local_7a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_748,L"glass_white");
      local_c828 = 0x100000;
      FUN_140054de0(local_768,L"glass_white");
      local_c828 = 0x300000;
      local_c838 = 0x3f180000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_768,local_748,0x3f600000);
      FUN_140054de0(local_788,L"glass_white");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_788);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_788);
      thunk_FUN_140055150(local_768);
      thunk_FUN_140055150(local_748);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_6e8,L"glass_yellow");
      local_c828 = 0x400000;
      FUN_140054de0(local_708,L"glass_yellow");
      local_c828 = 0xc00000;
      local_c838 = 0x3f180000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_708,local_6e8,0x3f700000);
      FUN_140054de0(local_728,L"glass_yellow");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_728);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_728);
      thunk_FUN_140055150(local_708);
      thunk_FUN_140055150(local_6e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_688,L"glass_pane_top_black");
      local_c828 = 0x1000000;
      FUN_140054de0(local_6a8,L"glass_pane_top_black");
      local_c828 = 0x3000000;
      local_c838 = 0x3f200000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3f180000;
      uVar5 = FUN_14019d730(uVar5,local_6a8,local_688,0);
      FUN_140054de0(local_6c8,L"glass_pane_top_black");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_6c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_6c8);
      thunk_FUN_140055150(local_6a8);
      thunk_FUN_140055150(local_688);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_628,L"glass_pane_top_blue");
      local_c828 = 0x4000000;
      FUN_140054de0(local_648,L"glass_pane_top_blue");
      local_c828 = 0xc000000;
      local_c838 = 0x3f200000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3f180000;
      uVar5 = FUN_14019d730(uVar5,local_648,local_628,0x3d800000);
      FUN_140054de0(local_668,L"glass_pane_top_blue");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_668);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_668);
      thunk_FUN_140055150(local_648);
      thunk_FUN_140055150(local_628);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_5c8,L"glass_pane_top_brown");
      local_c828 = 0x10000000;
      FUN_140054de0(local_5e8,L"glass_pane_top_brown");
      local_c828 = 0x30000000;
      local_c838 = 0x3f200000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3f180000;
      uVar5 = FUN_14019d730(uVar5,local_5e8,local_5c8,0x3e000000);
      FUN_140054de0(local_608,L"glass_pane_top_brown");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_608);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_608);
      thunk_FUN_140055150(local_5e8);
      thunk_FUN_140055150(local_5c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_568,L"glass_pane_top_cyan");
      local_c828 = 0x40000000;
      FUN_140054de0(local_588,L"glass_pane_top_cyan");
      local_c828 = 0xc0000000;
      local_c838 = 0x3f200000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3f180000;
      uVar5 = FUN_14019d730(uVar5,local_588,local_568,0x3e400000);
      FUN_140054de0(local_5a8,L"glass_pane_top_cyan");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_5a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_5a8);
      thunk_FUN_140055150(local_588);
      thunk_FUN_140055150(local_568);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_508,L"glass_pane_top_gray");
      local_c828 = 1;
      FUN_140054de0(local_528,L"glass_pane_top_gray");
      local_c828 = 3;
      local_c838 = 0x3f200000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3f180000;
      uVar5 = FUN_14019d730(uVar5,local_528,local_508,0x3e800000);
      FUN_140054de0(local_548,L"glass_pane_top_gray");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_548);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_548);
      thunk_FUN_140055150(local_528);
      thunk_FUN_140055150(local_508);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_4a8,L"glass_pane_top_green");
      local_c828 = 4;
      FUN_140054de0(local_4c8,L"glass_pane_top_green");
      local_c828 = 0xc;
      local_c838 = 0x3f200000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3f180000;
      uVar5 = FUN_14019d730(uVar5,local_4c8,local_4a8,0x3ea00000);
      FUN_140054de0(local_4e8,L"glass_pane_top_green");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_4e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_4e8);
      thunk_FUN_140055150(local_4c8);
      thunk_FUN_140055150(local_4a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_448,L"glass_pane_top_light_blue");
      local_c828 = 0x10;
      FUN_140054de0(local_468,L"glass_pane_top_light_blue");
      local_c828 = 0x30;
      local_c838 = 0x3f200000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3f180000;
      uVar5 = FUN_14019d730(uVar5,local_468,local_448,0x3ec00000);
      FUN_140054de0(local_488,L"glass_pane_top_light_blue");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_488);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_488);
      thunk_FUN_140055150(local_468);
      thunk_FUN_140055150(local_448);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_3e8,L"glass_pane_top_lime");
      local_c828 = 0x40;
      FUN_140054de0(local_408,L"glass_pane_top_lime");
      local_c828 = 0xc0;
      local_c838 = 0x3f200000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3f180000;
      uVar5 = FUN_14019d730(uVar5,local_408,local_3e8,0x3ee00000);
      FUN_140054de0(local_428,L"glass_pane_top_lime");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_428);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_428);
      thunk_FUN_140055150(local_408);
      thunk_FUN_140055150(local_3e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_388,L"glass_pane_top_magenta");
      local_c828 = 0x100;
      FUN_140054de0(local_3a8,L"glass_pane_top_magenta");
      local_c828 = 0x300;
      local_c838 = 0x3f200000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3f180000;
      uVar5 = FUN_14019d730(uVar5,local_3a8,local_388,0x3f000000);
      FUN_140054de0(local_3c8,L"glass_pane_top_magenta");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_3c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_3c8);
      thunk_FUN_140055150(local_3a8);
      thunk_FUN_140055150(local_388);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_328,L"glass_pane_top_orange");
      local_c828 = 0x400;
      FUN_140054de0(local_348,L"glass_pane_top_orange");
      local_c828 = 0xc00;
      local_c838 = 0x3f200000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3f180000;
      uVar5 = FUN_14019d730(uVar5,local_348,local_328,0x3f100000);
      FUN_140054de0(local_368,L"glass_pane_top_orange");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_368);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_368);
      thunk_FUN_140055150(local_348);
      thunk_FUN_140055150(local_328);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_2c8,L"glass_pane_top_pink");
      local_c828 = 0x1000;
      FUN_140054de0(local_2e8,L"glass_pane_top_pink");
      local_c828 = 0x3000;
      local_c838 = 0x3f200000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3f180000;
      uVar5 = FUN_14019d730(uVar5,local_2e8,local_2c8,0x3f200000);
      FUN_140054de0(local_308,L"glass_pane_top_pink");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_308);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_308);
      thunk_FUN_140055150(local_2e8);
      thunk_FUN_140055150(local_2c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_268,L"glass_pane_top_purple");
      local_c828 = 0x4000;
      FUN_140054de0(local_288,L"glass_pane_top_purple");
      local_c828 = 0xc000;
      local_c838 = 0x3f200000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3f180000;
      uVar5 = FUN_14019d730(uVar5,local_288,local_268,0x3f300000);
      FUN_140054de0(local_2a8,L"glass_pane_top_purple");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_2a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_2a8);
      thunk_FUN_140055150(local_288);
      thunk_FUN_140055150(local_268);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_208,L"glass_pane_top_red");
      local_c828 = 0x10000;
      FUN_140054de0(local_228,L"glass_pane_top_red");
      local_c828 = 0x30000;
      local_c838 = 0x3f200000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3f180000;
      uVar5 = FUN_14019d730(uVar5,local_228,local_208,0x3f400000);
      FUN_140054de0(local_248,L"glass_pane_top_red");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_248);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_248);
      thunk_FUN_140055150(local_228);
      thunk_FUN_140055150(local_208);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_1a8,L"glass_pane_top_silver");
      local_c828 = 0x40000;
      FUN_140054de0(local_1c8,L"glass_pane_top_silver");
      local_c828 = 0xc0000;
      local_c838 = 0x3f200000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3f180000;
      uVar5 = FUN_14019d730(uVar5,local_1c8,local_1a8,0x3f500000);
      FUN_140054de0(local_1e8,L"glass_pane_top_silver");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_1e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_1e8);
      thunk_FUN_140055150(local_1c8);
      thunk_FUN_140055150(local_1a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_148,L"glass_pane_top_white");
      local_c828 = 0x100000;
      FUN_140054de0(local_168,L"glass_pane_top_white");
      local_c828 = 0x300000;
      local_c838 = 0x3f200000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3f180000;
      uVar5 = FUN_14019d730(uVar5,local_168,local_148,0x3f600000);
      FUN_140054de0(local_188,L"glass_pane_top_white");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_188);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_188);
      thunk_FUN_140055150(local_168);
      thunk_FUN_140055150(local_148);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_e8,L"glass_pane_top_yellow");
      local_c828 = 0x400000;
      FUN_140054de0(local_108,L"glass_pane_top_yellow");
      local_c828 = 0xc00000;
      local_c838 = 0x3f200000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3f180000;
      uVar5 = FUN_14019d730(uVar5,local_108,local_e8,0x3f700000);
      FUN_140054de0(local_128,L"glass_pane_top_yellow");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_128);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_128);
      thunk_FUN_140055150(local_108);
      puVar8 = local_e8;
    }
    else {
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c7c8,L"helmetCloth");
      local_c828 = 1;
      FUN_140054de0(local_c7e8,L"helmetCloth");
      local_c828 = 3;
      local_c838 = 0x3d800000;
      local_c840 = 0x3d800000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_c7e8,local_c7c8,0);
      FUN_140054de0(local_c808,L"helmetCloth");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c808);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c808);
      thunk_FUN_140055150(local_c7e8);
      thunk_FUN_140055150(local_c7c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c768,L"helmetChain");
      local_c828 = 4;
      FUN_140054de0(local_c788,L"helmetChain");
      local_c828 = 0xc;
      local_c838 = 0x3d800000;
      local_c840 = 0x3e000000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_c788,local_c768,0x3d800000);
      FUN_140054de0(local_c7a8,L"helmetChain");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c7a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c7a8);
      thunk_FUN_140055150(local_c788);
      thunk_FUN_140055150(local_c768);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c708,L"helmetIron");
      local_c828 = 0x10;
      FUN_140054de0(local_c728,L"helmetIron");
      local_c828 = 0x30;
      local_c838 = 0x3d800000;
      local_c840 = 0x3e400000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_c728,local_c708,0x3e000000);
      FUN_140054de0(local_c748,L"helmetIron");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c748);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c748);
      thunk_FUN_140055150(local_c728);
      thunk_FUN_140055150(local_c708);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c6a8,L"helmetDiamond");
      local_c828 = 0x40;
      FUN_140054de0(local_c6c8,L"helmetDiamond");
      local_c828 = 0xc0;
      local_c838 = 0x3d800000;
      local_c840 = 0x3e800000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_c6c8,local_c6a8,0x3e400000);
      FUN_140054de0(local_c6e8,L"helmetDiamond");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c6e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c6e8);
      thunk_FUN_140055150(local_c6c8);
      thunk_FUN_140055150(local_c6a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c648,L"helmetGold");
      local_c828 = 0x100;
      FUN_140054de0(local_c668,L"helmetGold");
      local_c828 = 0x300;
      local_c838 = 0x3d800000;
      local_c840 = 0x3ea00000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_c668,local_c648,0x3e800000);
      FUN_140054de0(local_c688,L"helmetGold");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c688);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c688);
      thunk_FUN_140055150(local_c668);
      thunk_FUN_140055150(local_c648);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c5e8,L"flintAndSteel");
      local_c828 = 0x400;
      FUN_140054de0(local_c608,L"flintAndSteel");
      local_c828 = 0xc00;
      local_c838 = 0x3d800000;
      local_c840 = 0x3ec00000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_c608,local_c5e8,0x3ea00000);
      FUN_140054de0(local_c628,L"flintAndSteel");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c628);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c628);
      thunk_FUN_140055150(local_c608);
      thunk_FUN_140055150(local_c5e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c588,L"flint");
      local_c828 = 0x1000;
      FUN_140054de0(local_c5a8,L"flint");
      local_c828 = 0x3000;
      local_c838 = 0x3d800000;
      local_c840 = 0x3ee00000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_c5a8,local_c588,0x3ec00000);
      FUN_140054de0(local_c5c8,L"flint");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c5c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c5c8);
      thunk_FUN_140055150(local_c5a8);
      thunk_FUN_140055150(local_c588);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c528,L"coal");
      local_c828 = 0x4000;
      FUN_140054de0(local_c548,L"coal");
      local_c828 = 0xc000;
      local_c838 = 0x3d800000;
      local_c840 = 0x3f000000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_c548,local_c528,0x3ee00000);
      FUN_140054de0(local_c568,L"coal");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c568);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c568);
      thunk_FUN_140055150(local_c548);
      thunk_FUN_140055150(local_c528);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c4c8,L"string");
      local_c828 = 0x10000;
      FUN_140054de0(local_c4e8,L"string");
      local_c828 = 0x30000;
      local_c838 = 0x3d800000;
      local_c840 = 0x3f100000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_c4e8,local_c4c8,0x3f000000);
      FUN_140054de0(local_c508,L"string");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c508);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c508);
      thunk_FUN_140055150(local_c4e8);
      thunk_FUN_140055150(local_c4c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c468,L"seeds");
      local_c828 = 0x40000;
      FUN_140054de0(local_c488,L"seeds");
      local_c828 = 0xc0000;
      local_c838 = 0x3d800000;
      local_c840 = 0x3f200000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_c488,local_c468,0x3f100000);
      FUN_140054de0(local_c4a8,L"seeds");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c4a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c4a8);
      thunk_FUN_140055150(local_c488);
      thunk_FUN_140055150(local_c468);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c408,L"apple");
      local_c828 = 0x100000;
      FUN_140054de0(local_c428,L"apple");
      local_c828 = 0x300000;
      local_c838 = 0x3d800000;
      local_c840 = 0x3f300000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_c428,local_c408,0x3f200000);
      FUN_140054de0(local_c448,L"apple");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c448);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c448);
      thunk_FUN_140055150(local_c428);
      thunk_FUN_140055150(local_c408);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c3a8,L"appleGold");
      local_c828 = 0x400000;
      FUN_140054de0(local_c3c8,L"appleGold");
      local_c828 = 0xc00000;
      local_c838 = 0x3d800000;
      local_c840 = 0x3f400000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_c3c8,local_c3a8,0x3f300000);
      FUN_140054de0(local_c3e8,L"appleGold");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c3e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c3e8);
      thunk_FUN_140055150(local_c3c8);
      thunk_FUN_140055150(local_c3a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c348,&DAT_14062d568);
      local_c828 = 0x1000000;
      FUN_140054de0(local_c368,&DAT_14062d568);
      local_c828 = 0x3000000;
      local_c838 = 0x3d800000;
      local_c840 = 0x3f500000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_c368,local_c348,0x3f400000);
      FUN_140054de0(local_c388,&DAT_14062d568);
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c388);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c388);
      thunk_FUN_140055150(local_c368);
      thunk_FUN_140055150(local_c348);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c2e8,L"sugar");
      local_c828 = 0x4000000;
      FUN_140054de0(local_c308,L"sugar");
      local_c828 = 0xc000000;
      local_c838 = 0x3d800000;
      local_c840 = 0x3f600000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_c308,local_c2e8,0x3f500000);
      FUN_140054de0(local_c328,L"sugar");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c328);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c328);
      thunk_FUN_140055150(local_c308);
      thunk_FUN_140055150(local_c2e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c288,L"snowball");
      local_c828 = 0x10000000;
      FUN_140054de0(local_c2a8,L"snowball");
      local_c828 = 0x30000000;
      local_c838 = 0x3d800000;
      local_c840 = 0x3f700000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_c2a8,local_c288,0x3f600000);
      FUN_140054de0(local_c2c8,L"snowball");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c2c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c2c8);
      thunk_FUN_140055150(local_c2a8);
      thunk_FUN_140055150(local_c288);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c228,L"slot_empty_helmet");
      local_c828 = 0x40000000;
      FUN_140054de0(local_c248,L"slot_empty_helmet");
      local_c828 = 0xc0000000;
      local_c838 = 0x3d800000;
      local_c840 = 0x3f800000;
      local_c848 = 0;
      uVar5 = FUN_14019d730(uVar5,local_c248,local_c228,0x3f700000);
      FUN_140054de0(local_c268,L"slot_empty_helmet");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c268);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c268);
      thunk_FUN_140055150(local_c248);
      thunk_FUN_140055150(local_c228);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c1c8,L"chestplateCloth");
      local_c828 = 1;
      FUN_140054de0(local_c1e8,L"chestplateCloth");
      local_c828 = 3;
      local_c838 = 0x3e000000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_c1e8,local_c1c8,0);
      FUN_140054de0(local_c208,L"chestplateCloth");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c208);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c208);
      thunk_FUN_140055150(local_c1e8);
      thunk_FUN_140055150(local_c1c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c168,L"chestplateChain");
      local_c828 = 4;
      FUN_140054de0(local_c188,L"chestplateChain");
      local_c828 = 0xc;
      local_c838 = 0x3e000000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_c188,local_c168,0x3d800000);
      FUN_140054de0(local_c1a8,L"chestplateChain");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c1a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c1a8);
      thunk_FUN_140055150(local_c188);
      thunk_FUN_140055150(local_c168);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c108,L"chestplateIron");
      local_c828 = 0x10;
      FUN_140054de0(local_c128,L"chestplateIron");
      local_c828 = 0x30;
      local_c838 = 0x3e000000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_c128,local_c108,0x3e000000);
      FUN_140054de0(local_c148,L"chestplateIron");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c148);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c148);
      thunk_FUN_140055150(local_c128);
      thunk_FUN_140055150(local_c108);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c0a8,L"chestplateDiamond");
      local_c828 = 0x40;
      FUN_140054de0(local_c0c8,L"chestplateDiamond");
      local_c828 = 0xc0;
      local_c838 = 0x3e000000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_c0c8,local_c0a8,0x3e400000);
      FUN_140054de0(local_c0e8,L"chestplateDiamond");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c0e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c0e8);
      thunk_FUN_140055150(local_c0c8);
      thunk_FUN_140055150(local_c0a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_c048,L"chestplateGold");
      local_c828 = 0x100;
      FUN_140054de0(local_c068,L"chestplateGold");
      local_c828 = 0x300;
      local_c838 = 0x3e000000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_c068,local_c048,0x3e800000);
      FUN_140054de0(local_c088,L"chestplateGold");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c088);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c088);
      thunk_FUN_140055150(local_c068);
      thunk_FUN_140055150(local_c048);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_bfe8,&DAT_14062d6b0);
      local_c828 = 0x400;
      FUN_140054de0(local_c008,&DAT_14062d6b0);
      local_c828 = 0xc00;
      local_c838 = 0x3e000000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_c008,local_bfe8,0x3ea00000);
      FUN_140054de0(local_c028,&DAT_14062d6b0);
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_c028);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_c028);
      thunk_FUN_140055150(local_c008);
      thunk_FUN_140055150(local_bfe8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_bf88,L"brick");
      local_c828 = 0x1000;
      FUN_140054de0(local_bfa8,L"brick");
      local_c828 = 0x3000;
      local_c838 = 0x3e000000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_bfa8,local_bf88,0x3ec00000);
      FUN_140054de0(local_bfc8,L"brick");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_bfc8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_bfc8);
      thunk_FUN_140055150(local_bfa8);
      thunk_FUN_140055150(local_bf88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_bf28,L"ingotIron");
      local_c828 = 0x4000;
      FUN_140054de0(local_bf48,L"ingotIron");
      local_c828 = 0xc000;
      local_c838 = 0x3e000000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_bf48,local_bf28,0x3ee00000);
      FUN_140054de0(local_bf68,L"ingotIron");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_bf68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_bf68);
      thunk_FUN_140055150(local_bf48);
      thunk_FUN_140055150(local_bf28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_bec8,L"feather");
      local_c828 = 0x10000;
      FUN_140054de0(local_bee8,L"feather");
      local_c828 = 0x30000;
      local_c838 = 0x3e000000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_bee8,local_bec8,0x3f000000);
      FUN_140054de0(local_bf08,L"feather");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_bf08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_bf08);
      thunk_FUN_140055150(local_bee8);
      thunk_FUN_140055150(local_bec8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_be68,L"wheat");
      local_c828 = 0x40000;
      FUN_140054de0(local_be88,L"wheat");
      local_c828 = 0xc0000;
      local_c838 = 0x3e000000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_be88,local_be68,0x3f100000);
      FUN_140054de0(local_bea8,L"wheat");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_bea8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_bea8);
      thunk_FUN_140055150(local_be88);
      thunk_FUN_140055150(local_be68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_be08,L"painting");
      local_c828 = 0x100000;
      FUN_140054de0(local_be28,L"painting");
      local_c828 = 0x300000;
      local_c838 = 0x3e000000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_be28,local_be08,0x3f200000);
      FUN_140054de0(local_be48,L"painting");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_be48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_be48);
      thunk_FUN_140055150(local_be28);
      thunk_FUN_140055150(local_be08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_bda8,L"reeds");
      local_c828 = 0x400000;
      FUN_140054de0(local_bdc8,L"reeds");
      local_c828 = 0xc00000;
      local_c838 = 0x3e000000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_bdc8,local_bda8,0x3f300000);
      FUN_140054de0(local_bde8,L"reeds");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_bde8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_bde8);
      thunk_FUN_140055150(local_bdc8);
      thunk_FUN_140055150(local_bda8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_bd48,L"bone");
      local_c828 = 0x1000000;
      FUN_140054de0(local_bd68,L"bone");
      local_c828 = 0x3000000;
      local_c838 = 0x3e000000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_bd68,local_bd48,0x3f400000);
      FUN_140054de0(local_bd88,L"bone");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_bd88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_bd88);
      thunk_FUN_140055150(local_bd68);
      thunk_FUN_140055150(local_bd48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_bce8,L"cake");
      local_c828 = 0x4000000;
      FUN_140054de0(local_bd08,L"cake");
      local_c828 = 0xc000000;
      local_c838 = 0x3e000000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_bd08,local_bce8,0x3f500000);
      FUN_140054de0(local_bd28,L"cake");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_bd28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_bd28);
      thunk_FUN_140055150(local_bd08);
      thunk_FUN_140055150(local_bce8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_bc88,L"slimeball");
      local_c828 = 0x10000000;
      FUN_140054de0(local_bca8,L"slimeball");
      local_c828 = 0x30000000;
      local_c838 = 0x3e000000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_bca8,local_bc88,0x3f600000);
      FUN_140054de0(local_bcc8,L"slimeball");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_bcc8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_bcc8);
      thunk_FUN_140055150(local_bca8);
      thunk_FUN_140055150(local_bc88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_bc28,L"slot_empty_chestplate");
      local_c828 = 0x40000000;
      FUN_140054de0(local_bc48,L"slot_empty_chestplate");
      local_c828 = 0xc0000000;
      local_c838 = 0x3e000000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3d800000;
      uVar5 = FUN_14019d730(uVar5,local_bc48,local_bc28,0x3f700000);
      FUN_140054de0(local_bc68,L"slot_empty_chestplate");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_bc68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_bc68);
      thunk_FUN_140055150(local_bc48);
      thunk_FUN_140055150(local_bc28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_bbc8,L"leggingsCloth");
      local_c828 = 1;
      FUN_140054de0(local_bbe8,L"leggingsCloth");
      local_c828 = 3;
      local_c838 = 0x3e400000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_bbe8,local_bbc8,0);
      FUN_140054de0(local_bc08,L"leggingsCloth");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_bc08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_bc08);
      thunk_FUN_140055150(local_bbe8);
      thunk_FUN_140055150(local_bbc8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_bb68,L"leggingsChain");
      local_c828 = 4;
      FUN_140054de0(local_bb88,L"leggingsChain");
      local_c828 = 0xc;
      local_c838 = 0x3e400000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_bb88,local_bb68,0x3d800000);
      FUN_140054de0(local_bba8,L"leggingsChain");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_bba8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_bba8);
      thunk_FUN_140055150(local_bb88);
      thunk_FUN_140055150(local_bb68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_bb08,L"leggingsIron");
      local_c828 = 0x10;
      FUN_140054de0(local_bb28,L"leggingsIron");
      local_c828 = 0x30;
      local_c838 = 0x3e400000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_bb28,local_bb08,0x3e000000);
      FUN_140054de0(local_bb48,L"leggingsIron");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_bb48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_bb48);
      thunk_FUN_140055150(local_bb28);
      thunk_FUN_140055150(local_bb08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_baa8,L"leggingsDiamond");
      local_c828 = 0x40;
      FUN_140054de0(local_bac8,L"leggingsDiamond");
      local_c828 = 0xc0;
      local_c838 = 0x3e400000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_bac8,local_baa8,0x3e400000);
      FUN_140054de0(local_bae8,L"leggingsDiamond");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_bae8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_bae8);
      thunk_FUN_140055150(local_bac8);
      thunk_FUN_140055150(local_baa8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_ba48,L"leggingsGold");
      local_c828 = 0x100;
      FUN_140054de0(local_ba68,L"leggingsGold");
      local_c828 = 0x300;
      local_c838 = 0x3e400000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_ba68,local_ba48,0x3e800000);
      FUN_140054de0(local_ba88,L"leggingsGold");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_ba88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_ba88);
      thunk_FUN_140055150(local_ba68);
      thunk_FUN_140055150(local_ba48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b9e8,L"arrow");
      local_c828 = 0x400;
      FUN_140054de0(local_ba08,L"arrow");
      local_c828 = 0xc00;
      local_c838 = 0x3e400000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_ba08,local_b9e8,0x3ea00000);
      FUN_140054de0(local_ba28,L"arrow");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_ba28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_ba28);
      thunk_FUN_140055150(local_ba08);
      thunk_FUN_140055150(local_b9e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b988,L"quiver");
      local_c828 = 0x1000;
      FUN_140054de0(local_b9a8,L"quiver");
      local_c828 = 0x3000;
      local_c838 = 0x3e400000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_b9a8,local_b988,0x3ec00000);
      FUN_140054de0(local_b9c8,L"quiver");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b9c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b9c8);
      thunk_FUN_140055150(local_b9a8);
      thunk_FUN_140055150(local_b988);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b928,L"ingotGold");
      local_c828 = 0x4000;
      FUN_140054de0(local_b948,L"ingotGold");
      local_c828 = 0xc000;
      local_c838 = 0x3e400000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_b948,local_b928,0x3ee00000);
      FUN_140054de0(local_b968,L"ingotGold");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b968);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b968);
      thunk_FUN_140055150(local_b948);
      thunk_FUN_140055150(local_b928);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b8c8,L"sulphur");
      local_c828 = 0x10000;
      FUN_140054de0(local_b8e8,L"sulphur");
      local_c828 = 0x30000;
      local_c838 = 0x3e400000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_b8e8,local_b8c8,0x3f000000);
      FUN_140054de0(local_b908,L"sulphur");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b908);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b908);
      thunk_FUN_140055150(local_b8e8);
      thunk_FUN_140055150(local_b8c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b868,L"bread");
      local_c828 = 0x40000;
      FUN_140054de0(local_b888,L"bread");
      local_c828 = 0xc0000;
      local_c838 = 0x3e400000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_b888,local_b868,0x3f100000);
      FUN_140054de0(local_b8a8,L"bread");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b8a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b8a8);
      thunk_FUN_140055150(local_b888);
      thunk_FUN_140055150(local_b868);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b808,L"sign");
      local_c828 = 0x100000;
      FUN_140054de0(local_b828,L"sign");
      local_c828 = 0x300000;
      local_c838 = 0x3e400000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_b828,local_b808,0x3f200000);
      FUN_140054de0(local_b848,L"sign");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b848);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b848);
      thunk_FUN_140055150(local_b828);
      thunk_FUN_140055150(local_b808);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b7a8,L"doorWood");
      local_c828 = 0x400000;
      FUN_140054de0(local_b7c8,L"doorWood");
      local_c828 = 0xc00000;
      local_c838 = 0x3e400000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_b7c8,local_b7a8,0x3f300000);
      FUN_140054de0(local_b7e8,L"doorWood");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b7e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b7e8);
      thunk_FUN_140055150(local_b7c8);
      thunk_FUN_140055150(local_b7a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b748,L"doorIron");
      local_c828 = 0x1000000;
      FUN_140054de0(local_b768,L"doorIron");
      local_c828 = 0x3000000;
      local_c838 = 0x3e400000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_b768,local_b748,0x3f400000);
      FUN_140054de0(local_b788,L"doorIron");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b788);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b788);
      thunk_FUN_140055150(local_b768);
      thunk_FUN_140055150(local_b748);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b6e8,&DAT_14062d868);
      local_c828 = 0x4000000;
      FUN_140054de0(local_b708,&DAT_14062d868);
      local_c828 = 0xc000000;
      local_c838 = 0x3e400000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_b708,local_b6e8,0x3f500000);
      FUN_140054de0(local_b728,&DAT_14062d868);
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b728);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b728);
      thunk_FUN_140055150(local_b708);
      thunk_FUN_140055150(local_b6e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b688,L"fireball");
      local_c828 = 0x10000000;
      FUN_140054de0(local_b6a8,L"fireball");
      local_c828 = 0x30000000;
      local_c838 = 0x3e400000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_b6a8,local_b688,0x3f600000);
      FUN_140054de0(local_b6c8,L"fireball");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b6c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b6c8);
      thunk_FUN_140055150(local_b6a8);
      thunk_FUN_140055150(local_b688);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b628,L"slot_empty_leggings");
      local_c828 = 0x40000000;
      FUN_140054de0(local_b648,L"slot_empty_leggings");
      local_c828 = 0xc0000000;
      local_c838 = 0x3e400000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3e000000;
      uVar5 = FUN_14019d730(uVar5,local_b648,local_b628,0x3f700000);
      FUN_140054de0(local_b668,L"slot_empty_leggings");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b668);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b668);
      thunk_FUN_140055150(local_b648);
      thunk_FUN_140055150(local_b628);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b5c8,L"bootsCloth");
      local_c828 = 1;
      FUN_140054de0(local_b5e8,L"bootsCloth");
      local_c828 = 3;
      local_c838 = 0x3e800000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_b5e8,local_b5c8,0);
      FUN_140054de0(local_b608,L"bootsCloth");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b608);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b608);
      thunk_FUN_140055150(local_b5e8);
      thunk_FUN_140055150(local_b5c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b568,L"bootsChain");
      local_c828 = 4;
      FUN_140054de0(local_b588,L"bootsChain");
      local_c828 = 0xc;
      local_c838 = 0x3e800000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_b588,local_b568,0x3d800000);
      FUN_140054de0(local_b5a8,L"bootsChain");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b5a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b5a8);
      thunk_FUN_140055150(local_b588);
      thunk_FUN_140055150(local_b568);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b508,L"bootsIron");
      local_c828 = 0x10;
      FUN_140054de0(local_b528,L"bootsIron");
      local_c828 = 0x30;
      local_c838 = 0x3e800000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_b528,local_b508,0x3e000000);
      FUN_140054de0(local_b548,L"bootsIron");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b548);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b548);
      thunk_FUN_140055150(local_b528);
      thunk_FUN_140055150(local_b508);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b4a8,L"bootsDiamond");
      local_c828 = 0x40;
      FUN_140054de0(local_b4c8,L"bootsDiamond");
      local_c828 = 0xc0;
      local_c838 = 0x3e800000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_b4c8,local_b4a8,0x3e400000);
      FUN_140054de0(local_b4e8,L"bootsDiamond");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b4e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b4e8);
      thunk_FUN_140055150(local_b4c8);
      thunk_FUN_140055150(local_b4a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b448,L"bootsGold");
      local_c828 = 0x100;
      FUN_140054de0(local_b468,L"bootsGold");
      local_c828 = 0x300;
      local_c838 = 0x3e800000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_b468,local_b448,0x3e800000);
      FUN_140054de0(local_b488,L"bootsGold");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b488);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b488);
      thunk_FUN_140055150(local_b468);
      thunk_FUN_140055150(local_b448);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b3e8,L"stick");
      local_c828 = 0x400;
      FUN_140054de0(local_b408,L"stick");
      local_c828 = 0xc00;
      local_c838 = 0x3e800000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_b408,local_b3e8,0x3ea00000);
      FUN_140054de0(local_b428,L"stick");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b428);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b428);
      thunk_FUN_140055150(local_b408);
      thunk_FUN_140055150(local_b3e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b388,L"compass");
      local_c828 = 0x1000;
      FUN_140054de0(local_b3a8,L"compass");
      local_c828 = 0x3000;
      local_c838 = 0x3e800000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_b3a8,local_b388,0x3ec00000);
      FUN_140054de0(local_b3c8,L"compass");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b3c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b3c8);
      thunk_FUN_140055150(local_b3a8);
      thunk_FUN_140055150(local_b388);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b328,L"diamond");
      local_c828 = 0x4000;
      FUN_140054de0(local_b348,L"diamond");
      local_c828 = 0xc000;
      local_c838 = 0x3e800000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_b348,local_b328,0x3ee00000);
      FUN_140054de0(local_b368,L"diamond");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b368);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b368);
      thunk_FUN_140055150(local_b348);
      thunk_FUN_140055150(local_b328);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b2c8,L"redstone");
      local_c828 = 0x10000;
      FUN_140054de0(local_b2e8,L"redstone");
      local_c828 = 0x30000;
      local_c838 = 0x3e800000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_b2e8,local_b2c8,0x3f000000);
      FUN_140054de0(local_b308,L"redstone");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b308);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b308);
      thunk_FUN_140055150(local_b2e8);
      thunk_FUN_140055150(local_b2c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b268,L"clay");
      local_c828 = 0x40000;
      FUN_140054de0(local_b288,L"clay");
      local_c828 = 0xc0000;
      local_c838 = 0x3e800000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_b288,local_b268,0x3f100000);
      FUN_140054de0(local_b2a8,L"clay");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b2a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b2a8);
      thunk_FUN_140055150(local_b288);
      thunk_FUN_140055150(local_b268);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b208,L"paper");
      local_c828 = 0x100000;
      FUN_140054de0(local_b228,L"paper");
      local_c828 = 0x300000;
      local_c838 = 0x3e800000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_b228,local_b208,0x3f200000);
      FUN_140054de0(local_b248,L"paper");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b248);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b248);
      thunk_FUN_140055150(local_b228);
      thunk_FUN_140055150(local_b208);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b1a8,L"book");
      local_c828 = 0x400000;
      FUN_140054de0(local_b1c8,L"book");
      local_c828 = 0xc00000;
      local_c838 = 0x3e800000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_b1c8,local_b1a8,0x3f300000);
      FUN_140054de0(local_b1e8,L"book");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b1e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b1e8);
      thunk_FUN_140055150(local_b1c8);
      thunk_FUN_140055150(local_b1a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b148,&DAT_14062d9f8);
      local_c828 = 0x1000000;
      FUN_140054de0(local_b168,&DAT_14062d9f8);
      local_c828 = 0x3000000;
      local_c838 = 0x3e800000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_b168,local_b148,0x3f400000);
      FUN_140054de0(local_b188,&DAT_14062d9f8);
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b188);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b188);
      thunk_FUN_140055150(local_b168);
      thunk_FUN_140055150(local_b148);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b0e8,L"seeds_pumpkin");
      local_c828 = 0x4000000;
      FUN_140054de0(local_b108,L"seeds_pumpkin");
      local_c828 = 0xc000000;
      local_c838 = 0x3e800000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_b108,local_b0e8,0x3f500000);
      FUN_140054de0(local_b128,L"seeds_pumpkin");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b128);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b128);
      thunk_FUN_140055150(local_b108);
      thunk_FUN_140055150(local_b0e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b088,L"seeds_melon");
      local_c828 = 0x10000000;
      FUN_140054de0(local_b0a8,L"seeds_melon");
      local_c828 = 0x30000000;
      local_c838 = 0x3e800000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_b0a8,local_b088,0x3f600000);
      FUN_140054de0(local_b0c8,L"seeds_melon");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b0c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b0c8);
      thunk_FUN_140055150(local_b0a8);
      thunk_FUN_140055150(local_b088);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_b028,L"slot_empty_boots");
      local_c828 = 0x40000000;
      FUN_140054de0(local_b048,L"slot_empty_boots");
      local_c828 = 0xc0000000;
      local_c838 = 0x3e800000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3e400000;
      uVar5 = FUN_14019d730(uVar5,local_b048,local_b028,0x3f700000);
      FUN_140054de0(local_b068,L"slot_empty_boots");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b068);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b068);
      thunk_FUN_140055150(local_b048);
      thunk_FUN_140055150(local_b028);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_afc8,L"swordWood");
      local_c828 = 1;
      FUN_140054de0(local_afe8,L"swordWood");
      local_c828 = 3;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_afe8,local_afc8,0);
      FUN_140054de0(local_b008,L"swordWood");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_b008);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_b008);
      thunk_FUN_140055150(local_afe8);
      thunk_FUN_140055150(local_afc8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_af68,L"swordStone");
      local_c828 = 4;
      FUN_140054de0(local_af88,L"swordStone");
      local_c828 = 0xc;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_af88,local_af68,0x3d800000);
      FUN_140054de0(local_afa8,L"swordStone");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_afa8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_afa8);
      thunk_FUN_140055150(local_af88);
      thunk_FUN_140055150(local_af68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_af08,L"swordIron");
      local_c828 = 0x10;
      FUN_140054de0(local_af28,L"swordIron");
      local_c828 = 0x30;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_af28,local_af08,0x3e000000);
      FUN_140054de0(local_af48,L"swordIron");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_af48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_af48);
      thunk_FUN_140055150(local_af28);
      thunk_FUN_140055150(local_af08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_aea8,L"swordDiamond");
      local_c828 = 0x40;
      FUN_140054de0(local_aec8,L"swordDiamond");
      local_c828 = 0xc0;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_aec8,local_aea8,0x3e400000);
      FUN_140054de0(local_aee8,L"swordDiamond");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_aee8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_aee8);
      thunk_FUN_140055150(local_aec8);
      thunk_FUN_140055150(local_aea8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_ae48,L"swordGold");
      local_c828 = 0x100;
      FUN_140054de0(local_ae68,L"swordGold");
      local_c828 = 0x300;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_ae68,local_ae48,0x3e800000);
      FUN_140054de0(local_ae88,L"swordGold");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_ae88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_ae88);
      thunk_FUN_140055150(local_ae68);
      thunk_FUN_140055150(local_ae48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_ade8,L"fishingRod_uncast");
      local_c828 = 0x400;
      FUN_140054de0(local_ae08,L"fishingRod_uncast");
      local_c828 = 0xc00;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_ae08,local_ade8,0x3ea00000);
      FUN_140054de0(local_ae28,L"fishingRod_uncast");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_ae28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_ae28);
      thunk_FUN_140055150(local_ae08);
      thunk_FUN_140055150(local_ade8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_ad88,L"clock");
      local_c828 = 0x1000;
      FUN_140054de0(local_ada8,L"clock");
      local_c828 = 0x3000;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_ada8,local_ad88,0x3ec00000);
      FUN_140054de0(local_adc8,L"clock");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_adc8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_adc8);
      thunk_FUN_140055150(local_ada8);
      thunk_FUN_140055150(local_ad88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_ad28,L"bowl");
      local_c828 = 0x4000;
      FUN_140054de0(local_ad48,L"bowl");
      local_c828 = 0xc000;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_ad48,local_ad28,0x3ee00000);
      FUN_140054de0(local_ad68,L"bowl");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_ad68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_ad68);
      thunk_FUN_140055150(local_ad48);
      thunk_FUN_140055150(local_ad28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_acc8,L"mushroomStew");
      local_c828 = 0x10000;
      FUN_140054de0(local_ace8,L"mushroomStew");
      local_c828 = 0x30000;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_ace8,local_acc8,0x3f000000);
      FUN_140054de0(local_ad08,L"mushroomStew");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_ad08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_ad08);
      thunk_FUN_140055150(local_ace8);
      thunk_FUN_140055150(local_acc8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_ac68,L"yellowDust");
      local_c828 = 0x40000;
      FUN_140054de0(local_ac88,L"yellowDust");
      local_c828 = 0xc0000;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_ac88,local_ac68,0x3f100000);
      FUN_140054de0(local_aca8,L"yellowDust");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_aca8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_aca8);
      thunk_FUN_140055150(local_ac88);
      thunk_FUN_140055150(local_ac68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_ac08,L"bucket");
      local_c828 = 0x100000;
      FUN_140054de0(local_ac28,L"bucket");
      local_c828 = 0x300000;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_ac28,local_ac08,0x3f200000);
      FUN_140054de0(local_ac48,L"bucket");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_ac48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_ac48);
      thunk_FUN_140055150(local_ac28);
      thunk_FUN_140055150(local_ac08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_aba8,L"bucketWater");
      local_c828 = 0x400000;
      FUN_140054de0(local_abc8,L"bucketWater");
      local_c828 = 0xc00000;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_abc8,local_aba8,0x3f300000);
      FUN_140054de0(local_abe8,L"bucketWater");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_abe8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_abe8);
      thunk_FUN_140055150(local_abc8);
      thunk_FUN_140055150(local_aba8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_ab48,L"bucketLava");
      local_c828 = 0x1000000;
      FUN_140054de0(local_ab68,L"bucketLava");
      local_c828 = 0x3000000;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_ab68,local_ab48,0x3f400000);
      FUN_140054de0(local_ab88,L"bucketLava");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_ab88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_ab88);
      thunk_FUN_140055150(local_ab68);
      thunk_FUN_140055150(local_ab48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_aae8,L"milk");
      local_c828 = 0x4000000;
      FUN_140054de0(local_ab08,L"milk");
      local_c828 = 0xc000000;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_ab08,local_aae8,0x3f500000);
      FUN_140054de0(local_ab28,L"milk");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_ab28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_ab28);
      thunk_FUN_140055150(local_ab08);
      thunk_FUN_140055150(local_aae8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_aa88,L"dyePowder_black");
      local_c828 = 0x10000000;
      FUN_140054de0(local_aaa8,L"dyePowder_black");
      local_c828 = 0x30000000;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_aaa8,local_aa88,0x3f600000);
      FUN_140054de0(local_aac8,L"dyePowder_black");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_aac8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_aac8);
      thunk_FUN_140055150(local_aaa8);
      thunk_FUN_140055150(local_aa88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_aa28,L"dyePowder_gray");
      local_c828 = 0x40000000;
      FUN_140054de0(local_aa48,L"dyePowder_gray");
      local_c828 = 0xc0000000;
      local_c838 = 0x3ea00000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3e800000;
      uVar5 = FUN_14019d730(uVar5,local_aa48,local_aa28,0x3f700000);
      FUN_140054de0(local_aa68,L"dyePowder_gray");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_aa68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_aa68);
      thunk_FUN_140055150(local_aa48);
      thunk_FUN_140055150(local_aa28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a9c8,L"shovelWood");
      local_c828 = 1;
      FUN_140054de0(local_a9e8,L"shovelWood");
      local_c828 = 3;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_a9e8,local_a9c8,0);
      FUN_140054de0(local_aa08,L"shovelWood");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_aa08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_aa08);
      thunk_FUN_140055150(local_a9e8);
      thunk_FUN_140055150(local_a9c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a968,L"shovelStone");
      local_c828 = 4;
      FUN_140054de0(local_a988,L"shovelStone");
      local_c828 = 0xc;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_a988,local_a968,0x3d800000);
      FUN_140054de0(local_a9a8,L"shovelStone");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a9a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a9a8);
      thunk_FUN_140055150(local_a988);
      thunk_FUN_140055150(local_a968);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a908,L"shovelIron");
      local_c828 = 0x10;
      FUN_140054de0(local_a928,L"shovelIron");
      local_c828 = 0x30;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_a928,local_a908,0x3e000000);
      FUN_140054de0(local_a948,L"shovelIron");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a948);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a948);
      thunk_FUN_140055150(local_a928);
      thunk_FUN_140055150(local_a908);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a8a8,L"shovelDiamond");
      local_c828 = 0x40;
      FUN_140054de0(local_a8c8,L"shovelDiamond");
      local_c828 = 0xc0;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_a8c8,local_a8a8,0x3e400000);
      FUN_140054de0(local_a8e8,L"shovelDiamond");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a8e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a8e8);
      thunk_FUN_140055150(local_a8c8);
      thunk_FUN_140055150(local_a8a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a848,L"shovelGold");
      local_c828 = 0x100;
      FUN_140054de0(local_a868,L"shovelGold");
      local_c828 = 0x300;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_a868,local_a848,0x3e800000);
      FUN_140054de0(local_a888,L"shovelGold");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a888);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a888);
      thunk_FUN_140055150(local_a868);
      thunk_FUN_140055150(local_a848);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a7e8,L"fishingRod_cast");
      local_c828 = 0x400;
      FUN_140054de0(local_a808,L"fishingRod_cast");
      local_c828 = 0xc00;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_a808,local_a7e8,0x3ea00000);
      FUN_140054de0(local_a828,L"fishingRod_cast");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a828);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a828);
      thunk_FUN_140055150(local_a808);
      thunk_FUN_140055150(local_a7e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a788,L"diode");
      local_c828 = 0x1000;
      FUN_140054de0(local_a7a8,L"diode");
      local_c828 = 0x3000;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_a7a8,local_a788,0x3ec00000);
      FUN_140054de0(local_a7c8,L"diode");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a7c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a7c8);
      thunk_FUN_140055150(local_a7a8);
      thunk_FUN_140055150(local_a788);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a728,L"porkchopRaw");
      local_c828 = 0x4000;
      FUN_140054de0(local_a748,L"porkchopRaw");
      local_c828 = 0xc000;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_a748,local_a728,0x3ee00000);
      FUN_140054de0(local_a768,L"porkchopRaw");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a768);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a768);
      thunk_FUN_140055150(local_a748);
      thunk_FUN_140055150(local_a728);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a6c8,L"porkchopCooked");
      local_c828 = 0x10000;
      FUN_140054de0(local_a6e8,L"porkchopCooked");
      local_c828 = 0x30000;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_a6e8,local_a6c8,0x3f000000);
      FUN_140054de0(local_a708,L"porkchopCooked");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a708);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a708);
      thunk_FUN_140055150(local_a6e8);
      thunk_FUN_140055150(local_a6c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a668,L"fishRaw");
      local_c828 = 0x40000;
      FUN_140054de0(local_a688,L"fishRaw");
      local_c828 = 0xc0000;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_a688,local_a668,0x3f100000);
      FUN_140054de0(local_a6a8,L"fishRaw");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a6a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a6a8);
      thunk_FUN_140055150(local_a688);
      thunk_FUN_140055150(local_a668);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a608,L"fishCooked");
      local_c828 = 0x100000;
      FUN_140054de0(local_a628,L"fishCooked");
      local_c828 = 0x300000;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_a628,local_a608,0x3f200000);
      FUN_140054de0(local_a648,L"fishCooked");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a648);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a648);
      thunk_FUN_140055150(local_a628);
      thunk_FUN_140055150(local_a608);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a5a8,L"rottenFlesh");
      local_c828 = 0x400000;
      FUN_140054de0(local_a5c8,L"rottenFlesh");
      local_c828 = 0xc00000;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_a5c8,local_a5a8,0x3f300000);
      FUN_140054de0(local_a5e8,L"rottenFlesh");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a5e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a5e8);
      thunk_FUN_140055150(local_a5c8);
      thunk_FUN_140055150(local_a5a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a548,L"cookie");
      local_c828 = 0x1000000;
      FUN_140054de0(local_a568,L"cookie");
      local_c828 = 0x3000000;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_a568,local_a548,0x3f400000);
      FUN_140054de0(local_a588,L"cookie");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a588);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a588);
      thunk_FUN_140055150(local_a568);
      thunk_FUN_140055150(local_a548);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a4e8,L"shears");
      local_c828 = 0x4000000;
      FUN_140054de0(local_a508,L"shears");
      local_c828 = 0xc000000;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_a508,local_a4e8,0x3f500000);
      FUN_140054de0(local_a528,L"shears");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a528);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a528);
      thunk_FUN_140055150(local_a508);
      thunk_FUN_140055150(local_a4e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a488,L"dyePowder_red");
      local_c828 = 0x10000000;
      FUN_140054de0(local_a4a8,L"dyePowder_red");
      local_c828 = 0x30000000;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_a4a8,local_a488,0x3f600000);
      FUN_140054de0(local_a4c8,L"dyePowder_red");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a4c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a4c8);
      thunk_FUN_140055150(local_a4a8);
      thunk_FUN_140055150(local_a488);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a428,L"dyePowder_pink");
      local_c828 = 0x40000000;
      FUN_140054de0(local_a448,L"dyePowder_pink");
      local_c828 = 0xc0000000;
      local_c838 = 0x3ec00000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3ea00000;
      uVar5 = FUN_14019d730(uVar5,local_a448,local_a428,0x3f700000);
      FUN_140054de0(local_a468,L"dyePowder_pink");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a468);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a468);
      thunk_FUN_140055150(local_a448);
      thunk_FUN_140055150(local_a428);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a3c8,L"pickaxeWood");
      local_c828 = 1;
      FUN_140054de0(local_a3e8,L"pickaxeWood");
      local_c828 = 3;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_a3e8,local_a3c8,0);
      FUN_140054de0(local_a408,L"pickaxeWood");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a408);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a408);
      thunk_FUN_140055150(local_a3e8);
      thunk_FUN_140055150(local_a3c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a368,L"pickaxeStone");
      local_c828 = 4;
      FUN_140054de0(local_a388,L"pickaxeStone");
      local_c828 = 0xc;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_a388,local_a368,0x3d800000);
      FUN_140054de0(local_a3a8,L"pickaxeStone");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a3a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a3a8);
      thunk_FUN_140055150(local_a388);
      thunk_FUN_140055150(local_a368);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a308,L"pickaxeIron");
      local_c828 = 0x10;
      FUN_140054de0(local_a328,L"pickaxeIron");
      local_c828 = 0x30;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_a328,local_a308,0x3e000000);
      FUN_140054de0(local_a348,L"pickaxeIron");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a348);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a348);
      thunk_FUN_140055150(local_a328);
      thunk_FUN_140055150(local_a308);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a2a8,L"pickaxeDiamond");
      local_c828 = 0x40;
      FUN_140054de0(local_a2c8,L"pickaxeDiamond");
      local_c828 = 0xc0;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_a2c8,local_a2a8,0x3e400000);
      FUN_140054de0(local_a2e8,L"pickaxeDiamond");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a2e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a2e8);
      thunk_FUN_140055150(local_a2c8);
      thunk_FUN_140055150(local_a2a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a248,L"pickaxeGold");
      local_c828 = 0x100;
      FUN_140054de0(local_a268,L"pickaxeGold");
      local_c828 = 0x300;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_a268,local_a248,0x3e800000);
      FUN_140054de0(local_a288,L"pickaxeGold");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a288);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a288);
      thunk_FUN_140055150(local_a268);
      thunk_FUN_140055150(local_a248);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a1e8,L"bow_pull_0");
      local_c828 = 0x400;
      FUN_140054de0(local_a208,L"bow_pull_0");
      local_c828 = 0xc00;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_a208,local_a1e8,0x3ea00000);
      FUN_140054de0(local_a228,L"bow_pull_0");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a228);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a228);
      thunk_FUN_140055150(local_a208);
      thunk_FUN_140055150(local_a1e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a188,L"carrotOnAStick");
      local_c828 = 0x1000;
      FUN_140054de0(local_a1a8,L"carrotOnAStick");
      local_c828 = 0x3000;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_a1a8,local_a188,0x3ec00000);
      FUN_140054de0(local_a1c8,L"carrotOnAStick");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a1c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a1c8);
      thunk_FUN_140055150(local_a1a8);
      thunk_FUN_140055150(local_a188);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a128,L"leather");
      local_c828 = 0x4000;
      FUN_140054de0(local_a148,L"leather");
      local_c828 = 0xc000;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_a148,local_a128,0x3ee00000);
      FUN_140054de0(local_a168,L"leather");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a168);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a168);
      thunk_FUN_140055150(local_a148);
      thunk_FUN_140055150(local_a128);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a0c8,L"saddle");
      local_c828 = 0x10000;
      FUN_140054de0(local_a0e8,L"saddle");
      local_c828 = 0x30000;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_a0e8,local_a0c8,0x3f000000);
      FUN_140054de0(local_a108,L"saddle");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a108);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a108);
      thunk_FUN_140055150(local_a0e8);
      thunk_FUN_140055150(local_a0c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a068,L"beefRaw");
      local_c828 = 0x40000;
      FUN_140054de0(local_a088,L"beefRaw");
      local_c828 = 0xc0000;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_a088,local_a068,0x3f100000);
      FUN_140054de0(local_a0a8,L"beefRaw");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a0a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a0a8);
      thunk_FUN_140055150(local_a088);
      thunk_FUN_140055150(local_a068);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_a008,L"beefCooked");
      local_c828 = 0x100000;
      FUN_140054de0(local_a028,L"beefCooked");
      local_c828 = 0x300000;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_a028,local_a008,0x3f200000);
      FUN_140054de0(local_a048,L"beefCooked");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_a048);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_a048);
      thunk_FUN_140055150(local_a028);
      thunk_FUN_140055150(local_a008);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9fa8,L"enderPearl");
      local_c828 = 0x400000;
      FUN_140054de0(local_9fc8,L"enderPearl");
      local_c828 = 0xc00000;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_9fc8,local_9fa8,0x3f300000);
      FUN_140054de0(local_9fe8,L"enderPearl");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9fe8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9fe8);
      thunk_FUN_140055150(local_9fc8);
      thunk_FUN_140055150(local_9fa8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9f48,L"blazeRod");
      local_c828 = 0x1000000;
      FUN_140054de0(local_9f68,L"blazeRod");
      local_c828 = 0x3000000;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_9f68,local_9f48,0x3f400000);
      FUN_140054de0(local_9f88,L"blazeRod");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9f88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9f88);
      thunk_FUN_140055150(local_9f68);
      thunk_FUN_140055150(local_9f48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9ee8,L"melon");
      local_c828 = 0x4000000;
      FUN_140054de0(local_9f08,L"melon");
      local_c828 = 0xc000000;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_9f08,local_9ee8,0x3f500000);
      FUN_140054de0(local_9f28,L"melon");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9f28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9f28);
      thunk_FUN_140055150(local_9f08);
      thunk_FUN_140055150(local_9ee8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9e88,L"dyePowder_green");
      local_c828 = 0x10000000;
      FUN_140054de0(local_9ea8,L"dyePowder_green");
      local_c828 = 0x30000000;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_9ea8,local_9e88,0x3f600000);
      FUN_140054de0(local_9ec8,L"dyePowder_green");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9ec8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9ec8);
      thunk_FUN_140055150(local_9ea8);
      thunk_FUN_140055150(local_9e88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9e28,L"dyePowder_lime");
      local_c828 = 0x40000000;
      FUN_140054de0(local_9e48,L"dyePowder_lime");
      local_c828 = 0xc0000000;
      local_c838 = 0x3ee00000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3ec00000;
      uVar5 = FUN_14019d730(uVar5,local_9e48,local_9e28,0x3f700000);
      FUN_140054de0(local_9e68,L"dyePowder_lime");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9e68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9e68);
      thunk_FUN_140055150(local_9e48);
      thunk_FUN_140055150(local_9e28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9dc8,L"hatchetWood");
      local_c828 = 1;
      FUN_140054de0(local_9de8,L"hatchetWood");
      local_c828 = 3;
      local_c838 = 0x3f000000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_9de8,local_9dc8,0);
      FUN_140054de0(local_9e08,L"hatchetWood");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9e08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9e08);
      thunk_FUN_140055150(local_9de8);
      thunk_FUN_140055150(local_9dc8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9d68,L"hatchetStone");
      local_c828 = 4;
      FUN_140054de0(local_9d88,L"hatchetStone");
      local_c828 = 0xc;
      local_c838 = 0x3f000000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_9d88,local_9d68,0x3d800000);
      FUN_140054de0(local_9da8,L"hatchetStone");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9da8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9da8);
      thunk_FUN_140055150(local_9d88);
      thunk_FUN_140055150(local_9d68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9d08,L"hatchetIron");
      local_c828 = 0x10;
      FUN_140054de0(local_9d28,L"hatchetIron");
      local_c828 = 0x30;
      local_c838 = 0x3f000000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_9d28,local_9d08,0x3e000000);
      FUN_140054de0(local_9d48,L"hatchetIron");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9d48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9d48);
      thunk_FUN_140055150(local_9d28);
      thunk_FUN_140055150(local_9d08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9ca8,L"hatchetDiamond");
      local_c828 = 0x40;
      FUN_140054de0(local_9cc8,L"hatchetDiamond");
      local_c828 = 0xc0;
      local_c838 = 0x3f000000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_9cc8,local_9ca8,0x3e400000);
      FUN_140054de0(local_9ce8,L"hatchetDiamond");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9ce8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9ce8);
      thunk_FUN_140055150(local_9cc8);
      thunk_FUN_140055150(local_9ca8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9c48,L"hatchetGold");
      local_c828 = 0x100;
      FUN_140054de0(local_9c68,L"hatchetGold");
      local_c828 = 0x300;
      local_c838 = 0x3f000000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_9c68,local_9c48,0x3e800000);
      FUN_140054de0(local_9c88,L"hatchetGold");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9c88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9c88);
      thunk_FUN_140055150(local_9c68);
      thunk_FUN_140055150(local_9c48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9be8,L"bow_pull_1");
      local_c828 = 0x400;
      FUN_140054de0(local_9c08,L"bow_pull_1");
      local_c828 = 0xc00;
      local_c838 = 0x3f000000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_9c08,local_9be8,0x3ea00000);
      FUN_140054de0(local_9c28,L"bow_pull_1");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9c28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9c28);
      thunk_FUN_140055150(local_9c08);
      thunk_FUN_140055150(local_9be8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9b88,L"potatoBaked");
      local_c828 = 0x1000;
      FUN_140054de0(local_9ba8,L"potatoBaked");
      local_c828 = 0x3000;
      local_c838 = 0x3f000000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_9ba8,local_9b88,0x3ec00000);
      FUN_140054de0(local_9bc8,L"potatoBaked");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9bc8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9bc8);
      thunk_FUN_140055150(local_9ba8);
      thunk_FUN_140055150(local_9b88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9b28,L"potato");
      local_c828 = 0x4000;
      FUN_140054de0(local_9b48,L"potato");
      local_c828 = 0xc000;
      local_c838 = 0x3f000000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_9b48,local_9b28,0x3ee00000);
      FUN_140054de0(local_9b68,L"potato");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9b68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9b68);
      thunk_FUN_140055150(local_9b48);
      thunk_FUN_140055150(local_9b28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9ac8,L"carrots");
      local_c828 = 0x10000;
      FUN_140054de0(local_9ae8,L"carrots");
      local_c828 = 0x30000;
      local_c838 = 0x3f000000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_9ae8,local_9ac8,0x3f000000);
      FUN_140054de0(local_9b08,L"carrots");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9b08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9b08);
      thunk_FUN_140055150(local_9ae8);
      thunk_FUN_140055150(local_9ac8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9a68,L"chickenRaw");
      local_c828 = 0x40000;
      FUN_140054de0(local_9a88,L"chickenRaw");
      local_c828 = 0xc0000;
      local_c838 = 0x3f000000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_9a88,local_9a68,0x3f100000);
      FUN_140054de0(local_9aa8,L"chickenRaw");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9aa8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9aa8);
      thunk_FUN_140055150(local_9a88);
      thunk_FUN_140055150(local_9a68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9a08,L"chickenCooked");
      local_c828 = 0x100000;
      FUN_140054de0(local_9a28,L"chickenCooked");
      local_c828 = 0x300000;
      local_c838 = 0x3f000000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_9a28,local_9a08,0x3f200000);
      FUN_140054de0(local_9a48,L"chickenCooked");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9a48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9a48);
      thunk_FUN_140055150(local_9a28);
      thunk_FUN_140055150(local_9a08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_99a8,L"ghastTear");
      local_c828 = 0x400000;
      FUN_140054de0(local_99c8,L"ghastTear");
      local_c828 = 0xc00000;
      local_c838 = 0x3f000000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_99c8,local_99a8,0x3f300000);
      FUN_140054de0(local_99e8,L"ghastTear");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_99e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_99e8);
      thunk_FUN_140055150(local_99c8);
      thunk_FUN_140055150(local_99a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9948,L"goldNugget");
      local_c828 = 0x1000000;
      FUN_140054de0(local_9968,L"goldNugget");
      local_c828 = 0x3000000;
      local_c838 = 0x3f000000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_9968,local_9948,0x3f400000);
      FUN_140054de0(local_9988,L"goldNugget");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9988);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9988);
      thunk_FUN_140055150(local_9968);
      thunk_FUN_140055150(local_9948);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_98e8,L"netherStalkSeeds");
      local_c828 = 0x4000000;
      FUN_140054de0(local_9908,L"netherStalkSeeds");
      local_c828 = 0xc000000;
      local_c838 = 0x3f000000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_9908,local_98e8,0x3f500000);
      FUN_140054de0(local_9928,L"netherStalkSeeds");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9928);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9928);
      thunk_FUN_140055150(local_9908);
      thunk_FUN_140055150(local_98e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9888,L"dyePowder_brown");
      local_c828 = 0x10000000;
      FUN_140054de0(local_98a8,L"dyePowder_brown");
      local_c828 = 0x30000000;
      local_c838 = 0x3f000000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_98a8,local_9888,0x3f600000);
      FUN_140054de0(local_98c8,L"dyePowder_brown");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_98c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_98c8);
      thunk_FUN_140055150(local_98a8);
      thunk_FUN_140055150(local_9888);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9828,L"dyePowder_yellow");
      local_c828 = 0x40000000;
      FUN_140054de0(local_9848,L"dyePowder_yellow");
      local_c828 = 0xc0000000;
      local_c838 = 0x3f000000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3ee00000;
      uVar5 = FUN_14019d730(uVar5,local_9848,local_9828,0x3f700000);
      FUN_140054de0(local_9868,L"dyePowder_yellow");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9868);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9868);
      thunk_FUN_140055150(local_9848);
      thunk_FUN_140055150(local_9828);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_97c8,L"hoeWood");
      local_c828 = 1;
      FUN_140054de0(local_97e8,L"hoeWood");
      local_c828 = 3;
      local_c838 = 0x3f100000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_97e8,local_97c8,0);
      FUN_140054de0(local_9808,L"hoeWood");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9808);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9808);
      thunk_FUN_140055150(local_97e8);
      thunk_FUN_140055150(local_97c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9768,L"hoeStone");
      local_c828 = 4;
      FUN_140054de0(local_9788,L"hoeStone");
      local_c828 = 0xc;
      local_c838 = 0x3f100000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_9788,local_9768,0x3d800000);
      FUN_140054de0(local_97a8,L"hoeStone");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_97a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_97a8);
      thunk_FUN_140055150(local_9788);
      thunk_FUN_140055150(local_9768);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9708,L"hoeIron");
      local_c828 = 0x10;
      FUN_140054de0(local_9728,L"hoeIron");
      local_c828 = 0x30;
      local_c838 = 0x3f100000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_9728,local_9708,0x3e000000);
      FUN_140054de0(local_9748,L"hoeIron");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9748);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9748);
      thunk_FUN_140055150(local_9728);
      thunk_FUN_140055150(local_9708);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_96a8,L"hoeDiamond");
      local_c828 = 0x40;
      FUN_140054de0(local_96c8,L"hoeDiamond");
      local_c828 = 0xc0;
      local_c838 = 0x3f100000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_96c8,local_96a8,0x3e400000);
      FUN_140054de0(local_96e8,L"hoeDiamond");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_96e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_96e8);
      thunk_FUN_140055150(local_96c8);
      thunk_FUN_140055150(local_96a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9648,L"hoeGold");
      local_c828 = 0x100;
      FUN_140054de0(local_9668,L"hoeGold");
      local_c828 = 0x300;
      local_c838 = 0x3f100000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_9668,local_9648,0x3e800000);
      FUN_140054de0(local_9688,L"hoeGold");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9688);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9688);
      thunk_FUN_140055150(local_9668);
      thunk_FUN_140055150(local_9648);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_95e8,L"bow_pull_2");
      local_c828 = 0x400;
      FUN_140054de0(local_9608,L"bow_pull_2");
      local_c828 = 0xc00;
      local_c838 = 0x3f100000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_9608,local_95e8,0x3ea00000);
      FUN_140054de0(local_9628,L"bow_pull_2");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9628);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9628);
      thunk_FUN_140055150(local_9608);
      thunk_FUN_140055150(local_95e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9588,L"potatoPoisonous");
      local_c828 = 0x1000;
      FUN_140054de0(local_95a8,L"potatoPoisonous");
      local_c828 = 0x3000;
      local_c838 = 0x3f100000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_95a8,local_9588,0x3ec00000);
      FUN_140054de0(local_95c8,L"potatoPoisonous");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_95c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_95c8);
      thunk_FUN_140055150(local_95a8);
      thunk_FUN_140055150(local_9588);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9528,L"minecart");
      local_c828 = 0x4000;
      FUN_140054de0(local_9548,L"minecart");
      local_c828 = 0xc000;
      local_c838 = 0x3f100000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_9548,local_9528,0x3ee00000);
      FUN_140054de0(local_9568,L"minecart");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9568);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9568);
      thunk_FUN_140055150(local_9548);
      thunk_FUN_140055150(local_9528);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_94c8,L"boat");
      local_c828 = 0x10000;
      FUN_140054de0(local_94e8,L"boat");
      local_c828 = 0x30000;
      local_c838 = 0x3f100000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_94e8,local_94c8,0x3f000000);
      FUN_140054de0(local_9508,L"boat");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9508);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9508);
      thunk_FUN_140055150(local_94e8);
      thunk_FUN_140055150(local_94c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9468,L"speckledMelon");
      local_c828 = 0x40000;
      FUN_140054de0(local_9488,L"speckledMelon");
      local_c828 = 0xc0000;
      local_c838 = 0x3f100000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_9488,local_9468,0x3f100000);
      FUN_140054de0(local_94a8,L"speckledMelon");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_94a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_94a8);
      thunk_FUN_140055150(local_9488);
      thunk_FUN_140055150(local_9468);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9408,L"fermentedSpiderEye");
      local_c828 = 0x100000;
      FUN_140054de0(local_9428,L"fermentedSpiderEye");
      local_c828 = 0x300000;
      local_c838 = 0x3f100000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_9428,local_9408,0x3f200000);
      FUN_140054de0(local_9448,L"fermentedSpiderEye");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9448);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9448);
      thunk_FUN_140055150(local_9428);
      thunk_FUN_140055150(local_9408);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_93a8,L"spiderEye");
      local_c828 = 0x400000;
      FUN_140054de0(local_93c8,L"spiderEye");
      local_c828 = 0xc00000;
      local_c838 = 0x3f100000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_93c8,local_93a8,0x3f300000);
      FUN_140054de0(local_93e8,L"spiderEye");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_93e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_93e8);
      thunk_FUN_140055150(local_93c8);
      thunk_FUN_140055150(local_93a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9348,L"potion");
      local_c828 = 0x1000000;
      FUN_140054de0(local_9368,L"potion");
      local_c828 = 0x3000000;
      local_c838 = 0x3f100000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_9368,local_9348,0x3f400000);
      FUN_140054de0(local_9388,L"potion");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9388);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9388);
      thunk_FUN_140055150(local_9368);
      thunk_FUN_140055150(local_9348);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_92e8,L"glassBottle");
      local_c828 = 0x4000000;
      FUN_140054de0(local_9308,L"glassBottle");
      local_c828 = 0xc000000;
      local_c838 = 0x3f100000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_9308,local_92e8,0x3f400000);
      FUN_140054de0(local_9328,L"glassBottle");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9328);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9328);
      thunk_FUN_140055150(local_9308);
      thunk_FUN_140055150(local_92e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9288,L"potion_contents");
      local_c828 = 0x10000000;
      FUN_140054de0(local_92a8,L"potion_contents");
      local_c828 = 0x30000000;
      local_c838 = 0x3f100000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_92a8,local_9288,0x3f500000);
      FUN_140054de0(local_92c8,L"potion_contents");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_92c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_92c8);
      thunk_FUN_140055150(local_92a8);
      thunk_FUN_140055150(local_9288);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9228,L"dyePowder_blue");
      local_c828 = 0x40000000;
      FUN_140054de0(local_9248,L"dyePowder_blue");
      local_c828 = 0xc0000000;
      local_c838 = 0x3f100000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_9248,local_9228,0x3f600000);
      FUN_140054de0(local_9268,L"dyePowder_blue");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9268);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9268);
      thunk_FUN_140055150(local_9248);
      thunk_FUN_140055150(local_9228);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_91c8,L"dyePowder_light_blue");
      local_c828 = 1;
      FUN_140054de0(local_91e8,L"dyePowder_light_blue");
      local_c828 = 3;
      local_c838 = 0x3f100000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3f000000;
      uVar5 = FUN_14019d730(uVar5,local_91e8,local_91c8,0x3f700000);
      FUN_140054de0(local_9208,L"dyePowder_light_blue");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9208);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9208);
      thunk_FUN_140055150(local_91e8);
      thunk_FUN_140055150(local_91c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9168,L"helmetCloth_overlay");
      local_c828 = 4;
      FUN_140054de0(local_9188,L"helmetCloth_overlay");
      local_c828 = 0xc;
      local_c838 = 0x3f200000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_9188,local_9168,0);
      FUN_140054de0(local_91a8,L"helmetCloth_overlay");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_91a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_91a8);
      thunk_FUN_140055150(local_9188);
      thunk_FUN_140055150(local_9168);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9108,L"iron_horse_armor");
      local_c828 = 0x10;
      FUN_140054de0(local_9128,L"iron_horse_armor");
      local_c828 = 0x30;
      local_c838 = 0x3f200000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_9128,local_9108,0x3e000000);
      FUN_140054de0(local_9148,L"iron_horse_armor");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9148);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9148);
      thunk_FUN_140055150(local_9128);
      thunk_FUN_140055150(local_9108);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_90a8,L"diamond_horse_armor");
      local_c828 = 0x40;
      FUN_140054de0(local_90c8,L"diamond_horse_armor");
      local_c828 = 0xc0;
      local_c838 = 0x3f200000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_90c8,local_90a8,0x3e400000);
      FUN_140054de0(local_90e8,L"diamond_horse_armor");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_90e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_90e8);
      thunk_FUN_140055150(local_90c8);
      thunk_FUN_140055150(local_90a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_9048,L"gold_horse_armor");
      local_c828 = 0x100;
      FUN_140054de0(local_9068,L"gold_horse_armor");
      local_c828 = 0x300;
      local_c838 = 0x3f200000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_9068,local_9048,0x3e800000);
      FUN_140054de0(local_9088,L"gold_horse_armor");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9088);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9088);
      thunk_FUN_140055150(local_9068);
      thunk_FUN_140055150(local_9048);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8fe8,L"comparator");
      local_c828 = 0x400;
      FUN_140054de0(local_9008,L"comparator");
      local_c828 = 0xc00;
      local_c838 = 0x3f200000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_9008,local_8fe8,0x3ea00000);
      FUN_140054de0(local_9028,L"comparator");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_9028);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_9028);
      thunk_FUN_140055150(local_9008);
      thunk_FUN_140055150(local_8fe8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8f88,L"carrotGolden");
      local_c828 = 0x1000;
      FUN_140054de0(local_8fa8,L"carrotGolden");
      local_c828 = 0x3000;
      local_c838 = 0x3f200000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_8fa8,local_8f88,0x3ec00000);
      FUN_140054de0(local_8fc8,L"carrotGolden");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8fc8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8fc8);
      thunk_FUN_140055150(local_8fa8);
      thunk_FUN_140055150(local_8f88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8f28,L"minecart_chest");
      local_c828 = 0x4000;
      FUN_140054de0(local_8f48,L"minecart_chest");
      local_c828 = 0xc000;
      local_c838 = 0x3f200000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_8f48,local_8f28,0x3ee00000);
      FUN_140054de0(local_8f68,L"minecart_chest");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8f68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8f68);
      thunk_FUN_140055150(local_8f48);
      thunk_FUN_140055150(local_8f28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8ec8,L"pumpkinPie");
      local_c828 = 0x10000;
      FUN_140054de0(local_8ee8,L"pumpkinPie");
      local_c828 = 0x30000;
      local_c838 = 0x3f200000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_8ee8,local_8ec8,0x3f000000);
      FUN_140054de0(local_8f08,L"pumpkinPie");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8f08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8f08);
      thunk_FUN_140055150(local_8ee8);
      thunk_FUN_140055150(local_8ec8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8e68,L"monsterPlacer");
      local_c828 = 0x40000;
      FUN_140054de0(local_8e88,L"monsterPlacer");
      local_c828 = 0xc0000;
      local_c838 = 0x3f200000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_8e88,local_8e68,0x3f100000);
      FUN_140054de0(local_8ea8,L"monsterPlacer");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8ea8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8ea8);
      thunk_FUN_140055150(local_8e88);
      thunk_FUN_140055150(local_8e68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8e08,L"potion_splash");
      local_c828 = 0x100000;
      FUN_140054de0(local_8e28,L"potion_splash");
      local_c828 = 0x300000;
      local_c838 = 0x3f200000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_8e28,local_8e08,0x3f200000);
      FUN_140054de0(local_8e48,L"potion_splash");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8e48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8e48);
      thunk_FUN_140055150(local_8e28);
      thunk_FUN_140055150(local_8e08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8da8,L"eyeOfEnder");
      local_c828 = 0x400000;
      FUN_140054de0(local_8dc8,L"eyeOfEnder");
      local_c828 = 0xc00000;
      local_c838 = 0x3f200000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_8dc8,local_8da8,0x3f300000);
      FUN_140054de0(local_8de8,L"eyeOfEnder");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8de8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8de8);
      thunk_FUN_140055150(local_8dc8);
      thunk_FUN_140055150(local_8da8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8d48,L"cauldron");
      local_c828 = 0x1000000;
      FUN_140054de0(local_8d68,L"cauldron");
      local_c828 = 0x3000000;
      local_c838 = 0x3f200000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_8d68,local_8d48,0x3f400000);
      FUN_140054de0(local_8d88,L"cauldron");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8d88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8d88);
      thunk_FUN_140055150(local_8d68);
      thunk_FUN_140055150(local_8d48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8ce8,L"blazePowder");
      local_c828 = 0x4000000;
      FUN_140054de0(local_8d08,L"blazePowder");
      local_c828 = 0xc000000;
      local_c838 = 0x3f200000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_8d08,local_8ce8,0x3f500000);
      FUN_140054de0(local_8d28,L"blazePowder");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8d28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8d28);
      thunk_FUN_140055150(local_8d08);
      thunk_FUN_140055150(local_8ce8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8c88,L"dyePowder_purple");
      local_c828 = 0x10000000;
      FUN_140054de0(local_8ca8,L"dyePowder_purple");
      local_c828 = 0x30000000;
      local_c838 = 0x3f200000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_8ca8,local_8c88,0x3f600000);
      FUN_140054de0(local_8cc8,L"dyePowder_purple");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8cc8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8cc8);
      thunk_FUN_140055150(local_8ca8);
      thunk_FUN_140055150(local_8c88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8c28,L"dyePowder_magenta");
      local_c828 = 0x40000000;
      FUN_140054de0(local_8c48,L"dyePowder_magenta");
      local_c828 = 0xc0000000;
      local_c838 = 0x3f200000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3f100000;
      uVar5 = FUN_14019d730(uVar5,local_8c48,local_8c28,0x3f700000);
      FUN_140054de0(local_8c68,L"dyePowder_magenta");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8c68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8c68);
      thunk_FUN_140055150(local_8c48);
      thunk_FUN_140055150(local_8c28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8bc8,L"chestplateCloth_overlay");
      local_c828 = 1;
      FUN_140054de0(local_8be8,L"chestplateCloth_overlay");
      local_c828 = 3;
      local_c838 = 0x3f300000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3f200000;
      uVar5 = FUN_14019d730(uVar5,local_8be8,local_8bc8,0);
      FUN_140054de0(local_8c08,L"chestplateCloth_overlay");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8c08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8c08);
      thunk_FUN_140055150(local_8be8);
      thunk_FUN_140055150(local_8bc8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8b68,L"name_tag");
      local_c828 = 4;
      FUN_140054de0(local_8b88,L"name_tag");
      local_c828 = 0xc;
      local_c838 = 0x3f300000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3f200000;
      uVar5 = FUN_14019d730(uVar5,local_8b88,local_8b68,0x3e400000);
      FUN_140054de0(local_8ba8,L"name_tag");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8ba8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8ba8);
      thunk_FUN_140055150(local_8b88);
      thunk_FUN_140055150(local_8b68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8b08,L"lead");
      local_c828 = 0x10;
      FUN_140054de0(local_8b28,L"lead");
      local_c828 = 0x30;
      local_c838 = 0x3f300000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3f200000;
      uVar5 = FUN_14019d730(uVar5,local_8b28,local_8b08,0x3e800000);
      FUN_140054de0(local_8b48,L"lead");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8b48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8b48);
      thunk_FUN_140055150(local_8b28);
      thunk_FUN_140055150(local_8b08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8aa8,L"netherbrick");
      local_c828 = 0x40;
      FUN_140054de0(local_8ac8,L"netherbrick");
      local_c828 = 0xc0;
      local_c838 = 0x3f300000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3f200000;
      uVar5 = FUN_14019d730(uVar5,local_8ac8,local_8aa8,0x3ea00000);
      FUN_140054de0(local_8ae8,L"netherbrick");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8ae8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8ae8);
      thunk_FUN_140055150(local_8ac8);
      thunk_FUN_140055150(local_8aa8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8a48,L"minecart_furnace");
      local_c828 = 0x100;
      FUN_140054de0(local_8a68,L"minecart_furnace");
      local_c828 = 0x300;
      local_c838 = 0x3f300000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3f200000;
      uVar5 = FUN_14019d730(uVar5,local_8a68,local_8a48,0x3ee00000);
      FUN_140054de0(local_8a88,L"minecart_furnace");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8a88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8a88);
      thunk_FUN_140055150(local_8a68);
      thunk_FUN_140055150(local_8a48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_89e8,L"charcoal");
      local_c828 = 0x400;
      FUN_140054de0(local_8a08,L"charcoal");
      local_c828 = 0xc00;
      local_c838 = 0x3f300000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3f200000;
      uVar5 = FUN_14019d730(uVar5,local_8a08,local_89e8,0x3f000000);
      FUN_140054de0(local_8a28,L"charcoal");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8a28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8a28);
      thunk_FUN_140055150(local_8a08);
      thunk_FUN_140055150(local_89e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8988,L"monsterPlacer_overlay");
      local_c828 = 0x1000;
      FUN_140054de0(local_89a8,L"monsterPlacer_overlay");
      local_c828 = 0x3000;
      local_c838 = 0x3f300000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3f200000;
      uVar5 = FUN_14019d730(uVar5,local_89a8,local_8988,0x3f100000);
      FUN_140054de0(local_89c8,L"monsterPlacer_overlay");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_89c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_89c8);
      thunk_FUN_140055150(local_89a8);
      thunk_FUN_140055150(local_8988);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8928,L"ruby");
      local_c828 = 0x4000;
      FUN_140054de0(local_8948,L"ruby");
      local_c828 = 0xc000;
      local_c838 = 0x3f300000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3f200000;
      uVar5 = FUN_14019d730(uVar5,local_8948,local_8928,0x3f200000);
      FUN_140054de0(local_8968,L"ruby");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8968);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8968);
      thunk_FUN_140055150(local_8948);
      thunk_FUN_140055150(local_8928);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_88c8,L"expBottle");
      local_c828 = 0x10000;
      FUN_140054de0(local_88e8,L"expBottle");
      local_c828 = 0x30000;
      local_c838 = 0x3f300000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3f200000;
      uVar5 = FUN_14019d730(uVar5,local_88e8,local_88c8,0x3f300000);
      FUN_140054de0(local_8908,L"expBottle");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8908);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8908);
      thunk_FUN_140055150(local_88e8);
      thunk_FUN_140055150(local_88c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8868,L"brewingStand");
      local_c828 = 0x40000;
      FUN_140054de0(local_8888,L"brewingStand");
      local_c828 = 0xc0000;
      local_c838 = 0x3f300000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3f200000;
      uVar5 = FUN_14019d730(uVar5,local_8888,local_8868,0x3f400000);
      FUN_140054de0(local_88a8,L"brewingStand");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_88a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_88a8);
      thunk_FUN_140055150(local_8888);
      thunk_FUN_140055150(local_8868);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8808,L"magmaCream");
      local_c828 = 0x100000;
      FUN_140054de0(local_8828,L"magmaCream");
      local_c828 = 0x300000;
      local_c838 = 0x3f300000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3f200000;
      uVar5 = FUN_14019d730(uVar5,local_8828,local_8808,0x3f500000);
      FUN_140054de0(local_8848,L"magmaCream");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8848);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8848);
      thunk_FUN_140055150(local_8828);
      thunk_FUN_140055150(local_8808);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_87a8,L"dyePowder_cyan");
      local_c828 = 0x400000;
      FUN_140054de0(local_87c8,L"dyePowder_cyan");
      local_c828 = 0xc00000;
      local_c838 = 0x3f300000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3f200000;
      uVar5 = FUN_14019d730(uVar5,local_87c8,local_87a8,0x3f600000);
      FUN_140054de0(local_87e8,L"dyePowder_cyan");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_87e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_87e8);
      thunk_FUN_140055150(local_87c8);
      thunk_FUN_140055150(local_87a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8748,L"dyePowder_orange");
      local_c828 = 0x1000000;
      FUN_140054de0(local_8768,L"dyePowder_orange");
      local_c828 = 0x3000000;
      local_c838 = 0x3f300000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3f200000;
      uVar5 = FUN_14019d730(uVar5,local_8768,local_8748,0x3f700000);
      FUN_140054de0(local_8788,L"dyePowder_orange");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8788);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8788);
      thunk_FUN_140055150(local_8768);
      thunk_FUN_140055150(local_8748);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_86e8,L"leggingsCloth_overlay");
      local_c828 = 0x4000000;
      FUN_140054de0(local_8708,L"leggingsCloth_overlay");
      local_c828 = 0xc000000;
      local_c838 = 0x3f400000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3f300000;
      uVar5 = FUN_14019d730(uVar5,local_8708,local_86e8,0);
      FUN_140054de0(local_8728,L"leggingsCloth_overlay");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8728);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8728);
      thunk_FUN_140055150(local_8708);
      thunk_FUN_140055150(local_86e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8688,L"minecart_hopper");
      local_c828 = 0x10000000;
      FUN_140054de0(local_86a8,L"minecart_hopper");
      local_c828 = 0x30000000;
      local_c838 = 0x3f400000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3f300000;
      uVar5 = FUN_14019d730(uVar5,local_86a8,local_8688,0x3ee00000);
      FUN_140054de0(local_86c8,L"minecart_hopper");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_86c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_86c8);
      thunk_FUN_140055150(local_86a8);
      thunk_FUN_140055150(local_8688);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8628,L"hopper");
      local_c828 = 0x40000000;
      FUN_140054de0(local_8648,L"hopper");
      local_c828 = 0xc0000000;
      local_c838 = 0x3f400000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3f300000;
      uVar5 = FUN_14019d730(uVar5,local_8648,local_8628,0x3f000000);
      FUN_140054de0(local_8668,L"hopper");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8668);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8668);
      thunk_FUN_140055150(local_8648);
      thunk_FUN_140055150(local_8628);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_85c8,L"nether_star");
      local_c828 = 1;
      FUN_140054de0(local_85e8,L"nether_star");
      local_c828 = 3;
      local_c838 = 0x3f400000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3f300000;
      uVar5 = FUN_14019d730(uVar5,local_85e8,local_85c8,0x3f100000);
      FUN_140054de0(local_8608,L"nether_star");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8608);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8608);
      thunk_FUN_140055150(local_85e8);
      thunk_FUN_140055150(local_85c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8568,L"emerald");
      local_c828 = 4;
      FUN_140054de0(local_8588,L"emerald");
      local_c828 = 0xc;
      local_c838 = 0x3f400000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3f300000;
      uVar5 = FUN_14019d730(uVar5,local_8588,local_8568,0x3f200000);
      FUN_140054de0(local_85a8,L"emerald");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_85a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_85a8);
      thunk_FUN_140055150(local_8588);
      thunk_FUN_140055150(local_8568);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8508,L"writingBook");
      local_c828 = 0x10;
      FUN_140054de0(local_8528,L"writingBook");
      local_c828 = 0x30;
      local_c838 = 0x3f400000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3f300000;
      uVar5 = FUN_14019d730(uVar5,local_8528,local_8508,0x3f300000);
      FUN_140054de0(local_8548,L"writingBook");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8548);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8548);
      thunk_FUN_140055150(local_8528);
      thunk_FUN_140055150(local_8508);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_84a8,L"writtenBook");
      local_c828 = 0x40;
      FUN_140054de0(local_84c8,L"writtenBook");
      local_c828 = 0xc0;
      local_c838 = 0x3f400000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3f300000;
      uVar5 = FUN_14019d730(uVar5,local_84c8,local_84a8,0x3f400000);
      FUN_140054de0(local_84e8,L"writtenBook");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_84e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_84e8);
      thunk_FUN_140055150(local_84c8);
      thunk_FUN_140055150(local_84a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8448,L"flowerPot");
      local_c828 = 0x100;
      FUN_140054de0(local_8468,L"flowerPot");
      local_c828 = 0x300;
      local_c838 = 0x3f400000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3f300000;
      uVar5 = FUN_14019d730(uVar5,local_8468,local_8448,0x3f500000);
      FUN_140054de0(local_8488,L"flowerPot");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8488);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8488);
      thunk_FUN_140055150(local_8468);
      thunk_FUN_140055150(local_8448);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_83e8,L"dyePowder_silver");
      local_c828 = 0x400;
      FUN_140054de0(local_8408,L"dyePowder_silver");
      local_c828 = 0xc00;
      local_c838 = 0x3f400000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3f300000;
      uVar5 = FUN_14019d730(uVar5,local_8408,local_83e8,0x3f600000);
      FUN_140054de0(local_8428,L"dyePowder_silver");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8428);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8428);
      thunk_FUN_140055150(local_8408);
      thunk_FUN_140055150(local_83e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8388,L"dyePowder_white");
      local_c828 = 0x1000;
      FUN_140054de0(local_83a8,L"dyePowder_white");
      local_c828 = 0x3000;
      local_c838 = 0x3f400000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3f300000;
      uVar5 = FUN_14019d730(uVar5,local_83a8,local_8388,0x3f700000);
      FUN_140054de0(local_83c8,L"dyePowder_white");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_83c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_83c8);
      thunk_FUN_140055150(local_83a8);
      thunk_FUN_140055150(local_8388);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8328,L"bootsCloth_overlay");
      local_c828 = 0x4000;
      FUN_140054de0(local_8348,L"bootsCloth_overlay");
      local_c828 = 0xc000;
      local_c838 = 0x3f500000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3f400000;
      uVar5 = FUN_14019d730(uVar5,local_8348,local_8328,0);
      FUN_140054de0(local_8368,L"bootsCloth_overlay");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8368);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8368);
      thunk_FUN_140055150(local_8348);
      thunk_FUN_140055150(local_8328);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_82c8,L"minecart_tnt");
      local_c828 = 0x10000;
      FUN_140054de0(local_82e8,L"minecart_tnt");
      local_c828 = 0x30000;
      local_c838 = 0x3f500000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3f400000;
      uVar5 = FUN_14019d730(uVar5,local_82e8,local_82c8,0x3ee00000);
      FUN_140054de0(local_8308,L"minecart_tnt");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8308);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8308);
      thunk_FUN_140055150(local_82e8);
      thunk_FUN_140055150(local_82c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8268,L"fireworks");
      local_c828 = 0x40000;
      FUN_140054de0(local_8288,L"fireworks");
      local_c828 = 0xc0000;
      local_c838 = 0x3f500000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3f400000;
      uVar5 = FUN_14019d730(uVar5,local_8288,local_8268,0x3f100000);
      FUN_140054de0(local_82a8,L"fireworks");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_82a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_82a8);
      thunk_FUN_140055150(local_8288);
      thunk_FUN_140055150(local_8268);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8208,L"fireworks_charge");
      local_c828 = 0x100000;
      FUN_140054de0(local_8228,L"fireworks_charge");
      local_c828 = 0x300000;
      local_c838 = 0x3f500000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3f400000;
      uVar5 = FUN_14019d730(uVar5,local_8228,local_8208,0x3f200000);
      FUN_140054de0(local_8248,L"fireworks_charge");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8248);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8248);
      thunk_FUN_140055150(local_8228);
      thunk_FUN_140055150(local_8208);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_81a8,L"fireworks_charge_overlay");
      local_c828 = 0x400000;
      FUN_140054de0(local_81c8,L"fireworks_charge_overlay");
      local_c828 = 0xc00000;
      local_c838 = 0x3f500000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3f400000;
      uVar5 = FUN_14019d730(uVar5,local_81c8,local_81a8,0x3f300000);
      FUN_140054de0(local_81e8,L"fireworks_charge_overlay");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_81e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_81e8);
      thunk_FUN_140055150(local_81c8);
      thunk_FUN_140055150(local_81a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8148,L"netherquartz");
      local_c828 = 0x1000000;
      FUN_140054de0(local_8168,L"netherquartz");
      local_c828 = 0x3000000;
      local_c838 = 0x3f500000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3f400000;
      uVar5 = FUN_14019d730(uVar5,local_8168,local_8148,0x3f400000);
      FUN_140054de0(local_8188,L"netherquartz");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8188);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8188);
      thunk_FUN_140055150(local_8168);
      thunk_FUN_140055150(local_8148);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_80e8,L"map_empty");
      local_c828 = 0x4000000;
      FUN_140054de0(local_8108,L"map_empty");
      local_c828 = 0xc000000;
      local_c838 = 0x3f500000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3f400000;
      uVar5 = FUN_14019d730(uVar5,local_8108,local_80e8,0x3f500000);
      FUN_140054de0(local_8128,L"map_empty");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8128);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8128);
      thunk_FUN_140055150(local_8108);
      thunk_FUN_140055150(local_80e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8088,L"frame");
      local_c828 = 0x10000000;
      FUN_140054de0(local_80a8,L"frame");
      local_c828 = 0x30000000;
      local_c838 = 0x3f500000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3f400000;
      uVar5 = FUN_14019d730(uVar5,local_80a8,local_8088,0x3f600000);
      FUN_140054de0(local_80c8,L"frame");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_80c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_80c8);
      thunk_FUN_140055150(local_80a8);
      thunk_FUN_140055150(local_8088);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_8028,L"enchantedBook");
      local_c828 = 0x40000000;
      FUN_140054de0(local_8048,L"enchantedBook");
      local_c828 = 0xc0000000;
      local_c838 = 0x3f500000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3f400000;
      uVar5 = FUN_14019d730(uVar5,local_8048,local_8028,0x3f700000);
      FUN_140054de0(local_8068,L"enchantedBook");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8068);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8068);
      thunk_FUN_140055150(local_8048);
      thunk_FUN_140055150(local_8028);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7fc8,L"skull_skeleton");
      local_c828 = 1;
      FUN_140054de0(local_7fe8,L"skull_skeleton");
      local_c828 = 3;
      local_c838 = 0x3f700000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3f600000;
      uVar5 = FUN_14019d730(uVar5,local_7fe8,local_7fc8,0);
      FUN_140054de0(local_8008,L"skull_skeleton");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_8008);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_8008);
      thunk_FUN_140055150(local_7fe8);
      thunk_FUN_140055150(local_7fc8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7f68,L"skull_wither");
      local_c828 = 4;
      FUN_140054de0(local_7f88,L"skull_wither");
      local_c828 = 0xc;
      local_c838 = 0x3f700000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3f600000;
      uVar5 = FUN_14019d730(uVar5,local_7f88,local_7f68,0x3d800000);
      FUN_140054de0(local_7fa8,L"skull_wither");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7fa8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7fa8);
      thunk_FUN_140055150(local_7f88);
      thunk_FUN_140055150(local_7f68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7f08,L"skull_zombie");
      local_c828 = 0x10;
      FUN_140054de0(local_7f28,L"skull_zombie");
      local_c828 = 0x30;
      local_c838 = 0x3f700000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3f600000;
      uVar5 = FUN_14019d730(uVar5,local_7f28,local_7f08,0x3e000000);
      FUN_140054de0(local_7f48,L"skull_zombie");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7f48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7f48);
      thunk_FUN_140055150(local_7f28);
      thunk_FUN_140055150(local_7f08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7ea8,L"skull_char");
      local_c828 = 0x40;
      FUN_140054de0(local_7ec8,L"skull_char");
      local_c828 = 0xc0;
      local_c838 = 0x3f700000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3f600000;
      uVar5 = FUN_14019d730(uVar5,local_7ec8,local_7ea8,0x3e400000);
      FUN_140054de0(local_7ee8,L"skull_char");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7ee8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7ee8);
      thunk_FUN_140055150(local_7ec8);
      thunk_FUN_140055150(local_7ea8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7e48,L"skull_creeper");
      local_c828 = 0x100;
      FUN_140054de0(local_7e68,L"skull_creeper");
      local_c828 = 0x300;
      local_c838 = 0x3f700000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3f600000;
      uVar5 = FUN_14019d730(uVar5,local_7e68,local_7e48,0x3e800000);
      FUN_140054de0(local_7e88,L"skull_creeper");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7e88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7e88);
      thunk_FUN_140055150(local_7e68);
      thunk_FUN_140055150(local_7e48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7de8,L"compass");
      local_c828 = 0x400;
      FUN_140054de0(local_7e08,L"compassP0");
      local_c828 = 0xc00;
      local_c838 = 0x3f700000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3f600000;
      uVar5 = FUN_14019d730(uVar5,local_7e08,local_7de8,0x3ee00000);
      FUN_140054de0(local_7e28,L"compassP0");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7e28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7e28);
      thunk_FUN_140055150(local_7e08);
      thunk_FUN_140055150(local_7de8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7d88,L"compass");
      local_c828 = 0x1000;
      FUN_140054de0(local_7da8,L"compassP1");
      local_c828 = 0x3000;
      local_c838 = 0x3f700000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3f600000;
      uVar5 = FUN_14019d730(uVar5,local_7da8,local_7d88,0x3f000000);
      FUN_140054de0(local_7dc8,L"compassP1");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7dc8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7dc8);
      thunk_FUN_140055150(local_7da8);
      thunk_FUN_140055150(local_7d88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7d28,L"compass");
      local_c828 = 0x4000;
      FUN_140054de0(local_7d48,L"compassP2");
      local_c828 = 0xc000;
      local_c838 = 0x3f700000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3f600000;
      uVar5 = FUN_14019d730(uVar5,local_7d48,local_7d28,0x3f100000);
      FUN_140054de0(local_7d68,L"compassP2");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7d68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7d68);
      thunk_FUN_140055150(local_7d48);
      thunk_FUN_140055150(local_7d28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7cc8,L"compass");
      local_c828 = 0x10000;
      FUN_140054de0(local_7ce8,L"compassP3");
      local_c828 = 0x30000;
      local_c838 = 0x3f700000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3f600000;
      uVar5 = FUN_14019d730(uVar5,local_7ce8,local_7cc8,0x3f200000);
      FUN_140054de0(local_7d08,L"compassP3");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7d08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7d08);
      thunk_FUN_140055150(local_7ce8);
      thunk_FUN_140055150(local_7cc8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7c68,L"clock");
      local_c828 = 0x40000;
      FUN_140054de0(local_7c88,L"clockP0");
      local_c828 = 0xc0000;
      local_c838 = 0x3f700000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3f600000;
      uVar5 = FUN_14019d730(uVar5,local_7c88,local_7c68,0x3f300000);
      FUN_140054de0(local_7ca8,L"clockP0");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7ca8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7ca8);
      thunk_FUN_140055150(local_7c88);
      thunk_FUN_140055150(local_7c68);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7c08,L"clock");
      local_c828 = 0x100000;
      FUN_140054de0(local_7c28,L"clockP1");
      local_c828 = 0x300000;
      local_c838 = 0x3f700000;
      local_c840 = 0x3f500000;
      local_c848 = 0x3f600000;
      uVar5 = FUN_14019d730(uVar5,local_7c28,local_7c08,0x3f400000);
      FUN_140054de0(local_7c48,L"clockP1");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7c48);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7c48);
      thunk_FUN_140055150(local_7c28);
      thunk_FUN_140055150(local_7c08);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7ba8,L"clock");
      local_c828 = 0x400000;
      FUN_140054de0(local_7bc8,L"clockP2");
      local_c828 = 0xc00000;
      local_c838 = 0x3f700000;
      local_c840 = 0x3f600000;
      local_c848 = 0x3f600000;
      uVar5 = FUN_14019d730(uVar5,local_7bc8,local_7ba8,0x3f500000);
      FUN_140054de0(local_7be8,L"clockP2");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7be8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7be8);
      thunk_FUN_140055150(local_7bc8);
      thunk_FUN_140055150(local_7ba8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7b48,L"clock");
      local_c828 = 0x1000000;
      FUN_140054de0(local_7b68,L"clockP3");
      local_c828 = 0x3000000;
      local_c838 = 0x3f700000;
      local_c840 = 0x3f700000;
      local_c848 = 0x3f600000;
      uVar5 = FUN_14019d730(uVar5,local_7b68,local_7b48,0x3f600000);
      FUN_140054de0(local_7b88,L"clockP3");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7b88);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7b88);
      thunk_FUN_140055150(local_7b68);
      thunk_FUN_140055150(local_7b48);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7ae8,L"dragonFireball");
      local_c828 = 0x4000000;
      FUN_140054de0(local_7b08,L"dragonFireball");
      local_c828 = 0xc000000;
      local_c838 = 0x3f700000;
      local_c840 = 0x3f800000;
      local_c848 = 0x3f600000;
      uVar5 = FUN_14019d730(uVar5,local_7b08,local_7ae8,0x3f700000);
      FUN_140054de0(local_7b28,L"dragonFireball");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7b28);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7b28);
      thunk_FUN_140055150(local_7b08);
      thunk_FUN_140055150(local_7ae8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7a88,L"record_13");
      local_c828 = 0x10000000;
      FUN_140054de0(local_7aa8,L"record_13");
      local_c828 = 0x30000000;
      local_c838 = 0x3f800000;
      local_c840 = 0x3d800000;
      local_c848 = 0x3f700000;
      uVar5 = FUN_14019d730(uVar5,local_7aa8,local_7a88,0);
      FUN_140054de0(local_7ac8,L"record_13");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7ac8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7ac8);
      thunk_FUN_140055150(local_7aa8);
      thunk_FUN_140055150(local_7a88);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7a28,L"record_cat");
      local_c828 = 0x40000000;
      FUN_140054de0(local_7a48,L"record_cat");
      local_c828 = 0xc0000000;
      local_c838 = 0x3f800000;
      local_c840 = 0x3e000000;
      local_c848 = 0x3f700000;
      uVar5 = FUN_14019d730(uVar5,local_7a48,local_7a28,0x3d800000);
      FUN_140054de0(local_7a68,L"record_cat");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7a68);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7a68);
      thunk_FUN_140055150(local_7a48);
      thunk_FUN_140055150(local_7a28);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_79c8,L"record_blocks");
      local_c828 = 1;
      FUN_140054de0(local_79e8,L"record_blocks");
      local_c828 = 3;
      local_c838 = 0x3f800000;
      local_c840 = 0x3e400000;
      local_c848 = 0x3f700000;
      uVar5 = FUN_14019d730(uVar5,local_79e8,local_79c8,0x3e000000);
      FUN_140054de0(local_7a08,L"record_blocks");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7a08);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7a08);
      thunk_FUN_140055150(local_79e8);
      thunk_FUN_140055150(local_79c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7968,L"record_chirp");
      local_c828 = 4;
      FUN_140054de0(local_7988,L"record_chirp");
      local_c828 = 0xc;
      local_c838 = 0x3f800000;
      local_c840 = 0x3e800000;
      local_c848 = 0x3f700000;
      uVar5 = FUN_14019d730(uVar5,local_7988,local_7968,0x3e400000);
      FUN_140054de0(local_79a8,L"record_chirp");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_79a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_79a8);
      thunk_FUN_140055150(local_7988);
      thunk_FUN_140055150(local_7968);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7908,L"record_far");
      local_c828 = 0x10;
      FUN_140054de0(local_7928,L"record_far");
      local_c828 = 0x30;
      local_c838 = 0x3f800000;
      local_c840 = 0x3ea00000;
      local_c848 = 0x3f700000;
      uVar5 = FUN_14019d730(uVar5,local_7928,local_7908,0x3e800000);
      FUN_140054de0(local_7948,L"record_far");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7948);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7948);
      thunk_FUN_140055150(local_7928);
      thunk_FUN_140055150(local_7908);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_78a8,L"record_mall");
      local_c828 = 0x40;
      FUN_140054de0(local_78c8,L"record_mall");
      local_c828 = 0xc0;
      local_c838 = 0x3f800000;
      local_c840 = 0x3ec00000;
      local_c848 = 0x3f700000;
      uVar5 = FUN_14019d730(uVar5,local_78c8,local_78a8,0x3ea00000);
      FUN_140054de0(local_78e8,L"record_mall");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_78e8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_78e8);
      thunk_FUN_140055150(local_78c8);
      thunk_FUN_140055150(local_78a8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7848,L"record_mellohi");
      local_c828 = 0x100;
      FUN_140054de0(local_7868,L"record_mellohi");
      local_c828 = 0x300;
      local_c838 = 0x3f800000;
      local_c840 = 0x3ee00000;
      local_c848 = 0x3f700000;
      uVar5 = FUN_14019d730(uVar5,local_7868,local_7848,0x3ec00000);
      FUN_140054de0(local_7888,L"record_mellohi");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7888);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7888);
      thunk_FUN_140055150(local_7868);
      thunk_FUN_140055150(local_7848);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_77e8,L"record_stal");
      local_c828 = 0x400;
      FUN_140054de0(local_7808,L"record_stal");
      local_c828 = 0xc00;
      local_c838 = 0x3f800000;
      local_c840 = 0x3f000000;
      local_c848 = 0x3f700000;
      uVar5 = FUN_14019d730(uVar5,local_7808,local_77e8,0x3ee00000);
      FUN_140054de0(local_7828,L"record_stal");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7828);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7828);
      thunk_FUN_140055150(local_7808);
      thunk_FUN_140055150(local_77e8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7788,L"record_strad");
      local_c828 = 0x1000;
      FUN_140054de0(local_77a8,L"record_strad");
      local_c828 = 0x3000;
      local_c838 = 0x3f800000;
      local_c840 = 0x3f100000;
      local_c848 = 0x3f700000;
      uVar5 = FUN_14019d730(uVar5,local_77a8,local_7788,0x3f000000);
      FUN_140054de0(local_77c8,L"record_strad");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_77c8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_77c8);
      thunk_FUN_140055150(local_77a8);
      thunk_FUN_140055150(local_7788);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7728,L"record_ward");
      local_c828 = 0x4000;
      FUN_140054de0(local_7748,L"record_ward");
      local_c828 = 0xc000;
      local_c838 = 0x3f800000;
      local_c840 = 0x3f200000;
      local_c848 = 0x3f700000;
      uVar5 = FUN_14019d730(uVar5,local_7748,local_7728,0x3f100000);
      FUN_140054de0(local_7768,L"record_ward");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7768);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7768);
      thunk_FUN_140055150(local_7748);
      thunk_FUN_140055150(local_7728);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_76c8,L"record_11");
      local_c828 = 0x10000;
      FUN_140054de0(local_76e8,L"record_11");
      local_c828 = 0x30000;
      local_c838 = 0x3f800000;
      local_c840 = 0x3f300000;
      local_c848 = 0x3f700000;
      uVar5 = FUN_14019d730(uVar5,local_76e8,local_76c8,0x3f200000);
      FUN_140054de0(local_7708,L"record_11");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7708);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7708);
      thunk_FUN_140055150(local_76e8);
      thunk_FUN_140055150(local_76c8);
      uVar5 = FUN_140558c80(0x98);
      local_c820 = uVar5;
      FUN_140054de0(local_7668,L"record_where are we now");
      local_c828 = 0x40000;
      FUN_140054de0(local_7688,L"record_where are we now");
      local_c828 = 0xc0000;
      local_c838 = 0x3f800000;
      local_c840 = 0x3f400000;
      local_c848 = 0x3f700000;
      uVar5 = FUN_14019d730(uVar5,local_7688,local_7668,0x3f300000);
      FUN_140054de0(local_76a8,L"record_where are we now");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_76a8);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_76a8);
      thunk_FUN_140055150(local_7688);
      thunk_FUN_140055150(local_7668);
      local_c820 = FUN_140558c80(0xb8);
      uVar5 = FUN_1401a0910(local_c820);
      FUN_140054de0(local_7648,L"clock");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1);
      plVar2 = (longlong *)*puVar6;
      thunk_FUN_140055150(local_7648);
      uVar9 = (**(code **)(*plVar2 + 0x40))(plVar2);
      uVar10 = (**(code **)(*plVar2 + 0x28))(plVar2);
      uVar11 = (**(code **)(*plVar2 + 0x38))(plVar2);
      uVar12 = (**(code **)(*plVar2 + 0x20))(plVar2,0);
      local_c848 = uVar9;
      FUN_14019da10(uVar5,uVar12,uVar11,uVar10);
      thunk_FUN_1401fe000(plVar2,8);
      FUN_140054de0(local_7628,L"clock");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7628);
      local_c820 = FUN_140558c80(0xb8);
      uVar7 = FUN_1401a0b10(local_c820,0,uVar5);
      FUN_140054de0(local_7608,L"clockP0");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1);
      plVar2 = (longlong *)*puVar6;
      thunk_FUN_140055150(local_7608);
      uVar9 = (**(code **)(*plVar2 + 0x40))(plVar2);
      uVar10 = (**(code **)(*plVar2 + 0x28))(plVar2);
      uVar11 = (**(code **)(*plVar2 + 0x38))(plVar2);
      uVar12 = (**(code **)(*plVar2 + 0x20))(plVar2,0);
      local_c848 = uVar9;
      FUN_14019da10(uVar7,uVar12,uVar11,uVar10);
      thunk_FUN_1401fe000(plVar2,8);
      FUN_140054de0(local_75e8,L"clockP0");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_75e8);
      *puVar6 = uVar7;
      thunk_FUN_140055150(local_75e8);
      local_c820 = FUN_140558c80(0xb8);
      uVar7 = FUN_1401a0b10(local_c820,1,uVar5);
      FUN_140054de0(local_75c8,L"clockP1");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1);
      plVar2 = (longlong *)*puVar6;
      thunk_FUN_140055150(local_75c8);
      uVar9 = (**(code **)(*plVar2 + 0x40))(plVar2);
      uVar10 = (**(code **)(*plVar2 + 0x28))(plVar2);
      uVar11 = (**(code **)(*plVar2 + 0x38))(plVar2);
      uVar12 = (**(code **)(*plVar2 + 0x20))(plVar2,0);
      local_c848 = uVar9;
      FUN_14019da10(uVar7,uVar12,uVar11,uVar10);
      thunk_FUN_1401fe000(plVar2,8);
      FUN_140054de0(local_75a8,L"clockP1");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_75a8);
      *puVar6 = uVar7;
      thunk_FUN_140055150(local_75a8);
      local_c820 = FUN_140558c80(0xb8);
      uVar7 = FUN_1401a0b10(local_c820,2,uVar5);
      FUN_140054de0(local_7588,L"clockP2");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1);
      plVar2 = (longlong *)*puVar6;
      thunk_FUN_140055150(local_7588);
      uVar9 = (**(code **)(*plVar2 + 0x40))(plVar2);
      uVar10 = (**(code **)(*plVar2 + 0x28))(plVar2);
      uVar11 = (**(code **)(*plVar2 + 0x38))(plVar2);
      uVar12 = (**(code **)(*plVar2 + 0x20))(plVar2,0);
      local_c848 = uVar9;
      FUN_14019da10(uVar7,uVar12,uVar11,uVar10);
      thunk_FUN_1401fe000(plVar2,8);
      FUN_140054de0(local_7568,L"clockP2");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7568);
      *puVar6 = uVar7;
      thunk_FUN_140055150(local_7568);
      local_c820 = FUN_140558c80(0xb8);
      uVar5 = FUN_1401a0b10(local_c820,3,uVar5);
      FUN_140054de0(local_7548,L"clockP3");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1);
      plVar2 = (longlong *)*puVar6;
      thunk_FUN_140055150(local_7548);
      uVar9 = (**(code **)(*plVar2 + 0x40))(plVar2);
      uVar10 = (**(code **)(*plVar2 + 0x28))(plVar2);
      uVar11 = (**(code **)(*plVar2 + 0x38))(plVar2);
      uVar12 = (**(code **)(*plVar2 + 0x20))(plVar2,0);
      local_c848 = uVar9;
      FUN_14019da10(uVar5,uVar12,uVar11,uVar10);
      thunk_FUN_1401fe000(plVar2,8);
      FUN_140054de0(local_7528,L"clockP3");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7528);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_7528);
      local_c820 = FUN_140558c80(0xb8);
      uVar5 = FUN_1401a1090(local_c820);
      FUN_140054de0(local_7508,L"compass");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1);
      plVar2 = (longlong *)*puVar6;
      thunk_FUN_140055150(local_7508);
      uVar9 = (**(code **)(*plVar2 + 0x40))(plVar2);
      uVar10 = (**(code **)(*plVar2 + 0x28))(plVar2);
      uVar11 = (**(code **)(*plVar2 + 0x38))(plVar2);
      uVar12 = (**(code **)(*plVar2 + 0x20))(plVar2,0);
      local_c848 = uVar9;
      FUN_14019da10(uVar5,uVar12,uVar11,uVar10);
      thunk_FUN_1401fe000(plVar2,8);
      FUN_140054de0(local_74e8,L"compass");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1);
      *puVar6 = uVar5;
      thunk_FUN_140055150(local_74e8);
      local_c820 = FUN_140558c80(0xb8);
      uVar7 = FUN_1401a12a0(local_c820,0,uVar5);
      FUN_140054de0(local_74c8,L"compassP0");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1);
      plVar2 = (longlong *)*puVar6;
      thunk_FUN_140055150(local_74c8);
      uVar9 = (**(code **)(*plVar2 + 0x40))(plVar2);
      uVar10 = (**(code **)(*plVar2 + 0x28))(plVar2);
      uVar11 = (**(code **)(*plVar2 + 0x38))(plVar2);
      uVar12 = (**(code **)(*plVar2 + 0x20))(plVar2,0);
      local_c848 = uVar9;
      FUN_14019da10(uVar7,uVar12,uVar11,uVar10);
      thunk_FUN_1401fe000(plVar2,8);
      FUN_140054de0(local_74a8,L"compassP0");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_74a8);
      *puVar6 = uVar7;
      thunk_FUN_140055150(local_74a8);
      local_c820 = FUN_140558c80(0xb8);
      uVar7 = FUN_1401a12a0(local_c820,1,uVar5);
      FUN_140054de0(local_7488,L"compassP1");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1);
      plVar2 = (longlong *)*puVar6;
      thunk_FUN_140055150(local_7488);
      uVar9 = (**(code **)(*plVar2 + 0x40))(plVar2);
      uVar10 = (**(code **)(*plVar2 + 0x28))(plVar2);
      uVar11 = (**(code **)(*plVar2 + 0x38))(plVar2);
      uVar12 = (**(code **)(*plVar2 + 0x20))(plVar2,0);
      local_c848 = uVar9;
      FUN_14019da10(uVar7,uVar12,uVar11,uVar10);
      thunk_FUN_1401fe000(plVar2,8);
      FUN_140054de0(local_7468,L"compassP1");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7468);
      *puVar6 = uVar7;
      thunk_FUN_140055150(local_7468);
      local_c820 = FUN_140558c80(0xb8);
      uVar7 = FUN_1401a12a0(local_c820,2,uVar5);
      FUN_140054de0(local_7448,L"compassP2");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1);
      plVar2 = (longlong *)*puVar6;
      thunk_FUN_140055150(local_7448);
      uVar9 = (**(code **)(*plVar2 + 0x40))(plVar2);
      uVar10 = (**(code **)(*plVar2 + 0x28))(plVar2);
      uVar11 = (**(code **)(*plVar2 + 0x38))(plVar2);
      uVar12 = (**(code **)(*plVar2 + 0x20))(plVar2,0);
      local_c848 = uVar9;
      FUN_14019da10(uVar7,uVar12,uVar11,uVar10);
      thunk_FUN_1401fe000(plVar2,8);
      FUN_140054de0(local_7428,L"compassP2");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_7428);
      *puVar6 = uVar7;
      thunk_FUN_140055150(local_7428);
      local_c820 = FUN_140558c80(0xb8);
      uVar5 = FUN_1401a12a0(local_c820,3,uVar5);
      FUN_140054de0(local_7408,L"compassP3");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1);
      plVar2 = (longlong *)*puVar6;
      thunk_FUN_140055150(local_7408);
      uVar9 = (**(code **)(*plVar2 + 0x40))(plVar2);
      uVar10 = (**(code **)(*plVar2 + 0x28))(plVar2);
      uVar11 = (**(code **)(*plVar2 + 0x38))(plVar2);
      uVar12 = (**(code **)(*plVar2 + 0x20))(plVar2,0);
      local_c848 = uVar9;
      FUN_14019da10(uVar5,uVar12,uVar11,uVar10);
      thunk_FUN_1401fe000(plVar2,8);
      FUN_140054de0(local_73e8,L"compassP3");
      puVar6 = (undefined8 *)FUN_14019d490(lVar1,local_73e8);
      *puVar6 = uVar5;
      puVar8 = local_73e8;
    }
    thunk_FUN_140055150(puVar8);
  }
  return;
}



// ===== FUN_14019d430 @ 0x14019d430 [input] =====

undefined8 FUN_14019d430(longlong *param_1,longlong *param_2)

{
  return CONCAT71((int7)((ulonglong)*param_2 >> 8),*param_1 != *param_2);
}



// ===== FUN_14019d440 @ 0x14019d440 [input] =====

undefined8 * FUN_14019d440(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}



// ===== FUN_14019d450 @ 0x14019d450 [input] =====

longlong FUN_14019d450(longlong *param_1)

{
  return *param_1 + 0x10;
}



// ===== FUN_14019d460 @ 0x14019d460 [input] =====

bool FUN_14019d460(longlong param_1)

{
  return *(longlong *)(param_1 + 0x10) == 0;
}



// ===== FUN_14019d470 @ 0x14019d470 [input] =====

undefined8 * FUN_14019d470(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 8);
  return param_2;
}



// ===== FUN_14019d480 @ 0x14019d480 [input] =====

undefined8 * FUN_14019d480(longlong param_1,undefined8 *param_2)

{
  *param_2 = **(undefined8 **)(param_1 + 8);
  return param_2;
}



// ===== FUN_14019d490 @ 0x14019d490 [input] =====

longlong FUN_14019d490(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 local_18 [24];
  
  plVar1 = (longlong *)FUN_14019d4b0(param_1,local_18,param_2);
  return *plVar1 + 0x30;
}



// ===== FUN_14019d730 @ 0x14019d730 [input] =====

undefined8 *
FUN_14019d730(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_14019d790();
  *(undefined4 *)((longlong)param_1 + 0x7c) = param_6;
  *(undefined4 *)(param_1 + 0xf) = param_4;
  *param_1 = SimpleIcon::vftable;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_7;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  return param_1;
}



// ===== FUN_14019da10 @ 0x14019da10 [input] =====

void FUN_14019da10(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x84) = param_5;
  *(undefined4 *)(param_1 + 0x78) = param_2;
  *(undefined4 *)(param_1 + 0x7c) = param_4;
  *(undefined4 *)(param_1 + 0x80) = param_3;
  return;
}



// ===== FUN_1401a0910 @ 0x1401a0910 [input] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1401a0910(undefined8 *param_1)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  undefined1 auStackY_88 [32];
  undefined8 ***local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  longlong local_30 [5];
  
  local_30[4] = DAT_1407502c0 ^ (ulonglong)auStackY_88;
  local_50 = (undefined8 ****)0x0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_140054cf0(&local_50,L"clock",5);
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  FUN_140054cf0(local_30,L"clock");
  *param_1 = StitchedTexture::vftable;
  FUN_140055000(param_1 + 1,local_30);
  ppppuVar1 = (undefined8 ****)(param_1 + 5);
  *ppppuVar1 = (undefined8 ***)0x0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 7;
  *(undefined2 *)ppppuVar1 = 0;
  param_1[9] = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[10] = 0;
  if (ppppuVar1 != &local_50) {
    ppppuVar2 = &local_50;
    if (7 < local_38) {
      ppppuVar2 = (undefined8 ****)local_50;
    }
    FUN_1400549d0(ppppuVar1,ppppuVar2);
  }
  if (7 < (ulonglong)local_30[3]) {
    if (0xfff < local_30[3] * 2 + 2U) {
      if (0x1f < (local_30[0] - *(longlong *)(local_30[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  if (7 < local_38) {
    if (0xfff < local_38 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)local_50[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  *param_1 = ClockTexture::vftable;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xff;
  return param_1;
}



// ===== FUN_1401a0b10 @ 0x1401a0b10 [input] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1401a0b10(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  undefined1 auStackY_88 [32];
  undefined8 ***local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  longlong local_30 [5];
  
  local_30[4] = DAT_1407502c0 ^ (ulonglong)auStackY_88;
  local_50 = (undefined8 ****)0x0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_140054cf0(&local_50,L"clock",5);
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  FUN_140054cf0(local_30,L"clock");
  *param_1 = StitchedTexture::vftable;
  FUN_140055000(param_1 + 1,local_30);
  ppppuVar1 = (undefined8 ****)(param_1 + 5);
  *ppppuVar1 = (undefined8 ***)0x0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 7;
  *(undefined2 *)ppppuVar1 = 0;
  param_1[9] = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[10] = 0;
  if (ppppuVar1 != &local_50) {
    ppppuVar2 = &local_50;
    if (7 < local_38) {
      ppppuVar2 = (undefined8 ****)local_50;
    }
    FUN_1400549d0(ppppuVar1,ppppuVar2);
  }
  if (7 < (ulonglong)local_30[3]) {
    if (0xfff < local_30[3] * 2 + 2U) {
      if (0x1f < (local_30[0] - *(longlong *)(local_30[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  if (7 < local_38) {
    if (0xfff < local_38 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)local_50[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  *param_1 = ClockTexture::vftable;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = param_3;
  *(undefined4 *)(param_1 + 0x15) = param_2;
  return param_1;
}



// ===== FUN_1401a1090 @ 0x1401a1090 [input] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1401a1090(undefined8 *param_1)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  undefined1 auStackY_88 [32];
  undefined8 ***local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  longlong local_30 [5];
  
  local_30[4] = DAT_1407502c0 ^ (ulonglong)auStackY_88;
  local_50 = (undefined8 ****)0x0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_140054cf0(&local_50,L"compass",7);
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  FUN_140054cf0(local_30,L"compass");
  *param_1 = StitchedTexture::vftable;
  FUN_140055000(param_1 + 1,local_30);
  ppppuVar1 = (undefined8 ****)(param_1 + 5);
  *ppppuVar1 = (undefined8 ***)0x0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 7;
  *(undefined2 *)ppppuVar1 = 0;
  param_1[9] = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[10] = 0;
  if (ppppuVar1 != &local_50) {
    ppppuVar2 = &local_50;
    if (7 < local_38) {
      ppppuVar2 = (undefined8 ****)local_50;
    }
    FUN_1400549d0(ppppuVar1,ppppuVar2);
  }
  if (7 < (ulonglong)local_30[3]) {
    if (0xfff < local_30[3] * 2 + 2U) {
      if (0x1f < (local_30[0] - *(longlong *)(local_30[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  if (7 < local_38) {
    if (0xfff < local_38 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)local_50[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  *param_1 = CompassTexture::vftable;
  DAT_140791578 = param_1;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xff;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  return param_1;
}



// ===== FUN_1401a12a0 @ 0x1401a12a0 [input] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1401a12a0(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  undefined1 auStackY_88 [32];
  undefined8 ***local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  longlong local_30 [5];
  
  local_30[4] = DAT_1407502c0 ^ (ulonglong)auStackY_88;
  local_50 = (undefined8 ****)0x0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_140054cf0(&local_50,L"compass",7);
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  FUN_140054cf0(local_30,L"compass");
  *param_1 = StitchedTexture::vftable;
  FUN_140055000(param_1 + 1,local_30);
  ppppuVar1 = (undefined8 ****)(param_1 + 5);
  *ppppuVar1 = (undefined8 ***)0x0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 7;
  *(undefined2 *)ppppuVar1 = 0;
  param_1[9] = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[10] = 0;
  if (ppppuVar1 != &local_50) {
    ppppuVar2 = &local_50;
    if (7 < local_38) {
      ppppuVar2 = (undefined8 ****)local_50;
    }
    FUN_1400549d0(ppppuVar1,ppppuVar2);
  }
  if (7 < (ulonglong)local_30[3]) {
    if (0xfff < local_30[3] * 2 + 2U) {
      if (0x1f < (local_30[0] - *(longlong *)(local_30[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  if (7 < local_38) {
    if (0xfff < local_38 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)local_50[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  *param_1 = CompassTexture::vftable;
  param_1[0x14] = param_3;
  *(undefined4 *)(param_1 + 0x13) = param_2;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  return param_1;
}



// ===== FUN_1401f1850 @ 0x1401f1850 [input] =====

void FUN_1401f1850(undefined8 param_1)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  local_28 = DAT_1407b9898;
  local_20 = 1;
  FUN_1401f20a0(param_1,local_18,&local_28);
  local_28 = DAT_1407b98a0;
  local_20 = 1;
  FUN_1401f20a0();
  local_28 = DAT_1407b9868;
  local_20 = 1;
  FUN_1401f20a0();
  local_28 = DAT_1407b9870;
  local_20 = 1;
  FUN_1401f20a0();
  local_28 = DAT_1407b9878;
  local_20 = 1;
  FUN_1401f20a0();
  local_28 = DAT_1407b9880;
  local_20 = 1;
  FUN_1401f20a0();
  local_28 = DAT_1407b9888;
  local_20 = 1;
  FUN_1401f20a0();
  local_28 = DAT_1407b9890;
  local_20 = 1;
  FUN_1401f20a0();
  local_20 = 0x10;
  local_28 = *(undefined8 *)(DAT_1407be470 + (ulonglong)*(uint *)(DAT_1407aaef8 + 0x28) * 8);
  FUN_1401f20a0(local_28,local_18,&local_28);
  local_20 = 0x10;
  local_28 = *(undefined8 *)(DAT_1407be470 + (ulonglong)*(uint *)(DAT_1407aaf18 + 0x28) * 8);
  FUN_1401f20a0(local_28,local_18,&local_28);
  local_20 = 0x10;
  local_28 = *(undefined8 *)(DAT_1407be470 + (ulonglong)*(uint *)(DAT_1407aaea0 + 0x28) * 8);
  FUN_1401f20a0(local_28,local_18,&local_28);
  local_20 = 0x10;
  local_28 = *(undefined8 *)(DAT_1407be470 + (ulonglong)*(uint *)(DAT_1407aaf10 + 0x28) * 8);
  FUN_1401f20a0(local_28,local_18,&local_28);
  local_20 = 0x10;
  local_28 = *(undefined8 *)(DAT_1407be470 + (ulonglong)*(uint *)(DAT_1407aaea8 + 0x28) * 8);
  FUN_1401f20a0(local_28,local_18,&local_28);
  local_20 = 0x10;
  local_28 = *(undefined8 *)(DAT_1407be470 + (ulonglong)*(uint *)(DAT_1407aae28 + 0x28) * 8);
  FUN_1401f20a0(local_28,local_18,&local_28);
  local_20 = 0x10;
  local_28 = *(undefined8 *)(DAT_1407be470 + (ulonglong)*(uint *)(DAT_1407aae48 + 0x28) * 8);
  FUN_1401f20a0(local_28,local_18,&local_28);
  local_20 = 0x1000;
  local_28 = *(undefined8 *)(DAT_1407be480 + (ulonglong)*(uint *)(DAT_1407b8aa0 + 0x20) * 8);
  FUN_1401f20a0(local_28,local_18,&local_28);
  local_20 = 0x1000;
  local_28 = *(undefined8 *)(DAT_1407be470 + 0x1d8);
  FUN_1401f20a0(local_28,local_18,&local_28);
  local_20 = 0x1000;
  local_28 = *(undefined8 *)(DAT_1407be470 + 0x138);
  FUN_1401f20a0(local_28,local_18,&local_28);
  local_20 = 0x1000;
  local_28 = *(undefined8 *)(DAT_1407be470 + 0x298);
  FUN_1401f20a0(local_28,local_18,&local_28);
  local_28 = DAT_1407b9860;
  local_20 = 0x1000;
  FUN_1401f20a0();
  local_20 = 0x1000;
  local_28 = *(undefined8 *)(DAT_1407be480 + (ulonglong)*(uint *)(DAT_1407acfa8 + 0x28) * 8);
  FUN_1401f20a0(local_28,local_18,&local_28);
  local_28 = DAT_1407b98a8;
  local_20 = 0x10000;
  FUN_1401f20a0();
  local_28 = DAT_1407b98b8;
  local_20 = 0x10000;
  FUN_1401f20a0();
  local_28 = DAT_1407b98c8;
  local_20 = 0x10000;
  FUN_1401f20a0();
  local_28 = DAT_1407b98d0;
  local_20 = 0x10000;
  FUN_1401f20a0();
  return;
}



// ===== FUN_14026db10 @ 0x14026db10 [profile,storage,input,ui,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14026db10(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStackY_68 [32];
  longlong local_38 [6];
  
  local_38[4] = DAT_1407502c0 ^ (ulonglong)auStackY_68;
  uVar1 = IggyPlayerRootPath(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 8) = uVar1;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_140054cf0(local_38,L"RemoveObject");
  uVar1 = FUN_14026eb50(param_1,local_38);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  if (7 < (ulonglong)local_38[3]) {
    if (0xfff < local_38[3] * 2 + 2U) {
      if (0x1f < (local_38[0] - *(longlong *)(local_38[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_140054cf0(local_38,L"SlideLeft");
  uVar1 = FUN_14026eb50(param_1,local_38);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  if (7 < (ulonglong)local_38[3]) {
    if (0xfff < local_38[3] * 2 + 2U) {
      if (0x1f < (local_38[0] - *(longlong *)(local_38[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_140054cf0(local_38,L"SlideRight");
  uVar1 = FUN_14026eb50(param_1,local_38);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  if (7 < (ulonglong)local_38[3]) {
    if (0xfff < local_38[3] * 2 + 2U) {
      if (0x1f < (local_38[0] - *(longlong *)(local_38[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_140054cf0(local_38,L"SetSafeZone");
  uVar1 = FUN_14026eb50(param_1,local_38);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  if (7 < (ulonglong)local_38[3]) {
    if (0xfff < local_38[3] * 2 + 2U) {
      if (0x1f < (local_38[0] - *(longlong *)(local_38[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_140054cf0(local_38,L"SetAlpha");
  uVar1 = FUN_14026eb50(param_1,local_38);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  if (7 < (ulonglong)local_38[3]) {
    if (0xfff < local_38[3] * 2 + 2U) {
      if (0x1f < (local_38[0] - *(longlong *)(local_38[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_140054cf0(local_38,L"SetFocus");
  uVar1 = FUN_14026eb50(param_1,local_38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  if (7 < (ulonglong)local_38[3]) {
    if (0xfff < local_38[3] * 2 + 2U) {
      if (0x1f < (local_38[0] - *(longlong *)(local_38[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_140054cf0(local_38,L"DoHorizontalResizeCheck");
  uVar1 = FUN_14026eb50(param_1,local_38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
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



// ===== FUN_14026eb50 @ 0x14026eb50 [profile,storage,input,ui,render] =====

undefined8 FUN_14026eb50(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 local_18 [16];
  
  puVar6 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar6 = (undefined8 *)*param_2;
  }
  uVar5 = 0;
  uVar7 = 0xcbf29ce484222325;
  if (param_2[2] * 2 != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar6 + uVar5);
      uVar5 = uVar5 + 1;
      uVar7 = (uVar7 ^ *pbVar1) * 0x100000001b3;
    } while (uVar5 < (ulonglong)(param_2[2] * 2));
  }
  lVar2 = FUN_1400490c0(param_1 + 0xb,local_18,param_2,uVar7);
  lVar2 = *(longlong *)(lVar2 + 8);
  if (lVar2 == 0) {
    lVar2 = param_1[0xc];
  }
  if (lVar2 == param_1[0xc]) {
    puVar6 = param_2;
    if (7 < (ulonglong)param_2[3]) {
      puVar6 = (undefined8 *)*param_2;
    }
    uVar3 = (**(code **)*param_1)(param_1);
    uVar3 = IggyPlayerCreateFastName(uVar3,puVar6,0xffffffff);
    plVar4 = (longlong *)FUN_140064f50(param_1 + 0xb,local_18,param_2);
    *(undefined8 *)(*plVar4 + 0x30) = uVar3;
    return uVar3;
  }
  return *(undefined8 *)(lVar2 + 0x30);
}



// ===== FUN_140272440 @ 0x140272440 [storage,input] =====

void FUN_140272440(longlong param_1,undefined8 *param_2)

{
  if (*(undefined8 **)(param_1 + 8) != *(undefined8 **)(param_1 + 0x10)) {
    **(undefined8 **)(param_1 + 8) = *param_2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
    return;
  }
  FUN_1400491a0();
  return;
}



// ===== FUN_140277230 @ 0x140277230 [input] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_140277230(longlong param_1,longlong *param_2,int param_3,undefined4 param_4,undefined1 param_5,
             longlong param_6)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 ****ppppuVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStackY_118 [32];
  longlong *local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b0;
  ulonglong local_a8 [4];
  undefined8 ***local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68 [6];
  
  local_68[4] = DAT_1407502c0 ^ (ulonglong)auStackY_118;
  local_d8 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  lVar12 = -1;
  do {
    lVar12 = lVar12 + 1;
  } while (*(short *)(param_6 + lVar12 * 2) != 0);
  local_b0 = param_2;
  FUN_140054cf0(param_2);
  local_d8 = 1;
  *(undefined1 *)(param_1 + 0x1c8) = param_5;
  if (param_3 == -1) {
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    plVar10 = *(longlong **)(param_1 + 0x1c0);
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar10 + 1;
      lVar12 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
    local_88 = (undefined8 ****)0x0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0;
    FUN_140054cf0(&local_88,L"{*ICON*}",8);
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_a8[3] = 0;
    FUN_140054cf0(local_a8,L"{*/ICON*}",9);
    ppppuVar13 = &local_88;
    if (7 < local_70) {
      ppppuVar13 = (undefined8 ****)local_88;
    }
    plVar10 = param_2;
    if (7 < (ulonglong)param_2[3]) {
      plVar10 = (longlong *)*param_2;
    }
    if ((ulonglong)param_2[2] < local_78) {
LAB_14027772f:
      uVar15 = local_78 - 1;
      lVar12 = -1;
LAB_140277732:
      uVar16 = param_2[2];
      if (uVar16 <= uVar15) goto LAB_140277528;
      local_d0 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        local_d0 = (longlong *)*param_2;
      }
      if ((uVar16 < local_a8[2]) || (uVar16 - local_a8[2] < uVar15)) {
LAB_1402777a3:
        uVar16 = 0xffffffffffffffff;
LAB_1402777a6:
        if ((uVar16 <= uVar15) || (uVar4 = param_2[2], uVar4 <= uVar16)) goto LAB_140277686;
        local_68[0] = 0;
        local_68[1] = 0;
        local_68[2] = 0;
        local_68[3] = 0;
        if (uVar4 < uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_140051220();
        }
        uVar14 = uVar16 - uVar15;
        if (uVar4 - uVar15 < uVar16 - uVar15) {
          uVar14 = uVar4 - uVar15;
        }
        plVar10 = param_2;
        if (7 < (ulonglong)param_2[3]) {
          plVar10 = (longlong *)*param_2;
        }
        FUN_140054cf0(local_68,(longlong)plVar10 + uVar15 * 2,uVar14);
        local_d8 = 0x21;
        FUN_1403161f0(&local_c8,local_68,0x3a);
        uVar6 = FUN_14005e1a0(local_c8);
        local_d0 = (longlong *)CONCAT44(local_d0._4_4_,uVar6);
        if ((ulonglong)(local_c0 - local_c8 >> 5) < 2) {
          local_d4 = 0;
        }
        else {
          local_d4 = FUN_14005e1a0(local_c8 + 0x20);
        }
        plVar7 = (longlong *)FUN_140558c80();
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 1) = 1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        *plVar7 = (longlong)std::_Ref_count_obj2<class_ItemInstance>::vftable;
        plVar10 = plVar7 + 2;
        plVar7[3] = 0;
        plVar7[4] = 0;
        *plVar10 = (longlong)ItemInstance::vftable;
        plVar7[9] = 0;
        plVar7[10] = 0;
        local_e8 = plVar7;
        FUN_140359e80(plVar10,(ulonglong)local_d0 & 0xffffffff,1,local_d4);
        if ((int)plVar7[8] < 0) {
          *(undefined4 *)(plVar7 + 8) = 0;
        }
        local_d8 = 0x61;
        local_e8 = plVar10;
        local_e0 = plVar7;
        if ((plVar10 != (longlong *)0x0) && ((plVar7[4] == 0 || (*(int *)(plVar7[4] + 8) == 0)))) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
          UNLOCK();
          plVar7[3] = (longlong)plVar10;
          plVar10 = (longlong *)plVar7[4];
          plVar7[4] = (longlong)plVar7;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar10 + 8))();
            }
          }
          LOCK();
          plVar10 = plVar7 + 1;
          lVar8 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7);
            }
          }
        }
        FUN_14008db60(param_1 + 0x1b8,&local_e8);
        plVar10 = local_e0;
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_e0 + 1;
          lVar8 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_e0)(local_e0);
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
        FUN_1400a47c0(param_2,lVar12);
        FUN_140048c80(&local_c8);
        if (7 < (ulonglong)local_68[3]) {
          if ((0xfff < local_68[3] * 2 + 2U) &&
             (0x1f < (local_68[0] - *(longlong *)(local_68[0] + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          thunk_FUN_1401fe000();
        }
        bVar5 = false;
        goto LAB_14027768a;
      }
      if (local_a8[2] != 0) {
        lVar8 = (longlong)local_d0 + uVar16 * 2;
        lVar9 = thunk_FUN_140556fb0((longlong)local_d0 + uVar15 * 2,lVar8);
        if (lVar9 == lVar8) goto LAB_1402777a3;
        uVar16 = lVar9 - (longlong)local_d0 >> 1;
        goto LAB_1402777a6;
      }
LAB_140277686:
      bVar5 = false;
    }
    else {
      if (local_78 != 0) {
        lVar12 = (longlong)plVar10 + param_2[2] * 2;
        lVar8 = thunk_FUN_140556fb0(plVar10,lVar12,ppppuVar13,local_78);
        if (lVar8 == lVar12) goto LAB_14027772f;
        lVar12 = lVar8 - (longlong)plVar10 >> 1;
        uVar15 = local_78 + lVar12;
        if (lVar12 == 0) goto LAB_140277528;
        goto LAB_140277732;
      }
LAB_140277528:
      plVar10 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        plVar10 = (longlong *)*param_2;
      }
      lVar12 = FUN_1400a4750(plVar10,param_2[2]);
      if (lVar12 != -1) {
        plVar7 = (longlong *)FUN_140558c80(0x58);
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 1) = 1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        *plVar7 = (longlong)std::_Ref_count_obj2<class_ItemInstance>::vftable;
        plVar10 = plVar7 + 2;
        plVar7[3] = 0;
        plVar7[4] = 0;
        *plVar10 = (longlong)ItemInstance::vftable;
        plVar7[9] = 0;
        plVar7[10] = 0;
        local_e8 = plVar7;
        FUN_140359e80(plVar10,0x3a);
        if ((int)plVar7[8] < 0) {
          *(undefined4 *)(plVar7 + 8) = 0;
        }
        local_d8 = 5;
LAB_1402775d2:
        local_e8 = plVar10;
        local_e0 = plVar7;
        if ((plVar10 != (longlong *)0x0) && ((plVar10[2] == 0 || (*(int *)(plVar10[2] + 8) == 0))))
        {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
          UNLOCK();
          plVar10[1] = (longlong)plVar10;
          plVar3 = (longlong *)plVar10[2];
          plVar10[2] = (longlong)plVar7;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar3 + 8))();
            }
          }
          LOCK();
          plVar10 = plVar7 + 1;
          lVar12 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7);
            }
          }
        }
        FUN_14008db60(param_1 + 0x1b8,&local_e8);
        plVar10 = local_e0;
LAB_14027765a:
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar10 + 1;
          lVar12 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
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
        goto LAB_140277686;
      }
      plVar10 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        plVar10 = (longlong *)*param_2;
      }
      lVar12 = FUN_1400a4750(plVar10,param_2[2]);
      if (lVar12 != -1) {
        plVar7 = (longlong *)FUN_140558c80(0x58);
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 1) = 1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        *plVar7 = (longlong)std::_Ref_count_obj2<class_ItemInstance>::vftable;
        plVar10 = plVar7 + 2;
        plVar7[3] = 0;
        plVar7[4] = 0;
        *plVar10 = (longlong)ItemInstance::vftable;
        plVar7[9] = 0;
        plVar7[10] = 0;
        local_e8 = plVar7;
        FUN_140359e80(plVar10,0x118);
        if ((int)plVar7[8] < 0) {
          *(undefined4 *)(plVar7 + 8) = 0;
        }
        local_d8 = 9;
        goto LAB_1402775d2;
      }
      plVar10 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        plVar10 = (longlong *)*param_2;
      }
      lVar12 = FUN_1400a4750(plVar10,param_2[2]);
      if (lVar12 != -1) {
        plVar7 = (longlong *)FUN_140558c80(0x58);
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 1) = 1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        *plVar7 = (longlong)std::_Ref_count_obj2<class_ItemInstance>::vftable;
        plVar10 = plVar7 + 2;
        plVar7[3] = 0;
        plVar7[4] = 0;
        *plVar10 = (longlong)ItemInstance::vftable;
        plVar7[9] = 0;
        plVar7[10] = 0;
        local_e8 = plVar7;
        FUN_140359e80(plVar10,5);
        if ((int)plVar7[8] < 0) {
          *(undefined4 *)(plVar7 + 8) = 0;
        }
        local_d8 = 0x11;
        goto LAB_1402775d2;
      }
      plVar10 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        plVar10 = (longlong *)*param_2;
      }
      lVar12 = FUN_1400a4750(plVar10,param_2[2]);
      if (lVar12 != -1) {
        plVar7 = (longlong *)FUN_140558c80(0x58);
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 1) = 1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        *plVar7 = (longlong)std::_Ref_count_obj2<class_ItemInstance>::vftable;
        plVar10 = plVar7 + 2;
        plVar7[3] = 0;
        plVar7[4] = 0;
        *plVar10 = (longlong)ItemInstance::vftable;
        plVar7[9] = 0;
        plVar7[10] = 0;
        local_e8 = plVar7;
        FUN_140359e80(plVar10,0x10d);
        if ((int)plVar7[8] < 0) {
          *(undefined4 *)(plVar7 + 8) = 0;
        }
        local_d8 = 0x81;
        goto LAB_1402775d2;
      }
      plVar10 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        plVar10 = (longlong *)*param_2;
      }
      lVar12 = FUN_1400a4750(plVar10,param_2[2]);
      if (lVar12 != -1) {
        plVar7 = (longlong *)FUN_140558c80(0x58);
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 1) = 1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        *plVar7 = (longlong)std::_Ref_count_obj2<class_ItemInstance>::vftable;
        plVar10 = plVar7 + 2;
        plVar7[3] = 0;
        plVar7[4] = 0;
        *plVar10 = (longlong)ItemInstance::vftable;
        plVar7[9] = 0;
        plVar7[10] = 0;
        local_e8 = plVar7;
        FUN_140359e80(plVar10,0x10f);
        if ((int)plVar7[8] < 0) {
          *(undefined4 *)(plVar7 + 8) = 0;
        }
        local_d8 = 0x101;
        goto LAB_1402775d2;
      }
      plVar10 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        plVar10 = (longlong *)*param_2;
      }
      lVar12 = FUN_1400a4750(plVar10,param_2[2]);
      if (lVar12 != -1) {
        plVar7 = (longlong *)FUN_140558c80(0x58);
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 1) = 1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        *plVar7 = (longlong)std::_Ref_count_obj2<class_ItemInstance>::vftable;
        plVar10 = plVar7 + 2;
        plVar7[3] = 0;
        plVar7[4] = 0;
        *plVar10 = (longlong)ItemInstance::vftable;
        plVar7[9] = 0;
        plVar7[10] = 0;
        local_e8 = plVar7;
        FUN_140359e80(plVar10,0x10e);
        if ((int)plVar7[8] < 0) {
          *(undefined4 *)(plVar7 + 8) = 0;
        }
        local_d8 = 0x201;
        goto LAB_1402775d2;
      }
      plVar10 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        plVar10 = (longlong *)*param_2;
      }
      lVar12 = FUN_1400a4750(plVar10,param_2[2]);
      if (lVar12 != -1) {
        plVar7 = (longlong *)FUN_140558c80(0x58);
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 1) = 1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        *plVar7 = (longlong)std::_Ref_count_obj2<class_ItemInstance>::vftable;
        plVar10 = plVar7 + 2;
        plVar7[3] = 0;
        plVar7[4] = 0;
        *plVar10 = (longlong)ItemInstance::vftable;
        plVar7[9] = 0;
        plVar7[10] = 0;
        local_e8 = plVar7;
        FUN_140359e80(plVar10,0x3d);
        if ((int)plVar7[8] < 0) {
          *(undefined4 *)(plVar7 + 8) = 0;
        }
        local_d8 = 0x401;
        goto LAB_1402775d2;
      }
      plVar10 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        plVar10 = (longlong *)*param_2;
      }
      lVar12 = FUN_1400a4750(plVar10,param_2[2]);
      if (lVar12 != -1) {
        plVar7 = (longlong *)FUN_140558c80(0x58);
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 1) = 1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        *plVar7 = (longlong)std::_Ref_count_obj2<class_ItemInstance>::vftable;
        lVar12 = DAT_1407b8ad8;
        plVar10 = plVar7 + 2;
        plVar7[3] = 0;
        plVar7[4] = 0;
        *plVar10 = (longlong)ItemInstance::vftable;
        plVar7[9] = 0;
        plVar7[10] = 0;
        local_e8 = plVar7;
        FUN_140359e80(plVar10,*(undefined4 *)(lVar12 + 0x20));
        local_d8 = 0x801;
        goto LAB_1402775d2;
      }
      plVar10 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        plVar10 = (longlong *)*param_2;
      }
      lVar12 = FUN_1400a4750(plVar10,param_2[2]);
      if (lVar12 != -1) {
        plVar7 = (longlong *)FUN_140558c80(0x58);
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 1) = 1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        *plVar7 = (longlong)std::_Ref_count_obj2<class_ItemInstance>::vftable;
        plVar10 = plVar7 + 2;
        plVar7[3] = 0;
        plVar7[4] = 0;
        *plVar10 = (longlong)ItemInstance::vftable;
        plVar7[9] = 0;
        plVar7[10] = 0;
        local_e8 = plVar7;
        FUN_140359e80(plVar10,0x32);
        if ((int)plVar7[8] < 0) {
          *(undefined4 *)(plVar7 + 8) = 0;
        }
        local_d8 = 0x1001;
        goto LAB_1402775d2;
      }
      plVar10 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        plVar10 = (longlong *)*param_2;
      }
      lVar12 = FUN_1400a4750(plVar10,param_2[2]);
      if (lVar12 != -1) {
        plVar7 = (longlong *)FUN_140558c80(0x58);
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 1) = 1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        *plVar7 = (longlong)std::_Ref_count_obj2<class_ItemInstance>::vftable;
        plVar10 = plVar7 + 2;
        plVar7[3] = 0;
        plVar7[4] = 0;
        *plVar10 = (longlong)ItemInstance::vftable;
        plVar7[9] = 0;
        plVar7[10] = 0;
        local_e8 = plVar7;
        FUN_140359e80(plVar10,0x14d);
        if ((int)plVar7[8] < 0) {
          *(undefined4 *)(plVar7 + 8) = 0;
        }
        local_d8 = 0x2001;
        goto LAB_1402775d2;
      }
      plVar10 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        plVar10 = (longlong *)*param_2;
      }
      lVar12 = FUN_1400a4750(plVar10,param_2[2]);
      if (lVar12 != -1) {
        plVar7 = (longlong *)FUN_140558c80(0x58);
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 1) = 1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        *plVar7 = (longlong)std::_Ref_count_obj2<class_ItemInstance>::vftable;
        plVar10 = plVar7 + 2;
        plVar7[3] = 0;
        plVar7[4] = 0;
        *plVar10 = (longlong)ItemInstance::vftable;
        plVar7[9] = 0;
        plVar7[10] = 0;
        local_e8 = plVar7;
        FUN_140359e80(plVar10,0x15a);
        if ((int)plVar7[8] < 0) {
          *(undefined4 *)(plVar7 + 8) = 0;
        }
        local_d8 = 0x4001;
        goto LAB_1402775d2;
      }
      plVar10 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        plVar10 = (longlong *)*param_2;
      }
      lVar12 = FUN_1400a4750(plVar10,param_2[2]);
      if (lVar12 != -1) {
        plVar7 = (longlong *)FUN_140558c80(0x58);
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 1) = 1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        *plVar7 = (longlong)std::_Ref_count_obj2<class_ItemInstance>::vftable;
        plVar10 = plVar7 + 2;
        plVar7[3] = 0;
        plVar7[4] = 0;
        *plVar10 = (longlong)ItemInstance::vftable;
        plVar7[9] = 0;
        plVar7[10] = 0;
        local_e8 = plVar7;
        FUN_140359e80(plVar10,0x15d);
        if ((int)plVar7[8] < 0) {
          *(undefined4 *)(plVar7 + 8) = 0;
        }
        local_d8 = 0x8001;
        goto LAB_1402775d2;
      }
      plVar10 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        plVar10 = (longlong *)*param_2;
      }
      lVar12 = FUN_1400a4750(plVar10,param_2[2]);
      if (lVar12 != -1) {
        plVar7 = (longlong *)FUN_140558c80(0x58);
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 1) = 1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        *plVar7 = (longlong)std::_Ref_count_obj2<class_ItemInstance>::vftable;
        plVar10 = plVar7 + 2;
        plVar7[3] = 0;
        plVar7[4] = 0;
        *plVar10 = (longlong)ItemInstance::vftable;
        plVar7[9] = 0;
        plVar7[10] = 0;
        local_e8 = plVar7;
        FUN_140359e80(plVar10,0x148);
        if ((int)plVar7[8] < 0) {
          *(undefined4 *)(plVar7 + 8) = 0;
        }
        local_d8 = 0x10001;
        goto LAB_1402775d2;
      }
      plVar10 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        plVar10 = (longlong *)*param_2;
      }
      lVar12 = FUN_1400a4750(plVar10,param_2[2]);
      if (lVar12 != -1) {
        plVar7 = (longlong *)FUN_140558c80(0x58);
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 1) = 1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        *plVar7 = (longlong)std::_Ref_count_obj2<class_ItemInstance>::vftable;
        plVar10 = plVar7 + 2;
        plVar7[3] = 0;
        plVar7[4] = 0;
        *plVar10 = (longlong)ItemInstance::vftable;
        plVar7[9] = 0;
        plVar7[10] = 0;
        local_e8 = plVar7;
        FUN_140359e80(plVar10,0x42);
        if ((int)plVar7[8] < 0) {
          *(undefined4 *)(plVar7 + 8) = 0;
        }
        local_d8 = 0x20001;
        goto LAB_1402775d2;
      }
      plVar10 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        plVar10 = (longlong *)*param_2;
      }
      lVar12 = FUN_1400a4750(plVar10,param_2[2]);
      if (lVar12 != -1) {
        plVar7 = (longlong *)FUN_140558c80(0x58);
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 1) = 1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        *plVar7 = (longlong)std::_Ref_count_obj2<class_ItemInstance>::vftable;
        plVar10 = plVar7 + 2;
        plVar7[3] = 0;
        plVar7[4] = 0;
        *plVar10 = (longlong)ItemInstance::vftable;
        plVar7[9] = 0;
        plVar7[10] = 0;
        local_e8 = plVar7;
        FUN_140359e80(plVar10,0x1b);
        if ((int)plVar7[8] < 0) {
          *(undefined4 *)(plVar7 + 8) = 0;
        }
        local_d8 = 0x40001;
        goto LAB_1402775d2;
      }
      plVar10 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        plVar10 = (longlong *)*param_2;
      }
      lVar12 = FUN_1400a4750(plVar10,param_2[2]);
      if (lVar12 == -1) {
        plVar10 = param_2;
        if (7 < (ulonglong)param_2[3]) {
          plVar10 = (longlong *)*param_2;
        }
        lVar12 = FUN_1400a4750(plVar10,param_2[2]);
        if (lVar12 != -1) {
          bVar5 = true;
          FUN_14027ae00(param_1,10);
          goto LAB_14027768a;
        }
        plVar10 = param_2;
        if (7 < (ulonglong)param_2[3]) {
          plVar10 = (longlong *)*param_2;
        }
        lVar12 = FUN_1400a4750(plVar10,param_2[2]);
        if (lVar12 != -1) {
          plVar7 = (longlong *)FUN_140558c80(0x58);
          *plVar7 = 0;
          plVar7[1] = 0;
          *(undefined4 *)(plVar7 + 1) = 1;
          *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
          *plVar7 = (longlong)std::_Ref_count_obj2<class_ItemInstance>::vftable;
          plVar10 = plVar7 + 2;
          plVar7[3] = 0;
          plVar7[4] = 0;
          *plVar10 = (longlong)ItemInstance::vftable;
          plVar7[9] = 0;
          plVar7[10] = 0;
          local_e8 = plVar7;
          FUN_140359e80(plVar10);
          if ((int)plVar7[8] < 0) {
            *(undefined4 *)(plVar7 + 8) = 0;
          }
          local_d8 = 0x80001;
          goto LAB_1402775d2;
        }
        *(undefined8 *)(param_1 + 0x1b8) = 0;
        plVar10 = *(longlong **)(param_1 + 0x1c0);
        *(undefined8 *)(param_1 + 0x1c0) = 0;
        goto LAB_14027765a;
      }
      bVar5 = true;
      FUN_14027ae00(param_1,9);
    }
LAB_14027768a:
    if (7 < local_a8[3]) {
      if ((0xfff < local_a8[3] * 2 + 2) &&
         (0x1f < (local_a8[0] - *(longlong *)(local_a8[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
    local_a8[2] = 0;
    local_a8[3] = 7;
    local_a8[0] = local_a8[0] & 0xffffffffffff0000;
    if (7 < local_70) {
      if ((0xfff < local_70 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)local_88[-1])))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
    if (bVar5) goto LAB_14027740c;
  }
  else {
    *(undefined1 *)(param_1 + 0x1c8) = 0;
    plVar7 = (longlong *)FUN_140558c80();
    *plVar7 = 0;
    plVar7[1] = 0;
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)std::_Ref_count_obj2<class_ItemInstance>::vftable;
    plVar10 = plVar7 + 2;
    plVar7[3] = 0;
    plVar7[4] = 0;
    *plVar10 = (longlong)ItemInstance::vftable;
    plVar7[9] = 0;
    plVar7[10] = 0;
    local_d0 = plVar7;
    FUN_140359e80(plVar10,param_3,1,param_4);
    if ((int)plVar7[8] < 0) {
      *(undefined4 *)(plVar7 + 8) = 0;
    }
    local_d8 = 3;
    local_e8 = plVar10;
    local_e0 = plVar7;
    if ((plVar10 != (longlong *)0x0) && ((plVar7[4] == 0 || (*(int *)(plVar7[4] + 8) == 0)))) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar7[3] = (longlong)plVar10;
      plVar10 = (longlong *)plVar7[4];
      plVar7[4] = (longlong)plVar7;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      LOCK();
      plVar10 = plVar7 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
      }
    }
    FUN_14008db60(param_1 + 0x1b8,&local_e8);
    plVar10 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_e0 + 1;
      lVar12 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_e0)(local_e0);
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
    bVar5 = false;
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_14027ae00(param_1,0);
  }
LAB_14027740c:
  if ((bVar5) || (*(longlong *)(param_1 + 0x1b8) != 0)) {
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
  FUN_14027fe70(param_1 + 0x3c0,uVar11);
  return param_2;
}



// ===== FUN_140278520 @ 0x140278520 [input] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140278520(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *****pppppuVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStackY_338 [32];
  ulonglong local_2f8 [8];
  undefined8 ****local_2b8 [2];
  ulonglong local_2a8;
  ulonglong local_2a0;
  undefined8 ****local_298 [2];
  ulonglong local_288;
  ulonglong local_280;
  undefined8 ****local_278 [2];
  ulonglong local_268;
  ulonglong local_260;
  undefined8 ****local_258 [2];
  ulonglong local_248;
  ulonglong local_240;
  undefined8 ****local_238 [2];
  ulonglong local_228;
  ulonglong local_220;
  undefined8 ****local_218 [2];
  ulonglong local_208;
  ulonglong local_200;
  undefined8 ****local_1f8 [2];
  ulonglong local_1e8;
  ulonglong local_1e0;
  undefined8 ****local_1d8 [2];
  ulonglong local_1c8;
  ulonglong local_1c0;
  undefined8 ****local_1b8 [2];
  ulonglong local_1a8;
  ulonglong local_1a0;
  undefined8 ****local_198 [2];
  ulonglong local_188;
  ulonglong local_180;
  undefined8 ****local_178 [2];
  ulonglong local_168;
  ulonglong local_160;
  undefined8 ****local_158 [2];
  ulonglong local_148;
  ulonglong local_140;
  undefined8 ****local_138 [2];
  ulonglong local_128;
  ulonglong local_120;
  undefined8 ****local_118 [2];
  ulonglong local_108;
  ulonglong local_100;
  undefined8 ****local_f8 [2];
  ulonglong local_e8;
  ulonglong local_e0;
  undefined8 ****local_d8 [2];
  ulonglong local_c8;
  ulonglong local_c0;
  undefined8 ****local_b8 [2];
  ulonglong local_a8;
  ulonglong local_a0;
  undefined8 ****local_98 [2];
  ulonglong local_88;
  ulonglong local_80;
  undefined8 ****local_78 [2];
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1407502c0 ^ (ulonglong)auStackY_338;
  uVar7 = 0;
  local_2f8[4] = 0;
  local_2f8[5] = 0;
  local_2f8[6] = 0;
  local_2f8[7] = 0;
  FUN_140054cf0(local_2f8 + 4,&PTR_140610690,0);
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_2f8[2] = 0;
  local_2f8[3] = 0;
  FUN_140054cf0(local_2f8,L"{*CraftingTableIcon*}",0x15);
  FUN_140055000(local_2b8,param_4);
  uVar6 = uVar7;
  do {
    pppppuVar5 = local_2b8;
    if (7 < local_2a0) {
      pppppuVar5 = (undefined8 *****)local_2b8[0];
    }
    if ((local_2a8 < local_2f8[2]) || (local_2a8 - local_2f8[2] < uVar6)) break;
    if (local_2f8[2] != 0) {
      lVar2 = (longlong)pppppuVar5 + local_2a8 * 2;
      lVar1 = thunk_FUN_140556fb0((longlong)pppppuVar5 + uVar6 * 2,lVar2);
      if (lVar1 == lVar2) break;
      uVar6 = lVar1 - (longlong)pppppuVar5 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_2b8,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_4,local_2b8);
  FUN_140055150(local_2b8);
  if (7 < local_2f8[3]) {
    if ((0xfff < local_2f8[3] * 2 + 2) &&
       (0x1f < (local_2f8[0] - *(longlong *)(local_2f8[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[2] = 0;
  local_2f8[3] = 7;
  local_2f8[0] = local_2f8[0] & 0xffffffffffff0000;
  if (7 < local_2f8[7]) {
    if ((0xfff < local_2f8[7] * 2 + 2) &&
       (0x1f < (local_2f8[4] - *(longlong *)(local_2f8[4] + -8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[4] = 0;
  local_2f8[5] = 0;
  local_2f8[6] = 0;
  local_2f8[7] = 0;
  FUN_140054cf0(local_2f8 + 4,&PTR_140610690,0);
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_2f8[2] = 0;
  local_2f8[3] = 0;
  FUN_140054cf0(local_2f8,L"{*SticksIcon*}",0xe);
  FUN_140055000(local_298,param_4);
  uVar6 = uVar7;
  do {
    pppppuVar5 = local_298;
    if (7 < local_280) {
      pppppuVar5 = (undefined8 *****)local_298[0];
    }
    if ((local_288 < local_2f8[2]) || (local_288 - local_2f8[2] < uVar6)) break;
    if (local_2f8[2] != 0) {
      lVar2 = (longlong)pppppuVar5 + local_288 * 2;
      lVar1 = thunk_FUN_140556fb0((longlong)pppppuVar5 + uVar6 * 2,lVar2);
      if (lVar1 == lVar2) break;
      uVar6 = lVar1 - (longlong)pppppuVar5 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_298,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_4,local_298);
  FUN_140055150(local_298);
  if (7 < local_2f8[3]) {
    if ((0xfff < local_2f8[3] * 2 + 2) &&
       (0x1f < (local_2f8[0] - *(longlong *)(local_2f8[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[2] = 0;
  local_2f8[3] = 7;
  local_2f8[0] = local_2f8[0] & 0xffffffffffff0000;
  if (7 < local_2f8[7]) {
    if ((0xfff < local_2f8[7] * 2 + 2) &&
       (0x1f < (local_2f8[4] - *(longlong *)(local_2f8[4] + -8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[4] = 0;
  local_2f8[5] = 0;
  local_2f8[6] = 0;
  local_2f8[7] = 0;
  FUN_140054cf0(local_2f8 + 4,&PTR_140610690,0);
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_2f8[2] = 0;
  local_2f8[3] = 0;
  FUN_140054cf0(local_2f8,L"{*PlanksIcon*}",0xe);
  FUN_140055000(local_278,param_4);
  uVar6 = uVar7;
  do {
    pppppuVar5 = local_278;
    if (7 < local_260) {
      pppppuVar5 = (undefined8 *****)local_278[0];
    }
    if ((local_268 < local_2f8[2]) || (local_268 - local_2f8[2] < uVar6)) break;
    if (local_2f8[2] != 0) {
      lVar2 = (longlong)pppppuVar5 + local_268 * 2;
      lVar1 = thunk_FUN_140556fb0((longlong)pppppuVar5 + uVar6 * 2,lVar2);
      if (lVar1 == lVar2) break;
      uVar6 = lVar1 - (longlong)pppppuVar5 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_278,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_4,local_278);
  FUN_140055150(local_278);
  if (7 < local_2f8[3]) {
    if ((0xfff < local_2f8[3] * 2 + 2) &&
       (0x1f < (local_2f8[0] - *(longlong *)(local_2f8[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[2] = 0;
  local_2f8[3] = 7;
  local_2f8[0] = local_2f8[0] & 0xffffffffffff0000;
  if (7 < local_2f8[7]) {
    if ((0xfff < local_2f8[7] * 2 + 2) &&
       (0x1f < (local_2f8[4] - *(longlong *)(local_2f8[4] + -8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[4] = 0;
  local_2f8[5] = 0;
  local_2f8[6] = 0;
  local_2f8[7] = 0;
  FUN_140054cf0(local_2f8 + 4,&PTR_140610690,0);
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_2f8[2] = 0;
  local_2f8[3] = 0;
  FUN_140054cf0(local_2f8,L"{*WoodenShovelIcon*}",0x14);
  FUN_140055000(local_258,param_4);
  uVar6 = uVar7;
  do {
    pppppuVar5 = local_258;
    if (7 < local_240) {
      pppppuVar5 = (undefined8 *****)local_258[0];
    }
    if ((local_248 < local_2f8[2]) || (local_248 - local_2f8[2] < uVar6)) break;
    if (local_2f8[2] != 0) {
      lVar2 = (longlong)pppppuVar5 + local_248 * 2;
      lVar1 = thunk_FUN_140556fb0((longlong)pppppuVar5 + uVar6 * 2,lVar2);
      if (lVar1 == lVar2) break;
      uVar6 = lVar1 - (longlong)pppppuVar5 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_258,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_4,local_258);
  FUN_140055150(local_258);
  if (7 < local_2f8[3]) {
    if ((0xfff < local_2f8[3] * 2 + 2) &&
       (0x1f < (local_2f8[0] - *(longlong *)(local_2f8[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[2] = 0;
  local_2f8[3] = 7;
  local_2f8[0] = local_2f8[0] & 0xffffffffffff0000;
  if (7 < local_2f8[7]) {
    if ((0xfff < local_2f8[7] * 2 + 2) &&
       (0x1f < (local_2f8[4] - *(longlong *)(local_2f8[4] + -8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[4] = 0;
  local_2f8[5] = 0;
  local_2f8[6] = 0;
  local_2f8[7] = 0;
  FUN_140054cf0(local_2f8 + 4,&PTR_140610690,0);
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_2f8[2] = 0;
  local_2f8[3] = 0;
  FUN_140054cf0(local_2f8,L"{*WoodenHatchetIcon*}",0x15);
  FUN_140055000(local_238,param_4);
  uVar6 = uVar7;
  do {
    pppppuVar5 = local_238;
    if (7 < local_220) {
      pppppuVar5 = (undefined8 *****)local_238[0];
    }
    if ((local_228 < local_2f8[2]) || (local_228 - local_2f8[2] < uVar6)) break;
    if (local_2f8[2] != 0) {
      lVar2 = (longlong)pppppuVar5 + local_228 * 2;
      lVar1 = thunk_FUN_140556fb0((longlong)pppppuVar5 + uVar6 * 2,lVar2);
      if (lVar1 == lVar2) break;
      uVar6 = lVar1 - (longlong)pppppuVar5 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_238,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_4,local_238);
  FUN_140055150(local_238);
  if (7 < local_2f8[3]) {
    if ((0xfff < local_2f8[3] * 2 + 2) &&
       (0x1f < (local_2f8[0] - *(longlong *)(local_2f8[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[2] = 0;
  local_2f8[3] = 7;
  local_2f8[0] = local_2f8[0] & 0xffffffffffff0000;
  if (7 < local_2f8[7]) {
    if ((0xfff < local_2f8[7] * 2 + 2) &&
       (0x1f < (local_2f8[4] - *(longlong *)(local_2f8[4] + -8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[4] = 0;
  local_2f8[5] = 0;
  local_2f8[6] = 0;
  local_2f8[7] = 0;
  FUN_140054cf0(local_2f8 + 4,&PTR_140610690,0);
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_2f8[2] = 0;
  local_2f8[3] = 0;
  FUN_140054cf0(local_2f8,L"{*WoodenPickaxeIcon*}",0x15);
  FUN_140055000(local_218,param_4);
  uVar6 = uVar7;
  do {
    pppppuVar5 = local_218;
    if (7 < local_200) {
      pppppuVar5 = (undefined8 *****)local_218[0];
    }
    if ((local_208 < local_2f8[2]) || (local_208 - local_2f8[2] < uVar6)) break;
    if (local_2f8[2] != 0) {
      lVar2 = (longlong)pppppuVar5 + local_208 * 2;
      lVar1 = thunk_FUN_140556fb0((longlong)pppppuVar5 + uVar6 * 2,lVar2);
      if (lVar1 == lVar2) break;
      uVar6 = lVar1 - (longlong)pppppuVar5 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_218,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_4,local_218);
  FUN_140055150(local_218);
  if (7 < local_2f8[3]) {
    if ((0xfff < local_2f8[3] * 2 + 2) &&
       (0x1f < (local_2f8[0] - *(longlong *)(local_2f8[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[2] = 0;
  local_2f8[3] = 7;
  local_2f8[0] = local_2f8[0] & 0xffffffffffff0000;
  if (7 < local_2f8[7]) {
    if ((0xfff < local_2f8[7] * 2 + 2) &&
       (0x1f < (local_2f8[4] - *(longlong *)(local_2f8[4] + -8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[4] = 0;
  local_2f8[5] = 0;
  local_2f8[6] = 0;
  local_2f8[7] = 0;
  FUN_140054cf0(local_2f8 + 4,&PTR_140610690,0);
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_2f8[2] = 0;
  local_2f8[3] = 0;
  FUN_140054cf0(local_2f8,L"{*FurnaceIcon*}",0xf);
  FUN_140055000(local_1f8,param_4);
  uVar6 = uVar7;
  do {
    pppppuVar5 = local_1f8;
    if (7 < local_1e0) {
      pppppuVar5 = (undefined8 *****)local_1f8[0];
    }
    if ((local_1e8 < local_2f8[2]) || (local_1e8 - local_2f8[2] < uVar6)) break;
    if (local_2f8[2] != 0) {
      lVar2 = (longlong)pppppuVar5 + local_1e8 * 2;
      lVar1 = thunk_FUN_140556fb0((longlong)pppppuVar5 + uVar6 * 2,lVar2);
      if (lVar1 == lVar2) break;
      uVar6 = lVar1 - (longlong)pppppuVar5 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_1f8,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_4,local_1f8);
  FUN_140055150(local_1f8);
  if (7 < local_2f8[3]) {
    if ((0xfff < local_2f8[3] * 2 + 2) &&
       (0x1f < (local_2f8[0] - *(longlong *)(local_2f8[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[2] = 0;
  local_2f8[3] = 7;
  local_2f8[0] = local_2f8[0] & 0xffffffffffff0000;
  if (7 < local_2f8[7]) {
    if ((0xfff < local_2f8[7] * 2 + 2) &&
       (0x1f < (local_2f8[4] - *(longlong *)(local_2f8[4] + -8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[4] = 0;
  local_2f8[5] = 0;
  local_2f8[6] = 0;
  local_2f8[7] = 0;
  FUN_140054cf0(local_2f8 + 4,&PTR_140610690,0);
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_2f8[2] = 0;
  local_2f8[3] = 0;
  FUN_140054cf0(local_2f8,L"{*WoodenDoorIcon*}",0x12);
  FUN_140055000(local_1d8,param_4);
  uVar6 = uVar7;
  do {
    pppppuVar5 = local_1d8;
    if (7 < local_1c0) {
      pppppuVar5 = (undefined8 *****)local_1d8[0];
    }
    if ((local_1c8 < local_2f8[2]) || (local_1c8 - local_2f8[2] < uVar6)) break;
    if (local_2f8[2] != 0) {
      lVar2 = (longlong)pppppuVar5 + local_1c8 * 2;
      lVar1 = thunk_FUN_140556fb0((longlong)pppppuVar5 + uVar6 * 2,lVar2);
      if (lVar1 == lVar2) break;
      uVar6 = lVar1 - (longlong)pppppuVar5 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_1d8,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_4,local_1d8);
  FUN_140055150(local_1d8);
  if (7 < local_2f8[3]) {
    if ((0xfff < local_2f8[3] * 2 + 2) &&
       (0x1f < (local_2f8[0] - *(longlong *)(local_2f8[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[2] = 0;
  local_2f8[3] = 7;
  local_2f8[0] = local_2f8[0] & 0xffffffffffff0000;
  if (7 < local_2f8[7]) {
    if ((0xfff < local_2f8[7] * 2 + 2) &&
       (0x1f < (local_2f8[4] - *(longlong *)(local_2f8[4] + -8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[4] = 0;
  local_2f8[5] = 0;
  local_2f8[6] = 0;
  local_2f8[7] = 0;
  FUN_140054cf0(local_2f8 + 4,&PTR_140610690,0);
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_2f8[2] = 0;
  local_2f8[3] = 0;
  FUN_140054cf0(local_2f8,L"{*TorchIcon*}",0xd);
  FUN_140055000(local_1b8,param_4);
  uVar6 = uVar7;
  do {
    pppppuVar5 = local_1b8;
    if (7 < local_1a0) {
      pppppuVar5 = (undefined8 *****)local_1b8[0];
    }
    if ((local_1a8 < local_2f8[2]) || (local_1a8 - local_2f8[2] < uVar6)) break;
    if (local_2f8[2] != 0) {
      lVar2 = (longlong)pppppuVar5 + local_1a8 * 2;
      lVar1 = thunk_FUN_140556fb0((longlong)pppppuVar5 + uVar6 * 2,lVar2);
      if (lVar1 == lVar2) break;
      uVar6 = lVar1 - (longlong)pppppuVar5 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_1b8,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_4,local_1b8);
  FUN_140055150(local_1b8);
  if (7 < local_2f8[3]) {
    if ((0xfff < local_2f8[3] * 2 + 2) &&
       (0x1f < (local_2f8[0] - *(longlong *)(local_2f8[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[2] = 0;
  local_2f8[3] = 7;
  local_2f8[0] = local_2f8[0] & 0xffffffffffff0000;
  if (7 < local_2f8[7]) {
    if ((0xfff < local_2f8[7] * 2 + 2) &&
       (0x1f < (local_2f8[4] - *(longlong *)(local_2f8[4] + -8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[4] = 0;
  local_2f8[5] = 0;
  local_2f8[6] = 0;
  local_2f8[7] = 0;
  FUN_140054cf0(local_2f8 + 4,&PTR_140610690,0);
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_2f8[2] = 0;
  local_2f8[3] = 0;
  FUN_140054cf0(local_2f8,L"{*MinecartIcon*}",0x10);
  FUN_140055000(local_198,param_4);
  uVar6 = uVar7;
  do {
    pppppuVar5 = local_198;
    if (7 < local_180) {
      pppppuVar5 = (undefined8 *****)local_198[0];
    }
    if ((local_188 < local_2f8[2]) || (local_188 - local_2f8[2] < uVar6)) break;
    if (local_2f8[2] != 0) {
      lVar2 = (longlong)pppppuVar5 + local_188 * 2;
      lVar1 = thunk_FUN_140556fb0((longlong)pppppuVar5 + uVar6 * 2,lVar2);
      if (lVar1 == lVar2) break;
      uVar6 = lVar1 - (longlong)pppppuVar5 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_198,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_4,local_198);
  FUN_140055150(local_198);
  if (7 < local_2f8[3]) {
    if ((0xfff < local_2f8[3] * 2 + 2) &&
       (0x1f < (local_2f8[0] - *(longlong *)(local_2f8[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[2] = 0;
  local_2f8[3] = 7;
  local_2f8[0] = local_2f8[0] & 0xffffffffffff0000;
  if (7 < local_2f8[7]) {
    if ((0xfff < local_2f8[7] * 2 + 2) &&
       (0x1f < (local_2f8[4] - *(longlong *)(local_2f8[4] + -8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[4] = 0;
  local_2f8[5] = 0;
  local_2f8[6] = 0;
  local_2f8[7] = 0;
  FUN_140054cf0(local_2f8 + 4,&PTR_140610690,0);
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_2f8[2] = 0;
  local_2f8[3] = 0;
  FUN_140054cf0(local_2f8,L"{*BoatIcon*}",0xc);
  FUN_140055000(local_178,param_4);
  uVar6 = uVar7;
  do {
    pppppuVar5 = local_178;
    if (7 < local_160) {
      pppppuVar5 = (undefined8 *****)local_178[0];
    }
    if ((local_168 < local_2f8[2]) || (local_168 - local_2f8[2] < uVar6)) break;
    if (local_2f8[2] != 0) {
      lVar2 = (longlong)pppppuVar5 + local_168 * 2;
      lVar1 = thunk_FUN_140556fb0((longlong)pppppuVar5 + uVar6 * 2,lVar2);
      if (lVar1 == lVar2) break;
      uVar6 = lVar1 - (longlong)pppppuVar5 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_178,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_4,local_178);
  FUN_140055150(local_178);
  if (7 < local_2f8[3]) {
    if ((0xfff < local_2f8[3] * 2 + 2) &&
       (0x1f < (local_2f8[0] - *(longlong *)(local_2f8[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[2] = 0;
  local_2f8[3] = 7;
  local_2f8[0] = local_2f8[0] & 0xffffffffffff0000;
  if (7 < local_2f8[7]) {
    if ((0xfff < local_2f8[7] * 2 + 2) &&
       (0x1f < (local_2f8[4] - *(longlong *)(local_2f8[4] + -8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[4] = 0;
  local_2f8[5] = 0;
  local_2f8[6] = 0;
  local_2f8[7] = 0;
  FUN_140054cf0(local_2f8 + 4,&PTR_140610690,0);
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_2f8[2] = 0;
  local_2f8[3] = 0;
  FUN_140054cf0(local_2f8,L"{*FishingRodIcon*}",0x12);
  FUN_140055000(local_158,param_4);
  uVar6 = uVar7;
  do {
    pppppuVar5 = local_158;
    if (7 < local_140) {
      pppppuVar5 = (undefined8 *****)local_158[0];
    }
    if ((local_148 < local_2f8[2]) || (local_148 - local_2f8[2] < uVar6)) break;
    if (local_2f8[2] != 0) {
      lVar2 = (longlong)pppppuVar5 + local_148 * 2;
      lVar1 = thunk_FUN_140556fb0((longlong)pppppuVar5 + uVar6 * 2,lVar2);
      if (lVar1 == lVar2) break;
      uVar6 = lVar1 - (longlong)pppppuVar5 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_158,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_4,local_158);
  FUN_140055150(local_158);
  if (7 < local_2f8[3]) {
    if ((0xfff < local_2f8[3] * 2 + 2) &&
       (0x1f < (local_2f8[0] - *(longlong *)(local_2f8[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[2] = 0;
  local_2f8[3] = 7;
  local_2f8[0] = local_2f8[0] & 0xffffffffffff0000;
  if (7 < local_2f8[7]) {
    if ((0xfff < local_2f8[7] * 2 + 2) &&
       (0x1f < (local_2f8[4] - *(longlong *)(local_2f8[4] + -8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[4] = 0;
  local_2f8[5] = 0;
  local_2f8[6] = 0;
  local_2f8[7] = 0;
  FUN_140054cf0(local_2f8 + 4,&PTR_140610690,0);
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_2f8[2] = 0;
  local_2f8[3] = 0;
  FUN_140054cf0(local_2f8,L"{*FishIcon*}",0xc);
  FUN_140055000(local_138,param_4);
  uVar6 = uVar7;
  do {
    pppppuVar5 = local_138;
    if (7 < local_120) {
      pppppuVar5 = (undefined8 *****)local_138[0];
    }
    if ((local_128 < local_2f8[2]) || (local_128 - local_2f8[2] < uVar6)) break;
    if (local_2f8[2] != 0) {
      lVar2 = (longlong)pppppuVar5 + local_128 * 2;
      lVar1 = thunk_FUN_140556fb0((longlong)pppppuVar5 + uVar6 * 2,lVar2);
      if (lVar1 == lVar2) break;
      uVar6 = lVar1 - (longlong)pppppuVar5 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_138,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_4,local_138);
  FUN_140055150(local_138);
  if (7 < local_2f8[3]) {
    if ((0xfff < local_2f8[3] * 2 + 2) &&
       (0x1f < (local_2f8[0] - *(longlong *)(local_2f8[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[2] = 0;
  local_2f8[3] = 7;
  local_2f8[0] = local_2f8[0] & 0xffffffffffff0000;
  if (7 < local_2f8[7]) {
    if ((0xfff < local_2f8[7] * 2 + 2) &&
       (0x1f < (local_2f8[4] - *(longlong *)(local_2f8[4] + -8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[4] = 0;
  local_2f8[5] = 0;
  local_2f8[6] = 0;
  local_2f8[7] = 0;
  FUN_140054cf0(local_2f8 + 4,&PTR_140610690,0);
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_2f8[2] = 0;
  local_2f8[3] = 0;
  FUN_140054cf0(local_2f8,L"{*RailIcon*}",0xc);
  FUN_140055000(local_118,param_4);
  uVar6 = uVar7;
  do {
    pppppuVar5 = local_118;
    if (7 < local_100) {
      pppppuVar5 = (undefined8 *****)local_118[0];
    }
    if ((local_108 < local_2f8[2]) || (local_108 - local_2f8[2] < uVar6)) break;
    if (local_2f8[2] != 0) {
      lVar2 = (longlong)pppppuVar5 + local_108 * 2;
      lVar1 = thunk_FUN_140556fb0((longlong)pppppuVar5 + uVar6 * 2,lVar2);
      if (lVar1 == lVar2) break;
      uVar6 = lVar1 - (longlong)pppppuVar5 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_118,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_4,local_118);
  FUN_140055150(local_118);
  if (7 < local_2f8[3]) {
    if ((0xfff < local_2f8[3] * 2 + 2) &&
       (0x1f < (local_2f8[0] - *(longlong *)(local_2f8[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[2] = 0;
  local_2f8[3] = 7;
  local_2f8[0] = local_2f8[0] & 0xffffffffffff0000;
  if (7 < local_2f8[7]) {
    if ((0xfff < local_2f8[7] * 2 + 2) &&
       (0x1f < (local_2f8[4] - *(longlong *)(local_2f8[4] + -8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[4] = 0;
  local_2f8[5] = 0;
  local_2f8[6] = 0;
  local_2f8[7] = 0;
  FUN_140054cf0(local_2f8 + 4,&PTR_140610690,0);
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_2f8[2] = 0;
  local_2f8[3] = 0;
  FUN_140054cf0(local_2f8,L"{*PoweredRailIcon*}",0x13);
  FUN_140055000(local_f8,param_4);
  uVar6 = uVar7;
  do {
    pppppuVar5 = local_f8;
    if (7 < local_e0) {
      pppppuVar5 = (undefined8 *****)local_f8[0];
    }
    if ((local_e8 < local_2f8[2]) || (local_e8 - local_2f8[2] < uVar6)) break;
    if (local_2f8[2] != 0) {
      lVar2 = (longlong)pppppuVar5 + local_e8 * 2;
      lVar1 = thunk_FUN_140556fb0((longlong)pppppuVar5 + uVar6 * 2,lVar2);
      if (lVar1 == lVar2) break;
      uVar6 = lVar1 - (longlong)pppppuVar5 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_f8,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_4,local_f8);
  FUN_140055150(local_f8);
  if (7 < local_2f8[3]) {
    if ((0xfff < local_2f8[3] * 2 + 2) &&
       (0x1f < (local_2f8[0] - *(longlong *)(local_2f8[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[2] = 0;
  local_2f8[3] = 7;
  local_2f8[0] = local_2f8[0] & 0xffffffffffff0000;
  if (7 < local_2f8[7]) {
    if ((0xfff < local_2f8[7] * 2 + 2) &&
       (0x1f < (local_2f8[4] - *(longlong *)(local_2f8[4] + -8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[4] = 0;
  local_2f8[5] = 0;
  local_2f8[6] = 0;
  local_2f8[7] = 0;
  FUN_140054cf0(local_2f8 + 4,&PTR_140610690,0);
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_2f8[2] = 0;
  local_2f8[3] = 0;
  FUN_140054cf0(local_2f8,L"{*StructuresIcon*}",0x12);
  FUN_140055000(local_d8,param_4);
  uVar6 = uVar7;
  do {
    pppppuVar5 = local_d8;
    if (7 < local_c0) {
      pppppuVar5 = (undefined8 *****)local_d8[0];
    }
    if ((local_c8 < local_2f8[2]) || (local_c8 - local_2f8[2] < uVar6)) break;
    if (local_2f8[2] != 0) {
      lVar2 = (longlong)pppppuVar5 + local_c8 * 2;
      lVar1 = thunk_FUN_140556fb0((longlong)pppppuVar5 + uVar6 * 2,lVar2);
      if (lVar1 == lVar2) break;
      uVar6 = lVar1 - (longlong)pppppuVar5 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_d8,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_4,local_d8);
  FUN_140055150(local_d8);
  if (7 < local_2f8[3]) {
    if ((0xfff < local_2f8[3] * 2 + 2) &&
       (0x1f < (local_2f8[0] - *(longlong *)(local_2f8[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[2] = 0;
  local_2f8[3] = 7;
  local_2f8[0] = local_2f8[0] & 0xffffffffffff0000;
  if (7 < local_2f8[7]) {
    if ((0xfff < local_2f8[7] * 2 + 2) &&
       (0x1f < (local_2f8[4] - *(longlong *)(local_2f8[4] + -8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[4] = 0;
  local_2f8[5] = 0;
  local_2f8[6] = 0;
  local_2f8[7] = 0;
  FUN_140054cf0(local_2f8 + 4,&PTR_140610690,0);
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_2f8[2] = 0;
  local_2f8[3] = 0;
  FUN_140054cf0(local_2f8,L"{*ToolsIcon*}",0xd);
  FUN_140055000(local_b8,param_4);
  uVar6 = uVar7;
  do {
    pppppuVar5 = local_b8;
    if (7 < local_a0) {
      pppppuVar5 = (undefined8 *****)local_b8[0];
    }
    if ((local_a8 < local_2f8[2]) || (local_a8 - local_2f8[2] < uVar6)) break;
    if (local_2f8[2] != 0) {
      lVar2 = (longlong)pppppuVar5 + local_a8 * 2;
      lVar1 = thunk_FUN_140556fb0((longlong)pppppuVar5 + uVar6 * 2,lVar2);
      if (lVar1 == lVar2) break;
      uVar6 = lVar1 - (longlong)pppppuVar5 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_b8,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_4,local_b8);
  FUN_140055150(local_b8);
  if (7 < local_2f8[3]) {
    if ((0xfff < local_2f8[3] * 2 + 2) &&
       (0x1f < (local_2f8[0] - *(longlong *)(local_2f8[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[2] = 0;
  local_2f8[3] = 7;
  local_2f8[0] = local_2f8[0] & 0xffffffffffff0000;
  if (7 < local_2f8[7]) {
    if ((0xfff < local_2f8[7] * 2 + 2) &&
       (0x1f < (local_2f8[4] - *(longlong *)(local_2f8[4] + -8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[4] = 0;
  local_2f8[5] = 0;
  local_2f8[6] = 0;
  local_2f8[7] = 0;
  FUN_140054cf0(local_2f8 + 4,&PTR_140610690,0);
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_2f8[2] = 0;
  local_2f8[3] = 0;
  FUN_140054cf0(local_2f8,L"{*StoneIcon*}",0xd);
  FUN_140055000(local_98,param_4);
  do {
    pppppuVar5 = local_98;
    if (7 < local_80) {
      pppppuVar5 = (undefined8 *****)local_98[0];
    }
    if ((local_88 < local_2f8[2]) || (local_88 - local_2f8[2] < uVar7)) break;
    if (local_2f8[2] != 0) {
      lVar2 = (longlong)pppppuVar5 + local_88 * 2;
      lVar1 = thunk_FUN_140556fb0((longlong)pppppuVar5 + uVar7 * 2,lVar2);
      if (lVar1 == lVar2) break;
      uVar7 = lVar1 - (longlong)pppppuVar5 >> 1;
    }
    if (uVar7 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_98,uVar7);
    uVar7 = uVar7 + 1;
  } while( true );
  FUN_1400546d0(param_4,local_98);
  FUN_140055150(local_98);
  if (7 < local_2f8[3]) {
    if ((0xfff < local_2f8[3] * 2 + 2) &&
       (0x1f < (local_2f8[0] - *(longlong *)(local_2f8[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2f8[2] = 0;
  local_2f8[3] = 7;
  local_2f8[0] = local_2f8[0] & 0xffffffffffff0000;
  if (7 < local_2f8[7]) {
    if ((0xfff < local_2f8[7] * 2 + 2) &&
       (0x1f < (local_2f8[4] - *(longlong *)(local_2f8[4] + -8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  puVar4 = param_4;
  if (7 < (ulonglong)param_4[3]) {
    puVar4 = (undefined8 *)*param_4;
  }
  lVar2 = FUN_1400a4750(puVar4,param_4[2],0);
  local_2f8[4] = 0;
  local_2f8[5] = 0;
  uVar6 = 0;
  local_2f8[6] = 0;
  local_2f8[7] = 0;
  FUN_140054cf0(local_2f8 + 4,&PTR_140610690,0);
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_2f8[2] = 0;
  local_2f8[3] = 0;
  FUN_140054cf0(local_2f8,L"{*EXIT_PICTURE*}",0x10);
  FUN_140055000(local_78,param_4);
  do {
    pppppuVar5 = local_78;
    if (7 < local_60) {
      pppppuVar5 = (undefined8 *****)local_78[0];
    }
    if ((local_68 < local_2f8[2]) || (local_68 - local_2f8[2] < uVar6)) goto LAB_14027a6ca;
    if (local_2f8[2] != 0) {
      lVar1 = (longlong)pppppuVar5 + local_68 * 2;
      lVar3 = thunk_FUN_140556fb0((longlong)pppppuVar5 + uVar6 * 2,lVar1);
      if (lVar3 == lVar1) {
LAB_14027a6ca:
        FUN_1400546d0(param_4,local_78);
        FUN_140055150(local_78);
        if (7 < local_2f8[3]) {
          if ((0xfff < local_2f8[3] * 2 + 2) &&
             (0x1f < (local_2f8[0] - *(longlong *)(local_2f8[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          thunk_FUN_1401fe000();
        }
        local_2f8[2] = 0;
        local_2f8[3] = 7;
        local_2f8[0] = local_2f8[0] & 0xffffffffffff0000;
        if (7 < local_2f8[7]) {
          if ((0xfff < local_2f8[7] * 2 + 2) &&
             (0x1f < (local_2f8[4] - *(longlong *)(local_2f8[4] + -8)) - 8)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          thunk_FUN_1401fe000();
        }
        FUN_14027fe70(param_1 + 0x478,lVar2 != -1);
        FUN_140039b00(&DAT_1407bb5d0,param_2,param_3,param_4);
        return param_2;
      }
      uVar6 = lVar3 - (longlong)pppppuVar5 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) goto LAB_14027a6ca;
    FUN_1400a47c0(local_78,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
}



// ===== FUN_14027ae00 @ 0x14027ae00 [input] =====

void FUN_14027ae00(undefined8 param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"Setting icon holder to %d\n",param_2);
}



// ===== FUN_14027fe70 @ 0x14027fe70 [input,ui,render] =====

void FUN_14027fe70(longlong param_1,char param_2)

{
  int iVar1;
  
  if (param_2 == *(char *)(param_1 + 0xb4)) {
    return;
  }
  iVar1 = IggyValueSetBooleanRS(param_1 + 0x20,*(undefined8 *)(param_1 + 0x98),0,param_2);
  if (iVar1 != 0) {
    *(char *)(param_1 + 0xb4) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"Failed to set visibility for control\n");
}



// ===== FUN_14027ff20 @ 0x14027ff20 [storage,input] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_14027ff20(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStackY_78 [32];
  longlong local_48 [6];
  
  local_48[4] = DAT_1407502c0 ^ (ulonglong)auStackY_78;
  uVar1 = FUN_14027f750();
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_140054cf0(local_48,L"SetLabel");
  uVar2 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_48);
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  if (7 < (ulonglong)local_48[3]) {
    if (0xfff < local_48[3] * 2 + 2U) {
      if (0x1f < (local_48[0] - *(longlong *)(local_48[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_140054cf0(local_48,L"Init");
  uVar2 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_48);
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  if (7 < (ulonglong)local_48[3]) {
    if (0xfff < local_48[3] * 2 + 2U) {
      if (0x1f < (local_48[0] - *(longlong *)(local_48[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_140054cf0(local_48,L"GetLabel");
  uVar2 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_48);
  *(undefined8 *)(param_1 + 200) = uVar2;
  if (7 < (ulonglong)local_48[3]) {
    if (0xfff < local_48[3] * 2 + 2U) {
      if (0x1f < (local_48[0] - *(longlong *)(local_48[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_140054cf0(local_48,L"CheckLabelWidths");
  uVar2 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_48);
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  if (7 < (ulonglong)local_48[3]) {
    if (0xfff < local_48[3] * 2 + 2U) {
      if (0x1f < (local_48[0] - *(longlong *)(local_48[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  return uVar1;
}



// ===== FUN_140280df0 @ 0x140280df0 [input,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_140280df0(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStackY_78 [32];
  longlong local_48 [6];
  
  local_48[4] = DAT_1407502c0 ^ (ulonglong)auStackY_78;
  *(undefined4 *)(param_1 + 8) = 2;
  uVar1 = FUN_14027ff20();
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_140054cf0(local_48,L"addNewItem");
  uVar2 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_48);
  *(undefined8 *)(param_1 + 0xf0) = uVar2;
  if (7 < (ulonglong)local_48[3]) {
    if (0xfff < local_48[3] * 2 + 2U) {
      if (0x1f < (local_48[0] - *(longlong *)(local_48[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_140054cf0(local_48,L"removeAllItems");
  uVar2 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_48);
  *(undefined8 *)(param_1 + 0xf8) = uVar2;
  if (7 < (ulonglong)local_48[3]) {
    if (0xfff < local_48[3] * 2 + 2U) {
      if (0x1f < (local_48[0] - *(longlong *)(local_48[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_140054cf0(local_48,L"HighlightItem");
  uVar2 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_48);
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  if (7 < (ulonglong)local_48[3]) {
    if (0xfff < local_48[3] * 2 + 2U) {
      if (0x1f < (local_48[0] - *(longlong *)(local_48[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_140054cf0(local_48,L"RemoveItem");
  uVar2 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_48);
  *(undefined8 *)(param_1 + 0x108) = uVar2;
  if (7 < (ulonglong)local_48[3]) {
    if (0xfff < local_48[3] * 2 + 2U) {
      if (0x1f < (local_48[0] - *(longlong *)(local_48[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_140054cf0(local_48,L"SetButtonLabel");
  uVar2 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_48);
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  if (7 < (ulonglong)local_48[3]) {
    if (0xfff < local_48[3] * 2 + 2U) {
      if (0x1f < (local_48[0] - *(longlong *)(local_48[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_140054cf0(local_48,L"SetTouchFocus");
  uVar2 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_48);
  *(undefined8 *)(param_1 + 0x118) = uVar2;
  if (7 < (ulonglong)local_48[3]) {
    if (0xfff < local_48[3] * 2 + 2U) {
      if (0x1f < (local_48[0] - *(longlong *)(local_48[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_140054cf0(local_48,L"CanTouchTrigger");
  uVar2 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_48);
  *(undefined8 *)(param_1 + 0x120) = uVar2;
  if (7 < (ulonglong)local_48[3]) {
    if (0xfff < local_48[3] * 2 + 2U) {
      if (0x1f < (local_48[0] - *(longlong *)(local_48[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  return uVar1;
}



// ===== FUN_140287e60 @ 0x140287e60 [input] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_140287e60(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStackY_78 [32];
  longlong local_48 [6];
  
  local_48[4] = DAT_1407502c0 ^ (ulonglong)auStackY_78;
  *(undefined4 *)(param_1 + 8) = 0x15;
  uVar1 = FUN_14027ff20();
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_140054cf0(local_48,L"addPack");
  uVar2 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_48);
  *(undefined8 *)(param_1 + 0xf0) = uVar2;
  if (7 < (ulonglong)local_48[3]) {
    if (0xfff < local_48[3] * 2 + 2U) {
      if (0x1f < (local_48[0] - *(longlong *)(local_48[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_140054cf0(local_48,L"removeAllItems");
  uVar2 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_48);
  *(undefined8 *)(param_1 + 0x118) = uVar2;
  if (7 < (ulonglong)local_48[3]) {
    if (0xfff < local_48[3] * 2 + 2U) {
      if (0x1f < (local_48[0] - *(longlong *)(local_48[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_140054cf0(local_48,L"SelectSlot");
  uVar2 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_48);
  *(undefined8 *)(param_1 + 0xf8) = uVar2;
  if (7 < (ulonglong)local_48[3]) {
    if (0xfff < local_48[3] * 2 + 2U) {
      if (0x1f < (local_48[0] - *(longlong *)(local_48[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_140054cf0(local_48,L"EnableSelector");
  uVar2 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_48);
  *(undefined8 *)(param_1 + 0x120) = uVar2;
  if (7 < (ulonglong)local_48[3]) {
    if (0xfff < local_48[3] * 2 + 2U) {
      if (0x1f < (local_48[0] - *(longlong *)(local_48[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_140054cf0(local_48,L"SetTouchFocus");
  uVar2 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_48);
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  if (7 < (ulonglong)local_48[3]) {
    if (0xfff < local_48[3] * 2 + 2U) {
      if (0x1f < (local_48[0] - *(longlong *)(local_48[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_140054cf0(local_48,L"CanTouchTrigger");
  uVar2 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_48);
  *(undefined8 *)(param_1 + 0x108) = uVar2;
  if (7 < (ulonglong)local_48[3]) {
    if (0xfff < local_48[3] * 2 + 2U) {
      if (0x1f < (local_48[0] - *(longlong *)(local_48[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_140054cf0(local_48,L"GetRealHeight");
  uVar2 = FUN_14026eb50(*(undefined8 *)(param_1 + 0x48),local_48);
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  if (7 < (ulonglong)local_48[3]) {
    if (0xfff < local_48[3] * 2 + 2U) {
      if (0x1f < (local_48[0] - *(longlong *)(local_48[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  return uVar1;
}



// ===== FUN_1402b8cd0 @ 0x1402b8cd0 [input] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402b8cd0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStackY_98 [32];
  undefined8 *local_68;
  longlong local_60 [7];
  
  local_60[4] = DAT_1407502c0 ^ (ulonglong)auStackY_98;
  FUN_14026db10();
  uVar5 = (**(code **)*param_1)(param_1);
  uVar5 = IggyPlayerRootPath(uVar5);
  puVar7 = param_1 + 0x36;
  local_60[2] = 0xd;
  local_60[3] = 0xf;
  local_60[0] = 0x4c746e6572727543;
  local_60[1] = 0x74756f7961;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x39] = 0;
  puVar1 = param_1 + 0x2a;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x476;
  local_60[1] = 0;
  local_60[2] = 7;
  local_60[3] = 0xf;
  local_60[0] = 0x316e6f74747542;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x479] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x495;
  local_60[1] = 0;
  local_60[2] = 7;
  local_60[3] = 0xf;
  local_60[0] = 0x326e6f74747542;
  (**(code **)param_1[0x495])(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x498] = 0;
  puVar3 = (undefined8 *)param_1[0x2b];
  local_68 = puVar7;
  if (puVar3 == (undefined8 *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,puVar3,&local_68);
  }
  else {
    *puVar3 = puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x4b4;
  local_60[1] = 0;
  local_60[2] = 7;
  local_60[3] = 0xf;
  local_60[0] = 0x336e6f74747542;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x4b7] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x74;
  local_60[2] = 9;
  local_60[3] = 0xf;
  local_60[0] = 0x6361426c6562614c;
  local_60[1] = 0x6b;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x77] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x93;
  local_60[1] = 0;
  local_60[2] = 7;
  local_60[3] = 0xf;
  local_60[0] = 0x544c6c6562614c;
  (**(code **)param_1[0x93])(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x96] = 0;
  puVar3 = (undefined8 *)param_1[0x2b];
  local_68 = puVar7;
  if (puVar3 == (undefined8 *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,puVar3,&local_68);
  }
  else {
    *puVar3 = puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0xb2;
  local_60[1] = 0;
  local_60[2] = 7;
  local_60[3] = 0xf;
  local_60[0] = 0x424c6c6562614c;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xb5] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0xd1;
  local_60[2] = 0xd;
  local_60[3] = 0xf;
  local_60[0] = 0x6150446c6562614c;
  local_60[1] = 0x7466654c64;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xd4] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0xf0;
  local_60[2] = 0xe;
  local_60[3] = 0xf;
  local_60[0] = 0x6150446c6562614c;
  local_60[1] = 0x746867695264;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xf3] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x10f;
  local_60[2] = 0xb;
  local_60[3] = 0xf;
  local_60[0] = 0x6150446c6562614c;
  local_60[1] = 0x705564;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x112] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x12e;
  local_60[2] = 0xd;
  local_60[3] = 0xf;
  local_60[0] = 0x6150446c6562614c;
  local_60[1] = 0x6e776f4464;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x131] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x14d;
  local_60[2] = 9;
  local_60[3] = 0xf;
  local_60[0] = 0x5f534c6c6562614c;
  local_60[1] = 0x31;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x150] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x16c;
  local_60[2] = 9;
  local_60[3] = 0xf;
  local_60[0] = 0x5f534c6c6562614c;
  local_60[1] = 0x32;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x16f] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x18b;
  local_60[2] = 10;
  local_60[3] = 0xf;
  local_60[0] = 0x6174536c6562614c;
  local_60[1] = 0x7472;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x18e] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x1aa;
  local_60[1] = 0;
  local_60[2] = 7;
  local_60[3] = 0xf;
  local_60[0] = 0x54526c6562614c;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x1ad] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x1c9;
  local_60[1] = 0;
  local_60[2] = 7;
  local_60[3] = 0xf;
  local_60[0] = 0x42526c6562614c;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x1cc] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x1e8;
  local_60[1] = 0;
  local_60[2] = 6;
  local_60[3] = 0xf;
  local_60[0] = 0x596c6562614c;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x1eb] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x207;
  local_60[1] = 0;
  local_60[2] = 6;
  local_60[3] = 0xf;
  local_60[0] = 0x426c6562614c;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x20a] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x226;
  local_60[1] = 0;
  local_60[2] = 6;
  local_60[3] = 0xf;
  local_60[0] = 0x416c6562614c;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x229] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x245;
  local_60[1] = 0;
  local_60[2] = 6;
  local_60[3] = 0xf;
  local_60[0] = 0x586c6562614c;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x248] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x264;
  local_60[2] = 9;
  local_60[3] = 0xf;
  local_60[0] = 0x5f53526c6562614c;
  local_60[1] = 0x31;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x267] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x283;
  local_60[2] = 9;
  local_60[3] = 0xf;
  local_60[0] = 0x5f53526c6562614c;
  local_60[1] = 0x32;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x286] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x2a2;
  local_60[2] = 10;
  local_60[3] = 0xf;
  local_60[0] = 0x756f546c6562614c;
  local_60[1] = 0x6863;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x2a5] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x2c1;
  local_60[2] = 8;
  local_60[3] = 0xf;
  local_60[0] = 0x6b636142656e694c;
  local_60[1] = 0;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x2c4] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x2d8;
  local_60[1] = 0;
  local_60[2] = 6;
  local_60[3] = 0xf;
  local_60[0] = 0x544c656e694c;
  (**(code **)param_1[0x2d8])(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x2db] = 0;
  puVar3 = (undefined8 *)param_1[0x2b];
  local_68 = puVar7;
  if (puVar3 == (undefined8 *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,puVar3,&local_68);
  }
  else {
    *puVar3 = puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x2ef;
  local_60[1] = 0;
  local_60[2] = 6;
  local_60[3] = 0xf;
  local_60[0] = 0x424c656e694c;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x2f2] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x306;
  local_60[2] = 0xc;
  local_60[3] = 0xf;
  local_60[0] = 0x64617044656e694c;
  local_60[1] = 0x7466654c;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x309] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x31d;
  local_60[2] = 0xd;
  local_60[3] = 0xf;
  local_60[0] = 0x64617044656e694c;
  local_60[1] = 0x7468676952;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[800] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x334;
  local_60[2] = 10;
  local_60[3] = 0xf;
  local_60[0] = 0x64617044656e694c;
  local_60[1] = 0x7055;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x337] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x34b;
  local_60[2] = 0xc;
  local_60[3] = 0xf;
  local_60[0] = 0x64617044656e694c;
  local_60[1] = 0x6e776f44;
  (**(code **)*puVar7)(puVar7,param_1);
  if (0xf < (ulonglong)local_60[3]) {
    if (0xfff < local_60[3] + 1U) {
      if (0x1f < (local_60[0] - *(longlong *)(local_60[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x34e] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar7;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar7;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar7 = param_1 + 0x362;
  pcVar4 = *(code **)*puVar7;
  FUN_140054bf0(local_60);
  FUN_1400548d0(local_60,"LineL3",6);
  (*pcVar4)(puVar7,param_1,uVar5,local_60);
  FUN_140054b60(local_60);
  param_1[0x365] = 0;
  local_68 = puVar7;
  FUN_140272440(puVar1,&local_68);
  puVar7 = param_1 + 0x379;
  pcVar4 = *(code **)*puVar7;
  FUN_140054990(local_60,"LineLeftStick");
  (*pcVar4)(puVar7,param_1,uVar5,local_60);
  FUN_140054b60(local_60);
  param_1[0x37c] = 0;
  local_68 = puVar7;
  FUN_140272440(puVar1,&local_68);
  puVar7 = param_1 + 0x390;
  pcVar4 = *(code **)*puVar7;
  FUN_140054990(local_60,"LineStart");
  (*pcVar4)(puVar7,param_1,uVar5,local_60);
  FUN_140054b60(local_60);
  param_1[0x393] = 0;
  local_68 = puVar7;
  FUN_140272440(puVar1,&local_68);
  puVar7 = param_1 + 0x3a7;
  pcVar4 = *(code **)*puVar7;
  FUN_140054990(local_60,"LineRT");
  (*pcVar4)(puVar7,param_1,uVar5,local_60);
  FUN_140054b60(local_60);
  param_1[0x3aa] = 0;
  local_68 = puVar7;
  FUN_140272440(puVar1,&local_68);
  puVar7 = param_1 + 0x3be;
  pcVar4 = *(code **)*puVar7;
  FUN_140054990(local_60,"LineRB");
  (*pcVar4)(puVar7,param_1,uVar5,local_60);
  FUN_140054b60(local_60);
  param_1[0x3c1] = 0;
  local_68 = puVar7;
  FUN_140272440(puVar1,&local_68);
  puVar7 = param_1 + 0x3d5;
  pcVar4 = *(code **)*puVar7;
  FUN_140054990(local_60,"LineY");
  (*pcVar4)(puVar7,param_1,uVar5,local_60);
  FUN_140054b60(local_60);
  param_1[0x3d8] = 0;
  local_68 = puVar7;
  FUN_140272440(puVar1,&local_68);
  puVar7 = param_1 + 0x3ec;
  pcVar4 = *(code **)*puVar7;
  FUN_140054990(local_60,"LineB");
  (*pcVar4)(puVar7,param_1,uVar5,local_60);
  FUN_140054b60(local_60);
  param_1[0x3ef] = 0;
  local_68 = puVar7;
  FUN_140272440(puVar1,&local_68);
  puVar7 = param_1 + 0x403;
  pcVar4 = *(code **)*puVar7;
  FUN_140054990(local_60,"LineA");
  (*pcVar4)(puVar7,param_1,uVar5,local_60);
  FUN_140054b60(local_60);
  param_1[0x406] = 0;
  local_68 = puVar7;
  FUN_140272440(puVar1,&local_68);
  puVar7 = param_1 + 0x41a;
  pcVar4 = *(code **)*puVar7;
  FUN_140054990(local_60,"LineX");
  (*pcVar4)(puVar7,param_1,uVar5,local_60);
  FUN_140054b60(local_60);
  param_1[0x41d] = 0;
  local_68 = puVar7;
  FUN_140272440(puVar1,&local_68);
  puVar7 = param_1 + 0x431;
  pcVar4 = *(code **)*puVar7;
  FUN_140054990(local_60,"LineR3");
  (*pcVar4)(puVar7,param_1,uVar5,local_60);
  FUN_140054b60(local_60);
  param_1[0x434] = 0;
  local_68 = puVar7;
  FUN_140272440(puVar1,&local_68);
  puVar7 = param_1 + 0x448;
  pcVar4 = *(code **)*puVar7;
  FUN_140054990(local_60,"LineRightStick");
  (*pcVar4)(puVar7,param_1,uVar5,local_60);
  FUN_140054b60(local_60);
  param_1[1099] = 0;
  local_68 = puVar7;
  FUN_140272440(puVar1,&local_68);
  puVar7 = param_1 + 0x45f;
  pcVar4 = *(code **)*puVar7;
  FUN_140054990(local_60,"LineTouch");
  (*pcVar4)(puVar7,param_1,uVar5,local_60);
  FUN_140054b60(local_60);
  param_1[0x462] = 0;
  local_68 = puVar7;
  FUN_140272440(puVar1,&local_68);
  puVar7 = param_1 + 0x4d3;
  pcVar4 = *(code **)*puVar7;
  FUN_140054990(local_60,"InvertLook");
  (*pcVar4)(puVar7,param_1,uVar5,local_60);
  FUN_140054b60(local_60);
  param_1[0x4d6] = 0;
  local_68 = puVar7;
  FUN_140272440(puVar1,&local_68);
  puVar7 = param_1 + 0x4f5;
  pcVar4 = *(code **)*puVar7;
  FUN_140054990(local_60,"SouthPaw");
  (*pcVar4)(puVar7,param_1,uVar5,local_60);
  FUN_140054b60(local_60);
  param_1[0x4f8] = 0;
  local_68 = puVar7;
  FUN_140272440(puVar1,&local_68);
  FUN_140054de0(local_60,L"SetPlatform");
  uVar6 = FUN_14026eb50(param_1,local_60);
  param_1[0x517] = uVar6;
  FUN_140055150(local_60);
  FUN_140054de0(local_60,L"SetControllerLayout");
  uVar6 = FUN_14026eb50(param_1,local_60);
  param_1[0x518] = uVar6;
  FUN_140055150(local_60);
  puVar7 = param_1 + 0x55;
  pcVar4 = *(code **)*puVar7;
  FUN_140054990(local_60,"Version");
  (*pcVar4)(puVar7,param_1,uVar5,local_60);
  FUN_140054b60(local_60);
  param_1[0x58] = 0;
  local_68 = puVar7;
  FUN_140272440(puVar1,&local_68);
  return 1;
}



// ===== FUN_1403161f0 @ 0x1403161f0 [input] =====

/* WARNING: Removing unreachable block (ram,0x0001403162e5) */
/* WARNING: Removing unreachable block (ram,0x0001403162f6) */
/* WARNING: Removing unreachable block (ram,0x0001403162db) */
/* WARNING: Removing unreachable block (ram,0x0001403162fb) */
/* WARNING: Removing unreachable block (ram,0x000140316313) */
/* WARNING: Removing unreachable block (ram,0x00014031634d) */
/* WARNING: Removing unreachable block (ram,0x000140316328) */

longlong * FUN_1403161f0(longlong *param_1,undefined8 param_2,undefined2 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)FUN_140315fb0(param_2,param_3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar4 = plVar2[1] - *plVar2 >> 5;
  if (uVar4 != 0) {
    if (0x7ffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_140050870();
    }
    lVar3 = FUN_140054e60(uVar4 * 0x20);
    *param_1 = lVar3;
    param_1[1] = lVar3;
    param_1[2] = uVar4 * 0x20 + lVar3;
    lVar1 = plVar2[1];
    for (lVar5 = *plVar2; lVar5 != lVar1; lVar5 = lVar5 + 0x20) {
      FUN_140055000(lVar3,lVar5);
      lVar3 = lVar3 + 0x20;
    }
    param_1[1] = lVar3;
  }
  return param_1;
}



// ===== FUN_140319380 @ 0x140319380 [storage,input] =====

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140319380(void)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_17a8 [32];
  undefined8 local_1788;
  int local_1780;
  ulonglong local_1778;
  undefined8 local_1768;
  undefined4 uStack_1760;
  undefined4 uStack_175c;
  undefined1 local_1758 [8];
  undefined4 uStack_1750;
  undefined4 uStack_174c;
  undefined1 local_1748 [32];
  undefined1 local_1728 [32];
  undefined1 local_1708 [32];
  undefined1 local_16e8 [32];
  undefined1 local_16c8 [32];
  undefined1 local_16a8 [32];
  undefined1 local_1688 [32];
  undefined1 local_1668 [32];
  undefined1 local_1648 [32];
  undefined1 local_1628 [32];
  undefined1 local_1608 [32];
  undefined1 local_15e8 [32];
  undefined1 local_15c8 [32];
  undefined1 local_15a8 [32];
  undefined1 local_1588 [32];
  undefined1 local_1568 [32];
  undefined1 local_1548 [32];
  undefined1 local_1528 [32];
  undefined1 local_1508 [32];
  undefined1 local_14e8 [32];
  undefined1 local_14c8 [32];
  undefined1 local_14a8 [32];
  undefined1 local_1488 [32];
  undefined1 local_1468 [32];
  undefined1 local_1448 [32];
  undefined1 local_1428 [32];
  undefined1 local_1408 [32];
  undefined1 local_13e8 [32];
  undefined1 local_13c8 [32];
  undefined1 local_13a8 [32];
  undefined1 local_1388 [32];
  undefined1 local_1368 [32];
  undefined1 local_1348 [32];
  undefined1 local_1328 [32];
  undefined1 local_1308 [32];
  undefined1 local_12e8 [32];
  undefined1 local_12c8 [32];
  undefined1 local_12a8 [32];
  undefined1 local_1288 [32];
  undefined1 local_1268 [32];
  undefined1 local_1248 [32];
  undefined1 local_1228 [32];
  undefined1 local_1208 [32];
  undefined1 local_11e8 [32];
  undefined1 local_11c8 [32];
  undefined1 local_11a8 [32];
  undefined1 local_1188 [32];
  undefined1 local_1168 [32];
  undefined1 local_1148 [32];
  undefined1 local_1128 [32];
  undefined1 local_1108 [32];
  undefined1 local_10e8 [32];
  undefined1 local_10c8 [32];
  undefined1 local_10a8 [32];
  undefined1 local_1088 [32];
  undefined1 local_1068 [32];
  undefined1 local_1048 [32];
  undefined1 local_1028 [32];
  undefined1 local_1008 [32];
  undefined1 local_fe8 [32];
  undefined1 local_fc8 [32];
  undefined1 local_fa8 [32];
  undefined1 local_f88 [32];
  undefined1 local_f68 [32];
  undefined1 local_f48 [32];
  undefined1 local_f28 [32];
  undefined1 local_f08 [32];
  undefined1 local_ee8 [32];
  undefined1 local_ec8 [32];
  undefined1 local_ea8 [32];
  undefined1 local_e88 [32];
  undefined1 local_e68 [32];
  undefined1 local_e48 [32];
  undefined1 local_e28 [32];
  undefined1 local_e08 [32];
  undefined1 local_de8 [32];
  undefined1 local_dc8 [32];
  undefined1 local_da8 [32];
  undefined1 local_d88 [32];
  undefined1 local_d68 [32];
  undefined1 local_d48 [32];
  undefined1 local_d28 [32];
  undefined1 local_d08 [32];
  undefined1 local_ce8 [32];
  undefined1 local_cc8 [32];
  undefined1 local_ca8 [32];
  undefined1 local_c88 [32];
  undefined1 local_c68 [32];
  undefined1 local_c48 [32];
  undefined1 local_c28 [32];
  undefined1 local_c08 [32];
  undefined1 local_be8 [32];
  undefined1 local_bc8 [32];
  undefined1 local_ba8 [32];
  undefined1 local_b88 [32];
  undefined1 local_b68 [32];
  undefined1 local_b48 [32];
  undefined1 local_b28 [32];
  undefined1 local_b08 [32];
  undefined1 local_ae8 [32];
  undefined1 local_ac8 [32];
  undefined1 local_aa8 [32];
  undefined1 local_a88 [32];
  undefined1 local_a68 [32];
  undefined1 local_a48 [32];
  undefined1 local_a28 [32];
  undefined1 local_a08 [32];
  undefined1 local_9e8 [32];
  undefined1 local_9c8 [32];
  undefined1 local_9a8 [32];
  undefined1 local_988 [32];
  undefined1 local_968 [32];
  undefined1 local_948 [32];
  undefined1 local_928 [32];
  undefined1 local_908 [32];
  undefined1 local_8e8 [32];
  undefined1 local_8c8 [32];
  undefined1 local_8a8 [32];
  undefined1 local_888 [32];
  undefined1 local_868 [32];
  undefined1 local_848 [32];
  undefined1 local_828 [32];
  undefined1 local_808 [32];
  undefined1 local_7e8 [32];
  undefined1 local_7c8 [32];
  undefined1 local_7a8 [32];
  undefined1 local_788 [32];
  undefined1 local_768 [32];
  undefined1 local_748 [32];
  undefined1 local_728 [32];
  undefined1 local_708 [32];
  undefined1 local_6e8 [32];
  undefined1 local_6c8 [32];
  undefined1 local_6a8 [32];
  undefined1 local_688 [32];
  undefined1 local_668 [32];
  undefined1 local_648 [32];
  undefined1 local_628 [32];
  undefined1 local_608 [32];
  undefined1 local_5e8 [32];
  undefined1 local_5c8 [32];
  undefined1 local_5a8 [32];
  undefined1 local_588 [32];
  undefined1 local_568 [32];
  undefined1 local_548 [32];
  undefined1 local_528 [32];
  undefined1 local_508 [32];
  undefined1 local_4e8 [32];
  undefined1 local_4c8 [32];
  undefined1 local_4a8 [32];
  undefined1 local_488 [32];
  undefined1 local_468 [32];
  undefined1 local_448 [32];
  undefined1 local_428 [32];
  undefined1 local_408 [32];
  undefined1 local_3e8 [32];
  undefined1 local_3c8 [32];
  undefined1 local_3a8 [32];
  undefined1 local_388 [32];
  undefined1 local_368 [32];
  undefined1 local_348 [32];
  undefined1 local_328 [32];
  undefined1 local_308 [32];
  undefined1 local_2e8 [32];
  undefined1 local_2c8 [32];
  undefined1 local_2a8 [32];
  undefined1 local_288 [32];
  undefined1 local_268 [32];
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1407502c0 ^ (ulonglong)auStack_17a8;
  local_1778 = local_1778 & 0xffffffff00000000;
  local_1778 = FUN_140558c80(0x18);
  local_1780 = 0xffffffff;
  local_1788._0_4_ = 0xffffffff;
  DAT_1407b3308 = FUN_140324740(local_1778,0,0x3f800000,0x3f800000);
  local_1778 = FUN_140558c80(0x18);
  local_1780 = 0xffffffff;
  local_1788._0_4_ = 0xffffffff;
  DAT_1407b32f8 = FUN_140324740(local_1778,1,0x3f800000,0x3f800000);
  local_1778 = FUN_140558c80(0x18);
  local_1780 = 0xffffffff;
  local_1788._0_4_ = 0xffffffff;
  DAT_1407b3300 = FUN_140324740(local_1778,2,0x3f800000,0x3f800000);
  local_1778 = FUN_140558c80(0x18);
  local_1780 = 0xffffffff;
  local_1788._0_4_ = 0xffffffff;
  DAT_1407b32e8 = FUN_140324740(local_1778,3,0x3f800000,0x3f800000);
  local_1778 = FUN_140558c80(0x18);
  local_1780 = 0xffffffff;
  local_1788._0_4_ = 0xffffffff;
  DAT_1407b32f0 = FUN_140324740(local_1778,0,0x3f800000,0x3f800000);
  local_1778 = FUN_140558c80(0x18);
  local_1780 = 0xffffffff;
  local_1788._0_4_ = 0xffffffff;
  DAT_1407b4340 = FUN_140324740(local_1778,0,0x3f800000,0x3fc00000);
  local_1778 = FUN_140558c80(0x18);
  local_1780 = 0x5e;
  local_1788._0_4_ = 0x42;
  DAT_1407b4348 = FUN_140324740(local_1778,0,0x3f800000,0x3f800000);
  local_1778 = FUN_140558c80(0x18);
  local_1780 = 0xffffffff;
  local_1788._0_4_ = 0xffffffff;
  DAT_1407b4330 = FUN_140324740(local_1778,6,0x3f800000,0x3f800000);
  local_1778 = FUN_140558c80(0x18);
  local_1780 = 0xffffffff;
  local_1788._0_4_ = 0xffffffff;
  DAT_1407b4338 = FUN_140324740(local_1778,7,0x3f800000,0x3f800000);
  local_1778 = FUN_140558c80(0x18);
  local_1780 = 0xffffffff;
  local_1788._0_4_ = 0xffffffff;
  DAT_1407b4320 = FUN_140324740(local_1778,8,0x3f800000,0x3f800000);
  local_1778 = FUN_140558c80(0x18);
  local_1780 = 0xffffffff;
  local_1788._0_4_ = 0x82;
  DAT_1407b4328 = FUN_140324740(local_1778,9,0x3f800000,0x3f800000);
  local_1778 = FUN_140558c80(0x18);
  local_1780 = 0x6f;
  local_1788._0_4_ = 0x81;
  DAT_1407b3310 = FUN_140324740(local_1778,10,0x3e99999a,0x3f800000);
  DAT_1407b4350 = thunk_FUN_140558c80(0x8000);
  FUN_140595d50(DAT_1407b4350,0,0x8000);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_1404549f0(local_1778,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3fc00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x41200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1728,L"stone");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1728);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x2fa);
  DAT_1407aaf10 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x15f);
  FUN_140055150(local_1728);
  local_1778 = FUN_140558c80(0x88);
  plVar3 = (longlong *)FUN_1404152a0(local_1778,2);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f19999a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32e8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1708,L"grass");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1708);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x2fb);
  DAT_1407aaf28 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x199);
  FUN_140055150(local_1708);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_140454a20(local_1778,3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b3300);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_16e8,L"dirt");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_16e8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x2fc);
  DAT_1407aaef8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x160);
  FUN_140055150(local_16e8);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_140321f90(local_1778,4,DAT_1407b9790,1);
  *(undefined4 *)((longlong)plVar3 + 0x3c) = 0x13;
  *(undefined4 *)(plVar3 + 7) = 2;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x41200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_16c8,L"cobblestone");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_16c8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x2fd);
  DAT_1407aaf18 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x168);
  FUN_140055150(local_16c8);
  local_1778 = FUN_140558c80(0x78);
  plVar3 = (longlong *)FUN_140454a50(local_1778,5);
  *(undefined4 *)((longlong)plVar3 + 0x3c) = 0x12;
  *(undefined4 *)(plVar3 + 7) = 1;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_16a8,L"planks");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_16a8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x2fe);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407aaf00 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0xfa);
  FUN_140055150(local_16a8);
  local_1778 = FUN_140558c80(0x78);
  plVar3 = (longlong *)FUN_140454cf0(local_1778,6);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32e8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1688,L"sapling");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1688);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x303);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x161);
  DAT_1407aaeb8 = (**(code **)(*plVar3 + 0x70))(plVar3);
  FUN_140055150(local_1688);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_140321f90(local_1778,7,DAT_1407b9790,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x58))(plVar3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x4ab71b00);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1668,L"bedrock");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1668);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x308);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x300))(plVar3);
  DAT_1407aaf60 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x162);
  FUN_140055150(local_1668);
  local_1778 = FUN_140558c80(0xc0);
  plVar3 = (longlong *)FUN_140455620(local_1778,8,DAT_1407b9798);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x42c80000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,3);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1648,L"water_flow");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1648);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x309);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x300))(plVar3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ae2a0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x18b);
  FUN_140055150(local_1648);
  local_1778 = FUN_140558c80(0x80);
  plVar3 = (longlong *)FUN_1404567a0(local_1778,9,DAT_1407b9798);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x42c80000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,3);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1628,L"water_still");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1628);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x309);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x300))(plVar3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad288 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x18b);
  FUN_140055150(local_1628);
  local_1778 = FUN_140558c80(0xc0);
  plVar3 = (longlong *)FUN_140455620(local_1778,10,DAT_1407b9760);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,0x3f800000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,0xff);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1608,L"lava_flow");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1608);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x30a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x300))(plVar3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad290 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x163);
  FUN_140055150(local_1608);
  local_1778 = FUN_140558c80(0x80);
  plVar3 = (longlong *)FUN_1404567a0(local_1778,0xb,DAT_1407b9760);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x42c80000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,0x3f800000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,0xff);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_15e8,L"lava_still");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_15e8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x30a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x300))(plVar3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad278 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x163);
  FUN_140055150(local_15e8);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_140456eb0(local_1778,0xc,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4338);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_15c8,L"sand");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_15c8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x30b);
  DAT_1407aaea0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x164);
  FUN_140055150(local_15c8);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_140457240(local_1778,0xd);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f19999a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b3300);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_15a8,L"gravel");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_15a8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x30d);
  DAT_1407aaea8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x165);
  FUN_140055150(local_15a8);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_1404572c0(local_1778,0xe);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40400000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1588,L"gold_ore");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1588);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x30e);
  DAT_1407aae50 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x159);
  FUN_140055150(local_1588);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_1404572c0(local_1778,0xf);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40400000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1568,L"iron_ore");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1568);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x30f);
  DAT_1407aae88 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x15a);
  FUN_140055150(local_1568);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_1404572c0(local_1778,0x10);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40400000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1548,L"coal_ore");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1548);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x310);
  DAT_1407aae80 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x15b);
  FUN_140055150(local_1548);
  local_1778 = FUN_140558c80(0xb8);
  plVar3 = (longlong *)FUN_140457660(local_1778,0x11);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1528,&DAT_14064f880);
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1528);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x311);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407aaf08 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x166);
  FUN_140055150(local_1528);
  local_1778 = FUN_140558c80(200);
  plVar3 = (longlong *)FUN_140404a80(local_1778,0x12);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3e4ccccd);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32e8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1508,L"leaves");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1508);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x319);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,3);
  DAT_1407aaed0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x18c);
  FUN_140055150(local_1508);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_140457cb0(local_1778,0x13);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f19999a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32e8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_14e8,L"sponge");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_14e8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x31e);
  _DAT_1407aae70 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x19a);
  FUN_140055150(local_14e8);
  local_1778 = FUN_140558c80(0x98);
  plVar3 = (longlong *)FUN_140457ce0(local_1778,0x14,DAT_1407b9788,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3e99999a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4348);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_14c8,L"glass");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_14c8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,799);
  DAT_1407aaee8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x167);
  FUN_140055150(local_14c8);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_1404572c0(local_1778,0x15);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40400000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_14a8,L"lapis_ore");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_14a8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x372);
  DAT_1407ad280 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x15c);
  FUN_140055150(local_14a8);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_140321f90(local_1778,0x16,DAT_1407b9790,1);
  *(undefined4 *)((longlong)plVar3 + 0x3c) = 0xd;
  *(undefined4 *)(plVar3 + 7) = 9;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40400000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1488,L"lapis_block");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1488);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x373);
  DAT_1407b32d8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x374);
  FUN_140055150(local_1488);
  local_1778 = FUN_140558c80(0x98);
  plVar3 = (longlong *)FUN_14042a1b0(local_1778,0x17);
  *(undefined4 *)((longlong)plVar3 + 0x3c) = 0x28;
  *(undefined4 *)(plVar3 + 7) = 0;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40600000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1468,L"dispenser");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1468);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x375);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407aaf38 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x136);
  FUN_140055150(local_1468);
  local_1778 = FUN_140558c80(0x88);
  plVar3 = (longlong *)FUN_140457e70(local_1778,0x18);
  *(undefined4 *)((longlong)plVar3 + 0x3c) = 0x13;
  *(undefined4 *)(plVar3 + 7) = 0xc;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f4ccccd);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1448,L"sandstone");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1448);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x30c);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0xfb);
  DAT_1407b32e0 = (**(code **)(*plVar3 + 8))(plVar3,0xf);
  FUN_140055150(local_1448);
  local_1778 = FUN_140558c80(0x78);
  plVar3 = (longlong *)FUN_140457fa0(local_1778,0x19);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f4ccccd);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1428,L"noteblock");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1428);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x376);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407b32c8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x137);
  FUN_140055150(local_1428);
  local_1778 = FUN_140558c80(0x88);
  plVar3 = (longlong *)FUN_14040a180(local_1778,0x1a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3e4ccccd);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1408,&DAT_14062d868);
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1408);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x378);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x300))(plVar3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407b32d0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0xfe);
  FUN_140055150(local_1408);
  local_1778 = FUN_140558c80(0x88);
  plVar3 = (longlong *)FUN_1404588e0(local_1778,0x1b);
  *(undefined4 *)((longlong)plVar3 + 0x3c) = 0xc;
  *(undefined4 *)(plVar3 + 7) = 4;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f333333);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4340);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_13e8,L"rail_golden");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_13e8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x35c);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x139);
  DAT_1407b32b8 = (**(code **)(*plVar3 + 0x70))(plVar3);
  FUN_140055150(local_13e8);
  local_1778 = FUN_140558c80(0x88);
  plVar3 = (longlong *)FUN_140458e60(local_1778,0x1c);
  *(undefined4 *)((longlong)plVar3 + 0x3c) = 0xc;
  *(undefined4 *)(plVar3 + 7) = 8;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f333333);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4340);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_13c8,L"rail_detector");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_13c8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x35d);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x13a);
  DAT_1407b32c0 = (**(code **)(*plVar3 + 0x70))(plVar3);
  FUN_140055150(local_13c8);
  local_1778 = FUN_140558c80(0x90);
  plVar3 = (longlong *)FUN_14040c4b0(local_1778,0x1d,1);
  *(undefined4 *)((longlong)plVar3 + 0x3c) = 0x1a;
  *(undefined4 *)(plVar3 + 7) = 0x1c;
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_13a8,L"pistonStickyBase");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_13a8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x381);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,400);
  DAT_1407b32b0 = (**(code **)(*plVar3 + 8))(plVar3,0xf);
  FUN_140055150(local_13a8);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_140459740(local_1778,0x1e);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40800000);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1388,&DAT_14062ebb8);
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1388);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x379);
  (**(code **)(*plVar3 + 0x2d8))(plVar3,0x19b);
  FUN_140055150(local_1388);
  local_1778 = FUN_140558c80(0x78);
  plVar3 = (longlong *)FUN_1404597e0(local_1778,0x1f);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32e8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1368,L"tallgrass");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1368);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x37a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x16e);
  DAT_1407aaf78 = (**(code **)(*plVar3 + 0x70))(plVar3);
  FUN_140055150(local_1368);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_140459d60(local_1778,0x20);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32e8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1348,L"deadbush");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1348);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x37b);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x19f);
  DAT_1407aaf80 = (**(code **)(*plVar3 + 0x70))(plVar3);
  FUN_140055150(local_1348);
  local_1778 = FUN_140558c80(0x90);
  plVar3 = (longlong *)FUN_14040c4b0(local_1778,0x21,0);
  *(undefined4 *)((longlong)plVar3 + 0x3c) = 0x1a;
  *(undefined4 *)(plVar3 + 7) = 0x1b;
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1328,L"pistonBase");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1328);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x380);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,399);
  DAT_1407ad228 = (**(code **)(*plVar3 + 8))(plVar3,0xf);
  FUN_140055150(local_1328);
  local_1778 = FUN_140558c80(0x78);
  plVar3 = (longlong *)FUN_14040e970(local_1778,0x22);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x380);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0xffffffff);
  DAT_1407acfb0 = (**(code **)(*plVar3 + 8))(plVar3,0xf);
  local_1778 = FUN_140558c80(0xf0);
  plVar3 = (longlong *)FUN_140397dc0(local_1778,0x23,DAT_1407b9780);
  *(undefined4 *)((longlong)plVar3 + 0x3c) = 0x10;
  *(undefined4 *)(plVar3 + 7) = 6;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f4ccccd);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4330);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1308,L"wool_colored");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1308);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,800);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407aae78 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x13f);
  FUN_140055150(local_1308);
  local_1778 = FUN_140558c80(0x78);
  plVar3 = (longlong *)FUN_14045a170(local_1778,0x24);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x380);
  DAT_1407ad230 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0xffffffff);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_14045b010(local_1778,0x25);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32e8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_12e8,L"flower_dandelion");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_12e8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x331);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x16f);
  DAT_1407aaec0 = (**(code **)(*plVar3 + 0x70))(plVar3);
  FUN_140055150(local_12e8);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_14045b010(local_1778,0x26);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32e8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_12c8,L"flower_rose");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_12c8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x332);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x16f);
  DAT_1407aaec8 = (**(code **)(*plVar3 + 0x70))(plVar3);
  FUN_140055150(local_12c8);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_14045b250(local_1778,0x27);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32e8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,0x3e000000);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_12a8,L"mushroom_brown");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_12a8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x333);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x170);
  DAT_1407aae90 = (**(code **)(*plVar3 + 0x70))(plVar3);
  FUN_140055150(local_12a8);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_14045b250(local_1778,0x28);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32e8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1288,L"mushroom_red");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1288);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x333);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x170);
  DAT_1407aae98 = (**(code **)(*plVar3 + 0x70))(plVar3);
  FUN_140055150(local_1288);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_14045b850(local_1778,0x29);
  *(undefined4 *)((longlong)plVar3 + 0x3c) = 0xd;
  *(undefined4 *)(plVar3 + 7) = 4;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40400000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x41200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4340);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1268,L"gold_block");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1268);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x334);
  DAT_1407aae60 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x335);
  FUN_140055150(local_1268);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_14045b850(local_1778,0x2a);
  *(undefined4 *)((longlong)plVar3 + 0x3c) = 0xd;
  *(undefined4 *)(plVar3 + 7) = 3;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x41200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4340);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1248,L"iron_block");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1248);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x337);
  DAT_1407aae58 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x336);
  FUN_140055150(local_1248);
  local_1778 = FUN_140558c80(0x80);
  plVar3 = (longlong *)FUN_14045b880(local_1778,0x2b,1);
  *(undefined4 *)((longlong)plVar3 + 0x3c) = 0x14;
  *(undefined4 *)(plVar3 + 7) = 2;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x41200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1228,L"stoneSlab");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1228);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x338);
  DAT_1407ad218 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0xf7);
  FUN_140055150(local_1228);
  local_1778 = FUN_140558c80(0x80);
  plVar3 = (longlong *)FUN_14045b880(local_1778,0x2c,0);
  *(undefined4 *)((longlong)plVar3 + 0x3c) = 0x15;
  *(undefined4 *)(plVar3 + 7) = 2;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x41200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1208,L"stoneSlab");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1208);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x338);
  DAT_1407aaee0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0xf8);
  thunk_FUN_140055150(local_1208);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_140321f90(local_1778,0x2d,DAT_1407b9790,1);
  *(undefined4 *)((longlong)plVar3 + 0x3c) = 0x13;
  *(undefined4 *)(plVar3 + 7) = 0xd;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x41200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_11e8,L"brick");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_11e8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x344);
  DAT_1407aaef0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x169);
  thunk_FUN_140055150(local_11e8);
  local_1778 = FUN_140558c80(0x80);
  plVar3 = (longlong *)FUN_14045bb90(local_1778,0x2e);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32e8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_11c8,&DAT_140633168);
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_11c8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x345);
  DAT_1407aae40 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x107);
  thunk_FUN_140055150(local_11c8);
  local_1778 = FUN_140558c80(0x70);
  uVar4 = FUN_14045c9f0(local_1778,0x2f);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x2b,0x31);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3fc00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_11a8,L"bookshelf");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_11a8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x346);
  DAT_1407aae68 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x157);
  thunk_FUN_140055150(local_11a8);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_140321f90(local_1778,0x30,DAT_1407b9790,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x41200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1188,L"cobblestone_mossy");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1188);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x347);
  DAT_1407aaeb0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x18d);
  thunk_FUN_140055150(local_1188);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_14045ca50(local_1778,0x31);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x42480000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x44fa0000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1168,L"obsidian");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1168);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x348);
  DAT_1407aae48 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x171);
  thunk_FUN_140055150(local_1168);
  local_1778 = FUN_140558c80(0x70);
  uVar4 = FUN_14045ca80(local_1778,0x32);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x16,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,0x3f700000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1148,L"torch_on");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1148);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x349);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0xf9);
  DAT_1407aaed8 = (**(code **)(*plVar3 + 0x70))(plVar3);
  thunk_FUN_140055150(local_1148);
  local_1778 = FUN_140558c80(0x88);
  plVar3 = (longlong *)FUN_140403040(local_1778,0x33);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,0x3f800000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1128,L"fire");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1128);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x34c);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x300))(plVar3);
  DAT_1407aaf30 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0xffffffff);
  thunk_FUN_140055150(local_1128);
  local_1778 = FUN_140558c80(0x78);
  plVar3 = (longlong *)FUN_14045d590(local_1778,0x34);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4340);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1108,L"mob_spawner");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1108);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x34d);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x300))(plVar3);
  DAT_1407acfa0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x172);
  thunk_FUN_140055150(local_1108);
  local_1778 = FUN_140558c80(0x88);
  uVar4 = FUN_140417970(local_1778,0x35,DAT_1407aaf00,0);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0xf,1);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_10e8,L"stairsWood");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_10e8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x34e);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad220 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0xf6);
  thunk_FUN_140055150(local_10e8);
  local_1778 = FUN_140558c80(0x88);
  uVar4 = FUN_1404257a0(local_1778,0x36,0);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x22,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_10c8,L"chest");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_10c8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x34f);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407aae38 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x101);
  thunk_FUN_140055150(local_10c8);
  local_1778 = FUN_140558c80(0xd8);
  plVar3 = (longlong *)FUN_14040ff20(local_1778,0x37);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b3308);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_10a8,L"redstone_dust");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_10a8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x350);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x300))(plVar3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad208 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x173);
  thunk_FUN_140055150(local_10a8);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_1404572c0(local_1778,0x38);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40400000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1088,L"diamond_ore");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1088);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x351);
  DAT_1407ad210 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x15d);
  thunk_FUN_140055150(local_1088);
  local_1778 = FUN_140558c80(0x70);
  uVar4 = FUN_14045b850(local_1778,0x39);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0xd,5);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x41200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4340);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1068,L"diamond_block");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1068);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x352);
  DAT_1407ad1f8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x353);
  thunk_FUN_140055150(local_1068);
  local_1778 = FUN_140558c80(0x80);
  uVar4 = FUN_14045d790(local_1778,0x3a);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x1d,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1048,L"crafting_table");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1048);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x354);
  DAT_1407ad200 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0xff);
  thunk_FUN_140055150(local_1048);
  local_1778 = FUN_140558c80(0x78);
  plVar3 = (longlong *)FUN_14045db00(local_1778,0x3b);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1028,L"wheat");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1028);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x355);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x300))(plVar3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x174);
  DAT_1407ad260 = (**(code **)(*plVar3 + 0x70))(plVar3);
  thunk_FUN_140055150(local_1028);
  local_1778 = FUN_140558c80(0x80);
  plVar3 = (longlong *)FUN_14045e160(local_1778,0x3c);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f19999a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b3300);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_1008,L"farmland");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_1008);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x356);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x175);
  DAT_1407ad270 = (**(code **)(*plVar3 + 8))(plVar3,0xf);
  thunk_FUN_140055150(local_1008);
  local_1778 = FUN_140558c80(0x98);
  uVar4 = FUN_14045e910(local_1778,0x3d,0);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x1d,2);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40600000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_fe8,L"furnace");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_fe8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x357);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407aaf40 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x100);
  thunk_FUN_140055150(local_fe8);
  local_1778 = FUN_140558c80(0x98);
  plVar3 = (longlong *)FUN_14045e910(local_1778,0x3e,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40600000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,0x3f600000);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_fc8,L"furnace");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_fc8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x357);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad250 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x100);
  thunk_FUN_140055150(local_fc8);
  local_1778 = FUN_140558c80(0x80);
  plVar3 = (longlong *)FUN_14045fb50(local_1778,0x3f,0x1001004,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f800000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_fa8,L"sign");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_fa8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x358);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x300))(plVar3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad268 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x105);
  thunk_FUN_140055150(local_fa8);
  local_1778 = FUN_140558c80(0x98);
  plVar3 = (longlong *)FUN_14045ff90(local_1778,0x40,DAT_1407b9778);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40400000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_f88,L"door_wood");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_f88);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x359);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x300))(plVar3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad258 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0xd9);
  thunk_FUN_140055150(local_f88);
  local_1778 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_140460dd0(local_1778,0x41);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3ecccccd);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4328);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_f68,L"ladder");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_f68);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x35a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x103);
  DAT_1407ad240 = (**(code **)(*plVar3 + 0x70))(plVar3);
  thunk_FUN_140055150(local_f68);
  local_1778 = FUN_140558c80(0x88);
  uVar4 = FUN_1404611a0(local_1778,0x42);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0xc,3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f333333);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4340);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_f48,L"rail_normal");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_f48);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x35b);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x138);
  DAT_1407ad248 = (**(code **)(*plVar3 + 0x70))(plVar3);
  thunk_FUN_140055150(local_f48);
  local_1778 = FUN_140558c80(0x88);
  uVar4 = FUN_140417970(local_1778,0x43,DAT_1407aaf18,0);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0xf,2);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_f28,L"stairsStone");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_f28);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x35e);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad238 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0xf6);
  thunk_FUN_140055150(local_f28);
  local_1778 = FUN_140558c80(0x80);
  plVar3 = (longlong *)FUN_14045fb50(local_1778,0x44,0x1001004,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f800000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_f08,L"sign");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_f08);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x358);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x300))(plVar3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  (**(code **)(*plVar3 + 0x2d8))(plVar3,0x105);
  thunk_FUN_140055150(local_f08);
  local_1778 = FUN_140558c80(0x70);
  uVar4 = FUN_140461460(local_1778,0x45);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x2a,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_ee8,L"lever");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_ee8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x35f);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad1a8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x132);
  thunk_FUN_140055150(local_ee8);
  uVar5 = FUN_140558c80(0x98);
  uVar4 = DAT_1407b9790;
  local_1768 = uVar5;
  FUN_140054de0(local_ec8,L"stone");
  local_1778._0_4_ = 1;
  local_1788._0_4_ = 1;
  uVar4 = FUN_1404622f0(uVar5,0x46,local_ec8,uVar4);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0xe,2);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x360);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad1b0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0xf5);
  thunk_FUN_140055150(local_ec8);
  local_1768 = FUN_140558c80(0x98);
  plVar3 = (longlong *)FUN_14045ff90(local_1768,0x47,DAT_1407b9770);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4340);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_ea8,L"door_iron");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_ea8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x361);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x300))(plVar3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad198 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0xda);
  thunk_FUN_140055150(local_ea8);
  uVar5 = FUN_140558c80(0x98);
  uVar4 = DAT_1407b9778;
  local_1768 = uVar5;
  FUN_140054de0(local_e88,L"planks_oak");
  local_1778._0_4_ = 2;
  local_1788 = (ulonglong)local_1788._4_4_ << 0x20;
  uVar4 = FUN_1404622f0(uVar5,0x48,local_e88,uVar4);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0xe,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x360);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad1a0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0xf5);
  thunk_FUN_140055150(local_e88);
  local_1768 = FUN_140558c80(0x78);
  plVar3 = (longlong *)FUN_140462570(local_1768,0x49,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40400000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_e68,L"redstone_ore");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_e68);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x362);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad188 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x15e);
  thunk_FUN_140055150(local_e68);
  local_1768 = FUN_140558c80(0x78);
  plVar3 = (longlong *)FUN_140462570(local_1768,0x4a,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,0x3f200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40400000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_e48,L"redstone_ore");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_e48);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x362);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad190 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x15e);
  thunk_FUN_140055150(local_e48);
  local_1768 = FUN_140558c80(0x78);
  plVar3 = (longlong *)FUN_1404633c0(local_1768,0x4b,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_e28,L"redstone_torch_off");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_e28);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x363);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x133);
  DAT_1407aaf68 = (**(code **)(*plVar3 + 0x70))(plVar3);
  thunk_FUN_140055150(local_e28);
  local_1768 = FUN_140558c80(0x78);
  plVar3 = (longlong *)FUN_1404633c0(local_1768,0x4c,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,0x3f000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_e08,L"redstone_torch_on");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_e08);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x363);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x133);
  DAT_1407aaf70 = (**(code **)(*plVar3 + 0x70))(plVar3);
  thunk_FUN_140055150(local_e08);
  local_1768 = FUN_140558c80(0x78);
  uVar4 = FUN_140464810(local_1768,0x4d);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x21,2);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_de8,L"button");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_de8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x364);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad178 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x135);
  thunk_FUN_140055150(local_de8);
  local_1768 = FUN_140558c80(0x70);
  uVar4 = FUN_140464870(local_1768,0x4e);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x13,0xf);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3dcccccd);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4320);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_dc8,L"snow");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_dc8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x365);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x16d);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad180 = (**(code **)(*plVar3 + 0x20))(plVar3,0);
  thunk_FUN_140055150(local_dc8);
  local_1768 = FUN_140558c80(0x98);
  plVar3 = (longlong *)FUN_140465120(local_1768,0x4f);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4348);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_da8,&DAT_14062f1a8);
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_da8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x366);
  DAT_1407ad1e8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x19e);
  thunk_FUN_140055150(local_da8);
  local_1768 = FUN_140558c80(0x70);
  uVar4 = FUN_1404656f0(local_1768,0x50);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x13,0xf);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3e4ccccd);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4330);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_d88,L"snow");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_d88);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x365);
  DAT_1407aaf20 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x16c);
  thunk_FUN_140055150(local_d88);
  local_1768 = FUN_140558c80(0x80);
  plVar3 = (longlong *)FUN_140465730(local_1768,0x51);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3ecccccd);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4330);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_d68,L"cactus");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_d68);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x367);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x176);
  DAT_1407aaf88 = (**(code **)(*plVar3 + 0x70))(plVar3);
  thunk_FUN_140055150(local_d68);
  local_1768 = FUN_140558c80(0x70);
  uVar4 = FUN_140465ea0(local_1768,0x52);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x13,0xe);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f19999a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b3300);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_d48,L"clay");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_d48);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x368);
  DAT_1407aae28 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x16b);
  thunk_FUN_140055150(local_d48);
  local_1768 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_140465ee0(local_1768,0x53);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32e8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_d28,L"reeds");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_d28);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x369);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x300))(plVar3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x177);
  DAT_1407ad1f0 = (**(code **)(*plVar3 + 0x70))(plVar3);
  thunk_FUN_140055150(local_d28);
  local_1768 = FUN_140558c80(0x80);
  plVar3 = (longlong *)FUN_140466ce0(local_1768,0x54);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x41200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_d08,L"jukebox");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_d08);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x36a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407aae30 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x152);
  thunk_FUN_140055150(local_d08);
  uVar5 = FUN_140558c80(0x90);
  uVar4 = DAT_1407b9778;
  local_1768 = uVar5;
  FUN_140054de0(local_ce8,L"planks_oak");
  local_1778._0_4_ = 4;
  uVar4 = FUN_140467ae0(uVar5,0x55,local_ce8,uVar4);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x1c,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x36b);
  DAT_1407ad1d8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x102);
  thunk_FUN_140055150(local_ce8);
  local_1768 = FUN_140558c80(0x88);
  plVar3 = (longlong *)FUN_140468170(local_1768,0x56,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f800000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_cc8,L"pumpkin");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_cc8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x36c);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407acfa8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x178);
  thunk_FUN_140055150(local_cc8);
  local_1768 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_140469640(local_1768,0x57);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3ecccccd);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_ca8,L"netherrack");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_ca8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x36e);
  DAT_1407ad1e0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x179);
  thunk_FUN_140055150(local_ca8);
  local_1768 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_140469670(local_1768,0x58);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4338);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_c88,L"soul_sand");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_c88);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x36f);
  DAT_1407ad1c8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x17a);
  thunk_FUN_140055150(local_c88);
  local_1768 = FUN_140558c80(0x70);
  uVar4 = FUN_1404697a0(local_1768,0x59,DAT_1407b9788);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x16,0x16);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3e99999a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4348);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,0x3f800000);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_c68,L"glowstone");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_c68);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x370);
  DAT_1407ad1d0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x106);
  thunk_FUN_140055150(local_c68);
  local_1768 = FUN_140558c80(0x98);
  plVar3 = (longlong *)FUN_1404698b0(local_1768,0x5a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0xbf800000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4348);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,0x3f400000);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_c48,L"portal");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_c48);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x371);
  DAT_1407b4358 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x17b);
  thunk_FUN_140055150(local_c48);
  local_1768 = FUN_140558c80(0x88);
  uVar4 = FUN_140468170(local_1768,0x5b,1);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x16,0x15);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f800000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,0x3f800000);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_c28,L"pumpkin");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_c28);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x36d);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad1b8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x154);
  thunk_FUN_140055150(local_c28);
  local_1768 = FUN_140558c80(0x88);
  plVar3 = (longlong *)FUN_14046a8a0(local_1768,0x5c);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4330);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_c08,L"cake");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_c08);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x377);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x300))(plVar3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad1c0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x122);
  thunk_FUN_140055150(local_c08);
  local_1768 = FUN_140558c80(0x78);
  plVar3 = (longlong *)FUN_14040c000(local_1768,0x5d,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_be8,L"repeater_off");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_be8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x2b8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x300))(plVar3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x134);
  DAT_1407ad138 = (**(code **)(*plVar3 + 0x70))(plVar3);
  thunk_FUN_140055150(local_be8);
  local_1768 = FUN_140558c80(0x78);
  plVar3 = (longlong *)FUN_14040c000(local_1768,0x5e,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,0x3f200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_bc8,L"repeater_on");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_bc8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x2b8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x300))(plVar3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x134);
  DAT_1407ad140 = (**(code **)(*plVar3 + 0x70))(plVar3);
  thunk_FUN_140055150(local_bc8);
  local_1768 = FUN_140558c80(0x98);
  uVar4 = FUN_14046b250(local_1768,0x5f,DAT_1407b9788);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x27,0x21);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3e99999a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4348);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_ba8,L"glass");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_ba8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3ca);
  DAT_1407ad128 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1ce);
  thunk_FUN_140055150(local_ba8);
  local_1768 = FUN_140558c80(0x70);
  uVar4 = FUN_14046b600(local_1768,0x60,DAT_1407b9778);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,6,0x18);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40400000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_b88,L"trapdoor");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_b88);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x37e);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x300))(plVar3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad130 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x104);
  thunk_FUN_140055150(local_b88);
  local_1768 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_14046bd60(local_1768,0x61);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f400000);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_b68,L"monsterStoneEgg");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_b68);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x392);
  DAT_1407ad118 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x19c);
  thunk_FUN_140055150(local_b68);
  local_1768 = FUN_140558c80(0x78);
  uVar4 = FUN_14046c120(local_1768,0x62);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x13,0x1e);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3fc00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x41200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_b48,L"stonebrick");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_b48);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,899);
  DAT_1407ad120 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x191);
  thunk_FUN_140055150(local_b48);
  local_1768 = FUN_140558c80(0x90);
  plVar3 = (longlong *)FUN_14046c2c0(local_1768,99,DAT_1407b9778,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3e4ccccd);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_b28,L"mushroom_block");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_b28);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x387);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x170);
  (**(code **)(*plVar3 + 8))(plVar3,0xf);
  thunk_FUN_140055150(local_b28);
  local_1768 = FUN_140558c80(0x90);
  plVar3 = (longlong *)FUN_14046c2c0(local_1768,100,DAT_1407b9778,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3e4ccccd);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_b08,L"mushroom_block");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_b08);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x388);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x170);
  (**(code **)(*plVar3 + 8))(plVar3,0xf);
  thunk_FUN_140055150(local_b08);
  uVar5 = FUN_140558c80(0xc0);
  uVar4 = DAT_1407b9770;
  local_1768 = uVar5;
  FUN_140054de0(local_ac8,L"iron_bars");
  local_1778._0_4_ = 8;
  FUN_140054de0(local_ae8,L"iron_bars");
  local_1778._0_4_ = 0x18;
  local_1780._0_1_ = 1;
  local_1788 = uVar4;
  uVar4 = FUN_140413610(uVar5,0x65,local_ae8,local_ac8);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x1c,3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x41200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4340);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x389);
  DAT_1407ad168 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x192);
  thunk_FUN_140055150(local_ae8);
  thunk_FUN_140055150(local_ac8);
  uVar5 = FUN_140558c80(0xc0);
  uVar4 = DAT_1407b9788;
  local_1768 = uVar5;
  FUN_140054de0(local_a88,L"glass_pane_top");
  local_1778._0_4_ = 0x20;
  FUN_140054de0(local_aa8,L"glass");
  local_1778._0_4_ = 0x60;
  local_1780 = (uint)local_1780._1_3_ << 8;
  local_1788 = uVar4;
  uVar4 = FUN_140413610(uVar5,0x66,local_aa8,local_a88);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x27,0x21);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3e99999a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4348);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x38a);
  DAT_1407ad170 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x195);
  thunk_FUN_140055150(local_aa8);
  thunk_FUN_140055150(local_a88);
  local_1768 = FUN_140558c80(0x78);
  plVar3 = (longlong *)FUN_14046c970(local_1768,0x67);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f800000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_a68,L"melon");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_a68);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x38b);
  DAT_1407ad160 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x194);
  thunk_FUN_140055150(local_a68);
  local_1768 = FUN_140558c80(0x80);
  plVar3 = (longlong *)FUN_140413de0(local_1768,0x68,DAT_1407acfa8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_a48,L"pumpkin_stem");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_a48);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x38c);
  (**(code **)(*plVar3 + 8))(plVar3,0xf);
  thunk_FUN_140055150(local_a48);
  local_1768 = FUN_140558c80(0x80);
  plVar3 = (longlong *)FUN_140413de0(local_1768,0x69,DAT_1407ad160);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_a28,L"melon_stem");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_a28);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x38d);
  (**(code **)(*plVar3 + 8))(plVar3,0xf);
  thunk_FUN_140055150(local_a28);
  local_1768 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_14046cca0(local_1768,0x6a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3e4ccccd);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32e8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_a08,L"vine");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_a08);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x38e);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x19d);
  DAT_1407aae20 = (**(code **)(*plVar3 + 8))(plVar3,0xf);
  thunk_FUN_140055150(local_a08);
  local_1768 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_140415f00(local_1768,0x6b);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_9e8,L"fenceGate");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_9e8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x38f);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad158 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x193);
  thunk_FUN_140055150(local_9e8);
  local_1768 = FUN_140558c80(0x88);
  uVar4 = FUN_140417970(local_1768,0x6c,DAT_1407aaef0,0);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0xf,0xd);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_9c8,L"stairsBrick");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_9c8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x390);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad148 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0xf6);
  thunk_FUN_140055150(local_9c8);
  local_1768 = FUN_140558c80(0x88);
  uVar4 = FUN_140417970(local_1768,0x6d,DAT_1407ad120,0);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0xf,0x1e);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_9a8,L"stairsStoneBrickSmooth");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_9a8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x391);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad150 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0xf6);
  thunk_FUN_140055150(local_9a8);
  local_1768 = FUN_140558c80(0x80);
  plVar3 = (longlong *)FUN_14046e050(local_1768,0x6e);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f19999a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32e8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_988,L"mycelium");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_988);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x395);
  DAT_1407ad0d0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1ae);
  thunk_FUN_140055150(local_988);
  local_1768 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_14046e630(local_1768,0x6f);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32e8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_968,L"waterlily");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_968);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x396);
  DAT_1407ad0d8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1af);
  thunk_FUN_140055150(local_968);
  local_1768 = FUN_140558c80(0x70);
  uVar4 = FUN_140321f90(local_1768,0x70,DAT_1407b9790,1);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x13,0x1f);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x41200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_948,L"nether_brick");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_948);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x397);
  DAT_1407ad0c0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1b0);
  thunk_FUN_140055150(local_948);
  uVar5 = FUN_140558c80(0x90);
  uVar4 = DAT_1407b9790;
  local_1768 = uVar5;
  FUN_140054de0(local_928,L"nether_brick");
  local_1778._0_4_ = 0x80;
  uVar4 = FUN_140467ae0(uVar5,0x71,local_928,uVar4);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x1c,0x1f);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x41200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x398);
  DAT_1407ad0c8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1b1);
  thunk_FUN_140055150(local_928);
  local_1768 = FUN_140558c80(0x88);
  uVar4 = FUN_140417970(local_1768,0x72,DAT_1407ad0c0,0);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0xf,0x1f);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_908,L"stairsNetherBrick");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_908);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x399);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad0b8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0xf6);
  thunk_FUN_140055150(local_908);
  local_1768 = FUN_140558c80(0x88);
  plVar3 = (longlong *)FUN_14046e8c0(local_1768,0x73);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_8e8,L"nether_wart");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_8e8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x39a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1b2);
  thunk_FUN_140055150(local_8e8);
  local_1768 = FUN_140558c80(0x88);
  uVar4 = FUN_14046edd0(local_1768,0x74);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x1d,0x23);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x44fa0000);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_8c8,L"enchanting_table");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_8c8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x39b);
  DAT_1407ad0a8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1b3);
  thunk_FUN_140055150(local_8c8);
  local_1768 = FUN_140558c80(0x88);
  uVar4 = FUN_14046f960(local_1768,0x75);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x1d,0x22);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,0x3e000000);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_8a8,L"brewing_stand");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_8a8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x39c);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad0b0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1aa);
  thunk_FUN_140055150(local_8a8);
  local_1768 = FUN_140558c80(0x88);
  plVar3 = (longlong *)FUN_14040b1a0(local_1768,0x76);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40000000);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_888,L"cauldron");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_888);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x39d);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad108 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1ab);
  thunk_FUN_140055150(local_888);
  local_1768 = FUN_140558c80(0x78);
  plVar3 = (longlong *)FUN_140470a50(local_1768,0x77,DAT_1407b9768);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0xbf800000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x4ab71b00);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x39e);
  DAT_1407ad110 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1b4);
  local_1768 = FUN_140558c80(0x80);
  plVar3 = (longlong *)FUN_140409bb0(local_1768,0x78);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4348);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,0x3e000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0xbf800000);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_868,L"endframe");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_868);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x39f);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x4ab71b00);
  DAT_1407ad0f8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1b5);
  thunk_FUN_140055150(local_868);
  local_1768 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_140321f90(local_1768,0x79,DAT_1407b9790,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40400000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x41700000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_848,L"end_stone");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_848);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3a0);
  DAT_1407ad100 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1b6);
  thunk_FUN_140055150(local_848);
  local_1768 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_1404090d0(local_1768,0x7a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40400000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x41700000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,0x3e000000);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_828,L"dragon_egg");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_828);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3a1);
  DAT_1407acf90 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1b7);
  thunk_FUN_140055150(local_828);
  local_1768 = FUN_140558c80(0x78);
  plVar3 = (longlong *)FUN_140471140(local_1768,0x7b,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3e99999a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4348);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_808,L"redstone_lamp_off");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_808);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3a8);
  DAT_1407ad0f0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1bf);
  thunk_FUN_140055150(local_808);
  local_1768 = FUN_140558c80(0x78);
  plVar3 = (longlong *)FUN_140471140(local_1768,0x7c,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3e99999a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4348);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_7e8,L"redstone_lamp_on");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_7e8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3a8);
  (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1bf);
  thunk_FUN_140055150(local_7e8);
  local_1768 = FUN_140558c80(0x78);
  uVar4 = FUN_140471470(local_1768,0x7d,1);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x14,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_7c8,L"woodSlab");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_7c8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x1bc);
  DAT_1407ad050 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1bc);
  thunk_FUN_140055150(local_7c8);
  local_1768 = FUN_140558c80(0x78);
  uVar4 = FUN_140471470(local_1768,0x7e,0);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x15,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_7a8,L"woodSlab");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_7a8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x1bc);
  DAT_1407ad058 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1bc);
  thunk_FUN_140055150(local_7a8);
  local_1768 = FUN_140558c80(0x78);
  plVar3 = (longlong *)FUN_140414930(local_1768,0x7f);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3e4ccccd);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_788,L"cocoa");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_788);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3a9);
  (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1c0);
  thunk_FUN_140055150(local_788);
  local_1768 = FUN_140558c80(0x88);
  uVar4 = FUN_140417970(local_1768,0x80,DAT_1407b32e0,0);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0xf,0xc);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_768,L"stairsSandstone");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_768);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3a4);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad0e0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0xf6);
  thunk_FUN_140055150(local_768);
  local_1768 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_1404572c0(local_1768,0x81);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40400000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_748,L"emerald_ore");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_748);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x7f3);
  DAT_1407ad040 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x7d3);
  thunk_FUN_140055150(local_748);
  local_1768 = FUN_140558c80(0x78);
  uVar4 = FUN_140471660(local_1768,0x82);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x22,0x20);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x41b40000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x447a0000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_728,L"enderChest");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_728);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,0x3f000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x7f4);
  DAT_1407ad048 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x7d4);
  thunk_FUN_140055150(local_728);
  local_1768 = FUN_140558c80(0x70);
  uVar4 = FUN_140471f00(local_1768,0x83);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x2a,0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_708,L"trip_wire_source");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_708);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x7f5);
  DAT_1407ad098 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x7d5);
  thunk_FUN_140055150(local_708);
  local_1768 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_14040f520(local_1768,0x84);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_6e8,L"trip_wire");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_6e8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x7f6);
  DAT_1407aaf58 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x7d6);
  thunk_FUN_140055150(local_6e8);
  local_1768 = FUN_140558c80(0x70);
  uVar4 = FUN_14045b850(local_1768,0x85);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0xd,0x29);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x41200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4340);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_6c8,L"emerald_block");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_6c8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x7f7);
  DAT_1407ad0a0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x7d7);
  thunk_FUN_140055150(local_6c8);
  local_1768 = FUN_140558c80(0x88);
  uVar4 = FUN_140417970(local_1768,0x86,DAT_1407aaf00,1);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0xf,0x26);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_6a8,L"stairsWoodSpruce");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_6a8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3a5);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad0e8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0xf6);
  thunk_FUN_140055150(local_6a8);
  local_1768 = FUN_140558c80(0x88);
  uVar4 = FUN_140417970(local_1768,0x87,DAT_1407aaf00,2);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0xf,0x27);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_688,L"stairsWoodBirch");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_688);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3a6);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad068 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0xf6);
  thunk_FUN_140055150(local_688);
  local_1768 = FUN_140558c80(0x88);
  uVar4 = FUN_140417970(local_1768,0x88,DAT_1407aaf00,3);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0xf,0x28);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_668,L"stairsWoodJungle");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_668);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3a7);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad070 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0xf6);
  thunk_FUN_140055150(local_668);
  local_1768 = FUN_140558c80(0x78);
  plVar3 = (longlong *)FUN_140472e10(local_1768,0x89);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x58))(plVar3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x4ab71b00);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_648,L"command_block");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_648);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3ab);
  (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1c2);
  thunk_FUN_140055150(local_648);
  local_1768 = FUN_140558c80(0x78);
  plVar3 = (longlong *)FUN_140473700(local_1768,0x8a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,0x3f800000);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_628,L"beacon");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_628);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3ac);
  DAT_1407aaf50 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1c3);
  thunk_FUN_140055150(local_628);
  local_1768 = FUN_140558c80(0x70);
  uVar4 = FUN_140415a90(local_1768,0x8b,DAT_1407ad120);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x1c,2);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_608,L"cobbleWall");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_608);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x7f8);
  DAT_1407ad080 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x7d8);
  thunk_FUN_140055150(local_608);
  local_1768 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_140473c00(local_1768,0x8c);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b3308);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_5e8,L"flower_pot");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_5e8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x7fa);
  DAT_1407ad088 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x7dd);
  thunk_FUN_140055150(local_5e8);
  local_1768 = FUN_140558c80(0x98);
  plVar3 = (longlong *)FUN_140474a10(local_1768,0x8d);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_5c8,L"carrots");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_5c8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x7fb);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x7de);
  (**(code **)(*plVar3 + 0x70))(plVar3);
  thunk_FUN_140055150(local_5c8);
  local_1768 = FUN_140558c80(0x98);
  plVar3 = (longlong *)FUN_140474c00(local_1768,0x8e);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_5a8,L"potatoes");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_5a8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x7fc);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2d8))(plVar3,0x7df);
  DAT_1407ad078 = (**(code **)(*plVar3 + 0x70))(plVar3);
  thunk_FUN_140055150(local_5a8);
  local_1768 = FUN_140558c80(0x78);
  uVar4 = FUN_140474d50(local_1768,0x8f);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x21,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_588,L"button");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_588);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x364);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  DAT_1407ad060 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x135);
  thunk_FUN_140055150(local_588);
  local_1768 = FUN_140558c80(0x78);
  plVar3 = (longlong *)FUN_140474db0(local_1768,0x90);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f800000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_568,L"skull");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_568);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3aa);
  DAT_1407ad090 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1c1);
  thunk_FUN_140055150(local_568);
  local_1768 = FUN_140558c80(0x80);
  uVar4 = FUN_140476e10(local_1768,0x91);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x1d,3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b3310);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x44fa0000);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_548,L"anvil");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_548);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,0xf);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x7fd);
  DAT_1407acf98 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x7d9);
  thunk_FUN_140055150(local_548);
  local_1768 = FUN_140558c80(0x88);
  uVar4 = FUN_1404257a0(local_1768,0x92,1);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x22,0x18);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3ad);
  DAT_1407acff0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1c4);
  uVar5 = FUN_140558c80(0x98);
  uVar4 = DAT_1407b9770;
  local_1768 = uVar5;
  FUN_140054de0(local_528,L"gold_block");
  local_1778._0_4_ = 0x100;
  local_1788._0_4_ = 0xf;
  uVar4 = FUN_140477370(uVar5,0x93,local_528,uVar4);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0xe,4);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3ae);
  DAT_1407acff8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1c5);
  thunk_FUN_140055150(local_528);
  uVar5 = FUN_140558c80(0x98);
  uVar4 = DAT_1407b9770;
  local_1768 = uVar5;
  FUN_140054de0(local_508,L"iron_block");
  local_1778 = CONCAT44(local_1778._4_4_,0x200);
  local_1788._0_4_ = 0x96;
  uVar4 = FUN_140477370(uVar5,0x94,local_508,uVar4);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0xe,3);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3af);
  DAT_1407acfe0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1c6);
  thunk_FUN_140055150(local_508);
  local_1768 = FUN_140558c80(0x80);
  plVar3 = (longlong *)FUN_1404774c0(local_1768,0x95,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_4e8,L"comparator_off");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_4e8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3b0);
  DAT_1407acfe8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x118);
  thunk_FUN_140055150(local_4e8);
  local_1768 = FUN_140558c80(0x80);
  plVar3 = (longlong *)FUN_1404774c0(local_1768,0x96,1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,0x3f200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_4c8,L"comparator_on");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_4c8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3b0);
  DAT_1407acfd0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x118);
  thunk_FUN_140055150(local_4c8);
  local_1768 = FUN_140558c80(0x88);
  plVar3 = (longlong *)FUN_1404784e0(local_1768,0x97);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3e4ccccd);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_4a8,L"daylight_detector");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_4a8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3b1);
  DAT_1407acfd8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x11a);
  thunk_FUN_140055150(local_4a8);
  local_1768 = FUN_140558c80(0x70);
  uVar4 = FUN_140478bf0(local_1768,0x98);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0xd,0x2d);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x41200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4340);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_488,L"redstone_block");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_488);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3b2);
  DAT_1407acfc8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1c7);
  thunk_FUN_140055150(local_488);
  local_1768 = FUN_140558c80(0x70);
  plVar3 = (longlong *)FUN_1404572c0(local_1768,0x99);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40400000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_468,L"quartz_ore");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_468);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x801);
  (**(code **)(*plVar3 + 0x2d8))(plVar3,0x7da);
  thunk_FUN_140055150(local_468);
  local_1768 = FUN_140558c80(0xa8);
  uVar4 = FUN_140416580(local_1768,0x9a);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x28,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40400000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x41000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_448,L"hopper");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_448);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3b3);
  DAT_1407ad030 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1c8);
  thunk_FUN_140055150(local_448);
  local_1768 = FUN_140558c80(0xb8);
  uVar4 = FUN_140478c20(local_1768,0x9b);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x13,0x2a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f4ccccd);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_428,L"quartz_block");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_428);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x802);
  DAT_1407ad038 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x7db);
  thunk_FUN_140055150(local_428);
  local_1768 = FUN_140558c80(0x88);
  uVar4 = FUN_140417970(local_1768,0x9c,DAT_1407ad038,0);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0xf,0x2a);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_408,L"stairsQuartz");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_408);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x805);
  DAT_1407ad020 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0xf6);
  thunk_FUN_140055150(local_408);
  local_1768 = FUN_140558c80(0x88);
  plVar3 = (longlong *)FUN_1404588e0(local_1768,0x9d);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f333333);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4340);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_3e8,L"rail_activator");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_3e8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3b4);
  DAT_1407ad028 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1c9);
  thunk_FUN_140055150(local_3e8);
  local_1768 = FUN_140558c80(0xa0);
  uVar4 = FUN_140479770(local_1768,0x9e);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x28,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40600000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_3c8,L"dropper");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_3c8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3b5);
  DAT_1407aaf48 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1ca);
  thunk_FUN_140055150(local_3c8);
  local_1768 = FUN_140558c80(0xf0);
  uVar4 = FUN_140397dc0(local_1768,0x9f,DAT_1407b9790);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x26,0xe);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3fa00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x40e00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_3a8,L"hardened_clay_stained");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_3a8);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3b6);
  DAT_1407ad010 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1cb);
  thunk_FUN_140055150(local_3a8);
  local_1768 = FUN_140558c80(0xc0);
  uVar4 = FUN_140412f60(local_1768,0xa0);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x27,0x21);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3e99999a);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4348);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_388,L"glass");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_388);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3db);
  DAT_1407ad018 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1cf);
  thunk_FUN_140055150(local_388);
  local_1768 = FUN_140558c80(0x78);
  uVar4 = FUN_14047a2a0(local_1768,0xaa);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0xd,0x32);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3f000000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32e8);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_368,L"hay_block");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_368);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3b7);
  DAT_1407ad000 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1cc);
  thunk_FUN_140055150(local_368);
  local_1768 = FUN_140558c80(0x70);
  uVar4 = FUN_14047a4e0(local_1768,0xab);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x25,6);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3dcccccd);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b4330);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_348,L"woolCarpet");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_348);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,0);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x806);
  DAT_1407ad008 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x7e7);
  thunk_FUN_140055150(local_348);
  local_1768 = FUN_140558c80(0x70);
  uVar4 = FUN_140321f90(local_1768,0xac,DAT_1407b9790,1);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0x26,0xe);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x3fa00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x40e00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_328,L"hardened_clay");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_328);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3b8);
  DAT_1407acfb8 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1cd);
  thunk_FUN_140055150(local_328);
  local_1768 = FUN_140558c80(0x70);
  uVar4 = FUN_140321f90(local_1768,0xad,DAT_1407b9790,1);
  plVar3 = (longlong *)FUN_1403220b0(uVar4,0xd,0x2e);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,0x40a00000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3,0x41200000);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,DAT_1407b32f0);
  pcVar1 = *(code **)(*plVar3 + 0x380);
  FUN_140054de0(local_308,L"coal_block");
  plVar3 = (longlong *)(*pcVar1)(plVar3,local_308);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3,0x3b9);
  DAT_1407acfc0 = (**(code **)(*plVar3 + 0x2d8))(plVar3,0x1d0);
  thunk_FUN_140055150(local_308);
  local_1768 = FUN_140558c80(0xa8);
  uVar4 = FUN_14047a810(local_1768,0xffffff23);
  FUN_140054de0(local_2e8,L"cloth");
  uVar4 = FUN_1403590d0(uVar4,local_2e8);
  uVar4 = FUN_140359510(uVar4,800);
  uVar4 = FUN_140359590(uVar4,0x13f);
  puVar6 = (undefined8 *)FUN_14006a410(&DAT_1407bdbd0,0x23);
  *puVar6 = uVar4;
  thunk_FUN_140055150(local_2e8);
  local_1768 = FUN_140558c80(0xa8);
  uVar4 = FUN_14047a810(local_1768,0xffffff9f);
  FUN_140054de0(local_2c8,L"clayHardenedStained");
  uVar4 = FUN_1403590d0(uVar4,local_2c8);
  uVar4 = FUN_140359510(uVar4,0x3b6);
  uVar4 = FUN_140359590(uVar4,0x1cb);
  puVar6 = (undefined8 *)FUN_14006a410(&DAT_1407bdbd0,0x9f);
  *puVar6 = uVar4;
  thunk_FUN_140055150(local_2c8);
  local_1768 = FUN_140558c80(0xa8);
  uVar4 = FUN_14047a810(local_1768,0xffffff5f);
  FUN_140054de0(local_2a8,L"stainedGlass");
  uVar4 = FUN_1403590d0(uVar4,local_2a8);
  uVar4 = FUN_140359510(uVar4,0x3ca);
  uVar4 = FUN_140359590(uVar4,0x1ce);
  puVar6 = (undefined8 *)FUN_14006a410(&DAT_1407bdbd0,0x5f);
  *puVar6 = uVar4;
  thunk_FUN_140055150(local_2a8);
  local_1768 = FUN_140558c80(0xa8);
  uVar4 = FUN_14047a810(local_1768,0xffffffa0);
  FUN_140054de0(local_288,L"stainedGlassPane");
  uVar4 = FUN_1403590d0(uVar4,local_288);
  uVar4 = FUN_140359510(uVar4,0x3db);
  uVar4 = FUN_140359590(uVar4,0x1cf);
  puVar6 = (undefined8 *)FUN_14006a410(&DAT_1407bdbd0,0xa0);
  *puVar6 = uVar4;
  FUN_140055150(local_288);
  local_1768 = FUN_140558c80(0xa8);
  lVar7 = FUN_14047a810(local_1768,0xffffffab);
  FUN_140054de0(local_268,L"woolCarpet");
  FUN_140054b30(lVar7 + 0x78,local_268);
  *(undefined4 *)(lVar7 + 0x70) = 0x806;
  *(undefined4 *)(lVar7 + 0x74) = 0x7e7;
  *(longlong *)(DAT_1407bdbd0 + 0x558) = lVar7;
  FUN_140055150(local_268);
  local_1768 = FUN_140558c80(0xc0);
  local_1780 = 0xffffffff;
  local_1788._0_4_ = 4;
  lVar7 = FUN_14047a9d0(local_1768,0xffffff11,DAT_1407aaf08,&DAT_140610188);
  FUN_140054de0(local_248,&DAT_14064f880);
  FUN_140054b30(lVar7 + 0x78,local_248);
  *(undefined4 *)(lVar7 + 0x70) = 0x311;
  *(undefined4 *)(lVar7 + 0x74) = 0x166;
  *(longlong *)(DAT_1407bdbd0 + 0x88) = lVar7;
  FUN_140055150(local_248);
  local_1768 = FUN_140558c80(0xc0);
  local_1780 = 0x302;
  local_1788._0_4_ = 4;
  lVar7 = FUN_14047a9d0(local_1768,0xffffff05,DAT_1407aaf00,&DAT_140610178);
  FUN_140054de0(local_228,L"wood");
  FUN_140054b30(lVar7 + 0x78,local_228);
  *(undefined4 *)(lVar7 + 0x70) = 0x2fe;
  *(undefined4 *)(lVar7 + 0x74) = 0x166;
  *(longlong *)(DAT_1407bdbd0 + 0x28) = lVar7;
  FUN_140055150(local_228);
  local_1768 = FUN_140558c80(0xc0);
  local_1780 = 0xffffffff;
  local_1788._0_4_ = 3;
  lVar7 = FUN_14047a9d0(local_1768,0xffffff61,DAT_1407ad118,&DAT_1406101d0);
  FUN_140054de0(local_208,L"monsterStoneEgg");
  FUN_140054b30(lVar7 + 0x78,local_208);
  *(undefined4 *)(lVar7 + 0x70) = 0x392;
  *(undefined4 *)(lVar7 + 0x74) = 0x19c;
  *(longlong *)(DAT_1407bdbd0 + 0x308) = lVar7;
  FUN_140055150(local_208);
  local_1768 = FUN_140558c80(0xc0);
  local_1780 = 0xffffffff;
  local_1788._0_4_ = 4;
  lVar7 = FUN_14047a9d0(local_1768,0xffffff62,DAT_1407ad120,&DAT_1406101e0);
  FUN_140054de0(local_1e8,L"stonebricksmooth");
  FUN_140054b30(lVar7 + 0x78,local_1e8);
  *(undefined4 *)(lVar7 + 0x70) = 899;
  *(longlong *)(DAT_1407bdbd0 + 0x310) = lVar7;
  FUN_140055150(local_1e8);
  local_1768 = FUN_140558c80(0xc0);
  local_1780 = 0xffffffff;
  local_1788._0_4_ = 3;
  lVar7 = FUN_14047a9d0(local_1768,0xffffff18,DAT_1407b32e0,&DAT_14076cb80);
  FUN_140054de0(local_1c8,L"sandStone");
  FUN_140054b30(lVar7 + 0x78,local_1c8);
  *(undefined4 *)(lVar7 + 0x70) = 0x30c;
  *(undefined4 *)(lVar7 + 0x74) = 0xfb;
  *(longlong *)(DAT_1407bdbd0 + 0xc0) = lVar7;
  FUN_140055150(local_1c8);
  local_1768 = FUN_140558c80(0xc0);
  local_1780 = 0xffffffff;
  local_1788 = CONCAT44(local_1788._4_4_,5);
  lVar7 = FUN_14047a9d0(local_1768,0xffffff9b,DAT_1407ad038,&DAT_14076cb90);
  FUN_140054de0(local_1a8,L"quartzBlock");
  FUN_140054b30(lVar7 + 0x78,local_1a8);
  *(undefined4 *)(lVar7 + 0x70) = 0x802;
  *(undefined4 *)(lVar7 + 0x74) = 0x7db;
  *(longlong *)(DAT_1407bdbd0 + 0x4d8) = lVar7;
  FUN_140055150(local_1a8);
  local_1768 = FUN_140558c80(0xc0);
  local_1788 = local_1788 & 0xffffffffffffff00;
  lVar7 = FUN_14047ab30(local_1768,0xffffff2c,DAT_1407aaee0,DAT_1407ad218);
  FUN_140054de0(local_188,L"stoneSlab");
  FUN_140054b30(lVar7 + 0x78,local_188);
  *(undefined4 *)(lVar7 + 0x70) = 0x338;
  *(undefined4 *)(lVar7 + 0x74) = 0xf8;
  *(longlong *)(DAT_1407bdbd0 + 0x160) = lVar7;
  FUN_140055150(local_188);
  local_1768 = FUN_140558c80(0xc0);
  local_1788._0_1_ = 1;
  lVar7 = FUN_14047ab30(local_1768,0xffffff2b,DAT_1407aaee0,DAT_1407ad218);
  FUN_140054de0(local_168,L"stoneSlab");
  FUN_140054b30(lVar7 + 0x78,local_168);
  *(undefined4 *)(lVar7 + 0x70) = 0x1bd;
  *(undefined4 *)(lVar7 + 0x74) = 0xf7;
  *(longlong *)(DAT_1407bdbd0 + 0x158) = lVar7;
  FUN_140055150(local_168);
  local_1768 = FUN_140558c80(0xc0);
  local_1788._0_1_ = 0;
  uVar4 = FUN_14047ab30(local_1768,0xffffff7e,DAT_1407ad058,DAT_1407ad050);
  FUN_140054de0(local_148,L"woodSlab");
  uVar4 = FUN_1403590d0(uVar4,local_148);
  uVar4 = FUN_140359510(uVar4,0x1bc);
  uVar4 = FUN_140359590(uVar4,0x1bc);
  puVar6 = (undefined8 *)FUN_14006a410(&DAT_1407bdbd0,0x7e);
  *puVar6 = uVar4;
  thunk_FUN_140055150(local_148);
  local_1768 = FUN_140558c80(0xc0);
  local_1788 = CONCAT71(local_1788._1_7_,1);
  uVar4 = FUN_14047ab30(local_1768,0xffffff7d,DAT_1407ad058,DAT_1407ad050);
  FUN_140054de0(local_128,L"woodSlab");
  uVar4 = FUN_1403590d0(uVar4,local_128);
  uVar4 = FUN_140359510(uVar4,0x1bc);
  uVar4 = FUN_140359590(uVar4,0x1bc);
  puVar6 = (undefined8 *)FUN_14006a410(&DAT_1407bdbd0,0x7d);
  *puVar6 = uVar4;
  thunk_FUN_140055150(local_128);
  local_1768 = FUN_140558c80(0xc0);
  local_1780 = 0xffffffff;
  local_1788._0_4_ = 4;
  uVar4 = FUN_14047a9d0(local_1768,0xffffff06,DAT_1407aaeb8,&DAT_14076cb70);
  FUN_140054de0(local_108,L"sapling");
  uVar4 = FUN_1403590d0(uVar4,local_108);
  uVar4 = FUN_140359510(uVar4,0x303);
  uVar4 = FUN_140359590(uVar4,0x161);
  puVar6 = (undefined8 *)FUN_14006a410(&DAT_1407bdbd0,6);
  *puVar6 = uVar4;
  thunk_FUN_140055150(local_108);
  local_1768 = FUN_140558c80(0xa8);
  uVar4 = FUN_14047b7b0(local_1768,0xffffff12);
  FUN_140054de0(local_1748,L"leaves");
  uVar4 = FUN_1403590d0(uVar4,local_1748);
  uVar4 = FUN_140359510(uVar4,0x319);
  uVar4 = FUN_140359590(uVar4,0x18c);
  puVar6 = (undefined8 *)FUN_14006a410(&DAT_1407bdbd0,0x12);
  *puVar6 = uVar4;
  thunk_FUN_140055150(local_1748);
  local_1768 = FUN_140558c80(0xc0);
  uVar4 = FUN_14047b940(local_1768,0xffffff6a,0);
  uVar4 = FUN_140359510(uVar4,0x38e);
  uVar4 = FUN_140359590(uVar4,0x19d);
  puVar6 = (undefined8 *)FUN_14006a410(&DAT_1407bdbd0,0x6a);
  *puVar6 = uVar4;
  local_e8 = 0x3a2;
  local_e4 = 0x37a;
  local_e0 = 0x3a3;
  FUN_1400a62c0(local_1758,&local_e8,3);
  local_1768 = FUN_140558c80(0xc0);
  uVar4 = FUN_14047b940(local_1768,0xffffff1f,1);
  uVar4 = FUN_140359510(uVar4,0x37a);
  uStack_1760 = uStack_1750;
  uStack_175c = uStack_174c;
  uVar4 = FUN_14047ba70(uVar4,&local_1768);
  puVar6 = (undefined8 *)FUN_14006a410(&DAT_1407bdbd0,0x1f);
  *puVar6 = uVar4;
  local_1768 = FUN_140558c80(0xb0);
  uVar4 = FUN_14047bcb0(local_1768,0xffffff4e,DAT_1407ad180);
  puVar6 = (undefined8 *)FUN_14006a410(&DAT_1407bdbd0,0x4e);
  *puVar6 = uVar4;
  local_1768 = FUN_140558c80(0xc0);
  uVar4 = FUN_14047c170(local_1768,0xffffff6f);
  puVar6 = (undefined8 *)FUN_14006a410(&DAT_1407bdbd0,0x6f);
  *puVar6 = uVar4;
  local_1768 = FUN_140558c80(0xa8);
  uVar4 = FUN_14047c810(local_1768,0xffffff21);
  uVar4 = FUN_140359510(uVar4,0x380);
  uVar4 = FUN_140359590(uVar4,399);
  puVar6 = (undefined8 *)FUN_14006a410(&DAT_1407bdbd0,0x21);
  *puVar6 = uVar4;
  local_1768 = FUN_140558c80(0xa8);
  uVar4 = FUN_14047c810(local_1768,0xffffff1d);
  uVar4 = FUN_140359510(uVar4,0x381);
  uVar4 = FUN_140359590(uVar4,400);
  puVar6 = (undefined8 *)FUN_14006a410(&DAT_1407bdbd0,0x1d);
  *puVar6 = uVar4;
  local_1768 = FUN_140558c80(0xc0);
  local_1780 = 0xffffffff;
  local_1788 = CONCAT44(local_1788._4_4_,2);
  uVar4 = FUN_14047a9d0(local_1768,0xffffff8b,DAT_1407ad080,&DAT_140610080);
  uVar4 = FUN_140359510(uVar4,0x7f8);
  uVar4 = FUN_140359590(uVar4,0x7d8);
  puVar6 = (undefined8 *)FUN_14006a410(&DAT_1407bdbd0,0x8b);
  *puVar6 = uVar4;
  local_1768 = FUN_140558c80(0xc0);
  uVar4 = FUN_14047c860(local_1768,DAT_1407acf98);
  uVar4 = FUN_140359510(uVar4,0x7fd);
  uVar4 = FUN_140359590(uVar4,0x7d9);
  puVar6 = (undefined8 *)FUN_14006a410(&DAT_1407bdbd0,0x91);
  *puVar6 = uVar4;
  lVar9 = 0;
  lVar7 = 0;
  iVar10 = -0x100;
  do {
    if (*(longlong *)(lVar7 + DAT_1407b4350) != 0) {
      if (*(longlong *)(DAT_1407bdbd0 + lVar9 * 8) == 0) {
        local_1768 = FUN_140558c80(0xa8);
        uVar4 = FUN_14047c920(local_1768,iVar10);
        *(undefined8 *)(DAT_1407bdbd0 + lVar9 * 8) = uVar4;
        (**(code **)(**(longlong **)(DAT_1407b4350 + lVar9 * 8) + 0x10))();
      }
      bVar11 = false;
      if (lVar9 != 0) {
        iVar2 = (**(code **)(**(longlong **)(DAT_1407b4350 + lVar9 * 8) + 0x48))();
        bVar11 = iVar2 == 10;
        local_1788 = local_1788 & 0xffffffff00000000;
        lVar8 = FUN_14055b4d8(*(undefined8 *)(DAT_1407b4350 + lVar9 * 8),0,
                              &Tile::RTTI_Type_Descriptor,&HalfSlabTile::RTTI_Type_Descriptor);
        if (lVar8 != 0) {
          bVar11 = true;
        }
      }
      if (lVar9 == 0x3c) {
        bVar11 = true;
      }
      if ((&DAT_1407abf90)[lVar9] != '\0') {
        bVar11 = true;
      }
      if ((&DAT_1407ae2b0)[lVar9] == 0) {
        bVar11 = true;
      }
      (&DAT_1407ad2a0)[lVar9] = bVar11;
    }
    iVar10 = iVar10 + 1;
    lVar9 = lVar9 + 1;
    lVar7 = lVar7 + 8;
  } while (lVar9 < 0x100);
  DAT_1407abf90 = 1;
  DAT_1407912b7 = 1;
  FUN_140392010();
  return;
}



// ===== FUN_140321f90 @ 0x140321f90 [input] =====

longlong * FUN_140321f90(longlong *param_1,int param_2,longlong *param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  
  *param_1 = (longlong)Tile::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 7;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x101;
  param_1[8] = DAT_1407b3308;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb) = 0x3f19999a;
  param_1[10] = (longlong)param_3;
  lVar2 = (longlong)param_2;
  *(longlong **)(DAT_1407b4350 + lVar2 * 8) = param_1;
  *(int *)(param_1 + 5) = param_2;
  (**(code **)(*param_1 + 0x280))();
  (&DAT_1407b3320)[lVar2] = param_4;
  (&DAT_1407ae2b0)[lVar2] = -(uint)(param_4 != '\0') & 0xff;
  cVar1 = (**(code **)(*param_3 + 0x18))(param_3);
  (&DAT_1407abf90)[lVar2] = cVar1 == '\0';
  (&DAT_1407aaf90)[lVar2] = 1;
  FUN_1400549d0(param_1 + 1,&PTR_140610690,0);
  param_1[7] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// ===== FUN_1403220b0 @ 0x1403220b0 [input] =====

longlong FUN_1403220b0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  *(undefined4 *)(param_1 + 0x38) = param_3;
  return param_1;
}



// ===== FUN_140324740 @ 0x140324740 [input] =====

undefined4 *
FUN_140324740(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             uint param_5,uint param_6)

{
  *param_1 = param_2;
  if (0x7fffffff < param_5) {
    switch(param_2) {
    case 0:
    case 4:
      param_5 = 0x81;
      break;
    case 1:
    case 9:
      param_5 = 0x82;
      break;
    case 2:
      param_5 = 0x7e;
      break;
    case 3:
      param_5 = 0x7d;
      break;
    case 5:
      param_5 = 0x42;
      break;
    case 6:
      param_5 = 0x7c;
      break;
    case 7:
      param_5 = 0x7f;
      break;
    case 8:
      param_5 = 0x80;
      break;
    default:
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,"NO BREAK SOUND!\n");
    }
  }
  param_1[1] = param_5;
  if (-1 < (int)param_6) {
    param_5 = param_6;
  }
  param_1[3] = param_5;
  switch(param_2) {
  case 0:
    param_1[2] = 0x5e;
    break;
  case 1:
    param_1[2] = 0x5f;
    break;
  case 2:
    param_1[2] = 0x60;
    break;
  case 3:
    param_1[2] = 0x61;
    break;
  case 4:
    param_1[2] = 0x62;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"NO STEP SOUND!\n");
  case 6:
    param_1[2] = 99;
    break;
  case 7:
    param_1[2] = 100;
    break;
  case 8:
    param_1[2] = 0x7a;
    break;
  case 9:
    param_1[2] = 0x7b;
  }
  param_1[4] = param_3;
  param_1[5] = param_4;
  return param_1;
}



// ===== FUN_140352d80 @ 0x140352d80 [input] =====

undefined8 * FUN_140352d80(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x93);
  *param_1 = EnchantedBookItem::vftable;
  return param_1;
}



// ===== FUN_140354290 @ 0x140354290 [storage,input] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140354290(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined4 local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1407502c0 ^ (ulonglong)auStack_a8;
  local_78 = local_78 & 0xffffffff00000000;
  local_78 = FUN_140558c80(0xa8);
  lVar1 = FUN_1404aff60(local_78,0xc,DAT_1407bdba0);
  *(undefined4 *)(lVar1 + 0x38) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = 1;
  FUN_140054de0(local_68,L"swordWood");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x243;
  *(undefined4 *)(lVar1 + 0x74) = 0xd4;
  DAT_1407b89d8 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa8);
  lVar1 = FUN_1404aff60(local_78,0x10,DAT_1407bdba8);
  *(undefined4 *)(lVar1 + 0x38) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = 2;
  FUN_140054de0(local_68,L"swordStone");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x244;
  *(undefined4 *)(lVar1 + 0x74) = 0xd4;
  DAT_1407b89c0 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa8);
  lVar1 = FUN_1404aff60(local_78,0xb,DAT_1407bdbb0);
  *(undefined4 *)(lVar1 + 0x38) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = 3;
  FUN_140054de0(local_68,L"swordIron");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x245;
  *(undefined4 *)(lVar1 + 0x74) = 0xd4;
  DAT_1407b89e0 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa8);
  lVar1 = FUN_1404aff60(local_78,0x14,DAT_1407bdbb8);
  *(undefined4 *)(lVar1 + 0x38) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = 5;
  FUN_140054de0(local_68,L"swordDiamond");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x246;
  *(undefined4 *)(lVar1 + 0x74) = 0xd4;
  DAT_1407b89b8 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa8);
  lVar1 = FUN_1404aff60(local_78,0x1b,DAT_1407bdbc0);
  *(undefined4 *)(lVar1 + 0x38) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = 4;
  FUN_140054de0(local_68,L"swordGold");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x247;
  *(undefined4 *)(lVar1 + 0x74) = 0xd4;
  DAT_1407b8960 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb0);
  lVar1 = FUN_1404b0910(local_78,0xd,DAT_1407bdba0);
  *(undefined4 *)(lVar1 + 0x38) = 2;
  *(undefined4 *)(lVar1 + 0x3c) = 1;
  FUN_140054de0(local_68,L"shovelWood");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x248;
  *(undefined4 *)(lVar1 + 0x74) = 0xd5;
  DAT_1407b8b60 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb0);
  lVar1 = FUN_1404b0910(local_78,0x11,DAT_1407bdba8);
  *(undefined4 *)(lVar1 + 0x38) = 2;
  *(undefined4 *)(lVar1 + 0x3c) = 2;
  FUN_140054de0(local_68,L"shovelStone");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x249;
  *(undefined4 *)(lVar1 + 0x74) = 0xd5;
  DAT_1407b8b48 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb0);
  lVar1 = FUN_1404b0910(local_78,0,DAT_1407bdbb0);
  *(undefined4 *)(lVar1 + 0x38) = 2;
  *(undefined4 *)(lVar1 + 0x3c) = 3;
  FUN_140054de0(local_68,L"shovelIron");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x24a;
  *(undefined4 *)(lVar1 + 0x74) = 0xd5;
  DAT_1407b8b50 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb0);
  lVar1 = FUN_1404b0910(local_78,0x15,DAT_1407bdbb8);
  *(undefined4 *)(lVar1 + 0x38) = 2;
  *(undefined4 *)(lVar1 + 0x3c) = 5;
  FUN_140054de0(local_68,L"shovelDiamond");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x24b;
  *(undefined4 *)(lVar1 + 0x74) = 0xd5;
  DAT_1407b8b40 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb0);
  lVar1 = FUN_1404b0910(local_78,0x1c,DAT_1407bdbc0);
  *(undefined4 *)(lVar1 + 0x38) = 2;
  *(undefined4 *)(lVar1 + 0x3c) = 4;
  FUN_140054de0(local_68,L"shovelGold");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x24c;
  *(undefined4 *)(lVar1 + 0x74) = 0xd5;
  DAT_1407b8b38 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb0);
  lVar1 = FUN_1404b0970(local_78,0xe,DAT_1407bdba0);
  *(undefined4 *)(lVar1 + 0x38) = 3;
  *(undefined4 *)(lVar1 + 0x3c) = 1;
  FUN_140054de0(local_68,L"pickaxeWood");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x24d;
  *(undefined4 *)(lVar1 + 0x74) = 0xd6;
  DAT_1407b8b00 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb0);
  lVar1 = FUN_1404b0970(local_78,0x12,DAT_1407bdba8);
  *(undefined4 *)(lVar1 + 0x38) = 3;
  *(undefined4 *)(lVar1 + 0x3c) = 2;
  FUN_140054de0(local_68,L"pickaxeStone");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x24e;
  *(undefined4 *)(lVar1 + 0x74) = 0xd6;
  DAT_1407b8b08 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb0);
  lVar1 = FUN_1404b0970(local_78,1,DAT_1407bdbb0);
  *(undefined4 *)(lVar1 + 0x38) = 3;
  *(undefined4 *)(lVar1 + 0x3c) = 3;
  FUN_140054de0(local_68,L"pickaxeIron");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x24f;
  *(undefined4 *)(lVar1 + 0x74) = 0xd6;
  DAT_1407b8af0 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb0);
  lVar1 = FUN_1404b0970(local_78,0x16,DAT_1407bdbb8);
  *(undefined4 *)(lVar1 + 0x38) = 3;
  *(undefined4 *)(lVar1 + 0x3c) = 5;
  FUN_140054de0(local_68,L"pickaxeDiamond");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x250;
  *(undefined4 *)(lVar1 + 0x74) = 0xd6;
  DAT_1407b8ae0 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb0);
  lVar1 = FUN_1404b0970(local_78,0x1d,DAT_1407bdbc0);
  *(undefined4 *)(lVar1 + 0x38) = 3;
  *(undefined4 *)(lVar1 + 0x3c) = 4;
  FUN_140054de0(local_68,L"pickaxeGold");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x251;
  *(undefined4 *)(lVar1 + 0x74) = 0xd6;
  DAT_1407b8af8 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb0);
  lVar1 = FUN_1404b0b80(local_78,0xf,DAT_1407bdba0);
  *(undefined4 *)(lVar1 + 0x38) = 4;
  *(undefined4 *)(lVar1 + 0x3c) = 1;
  FUN_140054de0(local_68,L"hatchetWood");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x252;
  *(undefined4 *)(lVar1 + 0x74) = 0xd7;
  DAT_1407b8b30 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb0);
  lVar1 = FUN_1404b0b80(local_78,0x13,DAT_1407bdba8);
  *(undefined4 *)(lVar1 + 0x38) = 4;
  *(undefined4 *)(lVar1 + 0x3c) = 2;
  FUN_140054de0(local_68,L"hatchetStone");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x253;
  *(undefined4 *)(lVar1 + 0x74) = 0xd7;
  DAT_1407b8b20 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb0);
  lVar1 = FUN_1404b0b80(local_78,2,DAT_1407bdbb0);
  *(undefined4 *)(lVar1 + 0x38) = 4;
  *(undefined4 *)(lVar1 + 0x3c) = 3;
  FUN_140054de0(local_68,L"hatchetIron");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x254;
  *(undefined4 *)(lVar1 + 0x74) = 0xd7;
  DAT_1407b8b28 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb0);
  lVar1 = FUN_1404b0b80(local_78,0x17,DAT_1407bdbb8);
  *(undefined4 *)(lVar1 + 0x38) = 4;
  *(undefined4 *)(lVar1 + 0x3c) = 5;
  FUN_140054de0(local_68,L"hatchetDiamond");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x255;
  *(undefined4 *)(lVar1 + 0x74) = 0xd7;
  DAT_1407b8b18 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb0);
  lVar1 = FUN_1404b0b80(local_78,0x1e,DAT_1407bdbc0);
  *(undefined4 *)(lVar1 + 0x38) = 4;
  *(undefined4 *)(lVar1 + 0x3c) = 4;
  FUN_140054de0(local_68,L"hatchetGold");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x256;
  *(undefined4 *)(lVar1 + 0x74) = 0xd7;
  DAT_1407b8b10 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  lVar1 = FUN_1404b0c80(local_78,0x22,DAT_1407bdba0);
  *(undefined4 *)(lVar1 + 0x38) = 5;
  *(undefined4 *)(lVar1 + 0x3c) = 1;
  FUN_140054de0(local_68,L"hoeWood");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 599;
  *(undefined4 *)(lVar1 + 0x74) = 0xd8;
  DAT_1407b8a48 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  lVar1 = FUN_1404b0c80(local_78,0x23,DAT_1407bdba8);
  *(undefined4 *)(lVar1 + 0x38) = 5;
  *(undefined4 *)(lVar1 + 0x3c) = 2;
  FUN_140054de0(local_68,L"hoeStone");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 600;
  *(undefined4 *)(lVar1 + 0x74) = 0xd8;
  DAT_1407b8a50 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  lVar1 = FUN_1404b0c80(local_78,0x24,DAT_1407bdbb0);
  *(undefined4 *)(lVar1 + 0x38) = 5;
  *(undefined4 *)(lVar1 + 0x3c) = 3;
  FUN_140054de0(local_68,L"hoeIron");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x259;
  *(undefined4 *)(lVar1 + 0x74) = 0xd8;
  DAT_1407b8a38 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  lVar1 = FUN_1404b0c80(local_78,0x25,DAT_1407bdbb8);
  *(undefined4 *)(lVar1 + 0x38) = 5;
  *(undefined4 *)(lVar1 + 0x3c) = 5;
  FUN_140054de0(local_68,L"hoeDiamond");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x25a;
  *(undefined4 *)(lVar1 + 0x74) = 0xd8;
  DAT_1407b8a40 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  lVar1 = FUN_1404b0c80(local_78,0x26,DAT_1407bdbc0);
  *(undefined4 *)(lVar1 + 0x38) = 5;
  *(undefined4 *)(lVar1 + 0x3c) = 4;
  FUN_140054de0(local_68,L"hoeGold");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x25b;
  *(undefined4 *)(lVar1 + 0x74) = 0xd8;
  DAT_1407b8a30 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  lVar1 = FUN_14047eed0(local_78,0x44,DAT_1407b9778);
  *(undefined4 *)(lVar1 + 0x38) = 6;
  *(undefined4 *)(lVar1 + 0x3c) = 1;
  FUN_140054de0(local_68,L"doorWood");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x25c;
  *(undefined4 *)(lVar1 + 0x74) = 0xd9;
  DAT_1407b8ad8 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  lVar1 = FUN_14047eed0(local_78,0x4a,DAT_1407b9770);
  *(undefined4 *)(lVar1 + 0x38) = 6;
  *(undefined4 *)(lVar1 + 0x3c) = 3;
  FUN_140054de0(local_68,L"doorIron");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x25d;
  *(undefined4 *)(lVar1 + 0x74) = 0xda;
  DAT_1407b8b68 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xc0);
  local_88 = 0;
  lVar1 = FUN_14041d5b0(local_78,0x2a,DAT_1407bed50,0);
  *(undefined4 *)(lVar1 + 0x38) = 7;
  *(undefined4 *)(lVar1 + 0x3c) = 6;
  FUN_140054de0(local_68,L"helmetCloth");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x262;
  *(undefined4 *)(lVar1 + 0x74) = 0xdf;
  DAT_1407b8948 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xc0);
  local_88 = 0;
  lVar1 = FUN_14041d5b0(local_78,0x32,DAT_1407bed60,2);
  *(undefined4 *)(lVar1 + 0x38) = 7;
  *(undefined4 *)(lVar1 + 0x3c) = 3;
  FUN_140054de0(local_68,L"helmetIron");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x263;
  *(undefined4 *)(lVar1 + 0x74) = 0xe7;
  DAT_1407b8988 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xc0);
  local_88 = 0;
  lVar1 = FUN_14041d5b0(local_78,0x36,DAT_1407bed70,3);
  *(undefined4 *)(lVar1 + 0x38) = 7;
  *(undefined4 *)(lVar1 + 0x3c) = 5;
  FUN_140054de0(local_68,L"helmetDiamond");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x264;
  *(undefined4 *)(lVar1 + 0x74) = 0xef;
  DAT_1407b88f0 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xc0);
  local_88 = 0;
  lVar1 = FUN_14041d5b0(local_78,0x3a,DAT_1407bed68,4);
  *(undefined4 *)(lVar1 + 0x38) = 7;
  *(undefined4 *)(lVar1 + 0x3c) = 4;
  FUN_140054de0(local_68,L"helmetGold");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x265;
  *(undefined4 *)(lVar1 + 0x74) = 0xeb;
  DAT_1407b88d0 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xc0);
  local_88 = 1;
  lVar1 = FUN_14041d5b0(local_78,0x2b,DAT_1407bed50,0);
  *(undefined4 *)(lVar1 + 0x38) = 8;
  *(undefined4 *)(lVar1 + 0x3c) = 6;
  FUN_140054de0(local_68,L"chestplateCloth");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x266;
  *(undefined4 *)(lVar1 + 0x74) = 0xe0;
  DAT_1407b89a0 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xc0);
  local_88 = 1;
  lVar1 = FUN_14041d5b0(local_78,0x33,DAT_1407bed60,2);
  *(undefined4 *)(lVar1 + 0x38) = 8;
  *(undefined4 *)(lVar1 + 0x3c) = 3;
  FUN_140054de0(local_68,L"chestplateIron");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x267;
  *(undefined4 *)(lVar1 + 0x74) = 0xe8;
  DAT_1407b88e8 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xc0);
  local_88 = 1;
  lVar1 = FUN_14041d5b0(local_78,0x37,DAT_1407bed70,3);
  *(undefined4 *)(lVar1 + 0x38) = 8;
  *(undefined4 *)(lVar1 + 0x3c) = 5;
  FUN_140054de0(local_68,L"chestplateDiamond");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x268;
  *(undefined4 *)(lVar1 + 0x74) = 0xf0;
  DAT_1407b88c8 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xc0);
  local_88 = 1;
  lVar1 = FUN_14041d5b0(local_78,0x3b,DAT_1407bed68,4);
  *(undefined4 *)(lVar1 + 0x38) = 8;
  *(undefined4 *)(lVar1 + 0x3c) = 4;
  FUN_140054de0(local_68,L"chestplateGold");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x269;
  *(undefined4 *)(lVar1 + 0x74) = 0xec;
  DAT_1407b8920 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xc0);
  local_88 = 2;
  lVar1 = FUN_14041d5b0(local_78,0x2c,DAT_1407bed50,0);
  *(undefined4 *)(lVar1 + 0x38) = 9;
  *(undefined4 *)(lVar1 + 0x3c) = 6;
  FUN_140054de0(local_68,L"leggingsCloth");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x26a;
  *(undefined4 *)(lVar1 + 0x74) = 0xe1;
  DAT_1407b8998 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xc0);
  local_88 = 2;
  lVar1 = FUN_14041d5b0(local_78,0x34,DAT_1407bed60,2);
  *(undefined4 *)(lVar1 + 0x38) = 9;
  *(undefined4 *)(lVar1 + 0x3c) = 3;
  FUN_140054de0(local_68,L"leggingsIron");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x26b;
  *(undefined4 *)(lVar1 + 0x74) = 0xe9;
  DAT_1407b88e0 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xc0);
  local_88 = 2;
  lVar1 = FUN_14041d5b0(local_78,0x38,DAT_1407bed70,3);
  *(undefined4 *)(lVar1 + 0x38) = 9;
  *(undefined4 *)(lVar1 + 0x3c) = 5;
  FUN_140054de0(local_68,L"leggingsDiamond");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x26c;
  *(undefined4 *)(lVar1 + 0x74) = 0xf1;
  DAT_1407b88c0 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xc0);
  local_88 = 2;
  lVar1 = FUN_14041d5b0(local_78,0x3c,DAT_1407bed68,4);
  *(undefined4 *)(lVar1 + 0x38) = 9;
  *(undefined4 *)(lVar1 + 0x3c) = 4;
  FUN_140054de0(local_68,L"leggingsGold");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x26d;
  *(undefined4 *)(lVar1 + 0x74) = 0xed;
  DAT_1407b8918 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xc0);
  local_88 = 0;
  lVar1 = FUN_14041d5b0(local_78,0x2e,DAT_1407bed58,1);
  *(undefined4 *)(lVar1 + 0x38) = 7;
  *(undefined4 *)(lVar1 + 0x3c) = 7;
  FUN_140054de0(local_68,L"helmetChain");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x25e;
  *(undefined4 *)(lVar1 + 0x74) = 0xe3;
  DAT_1407b89a8 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xc0);
  local_88 = 1;
  lVar1 = FUN_14041d5b0(local_78,0x2f,DAT_1407bed58,1);
  *(undefined4 *)(lVar1 + 0x38) = 8;
  *(undefined4 *)(lVar1 + 0x3c) = 7;
  FUN_140054de0(local_68,L"chestplateChain");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x25f;
  *(undefined4 *)(lVar1 + 0x74) = 0xe4;
  DAT_1407b8980 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xc0);
  local_88 = 2;
  lVar1 = FUN_14041d5b0(local_78,0x30,DAT_1407bed58,1);
  *(undefined4 *)(lVar1 + 0x38) = 9;
  *(undefined4 *)(lVar1 + 0x3c) = 7;
  FUN_140054de0(local_68,L"leggingsChain");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x260;
  *(undefined4 *)(lVar1 + 0x74) = 0xe5;
  DAT_1407b8978 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xc0);
  local_88 = 3;
  lVar1 = FUN_14041d5b0(local_78,0x31,DAT_1407bed58,1);
  *(undefined4 *)(lVar1 + 0x38) = 10;
  *(undefined4 *)(lVar1 + 0x3c) = 7;
  FUN_140054de0(local_68,L"bootsChain");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x261;
  *(undefined4 *)(lVar1 + 0x74) = 0xe6;
  DAT_1407b8990 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xc0);
  local_88 = 3;
  lVar1 = FUN_14041d5b0(local_78,0x2d,DAT_1407bed50,0);
  *(undefined4 *)(lVar1 + 0x38) = 10;
  *(undefined4 *)(lVar1 + 0x3c) = 6;
  FUN_140054de0(local_68,L"bootsCloth");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x26e;
  *(undefined4 *)(lVar1 + 0x74) = 0xe2;
  DAT_1407b89b0 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xc0);
  local_88 = 3;
  lVar1 = FUN_14041d5b0(local_78,0x35,DAT_1407bed60,2);
  *(undefined4 *)(lVar1 + 0x38) = 10;
  *(undefined4 *)(lVar1 + 0x3c) = 3;
  FUN_140054de0(local_68,L"bootsIron");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x26f;
  *(undefined4 *)(lVar1 + 0x74) = 0xea;
  DAT_1407b88f8 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xc0);
  local_88 = 3;
  lVar1 = FUN_14041d5b0(local_78,0x39,DAT_1407bed70,3);
  *(undefined4 *)(lVar1 + 0x38) = 10;
  *(undefined4 *)(lVar1 + 0x3c) = 5;
  FUN_140054de0(local_68,L"bootsDiamond");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x270;
  *(undefined4 *)(lVar1 + 0x74) = 0xf2;
  DAT_1407b88d8 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xc0);
  local_88 = 3;
  lVar1 = FUN_14041d5b0(local_78,0x3d,DAT_1407bed68,4);
  *(undefined4 *)(lVar1 + 0x38) = 10;
  *(undefined4 *)(lVar1 + 0x3c) = 4;
  FUN_140054de0(local_68,L"bootsGold");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x271;
  *(undefined4 *)(lVar1 + 0x74) = 0xee;
  DAT_1407b8930 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  lVar1 = FUN_140358fc0(local_78,9);
  FUN_140054de0(local_68,L"ingotIron");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x38) = 0x1e;
  *(undefined4 *)(lVar1 + 0x3c) = 3;
  *(undefined4 *)(lVar1 + 0x70) = 0x272;
  *(undefined4 *)(lVar1 + 0x74) = 0xf3;
  DAT_1407b8a98 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  lVar1 = FUN_140358fc0(local_78,10);
  FUN_140054de0(local_68,L"ingotGold");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x38) = 0x1e;
  *(undefined4 *)(lVar1 + 0x3c) = 4;
  *(undefined4 *)(lVar1 + 0x70) = 0x273;
  *(undefined4 *)(lVar1 + 0x74) = 0xf3;
  DAT_1407b8a88 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  lVar1 = FUN_1404b0fb0(local_78,0x45,0);
  *(undefined4 *)(lVar1 + 0x38) = 0x19;
  *(undefined4 *)(lVar1 + 0x3c) = 0x17;
  FUN_140054de0(local_68,L"bucket");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x274;
  *(undefined4 *)(lVar1 + 0x74) = 0x109;
  *(undefined4 *)(lVar1 + 0x24) = 0x10;
  DAT_1407b8a00 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  lVar1 = FUN_140358fc0(local_78,0x19);
  *(undefined4 *)(lVar1 + 0x38) = 0x19;
  *(undefined4 *)(lVar1 + 0x3c) = 1;
  FUN_140054de0(local_68,L"bowl");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x27f;
  *(undefined4 *)(lVar1 + 0x74) = 0x108;
  *(undefined4 *)(lVar1 + 0x24) = 0x40;
  DAT_1407b89d0 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  lVar1 = FUN_1404b0fb0(local_78,0x46,8);
  FUN_140054de0(local_68,L"bucketWater");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x275;
  *(longlong *)(lVar1 + 0x48) = DAT_1407b8a00;
  *(undefined4 *)(lVar1 + 0x74) = 0x10a;
  DAT_1407b8a08 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  lVar1 = FUN_1404b0fb0(local_78,0x47,10);
  FUN_140054de0(local_68,L"bucketLava");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x276;
  *(longlong *)(lVar1 + 0x48) = DAT_1407b8a00;
  *(undefined4 *)(lVar1 + 0x74) = 0x10b;
  DAT_1407b89f0 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  lVar1 = FUN_1404b20f0(local_78,0x4f);
  FUN_140054de0(local_68,L"milk");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x70) = 0x293;
  *(longlong *)(lVar1 + 0x48) = DAT_1407b8a00;
  *(undefined4 *)(lVar1 + 0x74) = 0x10c;
  DAT_1407b8848 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  lVar1 = FUN_140454140(local_78,5);
  FUN_140054de0(local_68,&DAT_14062d6b0);
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x38) = 0x17;
  *(undefined4 *)(lVar1 + 0x3c) = 0x10;
  *(undefined4 *)(lVar1 + 0x70) = 0x279;
  *(undefined4 *)(lVar1 + 0x74) = 0x113;
  DAT_1407b8a58 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  lVar1 = FUN_140358fc0(local_78,6);
  FUN_140054de0(local_68,L"arrow");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x38) = 0x17;
  *(undefined4 *)(lVar1 + 0x3c) = 0x11;
  *(undefined4 *)(lVar1 + 0x70) = 0x27a;
  *(undefined4 *)(lVar1 + 0x74) = 0x114;
  DAT_1407b8a20 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  lVar1 = FUN_1404b2240(local_78,0x59);
  FUN_140054de0(local_68,L"compass");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x38) = 0x18;
  *(undefined4 *)(lVar1 + 0x3c) = 0x12;
  *(undefined4 *)(lVar1 + 0x70) = 0x29d;
  *(undefined4 *)(lVar1 + 0x74) = 0x110;
  DAT_1407b8ac0 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  lVar1 = FUN_1404b2360(local_78,0x5b);
  FUN_140054de0(local_68,L"clock");
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x38) = 0x18;
  *(undefined4 *)(lVar1 + 0x3c) = 0x13;
  *(undefined4 *)(lVar1 + 0x70) = 0x29f;
  *(undefined4 *)(lVar1 + 0x74) = 0x10f;
  DAT_1407b8888 = lVar1;
  FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  lVar1 = FUN_1403d2b60(local_78,0x66);
  FUN_140054de0(local_68,&DAT_14062d9f8);
  FUN_140054b30(lVar1 + 0x78,local_68);
  *(undefined4 *)(lVar1 + 0x38) = 0x18;
  *(undefined4 *)(lVar1 + 0x3c) = 0x14;
  uVar2 = FUN_140359510(lVar1,0x2ba);
  DAT_1407b8b70 = FUN_140359590(uVar2,0x111);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_1404b2450(local_78,3);
  FUN_140054de0(local_68,L"flintAndSteel");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_1403590c0(uVar2,0x1b,0x19);
  uVar2 = FUN_140359510(uVar2,0x277);
  DAT_1407b8a18 = FUN_140359590(uVar2,0x10d);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb8);
  local_88 = local_88 & 0xffffff00;
  uVar2 = FUN_140394a30(local_78,4,4,0x3e99999a);
  FUN_140054de0(local_68,L"apple");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x278);
  DAT_1407b8ad0 = FUN_140359590(uVar2,0x12e);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  uVar2 = FUN_1404b2880(local_78,7);
  uVar2 = FUN_1403590c0(uVar2,0x1e,0x2e);
  FUN_140054de0(local_68,L"coal");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x27b);
  DAT_1407b8ae8 = FUN_140359590(uVar2,0x17c);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_78,8);
  uVar2 = FUN_1403590c0(uVar2,0x1e,5);
  FUN_140054de0(local_68,L"diamond");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x27d);
  DAT_1407b8a80 = FUN_140359590(uVar2,0x153);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_78,0x18);
  FUN_140054de0(local_68,L"stick");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_1403594f0(uVar2);
  uVar2 = FUN_140359510(uVar2,0x27e);
  DAT_1407b8b58 = FUN_140359590(uVar2,0xfd);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb8);
  uVar2 = FUN_1404b2a70(local_78,0x1a,6);
  FUN_140054de0(local_68,L"mushroomStew");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x280);
  DAT_1407b89c8 = FUN_140359590(uVar2,0x125);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  uVar2 = FUN_1404b2c20(local_78,0x1f,DAT_1407aaf58);
  FUN_140054de0(local_68,L"string");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x281);
  DAT_1407b8958 = FUN_140359590(uVar2,0x17d);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_78,0x20);
  FUN_140054de0(local_68,L"feather");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x282);
  DAT_1407b8970 = FUN_140359590(uVar2,0x17e);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_78,0x21);
  FUN_140054de0(local_68,L"sulphur");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x283);
  plVar3 = (longlong *)FUN_140359590(uVar2,0x17f);
  DAT_1407b8968 = (**(code **)(*plVar3 + 0xe8))(plVar3,&DAT_1407beef8);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  uVar2 = FUN_1404b3190(local_78,0x27,0x3b,0x3c);
  FUN_140054de0(local_68,L"seeds");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x284);
  DAT_1407b8940 = FUN_140359590(uVar2,0x180);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_78,0x28);
  uVar2 = FUN_1403590c0(uVar2,0x1e,0x32);
  FUN_140054de0(local_68,L"wheat");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x285);
  DAT_1407b8938 = FUN_140359590(uVar2,0x181);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb8);
  local_88 = local_88 & 0xffffff00;
  uVar2 = FUN_140394a30(local_78,0x29,5,0x3f19999a);
  FUN_140054de0(local_68,L"bread");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x286);
  DAT_1407b8950 = FUN_140359590(uVar2,0x121);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_78,0x3e);
  FUN_140054de0(local_68,L"flint");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x287);
  DAT_1407b8928 = FUN_140359590(uVar2,0x182);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb8);
  local_88._0_1_ = 1;
  uVar2 = FUN_140394a30(local_78,0x3f,3,0x3e99999a);
  FUN_140054de0(local_68,L"porkchopRaw");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x288);
  FUN_140359590(uVar2,0x12a);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb8);
  local_88._0_1_ = 1;
  uVar2 = FUN_140394a30(local_78,0x40,8,0x3f4ccccd);
  FUN_140054de0(local_68,L"porkchopCooked");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x289);
  DAT_1407b8900 = FUN_140359590(uVar2,299);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  uVar2 = FUN_1404b3450(local_78,0x41,0xa100001);
  uVar2 = FUN_1403590c0(uVar2,0x20,6);
  FUN_140054de0(local_68,L"painting");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x28a);
  DAT_1407b8910 = FUN_140359590(uVar2,0x158);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb8);
  local_88 = (uint)local_88._1_3_ << 8;
  uVar2 = FUN_1404b3c40(local_78,0x42,4,0x3f99999a);
  uVar2 = FUN_140394fd0(uVar2);
  local_88 = 0x3f800000;
  uVar2 = FUN_140394fa0(uVar2,*(undefined4 *)(DAT_1407b94f8 + 8),5,1);
  uVar2 = FUN_1403590c0(uVar2,0x24,0x2b);
  FUN_140054de0(local_68,L"appleGold");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  DAT_1407b86f8 = FUN_140359510(uVar2,0x28b);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_1404b41b0(local_78,0x43);
  uVar2 = FUN_1403590c0(uVar2,0x20,1);
  FUN_140054de0(local_68,L"sign");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x28c);
  DAT_1407b8908 = FUN_140359590(uVar2,0x105);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  uVar2 = FUN_1404b4c30(local_78,0x48,0);
  FUN_140054de0(local_68,L"minecart");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x28d);
  DAT_1407b8868 = FUN_140359590(uVar2,0x13b);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_1404b4f80(local_78,0x49);
  FUN_140054de0(local_68,L"saddle");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x28e);
  DAT_1407b8860 = FUN_140359590(uVar2,0x183);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_1404b53c0(local_78,0x4b);
  uVar2 = FUN_1403590c0(uVar2,0x1e,0x2d);
  FUN_140054de0(local_68,L"redstone");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x28f);
  plVar3 = (longlong *)FUN_140359590(uVar2,0x173);
  DAT_1407b8878 = (**(code **)(*plVar3 + 0xe8))(plVar3,&DAT_1407beeb8);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_1404b56b0(local_78,0x4c);
  FUN_140054de0(local_68,L"snowball");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x290);
  DAT_1407b8a70 = FUN_140359590(uVar2,0x184);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_1404b59f0(local_78,0x4d);
  FUN_140054de0(local_68,L"boat");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x291);
  DAT_1407b89f8 = FUN_140359590(uVar2,0x13e);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_78,0x4e);
  FUN_140054de0(local_68,L"leather");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x292);
  DAT_1407b8870 = FUN_140359590(uVar2,0x185);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_78,0x50);
  FUN_140054de0(local_68,L"brick");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x294);
  DAT_1407b8840 = FUN_140359590(uVar2,0x169);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_78,0x51);
  FUN_140054de0(local_68,L"clay");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x295);
  DAT_1407b8858 = FUN_140359590(uVar2,0x16a);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  uVar2 = FUN_1404b2c20(local_78,0x52,DAT_1407ad1f0);
  FUN_140054de0(local_68,L"reeds");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x296);
  DAT_1407b8850 = FUN_140359590(uVar2,0x177);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_78,0x53);
  uVar2 = FUN_1403590c0(uVar2,0x2b,0x2f);
  FUN_140054de0(local_68,L"paper");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x297);
  DAT_1407b88a8 = FUN_140359590(uVar2,0x155);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_1404b6660(local_78,0x54);
  uVar2 = FUN_1403590c0(uVar2,0x2b,0x30);
  FUN_140054de0(local_68,L"book");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x298);
  DAT_1407b88a0 = FUN_140359590(uVar2,0x156);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_78,0x55);
  FUN_140054de0(local_68,L"slimeball");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x299);
  DAT_1407b8a78 = FUN_140359590(uVar2,0x186);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  uVar2 = FUN_1404b4c30(local_78,0x56,1);
  FUN_140054de0(local_68,L"minecart_chest");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x29a);
  DAT_1407b88b8 = FUN_140359590(uVar2,0x13c);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  uVar2 = FUN_1404b4c30(local_78,0x57,2);
  FUN_140054de0(local_68,L"minecart_furnace");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x29b);
  DAT_1407b88b0 = FUN_140359590(uVar2,0x13d);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_1404b6710(local_78,0x58);
  FUN_140054de0(local_68,&DAT_14062d568);
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x29c);
  DAT_1407b8aa0 = FUN_140359590(uVar2,0x187);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  uVar2 = FUN_140453b60(local_78,0x5a);
  uVar2 = FUN_1403590c0(uVar2,0x23,1);
  FUN_140054de0(local_68,L"fishingRod");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x29e);
  DAT_1407b8ac8 = FUN_140359590(uVar2,0x10e);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_78,0x5c);
  FUN_140054de0(local_68,L"yellowDust");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2a0);
  plVar3 = (longlong *)FUN_140359590(uVar2,0x188);
  DAT_1407b8880 = (**(code **)(*plVar3 + 0xe8))(plVar3,&DAT_1407beed8);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb8);
  local_88 = local_88 & 0xffffff00;
  uVar2 = FUN_140394a30(local_78,0x5d,2,0x3e99999a);
  FUN_140054de0(local_68,L"fishRaw");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2a1);
  DAT_1407b8898 = FUN_140359590(uVar2,300);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb8);
  local_88 = local_88 & 0xffffff00;
  uVar2 = FUN_140394a30(local_78,0x5e,5,0x3f19999a);
  FUN_140054de0(local_68,L"fishCooked");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2a2);
  DAT_1407b8890 = FUN_140359590(uVar2,0x12d);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  uVar2 = FUN_140372c20(local_78,0x5f);
  uVar2 = FUN_1403590c0(uVar2,0x11,0xb);
  FUN_140054de0(local_68,L"dyePowder");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2a3);
  DAT_1407b8a10 = FUN_140359590(uVar2,0xffffffff);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_78,0x60);
  FUN_140054de0(local_68,L"bone");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2b4);
  uVar2 = FUN_1403594f0(uVar2);
  DAT_1407b8828 = FUN_140359590(uVar2,0x189);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_78,0x61);
  FUN_140054de0(local_68,L"sugar");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2b5);
  plVar3 = (longlong *)FUN_140359590(uVar2,0x131);
  DAT_1407b8820 = (**(code **)(*plVar3 + 0xe8))(plVar3,&DAT_1407bedb8);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  uVar2 = FUN_1404b2c20(local_78,0x62,DAT_1407ad1c0);
  FUN_140054de0(local_68,L"cake");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2b6);
  DAT_1407b8838 = FUN_140359590(uVar2,0x122);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_1404b6ad0(local_78,99);
  uVar2 = FUN_140359100(uVar2,1);
  FUN_140054de0(local_68,&DAT_14062d868);
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2b7);
  DAT_1407b8830 = FUN_140359590(uVar2,0xfe);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  uVar2 = FUN_1404b2c20(local_78,100,DAT_1407ad138);
  FUN_140054de0(local_68,L"diode");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2b8);
  DAT_1407b8818 = FUN_140359590(uVar2,0x134);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb8);
  local_88 = local_88 & 0xffffff00;
  uVar2 = FUN_140394a30(local_78,0x65,2,0x3dcccccd);
  FUN_140054de0(local_68,L"cookie");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2b9);
  DAT_1407b8810 = FUN_140359590(uVar2,0x123);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_1404b6f40(local_78,0x67);
  FUN_140054de0(local_68,L"shears");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_1403590c0(uVar2,0x1b,0x1a);
  uVar2 = FUN_140359510(uVar2,0x2c8);
  DAT_1407b87d8 = FUN_140359590(uVar2,0x18e);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb8);
  local_88 = local_88 & 0xffffff00;
  uVar2 = FUN_140394a30(local_78,0x68,2,0x3e99999a);
  FUN_140054de0(local_68,L"melon");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2d1);
  DAT_1407b87d0 = FUN_140359590(uVar2,0x124);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  uVar2 = FUN_1404b3190(local_78,0x69,0x68,0x3c);
  FUN_140054de0(local_68,L"seeds_pumpkin");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_1403590c0(uVar2,0x1f,0x15);
  uVar2 = FUN_140359510(uVar2,0x2c9);
  DAT_1407b87c0 = FUN_140359590(uVar2,0x196);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  uVar2 = FUN_1404b3190(local_78,0x6a,0x69,0x3c);
  FUN_140054de0(local_68,L"seeds_melon");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_1403590c0(uVar2,0x1f,0x24);
  uVar2 = FUN_140359510(uVar2,0x2ca);
  DAT_1407b87b8 = FUN_140359590(uVar2,0x197);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb8);
  local_88._0_1_ = 1;
  uVar2 = FUN_140394a30(local_78,0x6b,3,0x3e99999a);
  FUN_140054de0(local_68,L"beefRaw");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2cd);
  FUN_140359590(uVar2,0x128);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb8);
  local_88._0_1_ = 1;
  uVar2 = FUN_140394a30(local_78,0x6c,8,0x3f4ccccd);
  FUN_140054de0(local_68,L"beefCooked");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2ce);
  DAT_1407b87c8 = FUN_140359590(uVar2,0x129);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb8);
  local_88 = CONCAT31(local_88._1_3_,1);
  uVar2 = FUN_140394a30(local_78,0x6d,2,0x3e99999a);
  local_88 = 0x3e99999a;
  uVar2 = FUN_140394fa0(uVar2,*(undefined4 *)(DAT_1407b94e0 + 8),0x1e,0);
  FUN_140054de0(local_68,L"chickenRaw");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2cb);
  FUN_140359590(uVar2,0x126);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb8);
  local_88._0_1_ = 1;
  uVar2 = FUN_140394a30(local_78,0x6e,6,0x3f19999a);
  FUN_140054de0(local_68,L"chickenCooked");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2cc);
  DAT_1407b8800 = FUN_140359590(uVar2,0x127);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb8);
  local_88 = CONCAT31(local_88._1_3_,1);
  uVar2 = FUN_140394a30(local_78,0x6f,4,0x3dcccccd);
  local_88 = 0x3f4ccccd;
  uVar2 = FUN_140394fa0(uVar2,*(undefined4 *)(DAT_1407b94e0 + 8),0x1e,0);
  FUN_140054de0(local_68,L"rottenFlesh");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2cf);
  FUN_140359590(uVar2,0x130);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_1404b72f0(local_78,0x70);
  FUN_140054de0(local_68,L"enderPearl");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2d0);
  DAT_1407b8ab0 = FUN_140359590(uVar2,0x198);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_78,0x71);
  FUN_140054de0(local_68,L"blazeRod");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2d2);
  uVar2 = FUN_140359590(uVar2,0x1a0);
  DAT_1407b8808 = FUN_1403594f0(uVar2);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_78,0x72);
  FUN_140054de0(local_68,L"ghastTear");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2d3);
  plVar3 = (longlong *)FUN_140359590(uVar2,0x1a1);
  DAT_1407b87e8 = (**(code **)(*plVar3 + 0xe8))(plVar3,&DAT_1407bedd8);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_78,0x73);
  uVar2 = FUN_1403590c0(uVar2,0x1e,4);
  FUN_140054de0(local_68,L"goldNugget");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2d4);
  DAT_1407b87e0 = FUN_140359590(uVar2,0x1a2);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  uVar2 = FUN_1404b3190(local_78,0x74,0x73,0x58);
  FUN_140054de0(local_68,L"netherStalkSeeds");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2d5);
  plVar3 = (longlong *)FUN_140359590(uVar2,0x1a3);
  _DAT_1407b87f8 = (**(code **)(*plVar3 + 0xe8))(plVar3,&DAT_1407bed78);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xf0);
  uVar2 = FUN_140405d70(local_78,0x75);
  FUN_140054de0(local_68,L"potion");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2d6);
  DAT_1407b8a60 = FUN_140359590(uVar2,0x1a4);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_1404b76d0(local_78,0x76);
  uVar2 = FUN_1403590c0(uVar2,0x19,0x21);
  FUN_140054de0(local_68,L"glassBottle");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2d7);
  DAT_1407b87f0 = FUN_140359590(uVar2,0x1a5);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xb8);
  local_88 = local_88 & 0xffffff00;
  uVar2 = FUN_140394a30(local_78,0x77,2,0x3f4ccccd);
  local_88 = 0x3f800000;
  uVar2 = FUN_140394fa0(uVar2,*(undefined4 *)(DAT_1407b94e8 + 8),5,0);
  FUN_140054de0(local_68,L"spiderEye");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2d9);
  plVar3 = (longlong *)FUN_140359590(uVar2,0x1a6);
  DAT_1407b8778 = (**(code **)(*plVar3 + 0xe8))(plVar3,&DAT_1407bedf8);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_78,0x78);
  FUN_140054de0(local_68,L"fermentedSpiderEye");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2da);
  plVar3 = (longlong *)FUN_140359590(uVar2,0x1a7);
  DAT_1407b8770 = (**(code **)(*plVar3 + 0xe8))(plVar3,&DAT_1407bee18);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_78,0x79);
  FUN_140054de0(local_68,L"blazePowder");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2db);
  plVar3 = (longlong *)FUN_140359590(uVar2,0x1a8);
  DAT_1407b8788 = (**(code **)(*plVar3 + 0xe8))(plVar3,&DAT_1407bee58);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_78,0x7a);
  FUN_140054de0(local_68,L"magmaCream");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2dc);
  plVar3 = (longlong *)FUN_140359590(uVar2,0x1a9);
  DAT_1407b8780 = (**(code **)(*plVar3 + 0xe8))(plVar3,&DAT_1407bee98);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  uVar2 = FUN_1404b2c20(local_78,0x7b,DAT_1407ad0b0);
  uVar2 = FUN_1403590c0(uVar2,0x1d,0x22);
  FUN_140054de0(local_68,L"brewingStand");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2dd);
  DAT_1407b8758 = FUN_140359590(uVar2,0x1aa);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  uVar2 = FUN_1404b2c20(local_78,0x7c,DAT_1407ad108);
  uVar2 = FUN_1403590c0(uVar2,0x19,3);
  FUN_140054de0(local_68,L"cauldron");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2de);
  DAT_1407b8750 = FUN_140359590(uVar2,0x1ab);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_1404b7de0(local_78,0x7d);
  uVar2 = FUN_1403590c0(uVar2,0x18,0x20);
  FUN_140054de0(local_68,L"eyeOfEnder");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2df);
  DAT_1407b8a68 = FUN_140359590(uVar2,0x1ac);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_78,0x7e);
  uVar2 = FUN_1403590c0(uVar2,0x24,0x24);
  FUN_140054de0(local_68,L"speckledMelon");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2e0);
  plVar3 = (longlong *)FUN_140359590(uVar2,0x1ad);
  DAT_1407b8768 = (**(code **)(*plVar3 + 0xe8))(plVar3,&DAT_1407bee38);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0xa0);
  uVar2 = FUN_1404b8e00(local_78,0x7f);
  FUN_140054de0(local_68,L"monsterPlacer");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2e6);
  DAT_1407b89e8 = FUN_140359590(uVar2,0x1bb);
  thunk_FUN_140055150(local_68);
  local_78 = FUN_140558c80(0x98);
  uVar2 = FUN_1404ba8f0(local_78,0x80);
  FUN_140054de0(local_68,L"expBottle");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,0x2e1);
  DAT_1407b8aa8 = FUN_140359590(uVar2,0x1b8);
  thunk_FUN_140055150(local_68);
  uVar2 = FUN_140558c80(0xb8);
  local_70 = uVar2;
  FUN_140054de0(local_48,&DAT_140652298);
  local_78._0_4_ = 1;
  uVar2 = FUN_1404baca0(uVar2,2000,local_48);
  FUN_140054de0(local_68,L"record");
  uVar2 = FUN_1403590d0(uVar2,local_68);
  uVar2 = FUN_140359510(uVar2,700);
  FUN_140359590(uVar2,0x18a);
  thunk_FUN_140055150(local_68);
  thunk_FUN_140055150(local_48);
  uVar2 = FUN_140558c80(0xb8);
  local_70 = uVar2;
  FUN_140054de0(local_68,&DAT_140652300);
  local_78._0_4_ = 2;
  uVar2 = FUN_1404baca0(uVar2,0x7d1,local_68);
  FUN_140054de0(local_48,L"record");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,0x2bd);
  FUN_140359590(uVar2,0x18a);
  thunk_FUN_140055150(local_48);
  thunk_FUN_140055150(local_68);
  uVar2 = FUN_140558c80(0xb8);
  local_70 = uVar2;
  FUN_140054de0(local_68,L"blocks");
  local_78._0_4_ = 4;
  uVar2 = FUN_1404baca0(uVar2,0x7d2,local_68);
  FUN_140054de0(local_48,L"record");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,0x2be);
  FUN_140359590(uVar2,0x18a);
  thunk_FUN_140055150(local_48);
  thunk_FUN_140055150(local_68);
  uVar2 = FUN_140558c80(0xb8);
  local_70 = uVar2;
  FUN_140054de0(local_68,L"chirp");
  local_78._0_4_ = 8;
  uVar2 = FUN_1404baca0(uVar2,0x7d3,local_68);
  FUN_140054de0(local_48,L"record");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,0x2bf);
  FUN_140359590(uVar2,0x18a);
  thunk_FUN_140055150(local_48);
  thunk_FUN_140055150(local_68);
  uVar2 = FUN_140558c80(0xb8);
  local_70 = uVar2;
  FUN_140054de0(local_68,&DAT_140652308);
  local_78._0_4_ = 0x10;
  uVar2 = FUN_1404baca0(uVar2,0x7d4,local_68);
  FUN_140054de0(local_48,L"record");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,0x2c0);
  FUN_140359590(uVar2,0x18a);
  thunk_FUN_140055150(local_48);
  thunk_FUN_140055150(local_68);
  uVar2 = FUN_140558c80(0xb8);
  local_70 = uVar2;
  FUN_140054de0(local_68,L"mall");
  local_78._0_4_ = 0x20;
  uVar2 = FUN_1404baca0(uVar2,0x7d5,local_68);
  FUN_140054de0(local_48,L"record");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,0x2c1);
  FUN_140359590(uVar2,0x18a);
  thunk_FUN_140055150(local_48);
  thunk_FUN_140055150(local_68);
  uVar2 = FUN_140558c80(0xb8);
  local_70 = uVar2;
  FUN_140054de0(local_68,L"mellohi");
  local_78._0_4_ = 0x40;
  uVar2 = FUN_1404baca0(uVar2,0x7d6,local_68);
  FUN_140054de0(local_48,L"record");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,0x2c2);
  FUN_140359590(uVar2,0x18a);
  thunk_FUN_140055150(local_48);
  thunk_FUN_140055150(local_68);
  uVar2 = FUN_140558c80(0xb8);
  local_70 = uVar2;
  FUN_140054de0(local_68,L"stal");
  local_78._0_4_ = 0x80;
  uVar2 = FUN_1404baca0(uVar2,0x7d7,local_68);
  FUN_140054de0(local_48,L"record");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,0x2c3);
  FUN_140359590(uVar2,0x18a);
  thunk_FUN_140055150(local_48);
  thunk_FUN_140055150(local_68);
  uVar2 = FUN_140558c80(0xb8);
  local_70 = uVar2;
  FUN_140054de0(local_68,L"strad");
  local_78._0_4_ = 0x100;
  uVar2 = FUN_1404baca0(uVar2,0x7d8,local_68);
  FUN_140054de0(local_48,L"record");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,0x2c4);
  FUN_140359590(uVar2,0x18a);
  thunk_FUN_140055150(local_48);
  thunk_FUN_140055150(local_68);
  uVar2 = FUN_140558c80(0xb8);
  local_70 = uVar2;
  FUN_140054de0(local_68,L"ward");
  local_78._0_4_ = 0x200;
  uVar2 = FUN_1404baca0(uVar2,0x7d9,local_68);
  FUN_140054de0(local_48,L"record");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,0x2c5);
  FUN_140359590(uVar2,0x18a);
  thunk_FUN_140055150(local_48);
  thunk_FUN_140055150(local_68);
  uVar2 = FUN_140558c80(0xb8);
  local_70 = uVar2;
  FUN_140054de0(local_68,&DAT_14065231c);
  local_78._0_4_ = 0x400;
  uVar2 = FUN_1404baca0(uVar2,0x7da,local_68);
  FUN_140054de0(local_48,L"record");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,0x2c6);
  FUN_140359590(uVar2,0x18a);
  thunk_FUN_140055150(local_48);
  thunk_FUN_140055150(local_68);
  uVar2 = FUN_140558c80(0xb8);
  local_70 = uVar2;
  FUN_140054de0(local_68,L"where are we now");
  local_78 = CONCAT44(local_78._4_4_,0x800);
  uVar2 = FUN_1404baca0(uVar2,0x7db,local_68);
  FUN_140054de0(local_48,L"record");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,0x2c7);
  FUN_140359590(uVar2,0x18a);
  thunk_FUN_140055150(local_48);
  thunk_FUN_140055150(local_68);
  local_70 = FUN_140558c80(0xa0);
  uVar2 = FUN_1404bb810(local_70,0x81);
  uVar2 = FUN_1403590c0(uVar2,0x16,0x25);
  FUN_140054de0(local_48,L"fireball");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,0x2e2);
  DAT_1407b8ab8 = FUN_140359590(uVar2,0x1b9);
  thunk_FUN_140055150(local_48);
  local_70 = FUN_140558c80(0xa0);
  uVar2 = FUN_1404b3450(local_70,0x85,0xa100002);
  uVar2 = FUN_1403590c0(uVar2,0x20,0x21);
  FUN_140054de0(local_48,L"frame");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,0x2e5);
  DAT_1407b8760 = FUN_140359590(uVar2,0x1ba);
  thunk_FUN_140055150(local_48);
  local_70 = FUN_140558c80(0xc0);
  uVar2 = FUN_1404bbc40(local_70,0x8d);
  FUN_140054de0(local_48,L"skull");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,0x2e8);
  FUN_140359590(uVar2,0x1c1);
  thunk_FUN_140055150(local_48);
  local_70 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_70,0x84);
  uVar2 = FUN_1403590c0(uVar2,0x1e,0x29);
  FUN_140054de0(local_48,L"emerald");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,0x7e8);
  DAT_1407b8a90 = FUN_140359590(uVar2,0x7dc);
  thunk_FUN_140055150(local_48);
  local_70 = FUN_140558c80(0xa0);
  uVar2 = FUN_1404b2c20(local_70,0x86,DAT_1407ad088);
  FUN_140054de0(local_48,L"flowerPot");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,0x7e9);
  DAT_1407b87a8 = FUN_140359590(uVar2,0x7dd);
  thunk_FUN_140055150(local_48);
  local_70 = FUN_140558c80(0xc0);
  local_80 = 0x3c;
  local_88 = 0x8d;
  uVar2 = FUN_1404bc740(local_70,0x87,4,0x3f19999a);
  FUN_140054de0(local_48,L"carrots");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,0x7ea);
  DAT_1407b87b0 = FUN_140359590(uVar2,0x7de);
  thunk_FUN_140055150(local_48);
  local_70 = FUN_140558c80(0xc0);
  local_80 = 0x3c;
  local_88 = 0x8e;
  uVar2 = FUN_1404bc740(local_70,0x88,1,0x3e99999a);
  FUN_140054de0(local_48,L"potato");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,0x7eb);
  FUN_140359590(uVar2,0x7df);
  thunk_FUN_140055150(local_48);
  local_70 = FUN_140558c80(0xb8);
  local_88 = local_88 & 0xffffff00;
  uVar2 = FUN_140394a30(local_70,0x89,6,0x3f19999a);
  FUN_140054de0(local_48,L"potatoBaked");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,0x7ec);
  DAT_1407b8798 = FUN_140359590(uVar2,0x7e0);
  thunk_FUN_140055150(local_48);
  local_70 = FUN_140558c80(0xb8);
  local_88 = local_88 & 0xffffff00;
  uVar2 = FUN_140394a30(local_70,0x8a,2,0x3e99999a);
  local_88 = 0x3f19999a;
  uVar2 = FUN_140394fa0(uVar2,*(undefined4 *)(DAT_1407b94e8 + 8),5,0);
  FUN_140054de0(local_48,L"potatoPoisonous");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,0x7ed);
  _DAT_1407b8790 = FUN_140359590(uVar2,0x7e1);
  thunk_FUN_140055150(local_48);
  local_70 = FUN_140558c80(0x98);
  uVar2 = FUN_1404bca30(local_70,0x8b);
  FUN_140054de0(local_48,L"map_empty");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,699);
  FUN_140359590(uVar2,0x112);
  thunk_FUN_140055150(local_48);
  local_70 = FUN_140558c80(0xb8);
  local_88 = local_88 & 0xffffff00;
  uVar2 = FUN_140394a30(local_70,0x8c,6,0x3f99999a);
  uVar2 = FUN_1403590c0(uVar2,0x24,0x2c);
  FUN_140054de0(local_48,L"carrotGolden");
  plVar3 = (longlong *)FUN_1403590d0(uVar2,local_48);
  uVar2 = (**(code **)(*plVar3 + 0xe8))(plVar3,&DAT_1407bee78);
  uVar2 = FUN_140359510(uVar2,0x7ee);
  DAT_1407b87a0 = FUN_140359590(uVar2,0x7e2);
  thunk_FUN_140055150(local_48);
  local_70 = FUN_140558c80(0x98);
  uVar2 = FUN_1404bcd90(local_70,0x8e);
  uVar2 = FUN_1403590c0(uVar2,0x23,0x2c);
  FUN_140054de0(local_48,L"carrotOnAStick");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  DAT_1407b8728 = FUN_140359510(uVar2,0x7ef);
  *(undefined4 *)(DAT_1407b8728 + 0x74) = 0x7e3;
  FUN_140055150(local_48);
  local_70 = FUN_140558c80(0x98);
  lVar1 = FUN_1404bd1f0(local_70,0x8f);
  FUN_140054de0(local_48,L"nether_star");
  FUN_140054b30(lVar1 + 0x78,local_48);
  *(undefined4 *)(lVar1 + 0x70) = 0x2ef;
  *(undefined4 *)(lVar1 + 0x74) = 0x115;
  DAT_1407b8720 = lVar1;
  FUN_140055150(local_48);
  local_70 = FUN_140558c80(0xb8);
  local_88 = local_88 & 0xffffff00;
  lVar1 = FUN_140394a30(local_70,0x90,8,0x3e99999a);
  FUN_140054de0(local_48,L"pumpkinPie");
  FUN_140054b30(lVar1 + 0x78,local_48);
  *(undefined4 *)(lVar1 + 0x70) = 0x7f0;
  *(undefined4 *)(lVar1 + 0x74) = 0x7e4;
  DAT_1407b8738 = lVar1;
  FUN_140055150(local_48);
  local_70 = FUN_140558c80(0x98);
  lVar1 = FUN_140388f00(local_70,0x91);
  *(undefined8 *)(lVar1 + 0x38) = 0x29;
  FUN_140054de0(local_48,L"fireworks");
  FUN_140054b30(lVar1 + 0x78,local_48);
  *(undefined4 *)(lVar1 + 0x70) = 0x2f0;
  *(undefined4 *)(lVar1 + 0x74) = 0x116;
  DAT_1407b86f0 = lVar1;
  FUN_140055150(local_48);
  local_70 = FUN_140558c80(0xa0);
  lVar1 = FUN_1404bd220(local_70,0x92);
  *(undefined8 *)(lVar1 + 0x38) = 0x29;
  FUN_140054de0(local_48,L"fireworks_charge");
  FUN_140054b30(lVar1 + 0x78,local_48);
  *(undefined4 *)(lVar1 + 0x70) = 0x2f1;
  *(undefined4 *)(lVar1 + 0x74) = 0x117;
  DAT_1407b8730 = lVar1;
  FUN_140055150(local_48);
  local_70 = FUN_140558c80(0x98);
  lVar1 = FUN_140352d80(local_70,0x93);
  *(undefined4 *)(lVar1 + 0x24) = 1;
  FUN_140054de0(local_48,L"enchantedBook");
  FUN_140054b30(lVar1 + 0x78,local_48);
  *(undefined4 *)(lVar1 + 0x70) = 0x7f1;
  *(undefined4 *)(lVar1 + 0x74) = 0x7e5;
  DAT_1407b8a28 = lVar1;
  FUN_140055150(local_48);
  local_70 = FUN_140558c80(0xa0);
  lVar1 = FUN_1404b2c20(local_70,0x94,DAT_1407acfe8);
  FUN_140054de0(local_48,L"comparator");
  FUN_140054b30(lVar1 + 0x78,local_48);
  *(undefined4 *)(lVar1 + 0x70) = 0x2f2;
  *(undefined4 *)(lVar1 + 0x74) = 0x118;
  DAT_1407b8708 = lVar1;
  FUN_140055150(local_48);
  local_70 = FUN_140558c80(0x98);
  lVar1 = FUN_140358fc0(local_70,0x95);
  FUN_140054de0(local_48,L"netherbrick");
  FUN_140054b30(lVar1 + 0x78,local_48);
  *(undefined4 *)(lVar1 + 0x70) = 0x2e7;
  *(undefined4 *)(lVar1 + 0x74) = 0x1be;
  DAT_1407b8700 = lVar1;
  FUN_140055150(local_48);
  local_70 = FUN_140558c80(0x98);
  lVar1 = FUN_140358fc0(local_70,0x96);
  FUN_140054de0(local_48,L"netherquartz");
  FUN_140054b30(lVar1 + 0x78,local_48);
  *(undefined4 *)(lVar1 + 0x70) = 0x7f2;
  *(undefined4 *)(lVar1 + 0x74) = 0x7e6;
  DAT_1407b8718 = lVar1;
  FUN_140055150(local_48);
  local_70 = FUN_140558c80(0xa0);
  lVar1 = FUN_1404b4c30(local_70,0x97,3);
  FUN_140054de0(local_48,L"minecart_tnt");
  FUN_140054b30(lVar1 + 0x78,local_48);
  *(undefined4 *)(lVar1 + 0x70) = 0x2f3;
  *(undefined4 *)(lVar1 + 0x74) = 0x119;
  DAT_1407b8710 = lVar1;
  FUN_140055150(local_48);
  local_70 = FUN_140558c80(0xa0);
  lVar1 = FUN_1404b4c30(local_70,0x98,5);
  FUN_140054de0(local_48,L"minecart_hopper");
  FUN_140054b30(lVar1 + 0x78,local_48);
  *(undefined4 *)(lVar1 + 0x70) = 0x2f4;
  *(undefined4 *)(lVar1 + 0x74) = 0x11b;
  DAT_1407b8748 = lVar1;
  FUN_140055150(local_48);
  local_70 = FUN_140558c80(0x98);
  lVar1 = FUN_140358fc0(local_70,0xa1);
  FUN_140054de0(local_48,L"iron_horse_armor");
  FUN_140054b30(lVar1 + 0x78,local_48);
  *(undefined4 *)(lVar1 + 0x24) = 1;
  *(undefined4 *)(lVar1 + 0x70) = 0x2f5;
  FUN_140359590(lVar1,0x11c);
  thunk_FUN_140055150(local_48);
  local_70 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_70,0xa2);
  FUN_140054de0(local_48,L"gold_horse_armor");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359100(uVar2,1);
  uVar2 = FUN_140359510(uVar2,0x2f6);
  FUN_140359590(uVar2,0x11d);
  thunk_FUN_140055150(local_48);
  local_70 = FUN_140558c80(0x98);
  uVar2 = FUN_140358fc0(local_70,0xa3);
  FUN_140054de0(local_48,L"diamond_horse_armor");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359100(uVar2,1);
  uVar2 = FUN_140359510(uVar2,0x2f7);
  FUN_140359590(uVar2,0x11e);
  thunk_FUN_140055150(local_48);
  local_70 = FUN_140558c80(0x98);
  uVar2 = FUN_1403a1a90(local_70,0xa4);
  uVar2 = FUN_1403590c0(uVar2,0x18,0);
  FUN_140054de0(local_48,L"lead");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,0x2f8);
  DAT_1407b8740 = FUN_140359590(uVar2,0x11f);
  thunk_FUN_140055150(local_48);
  local_70 = FUN_140558c80(0x98);
  uVar2 = FUN_1404be140(local_70,0xa5);
  FUN_140054de0(local_48,L"name_tag");
  uVar2 = FUN_1403590d0(uVar2,local_48);
  uVar2 = FUN_140359510(uVar2,0x2f9);
  FUN_140359590(uVar2,0x120);
  thunk_FUN_140055150(local_48);
  return;
}



// ===== FUN_140358fc0 @ 0x140358fc0 [input] =====

undefined8 * FUN_140358fc0(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Item::vftable;
  *(uint *)(param_1 + 4) = param_2 + 0x100U;
  puVar2 = param_1 + 10;
  *puVar2 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 7;
  *(undefined2 *)puVar2 = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 7;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x40;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  FUN_1400549d0(puVar2,&PTR_140610690,0);
  param_1[7] = 0;
  FUN_1400549d0(param_1 + 0xf,&PTR_140610690,0);
  lVar1 = (ulonglong)(param_2 + 0x100U) * 8;
  if (*(longlong *)(lVar1 + DAT_1407bdbd0) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"CONFLICT @ %d",param_2);
  }
  *(undefined8 **)(lVar1 + DAT_1407bdbd0) = param_1;
  return param_1;
}



// ===== FUN_1403590c0 @ 0x1403590c0 [input] =====

longlong FUN_1403590c0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  return param_1;
}



// ===== FUN_1403590d0 @ 0x1403590d0 [input] =====

longlong FUN_1403590d0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if ((undefined8 *)(param_1 + 0x78) != param_2) {
    puVar1 = param_2 + 2;
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_1400549d0((undefined8 *)(param_1 + 0x78),param_2,*puVar1);
  }
  return param_1;
}



// ===== FUN_140359100 @ 0x140359100 [input] =====

longlong FUN_140359100(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return param_1;
}



// ===== FUN_1403594f0 @ 0x1403594f0 [input] =====

longlong FUN_1403594f0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 1;
  return param_1;
}



// ===== FUN_140359510 @ 0x140359510 [input] =====

longlong FUN_140359510(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x70) = param_2;
  return param_1;
}



// ===== FUN_140359590 @ 0x140359590 [input] =====

longlong FUN_140359590(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x74) = param_2;
  return param_1;
}



// ===== FUN_140359e80 @ 0x140359e80 [profile,input,render] =====

void FUN_140359e80(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar4 == (longlong *)0x0) {
    *(undefined1 *)(param_1 + 0x34) = 0;
    return;
  }
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
    *(undefined1 *)(param_1 + 0x34) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x34) = 0;
  return;
}



// ===== FUN_140372c20 @ 0x140372c20 [input] =====

undefined8 * FUN_140372c20(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x5f);
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  *param_1 = DyePowderItem::vftable;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[0x13] = 0;
  return param_1;
}



// ===== FUN_140388f00 @ 0x140388f00 [input] =====

undefined8 * FUN_140388f00(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x91);
  *param_1 = FireworksItem::vftable;
  return param_1;
}



// ===== FUN_140392010 @ 0x140392010 [storage,input] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140392010(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStackY_88 [32];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined4 local_44;
  longlong local_40 [5];
  
  local_40[4] = DAT_1407502c0 ^ (ulonglong)auStackY_88;
  local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
  if (((DAT_1407912fd != '\0') && (DAT_1407912b7 != '\0')) && (DAT_1407912fc == '\0')) {
    DAT_1407912fc = '\x01';
    lVar3 = thunk_FUN_140558c80(0x3e800);
    FUN_140595d50(lVar3,0,0x3e800);
    _DAT_1407be488 = 32000;
    _DAT_1407be48c = local_44;
    DAT_1407be480 = lVar3;
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8aa0 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"collectItem.egg");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,1);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1010000;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be460;
    puVar2 = *(undefined8 **)(DAT_1407be460 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be460 + 0x10)) {
      FUN_1400491a0(DAT_1407be460,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be480 + (ulonglong)*(uint *)(DAT_1407b8aa0 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"mineBlock.wheat");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,2);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1000012;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = 0x3b;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be458;
    puVar2 = *(undefined8 **)(DAT_1407be458 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be458 + 0x10)) {
      FUN_1400491a0(DAT_1407be458,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be470 + 0x1d8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"mineBlock.mushroom1");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,4);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1000013;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = 0x27;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be458;
    puVar2 = *(undefined8 **)(DAT_1407be458 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be458 + 0x10)) {
      FUN_1400491a0(DAT_1407be458,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be470 + 0x138) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"mineBlock.sugar");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,8);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1000011;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = 0x53;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be458;
    puVar2 = *(undefined8 **)(DAT_1407be458 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be458 + 0x10)) {
      FUN_1400491a0(DAT_1407be458,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be470 + 0x298) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407acfa8 + 0x28);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"collectItem.pumpkin");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x10);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1010004;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be460;
    puVar2 = *(undefined8 **)(DAT_1407be460 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be460 + 0x10)) {
      FUN_1400491a0(DAT_1407be460,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be480 + (ulonglong)*(uint *)(DAT_1407acfa8 + 0x28) * 8) = puVar4;
    *(undefined8 **)(DAT_1407be480 + (ulonglong)*(uint *)(DAT_1407ad1b8 + 0x28) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    lVar3 = thunk_FUN_140558c80(0x3e800);
    FUN_140595d50(lVar3,0,0x3e800);
    _DAT_1407be498 = 32000;
    _DAT_1407be49c = local_44;
    DAT_1407be490 = lVar3;
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407aaf00 + 0x28);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.plank");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x20);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1020000;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407aaf00 + 0x28) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407ad200 + 0x28);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.workbench");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x40);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1020001;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407ad200 + 0x28) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8b58 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.stick");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x80);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1020002;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8b58 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8b60 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.woodenShovel");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x100);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1020003;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8b60 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8b00 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.woodenPickAxe");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x200);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1020004;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8b00 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8b08 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.stonePickAxe");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x400);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1020005;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8b08 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8af0 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.ironPickAxe");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x800);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1020006;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8af0 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8ae0 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.diamondPickAxe");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x1000);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1020007;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8ae0 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8af8 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.goldPickAxe");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x2000);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1020008;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8af8 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8b48 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.stoneShovel");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x4000);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1020009;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8b48 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8b50 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.ironShovel");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x8000);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x102000a;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8b50 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8b40 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.diamondShovel");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x10000);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x102000b;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8b40 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8b38 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.goldShovel");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x20000);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x102000c;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8b38 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8b30 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.woodenAxe");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x40000);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x102000d;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8b30 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8b20 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.stoneAxe");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x80000);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x102000e;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8b20 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8b28 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.ironAxe");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x100000);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x102000f;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8b28 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8b18 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.diamondAxe");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x200000);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1020010;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8b18 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8b10 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.goldAxe");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x400000);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1020011;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8b10 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8a48 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.woodenHoe");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x800000);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1020012;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8a48 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8a50 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.stoneHoe");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x1000000);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1020013;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8a50 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8a38 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.ironHoe");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x2000000);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1020014;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8a38 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8a40 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.diamondHoe");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x4000000);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1020015;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8a40 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8a30 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.goldHoe");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x8000000);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1020016;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8a30 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.glowstone");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x10000000);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1020017;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = 0x59;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + 0x2c8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.tnt");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x20000000);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1020018;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = 0x2e;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + 0x170) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b89d0 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.bowl");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x40000000);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x1020019;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b89d0 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8a00 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.bucket");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x80000000);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x102001a;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8a00 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8a18 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.flintAndSteel");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,1);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x102001b;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8a18 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8ac8 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.fishingRod");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,2);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x102001c;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8ac8 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8888 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.clock");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,4);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x102001d;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) goto LAB_14039458c;
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8888 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8ac0 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.compass");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,8);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x102001e;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) {
LAB_14039458c:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8ac0 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    puVar4 = (undefined8 *)FUN_140558c80(0x48);
    uVar1 = *(undefined4 *)(DAT_1407b8b70 + 0x20);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_50 = puVar4;
    FUN_140054cf0(local_40,L"craftItem.map");
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x10);
    *puVar4 = Stat::vftable;
    *(undefined4 *)(puVar4 + 1) = 0x102001f;
    FUN_140055000(puVar4 + 2,local_40);
    puVar4[7] = DAT_1407be718;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = ItemStat::vftable;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    local_58 = puVar4;
    if (7 < (ulonglong)local_40[3]) {
      if (0xfff < local_40[3] * 2 + 2U) {
        if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      thunk_FUN_1401fe000();
    }
    lVar3 = DAT_1407be468;
    puVar2 = *(undefined8 **)(DAT_1407be468 + 8);
    if (puVar2 == *(undefined8 **)(DAT_1407be468 + 0x10)) {
      FUN_1400491a0(DAT_1407be468,puVar2,&local_58);
      puVar4 = local_58;
    }
    else {
      *puVar2 = puVar4;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 8;
    }
    *(undefined8 **)(DAT_1407be490 + (ulonglong)*(uint *)(DAT_1407b8b70 + 0x20) * 8) = puVar4;
    (**(code **)*puVar4)(puVar4);
    FUN_1401f1850();
  }
  return;
}



// ===== FUN_140394a30 @ 0x140394a30 [input] =====

undefined8 *
FUN_140394a30(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  FUN_140358fc0();
  *(undefined4 *)((longlong)param_1 + 0x9c) = param_4;
  *param_1 = FoodItem::vftable;
  *(undefined1 *)(param_1 + 0x14) = param_5;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x13) = param_3;
  *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
  return param_1;
}



// ===== FUN_140394fa0 @ 0x140394fa0 [input] =====

longlong FUN_140394fa0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0xb0) = param_5;
  *(undefined4 *)(param_1 + 0xa4) = param_2;
  *(undefined4 *)(param_1 + 0xa8) = param_3;
  *(undefined4 *)(param_1 + 0xac) = param_4;
  return param_1;
}



// ===== FUN_140394fd0 @ 0x140394fd0 [input] =====

longlong FUN_140394fd0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xa1) = 1;
  return param_1;
}



// ===== FUN_140397dc0 @ 0x140397dc0 [input] =====

undefined8 * FUN_140397dc0(undefined8 *param_1)

{
  FUN_140321f90();
  *param_1 = ColoredTile::vftable;
  return param_1;
}



// ===== FUN_1403a1a90 @ 0x1403a1a90 [input] =====

undefined8 * FUN_1403a1a90(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0xa4);
  *param_1 = LeashItem::vftable;
  return param_1;
}



// ===== FUN_1403ae220 @ 0x1403ae220 [input] =====

undefined8 FUN_1403ae220(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 local_res8 [4];
  
  lVar2 = DAT_1407be448;
  puVar1 = *(undefined8 **)(DAT_1407be448 + 8);
  local_res8[0] = param_1;
  if (puVar1 == *(undefined8 **)(DAT_1407be448 + 0x10)) {
    FUN_1400491a0(DAT_1407be448,puVar1,local_res8);
  }
  else {
    *puVar1 = param_1;
    *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 8;
  }
  FUN_1403ae730();
  return param_1;
}



// ===== FUN_1403d2b60 @ 0x1403d2b60 [input] =====

undefined8 * FUN_1403d2b60(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x66);
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  *param_1 = MapItem::vftable;
  return param_1;
}



// ===== FUN_140403040 @ 0x140403040 [input] =====

undefined8 * FUN_140403040(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140321f90(param_1,0x33,DAT_1407b9758,0);
  *param_1 = FireTile::vftable;
  uVar1 = thunk_FUN_140558c80(0x400);
  param_1[0xe] = uVar1;
  FUN_140595d50(uVar1,0,0x400);
  uVar1 = thunk_FUN_140558c80(0x400);
  param_1[0xf] = uVar1;
  FUN_140595d50(uVar1,0,0x400);
  param_1[0x10] = 0;
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  return param_1;
}



// ===== FUN_140404a80 @ 0x140404a80 [input] =====

undefined8 * FUN_140404a80(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x12,DAT_1407b96a8,*(char *)(param_1 + 0xe) == '\0');
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_1 = LeafTile::vftable;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  return param_1;
}



// ===== FUN_140405d70 @ 0x140405d70 [input] =====

undefined8 * FUN_140405d70(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_140358fc0(param_1,0x75);
  *param_1 = PotionItem::vftable;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  lVar1 = FUN_140558c80(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  param_1[0x14] = lVar1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 7;
  param_1[0x1a] = 8;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  FUN_14004bae0(param_1 + 0x16,0x10,param_1[0x14]);
  *(undefined8 *)((longlong)param_1 + 0x24) = 1;
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return param_1;
}



// ===== FUN_1404090d0 @ 0x1404090d0 [input] =====

undefined8 * FUN_1404090d0(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x7a,DAT_1407b96c8,0);
  *param_1 = EggTile::vftable;
  return param_1;
}



// ===== FUN_140409bb0 @ 0x140409bb0 [input] =====

undefined8 * FUN_140409bb0(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x78,DAT_1407b9788,0);
  *param_1 = TheEndPortalFrameTile::vftable;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



// ===== FUN_14040a180 @ 0x14040a180 [input] =====

undefined8 * FUN_14040a180(undefined8 *param_1)

{
  DWORD dwTlsIndex;
  undefined8 *puVar1;
  
  FUN_140321f90(param_1,0x1a,DAT_1407b9780,0);
  dwTlsIndex = DAT_1407bb098;
  *param_1 = BedTile::vftable;
  puVar1 = TlsGetValue(dwTlsIndex);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0x3ff0000000000000;
  puVar1[4] = 0x3fe2000000000000;
  puVar1[5] = 0x3ff0000000000000;
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 5);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return param_1;
}



// ===== FUN_14040b1a0 @ 0x14040b1a0 [input] =====

undefined8 * FUN_14040b1a0(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x76,DAT_1407b9770,0);
  *param_1 = CauldronTile::vftable;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return param_1;
}



// ===== FUN_14040c000 @ 0x14040c000 [input] =====

undefined8 * FUN_14040c000(undefined8 *param_1)

{
  FUN_140501540();
  *param_1 = RepeaterTile::vftable;
  return param_1;
}



// ===== FUN_14040c4b0 @ 0x14040c4b0 [input] =====

undefined8 * FUN_14040c4b0(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  DWORD dwTlsIndex;
  
  FUN_140321f90(param_1,param_2,DAT_1407b96f8,0);
  dwTlsIndex = DAT_1407bb5cc;
  *param_1 = PistonBaseTile::vftable;
  TlsSetValue(dwTlsIndex,(LPVOID)0x0);
  uVar1 = DAT_1407b32f0;
  *(undefined1 *)(param_1 + 0xe) = param_3;
  param_1[8] = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f000000;
  if (*(float *)(param_1 + 6) <= 2.5 && *(float *)(param_1 + 6) != 2.5) {
    *(undefined4 *)(param_1 + 6) = 0x40200000;
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return param_1;
}



// ===== FUN_14040e970 @ 0x14040e970 [input] =====

undefined8 * FUN_14040e970(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x22,DAT_1407b96f8,0);
  *param_1 = PistonExtensionTile::vftable;
  param_1[8] = DAT_1407b32f0;
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f000000;
  if (*(float *)(param_1 + 6) <= 2.5 && *(float *)(param_1 + 6) != 2.5) {
    *(undefined4 *)(param_1 + 6) = 0x40200000;
  }
  return param_1;
}



// ===== FUN_14040f520 @ 0x14040f520 [input] =====

undefined8 * FUN_14040f520(undefined8 *param_1)

{
  DWORD dwTlsIndex;
  undefined8 *puVar1;
  
  FUN_140321f90(param_1,0x84,DAT_1407b96a0,0);
  dwTlsIndex = DAT_1407bb098;
  *param_1 = TripWireTile::vftable;
  puVar1 = TlsGetValue(dwTlsIndex);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0x3fc4000000000000;
  puVar1[3] = 0x3ff0000000000000;
  puVar1[5] = 0x3ff0000000000000;
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 5);
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  return param_1;
}



// ===== FUN_14040ff20 @ 0x14040ff20 [input] =====

longlong * FUN_14040ff20(longlong *param_1)

{
  FUN_140321f90(param_1,0x37,DAT_1407b96a0,0);
  *param_1 = (longlong)RedStoneDustTile::vftable;
  FUN_140359d20(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xe) = 1;
  (**(code **)(*param_1 + 0x88))(param_1,0,0,0,0x3f800000,0x3d800000,0x3f800000);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// ===== FUN_140412f60 @ 0x140412f60 [input] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140412f60(undefined8 *param_1)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined1 auStackY_88 [32];
  undefined8 ***local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  undefined8 ***local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1407502c0 ^ (ulonglong)auStackY_88;
  local_30 = (undefined8 ****)0x0;
  uStack_28 = 0;
  local_20 = 0;
  local_18 = 0;
  FUN_140054cf0(&local_30,L"glass_pane_top",0xe);
  local_50 = (undefined8 ****)0x0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_140054cf0(&local_50,L"glass",5);
  FUN_140321f90(param_1,0xa0);
  *param_1 = ThinFenceTile::vftable;
  ppppuVar3 = (undefined8 ****)(param_1 + 0xe);
  *ppppuVar3 = (undefined8 ***)0x0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 7;
  *(undefined2 *)ppppuVar3 = 0;
  ppppuVar1 = (undefined8 ****)(param_1 + 0x13);
  *ppppuVar1 = (undefined8 ***)0x0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 7;
  *(undefined2 *)ppppuVar1 = 0;
  param_1[0x17] = 0;
  if (ppppuVar3 != &local_30) {
    ppppuVar2 = &local_30;
    if (7 < local_18) {
      ppppuVar2 = (undefined8 ****)local_30;
    }
    FUN_1400549d0(ppppuVar3,ppppuVar2);
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (ppppuVar1 != &local_50) {
    ppppuVar3 = &local_50;
    if (7 < local_38) {
      ppppuVar3 = (undefined8 ****)local_50;
    }
    FUN_1400549d0(ppppuVar1,ppppuVar3);
  }
  if (7 < local_38) {
    if (0xfff < local_38 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)local_50[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  if (7 < local_18) {
    if (0xfff < local_18 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)local_30[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  *param_1 = StainedGlassPaneBlock::vftable;
  return param_1;
}



// ===== FUN_140413610 @ 0x140413610 [input] =====

undefined8 *
FUN_140413610(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_140321f90(param_1,param_2,param_5,0);
  *param_1 = ThinFenceTile::vftable;
  puVar1 = param_1 + 0xe;
  *puVar1 = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 7;
  *(undefined2 *)puVar1 = 0;
  puVar3 = param_1 + 0x13;
  *puVar3 = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 7;
  *(undefined2 *)puVar3 = 0;
  param_1[0x17] = 0;
  if (puVar1 != param_4) {
    puVar2 = param_4 + 2;
    if (7 < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    FUN_1400549d0(puVar1,param_4,*puVar2);
  }
  *(undefined1 *)(param_1 + 0x12) = param_6;
  if (puVar3 != param_3) {
    puVar1 = param_3 + 2;
    if (7 < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    FUN_1400549d0(puVar3,param_3,*puVar1);
  }
  return param_1;
}



// ===== FUN_140413de0 @ 0x140413de0 [input] =====

longlong * FUN_140413de0(longlong *param_1,undefined1 param_2,longlong param_3)

{
  FUN_140321f90(param_1,param_2,DAT_1407b9710,0);
  *param_1 = (longlong)Bush::vftable;
  FUN_1403221a0(param_1,1);
  (**(code **)(*param_1 + 0x280))(param_1);
  *param_1 = (longlong)StemTile::vftable;
  param_1[0xe] = param_3;
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  FUN_140322200(param_1,0x3ec00000,0,0x3ec00000,0x3f200000,0x3e800000,0x3f200000);
  param_1[0xf] = 0;
  return param_1;
}



// ===== FUN_140414930 @ 0x140414930 [input] =====

undefined8 * FUN_140414930(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x7f,DAT_1407b9710,0);
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  *param_1 = CocoaTile::vftable;
  return param_1;
}



// ===== FUN_1404152a0 @ 0x1404152a0 [input] =====

undefined8 * FUN_1404152a0(undefined8 *param_1)

{
  FUN_140321f90(param_1,2,DAT_1407b9708,1);
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  *param_1 = GrassTile::vftable;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return param_1;
}



// ===== FUN_140415a90 @ 0x140415a90 [input] =====

undefined8 * FUN_140415a90(undefined8 *param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = DAT_1407ad120;
  FUN_140321f90(param_1,0x8b,*(undefined8 *)(DAT_1407ad120 + 0x50),0);
  *param_1 = WallTile::vftable;
  fVar2 = *(float *)(lVar1 + 0x2c);
  *(float *)((longlong)param_1 + 0x2c) = fVar2;
  fVar2 = fVar2 * 5.0;
  if (*(float *)(param_1 + 6) <= fVar2 && fVar2 != *(float *)(param_1 + 6)) {
    *(float *)(param_1 + 6) = fVar2;
  }
  *(float *)(param_1 + 6) = (*(float *)(lVar1 + 0x30) / 3.0) * 3.0;
  param_1[8] = *(undefined8 *)(lVar1 + 0x40);
  return param_1;
}



// ===== FUN_140415f00 @ 0x140415f00 [input] =====

undefined8 * FUN_140415f00(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x6b,DAT_1407b9778,0);
  *param_1 = FenceGateTile::vftable;
  return param_1;
}



// ===== FUN_140416580 @ 0x140416580 [input] =====

LARGE_INTEGER FUN_140416580(LARGE_INTEGER param_1)

{
  undefined8 *puVar1;
  LARGE_INTEGER local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_140321f90(param_1.QuadPart,0x9a,DAT_1407b9770,0);
  *(undefined1 *)(param_1.QuadPart + 0x37) = 1;
  *(undefined ***)param_1 = HopperTile::vftable;
  *(undefined ***)(param_1.QuadPart + 0x70) = HopperTile::vftable;
  QueryPerformanceCounter(local_res8);
  *(undefined1 *)(param_1.QuadPart + 0x80) = 0;
  *(ulonglong *)(param_1.QuadPart + 0x78) =
       (local_res8[0].QuadPart - 0x274aa0536214U ^ 0x5deece66d) & 0xffffffffffff;
  puVar1 = TlsGetValue(DAT_1407bb098);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0x3ff0000000000000;
  puVar1[4] = 0x3ff0000000000000;
  puVar1[5] = 0x3ff0000000000000;
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1.QuadPart + 0x28);
  return (LARGE_INTEGER)param_1.s;
}



// ===== FUN_140417970 @ 0x140417970 [input] =====

undefined8 *
FUN_140417970(undefined8 *param_1,undefined4 param_2,longlong param_3,undefined4 param_4)

{
  float fVar1;
  
  FUN_140321f90(param_1,param_2,*(undefined8 *)(param_3 + 0x50),0);
  param_1[0xe] = param_3;
  *param_1 = StairTile::vftable;
  *(undefined4 *)(param_1 + 0xf) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  fVar1 = *(float *)(param_3 + 0x2c);
  *(float *)((longlong)param_1 + 0x2c) = fVar1;
  fVar1 = fVar1 * 5.0;
  if (*(float *)(param_1 + 6) <= fVar1 && fVar1 != *(float *)(param_1 + 6)) {
    *(float *)(param_1 + 6) = fVar1;
  }
  *(float *)(param_1 + 6) = (*(float *)(param_3 + 0x30) / 3.0) * 3.0;
  param_1[8] = *(undefined8 *)(param_3 + 0x40);
  (&DAT_1407ae2b0)[*(int *)(param_1 + 5)] = 0xff;
  return param_1;
}



// ===== FUN_14041d5b0 @ 0x14041d5b0 [input] =====

undefined8 *
FUN_14041d5b0(undefined8 *param_1,undefined8 param_2,int *param_3,undefined4 param_4,int param_5)

{
  undefined8 *local_28;
  undefined8 *local_20;
  undefined1 local_18 [16];
  
  FUN_140358fc0();
  *param_1 = ArmorItem::vftable;
  *(int *)(param_1 + 0x13) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x9c) =
       *(undefined4 *)((longlong)param_5 * 4 + *(longlong *)(param_3 + 2));
  *(undefined4 *)(param_1 + 0x14) = param_4;
  param_1[0x15] = param_3;
  *(int *)(param_1 + 5) = *(int *)(&DAT_1406100d8 + (longlong)param_5 * 4) * *param_3;
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  local_20 = (undefined8 *)FUN_140558c80(8);
  *local_20 = ArmorItem::ArmorDispenseItemBehavior::vftable;
  local_28 = param_1;
  FUN_140429c90(ArmorItem::ArmorDispenseItemBehavior::vftable,local_18,&local_28);
  return param_1;
}



// ===== FUN_1404257a0 @ 0x1404257a0 [input] =====

LARGE_INTEGER FUN_1404257a0(LARGE_INTEGER param_1,undefined8 param_2,undefined4 param_3)

{
  LARGE_INTEGER LVar1;
  undefined8 *puVar2;
  LARGE_INTEGER local_res8;
  
  local_res8 = param_1;
  FUN_140321f90(param_1.QuadPart,param_2,DAT_1407b9778,0);
  *(undefined1 *)(param_1.QuadPart + 0x37) = 1;
  *(undefined ***)param_1 = ChestTile::vftable;
  *(undefined ***)(param_1.QuadPart + 0x70) = ChestTile::vftable;
  LVar1.QuadPart = FUN_140558c80(0x18);
  local_res8.QuadPart = LVar1.QuadPart;
  QueryPerformanceCounter(&local_res8);
  *(ulonglong *)LVar1 = (local_res8.QuadPart - 0x274aa0536214U ^ 0x5deece66d) & 0xffffffffffff;
  *(undefined1 *)(LVar1.QuadPart + 8) = 0;
  ((LARGE_INTEGER *)(param_1.QuadPart + 0x78))->QuadPart = (LONGLONG)LVar1;
  *(undefined4 *)(param_1.QuadPart + 0x80) = param_3;
  puVar2 = TlsGetValue(DAT_1407bb098);
  *puVar2 = 0x3fb0000000000000;
  puVar2[1] = 0;
  puVar2[2] = 0x3fb0000000000000;
  puVar2[3] = 0x3fee000000000000;
  puVar2[4] = 0x3fec000000000000;
  puVar2[5] = 0x3fee000000000000;
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1.QuadPart + 0x28);
  return (LARGE_INTEGER)param_1.s;
}



// ===== FUN_14042a1b0 @ 0x14042a1b0 [input] =====

LARGE_INTEGER FUN_14042a1b0(LARGE_INTEGER param_1,undefined8 param_2)

{
  LARGE_INTEGER LVar1;
  LARGE_INTEGER local_res8;
  
  local_res8 = param_1;
  FUN_140321f90(param_1.QuadPart,param_2,DAT_1407b9790,1);
  *(undefined1 *)(param_1.QuadPart + 0x37) = 1;
  *(undefined ***)param_1 = DispenserTile::vftable;
  *(undefined ***)(param_1.QuadPart + 0x70) = DispenserTile::vftable;
  LVar1.QuadPart = FUN_140558c80(0x18);
  local_res8.QuadPart = LVar1.QuadPart;
  QueryPerformanceCounter(&local_res8);
  *(ulonglong *)LVar1 = (local_res8.QuadPart - 0x274aa0536214U ^ 0x5deece66d) & 0xffffffffffff;
  *(undefined1 *)(LVar1.QuadPart + 8) = 0;
  ((LARGE_INTEGER *)(param_1.QuadPart + 0x78))->QuadPart = (LONGLONG)LVar1;
  *(undefined8 *)(param_1.QuadPart + 0x80) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x88) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x90) = 0;
  return (LARGE_INTEGER)param_1.s;
}



// ===== FUN_140453b60 @ 0x140453b60 [input] =====

undefined8 * FUN_140453b60(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x5a);
  *(undefined4 *)(param_1 + 5) = 0x40;
  *param_1 = FishingRodItem::vftable;
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  param_1[0x13] = 0;
  return param_1;
}



// ===== FUN_140454140 @ 0x140454140 [input] =====

undefined8 * FUN_140454140(undefined8 *param_1)

{
  FUN_140358fc0(param_1,5);
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  *param_1 = BowItem::vftable;
  *(undefined4 *)(param_1 + 5) = 0x180;
  param_1[0x13] = 0;
  return param_1;
}



// ===== FUN_1404549f0 @ 0x1404549f0 [input] =====

undefined8 * FUN_1404549f0(undefined8 *param_1,undefined8 param_2)

{
  FUN_140321f90(param_1,param_2,DAT_1407b9790,1);
  *param_1 = StoneTile::vftable;
  return param_1;
}



// ===== FUN_140454a20 @ 0x140454a20 [input] =====

undefined8 * FUN_140454a20(undefined8 *param_1)

{
  FUN_140321f90(param_1,3,DAT_1407b9700,1);
  *param_1 = DirtTile::vftable;
  return param_1;
}



// ===== FUN_140454a50 @ 0x140454a50 [input] =====

undefined8 * FUN_140454a50(undefined8 *param_1)

{
  FUN_140321f90(param_1,5,DAT_1407b9778,1);
  param_1[0xe] = 0;
  *param_1 = WoodTile::vftable;
  return param_1;
}



// ===== FUN_140454cf0 @ 0x140454cf0 [input] =====

longlong * FUN_140454cf0(longlong *param_1)

{
  FUN_140321f90(param_1,6,DAT_1407b9710,0);
  *param_1 = (longlong)Bush::vftable;
  FUN_1403221a0(param_1,1);
  (**(code **)(*param_1 + 0x280))(param_1);
  *param_1 = (longlong)Sapling::vftable;
  FUN_140322200(param_1,0x3dcccccc,0,0x3dcccccc,0x3f666666,0x3f4ccccd,0x3f666666);
  param_1[0xe] = 0;
  return param_1;
}



// ===== FUN_140455620 @ 0x140455620 [input] =====

undefined8 * FUN_140455620(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_140321f90(param_1,param_2,param_3,0);
  *param_1 = LiquidTile::vftable;
  FUN_140322200(param_1,0,0,0,0x3f800000,0x3f800000,0x3f800000);
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  *param_1 = LiquidTileDynamic::vftable;
  puVar1 = param_1 + 0x10;
  *puVar1 = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  puVar2 = (undefined8 *)FUN_140558c80(0x10);
  puVar2[1] = 0;
  *puVar1 = puVar2;
  *puVar2 = puVar1;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  uVar3 = thunk_FUN_140558c80(4);
  param_1[0x16] = uVar3;
  uVar3 = thunk_FUN_140558c80(0x10);
  param_1[0x17] = uVar3;
  *(undefined1 *)(param_1 + 0x15) = 0;
  return param_1;
}



// ===== FUN_1404567a0 @ 0x1404567a0 [input] =====

undefined8 * FUN_1404567a0(undefined8 *param_1,undefined4 param_2,longlong param_3)

{
  FUN_140321f90(param_1,param_2,param_3,0);
  *param_1 = LiquidTile::vftable;
  FUN_140322200(param_1,0,0,0,0x3f800000,0x3f800000,0x3f800000);
  *(undefined1 *)((longlong)param_1 + 0x36) = 0;
  *param_1 = LiquidTileStatic::vftable;
  if (param_3 == DAT_1407b9760) {
    *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  }
  return param_1;
}



// ===== FUN_140456eb0 @ 0x140456eb0 [input] =====

undefined8 * FUN_140456eb0(undefined8 *param_1,undefined8 param_2)

{
  FUN_140321f90(param_1,param_2,DAT_1407b9750,1);
  *param_1 = HeavyTile::vftable;
  return param_1;
}



// ===== FUN_140457240 @ 0x140457240 [input] =====

undefined8 * FUN_140457240(undefined8 *param_1)

{
  FUN_140321f90(param_1,0xd,DAT_1407b9750,1);
  *param_1 = GravelTile::vftable;
  return param_1;
}



// ===== FUN_1404572c0 @ 0x1404572c0 [input] =====

undefined8 * FUN_1404572c0(undefined8 *param_1,undefined8 param_2)

{
  FUN_140321f90(param_1,param_2,DAT_1407b9790,1);
  *param_1 = OreTile::vftable;
  return param_1;
}



// ===== FUN_140457660 @ 0x140457660 [input] =====

undefined8 * FUN_140457660(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x11,DAT_1407b9778,1);
  *param_1 = TreeTile::vftable;
  return param_1;
}



// ===== FUN_140457cb0 @ 0x140457cb0 [input] =====

undefined8 * FUN_140457cb0(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x13,DAT_1407b9740,1);
  *param_1 = Sponge::vftable;
  return param_1;
}



// ===== FUN_140457ce0 @ 0x140457ce0 [input] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140457ce0(undefined8 *param_1)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  undefined1 auStackY_68 [32];
  undefined8 ***local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1407502c0 ^ (ulonglong)auStackY_68;
  local_30 = (undefined8 ****)0x0;
  uStack_28 = 0;
  local_20 = 0;
  local_18 = 0;
  FUN_140054cf0(&local_30,L"glass",5);
  FUN_140321f90(param_1,0x14);
  *param_1 = HalfTransparentTile::vftable;
  ppppuVar1 = (undefined8 ****)(param_1 + 0xf);
  *ppppuVar1 = (undefined8 ***)0x0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 7;
  *(undefined2 *)ppppuVar1 = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (ppppuVar1 != &local_30) {
    ppppuVar2 = &local_30;
    if (7 < local_18) {
      ppppuVar2 = (undefined8 ****)local_30;
    }
    FUN_1400549d0(ppppuVar1,ppppuVar2);
  }
  if (7 < local_18) {
    if (0xfff < local_18 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)local_30[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  *param_1 = GlassTile::vftable;
  return param_1;
}



// ===== FUN_140457e70 @ 0x140457e70 [input] =====

undefined8 * FUN_140457e70(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x18,DAT_1407b9790,1);
  *param_1 = SandStoneTile::vftable;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return param_1;
}



// ===== FUN_140457fa0 @ 0x140457fa0 [input] =====

undefined8 * FUN_140457fa0(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x19,DAT_1407b9778,1);
  *(undefined1 *)((longlong)param_1 + 0x37) = 1;
  *param_1 = NoteBlockTile::vftable;
  param_1[0xe] = NoteBlockTile::vftable;
  return param_1;
}



// ===== FUN_1404585e0 @ 0x1404585e0 [input] =====

void FUN_1404585e0(void)

{
  double dVar1;
  int in_stack_00000038;
  
  dVar1 = (double)FUN_140578820(0x4000000000000000,(double)(in_stack_00000038 + -0xc) / 12.0);
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"NoteBlockTile::triggerEvent - playSound - pitch = %f\n",
                (double)(float)dVar1);
}



// ===== FUN_1404588e0 @ 0x1404588e0 [input] =====

undefined8 * FUN_1404588e0(undefined8 *param_1,undefined8 param_2)

{
  FUN_140412a10(param_1,param_2,1);
  *param_1 = PoweredRailTile::vftable;
  return param_1;
}



// ===== FUN_140458e60 @ 0x140458e60 [input] =====

undefined8 * FUN_140458e60(undefined8 *param_1)

{
  FUN_140412a10(param_1,0x1c,1);
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  *param_1 = DetectorRailTile::vftable;
  param_1[0x10] = 0;
  return param_1;
}



// ===== FUN_140459740 @ 0x140459740 [input] =====

undefined8 * FUN_140459740(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x1e,DAT_1407b96f0,1);
  *param_1 = WebTile::vftable;
  return param_1;
}



// ===== FUN_1404597e0 @ 0x1404597e0 [input] =====

longlong * FUN_1404597e0(longlong *param_1)

{
  FUN_140321f90(param_1,0x1f,DAT_1407b9748,0);
  *param_1 = (longlong)Bush::vftable;
  FUN_1403221a0(param_1,1);
  (**(code **)(*param_1 + 0x280))(param_1);
  *param_1 = (longlong)TallGrass::vftable;
  FUN_140322200(param_1,0x3dcccccc,0,0x3dcccccc,0x3f666666,0x3f4ccccd,0x3f666666);
  return param_1;
}



// ===== FUN_140459d60 @ 0x140459d60 [input] =====

longlong * FUN_140459d60(longlong *param_1)

{
  FUN_140321f90(param_1,0x20,DAT_1407b9748,0);
  *param_1 = (longlong)Bush::vftable;
  FUN_1403221a0(param_1,1);
  (**(code **)(*param_1 + 0x280))(param_1);
  *param_1 = (longlong)DeadBushTile::vftable;
  FUN_140322200(param_1,0x3dcccccc,0,0x3dcccccc,0x3f666666,0x3f4ccccd,0x3f666666);
  return param_1;
}



// ===== FUN_14045a170 @ 0x14045a170 [input] =====

undefined8 * FUN_14045a170(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x24,DAT_1407b96f8,0);
  *param_1 = PistonMovingPiece::vftable;
  param_1[0xe] = PistonMovingPiece::vftable;
  *(undefined1 *)((longlong)param_1 + 0x37) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xbf800000;
  if (*(float *)(param_1 + 6) <= -5.0 && *(float *)(param_1 + 6) != -5.0) {
    *(undefined4 *)(param_1 + 6) = 0xc0a00000;
  }
  return param_1;
}



// ===== FUN_14045b010 @ 0x14045b010 [input] =====

longlong * FUN_14045b010(longlong *param_1,undefined1 param_2)

{
  FUN_140321f90(param_1,param_2,DAT_1407b9710,0);
  *param_1 = (longlong)Bush::vftable;
  FUN_1403221a0(param_1,1);
  (**(code **)(*param_1 + 0x280))(param_1);
  return param_1;
}



// ===== FUN_14045b250 @ 0x14045b250 [input] =====

longlong * FUN_14045b250(longlong *param_1,undefined1 param_2)

{
  FUN_140321f90(param_1,param_2,DAT_1407b9710,0);
  *param_1 = (longlong)Bush::vftable;
  FUN_1403221a0(param_1,1);
  (**(code **)(*param_1 + 0x280))(param_1);
  *param_1 = (longlong)Mushroom::vftable;
  FUN_140322200(param_1,0x3e99999a,0,0x3e99999a,0x3f333333,0x3ecccccd,0x3f333333);
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  return param_1;
}



// ===== FUN_14045b850 @ 0x14045b850 [input] =====

undefined8 * FUN_14045b850(undefined8 *param_1,undefined8 param_2)

{
  FUN_140321f90(param_1,param_2,DAT_1407b9770,1);
  *param_1 = MetalTile::vftable;
  return param_1;
}



// ===== FUN_14045b880 @ 0x14045b880 [input] =====

undefined8 * FUN_14045b880(undefined8 *param_1)

{
  FUN_1405198a0();
  *param_1 = StoneSlabTile::vftable;
  return param_1;
}



// ===== FUN_14045bb90 @ 0x14045bb90 [input] =====

undefined8 * FUN_14045bb90(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x2e,DAT_1407b9738,1);
  *param_1 = TntTile::vftable;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



// ===== FUN_14045c9f0 @ 0x14045c9f0 [input] =====

undefined8 * FUN_14045c9f0(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x2f,DAT_1407b9778,1);
  *param_1 = BookshelfTile::vftable;
  return param_1;
}



// ===== FUN_14045ca50 @ 0x14045ca50 [input] =====

undefined8 * FUN_14045ca50(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x31,DAT_1407b9790,1);
  *param_1 = ObsidianTile::vftable;
  return param_1;
}



// ===== FUN_14045ca80 @ 0x14045ca80 [input] =====

undefined8 * FUN_14045ca80(undefined8 *param_1,undefined8 param_2)

{
  FUN_140321f90(param_1,param_2,DAT_1407b96a0,0);
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  *param_1 = TorchTile::vftable;
  return param_1;
}



// ===== FUN_14045d590 @ 0x14045d590 [input] =====

undefined8 * FUN_14045d590(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x34,DAT_1407b9790,0);
  *(undefined1 *)((longlong)param_1 + 0x37) = 1;
  *param_1 = MobSpawnerTile::vftable;
  param_1[0xe] = MobSpawnerTile::vftable;
  return param_1;
}



// ===== FUN_14045d790 @ 0x14045d790 [input] =====

undefined8 * FUN_14045d790(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x3a,DAT_1407b9778,1);
  *param_1 = WorkbenchTile::vftable;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



// ===== FUN_14045db00 @ 0x14045db00 [input] =====

longlong * FUN_14045db00(longlong *param_1,undefined1 param_2)

{
  FUN_140321f90(param_1,param_2,DAT_1407b9710,0);
  *param_1 = (longlong)Bush::vftable;
  FUN_1403221a0(param_1,1);
  (**(code **)(*param_1 + 0x280))(param_1);
  *param_1 = (longlong)CropTile::vftable;
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  FUN_140322200(param_1,0,0,0,0x3f800000,0x3e800000,0x3f800000);
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (*(float *)(param_1 + 6) <= 0.0 && *(float *)(param_1 + 6) != 0.0) {
    *(undefined4 *)(param_1 + 6) = 0;
  }
  param_1[8] = DAT_1407b32e8;
  *(undefined1 *)((longlong)param_1 + 0x35) = 0;
  (&DAT_1407b22b0)[(int)param_1[5]] = 0xf;
  return param_1;
}



// ===== FUN_14045e160 @ 0x14045e160 [input] =====

undefined8 * FUN_14045e160(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x3c,DAT_1407b9700,0);
  *param_1 = FarmTile::vftable;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  FUN_140322200(param_1,0,0,0,0x3f800000,0x3f700000,0x3f800000);
  (&DAT_1407ae2b0)[*(int *)(param_1 + 5)] = 0xff;
  return param_1;
}



// ===== FUN_14045e910 @ 0x14045e910 [input] =====

LARGE_INTEGER FUN_14045e910(LARGE_INTEGER param_1,undefined8 param_2,undefined1 param_3)

{
  LARGE_INTEGER LVar1;
  LARGE_INTEGER local_res8;
  
  local_res8 = param_1;
  FUN_140321f90(param_1.QuadPart,param_2,DAT_1407b9790,1);
  *(undefined1 *)(param_1.QuadPart + 0x37) = 1;
  *(undefined ***)param_1 = FurnaceTile::vftable;
  *(undefined ***)(param_1.QuadPart + 0x70) = FurnaceTile::vftable;
  LVar1.QuadPart = FUN_140558c80(0x18);
  local_res8.QuadPart = LVar1.QuadPart;
  QueryPerformanceCounter(&local_res8);
  *(ulonglong *)LVar1 = (local_res8.QuadPart - 0x274aa0536214U ^ 0x5deece66d) & 0xffffffffffff;
  *(undefined1 *)(LVar1.QuadPart + 8) = 0;
  ((LARGE_INTEGER *)(param_1.QuadPart + 0x78))->QuadPart = (LONGLONG)LVar1;
  *(undefined1 *)(param_1.QuadPart + 0x80) = param_3;
  *(undefined8 *)(param_1.QuadPart + 0x88) = 0;
  *(undefined8 *)(param_1.QuadPart + 0x90) = 0;
  return (LARGE_INTEGER)param_1.s;
}



// ===== FUN_14045fb50 @ 0x14045fb50 [input] =====

undefined8 *
FUN_14045fb50(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  FUN_140321f90(param_1,param_2,DAT_1407b9778,0);
  *(undefined1 *)((longlong)param_1 + 0x37) = 1;
  *param_1 = SignTile::vftable;
  param_1[0xe] = SignTile::vftable;
  *(undefined1 *)((longlong)param_1 + 0x7c) = param_4;
  *(undefined4 *)(param_1 + 0xf) = 0x1001004;
  FUN_140322200(param_1,0x3e800000,0,0x3e800000,0x3f400000,0x3f800000,0x3f400000);
  return param_1;
}



// ===== FUN_14045ff90 @ 0x14045ff90 [input] =====

undefined8 * FUN_14045ff90(undefined8 *param_1,undefined4 param_2,longlong param_3)

{
  undefined4 uVar1;
  bool bVar2;
  
  FUN_140321f90(param_1,param_2,param_3,0);
  bVar2 = param_3 == DAT_1407b9770;
  *param_1 = DoorTile::vftable;
  if (bVar2) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0xe) = uVar1;
  FUN_140322200(param_1,0,0,0,0x3f800000,0x3f800000,0x3f800000);
  return param_1;
}



// ===== FUN_140460dd0 @ 0x140460dd0 [input] =====

undefined8 * FUN_140460dd0(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x41,DAT_1407b96a0,0);
  *param_1 = LadderTile::vftable;
  return param_1;
}



// ===== FUN_1404611a0 @ 0x1404611a0 [input] =====

undefined8 * FUN_1404611a0(undefined8 *param_1)

{
  FUN_140412a10(param_1,0x42,0);
  *param_1 = RailTile::vftable;
  return param_1;
}



// ===== FUN_140461460 @ 0x140461460 [input] =====

undefined8 * FUN_140461460(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x45,DAT_1407b96a0,0);
  *param_1 = LeverTile::vftable;
  return param_1;
}



// ===== FUN_1404622f0 @ 0x1404622f0 [input] =====

undefined8 *
FUN_1404622f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_140321f90(param_1,param_2,param_4,0);
  *param_1 = BasePressurePlateTile::vftable;
  puVar1 = param_1 + 0xe;
  *puVar1 = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 7;
  *(undefined2 *)puVar1 = 0;
  if (puVar1 != param_3) {
    puVar2 = param_3 + 2;
    if (7 < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    FUN_1400549d0(puVar1,param_3,*puVar2);
  }
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  *param_1 = PressurePlateTile::vftable;
  *(undefined4 *)(param_1 + 0x12) = param_5;
  FUN_140519f60(param_1,1);
  return param_1;
}



// ===== FUN_140462570 @ 0x140462570 [input] =====

undefined8 * FUN_140462570(undefined8 *param_1,undefined8 param_2,char param_3)

{
  FUN_140321f90(param_1,param_2,DAT_1407b9790,1);
  *(char *)(param_1 + 0xe) = param_3;
  *param_1 = RedStoneOreTile::vftable;
  if (param_3 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  }
  return param_1;
}



// ===== FUN_1404633c0 @ 0x1404633c0 [input] =====

undefined8 * FUN_1404633c0(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_140321f90(param_1,param_2,DAT_1407b96a0,0);
  *(undefined1 *)(param_1 + 0xe) = param_3;
  *param_1 = NotGateTile::vftable;
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  return param_1;
}



// ===== FUN_140464810 @ 0x140464810 [input] =====

undefined8 * FUN_140464810(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x4d,DAT_1407b96a0,0);
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  *param_1 = StoneButtonTile::vftable;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return param_1;
}



// ===== FUN_140464870 @ 0x140464870 [input] =====

longlong * FUN_140464870(longlong *param_1)

{
  undefined8 *puVar1;
  
  FUN_140321f90(param_1,0x4e,DAT_1407b96d0,0);
  *param_1 = (longlong)TopSnowTile::vftable;
  puVar1 = TlsGetValue(DAT_1407bb098);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0x3ff0000000000000;
  puVar1[4] = 0x3fc0000000000000;
  puVar1[5] = 0x3ff0000000000000;
  *(int *)(puVar1 + 6) = (int)param_1[5];
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  (**(code **)(*param_1 + 0x88))(param_1,0,0,0,0x3f800000,0x3e000000,0x3f800000);
  return param_1;
}



// ===== FUN_140465120 @ 0x140465120 [input] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140465120(undefined8 *param_1)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  undefined1 auStackY_68 [32];
  undefined8 ***local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1407502c0 ^ (ulonglong)auStackY_68;
  local_30 = (undefined8 ****)0x0;
  uStack_28 = 0;
  local_20 = 0;
  local_18 = 0;
  FUN_140054cf0(&local_30,&DAT_14062f1a8,3);
  FUN_140321f90(param_1,0x4f);
  *param_1 = HalfTransparentTile::vftable;
  ppppuVar1 = (undefined8 ****)(param_1 + 0xf);
  *ppppuVar1 = (undefined8 ***)0x0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 7;
  *(undefined2 *)ppppuVar1 = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (ppppuVar1 != &local_30) {
    ppppuVar2 = &local_30;
    if (7 < local_18) {
      ppppuVar2 = (undefined8 ****)local_30;
    }
    FUN_1400549d0(ppppuVar1,ppppuVar2);
  }
  if (7 < local_18) {
    if (0xfff < local_18 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)local_30[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  *param_1 = IceTile::vftable;
  *(undefined4 *)(param_1 + 0xb) = 0x3f7ae148;
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  return param_1;
}



// ===== FUN_1404656f0 @ 0x1404656f0 [input] =====

undefined8 * FUN_1404656f0(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x50,DAT_1407b96e8,1);
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  *param_1 = SnowTile::vftable;
  return param_1;
}



// ===== FUN_140465730 @ 0x140465730 [input] =====

undefined8 * FUN_140465730(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x51,DAT_1407b96e0,0);
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  *param_1 = CactusTile::vftable;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



// ===== FUN_140465ea0 @ 0x140465ea0 [input] =====

undefined8 * FUN_140465ea0(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x52,DAT_1407b96b8,1);
  *param_1 = ClayTile::vftable;
  return param_1;
}



// ===== FUN_140465ee0 @ 0x140465ee0 [input] =====

undefined8 * FUN_140465ee0(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x53,DAT_1407b9710,0);
  *param_1 = ReedTile::vftable;
  FUN_140322200(param_1,0x3e000000,0,0x3e000000,0x3f600000,0x3f800000,0x3f600000);
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  return param_1;
}



// ===== FUN_140466ce0 @ 0x140466ce0 [input] =====

undefined8 * FUN_140466ce0(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x54,DAT_1407b9778,1);
  *(undefined1 *)((longlong)param_1 + 0x37) = 1;
  *param_1 = JukeboxTile::vftable;
  param_1[0xe] = JukeboxTile::vftable;
  param_1[0xf] = 0;
  return param_1;
}



// ===== FUN_140467ae0 @ 0x140467ae0 [input] =====

undefined8 *
FUN_140467ae0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_140321f90(param_1,param_2,param_4,0);
  *param_1 = FenceTile::vftable;
  puVar1 = param_1 + 0xe;
  *puVar1 = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 7;
  *(undefined2 *)puVar1 = 0;
  if (puVar1 != param_3) {
    puVar2 = param_3 + 2;
    if (7 < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    FUN_1400549d0(puVar1,param_3,*puVar2);
  }
  return param_1;
}



// ===== FUN_140468170 @ 0x140468170 [input] =====

undefined8 * FUN_140468170(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_140321f90(param_1,param_2,DAT_1407b96b0,1);
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  *param_1 = PumpkinTile::vftable;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0xe) = param_3;
  return param_1;
}



// ===== FUN_140469640 @ 0x140469640 [input] =====

undefined8 * FUN_140469640(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x57,DAT_1407b9790,1);
  *param_1 = NetherrackTile::vftable;
  return param_1;
}



// ===== FUN_140469670 @ 0x140469670 [input] =====

undefined8 * FUN_140469670(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x58,DAT_1407b9750,1);
  *param_1 = SoulSandTile::vftable;
  return param_1;
}



// ===== FUN_1404697a0 @ 0x1404697a0 [input] =====

undefined8 * FUN_1404697a0(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x59,DAT_1407b9788,1);
  *param_1 = Glowstonetile::vftable;
  return param_1;
}



// ===== FUN_1404698b0 @ 0x1404698b0 [input] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1404698b0(undefined8 *param_1)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  undefined1 auStackY_68 [32];
  undefined8 ***local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1407502c0 ^ (ulonglong)auStackY_68;
  local_30 = (undefined8 ****)0x0;
  uStack_28 = 0;
  local_20 = 0;
  local_18 = 0;
  FUN_140054cf0(&local_30,L"portal",6);
  FUN_140321f90(param_1,0x5a);
  *param_1 = HalfTransparentTile::vftable;
  ppppuVar1 = (undefined8 ****)(param_1 + 0xf);
  *ppppuVar1 = (undefined8 ***)0x0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 7;
  *(undefined2 *)ppppuVar1 = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (ppppuVar1 != &local_30) {
    ppppuVar2 = &local_30;
    if (7 < local_18) {
      ppppuVar2 = (undefined8 ****)local_30;
    }
    FUN_1400549d0(ppppuVar1,ppppuVar2);
  }
  if (7 < local_18) {
    if (0xfff < local_18 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)local_30[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  *param_1 = PortalTile::vftable;
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  return param_1;
}



// ===== FUN_14046a8a0 @ 0x14046a8a0 [input] =====

undefined8 * FUN_14046a8a0(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x5c,DAT_1407b96c0,0);
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  *param_1 = CakeTile::vftable;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return param_1;
}



// ===== FUN_14046b250 @ 0x14046b250 [input] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14046b250(undefined8 *param_1)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  undefined1 auStackY_68 [32];
  undefined8 ***local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1407502c0 ^ (ulonglong)auStackY_68;
  local_30 = (undefined8 ****)0x0;
  uStack_28 = 0;
  local_20 = 0;
  local_18 = 0;
  FUN_140054cf0(&local_30,L"glass",5);
  FUN_140321f90(param_1,0x5f);
  *param_1 = HalfTransparentTile::vftable;
  ppppuVar1 = (undefined8 ****)(param_1 + 0xf);
  *ppppuVar1 = (undefined8 ***)0x0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 7;
  *(undefined2 *)ppppuVar1 = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (ppppuVar1 != &local_30) {
    ppppuVar2 = &local_30;
    if (7 < local_18) {
      ppppuVar2 = (undefined8 ****)local_30;
    }
    FUN_1400549d0(ppppuVar1,ppppuVar2);
  }
  if (7 < local_18) {
    if (0xfff < local_18 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)local_30[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  *param_1 = StainedGlassBlock::vftable;
  return param_1;
}



// ===== FUN_14046b600 @ 0x14046b600 [input] =====

undefined8 * FUN_14046b600(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_140321f90(param_1,0x60,DAT_1407b9778,0);
  *param_1 = TrapDoorTile::vftable;
  puVar1 = TlsGetValue(DAT_1407bb098);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0x3ff0000000000000;
  puVar1[4] = 0x3ff0000000000000;
  puVar1[5] = 0x3ff0000000000000;
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 5);
  return param_1;
}



// ===== FUN_14046bd60 @ 0x14046bd60 [input] =====

undefined8 * FUN_14046bd60(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x61,DAT_1407b96b8,1);
  *param_1 = StoneMonsterTile::vftable;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (*(float *)(param_1 + 6) <= 0.0 && *(float *)(param_1 + 6) != 0.0) {
    *(undefined4 *)(param_1 + 6) = 0;
  }
  return param_1;
}



// ===== FUN_14046c120 @ 0x14046c120 [input] =====

undefined8 * FUN_14046c120(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x62,DAT_1407b9790,1);
  param_1[0xe] = 0;
  *param_1 = SmoothStoneBrickTile::vftable;
  return param_1;
}



// ===== FUN_14046c2c0 @ 0x14046c2c0 [input] =====

undefined8 *
FUN_14046c2c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_140321f90(param_1,param_2,DAT_1407b9778,1);
  *(undefined4 *)(param_1 + 0xe) = param_4;
  *param_1 = HugeMushroomTile::vftable;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return param_1;
}



// ===== FUN_14046c970 @ 0x14046c970 [input] =====

undefined8 * FUN_14046c970(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x67,DAT_1407b96b0,1);
  param_1[0xe] = 0;
  *param_1 = MelonTile::vftable;
  return param_1;
}



// ===== FUN_14046cca0 @ 0x14046cca0 [input] =====

undefined8 * FUN_14046cca0(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x6a,DAT_1407b9748,0);
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  *param_1 = VineTile::vftable;
  return param_1;
}



// ===== FUN_14046e050 @ 0x14046e050 [input] =====

undefined8 * FUN_14046e050(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x6e,DAT_1407b9708,1);
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  *param_1 = MycelTile::vftable;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



// ===== FUN_14046e630 @ 0x14046e630 [input] =====

longlong * FUN_14046e630(longlong *param_1)

{
  FUN_140321f90(param_1,0x6f,DAT_1407b9710,0);
  *param_1 = (longlong)Bush::vftable;
  FUN_1403221a0(param_1,1);
  (**(code **)(*param_1 + 0x280))(param_1);
  *param_1 = (longlong)WaterlilyTile::vftable;
  FUN_140322200(param_1,0,0,0,0x3f800000,0x3c800000,0x3f800000);
  return param_1;
}



// ===== FUN_14046e8c0 @ 0x14046e8c0 [input] =====

longlong * FUN_14046e8c0(longlong *param_1)

{
  FUN_140321f90(param_1,0x73,DAT_1407b9710,0);
  *param_1 = (longlong)Bush::vftable;
  FUN_1403221a0(param_1,1);
  (**(code **)(*param_1 + 0x280))(param_1);
  *param_1 = (longlong)NetherWartTile::vftable;
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  FUN_140322200(param_1,0,0,0,0x3f800000,0x3e800000,0x3f800000);
  return param_1;
}



// ===== FUN_14046edd0 @ 0x14046edd0 [input] =====

undefined8 * FUN_14046edd0(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x74,DAT_1407b9790,0);
  *(undefined1 *)((longlong)param_1 + 0x37) = 1;
  *param_1 = EnchantmentTableTile::vftable;
  param_1[0xe] = EnchantmentTableTile::vftable;
  FUN_140322200(param_1,0,0,0,0x3f800000,0x3f400000,0x3f800000);
  (&DAT_1407ae2b0)[*(int *)(param_1 + 5)] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return param_1;
}



// ===== FUN_14046f960 @ 0x14046f960 [input] =====

LARGE_INTEGER FUN_14046f960(LARGE_INTEGER param_1)

{
  LARGE_INTEGER LVar1;
  LARGE_INTEGER local_res8;
  
  local_res8 = param_1;
  FUN_140321f90(param_1.QuadPart,0x75,DAT_1407b9770,0);
  *(undefined1 *)(param_1.QuadPart + 0x37) = 1;
  *(undefined ***)param_1 = BrewingStandTile::vftable;
  *(undefined ***)(param_1.QuadPart + 0x70) = BrewingStandTile::vftable;
  LVar1.QuadPart = FUN_140558c80(0x18);
  local_res8.QuadPart = LVar1.QuadPart;
  QueryPerformanceCounter(&local_res8);
  *(ulonglong *)LVar1 = (local_res8.QuadPart - 0x274aa0536214U ^ 0x5deece66d) & 0xffffffffffff;
  *(undefined1 *)(LVar1.QuadPart + 8) = 0;
  ((LARGE_INTEGER *)(param_1.QuadPart + 0x78))->QuadPart = (LONGLONG)LVar1;
  *(undefined8 *)(param_1.QuadPart + 0x80) = 0;
  return (LARGE_INTEGER)param_1.s;
}



// ===== FUN_140470a50 @ 0x140470a50 [input] =====

undefined8 * FUN_140470a50(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x77,DAT_1407b9768,0);
  *(undefined1 *)((longlong)param_1 + 0x37) = 1;
  *param_1 = TheEndPortal::vftable;
  param_1[0xe] = TheEndPortal::vftable;
  (&DAT_1407b4360)[*(int *)(param_1 + 5)] = 0xf;
  return param_1;
}



// ===== FUN_140471140 @ 0x140471140 [input] =====

undefined8 * FUN_140471140(undefined8 *param_1,undefined8 param_2,char param_3)

{
  FUN_140321f90(param_1,param_2,DAT_1407b9720,1);
  *(char *)(param_1 + 0xe) = param_3;
  *param_1 = RedlightTile::vftable;
  if (param_3 != '\0') {
    (&DAT_1407b4360)[*(int *)(param_1 + 5)] = 0xf;
  }
  return param_1;
}



// ===== FUN_140471470 @ 0x140471470 [input] =====

undefined8 * FUN_140471470(undefined8 *param_1)

{
  FUN_1405198a0();
  *param_1 = WoodSlabTile::vftable;
  return param_1;
}



// ===== FUN_140471660 @ 0x140471660 [input] =====

undefined8 * FUN_140471660(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x82,DAT_1407b9790,0);
  *(undefined1 *)((longlong)param_1 + 0x37) = 1;
  *param_1 = EnderChestTile::vftable;
  param_1[0xe] = EnderChestTile::vftable;
  FUN_140322200(param_1,0x3d800000,0,0x3d800000,0x3f700000,0x3f600000,0x3f700000);
  return param_1;
}



// ===== FUN_140471f00 @ 0x140471f00 [input] =====

undefined8 * FUN_140471f00(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x83,DAT_1407b96a0,0);
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  *param_1 = TripWireSourceTile::vftable;
  return param_1;
}



// ===== FUN_140472e10 @ 0x140472e10 [input] =====

undefined8 * FUN_140472e10(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x89,DAT_1407b9770,1);
  *(undefined1 *)((longlong)param_1 + 0x37) = 1;
  *param_1 = CommandBlock::vftable;
  param_1[0xe] = CommandBlock::vftable;
  return param_1;
}



// ===== FUN_140473700 @ 0x140473700 [input] =====

undefined8 * FUN_140473700(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x8a,DAT_1407b9788,0);
  *param_1 = BeaconTile::vftable;
  param_1[0xe] = BeaconTile::vftable;
  *(undefined1 *)((longlong)param_1 + 0x37) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x40400000;
  if (*(float *)(param_1 + 6) <= 15.0 && *(float *)(param_1 + 6) != 15.0) {
    *(undefined4 *)(param_1 + 6) = 0x41700000;
  }
  return param_1;
}



// ===== FUN_140473c00 @ 0x140473c00 [input] =====

undefined8 * FUN_140473c00(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x8c,DAT_1407b96a0,0);
  *param_1 = FlowerPotTile::vftable;
  FUN_140322200(param_1,0x3ea00000,0,0x3ea00000,0x3f300000,0x3ec00000,0x3f300000);
  (&DAT_1407b22b0)[*(int *)(param_1 + 5)] = 0xf;
  return param_1;
}



// ===== FUN_140474a10 @ 0x140474a10 [input] =====

undefined8 * FUN_140474a10(undefined8 *param_1)

{
  FUN_14045db00(param_1,0x8d);
  *param_1 = CarrotTile::vftable;
  return param_1;
}



// ===== FUN_140474c00 @ 0x140474c00 [input] =====

undefined8 * FUN_140474c00(undefined8 *param_1)

{
  FUN_14045db00(param_1,0x8e);
  *param_1 = PotatoTile::vftable;
  return param_1;
}



// ===== FUN_140474d50 @ 0x140474d50 [input] =====

undefined8 * FUN_140474d50(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x8f,DAT_1407b96a0,0);
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  *param_1 = WoodButtonTile::vftable;
  *(undefined1 *)(param_1 + 0xe) = 1;
  return param_1;
}



// ===== FUN_140474db0 @ 0x140474db0 [input] =====

undefined8 * FUN_140474db0(undefined8 *param_1)

{
  DWORD dwTlsIndex;
  undefined8 *puVar1;
  
  FUN_140321f90(param_1,0x90,DAT_1407b96a0,0);
  dwTlsIndex = DAT_1407bb098;
  *param_1 = SkullTile::vftable;
  param_1[0xe] = SkullTile::vftable;
  *(undefined1 *)((longlong)param_1 + 0x37) = 1;
  puVar1 = TlsGetValue(dwTlsIndex);
  *puVar1 = 0x3fd0000000000000;
  puVar1[2] = 0x3fd0000000000000;
  puVar1[4] = 0x3fe0000000000000;
  puVar1[1] = 0;
  puVar1[3] = 0x3fe8000000000000;
  puVar1[5] = 0x3fe8000000000000;
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 5);
  return param_1;
}



// ===== FUN_140476e10 @ 0x140476e10 [input] =====

undefined8 * FUN_140476e10(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x91,DAT_1407b9718,0);
  *param_1 = AnvilTile::vftable;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  (&DAT_1407ae2b0)[*(int *)(param_1 + 5)] = 0;
  return param_1;
}



// ===== FUN_140477370 @ 0x140477370 [input] =====

undefined8 *
FUN_140477370(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_140321f90(param_1,param_2,param_4,0);
  *param_1 = BasePressurePlateTile::vftable;
  puVar1 = param_1 + 0xe;
  *puVar1 = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 7;
  *(undefined2 *)puVar1 = 0;
  if (puVar1 != param_3) {
    puVar2 = param_3 + 2;
    if (7 < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    FUN_1400549d0(puVar1,param_3,*puVar2);
  }
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  *param_1 = WeightedPressurePlateTile::vftable;
  *(undefined4 *)(param_1 + 0x12) = param_5;
  FUN_140519f60(param_1,0xf);
  return param_1;
}



// ===== FUN_1404774c0 @ 0x1404774c0 [input] =====

undefined8 * FUN_1404774c0(undefined8 *param_1)

{
  FUN_140501540();
  *(undefined1 *)((longlong)param_1 + 0x37) = 1;
  *param_1 = ComparatorTile::vftable;
  param_1[0xf] = ComparatorTile::vftable;
  return param_1;
}



// ===== FUN_1404784e0 @ 0x1404784e0 [input] =====

undefined8 * FUN_1404784e0(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x97,DAT_1407b9778,0);
  *(undefined1 *)((longlong)param_1 + 0x37) = 1;
  *param_1 = DaylightDetectorTile::vftable;
  param_1[0xe] = DaylightDetectorTile::vftable;
  FUN_140322200(param_1,0,0,0,0x3f800000,0x3ec00000,0x3f800000);
  return param_1;
}



// ===== FUN_140478bf0 @ 0x140478bf0 [input] =====

undefined8 * FUN_140478bf0(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x98,DAT_1407b9770,1);
  *param_1 = PoweredMetalTile::vftable;
  return param_1;
}



// ===== FUN_140478c20 @ 0x140478c20 [input] =====

undefined8 * FUN_140478c20(undefined8 *param_1)

{
  FUN_140321f90(param_1,0x9b,DAT_1407b9790,1);
  *param_1 = QuartzBlockTile::vftable;
  return param_1;
}



// ===== FUN_140479770 @ 0x140479770 [input] =====

undefined8 * FUN_140479770(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_14042a1b0(param_1,0x9e);
  *param_1 = DropperTile::vftable;
  param_1[0xe] = DropperTile::vftable;
  puVar1 = (undefined8 *)FUN_140558c80(8);
  *puVar1 = DefaultDispenseItemBehavior::vftable;
  param_1[0x13] = puVar1;
  return param_1;
}



// ===== FUN_14047a2a0 @ 0x14047a2a0 [input] =====

undefined8 * FUN_14047a2a0(undefined8 *param_1)

{
  FUN_140321f90(param_1,0xaa,DAT_1407b9708,1);
  *param_1 = HayBlockTile::vftable;
  return param_1;
}



// ===== FUN_14047a4e0 @ 0x14047a4e0 [input] =====

longlong * FUN_14047a4e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  FUN_140321f90(param_1,0xab,DAT_1407b9728,0);
  *param_1 = (longlong)WoolCarpetTile::vftable;
  puVar1 = TlsGetValue(DAT_1407bb098);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0x3ff0000000000000;
  puVar1[4] = 0x3fb0000000000000;
  puVar1[5] = 0x3ff0000000000000;
  *(int *)(puVar1 + 6) = (int)param_1[5];
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  (**(code **)(*param_1 + 0x88))(param_1,0,0,0,0x3f800000,0x3d800000,0x3f800000);
  return param_1;
}



// ===== FUN_14047a810 @ 0x14047a810 [input] =====

undefined8 * FUN_14047a810(undefined8 *param_1,int param_2)

{
  FUN_140358fc0();
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  *(int *)(param_1 + 0x13) = param_2 + 0x100;
  *param_1 = WoolTileItem::vftable;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



// ===== FUN_14047a9d0 @ 0x14047a9d0 [input] =====

undefined8 *
FUN_14047a9d0(undefined8 *param_1,int param_2,undefined8 param_3,int *param_4,undefined4 param_5,
             int param_6)

{
  FUN_140358fc0();
  param_1[0x15] = param_3;
  *(int *)(param_1 + 0x13) = param_2 + 0x100;
  param_1[0x14] = 0;
  *param_1 = MultiTextureTileItem::vftable;
  *(undefined4 *)(param_1 + 0x17) = param_5;
  param_1[0x16] = param_4;
  if (param_6 == -1) {
    param_6 = *param_4;
  }
  *(int *)((longlong)param_1 + 0xbc) = param_6;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return param_1;
}



// ===== FUN_14047ab30 @ 0x14047ab30 [input] =====

undefined8 *
FUN_14047ab30(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  FUN_140358fc0();
  param_1[0x16] = param_3;
  *(int *)(param_1 + 0x13) = param_2 + 0x100;
  *param_1 = StoneSlabTileItem::vftable;
  *(undefined1 *)(param_1 + 0x15) = param_5;
  param_1[0x17] = param_4;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return param_1;
}



// ===== FUN_14047b7b0 @ 0x14047b7b0 [input] =====

undefined8 * FUN_14047b7b0(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0xffffff12);
  *(undefined4 *)(param_1 + 0x13) = 0x12;
  *param_1 = LeafTileItem::vftable;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return param_1;
}



// ===== FUN_14047b940 @ 0x14047b940 [input] =====

undefined8 * FUN_14047b940(undefined8 *param_1,int param_2,char param_3)

{
  longlong lVar1;
  
  FUN_140358fc0();
  *(int *)(param_1 + 0x13) = param_2 + 0x100;
  *param_1 = ColoredTileItem::vftable;
  lVar1 = DAT_1407b4350;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x15] = *(undefined8 *)(lVar1 + (longlong)*(int *)(param_1 + 0x13) * 8);
  if (param_3 != '\0') {
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  }
  return param_1;
}



// ===== FUN_14047ba70 @ 0x14047ba70 [input] =====

longlong FUN_14047ba70(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  plVar1 = (longlong *)(param_1 + 0xb0);
  if (*plVar1 != 0) {
    thunk_FUN_1401fe000(*plVar1,4);
  }
  uVar4 = *(uint *)(param_2 + 1);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = CONCAT44(0,uVar4);
  uVar8 = SUB168(ZEXT816(4) * auVar7,0);
  if (SUB168(ZEXT816(4) * auVar7,8) != 0) {
    uVar8 = 0xffffffffffffffff;
  }
  uVar8 = thunk_FUN_140558c80(uVar8);
  lVar3 = CONCAT44(0,uVar4) * 4;
  FUN_140595d50(uVar8,0,lVar3);
  uVar10 = 0;
  local_28 = (undefined4)uVar8;
  uStack_24 = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)plVar1 = local_28;
  *(undefined4 *)(param_1 + 0xb4) = uStack_24;
  *(uint *)(param_1 + 0xb8) = uVar4;
  *(undefined4 *)(param_1 + 0xbc) = uStack_1c;
  if (uVar4 != 0) {
    if (3 < uVar4) {
      plVar5 = (longlong *)*plVar1;
      plVar6 = (longlong *)*param_2;
      plVar2 = (longlong *)((longlong)plVar5 + (ulonglong)(uVar4 - 1) * 4);
      if ((((longlong *)((longlong)plVar6 + (ulonglong)(uVar4 - 1) * 4) < plVar5) ||
          (plVar2 < plVar6)) && ((plVar1 < plVar5 || (plVar2 < plVar1)))) {
        FUN_140596110(plVar5,plVar6,lVar3);
        do {
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar4);
        return param_1;
      }
    }
    lVar3 = *param_2;
    uVar11 = (ulonglong)uVar4;
    lVar9 = 0;
    do {
      *(undefined4 *)(lVar9 + *plVar1) = *(undefined4 *)(lVar9 + lVar3);
      uVar11 = uVar11 - 1;
      lVar9 = lVar9 + 4;
    } while (uVar11 != 0);
  }
  return param_1;
}



// ===== FUN_14047bcb0 @ 0x14047bcb0 [input] =====

undefined8 * FUN_14047bcb0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_1407ad180;
  FUN_140358fc0(param_1,0xffffff4e);
  param_1[0x15] = uVar1;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = SnowItem::vftable;
  *(undefined4 *)(param_1 + 0x13) = 0x4e;
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return param_1;
}



// ===== FUN_14047c170 @ 0x14047c170 [input] =====

undefined8 * FUN_14047c170(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_140358fc0(param_1,0xffffff6f);
  *(undefined4 *)(param_1 + 0x13) = 0x6f;
  param_1[0x14] = 0;
  *param_1 = ColoredTileItem::vftable;
  lVar2 = DAT_1407b4350;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  uVar1 = *(undefined8 *)(lVar2 + (longlong)*(int *)(param_1 + 0x13) * 8);
  *param_1 = WaterLilyTileItem::vftable;
  param_1[0x15] = uVar1;
  return param_1;
}



// ===== FUN_14047c810 @ 0x14047c810 [input] =====

undefined8 * FUN_14047c810(undefined8 *param_1,int param_2)

{
  FUN_140358fc0();
  param_1[0x14] = 0;
  *(int *)(param_1 + 0x13) = param_2 + 0x100;
  *param_1 = PistonTileItem::vftable;
  return param_1;
}



// ===== FUN_14047c860 @ 0x14047c860 [input] =====

undefined8 * FUN_14047c860(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = DAT_1407acf98;
  iVar1 = *(int *)(DAT_1407acf98 + 0x28);
  FUN_140358fc0(param_1,iVar1 + -0x100);
  *(int *)(param_1 + 0x13) = iVar1;
  param_1[0x16] = &DAT_140610200;
  *param_1 = AnvilTileItem::vftable;
  param_1[0x14] = 0;
  param_1[0x15] = lVar2;
  *(undefined4 *)(param_1 + 0x17) = 3;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x7fe;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return param_1;
}



// ===== FUN_14047c920 @ 0x14047c920 [input] =====

undefined8 * FUN_14047c920(undefined8 *param_1,int param_2)

{
  FUN_140358fc0();
  param_1[0x14] = 0;
  *param_1 = TileItem::vftable;
  *(int *)(param_1 + 0x13) = param_2 + 0x100;
  return param_1;
}



// ===== FUN_14047eed0 @ 0x14047eed0 [input] =====

undefined8 * FUN_14047eed0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140358fc0();
  param_1[0x13] = param_3;
  *param_1 = DoorItem::vftable;
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  return param_1;
}



// ===== FUN_1404aff60 @ 0x1404aff60 [input] =====

undefined8 * FUN_1404aff60(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  FUN_140358fc0();
  param_1[0x14] = param_3;
  *param_1 = WeaponItem::vftable;
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 4);
  *(float *)(param_1 + 0x13) = *(float *)(param_3 + 0xc) + 4.0;
  return param_1;
}



// ===== FUN_1404b0910 @ 0x1404b0910 [input] =====

undefined8 * FUN_1404b0910(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1404beec0(param_1,param_2,0x3f800000,param_3,DAT_1407ba6f0);
  *param_1 = ShovelItem::vftable;
  return param_1;
}



// ===== FUN_1404b0970 @ 0x1404b0970 [input] =====

undefined8 * FUN_1404b0970(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  
  FUN_140358fc0();
  param_1[0x15] = param_3;
  *param_1 = DiggerItem::vftable;
  param_1[0x13] = &DAT_1407bfc68;
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 8);
  fVar1 = *(float *)(param_3 + 0xc);
  *param_1 = PickaxeItem::vftable;
  *(float *)((longlong)param_1 + 0xa4) = fVar1 + 2.0;
  return param_1;
}



// ===== FUN_1404b0b80 @ 0x1404b0b80 [input] =====

undefined8 * FUN_1404b0b80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1404beec0(param_1,param_2,0x40400000,param_3,DAT_1407ba6f8);
  *param_1 = HatchetItem::vftable;
  return param_1;
}



// ===== FUN_1404b0c80 @ 0x1404b0c80 [input] =====

undefined8 * FUN_1404b0c80(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  FUN_140358fc0();
  param_1[0x13] = param_3;
  *param_1 = HoeItem::vftable;
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 4);
  return param_1;
}



// ===== FUN_1404b0fb0 @ 0x1404b0fb0 [input] =====

undefined8 * FUN_1404b0fb0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140358fc0();
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  *param_1 = BucketItem::vftable;
  *(undefined4 *)(param_1 + 0x13) = param_3;
  return param_1;
}



// ===== FUN_1404b20f0 @ 0x1404b20f0 [input] =====

undefined8 * FUN_1404b20f0(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x4f);
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  *param_1 = MilkBucketItem::vftable;
  return param_1;
}



// ===== FUN_1404b2240 @ 0x1404b2240 [input] =====

undefined8 * FUN_1404b2240(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x59);
  param_1[0x13] = 0;
  *param_1 = CompassItem::vftable;
  return param_1;
}



// ===== FUN_1404b2360 @ 0x1404b2360 [input] =====

undefined8 * FUN_1404b2360(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x5b);
  param_1[0x13] = 0;
  *param_1 = ClockItem::vftable;
  return param_1;
}



// ===== FUN_1404b2450 @ 0x1404b2450 [input] =====

undefined8 * FUN_1404b2450(undefined8 *param_1)

{
  FUN_140358fc0(param_1,3);
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  *param_1 = FlintAndSteelItem::vftable;
  *(undefined4 *)(param_1 + 5) = 0x40;
  return param_1;
}



// ===== FUN_1404b2880 @ 0x1404b2880 [input] =====

undefined8 * FUN_1404b2880(undefined8 *param_1)

{
  FUN_140358fc0(param_1,7);
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  *param_1 = CoalItem::vftable;
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



// ===== FUN_1404b2a70 @ 0x1404b2a70 [input] =====

undefined8 * FUN_1404b2a70(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x1a);
  *(undefined4 *)(param_1 + 0x13) = 6;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *param_1 = BowlFoodItem::vftable;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3f19999a;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  return param_1;
}



// ===== FUN_1404b2c20 @ 0x1404b2c20 [input] =====

undefined8 * FUN_1404b2c20(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  FUN_140358fc0();
  *param_1 = TilePlanterItem::vftable;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_3 + 0x28);
  return param_1;
}



// ===== FUN_1404b3190 @ 0x1404b3190 [input] =====

undefined8 *
FUN_1404b3190(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_140358fc0();
  *(undefined4 *)(param_1 + 0x13) = param_3;
  *param_1 = SeedItem::vftable;
  *(undefined4 *)((longlong)param_1 + 0x9c) = param_4;
  return param_1;
}



// ===== FUN_1404b3450 @ 0x1404b3450 [input] =====

undefined8 * FUN_1404b3450(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140358fc0();
  *(undefined4 *)(param_1 + 0x13) = param_3;
  *param_1 = HangingEntityItem::vftable;
  return param_1;
}



// ===== FUN_1404b3c40 @ 0x1404b3c40 [input] =====

undefined8 *
FUN_1404b3c40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140394a30(param_1,0x42,4,param_4,0);
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  *param_1 = GoldenAppleItem::vftable;
  return param_1;
}



// ===== FUN_1404b41b0 @ 0x1404b41b0 [input] =====

undefined8 * FUN_1404b41b0(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x43);
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x10;
  *param_1 = SignItem::vftable;
  return param_1;
}



// ===== FUN_1404b4c30 @ 0x1404b4c30 [input] =====

undefined8 * FUN_1404b4c30(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *local_28;
  undefined8 *local_20;
  undefined1 local_18 [16];
  
  FUN_140358fc0();
  *param_1 = MinecartItem::vftable;
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x13) = param_3;
  local_20 = (undefined8 *)FUN_140558c80(0x10);
  *local_20 = 0;
  local_20[1] = 0;
  *local_20 = MinecartItem::MinecartDispenseBehavior::vftable;
  local_20[1] = DefaultDispenseItemBehavior::vftable;
  local_28 = param_1;
  FUN_140429c90(DefaultDispenseItemBehavior::vftable,local_18,&local_28);
  return param_1;
}



// ===== FUN_1404b4f80 @ 0x1404b4f80 [input] =====

undefined8 * FUN_1404b4f80(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x49);
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  *param_1 = SaddleItem::vftable;
  return param_1;
}



// ===== FUN_1404b53c0 @ 0x1404b53c0 [input] =====

undefined8 * FUN_1404b53c0(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x4b);
  *param_1 = RedStoneItem::vftable;
  return param_1;
}



// ===== FUN_1404b56b0 @ 0x1404b56b0 [input] =====

undefined8 * FUN_1404b56b0(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x4c);
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x10;
  *param_1 = SnowballItem::vftable;
  return param_1;
}



// ===== FUN_1404b59f0 @ 0x1404b59f0 [input] =====

undefined8 * FUN_1404b59f0(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x4d);
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  *param_1 = BoatItem::vftable;
  return param_1;
}



// ===== FUN_1404b6660 @ 0x1404b6660 [input] =====

undefined8 * FUN_1404b6660(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x54);
  *param_1 = BookItem::vftable;
  return param_1;
}



// ===== FUN_1404b6710 @ 0x1404b6710 [input] =====

undefined8 * FUN_1404b6710(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x58);
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x10;
  *param_1 = EggItem::vftable;
  return param_1;
}



// ===== FUN_1404b6ad0 @ 0x1404b6ad0 [input] =====

undefined8 * FUN_1404b6ad0(undefined8 *param_1)

{
  FUN_140358fc0(param_1,99);
  *param_1 = BedItem::vftable;
  return param_1;
}



// ===== FUN_1404b6f40 @ 0x1404b6f40 [input] =====

undefined8 * FUN_1404b6f40(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x67);
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  *param_1 = ShearsItem::vftable;
  *(undefined4 *)(param_1 + 5) = 0xee;
  return param_1;
}



// ===== FUN_1404b72f0 @ 0x1404b72f0 [input] =====

undefined8 * FUN_1404b72f0(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x70);
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x10;
  *param_1 = EnderpearlItem::vftable;
  return param_1;
}



// ===== FUN_1404b76d0 @ 0x1404b76d0 [input] =====

undefined8 * FUN_1404b76d0(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x76);
  *param_1 = BottleItem::vftable;
  return param_1;
}



// ===== FUN_1404b7de0 @ 0x1404b7de0 [input] =====

undefined8 * FUN_1404b7de0(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x7d);
  *param_1 = EnderEyeItem::vftable;
  return param_1;
}



// ===== FUN_1404b8e00 @ 0x1404b8e00 [input] =====

undefined8 * FUN_1404b8e00(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x7f);
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x10;
  *param_1 = SpawnEggItem::vftable;
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  param_1[0x13] = 0;
  return param_1;
}



// ===== FUN_1404ba8f0 @ 0x1404ba8f0 [input] =====

undefined8 * FUN_1404ba8f0(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x80);
  *param_1 = ExperienceItem::vftable;
  return param_1;
}



// ===== FUN_1404baca0 @ 0x1404baca0 [input] =====

undefined8 * FUN_1404baca0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  FUN_140358fc0();
  *param_1 = RecordingItem::vftable;
  FUN_140055000(param_1 + 0x13,param_3);
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  plVar1 = (longlong *)FUN_1404bb230();
  *(undefined8 **)(*plVar1 + 0x30) = param_1;
  return param_1;
}



// ===== FUN_1404bb810 @ 0x1404bb810 [input] =====

undefined8 * FUN_1404bb810(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x81);
  param_1[0x13] = 0;
  *param_1 = FireChargeItem::vftable;
  return param_1;
}



// ===== FUN_1404bbc40 @ 0x1404bbc40 [input] =====

undefined8 * FUN_1404bbc40(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x8d);
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = SkullItem::vftable;
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return param_1;
}



// ===== FUN_1404bc740 @ 0x1404bc740 [input] =====

undefined8 *
FUN_1404bc740(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  FUN_140358fc0();
  *(undefined4 *)((longlong)param_1 + 0x9c) = param_4;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *param_1 = SeedFoodItem::vftable;
  *(undefined4 *)(param_1 + 0x17) = param_5;
  *(undefined4 *)(param_1 + 0x13) = param_3;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3c;
  return param_1;
}



// ===== FUN_1404bca30 @ 0x1404bca30 [input] =====

undefined8 * FUN_1404bca30(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x8b);
  *param_1 = EmptyMapItem::vftable;
  return param_1;
}



// ===== FUN_1404bcd90 @ 0x1404bcd90 [input] =====

undefined8 * FUN_1404bcd90(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x8e);
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  *param_1 = CarrotOnAStickItem::vftable;
  *(undefined4 *)(param_1 + 5) = 0x19;
  return param_1;
}



// ===== FUN_1404bd1f0 @ 0x1404bd1f0 [input] =====

undefined8 * FUN_1404bd1f0(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x8f);
  *param_1 = SimpleFoiledItem::vftable;
  return param_1;
}



// ===== FUN_1404bd220 @ 0x1404bd220 [input] =====

undefined8 * FUN_1404bd220(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0x92);
  *param_1 = FireworksChargeItem::vftable;
  return param_1;
}



// ===== FUN_1404be140 @ 0x1404be140 [input] =====

undefined8 * FUN_1404be140(undefined8 *param_1)

{
  FUN_140358fc0(param_1,0xa5);
  *param_1 = NameTagItem::vftable;
  return param_1;
}



// ===== thunk_FUN_140556fb0 @ 0x140557570 [profile,storage,input,ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [16]
thunk_FUN_140556fb0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16]
                   ,longlong param_4)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined1 (*pauVar3) [16];
  int iVar4;
  ulonglong uVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 (*pauVar9) [16];
  longlong lVar10;
  undefined1 uVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [16];
  ulonglong uStack_48;
  
  uStack_48 = DAT_1407502c0 ^ (ulonglong)auStack_78;
  pauVar3 = param_1;
  if (param_4 != 0) {
    if (param_4 == 1) {
      pauVar3 = (undefined1 (*) [16])FUN_140556dc0(param_1,param_2,*(undefined2 *)*param_3);
    }
    else {
      uVar5 = (longlong)param_2 - (longlong)param_1;
      uVar2 = param_4 * 2;
      pauVar3 = param_2;
      if (uVar2 <= uVar5) {
        if ((((byte)DAT_140750274 & 4) == 0) || (uVar5 < 0x10)) {
          pauVar9 = (undefined1 (*) [16])((longlong)param_1 + uVar5 + param_4 * -2 + 2);
          if (param_1 != pauVar9) {
            lVar10 = (longlong)param_3 - (longlong)param_1;
            do {
              if (*(short *)*param_1 == *(short *)*param_3) {
                lVar7 = 1;
                pauVar6 = param_1;
                while (pauVar6 = (undefined1 (*) [16])(*pauVar6 + 2),
                      *(short *)*pauVar6 == *(short *)(*pauVar6 + lVar10)) {
                  lVar7 = lVar7 + 1;
                  if (lVar7 == param_4) {
                    return param_1;
                  }
                }
              }
              param_1 = (undefined1 (*) [16])(*param_1 + 2);
              lVar10 = lVar10 + -2;
            } while (param_1 != pauVar9);
          }
        }
        else if (uVar2 < 0x11) {
          uVar11 = 8 < (uint)param_4;
          FUN_140596110(auStack_58,param_3,uVar2);
          auVar1 = auStack_58;
          do {
            iVar4 = pcmpestri(auStack_58,*param_1,0xd);
            if ((bool)uVar11) {
              param_1 = (undefined1 (*) [16])(*param_1 + (longlong)iVar4 * 2);
              if (iVar4 <= (int)(8 - (uint)param_4)) {
                return param_1;
              }
            }
            else {
              param_1 = param_1 + 1;
            }
            uVar11 = param_1 < param_2 + -1;
          } while (param_1 <= param_2 + -1);
          if ((longlong)param_2 - (longlong)param_1 != 0) {
            bVar12 = ((longlong)param_2 - (longlong)param_1 & 1U) != 0;
            FUN_140596110(auStack_58,param_1);
            iVar4 = pcmpestri(auVar1,auStack_58,0xd);
            if (bVar12) {
              pauVar3 = (undefined1 (*) [16])(*param_1 + (longlong)iVar4 * 2);
            }
          }
        }
        else {
          auVar1 = *param_3;
          puVar8 = (undefined1 *)((longlong)param_1 + param_4 * -2);
          bVar12 = CARRY8((ulonglong)puVar8,uVar5);
          pauVar9 = (undefined1 (*) [16])(puVar8 + uVar5);
          do {
            iVar4 = pcmpestri(auVar1,*param_1,0xd);
            if (bVar12) {
              if (iVar4 == 0) {
LAB_14055711b:
                iVar4 = memcmp(param_1 + 1,param_3 + 1,uVar2 - 0x10);
                if (iVar4 == 0) {
                  return param_1;
                }
              }
              else {
                param_1 = (undefined1 (*) [16])(*param_1 + (longlong)iVar4 * 2);
                if (pauVar9 < param_1) {
                  return param_2;
                }
                auVar13._0_4_ = auVar1._0_4_ ^ *(uint *)*param_1;
                auVar13._4_4_ = auVar1._4_4_ ^ *(uint *)(*param_1 + 4);
                auVar13._8_4_ = auVar1._8_4_ ^ *(uint *)(*param_1 + 8);
                auVar13._12_4_ = auVar1._12_4_ ^ *(uint *)(*param_1 + 0xc);
                if (auVar13 == (undefined1  [16])0x0) goto LAB_14055711b;
              }
              param_1 = (undefined1 (*) [16])(*param_1 + 2);
            }
            else {
              param_1 = param_1 + 1;
            }
            bVar12 = param_1 < pauVar9;
          } while (param_1 <= pauVar9);
        }
      }
    }
  }
  return pauVar3;
}



// ===== __security_check_cookie @ 0x140558c60 [profile,storage,input,ui,render] =====

/* WARNING: This is an inlined function */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_1407502c0) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
  FUN_1405590ac(_StackCookie);
  return;
}



// ===== FUN_140558c80 @ 0x140558c80 [profile,storage,input,ui,render] =====

void FUN_140558c80(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  do {
    lVar1 = _malloc_base(param_1);
    if (lVar1 != 0) {
      return;
    }
    iVar2 = FUN_14057a380(param_1);
  } while (iVar2 != 0);
  if (param_1 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_140054fe0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_140555c44();
}



// ===== thunk_FUN_1401fe000 @ 0x140558cbc [profile,storage,input,ui,render] =====

void thunk_FUN_1401fe000(LPVOID param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar2 = HeapFree(DAT_140790308,0,param_1), BVar2 == 0)) {
    DVar3 = GetLastError();
    uVar4 = FUN_14056c07c(DVar3);
    puVar1 = (undefined4 *)FUN_14056c1bc();
    *puVar1 = uVar4;
  }
  return;
}



// ===== thunk_FUN_140558c80 @ 0x140558cf0 [profile,storage,input,ui,render] =====

void thunk_FUN_140558c80(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  do {
    lVar1 = _malloc_base(param_1);
    if (lVar1 != 0) {
      return;
    }
    iVar2 = FUN_14057a380(param_1);
  } while (iVar2 != 0);
  if (param_1 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_140054fe0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_140555c44();
}



// ===== atexit @ 0x140558f20 [storage,input,ui,render] =====

/* Library Function - Single Match
    atexit
   
   Library: Visual Studio 2019 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



// ===== __chkstk @ 0x140559a50 [input,ui] =====

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __chkstk(void)

{
  undefined1 *in_RAX;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}



// ===== FUN_14055b4d8 @ 0x14055b4d8 [storage,input,render] =====

longlong FUN_14055b4d8(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                      int param_5)

{
  uint uVar1;
  int *PcValue;
  PVOID pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  PVOID local_res8;
  undefined1 local_48 [32];
  
  lVar4 = 0;
  if (param_1 == (longlong *)0x0) {
    lVar5 = 0;
  }
  else {
    PcValue = *(int **)(*param_1 + -8);
    lVar5 = (longlong)param_1 +
            (-(ulonglong)(uint)PcValue[1] -
            (longlong)
            (int)(-(uint)(PcValue[2] != 0) &
                 *(uint *)((longlong)param_1 - (ulonglong)(uint)PcValue[2])));
    if (*PcValue == 0) {
      pvVar2 = RtlPcToFileHeader(PcValue,&local_res8);
      local_res8 = pvVar2;
    }
    else {
      pvVar2 = (PVOID)((longlong)PcValue - (longlong)PcValue[5]);
    }
    uVar1 = *(uint *)((longlong)PcValue[4] + 4 + (longlong)pvVar2);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_14055b108(PcValue,param_3,param_4,pvVar2);
    }
    else if ((uVar1 & 2) == 0) {
      lVar3 = FUN_14055af98();
    }
    else {
      lVar3 = FUN_14055b23c(lVar5,PcValue,param_3,(longlong)param_1 + (-lVar5 - (longlong)param_2),
                            param_4,pvVar2);
    }
    if (lVar3 == 0) {
      if (param_5 != 0) {
        FUN_14055b4a0(local_48,"Bad dynamic_cast!");
                    /* WARNING: Subroutine does not return */
        FUN_14055b910(local_48,&DAT_14074e208);
      }
      lVar5 = 0;
    }
    else {
      if (-1 < *(int *)(lVar3 + 0xc)) {
        lVar4 = (longlong)
                *(int *)(*(longlong *)(*(int *)(lVar3 + 0xc) + lVar5) +
                        (longlong)*(int *)(lVar3 + 0x10)) + (longlong)*(int *)(lVar3 + 0xc);
      }
      lVar5 = *(int *)(lVar3 + 8) + lVar4 + lVar5;
    }
  }
  return lVar5;
}



// ===== _invoke_watson @ 0x14055f704 [profile,storage,input,ui,render] =====

/* Library Function - Single Match
    _invoke_watson
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *pcVar1;
  BOOL BVar2;
  HANDLE hProcess;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x14055f732;
  FUN_14055f418(2,0xc0000417);
  *(undefined8 *)(puVar3 + -8) = 0x14055f738;
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x00014055f744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000417);
  return;
}



// ===== FUN_140578820 @ 0x140578820 [input] =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_140578820(double param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  double dVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  if (((byte)DAT_14079028c & 3) != 3) {
    dVar13 = (double)FUN_140578840();
    return dVar13;
  }
  lVar10 = 0;
  lVar9 = 0;
  dVar13 = in_ZMM1._0_8_;
  uVar11 = (uint)((ulonglong)param_1 >> 0x20);
  uVar7 = uVar11 >> 0x14;
  uVar3 = in_ZMM1._4_4_;
  uVar12 = uVar3 >> 0x14;
  dVar21 = param_1;
  if ((0x7fd < uVar7 - 1) || (0x7f < (uVar12 & 0x7ff) - 0x3be)) {
    uVar6 = (longlong)dVar13 * 2;
    if (0xffdffffffffffffe < uVar6 - 1) {
      if ((uVar6 == 0) || (dVar21 = dVar13, param_1 == 1.0)) {
        if (0xfff0000000000000 < ((ulonglong)dVar21 ^ 0x8000000000000) * 2) goto LAB_140586174;
      }
      else {
        uVar8 = (longlong)param_1 * 2;
        if ((0xffe0000000000000 < uVar8) || (0xffe0000000000000 < uVar6)) {
LAB_140586174:
          return param_1 + dVar13;
        }
        if (uVar8 != 0x7fe0000000000000) {
          if ((uint)(uVar8 < 0x7fe0000000000000) != (uVar3 >> 0x1f ^ 1)) {
            return dVar13 * dVar13;
          }
          return 0.0;
        }
      }
      return 1.0;
    }
    if (0xffdffffffffffffe < (longlong)param_1 * 2 - 1U) {
      dVar21 = param_1 * param_1;
      if ((((((ulonglong)param_1 & 0x8000000000000000) != 0) &&
           (uVar7 = uVar3 >> 0x14 & 0x7ff, lVar10 = lVar9, uVar7 - 0x3ff < 0x35)) &&
          (uVar6 = 1L << ((ulonglong)(0x433 - uVar7) & 0x3f), ((ulonglong)dVar13 & uVar6 - 1) == 0))
         && (((ulonglong)dVar13 & uVar6) != 0)) {
        dVar21 = -dVar21;
        lVar10 = 1;
      }
      if ((longlong)param_1 * 2 != 0) {
        if (((ulonglong)dVar13 & 0x8000000000000000) != 0) {
          return 1.0 / dVar21;
        }
        return dVar21;
      }
      if (((ulonglong)dVar13 & 0x8000000000000000) != 0) {
        dVar13 = (double)FUN_140586820(lVar10);
        return dVar13;
      }
      return dVar21;
    }
    if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
      uVar7 = uVar3 >> 0x14 & 0x7ff;
      if (uVar7 < 0x3ff) {
LAB_140586330:
        dVar13 = (double)FUN_140586880();
        return dVar13;
      }
      if (uVar7 < 0x434) {
        uVar6 = 1L << ((ulonglong)(0x433 - uVar7) & 0x3f);
        if (((ulonglong)dVar13 & uVar6 - 1) != 0) goto LAB_140586330;
        iVar4 = 2 - (uint)((uVar6 & (ulonglong)dVar13) != 0);
      }
      else {
        iVar4 = 2;
      }
      dVar21 = ABS(param_1);
      uVar7 = uVar11 >> 0x14 & 0x7ff;
      lVar10 = 0x80000;
      if (iVar4 != 1) {
        lVar10 = 0;
      }
    }
    if (0x7f < (uVar12 & 0x7ff) - 0x3be) {
      if (dVar21 == 1.0) {
        return 1.0;
      }
      if ((uVar12 & 0x7ff) < 0x3be) {
        if ((ulonglong)dVar21 < 0x3ff0000000000001) {
          return 1.0 - dVar13;
        }
        return dVar13 + 1.0;
      }
      if (0x3ff0000000000000 < (ulonglong)dVar21 != uVar12 < 0x800) {
        dVar13 = (double)FUN_140586910(0);
        return dVar13;
      }
      dVar13 = (double)FUN_1405868c0();
      return dVar13;
    }
    if (uVar7 == 0) {
      dVar21 = (double)((longlong)ABS(param_1 * 4503599627370496.0) + 0xfcc0000000000000);
    }
  }
  uVar7 = (uint)((longlong)dVar21 + 0xc0196aab00000000U >> 0x20);
  lVar9 = (ulonglong)(uVar7 >> 0xd & 0x7f) * 0x20;
  auVar36._0_8_ = (double)((int)uVar7 >> 0x14);
  auVar36._8_8_ = 0;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = *(ulonglong *)(&DAT_1406004f8 + lVar9);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(ulonglong *)(&DAT_140600508 + lVar9);
  auVar1 = vfmadd213sd_fma(ZEXT816(0x3fe62e42fefa3800),auVar36,auVar1);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = (longlong)dVar21 - ((longlong)dVar21 + 0xc0196aab00000000U & 0xfff0000000000000);
  auVar2 = vfmadd213sd_fma(auVar35,auVar14,ZEXT816(0xbff0000000000000));
  dVar34 = auVar2._0_8_;
  dVar31 = dVar34 * -0.5 * dVar34;
  dVar21 = auVar1._0_8_ + dVar34;
  dVar5 = dVar31 + dVar21;
  auVar14 = vfmadd213sd_fma(auVar2,ZEXT816(0x3fe0000000000006),ZEXT816(0xbfe5555555555560));
  auVar16 = vfmadd213sd_fma(auVar2,ZEXT816(0xbfe555555529a47a),ZEXT816(0x3fe999999959554e));
  auVar22 = vfmadd213sd_fma(auVar2,ZEXT816(0x3ff0002b8b263fc3),ZEXT816(0xbff2495b9b4845e9));
  auVar15._0_8_ = -dVar31;
  auVar15._8_8_ = 0x8000000000000000;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = dVar31;
  auVar22 = vfmadd231sd_fma(auVar16,auVar28,auVar22);
  auVar25._8_8_ = 0;
  auVar25._0_8_ = dVar34 * -0.5;
  auVar16 = vfmadd213sd_fma(auVar25,auVar2,auVar15);
  auVar14 = vfmadd231sd_fma(auVar14,auVar28,auVar22);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulonglong *)(&DAT_140600510 + lVar9);
  auVar2 = vfmadd213sd_fma(ZEXT816(0x3d2ef35793c76730),auVar36,auVar2);
  auVar29._8_8_ = 0;
  auVar29._0_8_ =
       auVar16._0_8_ + auVar2._0_8_ + (auVar1._0_8_ - dVar21) + dVar34 + (dVar21 - dVar5) + dVar31;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = dVar31 * dVar34;
  auVar2 = vfmadd231sd_fma(auVar29,auVar32,auVar14);
  dVar21 = auVar2._0_8_ + dVar5;
  dVar13 = dVar21 * dVar13;
  auVar16._0_8_ = -dVar13;
  auVar16._8_8_ = 0x8000000000000000;
  uVar11 = (uint)((ulonglong)dVar13 >> 0x34) & 0x7ff;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = dVar21;
  auVar1 = vfmadd213sd_fma(in_ZMM1._0_16_,auVar22,auVar16);
  auVar23._8_8_ = 0;
  auVar23._0_8_ = (dVar5 - dVar21) + auVar2._0_8_;
  auVar1 = vfmadd231sd_fma(auVar1,in_ZMM1._0_16_,auVar23);
  uVar7 = uVar11;
  if (0x3e < uVar11 - 0x3c9) {
    if (0x7fffffff < uVar11 - 0x3c9) {
      if ((int)lVar10 != 0) {
        return -(dVar13 + 1.0);
      }
      return dVar13 + 1.0;
    }
    uVar7 = 0;
    if (0x408 < uVar11) {
      if (((ulonglong)dVar13 & 0x8000000000000000) == 0) {
        dVar13 = (double)FUN_1405868c0(lVar10);
        return dVar13;
      }
      dVar13 = (double)FUN_140586910();
      return dVar13;
    }
  }
  auVar26._8_8_ = 0;
  auVar26._0_8_ = dVar13;
  auVar2 = vfmadd213sd_fma(auVar26,ZEXT816(0x40771547652b82fe),ZEXT816(0x4238000000008000));
  uVar8 = auVar2._0_8_ >> 0x10;
  auVar17._0_8_ = (double)auVar2._2_4_;
  auVar17._8_8_ = 0;
  auVar2 = vfmadd231sd_fma(auVar26,auVar17,ZEXT816(0xbf662e42fefc0000));
  auVar2 = vfmadd231sd_fma(auVar2,auVar17,ZEXT816(0x3d2c610ca86c3899));
  dVar13 = auVar2._0_8_ + auVar1._0_8_;
  dVar21 = dVar13 * dVar13;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = dVar13;
  auVar1 = vfmadd213sd_fma(auVar30,ZEXT816(0x3fc555555555543c),ZEXT816(0x3fdffffffffffdbd));
  uVar6 = (lVar10 + uVar8 << 0x2c) + *(longlong *)(&DAT_1405ff4b8 + (uVar8 & 0xff) * 0x10);
  auVar2 = vfmadd213sd_fma(auVar30,ZEXT816(0x3f81111167a4b553),ZEXT816(0x3fa55555cf16e1ed));
  auVar27._8_8_ = 0;
  auVar27._0_8_ = dVar21;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = dVar13 + *(double *)(&DAT_1405ff4b0 + (uVar8 & 0xff) * 0x10);
  auVar1 = vfmadd231sd_fma(auVar33,auVar27,auVar1);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = dVar21 * dVar21;
  auVar1 = vfmadd231sd_fma(auVar1,auVar18,auVar2);
  if (uVar7 == 0) {
    if ((uVar8 & 0x80000000) == 0) {
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar6 + 0xc0f0000000000000;
      auVar1 = vfmadd231sd_fma(auVar19,auVar1,auVar19);
      dVar13 = (double)FUN_1405867b0(auVar1._0_8_ * 5.486124068793689e+303);
    }
    else {
      dVar5 = (double)(uVar6 + 0x3fe0000000000000);
      dVar21 = dVar5 * auVar1._0_8_;
      dVar13 = dVar5 + dVar21;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = dVar13;
      auVar1 = vandpd_avx(auVar24,_DAT_1406a0d30);
      if (auVar1._0_8_ < 1.0) {
        auVar1 = vcmpsd_avx(auVar24,ZEXT816(0) << 0x40,1);
        auVar1 = vblendvpd_avx(ZEXT816(0x3ff0000000000000),ZEXT816(0xbff0000000000000),auVar1);
        dVar31 = auVar1._0_8_;
        dVar13 = ((dVar5 - dVar13) + dVar21 + (dVar31 - (dVar31 + dVar13)) + dVar13 +
                 dVar31 + dVar13) - dVar31;
        if (dVar13 == 0.0) {
          dVar13 = (double)((ulonglong)dVar5 & 0x8000000000000000);
        }
      }
      dVar13 = (double)FUN_1405867f0(dVar13 * 2.2250738585072014e-308);
    }
  }
  else {
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar6;
    auVar1 = vfmadd231sd_fma(auVar20,auVar20,auVar1);
    dVar13 = auVar1._0_8_;
  }
                    /* WARNING: Read-only address (ram,0x0001406a0d30) is written */
  return dVar13;
}



// ===== FUN_140595d50 @ 0x140595d50 [storage,input,render] =====

undefined1 (*) [32] FUN_140595d50(undefined1 (*param_1) [32],byte param_2,ulonglong param_3)

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined2 uVar9;
  undefined4 uVar10;
  
  uVar5 = (ulonglong)param_2;
  lVar11 = uVar5 * 0x101010101010101;
  uVar8 = (undefined1)lVar11;
  uVar9 = (undefined2)lVar11;
  uVar10 = (undefined4)lVar11;
  switch(param_3) {
  case 0:
    return param_1;
  case 8:
    *(longlong *)(param_1[-1] + param_3 + 0x18) = lVar11;
    return param_1;
  case 9:
    *(longlong *)(param_1[-1] + param_3 + 0x17) = lVar11;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 10:
    *(longlong *)(param_1[-1] + param_3 + 0x16) = lVar11;
    *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar9;
    return param_1;
  case 0xb:
    *(longlong *)(param_1[-1] + param_3 + 0x15) = lVar11;
    *(undefined2 *)(param_1[-1] + param_3 + 0x1d) = uVar9;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 0xc:
    *(longlong *)(param_1[-1] + param_3 + 0x14) = lVar11;
  case 4:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1c) = uVar10;
    return param_1;
  case 0xd:
    *(longlong *)(param_1[-1] + param_3 + 0x13) = lVar11;
  case 5:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1b) = uVar10;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 0xe:
    *(longlong *)(param_1[-1] + param_3 + 0x12) = lVar11;
  case 6:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1a) = uVar10;
  case 2:
    *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar9;
    return param_1;
  case 0xf:
    *(longlong *)(param_1[-1] + param_3 + 0x11) = lVar11;
  case 7:
    *(undefined4 *)(param_1[-1] + param_3 + 0x19) = uVar10;
  case 3:
    *(undefined2 *)(param_1[-1] + param_3 + 0x1d) = uVar9;
  case 1:
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  }
  auVar12._8_8_ = lVar11;
  auVar12._0_8_ = lVar11;
  if (param_3 < 0x21) {
    *(undefined1 (*) [16])*param_1 = auVar12;
    *(undefined1 (*) [16])(param_1[-1] + param_3 + 0x10) = auVar12;
    return param_1;
  }
  pauVar2 = param_1;
  if (DAT_140750270 < 3) {
    if ((param_3 <= DAT_140750278) || (((byte)DAT_14078f744 & 2) == 0)) {
      lVar11 = ((ulonglong)param_1 & 0xf) - 0x10;
      pauVar4 = (undefined1 (*) [16])((longlong)param_1 - lVar11);
      param_3 = param_3 + lVar11;
      if (0x80 < param_3) {
        do {
          *pauVar4 = auVar12;
          pauVar4[1] = auVar12;
          pauVar4[2] = auVar12;
          pauVar4[3] = auVar12;
          pauVar4[4] = auVar12;
          pauVar4[5] = auVar12;
          pauVar4[6] = auVar12;
          pauVar4[7] = auVar12;
          pauVar4 = pauVar4 + 8;
          param_3 = param_3 - 0x80;
        } while (0x7f < param_3);
      }
                    /* WARNING: Could not recover jumptable at 0x000140596098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pauVar2 = (undefined1 (*) [32])
                (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                          *(uint *)(&DAT_1406a74a8 + (param_3 + 0xf >> 4) * 4)))
                          (pauVar4,uVar5 - lVar11);
      return pauVar2;
    }
  }
  else if (((param_3 <= DAT_140750278) || (DAT_140750280 < param_3)) ||
          (((byte)DAT_14078f744 & 2) == 0)) {
    auVar13._16_16_ = auVar12;
    auVar13._0_16_ = auVar12;
    lVar6 = ((ulonglong)param_1 & 0x1f) - 0x20;
    pauVar2 = (undefined1 (*) [32])((longlong)param_1 - lVar6);
    param_3 = param_3 + lVar6;
    if (0x100 < param_3) {
      if (DAT_140750280 < param_3) {
        do {
          uVar5 = param_3;
          pauVar3 = pauVar2;
          auVar1 = vmovntdq_avx(auVar13);
          *pauVar3 = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[1] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[2] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[3] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[4] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[5] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[6] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[7] = auVar1;
          pauVar2 = pauVar3 + 8;
          param_3 = uVar5 - 0x100;
        } while (0xff < uVar5 - 0x100);
        uVar7 = uVar5 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar5) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(*pauVar3 + uVar7) = auVar1;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[1] + uVar7) = auVar1;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[2] + uVar7) = auVar1;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[3] + uVar7) = auVar1;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[4] + uVar7) = auVar1;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[5] + uVar7) = auVar1;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[6] + uVar7) = auVar1;
        default:
          *(undefined1 (*) [32])(pauVar3[-1] + uVar5) = auVar13;
        case 0x100:
          *param_1 = auVar13;
          return param_1;
        }
      }
      do {
        *pauVar2 = auVar13;
        pauVar2[1] = auVar13;
        pauVar2[2] = auVar13;
        pauVar2[3] = auVar13;
        pauVar2[4] = auVar13;
        pauVar2[5] = auVar13;
        pauVar2[6] = auVar13;
        pauVar2[7] = auVar13;
        pauVar2 = pauVar2 + 8;
        param_3 = param_3 - 0x100;
      } while (0xff < param_3);
    }
                    /* WARNING: Could not recover jumptable at 0x000140595ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar2 = (undefined1 (*) [32])
              (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                        *(uint *)(&DAT_1406a7460 + (param_3 + 0x1f >> 5) * 4)))
                        (lVar11,uVar5 - lVar6);
    return pauVar2;
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    (*pauVar2)[0] = param_2;
    pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1);
  }
  return param_1;
}



