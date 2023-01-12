//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDStandardTaskServer.h>

#import <HeartHealthDaemon/HDHeartbeatSeriesFeatureStatusManagerDelegate-Protocol.h>
#import <HeartHealthDaemon/HKHeartbeatSeriesFeatureStatusManagerServer-Protocol.h>

@class HDHeartbeatSeriesFeatureStatusManager, NSString;

@interface HDHeartbeatSeriesFeatureStatusManagerServer : HDStandardTaskServer <HKHeartbeatSeriesFeatureStatusManagerServer, HDHeartbeatSeriesFeatureStatusManagerDelegate>
{
    HDHeartbeatSeriesFeatureStatusManager *_manager;
}

+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;
+ (Class)configurationClass;
+ (id)taskIdentifier;
+ (id)requiredEntitlements;
+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id *)arg5;
- (void).cxx_destruct;
- (id)remoteInterface;
- (id)exportedInterface;
- (id)_clientRemoteObjectProxy;
- (void)heartbeatSeriesFeatureStatusManager:(id)arg1 didFailToUpdateWithError:(id)arg2;
- (void)heartbeatSeriesFeatureStatusManager:(id)arg1 didUpdatePredominantFeature:(long long)arg2;
- (void)remote_updateAndNotifyAllObservers;
- (void)remote_stopObservingChanges;
- (void)remote_startObservingChangesWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
