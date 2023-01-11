//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIMutableApplicationSceneClientSettings.h>

@interface SBSUIMutableInCallSceneClientSettings : UIMutableApplicationSceneClientSettings
{
    _Bool _supportsDeviceLockActions;
    _Bool _transientOverlayHomeIndicatorAutoHidden;
    _Bool _shouldBecomeVisibleWhenWakingDisplay;
    _Bool _callConnected;
    int _preferredStatusBarStyleOverridesToSuppress;
    unsigned long long _preferredHardwareButtonEventTypes;
}

@property(nonatomic, getter=isCallConnected) _Bool callConnected; // @synthesize callConnected=_callConnected;
@property(nonatomic) _Bool shouldBecomeVisibleWhenWakingDisplay; // @synthesize shouldBecomeVisibleWhenWakingDisplay=_shouldBecomeVisibleWhenWakingDisplay;
@property(nonatomic) _Bool transientOverlayHomeIndicatorAutoHidden; // @synthesize transientOverlayHomeIndicatorAutoHidden=_transientOverlayHomeIndicatorAutoHidden;
@property(nonatomic) _Bool supportsDeviceLockActions; // @synthesize supportsDeviceLockActions=_supportsDeviceLockActions;
@property(nonatomic) int preferredStatusBarStyleOverridesToSuppress; // @synthesize preferredStatusBarStyleOverridesToSuppress=_preferredStatusBarStyleOverridesToSuppress;
@property(nonatomic) unsigned long long preferredHardwareButtonEventTypes; // @synthesize preferredHardwareButtonEventTypes=_preferredHardwareButtonEventTypes;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)setHomeIndicatorAutoHidden:(_Bool)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
