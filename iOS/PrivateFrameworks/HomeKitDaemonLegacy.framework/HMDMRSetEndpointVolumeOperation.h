//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

@class NSArray, NSError, NSNumber, NSString;
@protocol HMDMPCAssistantDiscovery, HMDMRSetEndpointVolumeOperationExternalObjectInterface;

__attribute__((visibility("hidden")))
@interface HMDMRSetEndpointVolumeOperation : HMFOperation
{
    NSNumber *_volume;
    NSArray *_routeIDs;
    NSError *_partialExecutionError;
    id <HMDMPCAssistantDiscovery> _discovery;
    id <HMDMRSetEndpointVolumeOperationExternalObjectInterface> _externalObjectInterface;
}

+ (id)logCategory;
+ (id)shortDescription;
- (void).cxx_destruct;
@property(readonly) id <HMDMRSetEndpointVolumeOperationExternalObjectInterface> externalObjectInterface; // @synthesize externalObjectInterface=_externalObjectInterface;
@property(retain, nonatomic) id <HMDMPCAssistantDiscovery> discovery; // @synthesize discovery=_discovery;
@property(retain, nonatomic) NSError *partialExecutionError; // @synthesize partialExecutionError=_partialExecutionError;
@property(readonly, copy, nonatomic) NSArray *routeIDs; // @synthesize routeIDs=_routeIDs;
@property(readonly, nonatomic) NSNumber *volume; // @synthesize volume=_volume;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)setVolumeOnEndpoint:(id)arg1 outputDeviceUID:(id)arg2;
- (id)getVolumeCapabilitiesForEndpoint:(id)arg1 outputDeviceUID:(id)arg2;
- (id)connectToEndpoint:(id)arg1 connection:(id)arg2;
- (id)discoverRemoteControlEndpointsForUIDs:(id)arg1;
- (_Bool)cancelOnSetup;
- (void)generateOverallResultAndFinishWithDeviceStatuses:(id)arg1;
- (void)main;
- (id)initWithRouteIDs:(id)arg1 volume:(id)arg2;
- (id)initWithRouteIDs:(id)arg1 volume:(id)arg2 externalObjectInterface:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

