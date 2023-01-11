//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class FBSDisplayConfiguration, FBScene, NSSet, SBDeviceApplicationSceneHandle, SBSuspendedUnderLockManager;

@protocol SBSuspendedUnderLockManagerDelegate <NSObject>
- (NSSet *)suspendedUnderLockManagerVisibleScenesInLayoutState:(SBSuspendedUnderLockManager *)arg1;
- (NSSet *)runningApplicationScenes:(SBSuspendedUnderLockManager *)arg1;
- (SBDeviceApplicationSceneHandle *)suspendedUnderLockManager:(SBSuspendedUnderLockManager *)arg1 sceneHandleForScene:(FBScene *)arg2;
- (FBSDisplayConfiguration *)suspendedUnderLockManagerDisplayConfiguration:(SBSuspendedUnderLockManager *)arg1;
@end
