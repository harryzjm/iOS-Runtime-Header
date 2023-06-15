//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFExponentialBackoffTimer, NSString;
@protocol HMDPrimaryResidentDiscoveryManagerDataSource, HMDPrimaryResidentDiscoveryManagerDelegate, HMDPrimaryResidentDiscoveryOperation, HMDResidentDeviceManagerContext, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDPrimaryResidentDiscoveryManager : NSObject
{
    id <HMDPrimaryResidentDiscoveryManagerDelegate> delegate;
    NSString *_logIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    id <HMDPrimaryResidentDiscoveryManagerDataSource> _dataSource;
    id <HMDResidentDeviceManagerContext> _context;
    id <HMDPrimaryResidentDiscoveryOperation> _primaryDiscoveryOperation;
    HMFExponentialBackoffTimer *_retryTimer;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property __weak id <HMDPrimaryResidentDiscoveryManagerDelegate> delegate; // @synthesize delegate;
- (void)timerDidFire:(id)arg1;
- (void)_handleDeviceMonitorReachableNotification:(id)arg1;
- (void)_removeRetryTimer;
- (void)_startRetryTimer;
- (void)completedDiscoveryWithPrimaryResident:(id)arg1 primaryResidentGenerationID:(id)arg2 error:(id)arg3;
- (void)sendCheckForResidentsInHomeNotification;
- (void)_discoverPrimaryResident;
- (void)cancel;
- (void)discoverPrimaryResident;
- (void)configureWithContext:(id)arg1;
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

