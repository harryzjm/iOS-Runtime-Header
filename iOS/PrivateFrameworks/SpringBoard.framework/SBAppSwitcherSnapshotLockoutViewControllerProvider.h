//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SBAppSwitcherSnapshotLockoutViewControllerProvider : NSObject
{
    NSMutableArray *_availableControllers;
}

- (void).cxx_destruct;
- (void)_receivedMemoryWarning:(id)arg1;
- (void)recycleBlockingViewController:(id)arg1;
- (id)blockingViewControllerForBundleIdentifier:(id)arg1 screenTimePolicy:(long long)arg2;
- (void)dealloc;
- (id)init;

@end
