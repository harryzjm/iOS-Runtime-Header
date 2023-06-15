//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDBackingStoreResidentUpdateResult, HMDDevice, HMFFuture, NSArray, NSNotification, NSSet, NSString;

@protocol HMDResidentDeviceManagerRoarBackingStore
@property(readonly, nonatomic) _Bool hasAnyResident;
@property(readonly) NSString *cloudChangeUpdateNotificationName;
- (HMFFuture *)residentsRequiringReachabilityUpdate:(NSSet *)arg1;
- (void)updateReachabilityForResidents:(NSSet *)arg1;
- (void)updateIdentifiersForAvailableResidentDevices:(NSArray *)arg1;
- (NSArray *)findResidents:(HMDDevice *)arg1 outHasResidents:(_Bool *)arg2;
- (HMDBackingStoreResidentUpdateResult *)handleCloudResidentChange:(NSNotification *)arg1 currentResidents:(NSSet *)arg2 isCurrentDevicePrimaryResident:(_Bool)arg3 currentDevice:(HMDDevice *)arg4;
@end

