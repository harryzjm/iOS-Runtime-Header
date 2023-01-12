//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBBacklightController;

@protocol SBBacklightControllerObserver <NSObject>

@optional
- (void)backlightController:(SBBacklightController *)arg1 didUpdateDigitizerDisabled:(_Bool)arg2 tapToWakeEnabled:(_Bool)arg3;
- (void)backlightController:(SBBacklightController *)arg1 didTransitionToBacklightState:(long long)arg2 source:(long long)arg3;
- (void)backlightController:(SBBacklightController *)arg1 willTransitionToBacklightState:(long long)arg2 source:(long long)arg3;
- (void)backlightController:(SBBacklightController *)arg1 didAnimateBacklightToFactor:(float)arg2 source:(long long)arg3;
- (void)backlightController:(SBBacklightController *)arg1 willAnimateBacklightToFactor:(float)arg2 source:(long long)arg3;
@end

