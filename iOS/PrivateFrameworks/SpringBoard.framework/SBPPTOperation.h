//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@interface SBPPTOperation : NSOperation
{
}

+ (id)operationToSwipeRightInMiddleOfInterface;
+ (id)operationToSwipeLeftInMiddleOfInterface;
+ (id)operationToSwipeDownInMiddleOfInterface;
+ (id)operationToSwipeUpInMiddleOfInterface;
+ (id)operationToSynthesizeEventsForEventStream:(id)arg1;
+ (id)operationToSynthesizeEventsForCommandString:(id)arg1;
+ (id)operationToSynthesizeEventsForEventActions:(CDUnknownBlockType)arg1;
+ (id)operationToTerminateApplicationWithBundleIdentifier:(id)arg1;
+ (id)operationToActivateApplicationWithBundleIdentifier:(id)arg1;
+ (id)operationToDismissBannerNotification;
+ (id)operationToPresentBannerNotification;
+ (id)operationToDismissFloatingDock;
+ (id)operationToPresentFloatingDock;
+ (id)operationToDismissCoverSheet;
+ (id)operationToPresentCoverSheet;
+ (id)operationToLoadPPTAppSwitcherState;
+ (id)operationToRestoreAppSwitcherState;
+ (id)operationToSaveAppSwitcherState;
+ (id)operationToDismissAppSwitcher;
+ (id)operationToPresentAppSwitcher;
+ (id)operationToRestoreHomeScreenState;
+ (id)operationToSaveHomeScreenState;
+ (id)operationToTransitionToHomeScreen;
+ (id)operationToWaitForNotificationName:(id)arg1 object:(id)arg2 timeout:(double)arg3;
+ (id)operationToWaitForTimeInterval:(double)arg1;
+ (id)operationToSetInterfaceOrientation:(long long)arg1;
+ (id)operationToLockInterface;
+ (id)operationToUnlockInterfaceFinishingUIUnlock:(_Bool)arg1;
+ (id)operationToUnlockInterface;
+ (void)enqueueOperations:(id)arg1;

@end
