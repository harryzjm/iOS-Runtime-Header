//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKPropertyCoding-Protocol.h>

@class NSDate, NSMutableDictionary, NSString;

@interface CKDServerConfiguration : NSObject <CKPropertyCoding>
{
    NSDate *_expiry;
    NSMutableDictionary *_values;
    NSMutableDictionary *_allowedAppVersionsCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *allowedAppVersionsCache; // @synthesize allowedAppVersionsCache=_allowedAppVersionsCache;
@property(retain, nonatomic) NSMutableDictionary *values; // @synthesize values=_values;
@property(retain, nonatomic) NSDate *expiry; // @synthesize expiry=_expiry;
- (id)dictionaryPropertyEncoding;
- (id)initWithPropertyDictionary:(id)arg1;
- (id)iCloudHostnames;
- (id)chunkProfileConfigurationDefaultProfilePolicy:(id)arg1;
- (id)chunkProfileConfigurationFileExtensionToProfileMap:(id)arg1;
- (id)chunkProfileConfigurationVersion:(id)arg1;
- (unsigned long long)c2AllOperationGroupMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2AllOperationGroupMetricsReportFrequency:(id)arg1;
- (unsigned long long)c2AllOperationMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2AllOperationMetricsReportFrequency:(id)arg1;
- (unsigned long long)c2ClientApplicationMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2ClientApplicationMetricsReportFrequency:(id)arg1;
- (unsigned long long)c2ClientOperationMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2ClientOperationMetricsReportFrequency:(id)arg1;
- (unsigned long long)c2NetworkMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2NetworkMetricsReportFrequency:(id)arg1;
- (_Bool)allowExpiredDNSBehavior:(id)arg1;
- (double)publicIdentitiesExpirationTimeout:(id)arg1;
- (unsigned long long)maxBatchSize:(id)arg1;
- (id)flowControlMaximumThrottleTime:(id)arg1;
- (id)flowControlRegeneration:(id)arg1;
- (id)flowControlBudget:(id)arg1;
- (id)transcodeServerPublicKeyURLs:(id)arg1;
- (long long)tokenRegisterDays:(id)arg1;
- (_Bool)applicationWithBundleID:(id)arg1 canSyncUsingVersion:(id)arg2 forContainerID:(id)arg3;
- (id)valueForKeyPath:(id)arg1 forContainerID:(id)arg2;
- (id)valuesForContainerID:(id)arg1;
- (_Bool)isExpired;
@property(readonly, copy) NSString *description;
- (id)initWithValues:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
