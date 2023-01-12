//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMBCloudDatabase, HMBCloudZoneConfiguration, HMBCloudZoneID, HMBLocalDatabase, HMBLocalZone, HMBShareInvitation, HMDDatabaseFetchZonesResult, NAFuture, NSString;
@protocol HMBLocalZoneDelegate><HMBCloudZoneDelegate, HMDDatabaseDelegate;

@protocol HMDDatabase <NSObject>
+ (void)registerQueries;
@property(readonly) HMBLocalDatabase *localDatabase;
@property(readonly) HMBCloudDatabase *cloudDatabase;
- (NAFuture *)acceptInvitation:(HMBShareInvitation *)arg1;
- (NAFuture *)removeLocalAndCloudDataForLocalZone:(HMBLocalZone *)arg1;
- (NAFuture *)removeSharedZonesWithName:(NSString *)arg1;
- (NAFuture *)removePrivateZonesWithName:(NSString *)arg1;
- (HMDDatabaseFetchZonesResult *)sharedZonesWithID:(HMBCloudZoneID *)arg1 configuration:(HMBCloudZoneConfiguration *)arg2 delegate:(id <HMBLocalZoneDelegate><HMBCloudZoneDelegate>)arg3 error:(id *)arg4;
- (HMBCloudZoneID *)existingSharedZoneIDWithName:(NSString *)arg1;
- (HMDDatabaseFetchZonesResult *)privateZonesWithName:(NSString *)arg1 configuration:(HMBCloudZoneConfiguration *)arg2 delegate:(id <HMBLocalZoneDelegate><HMBCloudZoneDelegate>)arg3 error:(id *)arg4;
- (HMDDatabaseFetchZonesResult *)existingPrivateZonesWithName:(NSString *)arg1 configuration:(HMBCloudZoneConfiguration *)arg2 delegate:(id <HMBLocalZoneDelegate><HMBCloudZoneDelegate>)arg3 error:(id *)arg4;
- (NAFuture *)unregisterSharedSubscriptionForExternalRecordType:(NSString *)arg1;
- (NAFuture *)registerSharedSubscriptionForExternalRecordType:(NSString *)arg1;
- (void)start;
- (void)removeDelegate:(id <HMDDatabaseDelegate>)arg1;
- (void)addDelegate:(id <HMDDatabaseDelegate>)arg1;
@end

