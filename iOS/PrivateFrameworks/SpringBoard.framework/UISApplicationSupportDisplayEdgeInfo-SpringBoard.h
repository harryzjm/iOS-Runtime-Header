//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitServices/UISApplicationSupportDisplayEdgeInfo.h>

@interface UISApplicationSupportDisplayEdgeInfo (SpringBoard)
+ (id)sb_displayEdgeInfoForClassicMode:(long long)arg1;
+ (id)sb_floatingApplicationDisplayEdgeInfo;
+ (id)sb_homeButtonDeviceDisplayEdgeInfo;
+ (id)sb_roundCornerPhoneDisplayEdgeInfo;
+ (id)sb_roundCornerPadDisplayEdgeInfo;
+ (id)sb_thisDeviceDisplayEdgeInfo;
- (struct UIEdgeInsets)sb_orientedEdgeInsetsForInterfaceOrientation:(long long)arg1 traitCollection:(id)arg2;
- (void)sb_applyDisplayEdgeInfoToSceneSettings:(id)arg1;
- (id)sb_displayEdgeInfoWithSafeAreaInsetsForStatusBarHeight:(double)arg1;
@end
