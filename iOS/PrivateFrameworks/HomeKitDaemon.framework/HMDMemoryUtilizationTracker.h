//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMFUnfairLock, NSMutableArray, NSString;

@interface HMDMemoryUtilizationTracker : NSObject <HMFLogging>
{
    HMFUnfairLock *_lock;
    NSMutableArray *_memoryUseSnapshots;
}

+ (id)logCategory;
+ (id)memoryTracker;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)log;
- (void)trackMemoryUsageWithReason:(id)arg1;
- (id)dumpState;
- (id)snapshots;
- (void)reset;
- (id)__init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
