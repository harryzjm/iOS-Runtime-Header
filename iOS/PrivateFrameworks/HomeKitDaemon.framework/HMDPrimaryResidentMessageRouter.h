//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDPrimaryResidentMessageRouterMetricsDispatcher, HMFMessageDispatcher, NSString, NSUUID;
@protocol HMDPrimaryResidentMessageRouterDataSource;

__attribute__((visibility("hidden")))
@interface HMDPrimaryResidentMessageRouter : HMFObject
{
    id <HMDPrimaryResidentMessageRouterDataSource> _dataSource;
    NSUUID *_homeUUID;
    HMFMessageDispatcher *_messageDispatcher;
    HMDPrimaryResidentMessageRouterMetricsDispatcher *_metricsDispatcher;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) HMDPrimaryResidentMessageRouterMetricsDispatcher *metricsDispatcher; // @synthesize metricsDispatcher=_metricsDispatcher;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, copy) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property __weak id <HMDPrimaryResidentMessageRouterDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;
- (void)relayMessage:(id)arg1 device:(id)arg2;
- (void)routeMessage:(id)arg1 allowRemoteRelayFromPrimary:(_Bool)arg2 localHandler:(CDUnknownBlockType)arg3;
- (void)routeMessage:(id)arg1 localHandler:(CDUnknownBlockType)arg2;
- (id)dataSourcePrimaryResidentDeviceWithMessage:(id)arg1;
- (id)initWithHomeUUID:(id)arg1 messageDispatcher:(id)arg2 metricsDispatcher:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

