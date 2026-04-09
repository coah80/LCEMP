// Category: profile - 89 functions
// Decompiled from Minecraft.Client.exe

// ===== FUN_14001164c @ 0x14001164c [profile] =====

void FUN_14001164c(longlong param_1,undefined4 *param_2)

{
  ushort uVar1;
  
  if (((param_1 != 0) && (param_2 != (undefined4 *)0x0)) &&
     ((*(uint *)(param_1 + 0x164) & 0x400) == 0)) {
    FUN_140021e58();
    if (((*(uint *)(param_1 + 0x164) & 0x1000) != 0) && (*(int *)(param_1 + 0x438) != 0)) {
      FUN_140019e38(param_1,"MNG features are not allowed in a PNG datastream");
      *(undefined4 *)(param_1 + 0x438) = 0;
    }
    FUN_14001ff58(param_1,*param_2,param_2[1],*(undefined1 *)(param_2 + 9),
                  *(undefined1 *)((longlong)param_2 + 0x25),
                  *(undefined1 *)((longlong)param_2 + 0x26),
                  *(undefined1 *)((longlong)param_2 + 0x27),*(undefined1 *)(param_2 + 10));
    if ((((*(ushort *)((longlong)param_2 + 0x7e) & 0x8000) == 0) &&
        ((*(byte *)((longlong)param_2 + 0x7e) & 8) != 0)) && ((*(byte *)(param_2 + 2) & 1) != 0)) {
      FUN_1400213fc(param_1,param_2[0xd]);
    }
    uVar1 = *(ushort *)((longlong)param_2 + 0x7e) & 0x8000;
    if ((uVar1 == 0) && ((param_2[2] & 0x1000) != 0)) {
      if ((param_2[2] & 0x800) != 0) {
        FUN_140019700(param_1,"profile matches sRGB but writing iCCP instead");
      }
      FUN_1400214d4(param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x22));
    }
    else if ((uVar1 == 0) && ((param_2[2] & 0x800) != 0)) {
      FUN_140021e10(param_1,*(undefined2 *)(param_2 + 0x1f));
    }
    if ((*(byte *)(param_2 + 2) & 2) != 0) {
      FUN_140021b20(param_1,param_2 + 0x2c,*(undefined1 *)((longlong)param_2 + 0x25));
    }
    if ((((*(ushort *)((longlong)param_2 + 0x7e) & 0x8000) == 0) &&
        ((*(byte *)((longlong)param_2 + 0x7e) & 0x10) != 0)) && ((*(byte *)(param_2 + 2) & 4) != 0))
    {
      FUN_140020400(param_1,param_2 + 0xe);
    }
    FUN_140011a54(param_1,param_2,1);
    *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x400;
  }
  return;
}



// ===== FUN_140011a54 @ 0x140011a54 [profile] =====

void FUN_140011a54(longlong param_1,longlong param_2,byte param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((*(int *)(param_2 + 0x128) != 0) &&
     (uVar2 = *(ulonglong *)(param_2 + 0x120),
     uVar2 < (longlong)*(int *)(param_2 + 0x128) * 0x20 + uVar2)) {
    plVar4 = (longlong *)(uVar2 + 0x10);
    do {
      if ((*(byte *)(plVar4 + 1) & param_3) != 0) {
        iVar3 = FUN_140013bfc(param_1,plVar4 + -2);
        if ((iVar3 != 1) &&
           ((((*(byte *)((longlong)plVar4 + -0xd) & 0x20) != 0 || (iVar3 == 3)) ||
            ((iVar3 == 0 && (*(int *)(param_1 + 0x420) == 3)))))) {
          if (*plVar4 == 0) {
            FUN_140019e38(param_1,"Writing zero-length unknown chunk");
          }
          FUN_14002049c(param_1,plVar4 + -2,plVar4[-1],*plVar4);
        }
      }
      plVar1 = plVar4 + 2;
      plVar4 = plVar4 + 4;
    } while (plVar1 < (longlong *)
                      ((longlong)*(int *)(param_2 + 0x128) * 0x20 + *(longlong *)(param_2 + 0x120)))
    ;
  }
  return;
}



// ===== FUN_140011b30 @ 0x140011b30 [profile] =====

undefined8 FUN_140011b30(longlong param_1)

{
  if (((0x3a < param_1 - 0x20U) || ((0x7fffffe03ff0001U >> (param_1 - 0x20U & 0x3f) & 1) == 0)) &&
     (0x19 < param_1 - 0x61U)) {
    return 0;
  }
  return 1;
}



// ===== FUN_140012cec @ 0x140012cec [profile,render] =====

undefined8 FUN_140012cec(undefined8 param_1,undefined4 *param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  uVar1 = *(ushort *)((longlong)param_2 + 0x4a);
  if ((uVar1 & 0x8000) == 0) {
    if (param_3 < 4) {
      if (((uVar1 & 4) == 0) || (*(ushort *)(param_2 + 0x12) == param_3)) {
        if ((uVar1 & 0x20) == 0) {
          if (((uVar1 & 2) != 0) &&
             (iVar2 = FUN_14001299c(&DAT_1405f4360,param_2 + 1,100), iVar2 == 0)) {
            FUN_1400197cc(param_1,"cHRM chunk does not match sRGB",2);
          }
          FUN_140012898(param_1,param_2,0xb18f,2);
          *(short *)(param_2 + 0x12) = (short)param_3;
          param_2[1] = 64000;
          *param_2 = 0xb18f;
          param_2[2] = 33000;
          param_2[3] = 30000;
          param_2[4] = 60000;
          param_2[5] = 15000;
          param_2[6] = 6000;
          param_2[7] = 0x7a26;
          param_2[8] = 0x8084;
          param_2[9] = 0xa117;
          param_2[10] = 0x5310;
          param_2[0xb] = 0x78d;
          param_2[0xc] = 0x8bae;
          param_2[0xd] = 0x1175d;
          param_2[0xe] = 0x2e8f;
          param_2[0xf] = 0x4680;
          param_2[0x10] = 0x1c33;
          param_2[0x11] = 0x1734d;
          *(ushort *)((longlong)param_2 + 0x4a) = *(ushort *)((longlong)param_2 + 0x4a) | 0xe7;
          return 1;
        }
        FUN_140019720(param_1,"duplicate sRGB information ignored");
        goto LAB_140012d12;
      }
      pcVar3 = "inconsistent rendering intents";
    }
    else {
      pcVar3 = "invalid sRGB rendering intent";
    }
    uVar4 = FUN_14001409c(param_1,param_2,&DAT_1405f4f60,param_3,pcVar3);
  }
  else {
LAB_140012d12:
    uVar4 = 0;
  }
  return uVar4;
}



// ===== FUN_140012fd0 @ 0x140012fd0 [profile] =====

void FUN_140012fd0(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0x4f8);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_1 + 0x4fc);
    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x500);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x504);
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0x508);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x50c);
    *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x510);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x514);
    *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_1 + 0x518);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 0x51c);
    *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_1 + 0x520);
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x524);
    *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 0x528);
    *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x52c);
    *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_1 + 0x530);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0x534);
    *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_1 + 0x538);
    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_1 + 0x53c);
    *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(param_1 + 0x540);
    FUN_140013094();
  }
  return;
}



// ===== FUN_1400130e8 @ 0x1400130e8 [profile] =====

int FUN_1400130e8(undefined8 param_1,byte *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  uint uVar9;
  
  iVar6 = 0;
  iVar2 = 0;
  uVar5 = 0;
  uVar9 = 0x10000;
  piVar7 = &DAT_1405f4bd0;
  do {
    if (((((((uint)param_2[0x54] * 0x100 + (uint)param_2[0x55]) * 0x100 + (uint)param_2[0x56]) *
           0x100 + (uint)param_2[0x57] == piVar7[-1]) &&
         ((((uint)param_2[0x58] * 0x100 + (uint)param_2[0x59]) * 0x100 + (uint)param_2[0x5a]) *
          0x100 + (uint)param_2[0x5b] == *piVar7)) &&
        ((((uint)param_2[0x5c] * 0x100 + (uint)param_2[0x5d]) * 0x100 + (uint)param_2[0x5e]) * 0x100
         + (uint)param_2[0x5f] == piVar7[1])) &&
       ((((uint)param_2[0x60] * 0x100 + (uint)param_2[0x61]) * 0x100 + (uint)param_2[0x62]) * 0x100
        + (uint)param_2[99] == piVar7[2])) {
      if (iVar6 == 0) {
        iVar6 = (((uint)*param_2 * 0x100 + (uint)param_2[1]) * 0x100 + (uint)param_2[2]) * 0x100 +
                (uint)param_2[3];
        uVar9 = (((uint)param_2[0x40] * 0x100 + (uint)param_2[0x41]) * 0x100 + (uint)param_2[0x42])
                * 0x100 + (uint)param_2[0x43];
      }
      if ((iVar6 == piVar7[-2]) && (uVar9 == *(ushort *)((longlong)piVar7 + 0xe))) {
        if (param_3 == 0) {
          uVar1 = FUN_1402f4250(0,0,0);
          param_3 = FUN_1402f4250(uVar1);
        }
        if (param_3 == piVar7[-4]) {
          if (iVar2 == 0) {
            uVar1 = FUN_1402f4920(0,0,0);
            iVar2 = FUN_1402f4920(uVar1);
          }
          if (iVar2 == piVar7[-3]) {
            lVar4 = (ulonglong)uVar5 * 0x20;
            if ((&DAT_1405f4bdd)[lVar4] == '\0') {
              if ((&DAT_1405f4bdc)[lVar4] != '\0') goto LAB_1400132e3;
              uVar8 = 0;
              pcVar3 = "out-of-date sRGB profile with no signature";
            }
            else {
              uVar8 = 2;
              pcVar3 = "known incorrect sRGB profile";
            }
            FUN_1400197cc(param_1,pcVar3,uVar8);
LAB_1400132e3:
            return (byte)(&DAT_1405f4bdd)[lVar4] + 1;
          }
        }
      }
      if ((char)piVar7[3] != '\0') {
        FUN_140019720(param_1);
      }
    }
    uVar5 = uVar5 + 1;
    piVar7 = piVar7 + 8;
    if (6 < uVar5) {
      return 0;
    }
  } while( true );
}



// ===== FUN_1400136d8 @ 0x1400136d8 [profile] =====

void FUN_1400136d8(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  
  if ((param_1 != 0) && (iVar2 = 0, param_2 != 0)) {
    if (((*(uint *)(param_2 + 0x11c) & param_3) >> 0xe & 1) != 0) {
      if (param_4 == -1) {
        if (0 < *(int *)(param_2 + 0x94)) {
          do {
            FUN_1400136d8(param_1,param_2,0x4000,iVar2);
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(param_2 + 0x94));
        }
        FUN_140019460(param_1,*(undefined8 *)(param_2 + 0xa0));
        *(undefined8 *)(param_2 + 0xa0) = 0;
        *(undefined4 *)(param_2 + 0x94) = 0;
      }
      else if ((*(longlong *)(param_2 + 0xa0) != 0) &&
              (*(longlong *)((longlong)param_4 * 0x38 + 8 + *(longlong *)(param_2 + 0xa0)) != 0)) {
        FUN_140019460();
        *(undefined8 *)((longlong)param_4 * 0x38 + 8 + *(longlong *)(param_2 + 0xa0)) = 0;
      }
    }
    uVar4 = 0;
    if (((*(uint *)(param_2 + 0x11c) & param_3) >> 0xd & 1) != 0) {
      FUN_140019460(param_1,*(undefined8 *)(param_2 + 0xb8));
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffef;
      *(undefined8 *)(param_2 + 0xb8) = 0;
    }
    if (((*(uint *)(param_2 + 0x11c) & param_3) >> 8 & 1) != 0) {
      FUN_140019460(param_1,*(undefined8 *)(param_2 + 0x140));
      FUN_140019460(param_1,*(undefined8 *)(param_2 + 0x148));
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffbfff;
      *(undefined8 *)(param_2 + 0x140) = 0;
      *(undefined8 *)(param_2 + 0x148) = 0;
    }
    if ((char)((byte)*(undefined4 *)(param_2 + 0x11c) & (byte)param_3) < '\0') {
      FUN_140019460(param_1,*(undefined8 *)(param_2 + 0xf8));
      FUN_140019460(param_1,*(undefined8 *)(param_2 + 0x108));
      lVar1 = *(longlong *)(param_2 + 0x110);
      *(undefined8 *)(param_2 + 0xf8) = 0;
      *(undefined8 *)(param_2 + 0x108) = 0;
      if (lVar1 != 0) {
        if (*(char *)(param_2 + 0x119) != '\0') {
          do {
            FUN_140019460(param_1,*(undefined8 *)(lVar1 + uVar4 * 8));
            lVar1 = *(longlong *)(param_2 + 0x110);
            *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
            uVar5 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar5;
          } while (uVar5 < *(byte *)(param_2 + 0x119));
        }
        FUN_140019460(param_1,*(undefined8 *)(param_2 + 0x110));
        *(undefined8 *)(param_2 + 0x110) = 0;
      }
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffbff;
    }
    iVar2 = 0;
    if ((*(uint *)(param_2 + 0x11c) & param_3 & 0x10) != 0) {
      FUN_140019460(param_1,*(undefined8 *)(param_2 + 0x80));
      FUN_140019460(param_1,*(undefined8 *)(param_2 + 0x88));
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffefff;
      *(undefined8 *)(param_2 + 0x80) = 0;
      *(undefined8 *)(param_2 + 0x88) = 0;
    }
    if ((*(uint *)(param_2 + 0x11c) & param_3 & 0x20) != 0) {
      if (param_4 == -1) {
        if (*(int *)(param_2 + 0x138) != 0) {
          if (0 < *(int *)(param_2 + 0x138)) {
            do {
              FUN_1400136d8(param_1,param_2,0x20,iVar2);
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(param_2 + 0x138));
          }
          FUN_140019460(param_1,*(undefined8 *)(param_2 + 0x130));
          *(undefined8 *)(param_2 + 0x130) = 0;
          *(undefined4 *)(param_2 + 0x138) = 0;
        }
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffdfff;
      }
      else if (*(longlong *)(param_2 + 0x130) != 0) {
        lVar3 = (longlong)param_4 * 0x20;
        FUN_140019460(param_1,*(undefined8 *)(lVar3 + *(longlong *)(param_2 + 0x130)));
        FUN_140019460(param_1,*(undefined8 *)(lVar3 + 0x10 + *(longlong *)(param_2 + 0x130)));
        lVar1 = *(longlong *)(param_2 + 0x130);
        *(undefined8 *)(lVar3 + lVar1) = 0;
        *(undefined8 *)(lVar3 + 0x10 + lVar1) = 0;
      }
    }
    if (((*(uint *)(param_2 + 0x11c) & param_3) >> 9 & 1) != 0) {
      iVar2 = 0;
      if (param_4 == -1) {
        if (*(int *)(param_2 + 0x128) != 0) {
          if (0 < *(int *)(param_2 + 0x128)) {
            do {
              FUN_1400136d8(param_1,param_2,0x200,iVar2);
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(param_2 + 0x128));
          }
          FUN_140019460(param_1,*(undefined8 *)(param_2 + 0x120));
          *(undefined8 *)(param_2 + 0x120) = 0;
          *(undefined4 *)(param_2 + 0x128) = 0;
        }
      }
      else if (*(longlong *)(param_2 + 0x120) != 0) {
        FUN_140019460(param_1,*(undefined8 *)
                               (*(longlong *)(param_2 + 0x120) + 8 + (longlong)param_4 * 0x20));
        *(undefined8 *)((longlong)param_4 * 0x20 + 8 + *(longlong *)(param_2 + 0x120)) = 0;
      }
    }
    uVar4 = 0;
    if ((*(uint *)(param_2 + 0x11c) & param_3 & 8) != 0) {
      FUN_140019460(param_1,*(undefined8 *)(param_2 + 0xf0));
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffbf;
      *(undefined8 *)(param_2 + 0xf0) = 0;
    }
    if (((*(uint *)(param_2 + 0x11c) & param_3) >> 0xc & 1) != 0) {
      FUN_140019460(param_1,*(undefined8 *)(param_2 + 0x18));
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffff7;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined2 *)(param_2 + 0x20) = 0;
    }
    if ((*(uint *)(param_2 + 0x11c) & param_3 & 0x40) != 0) {
      lVar1 = *(longlong *)(param_2 + 0x150);
      if (lVar1 != 0) {
        if (*(int *)(param_2 + 4) != 0) {
          do {
            FUN_140019460(param_1,*(undefined8 *)(lVar1 + uVar4 * 8));
            lVar1 = *(longlong *)(param_2 + 0x150);
            uVar5 = (int)uVar4 + 1;
            *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
            uVar4 = (ulonglong)uVar5;
          } while (uVar5 < *(uint *)(param_2 + 4));
        }
        FUN_140019460(param_1,*(undefined8 *)(param_2 + 0x150));
        *(undefined8 *)(param_2 + 0x150) = 0;
      }
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffff7fff;
    }
    if (param_4 != -1) {
      param_3 = param_3 & 0xffffbddf;
    }
    *(uint *)(param_2 + 0x11c) = *(uint *)(param_2 + 0x11c) & ~param_3;
  }
  return;
}



// ===== FUN_140013c34 @ 0x140013c34 [profile,render] =====

undefined8
FUN_140013c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,byte *param_5,
             byte param_6)

{
  char *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = (((uint)*param_5 * 0x100 + (uint)param_5[1]) * 0x100 + (uint)param_5[2]) * 0x100 +
          (uint)param_5[3];
  if (uVar3 != param_4) {
    pcVar1 = "length does not match profile";
    goto LAB_140013eea;
  }
  uVar3 = (((uint)param_5[0x80] * 0x100 + (uint)param_5[0x81]) * 0x100 + (uint)param_5[0x82]) *
          0x100 + (uint)param_5[0x83];
  if ((0x1555554a < uVar3) || (param_4 < (uVar3 + 0xb) * 0xc)) {
    pcVar1 = "tag count too large";
    goto LAB_140013eea;
  }
  uVar3 = (((uint)param_5[0x40] * 0x100 + (uint)param_5[0x41]) * 0x100 + (uint)param_5[0x42]) *
          0x100 + (uint)param_5[0x43];
  if (0xfffe < uVar3) {
    pcVar1 = "invalid rendering intent";
    goto LAB_140013eea;
  }
  if (3 < uVar3) {
    FUN_14001409c(param_1,0,param_3,uVar3,"intent outside defined range");
  }
  uVar3 = (((uint)param_5[0x24] * 0x100 + (uint)param_5[0x25]) * 0x100 + (uint)param_5[0x26]) *
          0x100 + (uint)param_5[0x27];
  if (uVar3 != 0x61637370) {
    pcVar1 = "invalid signature";
    goto LAB_140013eea;
  }
  if ((*(longlong *)(param_5 + 0x44) != 0x100d6f60000) || (*(int *)(param_5 + 0x4c) != 0x2dd30000))
  {
    FUN_14001409c(param_1,0,param_3,0,"PCS illuminant is not D50");
  }
  uVar3 = (((uint)param_5[0x10] * 0x100 + (uint)param_5[0x11]) * 0x100 + (uint)param_5[0x12]) *
          0x100 + (uint)param_5[0x13];
  if (uVar3 == 0x47524159) {
    if ((param_6 & 2) != 0) {
      pcVar1 = "Gray color space not permitted on RGB PNG";
      uVar3 = 0x47524159;
      goto LAB_140013eea;
    }
  }
  else {
    if (uVar3 != 0x52474220) {
      pcVar1 = "invalid ICC profile color space";
      goto LAB_140013eea;
    }
    if ((param_6 & 2) == 0) {
      pcVar1 = "RGB color space not permitted on grayscale PNG";
      uVar3 = 0x52474220;
      goto LAB_140013eea;
    }
  }
  iVar4 = (((uint)param_5[0xc] * 0x100 + (uint)param_5[0xd]) * 0x100 + (uint)param_5[0xe]) * 0x100 +
          (uint)param_5[0xf];
  if (iVar4 == 0x61627374) {
    pcVar1 = "invalid embedded Abstract ICC profile";
    uVar3 = 0x61627374;
    goto LAB_140013eea;
  }
  if (iVar4 == 0x6c696e6b) {
    pcVar1 = "unexpected DeviceLink ICC profile class";
    uVar3 = 0x6c696e6b;
    goto LAB_140013eea;
  }
  if (iVar4 != 0x6d6e7472) {
    iVar5 = 0x6e6d636c;
    if (iVar4 == 0x6e6d636c) {
      pcVar1 = "unexpected NamedColor ICC profile class";
    }
    else {
      if (((iVar4 == 0x70727472) || (iVar4 == 0x73636e72)) || (iVar4 == 0x73706163))
      goto LAB_140013e83;
      pcVar1 = "unrecognized ICC profile class";
      iVar5 = iVar4;
    }
    FUN_14001409c(param_1,0,param_3,iVar5,pcVar1);
  }
LAB_140013e83:
  uVar3 = (((uint)param_5[0x14] * 0x100 + (uint)param_5[0x15]) * 0x100 + (uint)param_5[0x16]) *
          0x100 + (uint)param_5[0x17];
  if ((uVar3 == 0x4c616220) || (uVar3 == 0x58595a20)) {
    return 1;
  }
  pcVar1 = "unexpected ICC PCS encoding";
LAB_140013eea:
  uVar2 = FUN_14001409c(param_1,param_2,param_3,uVar3,pcVar1);
  return uVar2;
}



// ===== FUN_140013f0c @ 0x140013f0c [profile] =====

undefined8 FUN_140013f0c(void)

{
  undefined8 uVar1;
  uint in_R9D;
  
  if ((in_R9D < 0x84) || ((in_R9D & 3) != 0)) {
    uVar1 = FUN_14001409c();
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// ===== FUN_140013f48 @ 0x140013f48 [profile] =====

undefined8
FUN_140013f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,longlong param_5
             )

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  
  pbVar9 = (byte *)(param_5 + 0x84);
  uVar7 = 0;
  uVar6 = (((uint)*(byte *)(param_5 + 0x80) * 0x100 + (uint)*(byte *)(param_5 + 0x81)) * 0x100 +
          (uint)*(byte *)(param_5 + 0x82)) * 0x100 + (uint)*(byte *)(param_5 + 0x83);
  if (uVar6 != 0) {
    do {
      bVar1 = pbVar9[8];
      iVar10 = (((uint)*pbVar9 * 0x100 + (uint)pbVar9[1]) * 0x100 + (uint)pbVar9[2]) * 0x100 +
               (uint)pbVar9[3];
      uVar8 = (((uint)pbVar9[4] * 0x100 + (uint)pbVar9[5]) * 0x100 + (uint)pbVar9[6]) * 0x100 +
              (uint)pbVar9[7];
      bVar2 = pbVar9[9];
      bVar3 = pbVar9[10];
      bVar4 = pbVar9[0xb];
      if ((uVar8 & 3) != 0) {
        FUN_14001409c(param_1,0,param_3,iVar10,"ICC profile tag start not a multiple of 4");
      }
      if ((param_4 < uVar8) ||
         (param_4 - uVar8 <
          (((uint)bVar1 * 0x100 + (uint)bVar2) * 0x100 + (uint)bVar3) * 0x100 + (uint)bVar4)) {
        uVar5 = FUN_14001409c(param_1,param_2,param_3,iVar10,"ICC profile tag outside profile");
        return uVar5;
      }
      uVar7 = uVar7 + 1;
      pbVar9 = pbVar9 + 0xc;
    } while (uVar7 < uVar6);
  }
  return 1;
}



// ===== FUN_14001409c @ 0x14001409c [profile,render] =====

undefined8
FUN_14001409c(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 local_108 [24];
  undefined1 local_f0 [8];
  undefined1 local_e8 [5];
  undefined2 uStack_e3;
  undefined1 auStack_e1 [201];
  
  if (param_2 != 0) {
    *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | 0x8000;
  }
  lVar2 = FUN_140019de0(local_e8,0xc4,0,"profile \'");
  uVar3 = FUN_140019de0(local_e8,lVar2 + 0x4f,lVar2,param_3);
  lVar2 = FUN_140019de0(local_e8,0xc4,uVar3,&DAT_1405f4f34);
  iVar1 = FUN_140011b30(param_4 >> 0x18);
  if (iVar1 != 0) {
    iVar1 = FUN_140011b30(param_4 >> 0x10 & 0xff);
    if (iVar1 != 0) {
      iVar1 = FUN_140011b30(param_4 >> 8 & 0xff);
      if (iVar1 != 0) {
        iVar1 = FUN_140011b30(param_4 & 0xff);
        if (iVar1 != 0) {
          local_e8[lVar2] = 0x27;
          uVar5 = 0x3f;
          *(undefined2 *)(local_e8 + lVar2 + 5) = 0x3a27;
          if (((uint)(param_4 >> 0x18) & 0xff) - 0x20 < 0x5f) {
            uVar5 = (undefined1)(param_4 >> 0x18);
          }
          local_e8[lVar2 + 1] = uVar5;
          uVar4 = param_4 >> 0x10 & 0xff;
          uVar7 = 0x3f;
          if ((int)uVar4 - 0x20U < 0x5f) {
            uVar7 = uVar4;
          }
          local_e8[lVar2 + 2] = (char)uVar7;
          uVar5 = 0x3f;
          if (((uint)(param_4 >> 8) & 0xff) - 0x20 < 0x5f) {
            uVar5 = (undefined1)(param_4 >> 8);
          }
          local_e8[lVar2 + 3] = uVar5;
          uVar5 = 0x3f;
          if (((uint)param_4 & 0xff) - 0x20 < 0x5f) {
            uVar5 = (char)param_4;
          }
          lVar6 = lVar2 + 8;
          local_e8[lVar2 + 4] = uVar5;
          local_e8[lVar2 + 7] = 0x20;
          goto LAB_14001422d;
        }
      }
    }
  }
  uVar3 = FUN_1400199b0(local_108,local_f0,3,param_4);
  uVar3 = FUN_140019de0(local_e8,0xc4,lVar2,uVar3);
  lVar6 = FUN_140019de0(local_e8,0xc4,uVar3,&DAT_1405f4f38);
LAB_14001422d:
  FUN_140019de0(local_e8,0xc4,lVar6,param_5);
  FUN_1400197cc(param_1,local_e8,(param_2 != 0) + '\x01');
  return 0;
}



// ===== FUN_14001427c @ 0x14001427c [profile] =====

void FUN_14001427c(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1400130e8(param_1,param_3,param_4);
  if (iVar1 != 0) {
    FUN_140012cec(param_1,param_2,
                  (uint)*(byte *)(param_3 + 0x40) * 0x1000000 +
                  (uint)*(byte *)(param_3 + 0x41) * 0x10000 +
                  (uint)*(byte *)(param_3 + 0x42) * 0x100 + (uint)*(byte *)(param_3 + 0x43));
  }
  return;
}



// ===== FUN_140019548 @ 0x140019548 [profile] =====

undefined8 FUN_140019548(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_1 != 0) && (*(code **)(param_1 + 0x448) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014001955f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x448))();
    return uVar1;
  }
  uVar1 = _malloc_base(param_2);
  return uVar1;
}



// ===== FUN_140019700 @ 0x140019700 [profile,storage] =====

void FUN_140019700(longlong param_1)

{
  if ((*(uint *)(param_1 + 0x168) & 0x200000) != 0) {
    FUN_140019e38();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140019868();
}



// ===== FUN_140019720 @ 0x140019720 [profile,render] =====

void FUN_140019720(longlong param_1)

{
  if ((*(uint *)(param_1 + 0x168) & 0x100000) == 0) {
    if (((*(uint *)(param_1 + 0x164) & 0x8000) != 0) && (*(int *)(param_1 + 0x238) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_140019798();
    }
                    /* WARNING: Subroutine does not return */
    FUN_140019868();
  }
  if (((*(uint *)(param_1 + 0x164) & 0x8000) != 0) && (*(int *)(param_1 + 0x238) != 0)) {
    FUN_140019834();
    return;
  }
  FUN_140019e38();
  return;
}



// ===== FUN_140019778 @ 0x140019778 [profile,storage] =====

void FUN_140019778(longlong param_1)

{
  if ((*(uint *)(param_1 + 0x168) & 0x100000) != 0) {
    FUN_140019834();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140019798();
}



// ===== FUN_140019798 @ 0x140019798 [profile,storage] =====

void FUN_140019798(longlong param_1,undefined8 param_2)

{
  undefined1 local_e8 [224];
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140019868();
  }
  FUN_1400198dc(param_1,local_e8,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_140019868(param_1,local_e8);
}



// ===== FUN_1400197cc @ 0x1400197cc [profile,render] =====

void FUN_1400197cc(longlong param_1,undefined8 param_2,int param_3)

{
  if ((*(uint *)(param_1 + 0x164) & 0x8000) == 0) {
    if (param_3 < 1) {
      if ((*(uint *)(param_1 + 0x168) & 0x200000) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140019868();
      }
    }
    else if ((*(uint *)(param_1 + 0x168) & 0x400000) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140019868();
    }
    FUN_140019e38();
    return;
  }
  if ((1 < param_3) && ((*(uint *)(param_1 + 0x168) & 0x100000) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_140019798();
  }
  FUN_140019834();
  return;
}



// ===== FUN_140019834 @ 0x140019834 [profile,storage] =====

void FUN_140019834(longlong param_1,undefined1 *param_2)

{
  undefined1 local_e8 [224];
  
  if (param_1 != 0) {
    FUN_1400198dc(param_1,local_e8,param_2);
    param_2 = local_e8;
  }
  FUN_140019e38(param_1,param_2);
  return;
}



// ===== FUN_140019868 @ 0x140019868 [profile] =====

void FUN_140019868(longlong param_1,char *param_2)

{
  code *pcVar1;
  longlong lVar2;
  char *pcVar3;
  
  if ((param_1 != 0) && (*(code **)(param_1 + 0x118) != (code *)0x0)) {
    (**(code **)(param_1 + 0x118))();
  }
  pcVar3 = "undefined";
  if (param_2 != (char *)0x0) {
    pcVar3 = param_2;
  }
  lVar2 = FUN_140555a30();
  FUN_1403026d0(lVar2 + 0x60,"libpng error: %s",pcVar3);
  lVar2 = FUN_140555a30();
  FUN_1403026d0(lVar2 + 0x60,&DAT_1405f5c74);
  FUN_140019c60(param_1,1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== FUN_1400199b0 @ 0x1400199b0 [profile] =====

char * FUN_1400199b0(char *param_1,longlong param_2,int param_3,ulonglong param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  iVar3 = 0;
  pcVar4 = (char *)(param_2 + -1);
  bVar1 = false;
  *pcVar4 = '\0';
  iVar5 = 1;
  do {
    if ((pcVar4 <= param_1) || ((param_4 == 0 && (iVar5 <= iVar3)))) {
      return pcVar4;
    }
    if (param_3 == 1) {
LAB_140019a64:
      pcVar4 = pcVar4 + -1;
      *pcVar4 = "0123456789ABCDEF"[param_4 % 10];
LAB_140019a85:
      param_4 = param_4 / 10;
    }
    else {
      if (param_3 == 2) {
        iVar5 = 2;
        goto LAB_140019a64;
      }
      if (param_3 != 3) {
        if (param_3 == 4) {
          iVar5 = 2;
          goto LAB_140019a48;
        }
        if (param_3 != 5) {
          param_4 = 0;
          goto LAB_140019a88;
        }
        iVar5 = 5;
        if ((bVar1) || (param_4 != (param_4 / 10) * 10)) {
          bVar1 = true;
          goto LAB_140019a64;
        }
        goto LAB_140019a85;
      }
LAB_140019a48:
      pcVar4 = pcVar4 + -1;
      uVar2 = (uint)param_4;
      param_4 = param_4 >> 4;
      *pcVar4 = "0123456789ABCDEF"[uVar2 & 0xf];
    }
LAB_140019a88:
    iVar3 = iVar3 + 1;
    if ((param_3 == 5) && (iVar3 == 5)) {
      if (pcVar4 <= param_1) {
        return pcVar4;
      }
      if (bVar1) {
        pcVar4 = pcVar4 + -1;
        *pcVar4 = '.';
      }
      else if (param_4 == 0) {
        pcVar4 = pcVar4 + -1;
        *pcVar4 = '0';
      }
    }
  } while( true );
}



// ===== FUN_140019de0 @ 0x140019de0 [profile] =====

ulonglong FUN_140019de0(longlong param_1,ulonglong param_2,ulonglong param_3,char *param_4)

{
  char cVar1;
  ulonglong uVar2;
  
  uVar2 = param_3;
  if ((param_1 != 0) && (param_3 < param_2)) {
    if ((param_4 != (char *)0x0) && (cVar1 = *param_4, cVar1 != '\0')) {
      do {
        if (param_2 - 1 <= uVar2) break;
        *(char *)(param_1 + uVar2) = cVar1;
        uVar2 = uVar2 + 1;
        cVar1 = param_4[uVar2 - param_3];
      } while (cVar1 != '\0');
    }
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}



// ===== FUN_140019e38 @ 0x140019e38 [profile,render] =====

void FUN_140019e38(longlong param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (param_1 != 0) {
    if (*param_2 == '#') {
      iVar1 = 1;
      lVar2 = 1;
      do {
        if (param_2[lVar2] == ' ') break;
        lVar2 = lVar2 + 1;
        iVar1 = iVar1 + 1;
      } while (lVar2 < 0xf);
    }
    if (*(code **)(param_1 + 0x120) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140019e7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x120))(param_1,param_2 + iVar1);
      return;
    }
  }
  lVar2 = FUN_140555a30();
  FUN_1403026d0(lVar2 + 0x60,"libpng warning: %s",param_2 + iVar1);
  lVar2 = FUN_140555a30();
  FUN_1403026d0(lVar2 + 0x60,&DAT_1405f5c74);
  return;
}



// ===== FUN_14001b8e0 @ 0x14001b8e0 [profile,storage] =====

undefined8 FUN_14001b8e0(longlong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 local_408 [1024];
  
  for (; param_2 != 0; param_2 = param_2 - uVar2) {
    uVar2 = 0x400;
    if (param_2 < 0x400) {
      uVar2 = param_2;
    }
    FUN_14001b978(param_1,local_408);
  }
  iVar1 = FUN_14001b834(param_1);
  if (iVar1 != 0) {
    if ((*(uint *)(param_1 + 0x238) & 0x20000000) == 0) {
      uVar2 = *(uint *)(param_1 + 0x168) & 0x400;
    }
    else {
      uVar2 = ~(*(uint *)(param_1 + 0x168) >> 9) & 1;
    }
    if (uVar2 != 0) {
      FUN_140019834();
      return 1;
    }
    FUN_140019778(param_1,"CRC error");
  }
  return 0;
}



// ===== FUN_14001b978 @ 0x14001b978 [profile] =====

void FUN_14001b978(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    FUN_1400192b8(param_1,param_2,param_3);
    FUN_14001242c(param_1,param_2,param_3);
  }
  return;
}



// ===== FUN_14001c968 @ 0x14001c968 [profile] =====

void FUN_14001c968(longlong param_1,longlong param_2,uint param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  uint local_res18 [2];
  ulonglong local_res20;
  ulonglong *puVar18;
  char local_528 [96];
  byte local_4c8;
  byte bStack_4c7;
  byte bStack_4c6;
  byte bStack_4c5;
  byte local_448;
  byte local_447;
  byte local_446;
  byte local_445;
  undefined1 local_438 [1024];
  undefined4 uVar19;
  
  pcVar11 = (char *)0x0;
  bVar5 = false;
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140019798(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x164) & 6) != 0) {
    FUN_14001b8e0(param_1,param_3);
    pcVar11 = "out of place";
    goto LAB_14001ce85;
  }
  if (param_3 < 9) {
    FUN_14001b8e0(param_1,param_3);
    pcVar11 = "too short";
    goto LAB_14001ce85;
  }
  if ((*(ushort *)(param_1 + 0x542) & 0x8000) != 0) {
    FUN_14001b8e0(param_1,param_3);
    return;
  }
  if ((*(ushort *)(param_1 + 0x542) & 4) == 0) {
    uVar17 = 0x51;
    if (param_3 < 0x51) {
      uVar17 = param_3;
    }
    FUN_14001b978(param_1,local_528,uVar17);
    param_3 = param_3 - uVar17;
    uVar16 = 0;
    pcVar7 = local_528;
    do {
      if ((uVar17 <= uVar16) || (*pcVar7 == '\0')) break;
      uVar16 = uVar16 + 1;
      pcVar7 = pcVar7 + 1;
    } while (uVar16 < 0x50);
    local_res18[0] = param_3;
    if (uVar16 - 1 < 0x4f) {
      uVar8 = (ulonglong)(uVar16 + 1);
      if ((uVar16 + 1 < uVar17) && (local_528[uVar8] == '\0')) {
        iVar6 = FUN_14001e558(param_1,0x69434350,
                              -((*(uint *)(param_1 + 0x168) & 0x100000) != 0) & 0xf);
        if (iVar6 == 0) {
          *(char **)(param_1 + 0x178) = local_528 + (uVar16 + 2);
          puVar18 = &local_res20;
          local_res20 = 0x84;
          *(uint *)(param_1 + 0x180) = (uVar17 - uVar16) + -2;
          FUN_14001e648(param_1,local_438,0x400,local_res18,&local_4c8,puVar18,0);
          uVar19 = (undefined4)((ulonglong)puVar18 >> 0x20);
          if (local_res20 == 0) {
            uVar17 = (((uint)local_4c8 * 0x100 + (uint)bStack_4c7) * 0x100 + (uint)bStack_4c6) *
                     0x100 + (uint)bStack_4c5;
            iVar6 = FUN_140013f0c(param_1,param_1 + 0x4f8,local_528,uVar17);
            param_3 = local_res18[0];
            if ((iVar6 != 0) &&
               (iVar6 = FUN_140013c34(param_1,param_1 + 0x4f8,local_528,uVar17,&local_4c8,
                                      CONCAT44(uVar19,(uint)*(byte *)(param_1 + 0x297))),
               param_3 = local_res18[0], iVar6 != 0)) {
              puVar9 = (undefined8 *)FUN_14001e980(param_1,uVar17,2);
              if (puVar9 == (undefined8 *)0x0) {
                pcVar11 = "out of memory";
                param_3 = local_res18[0];
              }
              else {
                pbVar15 = &local_4c8;
                if ((((uint)pbVar15 | (uint)puVar9) & 0xf) == 0) {
                  lVar10 = 1;
                  puVar12 = puVar9;
                  do {
                    uVar4 = *(undefined8 *)(pbVar15 + 8);
                    *puVar12 = *(undefined8 *)pbVar15;
                    puVar12[1] = uVar4;
                    uVar4 = *(undefined8 *)(pbVar15 + 0x18);
                    puVar12[2] = *(undefined8 *)(pbVar15 + 0x10);
                    puVar12[3] = uVar4;
                    uVar4 = *(undefined8 *)(pbVar15 + 0x28);
                    puVar12[4] = *(undefined8 *)(pbVar15 + 0x20);
                    puVar12[5] = uVar4;
                    uVar4 = *(undefined8 *)(pbVar15 + 0x38);
                    puVar12[6] = *(undefined8 *)(pbVar15 + 0x30);
                    puVar12[7] = uVar4;
                    uVar4 = *(undefined8 *)(pbVar15 + 0x48);
                    puVar12[8] = *(undefined8 *)(pbVar15 + 0x40);
                    puVar12[9] = uVar4;
                    uVar4 = *(undefined8 *)(pbVar15 + 0x58);
                    puVar12[10] = *(undefined8 *)(pbVar15 + 0x50);
                    puVar12[0xb] = uVar4;
                    uVar19 = *(undefined4 *)(pbVar15 + 100);
                    uVar2 = *(undefined4 *)(pbVar15 + 0x68);
                    uVar3 = *(undefined4 *)(pbVar15 + 0x6c);
                    *(undefined4 *)(puVar12 + 0xc) = *(undefined4 *)(pbVar15 + 0x60);
                    *(undefined4 *)((longlong)puVar12 + 100) = uVar19;
                    *(undefined4 *)(puVar12 + 0xd) = uVar2;
                    *(undefined4 *)((longlong)puVar12 + 0x6c) = uVar3;
                    pbVar1 = pbVar15 + 0x70;
                    uVar4 = *(undefined8 *)(pbVar15 + 0x78);
                    puVar13 = puVar12 + 0x10;
                    pbVar15 = pbVar15 + 0x80;
                    puVar12[0xe] = *(undefined8 *)pbVar1;
                    puVar12[0xf] = uVar4;
                    lVar10 = lVar10 + -1;
                    puVar12 = puVar13;
                  } while (lVar10 != 0);
                  *(undefined4 *)puVar13 = *(undefined4 *)pbVar15;
                }
                else {
                  FUN_140596110(puVar9,&local_4c8,0x84);
                }
                uVar14 = (ulonglong)
                         (((((uint)local_448 * 0x100 + (uint)local_447) * 0x100 + (uint)local_446) *
                           0x100 + (uint)local_445) * 0xc);
                local_res20 = uVar14;
                FUN_14001e648(param_1,local_438,0x400,local_res18,
                              (undefined4 *)((longlong)puVar9 + 0x84),&local_res20,0);
                if (local_res20 != 0) goto LAB_14001ce19;
                iVar6 = FUN_140013f48(param_1,param_1 + 0x4f8,local_528,uVar17,puVar9);
                param_3 = local_res18[0];
                if (iVar6 != 0) {
                  local_res20 = (uVar17 - uVar14) - 0x84;
                  FUN_14001e648(param_1,local_438,0x400,local_res18,(longlong)puVar9 + uVar14 + 0x84
                                ,&local_res20,1);
                  param_3 = local_res18[0];
                  if ((local_res18[0] == 0) || ((*(uint *)(param_1 + 0x168) & 0x100000) != 0)) {
                    if (local_res20 == 0) {
                      if (local_res18[0] != 0) {
                        FUN_140019834(param_1,"extra compressed data");
                      }
                      FUN_14001b8e0(param_1,param_3);
                      bVar5 = true;
                      FUN_14001427c(param_1,param_1 + 0x4f8,puVar9,*(undefined4 *)(param_1 + 0x1c4))
                      ;
                      if (param_2 == 0) {
LAB_14001cdfb:
                        *(undefined4 *)(param_1 + 0x170) = 0;
                        return;
                      }
                      FUN_1400136d8(param_1,param_2,0x10);
                      lVar10 = FUN_140019548(param_1,uVar8);
                      *(longlong *)(param_2 + 0x80) = lVar10;
                      if (lVar10 == 0) {
                        pcVar11 = "out of memory";
                        *(ushort *)(param_1 + 0x542) = *(ushort *)(param_1 + 0x542) | 0x8000;
                      }
                      else {
                        FUN_140596110(lVar10,local_528,uVar8);
                        *(undefined8 *)(param_1 + 0x4b8) = 0;
                        *(uint *)(param_2 + 0x11c) = *(uint *)(param_2 + 0x11c) | 0x10;
                        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x1000;
                        *(uint *)(param_2 + 0x90) = uVar17;
                        *(undefined8 **)(param_2 + 0x88) = puVar9;
                      }
                      FUN_140012fd0(param_1,param_2);
                      if (pcVar11 == (char *)0x0) goto LAB_14001cdfb;
                    }
                    else {
                      pcVar11 = "truncated";
                    }
                  }
                  else {
                    pcVar11 = "extra compressed data";
                  }
                }
              }
            }
          }
          else {
LAB_14001ce19:
            pcVar11 = *(char **)(param_1 + 0x198);
            param_3 = local_res18[0];
          }
          *(undefined4 *)(param_1 + 0x170) = 0;
        }
        else {
          pcVar11 = *(char **)(param_1 + 0x198);
        }
      }
      else {
        pcVar11 = "bad compression method";
      }
    }
    else {
      pcVar11 = "bad keyword";
    }
  }
  else {
    pcVar11 = "too many profiles";
  }
  if (!bVar5) {
    FUN_14001b8e0(param_1,param_3);
  }
  *(ushort *)(param_1 + 0x542) = *(ushort *)(param_1 + 0x542) | 0x8000;
  FUN_140012fd0(param_1,param_2);
  if (pcVar11 == (char *)0x0) {
    return;
  }
LAB_14001ce85:
  FUN_140019778(param_1,pcVar11);
  return;
}



// ===== FUN_14001db4c @ 0x14001db4c [profile] =====

void FUN_14001db4c(longlong param_1,undefined8 param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  undefined1 local_res8 [8];
  
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140019798(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x164) & 6) == 0) {
    if (param_3 == 1) {
      FUN_14001b978(param_1,local_res8,1);
      iVar2 = FUN_14001b8e0(param_1,0);
      if (iVar2 != 0) {
        return;
      }
      uVar1 = *(ushort *)(param_1 + 0x542);
      if ((uVar1 & 0x8000) != 0) {
        return;
      }
      if ((uVar1 & 4) == 0) {
        FUN_140012cec(param_1,param_1 + 0x4f8,local_res8[0]);
        FUN_140012fd0(param_1,param_2);
        return;
      }
      *(ushort *)(param_1 + 0x542) = uVar1 | 0x8000;
      FUN_140012fd0(param_1,param_2);
      pcVar3 = "too many profiles";
    }
    else {
      FUN_14001b8e0(param_1,param_3);
      pcVar3 = "invalid";
    }
  }
  else {
    FUN_14001b8e0(param_1,param_3);
    pcVar3 = "out of place";
  }
  FUN_140019778(param_1,pcVar3);
  return;
}



// ===== FUN_14001e558 @ 0x14001e558 [profile] =====

int FUN_14001e558(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  
  iVar1 = *(int *)(param_1 + 0x170);
  if (iVar1 != 0) {
    local_48 = (undefined1)((uint)iVar1 >> 0x18);
    local_46 = (undefined1)((uint)iVar1 >> 8);
    local_47 = (undefined1)((uint)iVar1 >> 0x10);
    local_45 = *(undefined1 *)(param_1 + 0x170);
    FUN_140019de0(&local_48,0x40,4," using zstream");
    FUN_140019834(param_1,&local_48);
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  if ((*(byte *)(param_1 + 0x168) & 2) == 0) {
    iVar1 = FUN_1402f8220((undefined8 *)(param_1 + 0x178),param_3,"1.2.8",0x58);
    if (iVar1 != 0) goto LAB_14001e62a;
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 2;
  }
  else {
    iVar1 = FUN_1402f8160();
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x170) = param_2;
    return 0;
  }
LAB_14001e62a:
  FUN_140014850(param_1,iVar1);
  return iVar1;
}



// ===== FUN_14001e648 @ 0x14001e648 [profile] =====

int FUN_14001e648(longlong param_1,undefined8 param_2,uint param_3,uint *param_4,undefined8 param_5,
                 ulonglong *param_6,int param_7)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  
  if (*(int *)(param_1 + 0x170) == *(int *)(param_1 + 0x238)) {
    *(undefined8 *)(param_1 + 0x188) = param_5;
    *(undefined4 *)(param_1 + 400) = 0;
    do {
      if (*(int *)(param_1 + 0x180) == 0) {
        uVar2 = *param_4;
        if (uVar2 < param_3) {
          param_3 = uVar2;
        }
        *param_4 = uVar2 - param_3;
        if (param_3 != 0) {
          FUN_14001b978(param_1,param_2);
        }
        *(undefined8 *)(param_1 + 0x178) = param_2;
        *(uint *)(param_1 + 0x180) = param_3;
      }
      if (*(int *)(param_1 + 400) == 0) {
        uVar1 = *param_6;
        uVar2 = 0xffffffff;
        if (uVar1 < 0xffffffff) {
          uVar2 = (uint)uVar1;
        }
        *(uint *)(param_1 + 400) = uVar2;
        *param_6 = uVar1 - uVar2;
      }
      cVar4 = (-(param_7 != 0) & 2U) + 2;
      if (*param_4 != 0) {
        cVar4 = '\0';
      }
      iVar3 = FUN_1402f8500((undefined8 *)(param_1 + 0x178),cVar4);
    } while ((iVar3 == 0) && ((*param_6 != 0 || (*(int *)(param_1 + 400) != 0))));
    uVar2 = *(uint *)(param_1 + 400);
    *(undefined4 *)(param_1 + 400) = 0;
    *param_6 = *param_6 + (ulonglong)uVar2;
    FUN_140014850(param_1,iVar3);
  }
  else {
    *(char **)(param_1 + 0x198) = "zstream unclaimed";
    iVar3 = -2;
  }
  return iVar3;
}



// ===== FUN_14001e980 @ 0x14001e980 [profile] =====

longlong FUN_14001e980(longlong param_1,ulonglong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x4b8);
  if (lVar1 != 0) {
    if (*(ulonglong *)(param_1 + 0x4c0) < param_2) {
      *(undefined8 *)(param_1 + 0x4b8) = 0;
      *(undefined8 *)(param_1 + 0x4c0) = 0;
      FUN_140019460(param_1,lVar1);
      lVar1 = 0;
    }
    if (lVar1 != 0) {
      return lVar1;
    }
  }
  lVar1 = FUN_140019548(param_1,param_2);
  if (lVar1 == 0) {
    if (param_3 < 2) {
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140019798(param_1,"insufficient memory to read chunk");
      }
      FUN_140019834();
    }
  }
  else {
    *(longlong *)(param_1 + 0x4b8) = lVar1;
    *(ulonglong *)(param_1 + 0x4c0) = param_2;
  }
  return lVar1;
}



// ===== FUN_14001f3d0 @ 0x14001f3d0 [profile] =====

uint FUN_14001f3d0(undefined8 param_1,byte *param_2,byte *param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  undefined1 local_108 [256];
  
  bVar1 = true;
  uVar5 = 0;
  uVar6 = 0;
  bVar7 = 0;
  if (param_2 == (byte *)0x0) {
    *param_3 = 0;
  }
  else {
    bVar3 = *param_2;
    pbVar4 = param_2;
    bVar2 = 0;
    if (bVar3 != 0) {
      do {
        bVar7 = bVar2;
        uVar6 = uVar5;
        if (0x4e < uVar5) break;
        pbVar4 = pbVar4 + 1;
        if (((byte)(bVar3 - 0x21) < 0x5e) || (0xa0 < bVar3)) {
          *param_3 = bVar3;
          param_3 = param_3 + 1;
          bVar1 = false;
          uVar5 = uVar5 + 1;
        }
        else if (bVar1) {
          if (bVar7 == 0) goto LAB_14001f442;
        }
        else {
          *param_3 = 0x20;
          uVar5 = uVar5 + 1;
          param_3 = param_3 + 1;
          bVar1 = true;
          if (bVar3 != 0x20) {
LAB_14001f442:
            bVar7 = bVar3;
          }
        }
        bVar3 = *pbVar4;
        uVar6 = uVar5;
        bVar2 = bVar7;
      } while (bVar3 != 0);
      if ((uVar6 != 0) && (bVar1)) {
        uVar6 = uVar6 - 1;
        param_3 = param_3 + -1;
        if (bVar7 == 0) {
          bVar7 = 0x20;
        }
      }
    }
    *param_3 = 0;
    if (uVar6 != 0) {
      if (*pbVar4 != 0) {
        FUN_140019e38(param_1,"keyword truncated");
        return uVar6;
      }
      if (bVar7 == 0) {
        return uVar6;
      }
      FUN_140019ebc(local_108,1,param_2);
      FUN_140019eec(local_108,2,4,bVar7);
      FUN_140019ad8(param_1,local_108,"keyword \"@1\": bad character \'0x@2\'");
      return uVar6;
    }
  }
  return 0;
}



// ===== FUN_14001fd88 @ 0x14001fd88 [profile] =====

ulonglong FUN_14001fd88(longlong param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  
  uVar2 = FUN_14001f740(param_1,param_2,param_3[1]);
  if ((int)uVar2 == 0) {
    uVar2 = param_3[1];
    iVar6 = 0x400;
    *(undefined8 *)(param_1 + 0x178) = *param_3;
    *(undefined4 *)(param_1 + 0x180) = 0;
    *(longlong *)(param_1 + 0x188) = (longlong)param_3 + 0x14;
    *(undefined4 *)(param_1 + 400) = 0x400;
    puVar7 = (undefined8 *)(param_1 + 0x1d0);
    do {
      uVar4 = 0xffffffff;
      if (uVar2 < 0xffffffff) {
        uVar4 = uVar2 & 0xffffffff;
      }
      *(int *)(param_1 + 0x180) = (int)uVar4;
      uVar2 = uVar2 - uVar4;
      puVar3 = puVar7;
      if (*(int *)(param_1 + 400) == 0) {
        if (0x7fffffff < (uint)(iVar6 + param_4)) {
LAB_14001feaa:
          uVar1 = 0xfffffffc;
          break;
        }
        puVar3 = (undefined8 *)*puVar7;
        if (puVar3 == (undefined8 *)0x0) {
          puVar3 = (undefined8 *)FUN_140019548(param_1,(ulonglong)*(uint *)(param_1 + 0x1d8) + 8);
          if (puVar3 == (undefined8 *)0x0) goto LAB_14001feaa;
          *puVar3 = 0;
          *puVar7 = puVar3;
        }
        *(undefined8 **)(param_1 + 0x188) = puVar3 + 1;
        *(int *)(param_1 + 400) = *(int *)(param_1 + 0x1d8);
        iVar6 = iVar6 + *(int *)(param_1 + 0x1d8);
      }
      uVar5 = 4;
      if (uVar2 != 0) {
        uVar5 = 0;
      }
      uVar1 = FUN_1402f5190(param_1 + 0x178,uVar5);
      uVar2 = uVar2 + *(uint *)(param_1 + 0x180);
      *(undefined4 *)(param_1 + 0x180) = 0;
      puVar7 = puVar3;
    } while (uVar1 == 0);
    iVar6 = iVar6 - *(int *)(param_1 + 400);
    *(undefined4 *)(param_1 + 400) = 0;
    *(int *)(param_3 + 2) = iVar6;
    if ((uint)(iVar6 + param_4) < 0x7fffffff) {
      FUN_140014850(param_1,uVar1);
    }
    else {
      uVar1 = 0xfffffffc;
      *(char **)(param_1 + 0x198) = "compressed data too long";
    }
    *(undefined4 *)(param_1 + 0x170) = 0;
    if ((uVar1 == 1) && (uVar2 == 0)) {
      FUN_14001f340((longlong)param_3 + 0x14,param_3[1]);
      uVar2 = 0;
    }
    else {
      uVar2 = (ulonglong)uVar1;
    }
  }
  return uVar2;
}



// ===== FUN_14001ff58 @ 0x14001ff58 [profile] =====

void FUN_14001ff58(longlong param_1,uint param_2,ulonglong param_3,uint param_4,int param_5,
                  int param_6,int param_7,uint param_8)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  char local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  
  cVar1 = (char)param_4;
  if (param_5 == 0) {
    if ((0x10 < param_4) || ((0x10116U >> (param_4 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_140019868(param_1,"Invalid bit depth for grayscale image");
    }
  }
  else {
    if (param_5 == 2) {
      if ((param_4 - 8 & 0xfffffff7) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140019868(param_1,"Invalid bit depth for RGB image");
      }
      *(undefined1 *)(param_1 + 0x29b) = 3;
      goto LAB_140020027;
    }
    if (param_5 != 3) {
      if (param_5 == 4) {
        if ((param_4 - 8 & 0xfffffff7) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140019868(param_1,"Invalid bit depth for grayscale+alpha image");
        }
        *(undefined1 *)(param_1 + 0x29b) = 2;
      }
      else {
        if (param_5 != 6) {
                    /* WARNING: Subroutine does not return */
          FUN_140019868(param_1,"Invalid image color type specified");
        }
        if ((param_4 - 8 & 0xfffffff7) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140019868(param_1,"Invalid bit depth for RGBA image");
        }
        *(undefined1 *)(param_1 + 0x29b) = 4;
      }
      goto LAB_140020027;
    }
    if ((8 < param_4) || ((0x116U >> (param_4 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_140019868(param_1,"Invalid bit depth for paletted image");
    }
  }
  *(undefined1 *)(param_1 + 0x29b) = 1;
LAB_140020027:
  if (param_6 != 0) {
    FUN_140019e38(param_1,"Invalid compression type specified");
  }
  if ((((((*(byte *)(param_1 + 0x438) & 4) == 0) || ((*(uint *)(param_1 + 0x164) & 0x1000) != 0)) ||
       ((param_5 - 2U & 0xfffffffb) != 0)) || (param_7 != 0x40)) && (param_7 != 0)) {
    FUN_140019e38(param_1,"Invalid filter type specified");
    param_7 = 0;
  }
  if (1 < param_8) {
    FUN_140019e38(param_1,"Invalid interlace type specified");
    param_8 = 1;
  }
  *(char *)(param_1 + 0x298) = cVar1;
  local_2f = (undefined1)param_5;
  *(undefined1 *)(param_1 + 0x297) = local_2f;
  local_2c = (undefined1)param_8;
  *(undefined1 *)(param_1 + 0x294) = local_2c;
  local_2d = (undefined1)param_7;
  *(undefined1 *)(param_1 + 0x43c) = local_2d;
  bVar2 = cVar1 * *(char *)(param_1 + 0x29b);
  local_2e = 0;
  *(undefined1 *)(param_1 + 0x478) = 0;
  *(uint *)(param_1 + 0x218) = param_2;
  *(int *)(param_1 + 0x21c) = (int)param_3;
  *(byte *)(param_1 + 0x29a) = bVar2;
  if (bVar2 < 8) {
    uVar3 = (ulonglong)bVar2 * (ulonglong)param_2 + 7 >> 3;
  }
  else {
    uVar3 = (ulonglong)(bVar2 >> 3) * (ulonglong)param_2;
  }
  *(char *)(param_1 + 0x29c) = *(char *)(param_1 + 0x29b);
  *(ulonglong *)(param_1 + 0x228) = uVar3;
  local_38 = (undefined1)(param_2 >> 0x18);
  local_37 = (undefined1)(param_2 >> 0x10);
  *(uint *)(param_1 + 0x224) = param_2;
  *(char *)(param_1 + 0x299) = cVar1;
  local_35 = (undefined1)param_2;
  local_36 = (undefined1)(param_2 >> 8);
  local_31 = (undefined1)(param_3 & 0xffffffff);
  local_34 = (undefined1)(param_3 >> 0x18);
  local_33 = (undefined1)((param_3 & 0xffffffff) >> 0x10);
  local_32 = (undefined1)(param_3 >> 8);
  local_30 = cVar1;
  FUN_140020610(param_1,0x49484452,&local_38,0xd);
  if (*(char *)(param_1 + 0x296) == '\0') {
    if ((*(char *)(param_1 + 0x297) == '\x03') || (*(byte *)(param_1 + 0x298) < 8)) {
      *(undefined1 *)(param_1 + 0x296) = 8;
    }
    else {
      *(undefined1 *)(param_1 + 0x296) = 0xf8;
    }
  }
  *(undefined4 *)(param_1 + 0x164) = 1;
  return;
}



// ===== FUN_140020400 @ 0x140020400 [profile] =====

void FUN_140020400(undefined8 param_1,undefined4 *param_2)

{
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  
  FUN_14001454c(local_28,param_2[6]);
  FUN_14001454c(local_24,param_2[7]);
  FUN_14001454c(local_20,*param_2);
  FUN_14001454c(local_1c,param_2[1]);
  FUN_14001454c(local_18,param_2[2]);
  FUN_14001454c(local_14,param_2[3]);
  FUN_14001454c(local_10,param_2[4]);
  FUN_14001454c(local_c,param_2[5]);
  FUN_140020610(param_1,0x6348524d,local_28,0x20);
  return;
}



// ===== FUN_1400204c8 @ 0x1400204c8 [profile] =====

void FUN_1400204c8(longlong param_1,longlong param_2,longlong param_3)

{
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    FUN_140022480();
    FUN_14001242c(param_1,param_2,param_3);
  }
  return;
}



// ===== FUN_140020514 @ 0x140020514 [profile] =====

void FUN_140020514(longlong param_1)

{
  undefined4 uVar1;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x27c);
    *(undefined4 *)(param_1 + 0x4cc) = 0x82;
    local_resb = (undefined1)uVar1;
    local_res8 = (undefined1)((uint)uVar1 >> 0x18);
    local_res9 = (undefined1)((uint)uVar1 >> 0x10);
    local_resa = (undefined1)((uint)uVar1 >> 8);
    FUN_140022480(param_1,&local_res8,4);
  }
  return;
}



// ===== FUN_140020564 @ 0x140020564 [profile] =====

void FUN_140020564(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  undefined1 local_resc;
  undefined1 local_resd;
  undefined1 local_rese;
  undefined1 local_resf;
  
  if (param_1 != 0) {
    local_res8 = (undefined1)((uint)param_3 >> 0x18);
    local_resf = (undefined1)param_2;
    local_resb = (undefined1)param_3;
    *(undefined4 *)(param_1 + 0x4cc) = 0x22;
    local_res9 = (undefined1)((uint)param_3 >> 0x10);
    local_resa = (undefined1)((uint)param_3 >> 8);
    local_resc = (undefined1)((uint)param_2 >> 0x18);
    local_resd = (undefined1)((uint)param_2 >> 0x10);
    local_rese = (undefined1)((uint)param_2 >> 8);
    FUN_140022480(param_1,&local_res8,8);
    *(undefined4 *)(param_1 + 0x238) = param_2;
    FUN_140014528(param_1);
    FUN_14001242c(param_1,&local_resc,4);
    *(undefined4 *)(param_1 + 0x4cc) = 0x42;
  }
  return;
}



// ===== FUN_140020674 @ 0x140020674 [profile] =====

void FUN_140020674(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(param_2 + 0x10);
  puVar2 = *(undefined8 **)(param_1 + 0x1d0);
  puVar1 = (undefined8 *)(param_2 + 0x14);
  uVar4 = 0x400;
  while( true ) {
    if (uVar3 < uVar4) {
      uVar4 = uVar3;
    }
    FUN_1400204c8(param_1,puVar1,uVar4);
    uVar3 = uVar3 - uVar4;
    if ((uVar3 == 0) || (puVar2 == (undefined8 *)0x0)) break;
    uVar4 = *(uint *)(param_1 + 0x1d8);
    puVar1 = puVar2 + 1;
    puVar2 = (undefined8 *)*puVar2;
  }
  if (uVar3 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140019868(param_1,"error writing ancillary chunked compressed data");
}



// ===== FUN_1400213fc @ 0x1400213fc [profile] =====

void FUN_1400213fc(undefined8 param_1,undefined4 param_2)

{
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  undefined1 local_res13;
  
  local_res10 = (undefined1)((uint)param_2 >> 0x18);
  local_res13 = (undefined1)param_2;
  local_res11 = (undefined1)((uint)param_2 >> 0x10);
  local_res12 = (undefined1)((uint)param_2 >> 8);
  FUN_140020610(param_1,0x67414d41,&local_res10,4);
  return;
}



// ===== FUN_1400214d4 @ 0x1400214d4 [profile] =====

void FUN_1400214d4(longlong param_1,undefined8 param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_488 [96];
  byte *local_428;
  ulonglong local_420;
  int local_418;
  
  if (param_3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_140019868(param_1,"No profile for iCCP chunk");
  }
  uVar3 = (((uint)*param_3 * 0x100 + (uint)param_3[1]) * 0x100 + (uint)param_3[2]) * 0x100 +
          (uint)param_3[3];
  if (uVar3 < 0x84) {
                    /* WARNING: Subroutine does not return */
    FUN_140019868(param_1,"ICC profile too short");
  }
  if ((uVar3 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140019868(param_1,"ICC profile length invalid (not a multiple of 4)");
  }
  iVar1 = FUN_14001f3d0(param_1,param_2,local_488);
  if (iVar1 != 0) {
    local_418 = 0;
    local_488[iVar1 + 1] = 0;
    iVar1 = iVar1 + 2;
    local_428 = param_3;
    local_420 = (ulonglong)uVar3;
    iVar2 = FUN_14001fd88(param_1,0x69434350,&local_428,iVar1);
    if (iVar2 == 0) {
      FUN_140020564(param_1,0x69434350,local_418 + iVar1);
      FUN_1400204c8(param_1,local_488,iVar1);
      FUN_140020674(param_1,&local_428);
      FUN_140020514(param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140019868(param_1,*(undefined8 *)(param_1 + 0x198));
  }
                    /* WARNING: Subroutine does not return */
  FUN_140019868(param_1,"iCCP: invalid keyword");
}



// ===== FUN_140021b20 @ 0x140021b20 [profile] =====

void FUN_140021b20(longlong param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  byte local_res18 [16];
  
  if ((param_3 & 2) == 0) {
    bVar1 = param_2[3];
    if ((bVar1 == 0) || (*(byte *)(param_1 + 0x299) < bVar1)) goto LAB_140021bbf;
    lVar5 = 1;
    bVar2 = local_res18[1];
    bVar3 = local_res18[2];
  }
  else {
    lVar5 = 3;
    bVar4 = 8;
    if (param_3 != 3) {
      bVar4 = *(byte *)(param_1 + 0x299);
    }
    bVar1 = *param_2;
    if (((((bVar1 == 0) || (bVar4 < bVar1)) || (bVar2 = param_2[1], bVar2 == 0)) ||
        ((bVar4 < bVar2 || (bVar3 = param_2[2], bVar3 == 0)))) || (bVar4 < bVar3))
    goto LAB_140021bbf;
  }
  local_res18[2] = bVar3;
  local_res18[1] = bVar2;
  local_res18[0] = bVar1;
  if ((param_3 & 4) != 0) {
    bVar1 = param_2[4];
    if ((bVar1 == 0) || (*(byte *)(param_1 + 0x299) < bVar1)) {
LAB_140021bbf:
      FUN_140019e38(param_1,"Invalid sBIT depth specified");
      return;
    }
    local_res18[lVar5] = bVar1;
    lVar5 = lVar5 + 1;
  }
  FUN_140020610(param_1,0x73424954,local_res18,lVar5);
  return;
}



// ===== FUN_140021e58 @ 0x140021e58 [profile] =====

void FUN_140021e58(longlong param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  *(undefined4 *)(param_1 + 0x4cc) = 0x12;
  local_res8 = 0x474e5089;
  local_resc = 0xa1a0a0d;
  FUN_140022480(param_1,(longlong)&local_res8 + (ulonglong)*(byte *)(param_1 + 0x29d),
                (longlong)(int)(8 - (uint)*(byte *)(param_1 + 0x29d)));
  if (*(byte *)(param_1 + 0x29d) < 3) {
    *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x1000;
  }
  return;
}



// ===== FUN_140039b00 @ 0x140039b00 [profile,storage,ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_140039b00(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined1 auStackY_3a8 [32];
  ulonglong local_368;
  undefined8 uStack_360;
  ulonglong local_358;
  ulonglong local_350;
  longlong local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  ulonglong uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 ***local_308 [2];
  ulonglong local_2f8;
  ulonglong local_2f0;
  undefined8 ***local_2e8 [2];
  ulonglong local_2d8;
  ulonglong local_2d0;
  undefined8 ***local_2c8 [2];
  ulonglong local_2b8;
  ulonglong local_2b0;
  undefined8 ***local_2a8 [2];
  ulonglong local_298;
  ulonglong local_290;
  undefined8 ***local_288 [2];
  ulonglong local_278;
  ulonglong local_270;
  undefined8 ***local_268 [2];
  ulonglong local_258;
  ulonglong local_250;
  undefined8 ***local_248 [2];
  ulonglong local_238;
  ulonglong local_230;
  undefined8 ***local_228 [2];
  ulonglong local_218;
  ulonglong local_210;
  undefined8 ***local_208 [2];
  ulonglong local_1f8;
  ulonglong local_1f0;
  undefined8 ***local_1e8 [2];
  ulonglong local_1d8;
  ulonglong local_1d0;
  undefined8 ***local_1c8 [2];
  ulonglong local_1b8;
  ulonglong local_1b0;
  undefined8 ***local_1a8 [2];
  ulonglong local_198;
  ulonglong local_190;
  undefined8 ***local_188 [2];
  ulonglong local_178;
  ulonglong local_170;
  undefined8 ***local_168 [2];
  ulonglong local_158;
  ulonglong local_150;
  undefined8 ***local_148 [2];
  ulonglong local_138;
  ulonglong local_130;
  undefined8 ***local_128 [2];
  ulonglong local_118;
  ulonglong local_110;
  undefined8 ***local_108 [2];
  ulonglong local_f8;
  ulonglong local_f0;
  undefined8 ***local_e8 [2];
  ulonglong local_d8;
  ulonglong local_d0;
  short local_c8 [64];
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStackY_3a8;
  uVar7 = 0;
  FUN_140055000(param_2,param_4);
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  FUN_140054cf0(&local_348,L"<br />",6);
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_350 = 0;
  FUN_140054cf0(&local_368,L"{*B*}",5);
  FUN_140055000(local_308,param_2);
  uVar6 = uVar7;
  do {
    ppppuVar9 = local_308;
    if (7 < local_2f0) {
      ppppuVar9 = (undefined8 ****)local_308[0];
    }
    if ((local_2f8 < local_358) || (local_2f8 - local_358 < uVar6)) break;
    if (local_358 != 0) {
      lVar8 = (longlong)ppppuVar9 + local_2f8 * 2;
      lVar2 = thunk_FUN_140556fb0((longlong)ppppuVar9 + uVar6 * 2,lVar8);
      if (lVar2 == lVar8) break;
      uVar6 = lVar2 - (longlong)ppppuVar9 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_308,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_2,local_308);
  FUN_140055150(local_308);
  if (7 < local_350) {
    if ((0xfff < local_350 * 2 + 2) && (0x1f < (local_368 - *(longlong *)(local_368 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_358 = 0;
  local_350 = 7;
  local_368 = local_368 & 0xffffffffffff0000;
  if (7 < uStack_330) {
    if ((0xfff < uStack_330 * 2 + 2) && (0x1f < (local_348 - *(longlong *)(local_348 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  lVar8 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar1 = (**(code **)**(undefined8 **)(lVar8 + 0xb8))();
  plVar5 = DAT_1407915a8;
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(lVar8 + 0xb8);
  }
  (**(code **)(*plVar5 + 0xd8))();
  FUN_1400547f0(local_c8,0x40,L"<font color=\"#%08x\">");
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  lVar2 = -1;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (local_c8[lVar8] != 0);
  FUN_140054cf0(&local_348,local_c8);
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_350 = 0;
  FUN_140054cf0(&local_368,L"{*T1*}",6);
  FUN_140055000(local_2e8,param_2);
  uVar6 = uVar7;
  do {
    ppppuVar9 = local_2e8;
    if (7 < local_2d0) {
      ppppuVar9 = (undefined8 ****)local_2e8[0];
    }
    if ((local_2d8 < local_358) || (local_2d8 - local_358 < uVar6)) break;
    if (local_358 != 0) {
      lVar8 = (longlong)ppppuVar9 + local_2d8 * 2;
      lVar3 = thunk_FUN_140556fb0((longlong)ppppuVar9 + uVar6 * 2,lVar8);
      if (lVar3 == lVar8) break;
      uVar6 = lVar3 - (longlong)ppppuVar9 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_2e8,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_2,local_2e8);
  FUN_140055150(local_2e8);
  if (7 < local_350) {
    if ((0xfff < local_350 * 2 + 2) && (0x1f < (local_368 - *(longlong *)(local_368 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_358 = 0;
  local_350 = 7;
  local_368 = local_368 & 0xffffffffffff0000;
  if (7 < uStack_330) {
    if ((0xfff < uStack_330 * 2 + 2) && (0x1f < (local_348 - *(longlong *)(local_348 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  lVar8 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar1 = (**(code **)**(undefined8 **)(lVar8 + 0xb8))();
  plVar5 = DAT_1407915a8;
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(lVar8 + 0xb8);
  }
  (**(code **)(*plVar5 + 0xd8))();
  FUN_1400547f0(local_c8,0x40,L"<font color=\"#%08x\">");
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (local_c8[lVar8] != 0);
  FUN_140054cf0(&local_348,local_c8);
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_350 = 0;
  FUN_140054cf0(&local_368,L"{*T2*}",6);
  FUN_140055000(local_2c8,param_2);
  uVar6 = uVar7;
  do {
    ppppuVar9 = local_2c8;
    if (7 < local_2b0) {
      ppppuVar9 = (undefined8 ****)local_2c8[0];
    }
    if ((local_2b8 < local_358) || (local_2b8 - local_358 < uVar6)) break;
    if (local_358 != 0) {
      lVar8 = (longlong)ppppuVar9 + local_2b8 * 2;
      lVar3 = thunk_FUN_140556fb0((longlong)ppppuVar9 + uVar6 * 2,lVar8);
      if (lVar3 == lVar8) break;
      uVar6 = lVar3 - (longlong)ppppuVar9 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_2c8,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_2,local_2c8);
  FUN_140055150(local_2c8);
  if (7 < local_350) {
    if ((0xfff < local_350 * 2 + 2) && (0x1f < (local_368 - *(longlong *)(local_368 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_358 = 0;
  local_350 = 7;
  local_368 = local_368 & 0xffffffffffff0000;
  if (7 < uStack_330) {
    if ((0xfff < uStack_330 * 2 + 2) && (0x1f < (local_348 - *(longlong *)(local_348 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  lVar8 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar1 = (**(code **)**(undefined8 **)(lVar8 + 0xb8))();
  plVar5 = DAT_1407915a8;
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(lVar8 + 0xb8);
  }
  (**(code **)(*plVar5 + 0xd8))();
  FUN_1400547f0(local_c8,0x40,L"<font color=\"#%08x\">");
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (local_c8[lVar8] != 0);
  FUN_140054cf0(&local_348,local_c8);
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_350 = 0;
  FUN_140054cf0(&local_368,L"{*T3*}",6);
  FUN_140055000(local_2a8,param_2);
  uVar6 = uVar7;
  do {
    ppppuVar9 = local_2a8;
    if (7 < local_290) {
      ppppuVar9 = (undefined8 ****)local_2a8[0];
    }
    if ((local_298 < local_358) || (local_298 - local_358 < uVar6)) break;
    if (local_358 != 0) {
      lVar8 = (longlong)ppppuVar9 + local_298 * 2;
      lVar3 = thunk_FUN_140556fb0((longlong)ppppuVar9 + uVar6 * 2,lVar8);
      if (lVar3 == lVar8) break;
      uVar6 = lVar3 - (longlong)ppppuVar9 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_2a8,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_2,local_2a8);
  FUN_140055150(local_2a8);
  if (7 < local_350) {
    if ((0xfff < local_350 * 2 + 2) && (0x1f < (local_368 - *(longlong *)(local_368 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_358 = 0;
  local_350 = 7;
  local_368 = local_368 & 0xffffffffffff0000;
  if (7 < uStack_330) {
    if ((0xfff < uStack_330 * 2 + 2) && (0x1f < (local_348 - *(longlong *)(local_348 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  lVar8 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar1 = (**(code **)**(undefined8 **)(lVar8 + 0xb8))();
  plVar5 = DAT_1407915a8;
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(lVar8 + 0xb8);
  }
  (**(code **)(*plVar5 + 0xd8))();
  FUN_1400547f0(local_c8,0x40,L"</font><font color=\"#%08x\">");
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (local_c8[lVar8] != 0);
  FUN_140054cf0(&local_348,local_c8);
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_350 = 0;
  FUN_140054cf0(&local_368,L"{*ETB*}",7);
  FUN_140055000(local_288,param_2);
  uVar6 = uVar7;
  do {
    ppppuVar9 = local_288;
    if (7 < local_270) {
      ppppuVar9 = (undefined8 ****)local_288[0];
    }
    if ((local_278 < local_358) || (local_278 - local_358 < uVar6)) break;
    if (local_358 != 0) {
      lVar8 = (longlong)ppppuVar9 + local_278 * 2;
      lVar3 = thunk_FUN_140556fb0((longlong)ppppuVar9 + uVar6 * 2,lVar8);
      if (lVar3 == lVar8) break;
      uVar6 = lVar3 - (longlong)ppppuVar9 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_288,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_2,local_288);
  FUN_140055150(local_288);
  if (7 < local_350) {
    if ((0xfff < local_350 * 2 + 2) && (0x1f < (local_368 - *(longlong *)(local_368 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_358 = 0;
  local_350 = 7;
  local_368 = local_368 & 0xffffffffffff0000;
  if (7 < uStack_330) {
    if ((0xfff < uStack_330 * 2 + 2) && (0x1f < (local_348 - *(longlong *)(local_348 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  lVar8 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar1 = (**(code **)**(undefined8 **)(lVar8 + 0xb8))();
  plVar5 = DAT_1407915a8;
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(lVar8 + 0xb8);
  }
  (**(code **)(*plVar5 + 0xd8))();
  FUN_1400547f0(local_c8,0x40,L"</font><font color=\"#%08x\">");
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (local_c8[lVar8] != 0);
  FUN_140054cf0(&local_348,local_c8);
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_350 = 0;
  FUN_140054cf0(&local_368,L"{*ETW*}",7);
  FUN_140055000(local_268,param_2);
  uVar6 = uVar7;
  do {
    ppppuVar9 = local_268;
    if (7 < local_250) {
      ppppuVar9 = (undefined8 ****)local_268[0];
    }
    if ((local_258 < local_358) || (local_258 - local_358 < uVar6)) break;
    if (local_358 != 0) {
      lVar8 = (longlong)ppppuVar9 + local_258 * 2;
      lVar3 = thunk_FUN_140556fb0((longlong)ppppuVar9 + uVar6 * 2,lVar8);
      if (lVar3 == lVar8) break;
      uVar6 = lVar3 - (longlong)ppppuVar9 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_268,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_2,local_268);
  FUN_140055150(local_268);
  if (7 < local_350) {
    if ((0xfff < local_350 * 2 + 2) && (0x1f < (local_368 - *(longlong *)(local_368 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_358 = 0;
  local_350 = 7;
  local_368 = local_368 & 0xffffffffffff0000;
  if (7 < uStack_330) {
    if ((0xfff < uStack_330 * 2 + 2) && (0x1f < (local_348 - *(longlong *)(local_348 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  FUN_140054cf0(&local_348,L"</font>",7);
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_350 = 0;
  FUN_140054cf0(&local_368,L"{*EF*}",6);
  FUN_140055000(local_248,param_2);
  do {
    ppppuVar9 = local_248;
    if (7 < local_230) {
      ppppuVar9 = (undefined8 ****)local_248[0];
    }
    if ((local_238 < local_358) || (local_238 - local_358 < uVar7)) break;
    if (local_358 != 0) {
      lVar8 = (longlong)ppppuVar9 + local_238 * 2;
      lVar3 = thunk_FUN_140556fb0((longlong)ppppuVar9 + uVar7 * 2,lVar8);
      if (lVar3 == lVar8) break;
      uVar7 = lVar3 - (longlong)ppppuVar9 >> 1;
    }
    if (uVar7 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_248,uVar7);
    uVar7 = uVar7 + 1;
  } while( true );
  FUN_1400546d0(param_2,local_248);
  FUN_140055150(local_248);
  if (7 < local_350) {
    if ((0xfff < local_350 * 2 + 2) && (0x1f < (local_368 - *(longlong *)(local_368 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_358 = 0;
  local_350 = 7;
  local_368 = local_368 & 0xffffffffffff0000;
  if (7 < uStack_330) {
    if ((0xfff < uStack_330 * 2 + 2) && (0x1f < (local_348 - *(longlong *)(local_348 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  lVar8 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar1 = (**(code **)**(undefined8 **)(lVar8 + 0xb8))();
  plVar5 = DAT_1407915a8;
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(lVar8 + 0xb8);
  }
  (**(code **)(*plVar5 + 0xd8))();
  FUN_1400547f0(local_c8,0x40,L"<font color=\"#%08x\" shadowcolor=\"#%08x\">");
  local_348 = 0;
  uStack_340 = 0;
  uVar6 = 0;
  local_338 = 0;
  uStack_330 = 0;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (local_c8[lVar8] != 0);
  FUN_140054cf0(&local_348,local_c8);
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_350 = 0;
  FUN_140054cf0(&local_368,L"{*C0*}",6);
  FUN_140055000(local_228,param_2);
  do {
    ppppuVar9 = local_228;
    if (7 < local_210) {
      ppppuVar9 = (undefined8 ****)local_228[0];
    }
    if ((local_218 < local_358) || (local_218 - local_358 < uVar6)) break;
    if (local_358 != 0) {
      lVar8 = (longlong)ppppuVar9 + local_218 * 2;
      lVar3 = thunk_FUN_140556fb0((longlong)ppppuVar9 + uVar6 * 2,lVar8);
      if (lVar3 == lVar8) break;
      uVar6 = lVar3 - (longlong)ppppuVar9 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_228,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_2,local_228);
  FUN_140055150(local_228);
  if (7 < local_350) {
    if ((0xfff < local_350 * 2 + 2) && (0x1f < (local_368 - *(longlong *)(local_368 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_358 = 0;
  local_350 = 7;
  local_368 = local_368 & 0xffffffffffff0000;
  if (7 < uStack_330) {
    if ((0xfff < uStack_330 * 2 + 2) && (0x1f < (local_348 - *(longlong *)(local_348 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  lVar8 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar1 = (**(code **)**(undefined8 **)(lVar8 + 0xb8))();
  plVar5 = DAT_1407915a8;
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(lVar8 + 0xb8);
  }
  (**(code **)(*plVar5 + 0xd8))();
  FUN_1400547f0(local_c8,0x40,L"<font color=\"#%08x\" shadowcolor=\"#%08x\">");
  local_348 = 0;
  uStack_340 = 0;
  uVar6 = 0;
  local_338 = 0;
  uStack_330 = 0;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (local_c8[lVar8] != 0);
  FUN_140054cf0(&local_348,local_c8);
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_350 = 0;
  FUN_140054cf0(&local_368,L"{*C1*}",6);
  FUN_140055000(local_208,param_2);
  do {
    ppppuVar9 = local_208;
    if (7 < local_1f0) {
      ppppuVar9 = (undefined8 ****)local_208[0];
    }
    if ((local_1f8 < local_358) || (local_1f8 - local_358 < uVar6)) break;
    if (local_358 != 0) {
      lVar8 = (longlong)ppppuVar9 + local_1f8 * 2;
      lVar3 = thunk_FUN_140556fb0((longlong)ppppuVar9 + uVar6 * 2,lVar8);
      if (lVar3 == lVar8) break;
      uVar6 = lVar3 - (longlong)ppppuVar9 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_208,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_2,local_208);
  FUN_140055150(local_208);
  if (7 < local_350) {
    if ((0xfff < local_350 * 2 + 2) && (0x1f < (local_368 - *(longlong *)(local_368 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_358 = 0;
  local_350 = 7;
  local_368 = local_368 & 0xffffffffffff0000;
  if (7 < uStack_330) {
    if ((0xfff < uStack_330 * 2 + 2) && (0x1f < (local_348 - *(longlong *)(local_348 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  lVar8 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar1 = (**(code **)**(undefined8 **)(lVar8 + 0xb8))();
  plVar5 = DAT_1407915a8;
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(lVar8 + 0xb8);
  }
  (**(code **)(*plVar5 + 0xd8))();
  FUN_1400547f0(local_c8,0x40,L"<font color=\"#%08x\" shadowcolor=\"#%08x\">");
  local_348 = 0;
  uStack_340 = 0;
  uVar6 = 0;
  local_338 = 0;
  uStack_330 = 0;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (local_c8[lVar8] != 0);
  FUN_140054cf0(&local_348,local_c8);
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_350 = 0;
  FUN_140054cf0(&local_368,L"{*C2*}",6);
  FUN_140055000(local_1e8,param_2);
  do {
    ppppuVar9 = local_1e8;
    if (7 < local_1d0) {
      ppppuVar9 = (undefined8 ****)local_1e8[0];
    }
    if ((local_1d8 < local_358) || (local_1d8 - local_358 < uVar6)) break;
    if (local_358 != 0) {
      lVar8 = (longlong)ppppuVar9 + local_1d8 * 2;
      lVar3 = thunk_FUN_140556fb0((longlong)ppppuVar9 + uVar6 * 2,lVar8);
      if (lVar3 == lVar8) break;
      uVar6 = lVar3 - (longlong)ppppuVar9 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_1e8,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_2,local_1e8);
  FUN_140055150(local_1e8);
  if (7 < local_350) {
    if ((0xfff < local_350 * 2 + 2) && (0x1f < (local_368 - *(longlong *)(local_368 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_358 = 0;
  local_350 = 7;
  local_368 = local_368 & 0xffffffffffff0000;
  if (7 < uStack_330) {
    if ((0xfff < uStack_330 * 2 + 2) && (0x1f < (local_348 - *(longlong *)(local_348 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  lVar8 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar1 = (**(code **)**(undefined8 **)(lVar8 + 0xb8))();
  plVar5 = DAT_1407915a8;
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(lVar8 + 0xb8);
  }
  (**(code **)(*plVar5 + 0xd8))();
  FUN_1400547f0(local_c8,0x40,L"<font color=\"#%08x\" shadowcolor=\"#%08x\">");
  local_348 = 0;
  uStack_340 = 0;
  uVar6 = 0;
  local_338 = 0;
  uStack_330 = 0;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (local_c8[lVar8] != 0);
  FUN_140054cf0(&local_348,local_c8);
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_350 = 0;
  FUN_140054cf0(&local_368,L"{*C3*}",6);
  FUN_140055000(local_1c8,param_2);
  do {
    ppppuVar9 = local_1c8;
    if (7 < local_1b0) {
      ppppuVar9 = (undefined8 ****)local_1c8[0];
    }
    if ((local_1b8 < local_358) || (local_1b8 - local_358 < uVar6)) break;
    if (local_358 != 0) {
      lVar8 = (longlong)ppppuVar9 + local_1b8 * 2;
      lVar3 = thunk_FUN_140556fb0((longlong)ppppuVar9 + uVar6 * 2,lVar8);
      if (lVar3 == lVar8) break;
      uVar6 = lVar3 - (longlong)ppppuVar9 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_1c8,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_2,local_1c8);
  FUN_140055150(local_1c8);
  if (7 < local_350) {
    if ((0xfff < local_350 * 2 + 2) && (0x1f < (local_368 - *(longlong *)(local_368 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_358 = 0;
  local_350 = 7;
  local_368 = local_368 & 0xffffffffffff0000;
  if (7 < uStack_330) {
    if ((0xfff < uStack_330 * 2 + 2) && (0x1f < (local_348 - *(longlong *)(local_348 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  lVar8 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar1 = (**(code **)**(undefined8 **)(lVar8 + 0xb8))();
  plVar5 = DAT_1407915a8;
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(lVar8 + 0xb8);
  }
  (**(code **)(*plVar5 + 0xd8))();
  FUN_1400547f0(local_c8,0x40,L"<font color=\"#%08x\" shadowcolor=\"#%08x\">");
  local_348 = 0;
  uStack_340 = 0;
  uVar6 = 0;
  local_338 = 0;
  uStack_330 = 0;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (local_c8[lVar8] != 0);
  FUN_140054cf0(&local_348,local_c8);
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_350 = 0;
  FUN_140054cf0(&local_368,L"{*C4*}",6);
  FUN_140055000(local_1a8,param_2);
  do {
    ppppuVar9 = local_1a8;
    if (7 < local_190) {
      ppppuVar9 = (undefined8 ****)local_1a8[0];
    }
    if ((local_198 < local_358) || (local_198 - local_358 < uVar6)) break;
    if (local_358 != 0) {
      lVar8 = (longlong)ppppuVar9 + local_198 * 2;
      lVar3 = thunk_FUN_140556fb0((longlong)ppppuVar9 + uVar6 * 2,lVar8);
      if (lVar3 == lVar8) break;
      uVar6 = lVar3 - (longlong)ppppuVar9 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_1a8,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_2,local_1a8);
  FUN_140055150(local_1a8);
  if (7 < local_350) {
    if ((0xfff < local_350 * 2 + 2) && (0x1f < (local_368 - *(longlong *)(local_368 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_358 = 0;
  local_350 = 7;
  local_368 = local_368 & 0xffffffffffff0000;
  if (7 < uStack_330) {
    if ((0xfff < uStack_330 * 2 + 2) && (0x1f < (local_348 - *(longlong *)(local_348 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  lVar8 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar1 = (**(code **)**(undefined8 **)(lVar8 + 0xb8))();
  plVar5 = DAT_1407915a8;
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(lVar8 + 0xb8);
  }
  (**(code **)(*plVar5 + 0xd8))();
  FUN_1400547f0(local_c8,0x40,L"<font color=\"#%08x\" shadowcolor=\"#%08x\">");
  local_348 = 0;
  uStack_340 = 0;
  uVar6 = 0;
  local_338 = 0;
  uStack_330 = 0;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (local_c8[lVar8] != 0);
  FUN_140054cf0(&local_348,local_c8);
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_350 = 0;
  FUN_140054cf0(&local_368,L"{*C5*}",6);
  FUN_140055000(local_188,param_2);
  do {
    ppppuVar9 = local_188;
    if (7 < local_170) {
      ppppuVar9 = (undefined8 ****)local_188[0];
    }
    if ((local_178 < local_358) || (local_178 - local_358 < uVar6)) break;
    if (local_358 != 0) {
      lVar8 = (longlong)ppppuVar9 + local_178 * 2;
      lVar3 = thunk_FUN_140556fb0((longlong)ppppuVar9 + uVar6 * 2,lVar8);
      if (lVar3 == lVar8) break;
      uVar6 = lVar3 - (longlong)ppppuVar9 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_188,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_2,local_188);
  FUN_140055150(local_188);
  if (7 < local_350) {
    if ((0xfff < local_350 * 2 + 2) && (0x1f < (local_368 - *(longlong *)(local_368 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_358 = 0;
  local_350 = 7;
  local_368 = local_368 & 0xffffffffffff0000;
  if (7 < uStack_330) {
    if ((0xfff < uStack_330 * 2 + 2) && (0x1f < (local_348 - *(longlong *)(local_348 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  lVar8 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar1 = (**(code **)**(undefined8 **)(lVar8 + 0xb8))();
  plVar5 = DAT_1407915a8;
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(lVar8 + 0xb8);
  }
  (**(code **)(*plVar5 + 0xd8))();
  FUN_1400547f0(local_c8,0x40,L"<font color=\"#%08x\" shadowcolor=\"#%08x\">");
  local_348 = 0;
  uStack_340 = 0;
  uVar6 = 0;
  local_338 = 0;
  uStack_330 = 0;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (local_c8[lVar8] != 0);
  FUN_140054cf0(&local_348,local_c8);
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_350 = 0;
  FUN_140054cf0(&local_368,L"{*C6*}",6);
  FUN_140055000(local_168,param_2);
  do {
    ppppuVar9 = local_168;
    if (7 < local_150) {
      ppppuVar9 = (undefined8 ****)local_168[0];
    }
    if ((local_158 < local_358) || (local_158 - local_358 < uVar6)) break;
    if (local_358 != 0) {
      lVar8 = (longlong)ppppuVar9 + local_158 * 2;
      lVar3 = thunk_FUN_140556fb0((longlong)ppppuVar9 + uVar6 * 2,lVar8);
      if (lVar3 == lVar8) break;
      uVar6 = lVar3 - (longlong)ppppuVar9 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_168,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_2,local_168);
  FUN_140055150(local_168);
  if (7 < local_350) {
    if ((0xfff < local_350 * 2 + 2) && (0x1f < (local_368 - *(longlong *)(local_368 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_358 = 0;
  local_350 = 7;
  local_368 = local_368 & 0xffffffffffff0000;
  if (7 < uStack_330) {
    if ((0xfff < uStack_330 * 2 + 2) && (0x1f < (local_348 - *(longlong *)(local_348 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  lVar8 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar1 = (**(code **)**(undefined8 **)(lVar8 + 0xb8))();
  plVar5 = DAT_1407915a8;
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(lVar8 + 0xb8);
  }
  (**(code **)(*plVar5 + 0xd8))();
  FUN_1400547f0(local_c8,0x40,L"<font color=\"#%08x\" shadowcolor=\"#%08x\">");
  local_348 = 0;
  uStack_340 = 0;
  uVar6 = 0;
  local_338 = 0;
  uStack_330 = 0;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (local_c8[lVar8] != 0);
  FUN_140054cf0(&local_348,local_c8);
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_350 = 0;
  FUN_140054cf0(&local_368,L"{*C7*}",6);
  FUN_140055000(local_148,param_2);
  do {
    ppppuVar9 = local_148;
    if (7 < local_130) {
      ppppuVar9 = (undefined8 ****)local_148[0];
    }
    if ((local_138 < local_358) || (local_138 - local_358 < uVar6)) break;
    if (local_358 != 0) {
      lVar8 = (longlong)ppppuVar9 + local_138 * 2;
      lVar3 = thunk_FUN_140556fb0((longlong)ppppuVar9 + uVar6 * 2,lVar8);
      if (lVar3 == lVar8) break;
      uVar6 = lVar3 - (longlong)ppppuVar9 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_148,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_2,local_148);
  FUN_140055150(local_148);
  if (7 < local_350) {
    if ((0xfff < local_350 * 2 + 2) && (0x1f < (local_368 - *(longlong *)(local_368 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_358 = 0;
  local_350 = 7;
  local_368 = local_368 & 0xffffffffffff0000;
  if (7 < uStack_330) {
    if ((0xfff < uStack_330 * 2 + 2) && (0x1f < (local_348 - *(longlong *)(local_348 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  lVar8 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar1 = (**(code **)**(undefined8 **)(lVar8 + 0xb8))();
  plVar5 = DAT_1407915a8;
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(lVar8 + 0xb8);
  }
  (**(code **)(*plVar5 + 0xd8))();
  FUN_1400547f0(local_c8,0x40,L"<font color=\"#%08x\" shadowcolor=\"#%08x\">");
  local_348 = 0;
  uStack_340 = 0;
  uVar6 = 0;
  local_338 = 0;
  uStack_330 = 0;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (local_c8[lVar8] != 0);
  FUN_140054cf0(&local_348,local_c8);
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_350 = 0;
  FUN_140054cf0(&local_368,L"{*C8*}",6);
  FUN_140055000(local_128,param_2);
  do {
    ppppuVar9 = local_128;
    if (7 < local_110) {
      ppppuVar9 = (undefined8 ****)local_128[0];
    }
    if ((local_118 < local_358) || (local_118 - local_358 < uVar6)) break;
    if (local_358 != 0) {
      lVar8 = (longlong)ppppuVar9 + local_118 * 2;
      lVar3 = thunk_FUN_140556fb0((longlong)ppppuVar9 + uVar6 * 2,lVar8);
      if (lVar3 == lVar8) break;
      uVar6 = lVar3 - (longlong)ppppuVar9 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_128,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_2,local_128);
  FUN_140055150(local_128);
  if (7 < local_350) {
    if ((0xfff < local_350 * 2 + 2) && (0x1f < (local_368 - *(longlong *)(local_368 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_358 = 0;
  local_350 = 7;
  local_368 = local_368 & 0xffffffffffff0000;
  if (7 < uStack_330) {
    if ((0xfff < uStack_330 * 2 + 2) && (0x1f < (local_348 - *(longlong *)(local_348 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  lVar8 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar1 = (**(code **)**(undefined8 **)(lVar8 + 0xb8))();
  plVar5 = DAT_1407915a8;
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(lVar8 + 0xb8);
  }
  (**(code **)(*plVar5 + 0xd8))();
  FUN_1400547f0(local_c8,0x40,L"<font color=\"#%08x\" shadowcolor=\"#%08x\">");
  local_348 = 0;
  uStack_340 = 0;
  uVar6 = 0;
  local_338 = 0;
  uStack_330 = 0;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (local_c8[lVar8] != 0);
  FUN_140054cf0(&local_348,local_c8);
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_350 = 0;
  FUN_140054cf0(&local_368,L"{*C9*}",6);
  FUN_140055000(local_108,param_2);
  do {
    ppppuVar9 = local_108;
    if (7 < local_f0) {
      ppppuVar9 = (undefined8 ****)local_108[0];
    }
    if ((local_f8 < local_358) || (local_f8 - local_358 < uVar6)) break;
    if (local_358 != 0) {
      lVar8 = (longlong)ppppuVar9 + local_f8 * 2;
      lVar3 = thunk_FUN_140556fb0((longlong)ppppuVar9 + uVar6 * 2,lVar8);
      if (lVar3 == lVar8) break;
      uVar6 = lVar3 - (longlong)ppppuVar9 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_108,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
  FUN_1400546d0(param_2,local_108);
  FUN_140055150(local_108);
  if (7 < local_350) {
    if ((0xfff < local_350 * 2 + 2) && (0x1f < (local_368 - *(longlong *)(local_368 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_358 = 0;
  local_350 = 7;
  local_368 = local_368 & 0xffffffffffff0000;
  if (7 < uStack_330) {
    if ((0xfff < uStack_330 * 2 + 2) && (0x1f < (local_348 - *(longlong *)(local_348 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  lVar8 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar1 = (**(code **)**(undefined8 **)(lVar8 + 0xb8))();
  plVar5 = DAT_1407915a8;
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(lVar8 + 0xb8);
  }
  (**(code **)(*plVar5 + 0xd8))();
  FUN_1400547f0(local_c8,0x40,L"<font color=\"#%08x\" shadowcolor=\"#%08x\">");
  local_348 = 0;
  uStack_340 = 0;
  uVar6 = 0;
  local_338 = 0;
  uStack_330 = 0;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (local_c8[lVar8] != 0);
  FUN_140054cf0(&local_348,local_c8);
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_350 = 0;
  FUN_140054cf0(&local_368,L"{*CA*}",6);
  FUN_140055000(local_e8,param_2);
  do {
    ppppuVar9 = local_e8;
    if (7 < local_d0) {
      ppppuVar9 = (undefined8 ****)local_e8[0];
    }
    if ((local_d8 < local_358) || (local_d8 - local_358 < uVar6)) goto LAB_14003c20e;
    if (local_358 != 0) {
      lVar8 = (longlong)ppppuVar9 + local_d8 * 2;
      lVar3 = thunk_FUN_140556fb0((longlong)ppppuVar9 + uVar6 * 2,lVar8);
      if (lVar3 == lVar8) {
LAB_14003c20e:
        FUN_1400546d0(param_2,local_e8);
        FUN_140055150(local_e8);
        if (7 < local_350) {
          if ((0xfff < local_350 * 2 + 2) && (0x1f < (local_368 - *(longlong *)(local_368 - 8)) - 8)
             ) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          thunk_FUN_1401fe000();
        }
        local_358 = 0;
        local_350 = 7;
        local_368 = local_368 & 0xffffffffffff0000;
        if (7 < uStack_330) {
          if ((0xfff < uStack_330 * 2 + 2) &&
             (0x1f < (local_348 - *(longlong *)(local_348 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          thunk_FUN_1401fe000();
        }
        lVar8 = *(longlong *)(DAT_140790e60 + 0x238);
        cVar1 = (**(code **)**(undefined8 **)(lVar8 + 0xb8))();
        plVar5 = DAT_1407915a8;
        if (cVar1 != '\0') {
          plVar5 = *(longlong **)(lVar8 + 0xb8);
        }
        lVar8 = (**(code **)(*plVar5 + 0xd8))();
        FUN_1400547f0(local_c8,0x40,L"<font color=\"#%08x\" shadowcolor=\"#%08x\">",
                      *(undefined4 *)(lVar8 + 0x410));
        local_328 = 0;
        uStack_320 = 0;
        local_318 = 0;
        uStack_310 = 0;
        do {
          lVar2 = lVar2 + 1;
        } while (local_c8[lVar2] != 0);
        FUN_140054cf0(&local_328,local_c8,lVar2);
        local_348 = 0;
        uStack_340 = 0;
        local_338 = 0;
        uStack_330 = 0;
        FUN_140054cf0(&local_348,L"{*CB*}",6);
        FUN_140055000(&local_368,param_2);
        for (lVar8 = FUN_14027aeb0(&local_368,&local_348,0); lVar8 != -1;
            lVar8 = FUN_14027aeb0(&local_368,&local_348,lVar8 + 1)) {
          FUN_1400a4720(&local_368,lVar8,local_338,&local_328);
        }
        FUN_1400546d0(param_2,&local_368);
        FUN_140055150(&local_368);
        FUN_140055150(&local_348);
        uVar10 = FUN_140055150(&local_328);
        uVar10 = FUN_140039aa0(uVar10,0x105);
        FUN_1400547f0(local_c8,0x40,L"<font color=\"#%08x\" shadowcolor=\"#%08x\">",uVar10);
        FUN_140054de0(&local_348,local_c8);
        FUN_140054de0(&local_328,L"{*CC*}");
        uVar4 = FUN_140315a50(&local_368,param_2,&local_328,&local_348);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_368);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_348);
        uVar10 = FUN_140039aa0(uVar10,0x106);
        FUN_1400547f0(local_c8,0x40,L"<font color=\"#%08x\" shadowcolor=\"#%08x\">",uVar10);
        FUN_140054de0(&local_348,local_c8);
        FUN_140054de0(&local_328,L"{*CD*}");
        uVar4 = FUN_140315a50(&local_368,param_2,&local_328,&local_348);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_368);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_348);
        uVar10 = FUN_140039aa0(uVar10,0x107);
        FUN_1400547f0(local_c8,0x40,L"<font color=\"#%08x\" shadowcolor=\"#%08x\">",uVar10);
        FUN_140054de0(&local_348,local_c8);
        FUN_140054de0(&local_328,L"{*CE*}");
        uVar4 = FUN_140315a50(&local_368,param_2,&local_328,&local_348);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_368);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_348);
        uVar10 = FUN_140039aa0(uVar10,0x108);
        FUN_1400547f0(local_c8,0x40,L"<font color=\"#%08x\" shadowcolor=\"#%08x\">",uVar10);
        FUN_140054de0(&local_348,local_c8);
        FUN_140054de0(&local_328,L"{*CF*}");
        uVar4 = FUN_140315a50(&local_368,param_2,&local_328,&local_348);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_368);
        FUN_140055150(&local_328);
        FUN_140055150(&local_348);
        cVar1 = FUN_140034720(&DAT_1407bb5d0,param_3,0xb);
        if (cVar1 == '\0') {
          uVar4 = FUN_14003d6b0(extraout_XMM0_Da,&local_368,param_3,0x1a);
          FUN_140054de0(&local_328,L"{*CONTROLLER_ACTION_MOVE*}");
          uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
          FUN_1400546d0(param_2,uVar4);
          FUN_140055150(&local_348);
          FUN_140055150(&local_328);
          uVar10 = FUN_140055150(&local_368);
          uVar4 = FUN_14003d6b0(uVar10,&local_368,param_3,0x1c);
          FUN_140054de0(&local_328,L"{*CONTROLLER_ACTION_LOOK*}");
          uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
          FUN_1400546d0(param_2,uVar4);
          FUN_140055150(&local_348);
          FUN_140055150(&local_328);
          uVar10 = FUN_140055150(&local_368);
          uVar4 = FUN_14003d9d0(uVar10,&local_368,0x5823);
          FUN_140054de0(&local_328,L"{*CONTROLLER_MENU_NAVIGATE*}");
          uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
          FUN_1400546d0(param_2,uVar4);
          FUN_140055150(&local_348);
          FUN_140055150(&local_328);
        }
        else {
          uVar4 = FUN_14003d6b0(extraout_XMM0_Da,&local_368,param_3,0x1c);
          FUN_140054de0(&local_328,L"{*CONTROLLER_ACTION_MOVE*}");
          uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
          FUN_1400546d0(param_2,uVar4);
          FUN_140055150(&local_348);
          FUN_140055150(&local_328);
          uVar10 = FUN_140055150(&local_368);
          uVar4 = FUN_14003d6b0(uVar10,&local_368,param_3,0x1a);
          FUN_140054de0(&local_328,L"{*CONTROLLER_ACTION_LOOK*}");
          uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
          FUN_1400546d0(param_2,uVar4);
          FUN_140055150(&local_348);
          FUN_140055150(&local_328);
          uVar10 = FUN_140055150(&local_368);
          uVar4 = FUN_14003d9d0(uVar10,&local_368,0x5833);
          FUN_140054de0(&local_328,L"{*CONTROLLER_MENU_NAVIGATE*}");
          uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
          FUN_1400546d0(param_2,uVar4);
          FUN_140055150(&local_348);
          FUN_140055150(&local_328);
        }
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d6b0(uVar10,&local_368,param_3,0x16);
        FUN_140054de0(&local_328,L"{*CONTROLLER_ACTION_JUMP*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d6b0(uVar10,&local_368,param_3,0x26);
        FUN_140054de0(&local_328,L"{*CONTROLLER_ACTION_SNEAK*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d6b0(uVar10,&local_368,param_3,0x1f);
        FUN_140054de0(&local_328,L"{*CONTROLLER_ACTION_USE*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d6b0(uVar10,&local_368,param_3,0x20);
        FUN_140054de0(&local_328,L"{*CONTROLLER_ACTION_ACTION*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d6b0(uVar10,&local_368,param_3,0x21);
        FUN_140054de0(&local_328,L"{*CONTROLLER_ACTION_LEFT_SCROLL*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d6b0(uVar10,&local_368,param_3,0x22);
        FUN_140054de0(&local_328,L"{*CONTROLLER_ACTION_RIGHT_SCROLL*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d6b0(uVar10,&local_368,param_3,0x23);
        FUN_140054de0(&local_328,L"{*CONTROLLER_ACTION_INVENTORY*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d6b0(uVar10,&local_368,param_3,0x27);
        FUN_140054de0(&local_328,L"{*CONTROLLER_ACTION_CRAFTING*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d6b0(uVar10,&local_368,param_3,0x25);
        FUN_140054de0(&local_328,L"{*CONTROLLER_ACTION_DROP*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d6b0(uVar10,&local_368,param_3,0x28);
        FUN_140054de0(&local_328,L"{*CONTROLLER_ACTION_CAMERA*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d6b0(uVar10,&local_368,param_3,9);
        FUN_140054de0(&local_328,L"{*CONTROLLER_ACTION_MENU_PAGEDOWN*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d6b0(uVar10,&local_368,param_3,0x26);
        FUN_140054de0(&local_328,L"{*CONTROLLER_ACTION_DISMOUNT*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d9d0(uVar10,&local_368,0x5800);
        FUN_140054de0(&local_328,L"{*CONTROLLER_VK_A*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d9d0(uVar10,&local_368,0x5801);
        FUN_140054de0(&local_328,L"{*CONTROLLER_VK_B*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d9d0(uVar10,&local_368,0x5802);
        FUN_140054de0(&local_328,L"{*CONTROLLER_VK_X*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d9d0(uVar10,&local_368,0x5803);
        FUN_140054de0(&local_328,L"{*CONTROLLER_VK_Y*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d9d0(uVar10,&local_368,0x5805);
        FUN_140054de0(&local_328,L"{*CONTROLLER_VK_LB*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d9d0(uVar10,&local_368,0x5804);
        FUN_140054de0(&local_328,L"{*CONTROLLER_VK_RB*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d9d0(uVar10,&local_368,0x5820);
        FUN_140054de0(&local_328,L"{*CONTROLLER_VK_LS*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d9d0(uVar10,&local_368,0x5830);
        FUN_140054de0(&local_328,L"{*CONTROLLER_VK_RS*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d9d0(uVar10,&local_368,0x5806);
        FUN_140054de0(&local_328,L"{*CONTROLLER_VK_LT*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d9d0(uVar10,&local_368,0x5807);
        FUN_140054de0(&local_328,L"{*CONTROLLER_VK_RT*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003dc50(uVar10,&local_368,1);
        FUN_140054de0(&local_328,L"{*ICON_SHANK_01*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003dc50(uVar10,&local_368,3);
        FUN_140054de0(&local_328,L"{*ICON_SHANK_03*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d6b0(uVar10,&local_368,param_3,0x2c);
        FUN_140054de0(&local_328,L"{*CONTROLLER_ACTION_DPAD_UP*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d6b0(uVar10,&local_368,param_3,0x2d);
        FUN_140054de0(&local_328,L"{*CONTROLLER_ACTION_DPAD_DOWN*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d6b0(uVar10,&local_368,param_3,0x2b);
        FUN_140054de0(&local_328,L"{*CONTROLLER_ACTION_DPAD_RIGHT*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        uVar10 = FUN_140055150(&local_368);
        uVar4 = FUN_14003d6b0(uVar10,&local_368,param_3,0x2a);
        FUN_140054de0(&local_328,L"{*CONTROLLER_ACTION_DPAD_LEFT*}");
        uVar4 = FUN_140315a50(&local_348,param_2,&local_328,uVar4);
        FUN_1400546d0(param_2,uVar4);
        FUN_140055150(&local_348);
        FUN_140055150(&local_328);
        FUN_140055150(&local_368);
        return param_2;
      }
      uVar6 = lVar3 - (longlong)ppppuVar9 >> 1;
    }
    if (uVar6 == 0xffffffffffffffff) goto LAB_14003c20e;
    FUN_1400a47c0(local_e8,uVar6);
    uVar6 = uVar6 + 1;
  } while( true );
}



// ===== FUN_1400453a0 @ 0x1400453a0 [profile,storage,ui,render] =====

void FUN_1400453a0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 != (undefined8 *)param_1[2]) {
    *puVar5 = *param_2;
    param_1[1] = param_1[1] + 8;
    return;
  }
  lVar7 = (longlong)puVar5 - *param_1 >> 3;
  if (lVar7 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140050870();
  }
  uVar4 = param_1[2] - *param_1 >> 3;
  uVar1 = lVar7 + 1;
  if (0x1fffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar6 = 0x1fffffffffffffff;
  }
  else {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar6 = uVar1;
    if (uVar1 <= uVar4) {
      uVar6 = uVar4;
    }
    if (0x1fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_140054fe0();
    }
  }
  lVar3 = FUN_140054e60(uVar6 * 8);
  *(undefined8 *)(lVar3 + lVar7 * 8) = *param_2;
  puVar2 = (undefined8 *)*param_1;
  if (puVar5 == (undefined8 *)param_1[1]) {
    lVar8 = param_1[1] - (longlong)puVar2;
    lVar7 = lVar3;
    puVar5 = puVar2;
  }
  else {
    FUN_140596110(lVar3,puVar2,(longlong)puVar5 - (longlong)puVar2);
    lVar8 = param_1[1] - (longlong)puVar5;
    lVar7 = lVar3 + (lVar7 + 1) * 8;
  }
  FUN_140596110(lVar7,puVar5,lVar8);
  FUN_140051010(param_1,lVar3,uVar1,uVar6);
  return;
}



// ===== FUN_140047fd0 @ 0x140047fd0 [profile,storage,ui] =====

undefined8 * FUN_140047fd0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 != (undefined8 *)param_1[2]) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    uVar15 = param_2[1];
    *puVar3 = *param_2;
    puVar3[1] = uVar15;
    uVar15 = param_2[3];
    puVar3[2] = param_2[2];
    puVar3[3] = uVar15;
    param_2[2] = 0;
    param_2[3] = 7;
    *(undefined2 *)param_2 = 0;
    puVar3 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar3 + 4);
    return puVar3;
  }
  lVar12 = (longlong)puVar3 - *param_1 >> 5;
  if (lVar12 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140050870();
  }
  uVar8 = param_1[2] - *param_1 >> 5;
  uVar1 = lVar12 + 1;
  if (0x7ffffffffffffff - (uVar8 >> 1) < uVar8) {
    uVar11 = 0x7ffffffffffffff;
  }
  else {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar11 = uVar1;
    if (uVar1 <= uVar8) {
      uVar11 = uVar8;
    }
    if (0x7ffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_140054fe0();
    }
  }
  puVar7 = (undefined8 *)FUN_140054e60(uVar11 << 5);
  uVar15 = 0;
  puVar13 = puVar7 + lVar12 * 4;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar2 = puVar13 + 4;
  puVar13[3] = 0;
  uVar4 = *(undefined4 *)((longlong)param_2 + 4);
  uVar5 = *(undefined4 *)(param_2 + 1);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)puVar13 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)puVar13 + 4) = uVar4;
  *(undefined4 *)(puVar13 + 1) = uVar5;
  *(undefined4 *)((longlong)puVar13 + 0xc) = uVar6;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 3);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(puVar13 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)puVar13 + 0x14) = uVar4;
  *(undefined4 *)(puVar13 + 3) = uVar5;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar6;
  param_2[2] = 0;
  param_2[3] = 7;
  *(undefined2 *)param_2 = 0;
  puVar10 = (undefined8 *)param_1[1];
  puVar9 = (undefined8 *)*param_1;
  puVar14 = puVar7;
  local_58 = param_1;
  local_48 = uVar11;
  local_40 = puVar13;
  local_38 = puVar2;
  if (puVar3 != puVar10) {
    FUN_14004c270((undefined8 *)*param_1,puVar3,puVar7);
    puVar10 = (undefined8 *)param_1[1];
    puVar9 = puVar3;
    puVar14 = puVar2;
    local_40 = puVar7;
  }
  FUN_14004c270(puVar9,puVar10,puVar14);
  local_50 = uVar15;
  FUN_140051150(param_1,puVar7,uVar1,uVar11);
  FUN_1400510b0(&local_58);
  return puVar13;
}



// ===== FUN_140048ae0 @ 0x140048ae0 [profile,storage,ui] =====

void FUN_140048ae0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_140555ca8("invalid vector subscript");
}



// ===== FUN_140048d20 @ 0x140048d20 [profile,storage,ui,render] =====

undefined8 * FUN_140048d20(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[2];
  if (param_3 <= (ulonglong)(param_1[3] - lVar1)) {
    param_1[2] = lVar1 + param_3;
    puVar2 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    FUN_140596110((longlong)puVar2 + lVar1 * 2,param_2,param_3 * 2);
    *(undefined2 *)((longlong)puVar2 + (lVar1 + param_3) * 2) = 0;
    return param_1;
  }
  puVar2 = (undefined8 *)FUN_1400494e0(param_1,param_3,param_3,param_2,param_3);
  return puVar2;
}



// ===== FUN_140048da0 @ 0x140048da0 [profile,storage,ui,render] =====

undefined8 *
FUN_140048da0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,longlong param_7)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = 7;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_5 + param_7;
  puVar2 = param_1;
  if (7 < uVar1) {
    uVar4 = uVar1 | 7;
    if (uVar4 < 0x7fffffffffffffff) {
      if (uVar4 < 10) {
        uVar4 = 10;
      }
      uVar3 = uVar4 + 1;
      if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_140054fe0();
      }
    }
    else {
      uVar3 = 0x7fffffffffffffff;
      uVar4 = 0x7ffffffffffffffe;
    }
    puVar2 = (undefined8 *)FUN_140054e60(uVar3 * 2);
    *param_1 = puVar2;
  }
  param_1[3] = uVar4;
  param_1[2] = uVar1;
  FUN_140596110(puVar2,param_4,param_5 * 2);
  FUN_140596110(param_5 * 2 + (longlong)puVar2,param_6,param_7 * 2);
  *(undefined2 *)((longlong)puVar2 + uVar1 * 2) = 0;
  return param_1;
}



// ===== FUN_1400545e0 @ 0x1400545e0 [profile,storage] =====

ulonglong FUN_1400545e0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar2 = param_1[2];
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  uVar3 = uVar2;
  if (uVar1 < uVar2) {
    uVar3 = uVar1;
  }
  uVar3 = FUN_140054430(param_1,param_2,uVar3);
  if ((int)uVar3 == 0) {
    if (uVar2 < uVar1) {
      return 0xffffffff;
    }
    uVar3 = (ulonglong)(uVar1 < uVar2);
  }
  return uVar3;
}



// ===== FUN_140054e40 @ 0x140054e40 [profile,storage,ui,render] =====

void FUN_140054e40(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_140555c84("string too long");
}



// ===== FUN_140054e60 @ 0x140054e60 [profile,storage,ui,render] =====

ulonglong FUN_140054e60(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 < 0x1000) {
    uVar2 = FUN_140558c80();
    return uVar2;
  }
  if (param_1 + 0x27 <= param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_140054fe0();
  }
  lVar1 = FUN_140558c80(param_1 + 0x27);
  if (lVar1 != 0) {
    uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



// ===== FUN_140059e60 @ 0x140059e60 [profile,storage,render] =====

undefined8 *
FUN_140059e60(undefined8 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  uVar2 = param_1[2];
  if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140051220();
  }
  if (param_1[3] - uVar2 < param_4) {
    puVar3 = (undefined8 *)FUN_140059f70(param_1,param_4,uVar2,param_2,param_3,param_4);
    return puVar3;
  }
  param_1[2] = uVar2 + param_4;
  puVar3 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar3 = (undefined8 *)*param_1;
  }
  uVar1 = (longlong)puVar3 + param_2 * 2;
  uVar4 = param_4;
  if ((uVar1 < param_3 + param_4 * 2) && (param_3 <= (longlong)puVar3 + uVar2 * 2)) {
    if (param_3 < uVar1) {
      uVar4 = (longlong)(uVar1 - param_3) >> 1;
    }
    else {
      uVar4 = 0;
    }
  }
  FUN_140596110(param_4 * 2 + uVar1,uVar1,(uVar2 - param_2) * 2 + 2);
  FUN_140596110(uVar1,param_3,uVar4 * 2);
  FUN_140596110(uVar4 * 2 + uVar1,param_3 + (uVar4 + param_4) * 2,(param_4 - uVar4) * 2);
  return param_1;
}



// ===== FUN_14005e650 @ 0x14005e650 [profile,storage,render] =====

longlong * FUN_14005e650(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 == param_3) {
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
  }
  else {
    uVar4 = param_3 - param_2 >> 1;
    if (0x7ffffffffffffffe < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_140054e40();
    }
    if (uVar4 < 8) {
      param_1[2] = uVar4;
      param_1[3] = 7;
      FUN_140596110(0,param_2,uVar4 * 2);
      *(undefined2 *)(uVar4 * 2 + (longlong)param_1) = 0;
    }
    else {
      uVar1 = uVar4 | 7;
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
      param_1[2] = uVar4;
      *param_1 = lVar2;
      param_1[3] = uVar1;
      FUN_140596110(lVar2,param_2,uVar4 * 2);
      *(undefined2 *)(uVar4 * 2 + lVar2) = 0;
    }
  }
  return param_1;
}



// ===== FUN_14006bcb0 @ 0x14006bcb0 [profile] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14006bcb0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 ****ppppuVar4;
  ulonglong uVar5;
  undefined1 auStackY_108 [32];
  ulonglong local_c8 [4];
  undefined8 ***local_a8 [2];
  ulonglong local_98;
  ulonglong local_90;
  undefined8 ***local_88 [2];
  ulonglong local_78;
  ulonglong local_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStackY_108;
  uVar3 = 0;
  FUN_140055000();
  FUN_14005e770(local_68,param_3[1]);
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  FUN_140054cf0(local_c8,L"{*progress*}",0xc);
  FUN_140055000(local_a8,param_1);
  uVar5 = uVar3;
  do {
    ppppuVar4 = local_a8;
    if (7 < local_90) {
      ppppuVar4 = (undefined8 ****)local_a8[0];
    }
    if ((local_98 < local_c8[2]) || (local_98 - local_c8[2] < uVar5)) break;
    if (local_c8[2] != 0) {
      lVar1 = (longlong)ppppuVar4 + local_98 * 2;
      lVar2 = thunk_FUN_140556fb0((longlong)ppppuVar4 + uVar5 * 2,lVar1);
      if (lVar2 == lVar1) break;
      uVar5 = lVar2 - (longlong)ppppuVar4 >> 1;
    }
    if (uVar5 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_a8,uVar5);
    uVar5 = uVar5 + 1;
  } while( true );
  FUN_1400546d0(param_1,local_a8);
  FUN_140055150(local_a8);
  if (7 < local_c8[3]) {
    if ((0xfff < local_c8[3] * 2 + 2) && (0x1f < (local_c8[0] - *(longlong *)(local_c8[0] - 8)) - 8)
       ) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_c8[2] = 0;
  local_c8[3] = 7;
  local_c8[0] = local_c8[0] & 0xffffffffffff0000;
  FUN_140055150(local_68);
  FUN_14005e770(local_68,*param_3);
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  FUN_140054cf0(local_c8,L"{*goal*}",8);
  FUN_140055000(local_88,param_1);
  do {
    ppppuVar4 = local_88;
    if (7 < local_70) {
      ppppuVar4 = (undefined8 ****)local_88[0];
    }
    if ((local_78 < local_c8[2]) || (local_78 - local_c8[2] < uVar3)) goto LAB_14006bf41;
    if (local_c8[2] != 0) {
      lVar1 = (longlong)ppppuVar4 + local_78 * 2;
      lVar2 = thunk_FUN_140556fb0((longlong)ppppuVar4 + uVar3 * 2,lVar1);
      if (lVar2 == lVar1) {
LAB_14006bf41:
        FUN_1400546d0(param_1,local_88);
        FUN_140055150(local_88);
        if (7 < local_c8[3]) {
          if ((0xfff < local_c8[3] * 2 + 2) &&
             (0x1f < (local_c8[0] - *(longlong *)(local_c8[0] - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          thunk_FUN_1401fe000();
        }
        local_c8[2] = 0;
        local_c8[3] = 7;
        local_c8[0] = local_c8[0] & 0xffffffffffff0000;
        FUN_140055150(local_68);
        return param_1;
      }
      uVar3 = lVar2 - (longlong)ppppuVar4 >> 1;
    }
    if (uVar3 == 0xffffffffffffffff) goto LAB_14006bf41;
    FUN_1400a47c0(local_88,uVar3);
    uVar3 = uVar3 + 1;
  } while( true );
}



// ===== FUN_14006ffc0 @ 0x14006ffc0 [profile] =====

undefined ** FUN_14006ffc0(char *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  code *pcVar2;
  undefined **ppuVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 local_18 [16];
  
  if (*param_1 != '\0') {
    pcVar2 = (code *)swi(3);
    ppuVar3 = (undefined **)(*pcVar2)();
    return ppuVar3;
  }
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
  lVar4 = FUN_1400490c0(param_1 + 8,local_18,param_2,uVar7);
  lVar4 = *(longlong *)(lVar4 + 8);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar4 == *(longlong *)(param_1 + 0x10)) {
    ppuVar3 = &PTR_140610690;
  }
  else {
    ppuVar3 = (undefined **)(lVar4 + 0x30);
    if (7 < *(ulonglong *)(lVar4 + 0x48)) {
      return (undefined **)*ppuVar3;
    }
  }
  return ppuVar3;
}



// ===== FUN_140078f10 @ 0x140078f10 [profile] =====

void FUN_140078f10(void)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = 1;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 2;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 3;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 4;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 5;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 6;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 7;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 8;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 9;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 10;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xb;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xc;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xd;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xe;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xf;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x10;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x11;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x12;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x25;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x26;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x27;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x28;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x29;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x2a;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x2b;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x2c;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x2d;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x2e;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x2f;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x30;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x31;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x32;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x33;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x34;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x35;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x36;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x37;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x38;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x39;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x3a;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x3b;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x3c;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x3d;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x3f;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x3e;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x40;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x41;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x42;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x43;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x44;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x45;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x46;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x47;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x48;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x49;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x4a;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x4b;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x4c;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x4d;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x4e;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x4f;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x50;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x51;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x52;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x53;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x54;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x55;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x56;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x57;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x58;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x59;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x5a;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x5b;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x5c;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x5d;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x5e;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x5f;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x61;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x60;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x62;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 99;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 100;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x65;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x66;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x67;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x68;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x69;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x6a;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x6b;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x6c;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x6d;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x6e;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x6f;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x70;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x71;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x72;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x73;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x74;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x75;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x76;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x77;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x78;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x79;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x7a;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x7b;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x7c;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x7d;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x7e;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x7f;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x80;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x81;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x82;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x83;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x84;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x85;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x86;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x87;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x88;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x89;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x8a;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x8b;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x8c;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x8d;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x8e;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x8f;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x90;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x91;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x92;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x93;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x94;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x95;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x96;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x97;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x98;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x99;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x9a;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x9b;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x9c;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x9d;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x9e;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x9f;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xa0;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xa1;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xa2;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xa7;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xa8;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xa9;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xaa;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xab;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xac;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xad;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xae;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xaf;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xb0;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xb1;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xb2;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xb3;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xb4;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xb5;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xb6;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xb7;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xb8;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xb9;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xba;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xbb;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xbc;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xbd;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xbe;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xbf;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xc0;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xc1;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xc2;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xc3;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xc4;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xc5;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xc6;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 199;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 200;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xc9;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xca;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xcb;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xcc;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xcd;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xce;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xcf;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xd0;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xd1;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xd2;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xd3;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xd4;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xd5;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xd6;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xd7;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xd8;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xd9;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xda;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xdb;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xdc;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xdd;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xde;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xdf;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xe0;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xe1;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xe2;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xe3;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xe4;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xe5;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xe6;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xe7;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xe8;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xe9;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xea;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xeb;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xec;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xed;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xee;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xef;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xf0;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xf1;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xf2;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xf3;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xf4;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xf5;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xf6;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xf7;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xf8;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xf9;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xfa;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xfb;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xfc;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x108;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x109;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x10a;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x10b;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x10c;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x10d;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x10e;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x10f;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x110;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x111;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x112;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x113;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x114;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x13;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x14;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x15;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x16;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x17;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x18;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x19;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x1a;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x1b;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x1d;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x1f;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xa3;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xa4;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xa5;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xa6;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xfd;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xfe;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0xff;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x100;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x101;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x102;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x103;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x104;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x105;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x106;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x21;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x23;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x1c;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x1e;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x20;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  local_res8[0] = 0x22;
  FUN_140083f10(&DAT_1407ba838,local_res8);
  if (0x200 < (ulonglong)(DAT_1407ba840 - DAT_1407ba838 >> 2)) {
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,
                  "Warning: Too many tutorial completable tasks added, not enough bits allocated to stored them in the profile data"
                 );
  }
  return;
}



// ===== FUN_140083f10 @ 0x140083f10 [profile] =====

void FUN_140083f10(longlong *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  puVar5 = (undefined4 *)param_1[1];
  if (puVar5 != (undefined4 *)param_1[2]) {
    *puVar5 = *param_2;
    param_1[1] = param_1[1] + 4;
    return;
  }
  lVar7 = (longlong)puVar5 - *param_1 >> 2;
  if (lVar7 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140050870();
  }
  uVar4 = param_1[2] - *param_1 >> 2;
  uVar1 = lVar7 + 1;
  if (0x3fffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar6 = 0x3fffffffffffffff;
  }
  else {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar6 = uVar1;
    if (uVar1 <= uVar4) {
      uVar6 = uVar4;
    }
    if (0x3fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_140054fe0();
    }
  }
  lVar3 = FUN_140054e60(uVar6 * 4);
  *(undefined4 *)(lVar3 + lVar7 * 4) = *param_2;
  puVar2 = (undefined4 *)*param_1;
  if (puVar5 == (undefined4 *)param_1[1]) {
    lVar8 = param_1[1] - (longlong)puVar2;
    lVar7 = lVar3;
    puVar5 = puVar2;
  }
  else {
    FUN_140596110(lVar3,puVar2,(longlong)puVar5 - (longlong)puVar2);
    lVar8 = param_1[1] - (longlong)puVar5;
    lVar7 = lVar3 + (lVar7 + 1) * 4;
  }
  FUN_140596110(lVar7,puVar5,lVar8);
  FUN_140084390(param_1,lVar3,uVar1,uVar6);
  return;
}



// ===== FUN_140084430 @ 0x140084430 [profile] =====

undefined8 * FUN_140084430(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 2;
  *puVar1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 7;
  *(undefined2 *)puVar1 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 7;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 7;
  *(undefined2 *)(param_1 + 10) = 0;
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  FUN_1400549d0(puVar1,&PTR_140610690,0);
  FUN_1400549d0(param_1 + 6,&PTR_140610690,0);
  FUN_1400549d0(param_1 + 10,&PTR_140610690,0);
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 1;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  return param_1;
}



// ===== FUN_140089d90 @ 0x140089d90 [profile,storage,ui,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140089d90(undefined8 *param_1,longlong param_2)

{
  undefined8 ****ppppuVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 ****ppppuVar9;
  longlong lVar10;
  undefined1 auStackY_88 [32];
  undefined8 *local_58;
  longlong *local_50;
  undefined8 *local_48;
  undefined8 ***local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1407502c0 ^ (ulonglong)auStackY_88;
  *param_1 = 0;
  param_1[1] = 0;
  local_40 = (undefined8 ****)0x0;
  uStack_38 = 0;
  local_30 = 0;
  local_28 = 0;
  lVar10 = -1;
  do {
    lVar10 = lVar10 + 1;
  } while (*(short *)(param_2 + lVar10 * 2) != 0);
  local_48 = param_1;
  FUN_140054cf0(&local_40);
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
    FUN_1400549d0(ppppuVar1,ppppuVar9);
  }
  puVar8 = (undefined8 *)FUN_14008a140(&local_58,puVar8);
  uVar5 = *puVar8;
  uVar6 = puVar8[1];
  *puVar8 = 0;
  puVar8[1] = 0;
  *param_1 = uVar5;
  plVar7 = (longlong *)param_1[1];
  param_1[1] = uVar6;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_50 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar3 = (int *)((longlong)local_50 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_50 + 8))(local_50);
      }
    }
  }
  if (7 < local_28) {
    if (0xfff < local_28 * 2 + 2) {
      if (0x1f < (ulonglong)((longlong)local_40 + (-8 - (longlong)local_40[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  return param_1;
}



// ===== FUN_14009fa30 @ 0x14009fa30 [profile,storage] =====

undefined8 * FUN_14009fa30(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar5 = (undefined8 *)FUN_140558c80(0x18);
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined4 *)(puVar5 + 1) = 1;
  *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
  *puVar5 = std::_Ref_count<class_ItemInstance>::vftable;
  puVar5[2] = param_2;
  *param_1 = param_2;
  param_1[1] = puVar5;
  if ((param_2 != (longlong *)0x0) && ((param_2[2] == 0 || (*(int *)(param_2[2] + 8) == 0)))) {
    LOCK();
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_1[1];
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar6 = plVar3;
      plVar7 = param_2;
    }
    param_2[1] = (longlong)plVar7;
    plVar7 = (longlong *)param_2[2];
    param_2[2] = (longlong)plVar6;
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar3 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  return param_1;
}



// ===== FUN_1400f3720 @ 0x1400f3720 [profile] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1400f3720(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStackY_e8 [32];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulonglong uStack_88;
  uint local_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  ulonglong uStack_68;
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_1407502c0 ^ (ulonglong)auStackY_e8;
  if (((DAT_1407bbac8 == 0) || (*(longlong *)(*param_2 + 0x40) == 0)) ||
     (*(longlong *)(DAT_1407bbac8 + 0x90) == 0)) {
    ppuVar7 = &PTR_140610690;
  }
  else {
    ppuVar7 = (undefined **)FUN_14006ffc0();
  }
  if (ppuVar7 != (undefined **)0x0) {
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (*(short *)((longlong)ppuVar7 + lVar11 * 2) != 0);
    FUN_140054cf0(&local_a0,ppuVar7);
    iVar3 = *(int *)(*param_2 + 0x28);
    FUN_140055000(&local_80,&local_a0);
    if (iVar3 == 0x10) {
      uVar8 = FUN_14006bcb0(local_60,&local_a0);
      FUN_1400546d0(&local_80,uVar8);
      FUN_140055150(local_60);
    }
    if (7 < uStack_88) {
      if (0xfff < uStack_88 * 2 + 2) {
        if (0x1f < ((longlong)local_a0 - *(longlong *)((longlong)local_a0 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      thunk_FUN_1401fe000();
    }
    local_a0 = (undefined8 *)CONCAT44(uStack_7c,local_80);
    uStack_88 = uStack_68;
    local_70 = 0;
    uStack_68 = 7;
    local_80 = local_80 & 0xffff0000;
    FUN_140055150(&local_80);
    plVar6 = *(longlong **)
              (*(longlong *)(param_1 + 0x40) + 0xb0 + (ulonglong)*(uint *)(param_1 + 0x58) * 8);
    if (plVar6 != (longlong *)0x0) {
      uVar8 = (**(code **)(*plVar6 + 0xd8))();
      uVar4 = *(undefined4 *)(*param_2 + 0x54);
      uVar5 = *(undefined4 *)(*param_2 + 0x50);
      uVar9 = FUN_140558c80(0x80);
      lVar11 = FUN_140084430(uVar9);
      if ((undefined8 *)(lVar11 + 0x10) != &local_a0) {
        puVar10 = &local_a0;
        if (7 < uStack_88) {
          puVar10 = local_a0;
        }
        FUN_1400549d0((undefined8 *)(lVar11 + 0x10),puVar10);
      }
      *(undefined4 *)(lVar11 + 0x70) = uVar5;
      *(undefined4 *)(lVar11 + 0x74) = uVar4;
      *(undefined1 *)(lVar11 + 0x7b) = 1;
      FUN_1400823b0(uVar8,lVar11);
    }
    if (7 < uStack_88) {
      if (0xfff < uStack_88 * 2 + 2) {
        if (0x1f < (ulonglong)((longlong)local_a0 + (-8 - local_a0[-1]))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      thunk_FUN_1401fe000();
    }
  }
  if ((0 < *(int *)(*param_2 + 0x58)) && (*(int *)(*param_2 + 0x58) < 0x21)) {
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,
                  "handleUpdateGameRuleProgressPacket: Data tag is in range, so updating profile data\n"
                 );
  }
  thunk_FUN_1401fe000(*(undefined8 *)(*param_2 + 0x60));
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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



// ===== FUN_1401f12c0 @ 0x1401f12c0 [profile] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1401f12c0(longlong param_1,longlong *param_2,ulonglong param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined **ppuVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  int local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStack_a8;
  local_88 = param_2;
  local_80 = param_4;
  local_78 = param_2;
  local_70 = param_1;
  cVar6 = (**(code **)(*param_2 + 8))(param_2);
  lVar12 = local_70;
  plVar5 = local_78;
  iVar4 = local_80;
  plVar9 = DAT_1407b9858;
  uVar10 = 0;
  if (cVar6 == '\0') {
    uVar10 = param_3 & 0xffffffff;
  }
  local_7c = (undefined4)uVar10;
  lVar2 = *(longlong *)(local_70 + 8);
  plVar8 = (longlong *)
           (((((((((((ulonglong)local_78 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)param_2 >> 8 & 0xff) * 0x100000001b3 ^
                  (ulonglong)param_2 >> 0x10 & 0xff) * 0x100000001b3 ^
                 (ulonglong)param_2 >> 0x18 & 0xff) * 0x100000001b3 ^
                (ulonglong)param_2 >> 0x20 & 0xff) * 0x100000001b3 ^
               (ulonglong)param_2 >> 0x28 & 0xff) * 0x100000001b3 ^
              (ulonglong)param_2 >> 0x30 & 0xff) * 0x100000001b3 ^ (ulonglong)param_2 >> 0x38) *
             0x100000001b3 & *(ulonglong *)(local_70 + 0x30)) * 0x10 +
           *(longlong *)(local_70 + 0x18));
  lVar7 = plVar8[1];
  if (lVar7 == lVar2) {
LAB_1401f13ca:
    lVar7 = 0;
  }
  else {
    plVar3 = *(longlong **)(lVar7 + 0x10);
    while (local_78 != plVar3) {
      if (lVar7 == *plVar8) goto LAB_1401f13ca;
      lVar7 = *(longlong *)(lVar7 + 8);
      plVar3 = *(longlong **)(lVar7 + 0x10);
    }
  }
  if (lVar7 == 0) {
    lVar7 = lVar2;
  }
  if (lVar7 == lVar2) {
    uStack_68 = 0;
    local_70 = 0;
    *(int *)((longlong)&local_70 + uVar10 * 4) = local_80;
    local_60 = local_78;
    local_58 = (undefined4)local_70;
    uStack_54 = local_70._4_4_;
    uStack_50 = (undefined4)uStack_68;
    uStack_4c = uStack_68._4_4_;
    FUN_1401f1de0(lVar12,&local_70,&local_60);
  }
  else {
    lVar7 = lVar7 + uVar10 * 4;
    *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + local_80;
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0xe0))();
    if (plVar5 != plVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_14002fe50(&DAT_1407bb5d0,&DAT_140608a38);
    }
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < uVar1 - iVar4) {
      *(undefined4 *)(lVar7 + 0x18) = 0xffffffff;
    }
    else if (uVar1 < 0x10000) goto LAB_1401f14c6;
    ppuVar11 = &PTR_DAT_140751fd0;
    do {
      if (*(int *)(*(longlong *)*ppuVar11 + 8) == (int)plVar5[1]) goto LAB_1401f14c6;
      ppuVar11 = ppuVar11 + 1;
    } while (ppuVar11 != (undefined **)&DAT_140752010);
    *(undefined4 *)(lVar7 + 0x18) = 0xffff;
  }
LAB_1401f14c6:
  *(undefined1 *)(lVar12 + 0x40) = 1;
  plVar9 = (longlong *)
           (((((((((((ulonglong)plVar5 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)local_88 >> 8 & 0xff) * 0x100000001b3 ^
                  (ulonglong)local_88 >> 0x10 & 0xff) * 0x100000001b3 ^
                 (ulonglong)local_88 >> 0x18 & 0xff) * 0x100000001b3 ^
                (ulonglong)local_88 >> 0x20 & 0xff) * 0x100000001b3 ^
               (ulonglong)local_88 >> 0x28 & 0xff) * 0x100000001b3 ^
              (ulonglong)local_88 >> 0x30 & 0xff) * 0x100000001b3 ^ (ulonglong)local_88 >> 0x38) *
             0x100000001b3 & DAT_1407c0690) * 0x10 + DAT_1407c0678);
  lVar12 = plVar9[1];
  lVar7 = 0;
  if (lVar12 != DAT_1407c0668) {
    plVar8 = *(longlong **)(lVar12 + 0x10);
    while ((lVar7 = lVar12, plVar5 != plVar8 && (lVar7 = 0, lVar12 != *plVar9))) {
      lVar12 = *(longlong *)(lVar12 + 8);
      plVar8 = *(longlong **)(lVar12 + 0x10);
    }
  }
  lVar12 = DAT_1407c0668;
  if (lVar7 != 0) {
    lVar12 = lVar7;
  }
  if (lVar12 != DAT_1407c0668) {
                    /* WARNING: Subroutine does not return */
    FUN_14002fe50(&DAT_1407bb5d0,"[StatsCounter] award(): %X\n",
                  *(int *)(lVar12 + 0x18) << ((byte)local_7c & 0x1f));
  }
  return;
}



// ===== FUN_1401f1de0 @ 0x1401f1de0 [profile] =====

undefined8 * FUN_1401f1de0(float *param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  float fVar12;
  
  uVar9 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  uVar7 = uVar9 & *(ulonglong *)(param_1 + 0xc);
  puVar8 = (undefined8 *)(uVar7 * 2);
  puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + uVar7 * 0x10);
  pfVar1 = param_1 + 2;
  puVar10 = *(undefined8 **)pfVar1;
  if (puVar4 != puVar10) {
    puVar8 = *(undefined8 **)(*(longlong *)(param_1 + 6) + uVar7 * 0x10);
    lVar5 = puVar4[2];
    puVar10 = puVar4;
    while( true ) {
      if (*(longlong *)param_3 == lVar5) {
        *param_2 = puVar10;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar10 == puVar8) break;
      puVar10 = (undefined8 *)puVar10[1];
      lVar5 = puVar10[2];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_140555c84("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_140558c80(0x28,puVar8,param_3,param_4,pfVar1,0);
  puVar4[2] = *(undefined8 *)param_3;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  puVar4[3] = *(undefined8 *)(param_3 + 8);
  puVar4[4] = uVar3;
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
    uVar11 = uVar7;
    if ((uVar7 < uVar6) && ((0x1ff < uVar7 || (uVar11 = uVar7 * 8, uVar7 * 8 < uVar6)))) {
      uVar11 = uVar6;
    }
    FUN_1401f28e0(param_1,uVar11);
    puVar8 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar10 = *(undefined8 **)pfVar1;
    if (puVar8 != puVar10) {
      lVar5 = puVar8[2];
      puVar10 = puVar8;
      while (puVar4[2] != lVar5) {
        if (puVar10 ==
            *(undefined8 **)
             (*(longlong *)(param_1 + 6) + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
        goto LAB_1401f2039;
        puVar10 = (undefined8 *)puVar10[1];
        lVar5 = puVar10[2];
      }
      puVar10 = (undefined8 *)*puVar10;
    }
  }
LAB_1401f2039:
  puVar8 = (undefined8 *)puVar10[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar4 = puVar10;
  puVar4[1] = puVar8;
  *puVar8 = puVar4;
  puVar10[1] = puVar4;
  uVar9 = uVar9 & *(ulonglong *)(param_1 + 0xc);
  lVar5 = *(longlong *)(param_1 + 6);
  puVar2 = *(undefined8 **)(lVar5 + uVar9 * 0x10);
  if (puVar2 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar5 + uVar9 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == puVar10) {
      *(undefined8 **)(lVar5 + uVar9 * 0x10) = puVar4;
      goto LAB_1401f2086;
    }
    if (*(undefined8 **)(lVar5 + 8 + uVar9 * 0x10) != puVar8) goto LAB_1401f2086;
  }
  *(undefined8 **)(lVar5 + 8 + uVar9 * 0x10) = puVar4;
LAB_1401f2086:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// ===== FUN_14026d220 @ 0x14026d220 [profile,storage,ui,render] =====

undefined8 * FUN_14026d220(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  *param_1 = UIScene::vftable;
  FUN_1400454c0(param_1 + 0xb);
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  lVar1 = FUN_140558c80(0x38);
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
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  lVar1 = FUN_140558c80(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  param_1[0x1c] = lVar1;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 7;
  param_1[0x22] = 8;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  FUN_14004bae0(param_1 + 0x1e,0x10,param_1[0x1c]);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2d] = param_3;
  *(undefined4 *)((longlong)param_1 + 0x174) = param_2;
  param_1[2] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  *(undefined2 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x125) = 1;
  *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x25] = 0;
  *(undefined1 *)((longlong)param_1 + 0x17a) = 1;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x26] = 0;
  return param_1;
}



// ===== FUN_14026d860 @ 0x14026d860 [profile,storage,ui,render] =====

void FUN_14026d860(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = 0.0;
  dVar2 = 0.0;
  switch(*(undefined4 *)(*(longlong *)(param_1[0x2d] + 0xb0) + 0x68)) {
  default:
    dVar1 = (double)(**(code **)(*param_1 + 0x28))(param_1);
    dVar2 = (double)(**(code **)(*param_1 + 0x28))(param_1);
    break;
  case 1:
  case 2:
  case 3:
  case 5:
  case 7:
    dVar1 = (double)(**(code **)(*param_1 + 0x28))(param_1);
    break;
  case 4:
  case 6:
  case 8:
    dVar1 = (double)(**(code **)(*param_1 + 0x28))(param_1);
    goto LAB_14026d8eb;
  }
  dVar3 = (double)(**(code **)(*param_1 + 0x30))(param_1);
LAB_14026d8eb:
  FUN_14026d950(param_1,(int)dVar1,(int)dVar2,(int)dVar3,0);
  return;
}



// ===== FUN_140273c10 @ 0x140273c10 [profile] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140273c10(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStackY_78 [32];
  undefined8 *local_48;
  longlong local_40 [5];
  
  local_40[4] = DAT_1407502c0 ^ (ulonglong)auStackY_78;
  FUN_14026db10();
  uVar5 = (**(code **)*param_1)(param_1);
  IggyPlayerRootPath(uVar5);
  puVar1 = param_1 + 0x3c;
  local_40[2] = 10;
  local_40[3] = 0xf;
  local_40[0] = 0x6d69546c61697254;
  local_40[1] = 0x7265;
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
  param_1[0x3f] = 0;
  puVar2 = param_1 + 0x2a;
  plVar4 = (longlong *)param_1[0x2b];
  local_48 = puVar1;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_48);
  }
  else {
    *plVar4 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x99;
  local_40[2] = 8;
  local_40[3] = 0xf;
  local_40[0] = 0x6e6f634965766153;
  local_40[1] = 0;
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
  param_1[0x9c] = 0;
  plVar4 = (longlong *)param_1[0x2b];
  local_48 = puVar1;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_48);
  }
  else {
    *plVar4 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x7a;
  local_40[2] = 10;
  local_40[3] = 0xf;
  local_40[0] = 0x614e726579616c50;
  local_40[1] = 0x656d;
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
  param_1[0x7d] = 0;
  plVar4 = (longlong *)param_1[0x2b];
  local_48 = puVar1;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_48);
  }
  else {
    *plVar4 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0xb0;
  local_40[2] = 9;
  local_40[3] = 0xf;
  local_40[0] = 0x656e61506e69614d;
  local_40[1] = 0x6c;
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
  param_1[0xb3] = 0;
  plVar4 = (longlong *)param_1[0x2b];
  local_48 = puVar1;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_48);
  }
  else {
    *plVar4 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar3 = param_1 + 0x5b;
  local_40[2] = 0xf;
  local_40[3] = 0xf;
  local_40[0] = 0x6174537373657250;
  local_40[1] = 0x6c6562614c7472;
  (**(code **)*puVar3)(puVar3,param_1);
  if (0xf < (ulonglong)local_40[3]) {
    if (0xfff < local_40[3] + 1U) {
      if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x5e] = puVar1;
  plVar4 = (longlong *)param_1[0x2b];
  local_48 = puVar3;
  if (plVar4 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar4,&local_48);
  }
  else {
    *plVar4 = (longlong)puVar3;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  FUN_140054cf0(local_40,L"ShowController");
  uVar5 = FUN_14026eb50(param_1,local_40);
  param_1[199] = uVar5;
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



// ===== FUN_14027aef0 @ 0x14027aef0 [profile,storage] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14027aef0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
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
  puVar6 = param_1 + 0x47;
  uStack_58 = 0;
  local_50 = 6;
  uStack_48 = 0xf;
  local_60 = (char *)0x316c6562614c;
  (**(code **)*puVar6)(puVar6,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x4a] = 0;
  puVar1 = param_1 + 0x2a;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar6;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar6;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar6 = param_1 + 0x66;
  uStack_58 = 0;
  local_50 = 6;
  uStack_48 = 0xf;
  local_60 = (char *)0x326c6562614c;
  (**(code **)param_1[0x66])(puVar6,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x69] = 0;
  puVar3 = (undefined8 *)param_1[0x2b];
  local_68 = puVar6;
  if (puVar3 == (undefined8 *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,puVar3,&local_68);
  }
  else {
    *puVar3 = puVar6;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar6 = param_1 + 0x85;
  uStack_58 = 0;
  local_50 = 6;
  uStack_48 = 0xf;
  local_60 = (char *)0x336c6562614c;
  (**(code **)*puVar6)(puVar6,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x88] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar6;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar6;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar6 = param_1 + 0xa4;
  uStack_58 = 0;
  local_50 = 6;
  uStack_48 = 0xf;
  local_60 = (char *)0x346c6562614c;
  (**(code **)*puVar6)(puVar6,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xa7] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar6;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar6;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar6 = param_1 + 0xc3;
  uStack_58 = 0;
  local_50 = 6;
  uStack_48 = 0xf;
  local_60 = (char *)0x356c6562614c;
  (**(code **)*puVar6)(puVar6,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xc6] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar6;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar6;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar6 = param_1 + 0xe2;
  uStack_58 = 0;
  local_50 = 6;
  uStack_48 = 0xf;
  local_60 = (char *)0x366c6562614c;
  (**(code **)*puVar6)(puVar6,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xe5] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar6;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar6;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar6 = param_1 + 0x101;
  uStack_58 = 0;
  local_50 = 6;
  uStack_48 = 0xf;
  local_60 = (char *)0x376c6562614c;
  (**(code **)*puVar6)(puVar6,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x104] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar6;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar6;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar6 = param_1 + 0x120;
  uStack_58 = 0;
  local_50 = 6;
  uStack_48 = 0xf;
  local_60 = (char *)0x386c6562614c;
  (**(code **)*puVar6)(puVar6,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x123] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar6;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar6;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar6 = param_1 + 0x13f;
  uStack_58 = 0;
  local_50 = 6;
  uStack_48 = 0xf;
  local_60 = (char *)0x396c6562614c;
  (**(code **)*puVar6)(puVar6,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x142] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar6;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar6;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar6 = param_1 + 0x15e;
  uStack_58 = 0;
  local_50 = 7;
  uStack_48 = 0xf;
  local_60 = (char *)0x30316c6562614c;
  (**(code **)*puVar6)(puVar6,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x161] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar6;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar6;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar6 = param_1 + 0x19c;
  pcVar4 = *(code **)*puVar6;
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = (char *)FUN_140054e60(0x20);
  local_50 = 0x10;
  uStack_48 = 0x1f;
  builtin_strncpy(local_60,"Label1Background",0x11);
  (*pcVar4)(puVar6,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x19f] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar6;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar6;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar6 = param_1 + 0x1b3;
  pcVar4 = *(code **)param_1[0x1b3];
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = (char *)FUN_140054e60(0x20);
  local_50 = 0x10;
  uStack_48 = 0x1f;
  builtin_strncpy(local_60,"Label2Background",0x11);
  (*pcVar4)(puVar6,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x1b6] = 0;
  puVar3 = (undefined8 *)param_1[0x2b];
  local_68 = puVar6;
  if (puVar3 == (undefined8 *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,puVar3,&local_68);
  }
  else {
    *puVar3 = puVar6;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar6 = param_1 + 0x1ca;
  pcVar4 = *(code **)*puVar6;
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = (char *)FUN_140054e60(0x20);
  local_50 = 0x10;
  uStack_48 = 0x1f;
  builtin_strncpy(local_60,"Label3Background",0x11);
  (*pcVar4)(puVar6,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x1cd] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar6;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar6;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar6 = param_1 + 0x1e1;
  pcVar4 = *(code **)*puVar6;
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = (char *)FUN_140054e60(0x20);
  local_50 = 0x10;
  uStack_48 = 0x1f;
  builtin_strncpy(local_60,"Label4Background",0x11);
  (*pcVar4)(puVar6,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x1e4] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar6;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar6;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar6 = param_1 + 0x1f8;
  pcVar4 = *(code **)*puVar6;
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = (char *)FUN_140054e60(0x20);
  local_50 = 0x10;
  uStack_48 = 0x1f;
  builtin_strncpy(local_60,"Label5Background",0x11);
  (*pcVar4)(puVar6,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x1fb] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar6;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar6;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar6 = param_1 + 0x20f;
  pcVar4 = *(code **)*puVar6;
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = (char *)FUN_140054e60(0x20);
  local_50 = 0x10;
  uStack_48 = 0x1f;
  builtin_strncpy(local_60,"Label6Background",0x11);
  (*pcVar4)(puVar6,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x212] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar6;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar6;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar6 = param_1 + 0x226;
  pcVar4 = *(code **)*puVar6;
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = (char *)FUN_140054e60(0x20);
  local_50 = 0x10;
  uStack_48 = 0x1f;
  builtin_strncpy(local_60,"Label7Background",0x11);
  (*pcVar4)(puVar6,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x229] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar6;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar6;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar6 = param_1 + 0x23d;
  pcVar4 = *(code **)*puVar6;
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = (char *)FUN_140054e60(0x20);
  local_50 = 0x10;
  uStack_48 = 0x1f;
  builtin_strncpy(local_60,"Label8Background",0x11);
  (*pcVar4)(puVar6,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x240] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar6;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar6;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar6 = param_1 + 0x254;
  pcVar4 = *(code **)*puVar6;
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = (char *)FUN_140054e60(0x20);
  local_50 = 0x10;
  uStack_48 = 0x1f;
  builtin_strncpy(local_60,"Label9Background",0x11);
  (*pcVar4)(puVar6,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[599] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar6;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar6;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar6 = param_1 + 0x26b;
  pcVar4 = *(code **)*puVar6;
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = (char *)FUN_140054e60(0x20);
  local_50 = 0x11;
  uStack_48 = 0x1f;
  builtin_strncpy(local_60,"Label10Background",0x12);
  (*pcVar4)(puVar6,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x26e] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar6;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar6;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar6 = param_1 + 0x17d;
  uStack_58 = 0;
  local_50 = 7;
  uStack_48 = 0xf;
  local_60 = (char *)0x786f62656b754a;
  (**(code **)*puVar6)(puVar6,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x180] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar6;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar6;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar6 = param_1 + 0x282;
  local_50 = 0xd;
  uStack_48 = 0xf;
  local_60 = (char *)0x6d61476c6562614c;
  uStack_58 = 0x6761747265;
  (**(code **)*puVar6)(puVar6,param_1);
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x285] = 0;
  plVar2 = (longlong *)param_1[0x2b];
  local_68 = puVar6;
  if (plVar2 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar1,plVar2,&local_68);
  }
  else {
    *plVar2 = (longlong)puVar6;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_140054cf0(&local_60,L"LoadHud");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2a1] = uVar5;
  if (7 < uStack_48) {
    if (0xfff < uStack_48 * 2 + 2) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_140054cf0(&local_60,L"SetExpBarProgress");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2a2] = uVar5;
  if (7 < uStack_48) {
    if (0xfff < uStack_48 * 2 + 2) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_140054cf0(&local_60,L"SetPlayerLevel");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2a3] = uVar5;
  if (7 < uStack_48) {
    if (0xfff < uStack_48 * 2 + 2) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_140054cf0(&local_60,L"SetActiveSlot");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2a4] = uVar5;
  if (7 < uStack_48) {
    if (0xfff < uStack_48 * 2 + 2) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_140054cf0(&local_60,L"SetHealth");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2a5] = uVar5;
  if (7 < uStack_48) {
    if (0xfff < uStack_48 * 2 + 2) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_140054cf0(&local_60,L"SetFood");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2a6] = uVar5;
  if (7 < uStack_48) {
    if (0xfff < uStack_48 * 2 + 2) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_140054cf0(&local_60,L"SetAir");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2a7] = uVar5;
  if (7 < uStack_48) {
    if (0xfff < uStack_48 * 2 + 2) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_140054cf0(&local_60,L"SetArmour");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2a8] = uVar5;
  if (7 < uStack_48) {
    if (0xfff < uStack_48 * 2 + 2) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_140054cf0(&local_60,L"ShowHealth");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2a9] = uVar5;
  if (7 < uStack_48) {
    if (0xfff < uStack_48 * 2 + 2) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_140054cf0(&local_60,L"ShowHorseHealth");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2aa] = uVar5;
  if (7 < uStack_48) {
    if (0xfff < uStack_48 * 2 + 2) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_140054cf0(&local_60,L"ShowFood");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2ab] = uVar5;
  if (7 < uStack_48) {
    if (0xfff < uStack_48 * 2 + 2) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_140054cf0(&local_60,L"ShowAir");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2ac] = uVar5;
  if (7 < uStack_48) {
    if (0xfff < uStack_48 * 2 + 2) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_140054cf0(&local_60,L"ShowArmour");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2ad] = uVar5;
  if (7 < uStack_48) {
    if (0xfff < uStack_48 * 2 + 2) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_140054cf0(&local_60,L"ShowExpBar");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2ae] = uVar5;
  if (7 < uStack_48) {
    if (0xfff < uStack_48 * 2 + 2) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_140054cf0(&local_60,L"SetRegenerationEffect");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2af] = uVar5;
  if (7 < uStack_48) {
    if (0xfff < uStack_48 * 2 + 2) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_140054cf0(&local_60,L"SetFoodSaturationLevel");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2b0] = uVar5;
  if (7 < uStack_48) {
    if (0xfff < uStack_48 * 2 + 2) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_140054cf0(&local_60,L"SetDragonHealth");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2b1] = uVar5;
  if (7 < uStack_48) {
    if (0xfff < uStack_48 * 2 + 2) {
      if ((char *)0x1f < local_60 + (-8 - *(longlong *)(local_60 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_140054cf0(&local_60,L"SetDragonLabel",0xe);
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2b2] = uVar5;
  FUN_140055150(&local_60);
  FUN_140054de0(&local_60,L"ShowDragonHealthBar");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2b3] = uVar5;
  FUN_140055150(&local_60);
  FUN_140054de0(&local_60,L"SetSelectedLabel");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2b4] = uVar5;
  FUN_140055150(&local_60);
  FUN_140054de0(&local_60,L"HideSelectedLabel");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2b5] = uVar5;
  FUN_140055150(&local_60);
  FUN_140054de0(&local_60,L"RepositionHud");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2b6] = uVar5;
  FUN_140055150(&local_60);
  FUN_140054de0(&local_60,L"SetGamertag");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2b7] = uVar5;
  FUN_140055150(&local_60);
  FUN_140054de0(&local_60,L"SetTooltipsEnabled");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2b8] = uVar5;
  FUN_140055150(&local_60);
  FUN_140054de0(&local_60,L"SetRidingHorse");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2b9] = uVar5;
  FUN_140055150(&local_60);
  FUN_140054de0(&local_60,L"SetHorseHealth");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[0x2ba] = uVar5;
  FUN_140055150(&local_60);
  FUN_140054de0(&local_60,L"SetHorseJumpBarProgress");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[699] = uVar5;
  FUN_140055150(&local_60);
  FUN_140054de0(&local_60,L"SetHealthAbsorb");
  uVar5 = FUN_14026eb50(param_1,&local_60);
  param_1[700] = uVar5;
  FUN_140055150(&local_60);
  return 1;
}



// ===== FUN_14027f6d0 @ 0x14027f6d0 [profile,storage,ui,render] =====

undefined8 * FUN_14027f6d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = UIControl::vftable;
  puVar1 = param_1 + 10;
  *puVar1 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xf;
  *(undefined1 *)puVar1 = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  FUN_140058f70(puVar1,&DAT_140608a38,0);
  *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  param_1[3] = 0;
  return param_1;
}



// ===== FUN_140280c40 @ 0x140280c40 [profile,storage,ui,render] =====

void FUN_140280c40(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_68 [12];
  undefined4 local_5c;
  undefined4 local_48 [4];
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  double local_18;
  
  FUN_140045590(param_1 + 0xe0);
  *(int *)(param_1 + 0xc) = param_3;
  local_48[0] = 6;
  local_38 = (undefined8 *)FUN_14008a010(param_2);
  if (7 < (ulonglong)local_38[3]) {
    local_38 = (undefined8 *)*local_38;
  }
  lVar2 = FUN_14008a010(param_2);
  local_30 = *(undefined4 *)(lVar2 + 0x10);
  local_2c = local_5c;
  local_28 = 4;
  local_18 = (double)param_3;
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  uVar3 = (**(code **)**(undefined8 **)(param_1 + 0x48))();
  IggyPlayerCallMethodRS(uVar3,local_68,param_1 + 0x20,uVar1,2,local_48);
  FUN_140089f70(param_2);
  return;
}



// ===== FUN_140281240 @ 0x140281240 [profile,ui] =====

void FUN_140281240(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_48 [4];
  double local_38;
  undefined1 local_28 [32];
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(int *)(param_1 + 0xc) = param_2;
  local_38 = (double)param_2;
  local_48[0] = 4;
  uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x48))();
  IggyPlayerCallMethodRS(uVar2,local_28,param_1 + 0x20,uVar1,1,local_48);
  return;
}



// ===== FUN_140281340 @ 0x140281340 [profile] =====

void FUN_140281340(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_68 [32];
  undefined4 local_48 [4];
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_28;
  double local_18;
  
  local_38 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    local_38 = (undefined8 *)*param_2;
  }
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  local_30 = *(undefined4 *)(param_2 + 2);
  local_18 = (double)param_3;
  local_48[0] = 6;
  local_28 = 4;
  uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x48))();
  IggyPlayerCallMethodRS(uVar2,local_68,param_1 + 0x20,uVar1,2,local_48);
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  return;
}



// ===== FUN_1402860b0 @ 0x1402860b0 [profile,storage,ui,render] =====

undefined8 * FUN_1402860b0(undefined8 *param_1)

{
  FUN_14027f6d0();
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = UIControl_Slider::vftable;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 100;
  return param_1;
}



// ===== FUN_140286290 @ 0x140286290 [profile,storage,ui,render] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140286290(longlong param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                  int param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 *local_110;
  undefined8 local_108;
  undefined4 local_fc;
  undefined1 local_f8 [32];
  undefined4 local_d8 [4];
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  double local_a8;
  undefined4 local_98;
  double local_88;
  undefined4 local_78;
  double local_68;
  undefined4 local_58;
  double local_48;
  ulonglong local_38;
  
  local_38 = DAT_1407502c0 ^ (ulonglong)auStack_138;
  local_108 = param_2;
  FUN_140045590(param_1 + 0xe0);
  *(int *)(param_1 + 0xc) = param_3;
  *(int *)(param_1 + 0xf0) = param_4;
  *(int *)(param_1 + 0xf4) = param_5;
  *(int *)(param_1 + 0xf8) = param_6;
  local_d8[0] = 6;
  local_c8 = (undefined8 *)FUN_14008a010(param_2);
  if (7 < (ulonglong)local_c8[3]) {
    local_c8 = (undefined8 *)*local_c8;
  }
  lVar2 = FUN_14008a010(param_2);
  local_c0 = *(undefined4 *)(lVar2 + 0x10);
  local_bc = local_fc;
  local_b8 = 4;
  local_a8 = (double)param_3;
  local_98 = 4;
  local_88 = (double)param_4;
  local_78 = 4;
  local_68 = (double)param_5;
  local_58 = 4;
  local_48 = (double)param_6;
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  uVar3 = (**(code **)**(undefined8 **)(param_1 + 0x48))();
  local_110 = local_d8;
  local_118 = 5;
  IggyPlayerCallMethodRS(uVar3,local_f8,param_1 + 0x20,uVar1);
  FUN_140089f70(param_2);
  return;
}



// ===== FUN_14028ffb0 @ 0x14028ffb0 [profile] =====

undefined8 * FUN_14028ffb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_140054cf0(param_2,L"QuadrantSignin",0xe);
  return param_2;
}



// ===== FUN_1402947e0 @ 0x1402947e0 [profile] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402947e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStackY_88 [32];
  undefined8 *local_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1407502c0 ^ (ulonglong)auStackY_88;
  FUN_14026db10();
  uVar5 = (**(code **)*param_1)(param_1);
  IggyPlayerRootPath(uVar5);
  puVar1 = param_1 + 0x3c;
  local_40 = 9;
  uStack_38 = 0xf;
  local_50 = (char *)0x73694c736d657469;
  uStack_48 = 0x74;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x3f] = 0;
  puVar2 = param_1 + 0x2a;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x88;
  pcVar4 = *(code **)*puVar1;
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = (char *)FUN_140054e60(0x20);
  local_40 = 0x10;
  uStack_38 = 0x1f;
  builtin_strncpy(local_50,"enchantmentsList",0x11);
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
  param_1[0x8b] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x62;
  uStack_48 = 0;
  local_40 = 7;
  uStack_38 = 0xf;
  local_50 = (char *)0x7473694c626f6d;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x65] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0xae;
  uStack_48 = 0;
  local_40 = 3;
  uStack_38 = 0xf;
  local_50 = (char *)0x766f66;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xb1] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0xd3;
  uStack_48 = 0;
  local_40 = 4;
  uStack_38 = 0xf;
  local_50 = (char *)0x656d6974;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xd6] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x193;
  uStack_48 = 0;
  local_40 = 6;
  uStack_38 = 0xf;
  local_50 = (char *)0x796144746573;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x196] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x1b2;
  local_40 = 8;
  uStack_38 = 0xf;
  local_50 = (char *)0x746867694e746573;
  uStack_48 = 0;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x1b5] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0xf8;
  uStack_48 = 0;
  local_40 = 4;
  uStack_38 = 0xf;
  local_50 = (char *)0x6e696172;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xfb] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x117;
  uStack_48 = 0;
  local_40 = 7;
  uStack_38 = 0xf;
  local_50 = (char *)0x7265646e756874;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x11a] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x136;
  local_40 = 9;
  uStack_38 = 0xf;
  local_50 = (char *)0x6974616d65686373;
  uStack_48 = 99;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x139] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x155;
  local_40 = 0xd;
  uStack_38 = 0xf;
  local_50 = (char *)0x7475547465736572;
  uStack_48 = 0x6c6169726f;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x158] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x174;
  local_40 = 9;
  uStack_38 = 0xf;
  local_50 = (char *)0x72656d6143746573;
  uStack_48 = 0x61;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x177] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  if (plVar3 == (longlong *)param_1[0x2c]) {
    local_58 = puVar1;
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  return 1;
}



// ===== FUN_1402951a0 @ 0x1402951a0 [profile,ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

longlong * FUN_1402951a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *******pppppppuVar4;
  undefined4 *puVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  undefined8 *******pppppppuVar17;
  ulonglong *puVar18;
  undefined4 uVar19;
  undefined8 *puVar20;
  ulonglong *puVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  short *psVar26;
  ulonglong uVar27;
  longlong lVar28;
  undefined1 auStackY_358 [32];
  undefined8 local_328;
  ulonglong *local_320;
  ulonglong *puStack_318;
  ulonglong *local_310;
  longlong *local_308;
  undefined4 local_2fc;
  undefined8 local_2f8;
  ulonglong uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 *******local_2b8 [2];
  undefined8 local_2a8;
  ulonglong local_2a0;
  undefined4 local_298;
  undefined4 local_288;
  undefined8 *local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  short local_260;
  undefined1 local_25e [6];
  double local_258;
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStackY_358;
  local_328 = param_1;
  local_308 = param_1;
  FUN_14026d220(param_1,param_2,param_4);
  *param_1 = (longlong)UIScene_DebugOverlay::vftable;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  FUN_14027f6d0(param_1 + 0x3c);
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3c] = (longlong)UIControl_ButtonList::vftable;
  param_1[0x61] = 0;
  plVar14 = param_1 + 0x62;
  local_2d8 = plVar14;
  FUN_14027f6d0(plVar14);
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  *plVar14 = (longlong)UIControl_ButtonList::vftable;
  param_1[0x87] = 0;
  plVar14 = param_1 + 0x88;
  local_2d8 = plVar14;
  FUN_14027f6d0(plVar14);
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  *(undefined1 *)(param_1 + 0xa3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0;
  *plVar14 = (longlong)UIControl_ButtonList::vftable;
  param_1[0xad] = 0;
  FUN_1402860b0(param_1 + 0xae);
  FUN_1402860b0(param_1 + 0xd3);
  FUN_14027f6d0(param_1 + 0xf8);
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  *(undefined1 *)(param_1 + 0x113) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7cc) = 0;
  param_1[0xf8] = (longlong)UIControl_Button::vftable;
  FUN_14027f6d0(param_1 + 0x117);
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  *(undefined1 *)(param_1 + 0x132) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c4) = 0;
  param_1[0x117] = (longlong)UIControl_Button::vftable;
  FUN_14027f6d0(param_1 + 0x136);
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  *(undefined1 *)(param_1 + 0x151) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9bc) = 0;
  param_1[0x136] = (longlong)UIControl_Button::vftable;
  plVar14 = param_1 + 0x155;
  FUN_14027f6d0(plVar14);
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  *(undefined1 *)(param_1 + 0x170) = 0;
  *(undefined4 *)((longlong)param_1 + 0xab4) = 0;
  *plVar14 = (longlong)UIControl_Button::vftable;
  plVar1 = param_1 + 0x174;
  FUN_14027f6d0(plVar1);
  param_1[400] = 0;
  param_1[0x191] = 0;
  *(undefined1 *)(param_1 + 399) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbac) = 0;
  *plVar1 = (longlong)UIControl_Button::vftable;
  plVar2 = param_1 + 0x193;
  FUN_14027f6d0(plVar2);
  param_1[0x1af] = 0;
  param_1[0x1b0] = 0;
  *(undefined1 *)(param_1 + 0x1ae) = 0;
  *(undefined4 *)((longlong)param_1 + 0xca4) = 0;
  *plVar2 = (longlong)UIControl_Button::vftable;
  plVar3 = param_1 + 0x1b2;
  FUN_14027f6d0(plVar3);
  param_1[0x1ce] = 0;
  param_1[0x1cf] = 0;
  *(undefined1 *)(param_1 + 0x1cd) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd9c) = 0;
  *plVar3 = (longlong)UIControl_Button::vftable;
  FUN_14026df40(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  lVar24 = DAT_140790e60;
  FUN_1400547f0(local_248,0x100,L"Set fov (%d)",
                (((uint)*(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)local_328 + 0x174)] + 0x53) +
                 (uint)*(byte *)((&DAT_1407bb7b0)[*(int *)((longlong)local_328 + 0x174)] + 0x53) * 4
                 ) * 8) / 100 + 0x46);
  uVar13 = FUN_140089d90(&local_2d8,local_248);
  FUN_140286290(param_1 + 0xae,uVar13,5,0);
  (**(code **)(**(longlong **)(*(longlong *)(lVar24 + 0x40) + 0x188) + 0x48))();
  FUN_1400547f0(local_248,0x100,L"Set time (unsafe) (%d)");
  uVar13 = FUN_140089d90(&local_2d8,local_248);
  plVar22 = local_328;
  FUN_140286290(local_328 + 0xd3,uVar13,8);
  uVar13 = FUN_140089d90(&local_2d8,L"Toggle Rain");
  FUN_140280c40(plVar22 + 0xf8,uVar13,4);
  uVar13 = FUN_140089d90(&local_2d8,L"Toggle Thunder");
  FUN_140280c40(plVar22 + 0x117,uVar13,3);
  uVar13 = FUN_140089d90(&local_2d8,L"Create Schematic");
  FUN_140280c40(plVar22 + 0x136,uVar13,2);
  uVar13 = FUN_140089d90(&local_2d8,L"Reset profile tutorial progress");
  FUN_140280c40(plVar14,uVar13,1);
  uVar13 = FUN_140089d90(&local_2d8,L"Set camera");
  FUN_140280c40(plVar1,uVar13,0);
  uVar13 = FUN_140089d90(&local_2d8,L"Set Day");
  FUN_140280c40(plVar2,uVar13,6);
  uVar13 = FUN_140089d90(&local_2d8,L"Set Night");
  FUN_140280c40(plVar3,uVar13,7);
  FUN_140281240(plVar22 + 0x3c,0xb);
  local_320 = (ulonglong *)0x0;
  puStack_318 = (ulonglong *)0x0;
  local_310 = (ulonglong *)0x0;
  local_2d8 = (longlong *)0x0;
  uVar11 = DAT_1407bdbd8;
  if (DAT_1407bdbd8 != 0) {
    do {
      uVar27 = (ulonglong)local_2d8;
      uVar19 = SUB84(local_2d8,0);
      plVar14 = *(longlong **)(DAT_1407bdbd0 + ((ulonglong)local_2d8 & 0xffffffff) * 8);
      if (plVar14 != (longlong *)0x0) {
        iVar9 = (**(code **)(*plVar14 + 0x88))(plVar14,0xffffffff);
        if (*DAT_1407bb780 == '\0') {
          pcVar6 = (code *)swi(3);
          plVar14 = (longlong *)(*pcVar6)();
          return plVar14;
        }
        if ((ulonglong)(longlong)iVar9 <
            (ulonglong)
            (*(longlong *)(DAT_1407bb780 + 0x50) - *(longlong *)(DAT_1407bb780 + 0x48) >> 5)) {
          ppuVar15 = (undefined **)(*(longlong *)(DAT_1407bb780 + 0x48) + (longlong)iVar9 * 0x20);
          if ((undefined *)0x7 < ppuVar15[3]) {
            ppuVar15 = (undefined **)*ppuVar15;
          }
        }
        else {
          ppuVar15 = &PTR_140610690;
        }
        local_2f8 = (undefined8 *)0x0;
        uStack_2f0 = 0;
        local_2e8 = 0;
        uStack_2e0 = 0;
        lVar24 = -1;
        do {
          lVar24 = lVar24 + 1;
        } while (*(short *)((longlong)ppuVar15 + lVar24 * 2) != 0);
        FUN_140054cf0(&local_2f8);
        if (puStack_318 == local_310) {
          FUN_140297870(&local_320);
          uVar27 = (ulonglong)local_2d8;
        }
        else {
          *puStack_318 = (ulonglong)local_2f8;
          puStack_318[1] = uStack_2f0;
          *(undefined4 *)(puStack_318 + 2) = (undefined4)local_2e8;
          *(undefined4 *)((longlong)puStack_318 + 0x14) = local_2e8._4_4_;
          *(undefined4 *)(puStack_318 + 3) = (undefined4)uStack_2e0;
          *(undefined4 *)((longlong)puStack_318 + 0x1c) = uStack_2e0._4_4_;
          local_2e8 = 0;
          uStack_2e0 = 7;
          local_2f8 = (undefined8 *)((ulonglong)local_2f8 & 0xffffffffffff0000);
          *(undefined4 *)(puStack_318 + 4) = uVar19;
          puStack_318 = puStack_318 + 5;
        }
        if (7 < uStack_2e0) {
          if ((0xfff < uStack_2e0 * 2 + 2) &&
             (0x1f < (ulonglong)
                     ((longlong)local_2f8 + (-8 - *(longlong *)((longlong)local_2f8 - 8))))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          thunk_FUN_1401fe000();
        }
        local_2e8 = 0;
        uStack_2e0 = 7;
        local_2f8 = (undefined8 *)((ulonglong)local_2f8 & 0xffffffffffff0000);
        uVar11 = DAT_1407bdbd8;
      }
      local_2d8 = (longlong *)(uVar27 + 1);
    } while (local_2d8 < (ulonglong)uVar11);
  }
  uVar27 = 1;
  if (1 < (ulonglong)(((longlong)puStack_318 - (longlong)local_320) / 0x28)) {
    lVar24 = 0x28;
    do {
      lVar28 = (longlong)local_320 + lVar24;
      FUN_140055000(local_2b8,lVar28);
      local_298 = *(undefined4 *)(lVar28 + 0x20);
      iVar9 = (int)uVar27 + -1;
      lVar28 = (longlong)iVar9;
      if (-1 < iVar9) {
        lVar23 = lVar28 * 0x28;
        do {
          iVar10 = FUN_1400545e0(local_2b8,(longlong)local_320 + lVar23);
          if (-1 < iVar10) break;
          puVar20 = (undefined8 *)((longlong)local_320 + lVar23);
          if (puVar20 + 5 != puVar20) {
            puVar16 = puVar20;
            if (7 < (ulonglong)puVar20[3]) {
              puVar16 = (undefined8 *)*puVar20;
            }
            FUN_1400549d0(puVar20 + 5,puVar16,puVar20[2]);
          }
          *(undefined4 *)(puVar20 + 9) = *(undefined4 *)(puVar20 + 4);
          iVar9 = iVar9 + -1;
          lVar23 = lVar23 + -0x28;
          lVar28 = lVar28 + -1;
        } while (-1 < lVar28);
      }
      pppppppuVar4 = (undefined8 *******)(local_320 + ((longlong)iVar9 + 1) * 5);
      if ((undefined8 ********)pppppppuVar4 != local_2b8) {
        pppppppuVar17 = local_2b8;
        if (7 < local_2a0) {
          pppppppuVar17 = local_2b8[0];
        }
        FUN_1400549d0(pppppppuVar4,pppppppuVar17,local_2a8);
      }
      *(undefined4 *)(pppppppuVar4 + 4) = local_298;
      FUN_140055150(local_2b8);
      uVar27 = uVar27 + 1;
      lVar24 = lVar24 + 0x28;
      plVar22 = local_328;
    } while (uVar27 < (ulonglong)(((longlong)puStack_318 - (longlong)local_320) / 0x28));
  }
  puVar8 = puStack_318;
  iVar9 = 0;
  for (puVar21 = local_320; puVar21 != puVar8; puVar21 = puVar21 + 5) {
    local_2d8._4_4_ = (undefined4)((ulonglong)local_2d8 >> 0x20);
    local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,(int)puVar21[4]);
    FUN_140083f10(plVar22 + 0x33,&local_2d8);
    puVar18 = puVar21;
    if (7 < puVar21[3]) {
      puVar18 = (ulonglong *)*puVar21;
    }
    local_2f8 = (undefined8 *)0x0;
    uStack_2f0 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    lVar24 = -1;
    do {
      lVar24 = lVar24 + 1;
    } while (*(short *)((longlong)puVar18 + lVar24 * 2) != 0);
    FUN_140054cf0(&local_2f8);
    local_278 = &local_2f8;
    if (7 < uStack_2e0) {
      local_278 = local_2f8;
    }
    local_288 = 6;
    local_270 = (undefined4)local_2e8;
    local_26c = local_2fc;
    local_268 = 4;
    local_258 = (double)iVar9;
    lVar24 = plVar22[0x5a];
    uVar13 = (*(code *)**(undefined8 **)plVar22[0x45])();
    IggyPlayerCallMethodRS(uVar13,&local_2d8,plVar22 + 0x40,lVar24);
    *(int *)(plVar22 + 0x61) = (int)plVar22[0x61] + 1;
    FUN_140055150(&local_2f8);
    iVar9 = iVar9 + 1;
  }
  *(undefined4 *)((longlong)plVar22 + 0x44c) = 10;
  local_2f8._4_4_ = (undefined4)((ulonglong)local_2f8 >> 0x20);
  local_2f8 = (undefined8 *)CONCAT44(local_2f8._4_4_,4);
  local_2e8 = 0x4024000000000000;
  lVar24 = plVar22[0x9f];
  uVar13 = (*(code *)**(undefined8 **)plVar22[0x91])();
  IggyPlayerCallMethodRS(uVar13,&local_2d8,plVar22 + 0x8c,lVar24);
  uVar27 = 0;
  if (DAT_1407bdc18 - DAT_1407bdc10 >> 3 != 0) {
    do {
      if ((ulonglong)(DAT_1407bdc18 - DAT_1407bdc10 >> 3) <= uVar27) {
                    /* WARNING: Subroutine does not return */
        FUN_140048ae0();
      }
      plVar14 = *(longlong **)(DAT_1407bdc10 + uVar27 * 8);
      uVar11 = (**(code **)(*plVar14 + 8))(plVar14);
      uVar12 = (**(code **)(*plVar14 + 0x10))(plVar14);
      if (uVar11 <= uVar12) {
        do {
          local_328 = (longlong *)CONCAT44(uVar11,(int)plVar14[1]);
          FUN_1400453a0(plVar22 + 0x39,&local_328);
          psVar26 = (short *)local_25e;
          uVar25 = (ulonglong)uVar11;
          do {
            psVar26 = psVar26 + -1;
            uVar7 = uVar25 / 10;
            *psVar26 = (short)uVar25 + (short)uVar7 * -10 + 0x30;
            uVar25 = uVar7;
          } while ((int)uVar7 != 0);
          FUN_14005e650(&local_2d8,psVar26,local_25e);
          iVar9 = (**(code **)(*plVar14 + 0x48))(plVar14);
          if (*DAT_1407bb780 == '\0') {
            pcVar6 = (code *)swi(3);
            plVar14 = (longlong *)(*pcVar6)();
            return plVar14;
          }
          if ((ulonglong)(longlong)iVar9 <
              (ulonglong)
              (*(longlong *)(DAT_1407bb780 + 0x50) - *(longlong *)(DAT_1407bb780 + 0x48) >> 5)) {
            ppuVar15 = (undefined **)((longlong)iVar9 * 0x20 + *(longlong *)(DAT_1407bb780 + 0x48));
            if ((undefined *)0x7 < ppuVar15[3]) {
              ppuVar15 = (undefined **)*ppuVar15;
            }
          }
          else {
            ppuVar15 = &PTR_140610690;
          }
          lVar24 = -1;
          do {
            lVar24 = lVar24 + 1;
          } while (*(short *)((longlong)ppuVar15 + lVar24 * 2) != 0);
          puVar20 = (undefined8 *)FUN_140059e60(&local_2d8,0);
          local_2f8 = (undefined8 *)*puVar20;
          uStack_2f0 = puVar20[1];
          local_2e8 = puVar20[2];
          uStack_2e0 = puVar20[3];
          puVar20[2] = 0;
          puVar20[3] = 7;
          *(undefined2 *)puVar20 = 0;
          FUN_140281340(plVar22 + 0x88,&local_2f8,(int)plVar22[0xad]);
          FUN_140055150(&local_2f8);
          FUN_140055150(&local_2d8);
          uVar11 = uVar11 + 1;
          uVar12 = (**(code **)(*plVar14 + 0x10))(plVar14);
        } while (uVar11 <= uVar12);
      }
      uVar27 = (ulonglong)((int)uVar27 + 1);
    } while (uVar27 < (ulonglong)(DAT_1407bdc18 - DAT_1407bdc10 >> 3));
  }
  plVar14 = plVar22 + 0x62;
  *(undefined4 *)((longlong)plVar22 + 0x31c) = 9;
  local_2f8 = (undefined8 *)CONCAT44(local_2f8._4_4_,4);
  local_2e8 = 0x4022000000000000;
  uVar13 = (*(code *)**(undefined8 **)plVar22[0x6b])();
  IggyPlayerCallMethodRS(uVar13,&local_2d8,plVar22 + 0x66);
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_140054cf0(&local_2f8,L"Chicken",7);
  FUN_140281340(plVar14,&local_2f8,(int)plVar22[0x87]);
  FUN_140055150(&local_2f8);
  plVar1 = plVar22 + 0x36;
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,0xd640004);
  puVar5 = (undefined4 *)plVar22[0x37];
  if (puVar5 == (undefined4 *)plVar22[0x38]) {
    FUN_140297b70(plVar1,puVar5,&local_2d8);
  }
  else {
    *puVar5 = 0xd640004;
    plVar22[0x37] = plVar22[0x37] + 4;
  }
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_140054cf0(&local_2f8,&DAT_140642cd0,3);
  FUN_140281340(plVar14,&local_2f8);
  if (7 < uStack_2e0) {
    if ((0xfff < uStack_2e0 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_2f8 + (-8 - *(longlong *)((longlong)local_2f8 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,0x2d650000);
  puVar5 = (undefined4 *)plVar22[0x37];
  if (puVar5 == (undefined4 *)plVar22[0x38]) {
    FUN_140297b70(plVar1,puVar5,&local_2d8);
  }
  else {
    *puVar5 = 0x2d650000;
    plVar22[0x37] = plVar22[0x37] + 4;
  }
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_140054cf0(&local_2f8,&DAT_1406170c8,3);
  FUN_140281340(plVar14,&local_2f8);
  if (7 < uStack_2e0) {
    if ((0xfff < uStack_2e0 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_2f8 + (-8 - *(longlong *)((longlong)local_2f8 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,0x2d640003);
  puVar5 = (undefined4 *)plVar22[0x37];
  if (puVar5 == (undefined4 *)plVar22[0x38]) {
    FUN_140297b70(plVar1,puVar5,&local_2d8);
  }
  else {
    *puVar5 = 0x2d640003;
    plVar22[0x37] = plVar22[0x37] + 4;
  }
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_140054cf0(&local_2f8,L"Sheep",5);
  FUN_140281340(plVar14,&local_2f8);
  if (7 < uStack_2e0) {
    if ((0xfff < uStack_2e0 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_2f8 + (-8 - *(longlong *)((longlong)local_2f8 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2d8._0_4_ = 0x2d640002;
  puVar5 = (undefined4 *)plVar22[0x37];
  if (puVar5 == (undefined4 *)plVar22[0x38]) {
    FUN_140297b70(plVar1,puVar5,&local_2d8);
  }
  else {
    *puVar5 = 0x2d640002;
    plVar22[0x37] = plVar22[0x37] + 4;
  }
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_140054cf0(&local_2f8,L"Squid",5);
  FUN_140281340(plVar14,&local_2f8,(int)plVar22[0x87]);
  FUN_140055150(&local_2f8);
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,0xd400401);
  puVar5 = (undefined4 *)plVar22[0x37];
  if (puVar5 == (undefined4 *)plVar22[0x38]) {
    FUN_140297b70(plVar1,puVar5,&local_2d8);
  }
  else {
    *puVar5 = 0xd400401;
    plVar22[0x37] = plVar22[0x37] + 4;
  }
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_140054cf0(&local_2f8,L"Wolf",4);
  FUN_140281340(plVar14,&local_2f8);
  if (7 < uStack_2e0) {
    if ((0xfff < uStack_2e0 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_2f8 + (-8 - *(longlong *)((longlong)local_2f8 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,0xd660002);
  puVar5 = (undefined4 *)plVar22[0x37];
  if (puVar5 == (undefined4 *)plVar22[0x38]) {
    FUN_140297b70(plVar1,puVar5,&local_2d8);
  }
  else {
    *puVar5 = 0xd660002;
    plVar22[0x37] = plVar22[0x37] + 4;
  }
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_140054cf0(&local_2f8,L"Creeper",7);
  FUN_140281340(plVar14,&local_2f8);
  if (7 < uStack_2e0) {
    if ((0xfff < uStack_2e0 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_2f8 + (-8 - *(longlong *)((longlong)local_2f8 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,0x5d480001);
  puVar5 = (undefined4 *)plVar22[0x37];
  if (puVar5 == (undefined4 *)plVar22[0x38]) {
    FUN_140297b70(plVar1,puVar5,&local_2d8);
  }
  else {
    *puVar5 = 0x5d480001;
    plVar22[0x37] = plVar22[0x37] + 4;
  }
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_140054cf0(&local_2f8,L"Ghast",5);
  FUN_140281340(plVar14,&local_2f8);
  if (7 < uStack_2e0) {
    if ((0xfff < uStack_2e0 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_2f8 + (-8 - *(longlong *)((longlong)local_2f8 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,0x5d000201);
  puVar5 = (undefined4 *)plVar22[0x37];
  if (puVar5 == (undefined4 *)plVar22[0x38]) {
    FUN_140297b70(plVar1,puVar5,&local_2d8);
  }
  else {
    *puVar5 = 0x5d000201;
    plVar22[0x37] = plVar22[0x37] + 4;
  }
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_140054cf0(&local_2f8,L"Pig Zombie",10);
  FUN_140281340(plVar14,&local_2f8);
  if (7 < uStack_2e0) {
    if ((0xfff < uStack_2e0 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_2f8 + (-8 - *(longlong *)((longlong)local_2f8 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,0x5d484001);
  puVar5 = (undefined4 *)plVar22[0x37];
  if (puVar5 == (undefined4 *)plVar22[0x38]) {
    FUN_140297b70(plVar1,puVar5,&local_2d8);
  }
  else {
    *puVar5 = 0x5d484001;
    plVar22[0x37] = plVar22[0x37] + 4;
  }
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_140054cf0(&local_2f8,L"Skeleton",8);
  FUN_140281340(plVar14,&local_2f8);
  if (7 < uStack_2e0) {
    if ((0xfff < uStack_2e0 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_2f8 + (-8 - *(longlong *)((longlong)local_2f8 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,0x5d480003);
  puVar5 = (undefined4 *)plVar22[0x37];
  if (puVar5 == (undefined4 *)plVar22[0x38]) {
    FUN_140297b70(plVar1,puVar5,&local_2d8);
  }
  else {
    *puVar5 = 0x5d480003;
    plVar22[0x37] = plVar22[0x37] + 4;
  }
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_140054cf0(&local_2f8,L"Slime",5);
  FUN_140281340(plVar14,&local_2f8);
  if (7 < uStack_2e0) {
    if ((0xfff < uStack_2e0 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_2f8 + (-8 - *(longlong *)((longlong)local_2f8 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,0x5d002000);
  puVar5 = (undefined4 *)plVar22[0x37];
  if (puVar5 == (undefined4 *)plVar22[0x38]) {
    FUN_140297b70(plVar1,puVar5,&local_2d8);
  }
  else {
    *puVar5 = 0x5d002000;
    plVar22[0x37] = plVar22[0x37] + 4;
  }
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_140054cf0(&local_2f8,L"Spider",6);
  FUN_140281340(plVar14,&local_2f8);
  if (7 < uStack_2e0) {
    if ((0xfff < uStack_2e0 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_2f8 + (-8 - *(longlong *)((longlong)local_2f8 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,0x5d488000);
  puVar5 = (undefined4 *)plVar22[0x37];
  if (puVar5 == (undefined4 *)plVar22[0x38]) {
    FUN_140297b70(plVar1,puVar5,&local_2d8);
  }
  else {
    *puVar5 = 0x5d488000;
    plVar22[0x37] = plVar22[0x37] + 4;
  }
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_140054cf0(&local_2f8,L"Zombie",6);
  FUN_140281340(plVar14,&local_2f8);
  if (7 < uStack_2e0) {
    if ((0xfff < uStack_2e0 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_2f8 + (-8 - *(longlong *)((longlong)local_2f8 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,0x5d484000);
  puVar5 = (undefined4 *)plVar22[0x37];
  if (puVar5 == (undefined4 *)plVar22[0x38]) {
    FUN_140297b70(plVar1,puVar5,&local_2d8);
  }
  else {
    *puVar5 = 0x5d484000;
    plVar22[0x37] = plVar22[0x37] + 4;
  }
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_140054cf0(&local_2f8,L"Enderman",8);
  FUN_140281340(plVar14,&local_2f8);
  if (7 < uStack_2e0) {
    if ((0xfff < uStack_2e0 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_2f8 + (-8 - *(longlong *)((longlong)local_2f8 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,0x5d480004);
  puVar5 = (undefined4 *)plVar22[0x37];
  if (puVar5 == (undefined4 *)plVar22[0x38]) {
    FUN_140297b70(plVar1,puVar5,&local_2d8);
  }
  else {
    *puVar5 = 0x5d480004;
    plVar22[0x37] = plVar22[0x37] + 4;
  }
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_140054cf0(&local_2f8,L"Silverfish",10);
  FUN_140281340(plVar14,&local_2f8);
  if (7 < uStack_2e0) {
    if ((0xfff < uStack_2e0 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_2f8 + (-8 - *(longlong *)((longlong)local_2f8 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,0x5d480005);
  puVar5 = (undefined4 *)plVar22[0x37];
  if (puVar5 == (undefined4 *)plVar22[0x38]) {
    FUN_140297b70(plVar1,puVar5,&local_2d8);
  }
  else {
    *puVar5 = 0x5d480005;
    plVar22[0x37] = plVar22[0x37] + 4;
  }
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_140054cf0(&local_2f8,L"Cave Spider",0xb);
  FUN_140281340(plVar14,&local_2f8);
  if (7 < uStack_2e0) {
    if ((0xfff < uStack_2e0 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_2f8 + (-8 - *(longlong *)((longlong)local_2f8 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2d8._0_4_ = 0x5d488001;
  puVar5 = (undefined4 *)plVar22[0x37];
  if (puVar5 == (undefined4 *)plVar22[0x38]) {
    FUN_140297b70(plVar1,puVar5,&local_2d8);
  }
  else {
    *puVar5 = 0x5d488001;
    plVar22[0x37] = plVar22[0x37] + 4;
  }
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_140054cf0(&local_2f8,L"Mooshroom",9);
  FUN_140281340(plVar14,&local_2f8,(int)plVar22[0x87]);
  FUN_140055150(&local_2f8);
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,0x2d650001);
  puVar5 = (undefined4 *)plVar22[0x37];
  if (puVar5 == (undefined4 *)plVar22[0x38]) {
    FUN_140297b70(plVar1,puVar5,&local_2d8);
  }
  else {
    *puVar5 = 0x2d650001;
    plVar22[0x37] = plVar22[0x37] + 4;
  }
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_140054cf0(&local_2f8,L"Snow Golem",10);
  FUN_140281340(plVar14,&local_2f8);
  if (7 < uStack_2e0) {
    if ((0xfff < uStack_2e0 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_2f8 + (-8 - *(longlong *)((longlong)local_2f8 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,0x2d500001);
  puVar5 = (undefined4 *)plVar22[0x37];
  if (puVar5 == (undefined4 *)plVar22[0x38]) {
    FUN_140297b70(plVar1,puVar5,&local_2d8);
  }
  else {
    *puVar5 = 0x2d500001;
    plVar22[0x37] = plVar22[0x37] + 4;
  }
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_140054cf0(&local_2f8,L"Ender Dragon",0xc);
  FUN_140281340(plVar14,&local_2f8);
  if (7 < uStack_2e0) {
    if ((0xfff < uStack_2e0 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_2f8 + (-8 - *(longlong *)((longlong)local_2f8 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,0xd000005);
  puVar5 = (undefined4 *)plVar22[0x37];
  if (puVar5 == (undefined4 *)plVar22[0x38]) {
    FUN_140297b70(plVar1,puVar5,&local_2d8);
  }
  else {
    *puVar5 = 0xd000005;
    plVar22[0x37] = plVar22[0x37] + 4;
  }
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_140054cf0(&local_2f8,L"Blaze",5);
  FUN_140281340(plVar14,&local_2f8);
  if (7 < uStack_2e0) {
    if ((0xfff < uStack_2e0 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_2f8 + (-8 - *(longlong *)((longlong)local_2f8 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,0x5d480006);
  puVar5 = (undefined4 *)plVar22[0x37];
  if (puVar5 == (undefined4 *)plVar22[0x38]) {
    FUN_140297b70(plVar1,puVar5,&local_2d8);
  }
  else {
    *puVar5 = 0x5d480006;
    plVar22[0x37] = plVar22[0x37] + 4;
  }
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_140054cf0(&local_2f8,L"Magma Cube",10);
  FUN_140281340(plVar14,&local_2f8);
  if (7 < uStack_2e0) {
    if ((0xfff < uStack_2e0 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_2f8 + (-8 - *(longlong *)((longlong)local_2f8 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,0x5d002001);
  if ((undefined4 *)plVar22[0x37] == (undefined4 *)plVar22[0x38]) {
    FUN_140297b70(plVar1);
  }
  else {
    *(undefined4 *)plVar22[0x37] = 0x5d002001;
    plVar22[0x37] = plVar22[0x37] + 4;
  }
  puVar8 = puStack_318;
  puVar21 = local_320;
  if (local_320 != (ulonglong *)0x0) {
    for (; puVar21 != puVar8; puVar21 = puVar21 + 5) {
      FUN_140055150(puVar21);
    }
    puVar21 = local_320;
    if ((0xfff < (ulonglong)((((longlong)local_310 - (longlong)local_320) / 0x28) * 0x28)) &&
       (puVar21 = (ulonglong *)local_320[-1],
       0x1f < (ulonglong)((longlong)local_320 + (-8 - (longlong)puVar21)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000(puVar21);
  }
  return plVar22;
}



// ===== FUN_140297870 @ 0x140297870 [profile] =====

undefined8 *
FUN_140297870(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  
  lVar10 = *param_1;
  uVar15 = 0x666666666666666;
  lVar16 = ((longlong)param_2 - lVar10) / 0x28;
  lVar14 = (param_1[1] - lVar10) / 0x28;
  if (lVar14 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_140050870();
  }
  uVar1 = lVar14 + 1;
  uVar3 = (param_1[2] - lVar10) / 0x28;
  if (uVar3 <= 0x666666666666666 - (uVar3 >> 1)) {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar15 = uVar1;
    if (uVar1 <= uVar3) {
      uVar15 = uVar3;
    }
    if (0x666666666666666 < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_140054fe0();
    }
  }
  lVar10 = FUN_140054e60(uVar15 * 0x28);
  puVar4 = (undefined8 *)(lVar10 + lVar16 * 0x28);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined8 *)(lVar10 + 0x10 + lVar16 * 0x28) = 0;
  puVar4 = (undefined8 *)(lVar10 + lVar16 * 0x28);
  puVar4[3] = 0;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  *(undefined4 *)puVar4 = *param_3;
  *(undefined4 *)((longlong)puVar4 + 4) = uVar6;
  *(undefined4 *)(puVar4 + 1) = uVar7;
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar8;
  uVar9 = *(undefined8 *)(param_3 + 6);
  puVar4[2] = *(undefined8 *)(param_3 + 4);
  puVar4[3] = uVar9;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 7;
  *(undefined2 *)param_3 = 0;
  *(undefined4 *)(puVar4 + 4) = *param_4;
  puVar5 = (undefined4 *)param_1[1];
  puVar11 = (undefined4 *)*param_1;
  if (param_2 == puVar5) {
    if (puVar11 != puVar5) {
      puVar13 = (undefined8 *)(lVar10 + 0x18);
      do {
        puVar13[-3] = 0;
        puVar13[-2] = 0;
        puVar13[-1] = 0;
        *puVar13 = 0;
        uVar6 = puVar11[1];
        uVar7 = puVar11[2];
        uVar8 = puVar11[3];
        *(undefined4 *)(puVar13 + -3) = *puVar11;
        *(undefined4 *)((longlong)puVar13 + -0x14) = uVar6;
        *(undefined4 *)(puVar13 + -2) = uVar7;
        *(undefined4 *)((longlong)puVar13 + -0xc) = uVar8;
        uVar9 = *(undefined8 *)(puVar11 + 6);
        puVar13[-1] = *(undefined8 *)(puVar11 + 4);
        *puVar13 = uVar9;
        *(undefined8 *)(puVar11 + 4) = 0;
        *(undefined8 *)(puVar11 + 6) = 7;
        *(undefined2 *)puVar11 = 0;
        puVar2 = puVar11 + 8;
        puVar11 = puVar11 + 10;
        *(undefined4 *)(puVar13 + 1) = *puVar2;
        puVar13 = puVar13 + 5;
      } while (puVar11 != puVar5);
    }
  }
  else {
    if (puVar11 != param_2) {
      puVar13 = (undefined8 *)(lVar10 + 0x18);
      do {
        puVar13[-3] = 0;
        puVar13[-2] = 0;
        puVar13[-1] = 0;
        *puVar13 = 0;
        uVar6 = puVar11[1];
        uVar7 = puVar11[2];
        uVar8 = puVar11[3];
        *(undefined4 *)(puVar13 + -3) = *puVar11;
        *(undefined4 *)((longlong)puVar13 + -0x14) = uVar6;
        *(undefined4 *)(puVar13 + -2) = uVar7;
        *(undefined4 *)((longlong)puVar13 + -0xc) = uVar8;
        uVar9 = *(undefined8 *)(puVar11 + 6);
        puVar13[-1] = *(undefined8 *)(puVar11 + 4);
        *puVar13 = uVar9;
        *(undefined8 *)(puVar11 + 4) = 0;
        *(undefined8 *)(puVar11 + 6) = 7;
        *(undefined2 *)puVar11 = 0;
        puVar5 = puVar11 + 8;
        puVar11 = puVar11 + 10;
        *(undefined4 *)(puVar13 + 1) = *puVar5;
        puVar13 = puVar13 + 5;
      } while (puVar11 != param_2);
    }
    puVar5 = (undefined4 *)param_1[1];
    puVar13 = puVar4;
    for (; param_2 != puVar5; param_2 = param_2 + 10) {
      puVar12 = puVar13 + 5;
      *puVar12 = 0;
      puVar13[6] = 0;
      puVar13[7] = 0;
      puVar13[8] = 0;
      uVar6 = param_2[1];
      uVar7 = param_2[2];
      uVar8 = param_2[3];
      *(undefined4 *)puVar12 = *param_2;
      *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar6;
      *(undefined4 *)(puVar13 + 6) = uVar7;
      *(undefined4 *)((longlong)puVar13 + 0x34) = uVar8;
      uVar9 = *(undefined8 *)(param_2 + 6);
      puVar13[7] = *(undefined8 *)(param_2 + 4);
      puVar13[8] = uVar9;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 7;
      *(undefined2 *)param_2 = 0;
      *(undefined4 *)(puVar13 + 9) = param_2[8];
      puVar13 = puVar12;
    }
  }
  lVar14 = *param_1;
  if (lVar14 != 0) {
    lVar16 = param_1[1];
    for (; lVar14 != lVar16; lVar14 = lVar14 + 0x28) {
      FUN_140055150(lVar14);
    }
    lVar14 = *param_1;
    lVar16 = lVar14;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar14) / 0x28) * 0x28)) &&
       (lVar16 = *(longlong *)(lVar14 + -8), 0x1f < (lVar14 - lVar16) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000(lVar16);
  }
  *param_1 = lVar10;
  param_1[1] = lVar10 + uVar1 * 0x28;
  param_1[2] = uVar15 * 0x28 + lVar10;
  return puVar4;
}



// ===== FUN_140297b70 @ 0x140297b70 [profile] =====

longlong FUN_140297b70(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar7 = param_2 - lVar2 >> 2;
  lVar3 = param_1[1] - lVar2 >> 2;
  if (lVar3 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140050870();
  }
  uVar5 = param_1[2] - lVar2 >> 2;
  uVar1 = lVar3 + 1;
  if (0x3fffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar6 = 0x3fffffffffffffff;
  }
  else {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar6 = uVar1;
    if (uVar1 <= uVar5) {
      uVar6 = uVar5;
    }
    if (0x3fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_140054fe0();
    }
  }
  lVar4 = FUN_140054e60(uVar6 * 4);
  *(undefined4 *)(lVar4 + lVar7 * 4) = *param_3;
  lVar3 = *param_1;
  lVar2 = lVar4 + lVar7 * 4;
  lVar7 = lVar4;
  if (param_2 != param_1[1]) {
    FUN_140596110(lVar4,lVar3,param_2 - lVar3);
    lVar7 = lVar2 + 4;
    lVar3 = param_2;
  }
  FUN_140596110(lVar7,lVar3);
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar7 = lVar3;
    if ((0xfff < (param_1[2] - lVar3 & 0xfffffffffffffffcU)) &&
       (lVar7 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar7) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000(lVar7);
  }
  *param_1 = lVar4;
  param_1[1] = lVar4 + uVar1 * 4;
  param_1[2] = uVar6 * 4 + lVar4;
  return lVar2;
}



// ===== FUN_1402b8aa0 @ 0x1402b8aa0 [profile] =====

undefined8 * FUN_1402b8aa0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_140054cf0(param_2,L"TrialExitUpsell",0xf);
  return param_2;
}



// ===== FUN_1402c1160 @ 0x1402c1160 [profile,ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1402c1160(longlong *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  longlong lVar6;
  undefined8 *******pppppppuVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 *******pppppppuVar13;
  undefined **ppuVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined **ppuVar20;
  bool bVar21;
  undefined1 auStackY_298 [32];
  longlong local_250;
  longlong lStack_248;
  undefined8 local_240;
  longlong *local_238;
  undefined1 local_230 [32];
  undefined8 *******local_210;
  undefined8 uStack_208;
  ulonglong local_200;
  ulonglong local_1f8;
  undefined8 *******local_1f0;
  longlong lStack_1e8;
  ulonglong local_1e0;
  ulonglong uStack_1d8;
  undefined8 *******local_1d0;
  undefined8 uStack_1c8;
  ulonglong local_1c0;
  ulonglong uStack_1b8;
  undefined8 *******local_1b0;
  undefined8 uStack_1a8;
  ulonglong local_1a0;
  ulonglong uStack_198;
  undefined8 *******local_190 [3];
  ulonglong local_178;
  ulonglong local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  ulonglong local_158;
  undefined8 *******local_150 [2];
  ulonglong local_140;
  ulonglong local_138;
  undefined8 *******local_130 [2];
  ulonglong local_120;
  ulonglong local_118;
  undefined8 *******local_110 [2];
  ulonglong local_100;
  ulonglong local_f8;
  undefined8 *******local_f0 [2];
  ulonglong local_e0;
  ulonglong local_d8;
  short local_c8 [64];
  ulonglong local_48;
  
  local_48 = DAT_1407502c0 ^ (ulonglong)auStackY_298;
  uVar17 = 0;
  *(int *)(param_1 + 0x33) = param_2;
  ppuVar20 = &PTR_140610690;
  local_238 = param_1;
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((ulonglong)(longlong)*(int *)(&DAT_14076e8f0 + (longlong)param_2 * 0xc) <
      (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - *(longlong *)(DAT_1407bb780 + 0x48) >> 5)) {
    ppuVar14 = (undefined **)
               (*(longlong *)(DAT_1407bb780 + 0x48) +
               (longlong)*(int *)(&DAT_14076e8f0 + (longlong)param_2 * 0xc) * 0x20);
    if ((undefined *)0x7 < ppuVar14[3]) {
      ppuVar14 = (undefined **)*ppuVar14;
    }
  }
  else {
    ppuVar14 = &PTR_140610690;
  }
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  local_158 = 0;
  lVar18 = -1;
  do {
    lVar18 = lVar18 + 1;
  } while (*(short *)((longlong)ppuVar14 + lVar18 * 2) != 0);
  FUN_140054cf0(&local_170);
  FUN_140039b00(&DAT_1407bb5d0,local_190);
  if (7 < local_158) {
    if ((0xfff < local_158 * 2 + 2) && (0x1f < (local_170 - *(longlong *)(local_170 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_160 = 0;
  local_158 = 7;
  local_170 = local_170 & 0xffffffffffff0000;
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x8d1) {
    ppuVar14 = &PTR_140610690;
  }
  else {
    ppuVar14 = (undefined **)(lVar18 + 0x11a00);
    if (7 < *(ulonglong *)(lVar18 + 0x11a18)) {
      ppuVar14 = (undefined **)*ppuVar14;
    }
  }
  local_210 = (undefined8 *******)0x0;
  uStack_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  lVar18 = -1;
  do {
    lVar18 = lVar18 + 1;
  } while (*(short *)((longlong)ppuVar14 + lVar18 * 2) != 0);
  FUN_140054cf0(&local_210);
  local_1f0 = (undefined8 *******)0x0;
  lStack_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  FUN_140054cf0(&local_1f0,L"{*KICK_PLAYER_DESCRIPTION*}",0x1b);
  FUN_140055000(local_150,local_190);
  uVar16 = uVar17;
  do {
    pppppppuVar7 = local_150;
    if (7 < local_138) {
      pppppppuVar7 = local_150[0];
    }
    if ((local_140 < local_1e0) || (local_140 - local_1e0 < uVar16)) break;
    if (local_1e0 != 0) {
      lVar18 = (longlong)pppppppuVar7 + local_140 * 2;
      lVar6 = thunk_FUN_140556fb0((longlong)pppppppuVar7 + uVar16 * 2,lVar18);
      if (lVar6 == lVar18) break;
      uVar16 = lVar6 - (longlong)pppppppuVar7 >> 1;
    }
    if (uVar16 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_150,uVar16);
    uVar16 = uVar16 + 1;
  } while( true );
  FUN_1400546d0(local_190,local_150);
  FUN_140055150(local_150);
  FUN_140055150(&local_1f0);
  if (7 < local_1f8) {
    if ((0xfff < local_1f8 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_210 + (-8 - (longlong)local_210[-1])))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_200 = 0;
  local_1f8 = 7;
  local_210 = (undefined8 *******)((ulonglong)local_210 & 0xffffffffffff0000);
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5) < 0x8cf) {
    ppuVar14 = &PTR_140610690;
  }
  else {
    ppuVar14 = (undefined **)(lVar18 + 0x119c0);
    if (7 < *(ulonglong *)(lVar18 + 0x119d8)) {
      ppuVar14 = (undefined **)*ppuVar14;
    }
  }
  local_1f0 = (undefined8 *******)0x0;
  lStack_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  lVar18 = -1;
  do {
    lVar18 = lVar18 + 1;
  } while (*(short *)((longlong)ppuVar14 + lVar18 * 2) != 0);
  FUN_140054cf0(&local_1f0);
  local_210 = (undefined8 *******)0x0;
  uStack_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  FUN_140054cf0(&local_210,L"{*BACK_BUTTON*}",0xf);
  FUN_140055000(local_130,local_190);
  uVar16 = uVar17;
  do {
    pppppppuVar7 = local_130;
    if (7 < local_118) {
      pppppppuVar7 = local_130[0];
    }
    if ((local_120 < local_200) || (local_120 - local_200 < uVar16)) break;
    if (local_200 != 0) {
      lVar18 = (longlong)pppppppuVar7 + local_120 * 2;
      lVar6 = thunk_FUN_140556fb0((longlong)pppppppuVar7 + uVar16 * 2,lVar18);
      if (lVar6 == lVar18) break;
      uVar16 = lVar6 - (longlong)pppppppuVar7 >> 1;
    }
    if (uVar16 == 0xffffffffffffffff) break;
    FUN_1400a47c0(local_130,uVar16);
    uVar16 = uVar16 + 1;
  } while( true );
  FUN_1400546d0(local_190,local_130);
  FUN_140055150(local_130);
  if (7 < local_1f8) {
    if ((0xfff < local_1f8 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_210 + (-8 - (longlong)local_210[-1])))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_200 = 0;
  local_1f8 = 7;
  local_210 = (undefined8 *******)((ulonglong)local_210 & 0xffffffffffff0000);
  FUN_140055150(&local_1f0);
  if (*DAT_1407bb780 == '\0') {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar18 = *(longlong *)(DAT_1407bb780 + 0x48);
  if ((0x8cf < (ulonglong)(*(longlong *)(DAT_1407bb780 + 0x50) - lVar18 >> 5)) &&
     (ppuVar20 = (undefined **)(lVar18 + 0x119e0), 7 < *(ulonglong *)(lVar18 + 0x119f8))) {
    ppuVar20 = (undefined **)*ppuVar20;
  }
  local_1f0 = (undefined8 *******)0x0;
  lStack_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  lVar18 = -1;
  do {
    lVar18 = lVar18 + 1;
  } while (*(short *)((longlong)ppuVar20 + lVar18 * 2) != 0);
  FUN_140054cf0(&local_1f0,ppuVar20);
  local_210 = (undefined8 *******)0x0;
  uStack_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  FUN_140054cf0(&local_210,L"{*DISABLES_ACHIEVEMENTS*}",0x19);
  FUN_140055000(local_110,local_190);
  uVar16 = uVar17;
  do {
    pppppppuVar7 = local_110;
    if (7 < local_f8) {
      pppppppuVar7 = local_110[0];
    }
    if ((local_100 < local_200) || (local_100 - local_200 < uVar16)) goto LAB_1402c17b1;
    if (local_200 != 0) {
      lVar18 = (longlong)pppppppuVar7 + local_100 * 2;
      lVar6 = thunk_FUN_140556fb0((longlong)pppppppuVar7 + uVar16 * 2,lVar18);
      if (lVar6 == lVar18) goto LAB_1402c17b1;
      uVar16 = lVar6 - (longlong)pppppppuVar7 >> 1;
    }
    if (uVar16 == 0xffffffffffffffff) goto LAB_1402c17b1;
    FUN_1400a47c0(local_110,uVar16);
    uVar16 = uVar16 + 1;
  } while( true );
LAB_1402c1bc1:
  FUN_1400546d0(local_190,local_f0);
  FUN_140055150(local_f0);
  FUN_140055150(&local_1f0);
  if (7 < local_1f8) {
    if ((0xfff < local_1f8 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_210 + (-8 - (longlong)local_210[-1])))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  goto LAB_1402c1c2d;
LAB_1402c17b1:
  FUN_1400546d0(local_190,local_110);
  FUN_140055150(local_110);
  if (7 < local_1f8) {
    if ((0xfff < local_1f8 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_210 + (-8 - (longlong)local_210[-1])))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  local_200 = 0;
  local_1f8 = 7;
  local_210 = (undefined8 *******)((ulonglong)local_210 & 0xffffffffffff0000);
  if (7 < uStack_1d8) {
    if ((0xfff < uStack_1d8 * 2 + 2) &&
       (0x1f < (ulonglong)((longlong)local_1f0 + (-8 - (longlong)local_1f0[-1])))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    thunk_FUN_1401fe000();
  }
  uVar16 = 1;
  if (DAT_1407bc4b4 != 1) {
    local_210 = (undefined8 *******)0x0;
    uStack_208 = 0;
    local_200 = 0;
    local_1f8 = 0;
    FUN_140054cf0(&local_210,&DAT_1406463a8,3);
    local_1f0 = (undefined8 *******)0x0;
    lStack_1e8 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    FUN_140054cf0(&local_1f0,&DAT_1406463b0,1);
    FUN_140055000(&local_1d0,local_190);
    uVar15 = uVar17;
    while( true ) {
      pppppppuVar7 = &local_1f0;
      if (7 < uStack_1d8) {
        pppppppuVar7 = local_1f0;
      }
      pppppppuVar13 = &local_1d0;
      if (7 < uStack_1b8) {
        pppppppuVar13 = local_1d0;
      }
      lVar18 = FUN_1400a4750(pppppppuVar13,local_1c0,uVar15,pppppppuVar7);
      if (lVar18 == -1) break;
      pppppppuVar7 = &local_210;
      if (7 < local_1f8) {
        pppppppuVar7 = local_210;
      }
      FUN_1400a47c0(&local_1d0,lVar18,local_1e0,pppppppuVar7);
      uVar15 = lVar18 + 1;
    }
    FUN_1400546d0(local_190,&local_1d0);
    FUN_140055150(&local_1d0);
    FUN_140055150(&local_1f0);
    FUN_140055150(&local_210);
    local_210 = (undefined8 *******)0x0;
    uStack_208 = 0;
    local_200 = 0;
    local_1f8 = 0;
    FUN_140054cf0(&local_210,&DAT_140646378,3);
    local_1f0 = (undefined8 *******)0x0;
    lStack_1e8 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    FUN_140054cf0(&local_1f0,&DAT_140646380,1);
    FUN_140055000(&local_1d0,local_190);
    while( true ) {
      pppppppuVar7 = &local_1d0;
      if (7 < uStack_1b8) {
        pppppppuVar7 = local_1d0;
      }
      lVar18 = FUN_1400a4750(pppppppuVar7,local_1c0);
      if (lVar18 == -1) break;
      pppppppuVar7 = &local_210;
      if (7 < local_1f8) {
        pppppppuVar7 = local_210;
      }
      FUN_1400a47c0(&local_1d0,lVar18,local_1e0,pppppppuVar7);
    }
    FUN_1400546d0(local_190,&local_1d0);
    FUN_140055150(&local_1d0);
    FUN_140055150(&local_1f0);
    if (7 < local_1f8) {
      if ((0xfff < local_1f8 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_210 + (-8 - (longlong)local_210[-1])))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
    local_210 = (undefined8 *******)0x0;
    uStack_208 = 0;
    local_200 = 0;
    local_1f8 = 0;
    FUN_140054cf0(&local_210,&DAT_14061b83c,1);
    local_1f0 = (undefined8 *******)0x0;
    lStack_1e8 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    FUN_140054cf0(&local_1f0,&DAT_140646384,1);
    FUN_140055000(local_f0,local_190);
    uVar15 = uVar17;
    do {
      pppppppuVar7 = local_f0;
      if (7 < local_d8) {
        pppppppuVar7 = local_f0[0];
      }
      if ((local_e0 < local_1e0) || (local_e0 - local_1e0 < uVar15)) goto LAB_1402c1bc1;
      if (local_1e0 != 0) {
        lVar18 = (longlong)pppppppuVar7 + local_e0 * 2;
        lVar6 = thunk_FUN_140556fb0((longlong)pppppppuVar7 + uVar15 * 2,lVar18);
        if (lVar6 == lVar18) goto LAB_1402c1bc1;
        uVar15 = lVar6 - (longlong)pppppppuVar7 >> 1;
      }
      if (uVar15 == 0xffffffffffffffff) goto LAB_1402c1bc1;
      FUN_1400a47c0(local_f0,uVar15);
      uVar15 = uVar15 + 1;
    } while( true );
  }
LAB_1402c1c2d:
  FUN_140316370(local_190);
  pppppppuVar7 = local_190;
  if (7 < local_178) {
    pppppppuVar7 = local_190[0];
  }
  local_1b0 = (undefined8 *******)0x0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  lVar18 = -1;
  do {
    lVar18 = lVar18 + 1;
  } while (*(short *)((longlong)pppppppuVar7 + lVar18 * 2) != 0);
  FUN_140054cf0(&local_1b0);
  lVar18 = *(longlong *)(DAT_140790e60 + 0x238);
  cVar5 = (**(code **)**(undefined8 **)(lVar18 + 0xb8))();
  plVar8 = DAT_1407915a8;
  if (cVar5 != '\0') {
    plVar8 = *(longlong **)(lVar18 + 0xb8);
  }
  lVar18 = (**(code **)(*plVar8 + 0xd8))();
  FUN_1400547f0(local_c8,0x40,L"<font color=\"#%08x\">",*(undefined4 *)(lVar18 + 0x474));
  uVar15 = 0xffffffffffffffff;
  do {
    uVar15 = uVar15 + 1;
  } while (local_c8[uVar15] != 0);
  if (uVar15 <= 0x7ffffffffffffffe - local_1a0) {
    FUN_140048da0(&local_1d0);
    if (7 < uStack_198) {
      if ((0xfff < uStack_198 * 2 + 2) &&
         (0x1f < (ulonglong)((longlong)local_1b0 + (-8 - (longlong)local_1b0[-1])))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      thunk_FUN_1401fe000();
    }
    local_1b0 = local_1d0;
    uStack_1a8 = uStack_1c8;
    local_1a0 = local_1c0;
    uStack_198 = uStack_1b8;
    local_1c0 = 0;
    uStack_1b8 = 7;
    local_1d0 = (undefined8 *******)((ulonglong)local_1d0 & 0xffffffffffff0000);
    FUN_140055150(&local_1d0);
    local_250 = 0;
    lStack_248 = 0;
    local_240 = 0;
    pppppppuVar7 = &local_1b0;
    if (7 < uStack_198) {
      pppppppuVar7 = local_1b0;
    }
    uVar15 = uVar17;
    if ((local_1a0 < 2) ||
       (lVar18 = (longlong)pppppppuVar7 + local_1a0 * 2,
       lVar6 = thunk_FUN_140556fb0(pppppppuVar7,lVar18,&DAT_140643c70), lVar6 == lVar18)) {
      lVar18 = -1;
    }
    else {
      lVar18 = lVar6 - (longlong)pppppppuVar7 >> 1;
    }
    while( true ) {
      if (lVar18 == -1) {
        local_1d0 = (undefined8 *******)0x0;
        uStack_1c8 = 0;
        local_1c0 = 0;
        uStack_1b8 = 0;
        if (local_1a0 < uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_140051220();
        }
        pppppppuVar7 = &local_1b0;
        if (7 < uStack_198) {
          pppppppuVar7 = local_1b0;
        }
        FUN_140054cf0(&local_1d0,(longlong)pppppppuVar7 + uVar15 * 2);
        FUN_140047fd0(&local_250,&local_1d0);
        FUN_140055150(&local_1d0);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (lStack_248 - local_250 >> 5) + 1;
        uVar9 = SUB168(ZEXT816(0x20) * auVar3,0);
        if (SUB168(ZEXT816(0x20) * auVar3,8) != 0) {
          uVar9 = 0xffffffffffffffff;
        }
        puVar10 = (undefined4 *)thunk_FUN_140558c80(uVar9);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = lStack_248 - local_250 >> 5;
        uVar9 = SUB168(ZEXT816(0x10) * auVar4,0);
        if (SUB168(ZEXT816(0x10) * auVar4,8) != 0) {
          uVar9 = 0xffffffffffffffff;
        }
        lVar18 = thunk_FUN_140558c80(uVar9);
        plVar8 = local_238;
        *puVar10 = 4;
        *(double *)(puVar10 + 4) = (double)*(int *)(&DAT_14060b9f0 + (longlong)param_2 * 4);
        if (lStack_248 - local_250 >> 5 != 0) {
          do {
            plVar11 = (longlong *)(local_250 + uVar17 * 0x20);
            if (7 < (ulonglong)plVar11[3]) {
              plVar11 = (longlong *)*plVar11;
            }
            plVar1 = (longlong *)(lVar18 + uVar17 * 0x10);
            *plVar1 = (longlong)plVar11;
            *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(local_250 + 0x10 + uVar17 * 0x20);
            puVar10[uVar16 * 8] = 6;
            lVar6 = plVar1[1];
            *(longlong *)(puVar10 + uVar16 * 8 + 4) = *plVar1;
            *(longlong *)((longlong)(puVar10 + uVar16 * 8 + 4) + 8) = lVar6;
            bVar21 = uVar16 < (ulonglong)(lStack_248 - local_250 >> 5);
            uVar17 = uVar16;
            uVar16 = (ulonglong)((int)uVar16 + 1);
          } while (bVar21);
        }
        lVar6 = local_238[0x34];
        uVar9 = (**(code **)*local_238)(local_238);
        uVar9 = IggyPlayerRootPath(uVar9);
        uVar12 = (**(code **)*plVar8)(plVar8);
        IggyPlayerCallMethodRS(uVar12,local_230,uVar9,lVar6);
        thunk_FUN_1401fe000(puVar10);
        thunk_FUN_1401fe000(lVar18);
        (**(code **)(*plVar8 + 0x78))(plVar8);
        (**(code **)(*DAT_1407ba830 + 0x60))
                  (DAT_1407ba830,*(undefined4 *)((longlong)plVar8 + 0x174),0x10,param_2);
        FUN_140048c80(&local_250);
        FUN_140055150(&local_1b0);
        FUN_140055150(local_190);
        return;
      }
      local_1d0 = (undefined8 *******)0x0;
      uStack_1c8 = 0;
      local_1c0 = 0;
      uStack_1b8 = 0;
      if (local_1a0 < uVar15) break;
      uVar19 = lVar18 - uVar15;
      if (local_1a0 - uVar15 < lVar18 - uVar15) {
        uVar19 = local_1a0 - uVar15;
      }
      pppppppuVar7 = &local_1b0;
      if (7 < uStack_198) {
        pppppppuVar7 = local_1b0;
      }
      FUN_140054cf0(&local_1d0,(longlong)pppppppuVar7 + uVar15 * 2,uVar19);
      plVar8 = (longlong *)FUN_140048d20(&local_1d0,&DAT_140614cc0);
      local_1f0 = (undefined8 *******)*plVar8;
      lStack_1e8 = plVar8[1];
      local_1e0 = plVar8[2];
      uStack_1d8 = plVar8[3];
      plVar8[2] = 0;
      plVar8[3] = 7;
      *(undefined2 *)plVar8 = 0;
      FUN_140047fd0(&local_250,&local_1f0);
      if (7 < uStack_1d8) {
        if ((0xfff < uStack_1d8 * 2 + 2) &&
           (0x1f < (ulonglong)((longlong)local_1f0 + (-8 - (longlong)local_1f0[-1])))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        thunk_FUN_1401fe000();
      }
      if (7 < uStack_1b8) {
        if ((0xfff < uStack_1b8 * 2 + 2) &&
           (0x1f < (ulonglong)((longlong)local_1d0 + (-8 - (longlong)local_1d0[-1])))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        thunk_FUN_1401fe000();
      }
      uVar15 = lVar18 + 2;
      pppppppuVar7 = &local_1b0;
      if (7 < uStack_198) {
        pppppppuVar7 = local_1b0;
      }
      if (((local_1a0 < 2) || (local_1a0 - 2 < uVar15)) ||
         (lVar18 = (longlong)pppppppuVar7 + local_1a0 * 2,
         lVar6 = thunk_FUN_140556fb0((longlong)pppppppuVar7 + uVar15 * 2,lVar18,&DAT_140643c70),
         lVar6 == lVar18)) {
        lVar18 = -1;
      }
      else {
        lVar18 = lVar6 - (longlong)pppppppuVar7 >> 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_140051220();
  }
                    /* WARNING: Subroutine does not return */
  FUN_140054e40();
}



// ===== FUN_1402c61d0 @ 0x1402c61d0 [profile,ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402c61d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStackY_88 [32];
  undefined8 *local_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1407502c0 ^ (ulonglong)auStackY_88;
  FUN_14026db10();
  uVar5 = (**(code **)*param_1)(param_1);
  IggyPlayerRootPath(uVar5);
  puVar1 = param_1 + 0x33;
  uStack_48 = 0;
  local_40 = 7;
  uStack_38 = 0xf;
  local_50 = (char *)0x626f4277656956;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x36] = 0;
  puVar2 = param_1 + 0x2a;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x55;
  local_40 = 9;
  uStack_38 = 0xf;
  local_50 = (char *)0x746e6948776f6853;
  uStack_48 = 0x73;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x58] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x77;
  local_40 = 0xc;
  uStack_38 = 0xf;
  local_50 = (char *)0x6c6f6f54776f6853;
  uStack_48 = 0x73706974;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x7a] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x99;
  local_40 = 0xf;
  uStack_38 = 0xf;
  local_50 = (char *)0x6147656d61476e49;
  uStack_48 = 0x7367617472656d;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x9c] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0xbb;
  pcVar4 = *(code **)*puVar1;
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = (char *)FUN_140054e60(0x20);
  local_40 = 0x10;
  uStack_38 = 0x1f;
  builtin_strncpy(local_50,"ShowMashUpWorlds",0x11);
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
  param_1[0xbe] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0xdd;
  local_40 = 8;
  uStack_38 = 0xf;
  local_50 = (char *)0x657661736f747541;
  uStack_48 = 0;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xe0] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x102;
  local_40 = 10;
  uStack_38 = 0xf;
  local_50 = (char *)0x6c75636966666944;
  uStack_48 = 0x7974;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x105] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x127;
  local_40 = 0xe;
  uStack_38 = 0xf;
  local_50 = (char *)0x6c75636966666944;
  uStack_48 = 0x747865547974;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x12a] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x146;
  local_40 = 9;
  uStack_38 = 0xf;
  local_50 = (char *)0x65676175676e614c;
  uStack_48 = 0x73;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x149] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  if (plVar3 == (longlong *)param_1[0x2c]) {
    local_58 = puVar1;
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  return 1;
}



// ===== FUN_1402c8640 @ 0x1402c8640 [profile] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402c8640(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStackY_88 [32];
  undefined8 *local_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1407502c0 ^ (ulonglong)auStackY_88;
  FUN_14026db10();
  uVar5 = (**(code **)*param_1)(param_1);
  IggyPlayerRootPath(uVar5);
  puVar1 = param_1 + 0x33;
  local_40 = 10;
  uStack_38 = 0xf;
  local_50 = (char *)0x4879616c70736944;
  uStack_48 = 0x4455;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x36] = 0;
  puVar2 = param_1 + 0x2a;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x55;
  local_40 = 0xb;
  uStack_38 = 0xf;
  local_50 = (char *)0x4879616c70736944;
  uStack_48 = 0x646e61;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x58] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x77;
  pcVar4 = *(code **)*puVar1;
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = (char *)FUN_140054e60(0x20);
  local_40 = 0x14;
  uStack_38 = 0x1f;
  builtin_strncpy(local_50,"DisplayDeathMessages",0x15);
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
  param_1[0x7a] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x99;
  pcVar4 = *(code **)*puVar1;
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = (char *)FUN_140054e60(0x20);
  local_40 = 0x18;
  uStack_38 = 0x1f;
  builtin_strncpy(local_50,"DisplayAnimatedCharacter",0x19);
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
  param_1[0x9c] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0xbb;
  local_40 = 0xb;
  uStack_38 = 0xf;
  local_50 = (char *)0x72637374696c7053;
  uStack_48 = 0x6e6565;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0xbe] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0xdd;
  pcVar4 = *(code **)*puVar1;
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = (char *)FUN_140054e60(0x20);
  local_40 = 0x18;
  uStack_38 = 0x1f;
  builtin_strncpy(local_50,"ShowSplitscreenGamertags",0x19);
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
  param_1[0xe0] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0xff;
  uStack_48 = 0;
  local_40 = 6;
  uStack_38 = 0xf;
  local_50 = (char *)0x657a69534955;
  (**(code **)*puVar1)(puVar1,param_1);
  if (0xf < uStack_38) {
    if (0xfff < uStack_38 + 1) {
      if (0x1f < ((longlong)local_50 - *(longlong *)((longlong)local_50 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  param_1[0x102] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  local_58 = puVar1;
  if (plVar3 == (longlong *)param_1[0x2c]) {
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  puVar1 = param_1 + 0x124;
  pcVar4 = *(code **)*puVar1;
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = (char *)FUN_140054e60(0x20);
  local_40 = 0x11;
  uStack_38 = 0x1f;
  builtin_strncpy(local_50,"UISizeSplitscreen",0x12);
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
  param_1[0x127] = 0;
  plVar3 = (longlong *)param_1[0x2b];
  if (plVar3 == (longlong *)param_1[0x2c]) {
    local_58 = puVar1;
    FUN_1400491a0(puVar2,plVar3,&local_58);
  }
  else {
    *plVar3 = (longlong)puVar1;
    param_1[0x2b] = param_1[0x2b] + 8;
  }
  return 1;
}



// ===== FUN_1402f4250 @ 0x1402f4250 [profile] =====

void FUN_1402f4250(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1402f3e80(param_1,param_2,param_3);
  return;
}



// ===== FUN_1402f4920 @ 0x1402f4920 [profile] =====

void FUN_1402f4920(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1402f4490(param_1,param_2,param_3);
  return;
}



// ===== FUN_140316370 @ 0x140316370 [profile,ui] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140316370(short *param_1)

{
  short *psVar1;
  ulonglong uVar2;
  short *psVar3;
  undefined8 uVar4;
  short *psVar5;
  longlong lVar6;
  short *psVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1407502c0 ^ (ulonglong)auStack_58;
  lVar6 = *(longlong *)(param_1 + 8);
  psVar3 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    psVar3 = *(short **)param_1;
  }
  psVar5 = psVar3 + lVar6;
  psVar1 = (short *)thunk_FUN_140556dc0(psVar3,psVar5,10);
  if (psVar1 != psVar5) {
    psVar1 = (short *)FUN_1405572b0(psVar1,psVar5,10);
  }
  psVar5 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    psVar5 = *(short **)param_1;
  }
  uVar9 = (longlong)(psVar3 + lVar6) - (longlong)psVar1 >> 1;
  lVar6 = (longlong)psVar1 - (longlong)psVar5 >> 1;
  uVar2 = *(longlong *)(param_1 + 8) - lVar6;
  if (uVar2 < uVar9) {
    uVar9 = uVar2;
  }
  psVar3 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    psVar3 = *(short **)param_1;
  }
  lVar8 = *(longlong *)(param_1 + 8) - uVar9;
  FUN_140596110(psVar3 + lVar6,psVar3 + lVar6 + uVar9,(lVar8 - lVar6) * 2 + 2);
  *(longlong *)(param_1 + 8) = lVar8;
  psVar3 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    psVar3 = *(short **)param_1;
  }
  psVar5 = psVar3 + lVar8;
  psVar1 = (short *)thunk_FUN_140556dc0(psVar3,psVar5,0xd);
  if (psVar1 != psVar5) {
    psVar1 = (short *)FUN_1405572b0(psVar1,psVar5,0xd);
  }
  psVar5 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    psVar5 = *(short **)param_1;
  }
  uVar9 = (longlong)(psVar3 + lVar8) - (longlong)psVar1 >> 1;
  lVar6 = (longlong)psVar1 - (longlong)psVar5 >> 1;
  uVar2 = *(longlong *)(param_1 + 8) - lVar6;
  if (uVar2 < uVar9) {
    uVar9 = uVar2;
  }
  psVar3 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    psVar3 = *(short **)param_1;
  }
  lVar8 = *(longlong *)(param_1 + 8) - uVar9;
  FUN_140596110(psVar3 + lVar6,psVar3 + lVar6 + uVar9,(lVar8 - lVar6) * 2 + 2);
  *(longlong *)(param_1 + 8) = lVar8;
  psVar3 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    psVar3 = *(short **)param_1;
  }
  psVar5 = psVar3 + lVar8;
  psVar1 = (short *)thunk_FUN_140556dc0(psVar3,psVar5,9);
  if (psVar1 != psVar5) {
    psVar1 = (short *)FUN_1405572b0(psVar1,psVar5,9);
  }
  psVar5 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    psVar5 = *(short **)param_1;
  }
  uVar9 = (longlong)(psVar3 + lVar8) - (longlong)psVar1 >> 1;
  lVar6 = (longlong)psVar1 - (longlong)psVar5 >> 1;
  uVar2 = *(longlong *)(param_1 + 8) - lVar6;
  if (uVar2 < uVar9) {
    uVar9 = uVar2;
  }
  psVar3 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    psVar3 = *(short **)param_1;
  }
  lVar8 = *(longlong *)(param_1 + 8) - uVar9;
  FUN_140596110(psVar3 + lVar6,psVar3 + lVar6 + uVar9,(lVar8 - lVar6) * 2 + 2);
  *(longlong *)(param_1 + 8) = lVar8;
  psVar3 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    psVar3 = *(short **)param_1;
  }
  psVar1 = psVar3 + lVar8;
  psVar5 = psVar3;
  if (psVar3 != psVar1) {
    do {
      psVar7 = psVar5;
      psVar5 = psVar7 + 1;
      if (psVar5 == psVar1) goto LAB_14031660a;
    } while ((*psVar7 != *psVar5) || (*psVar7 != 0x20));
    while (psVar5 = psVar5 + 1, psVar5 != psVar1) {
      if ((*psVar7 != *psVar5) || (*psVar7 != 0x20)) {
        psVar7 = psVar7 + 1;
        *psVar7 = *psVar5;
      }
    }
    psVar1 = psVar7 + 1;
  }
LAB_14031660a:
  psVar5 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    psVar5 = *(short **)param_1;
  }
  uVar9 = (longlong)(psVar3 + lVar8) - (longlong)psVar1 >> 1;
  lVar6 = (longlong)psVar1 - (longlong)psVar5 >> 1;
  uVar2 = *(longlong *)(param_1 + 8) - lVar6;
  if (uVar2 < uVar9) {
    uVar9 = uVar2;
  }
  psVar3 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    psVar3 = *(short **)param_1;
  }
  lVar8 = *(longlong *)(param_1 + 8) - uVar9;
  FUN_140596110(psVar3 + lVar6,psVar3 + lVar6 + uVar9,(lVar8 - lVar6) * 2 + 2);
  *(longlong *)(param_1 + 8) = lVar8;
  uVar4 = FUN_1403156e0(local_38,param_1);
  FUN_1400546d0(param_1,uVar4);
  FUN_140055150(local_38);
  return;
}



// ===== FUN_1403ac040 @ 0x1403ac040 [profile] =====

void FUN_1403ac040(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_14002fe50(&DAT_1407bb5d0,"\'Stat.h\', Unhandled AwardStat blob.\n");
}



// ===== FUN_1403ac0b0 @ 0x1403ac0b0 [profile] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1403ac0b0(undefined8 *param_1,int param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5,longlong param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStackY_f8 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  ulonglong local_70 [9];
  
  local_70[8] = DAT_1407502c0 ^ (ulonglong)auStackY_f8;
  local_70[4] = 0;
  local_70[5] = 0;
  local_70[6] = 0;
  local_70[7] = 0;
  FUN_140054cf0(local_70 + 4,L"achievement.",0xc);
  puVar2 = param_3;
  if (7 < (ulonglong)param_3[3]) {
    puVar2 = (undefined8 *)*param_3;
  }
  uVar1 = FUN_140048d20(local_70 + 4,puVar2);
  uVar1 = FUN_140055000(local_b0,uVar1);
  FUN_140055000(local_70,uVar1);
  FUN_140055150(uVar1);
  *param_1 = Stat::vftable;
  *(int *)(param_1 + 1) = param_2 + 0x500000;
  FUN_140055000(param_1 + 2,local_70);
  param_1[7] = DAT_1407be718;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_140055150(local_70);
  if (7 < local_70[7]) {
    if (0xfff < local_70[7] * 2 + 2) {
      if (0x1f < (local_70[4] - *(longlong *)(local_70[4] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_70[6] = 0;
  local_70[7] = 7;
  local_70[4] = local_70[4] & 0xffffffffffff0000;
  *param_1 = Achievement::vftable;
  *(undefined4 *)(param_1 + 8) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x44) = param_5;
  param_1[9] = param_7;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  FUN_140054cf0(local_70,L"achievement.",0xc);
  puVar2 = param_3 + 2;
  if (7 < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  uVar1 = FUN_140048d20(local_70,param_3,*puVar2);
  uVar1 = FUN_140048d20(uVar1,L".desc");
  uVar1 = FUN_140055000(local_90,uVar1);
  FUN_140055000(param_1 + 10,uVar1);
  FUN_140055150(uVar1);
  if (7 < local_70[3]) {
    if (0xfff < local_70[3] * 2 + 2) {
      if (0x1f < (local_70[0] - *(longlong *)(local_70[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_70[2] = 0;
  local_70[3] = 7;
  local_70[0] = local_70[0] & 0xffffffffffff0000;
  puVar2 = (undefined8 *)FUN_140558c80(0x48);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = ItemInstance::vftable;
  puVar2[7] = 0;
  puVar2[8] = 0;
  FUN_140359e80(puVar2,*(undefined4 *)(param_6 + 0x20),1,0);
  FUN_14009fa30(param_1 + 0xf,puVar2);
  return param_1;
}



// ===== FUN_1403ac380 @ 0x1403ac380 [profile] =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1403ac380(undefined8 *param_1,int param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5,longlong param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStackY_f8 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  ulonglong local_70 [9];
  
  local_70[8] = DAT_1407502c0 ^ (ulonglong)auStackY_f8;
  local_70[4] = 0;
  local_70[5] = 0;
  local_70[6] = 0;
  local_70[7] = 0;
  FUN_140054cf0(local_70 + 4,L"achievement.",0xc);
  puVar2 = param_3;
  if (7 < (ulonglong)param_3[3]) {
    puVar2 = (undefined8 *)*param_3;
  }
  uVar1 = FUN_140048d20(local_70 + 4,puVar2);
  uVar1 = FUN_140055000(local_b0,uVar1);
  FUN_140055000(local_70,uVar1);
  FUN_140055150(uVar1);
  *param_1 = Stat::vftable;
  *(int *)(param_1 + 1) = param_2 + 0x500000;
  FUN_140055000(param_1 + 2,local_70);
  param_1[7] = DAT_1407be718;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_140055150(local_70);
  if (7 < local_70[7]) {
    if (0xfff < local_70[7] * 2 + 2) {
      if (0x1f < (local_70[4] - *(longlong *)(local_70[4] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_70[6] = 0;
  local_70[7] = 7;
  local_70[4] = local_70[4] & 0xffffffffffff0000;
  *param_1 = Achievement::vftable;
  *(undefined4 *)(param_1 + 8) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x44) = param_5;
  param_1[9] = param_7;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  FUN_140054cf0(local_70,L"achievement.",0xc);
  puVar2 = param_3 + 2;
  if (7 < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  uVar1 = FUN_140048d20(local_70,param_3,*puVar2);
  uVar1 = FUN_140048d20(uVar1,L".desc");
  uVar1 = FUN_140055000(local_90,uVar1);
  FUN_140055000(param_1 + 10,uVar1);
  FUN_140055150(uVar1);
  if (7 < local_70[3]) {
    if (0xfff < local_70[3] * 2 + 2) {
      if (0x1f < (local_70[0] - *(longlong *)(local_70[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    thunk_FUN_1401fe000();
  }
  local_70[2] = 0;
  local_70[3] = 7;
  local_70[0] = local_70[0] & 0xffffffffffff0000;
  puVar2 = (undefined8 *)FUN_140558c80(0x48);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = ItemInstance::vftable;
  puVar2[7] = 0;
  puVar2[8] = 0;
  FUN_140359e80(puVar2,*(undefined4 *)(param_6 + 0x28),1,0);
  FUN_14009fa30(param_1 + 0xf,puVar2);
  return param_1;
}



// ===== FUN_140596110 @ 0x140596110 [profile,storage,render] =====

void FUN_140596110(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 (*pauVar23) [32];
  undefined1 (*pauVar24) [32];
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined1 (*pauVar27) [32];
  undefined1 (*pauVar28) [32];
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar7 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar7;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar7 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar7;
    return;
  case 6:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    return;
  case 7:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    uVar7 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    *(undefined1 *)((longlong)param_1 + 6) = uVar7;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar7 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar7;
    return;
  case 10:
    uVar8 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    return;
  case 0xb:
    uVar8 = *(undefined2 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    *(undefined1 *)((longlong)param_1 + 10) = uVar7;
    return;
  case 0xc:
    uVar9 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    return;
  case 0xd:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar7;
    return;
  case 0xe:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    return;
  case 0xf:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar7;
    return;
  }
  if (param_3 < 0x21) {
    uVar10 = param_2[1];
    puVar26 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar11 = *puVar26;
    uVar12 = puVar26[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    param_1 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *param_1 = uVar11;
    param_1[1] = uVar12;
    return;
  }
  puVar26 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar26 = param_1;
  }
  if (puVar26 <= param_1) {
    if (DAT_140750270 < 3) {
      if ((param_3 < 0x801) || (((byte)DAT_14078f744 & 2) == 0)) {
        if (0x80 < param_3) {
          lVar30 = ((ulonglong)param_1 & 0xf) - 0x10;
          param_1 = (undefined8 *)((longlong)param_1 - lVar30);
          param_2 = (undefined8 *)((longlong)param_2 - lVar30);
          param_3 = param_3 + lVar30;
          if (0x80 < param_3) {
            do {
              uVar10 = param_2[1];
              uVar11 = param_2[2];
              uVar12 = param_2[3];
              uVar13 = param_2[4];
              uVar32 = param_2[5];
              uVar33 = param_2[6];
              uVar14 = param_2[7];
              *param_1 = *param_2;
              param_1[1] = uVar10;
              param_1[2] = uVar11;
              param_1[3] = uVar12;
              param_1[4] = uVar13;
              param_1[5] = uVar32;
              param_1[6] = uVar33;
              param_1[7] = uVar14;
              uVar10 = param_2[9];
              uVar11 = param_2[10];
              uVar12 = param_2[0xb];
              uVar13 = param_2[0xc];
              uVar32 = param_2[0xd];
              uVar33 = param_2[0xe];
              uVar14 = param_2[0xf];
              param_1[8] = param_2[8];
              param_1[9] = uVar10;
              param_1[10] = uVar11;
              param_1[0xb] = uVar12;
              param_1[0xc] = uVar13;
              param_1[0xd] = uVar32;
              param_1[0xe] = uVar33;
              param_1[0xf] = uVar14;
              param_1 = param_1 + 0x10;
              param_2 = param_2 + 0x10;
              param_3 = param_3 - 0x80;
            } while (0x7f < param_3);
          }
        }
                    /* WARNING: Could not recover jumptable at 0x000140596626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                  *(uint *)(&DAT_1406a7558 + (param_3 + 0xf >> 4) * 4)))();
        return;
      }
    }
    else if (((param_3 < 0x2001) || (0x180000 < param_3)) || (((byte)DAT_14078f744 & 2) == 0)) {
      uVar10 = *param_2;
      uVar11 = param_2[1];
      uVar12 = param_2[2];
      uVar13 = param_2[3];
      puVar26 = (undefined8 *)((longlong)param_2 + (param_3 - 0x20));
      uVar32 = *puVar26;
      uVar33 = puVar26[1];
      uVar14 = puVar26[2];
      uVar15 = puVar26[3];
      if (0x100 < param_3) {
        lVar30 = ((ulonglong)param_1 & 0x1f) - 0x20;
        pauVar23 = (undefined1 (*) [32])((longlong)param_1 - lVar30);
        pauVar27 = (undefined1 (*) [32])((longlong)param_2 - lVar30);
        param_3 = param_3 + lVar30;
        if (0x100 < param_3) {
          if (0x180000 < param_3) {
            do {
              uVar29 = param_3;
              pauVar28 = pauVar27;
              pauVar24 = pauVar23;
              auVar3 = pauVar28[1];
              auVar4 = pauVar28[2];
              auVar5 = pauVar28[3];
              auVar6 = vmovntdq_avx(*pauVar28);
              *pauVar24 = auVar6;
              auVar3 = vmovntdq_avx(auVar3);
              pauVar24[1] = auVar3;
              auVar3 = vmovntdq_avx(auVar4);
              pauVar24[2] = auVar3;
              auVar3 = vmovntdq_avx(auVar5);
              pauVar24[3] = auVar3;
              auVar3 = pauVar28[5];
              auVar4 = pauVar28[6];
              auVar5 = pauVar28[7];
              auVar6 = vmovntdq_avx(pauVar28[4]);
              pauVar24[4] = auVar6;
              auVar3 = vmovntdq_avx(auVar3);
              pauVar24[5] = auVar3;
              auVar3 = vmovntdq_avx(auVar4);
              pauVar24[6] = auVar3;
              auVar3 = vmovntdq_avx(auVar5);
              pauVar24[7] = auVar3;
              pauVar23 = pauVar24 + 8;
              pauVar27 = pauVar28 + 8;
              param_3 = uVar29 - 0x100;
            } while (0xff < uVar29 - 0x100);
            uVar31 = uVar29 - 0xe1 & 0xffffffffffffffe0;
            switch(uVar29) {
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
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(*pauVar28 + uVar31));
              *(undefined1 (*) [32])(*pauVar24 + uVar31) = auVar3;
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
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[1] + uVar31));
              *(undefined1 (*) [32])(pauVar24[1] + uVar31) = auVar3;
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
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[2] + uVar31));
              *(undefined1 (*) [32])(pauVar24[2] + uVar31) = auVar3;
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
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[3] + uVar31));
              *(undefined1 (*) [32])(pauVar24[3] + uVar31) = auVar3;
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
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[4] + uVar31));
              *(undefined1 (*) [32])(pauVar24[4] + uVar31) = auVar3;
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
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[5] + uVar31));
              *(undefined1 (*) [32])(pauVar24[5] + uVar31) = auVar3;
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
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[6] + uVar31));
              *(undefined1 (*) [32])(pauVar24[6] + uVar31) = auVar3;
            default:
              puVar26 = (undefined8 *)(pauVar24[-1] + uVar29);
              *puVar26 = uVar32;
              puVar26[1] = uVar33;
              puVar26[2] = uVar14;
              puVar26[3] = uVar15;
            case 0x100:
              *param_1 = uVar10;
              param_1[1] = uVar11;
              param_1[2] = uVar12;
              param_1[3] = uVar13;
              return;
            }
          }
          do {
            uVar10 = *(undefined8 *)(*pauVar27 + 8);
            uVar11 = *(undefined8 *)(*pauVar27 + 0x10);
            uVar12 = *(undefined8 *)(*pauVar27 + 0x18);
            uVar13 = *(undefined8 *)pauVar27[1];
            uVar32 = *(undefined8 *)(pauVar27[1] + 8);
            uVar33 = *(undefined8 *)(pauVar27[1] + 0x10);
            uVar14 = *(undefined8 *)(pauVar27[1] + 0x18);
            uVar15 = *(undefined8 *)pauVar27[2];
            uVar16 = *(undefined8 *)(pauVar27[2] + 8);
            uVar17 = *(undefined8 *)(pauVar27[2] + 0x10);
            uVar18 = *(undefined8 *)(pauVar27[2] + 0x18);
            uVar19 = *(undefined8 *)pauVar27[3];
            uVar20 = *(undefined8 *)(pauVar27[3] + 8);
            uVar21 = *(undefined8 *)(pauVar27[3] + 0x10);
            uVar22 = *(undefined8 *)(pauVar27[3] + 0x18);
            *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar27;
            *(undefined8 *)(*pauVar23 + 8) = uVar10;
            *(undefined8 *)(*pauVar23 + 0x10) = uVar11;
            *(undefined8 *)(*pauVar23 + 0x18) = uVar12;
            *(undefined8 *)pauVar23[1] = uVar13;
            *(undefined8 *)(pauVar23[1] + 8) = uVar32;
            *(undefined8 *)(pauVar23[1] + 0x10) = uVar33;
            *(undefined8 *)(pauVar23[1] + 0x18) = uVar14;
            *(undefined8 *)pauVar23[2] = uVar15;
            *(undefined8 *)(pauVar23[2] + 8) = uVar16;
            *(undefined8 *)(pauVar23[2] + 0x10) = uVar17;
            *(undefined8 *)(pauVar23[2] + 0x18) = uVar18;
            *(undefined8 *)pauVar23[3] = uVar19;
            *(undefined8 *)(pauVar23[3] + 8) = uVar20;
            *(undefined8 *)(pauVar23[3] + 0x10) = uVar21;
            *(undefined8 *)(pauVar23[3] + 0x18) = uVar22;
            uVar10 = *(undefined8 *)(pauVar27[4] + 8);
            uVar11 = *(undefined8 *)(pauVar27[4] + 0x10);
            uVar12 = *(undefined8 *)(pauVar27[4] + 0x18);
            uVar13 = *(undefined8 *)pauVar27[5];
            uVar32 = *(undefined8 *)(pauVar27[5] + 8);
            uVar33 = *(undefined8 *)(pauVar27[5] + 0x10);
            uVar14 = *(undefined8 *)(pauVar27[5] + 0x18);
            uVar15 = *(undefined8 *)pauVar27[6];
            uVar16 = *(undefined8 *)(pauVar27[6] + 8);
            uVar17 = *(undefined8 *)(pauVar27[6] + 0x10);
            uVar18 = *(undefined8 *)(pauVar27[6] + 0x18);
            uVar19 = *(undefined8 *)pauVar27[7];
            uVar20 = *(undefined8 *)(pauVar27[7] + 8);
            uVar21 = *(undefined8 *)(pauVar27[7] + 0x10);
            uVar22 = *(undefined8 *)(pauVar27[7] + 0x18);
            *(undefined8 *)pauVar23[4] = *(undefined8 *)pauVar27[4];
            *(undefined8 *)(pauVar23[4] + 8) = uVar10;
            *(undefined8 *)(pauVar23[4] + 0x10) = uVar11;
            *(undefined8 *)(pauVar23[4] + 0x18) = uVar12;
            *(undefined8 *)pauVar23[5] = uVar13;
            *(undefined8 *)(pauVar23[5] + 8) = uVar32;
            *(undefined8 *)(pauVar23[5] + 0x10) = uVar33;
            *(undefined8 *)(pauVar23[5] + 0x18) = uVar14;
            *(undefined8 *)pauVar23[6] = uVar15;
            *(undefined8 *)(pauVar23[6] + 8) = uVar16;
            *(undefined8 *)(pauVar23[6] + 0x10) = uVar17;
            *(undefined8 *)(pauVar23[6] + 0x18) = uVar18;
            *(undefined8 *)pauVar23[7] = uVar19;
            *(undefined8 *)(pauVar23[7] + 8) = uVar20;
            *(undefined8 *)(pauVar23[7] + 0x10) = uVar21;
            *(undefined8 *)(pauVar23[7] + 0x18) = uVar22;
            pauVar23 = pauVar23 + 8;
            pauVar27 = pauVar27 + 8;
            param_3 = param_3 - 0x100;
          } while (0xff < param_3);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000140596382. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                *(uint *)(&DAT_1406a7510 + (param_3 + 0x1f >> 5) * 4)))();
      return;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((longlong)param_2 + 1);
      param_1 = (undefined8 *)((longlong)param_1 + 1);
    }
    return;
  }
  uVar10 = *param_2;
  uVar11 = param_2[1];
  lVar30 = (longlong)param_2 - (longlong)param_1;
  puVar26 = (undefined8 *)((longlong)param_1 + lVar30 + (param_3 - 0x10));
  uVar12 = *puVar26;
  uVar13 = puVar26[1];
  puVar25 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
  uVar29 = param_3 - 0x10;
  puVar26 = puVar25;
  uVar32 = uVar12;
  uVar33 = uVar13;
  if (((ulonglong)puVar25 & 0xf) != 0) {
    puVar26 = (undefined8 *)((ulonglong)puVar25 & 0xfffffffffffffff0);
    uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
    uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
    *puVar25 = uVar12;
    *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar13;
    uVar29 = (longlong)puVar26 - (longlong)param_1;
  }
  uVar31 = uVar29 >> 7;
  if (uVar31 != 0) {
    *puVar26 = uVar32;
    puVar26[1] = uVar33;
    puVar25 = puVar26;
    while( true ) {
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x10);
      uVar12 = puVar1[1];
      puVar26 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x20);
      uVar13 = *puVar26;
      uVar32 = puVar26[1];
      puVar26 = puVar25 + -0x10;
      puVar25[-2] = *puVar1;
      puVar25[-1] = uVar12;
      puVar25[-4] = uVar13;
      puVar25[-3] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x30);
      uVar12 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x40);
      uVar13 = *puVar2;
      uVar32 = puVar2[1];
      uVar31 = uVar31 - 1;
      puVar25[-6] = *puVar1;
      puVar25[-5] = uVar12;
      puVar25[-8] = uVar13;
      puVar25[-7] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x50);
      uVar12 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x60);
      uVar13 = *puVar2;
      uVar32 = puVar2[1];
      puVar25[-10] = *puVar1;
      puVar25[-9] = uVar12;
      puVar25[-0xc] = uVar13;
      puVar25[-0xb] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x70);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
      if (uVar31 == 0) break;
      puVar25[-0xe] = uVar12;
      puVar25[-0xd] = uVar13;
      *puVar26 = uVar32;
      puVar25[-0xf] = uVar33;
      puVar25 = puVar26;
    }
    puVar25[-0xe] = uVar12;
    puVar25[-0xd] = uVar13;
    uVar29 = uVar29 & 0x7f;
  }
  for (uVar31 = uVar29 >> 4; uVar31 != 0; uVar31 = uVar31 - 1) {
    *puVar26 = uVar32;
    puVar26[1] = uVar33;
    puVar26 = puVar26 + -2;
    uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
    uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
  }
  if ((uVar29 & 0xf) != 0) {
    *param_1 = uVar10;
    param_1[1] = uVar11;
  }
  *puVar26 = uVar32;
  puVar26[1] = uVar33;
  return;
}



