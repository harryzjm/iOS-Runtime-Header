//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/SBSceneHandleObserver-Protocol.h>

@class NSData, NSSet, NSString, SBDeviceApplicationSceneHandle;

@protocol SBDeviceApplicationSceneHandleObserver <SBSceneHandleObserver>

@optional
- (void)sceneHandle:(SBDeviceApplicationSceneHandle *)arg1 didChangeContentPrefersToDisableClipping:(_Bool)arg2;
- (void)sceneHandle:(SBDeviceApplicationSceneHandle *)arg1 didChangeBackgroundActivitiesToSuppress:(NSSet *)arg2;
- (void)sceneHandle:(SBDeviceApplicationSceneHandle *)arg1 didChangeActivationConditionsData:(NSData *)arg2;
- (void)sceneHandle:(SBDeviceApplicationSceneHandle *)arg1 didChangeSceneTitle:(NSString *)arg2;
- (void)sceneHandle:(SBDeviceApplicationSceneHandle *)arg1 didChangeStatusBarAvoidanceFrame:(struct CGRect)arg2;
- (void)sceneHandle:(SBDeviceApplicationSceneHandle *)arg1 didChangeStatusBarParts:(long long)arg2;
- (void)sceneHandle:(SBDeviceApplicationSceneHandle *)arg1 didChangeEffectiveForegroundness:(_Bool)arg2;
@end

