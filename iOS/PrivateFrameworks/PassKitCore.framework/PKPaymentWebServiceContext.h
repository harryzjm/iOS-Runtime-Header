//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSObject, NSString, PKPaymentWebServiceConfiguration, PKPaymentWebServiceRegion;
@protocol OS_dispatch_queue;

@interface PKPaymentWebServiceContext
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _devSigned;
    _Bool _transactionServiceDisabled;
    _Bool _messageServiceDisabled;
    _Bool _ignoreProvisioningEnablementPercentage;
    long long _version;
    NSString *_deviceID;
    NSString *_secureElementID;
    NSString *_pushToken;
    NSString *_companionSerialNumber;
    NSDate *_registrationDate;
    NSDate *_configurationDate;
    PKPaymentWebServiceConfiguration *_configuration;
    NSDictionary *_regions;
    NSString *_primaryRegionIdentifier;
    NSMutableDictionary *_verificationRequestsByPassUniqueID;
    long long _consistencyCheckBackoffLevel;
    NSArray *_certificates;
    NSString *_lastUpdatedTag;
}

+ (void)_migrateFrom0To1:(id)arg1;
+ (void)_migrateContext:(id)arg1;
+ (id)contextWithArchive:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(copy) NSString *lastUpdatedTag; // @synthesize lastUpdatedTag=_lastUpdatedTag;
@property(copy) NSArray *certificates; // @synthesize certificates=_certificates;
@property long long consistencyCheckBackoffLevel; // @synthesize consistencyCheckBackoffLevel=_consistencyCheckBackoffLevel;
@property(retain) NSMutableDictionary *verificationRequestsByPassUniqueID; // @synthesize verificationRequestsByPassUniqueID=_verificationRequestsByPassUniqueID;
@property(copy) NSString *primaryRegionIdentifier; // @synthesize primaryRegionIdentifier=_primaryRegionIdentifier;
@property(retain) NSDictionary *regions; // @synthesize regions=_regions;
@property _Bool ignoreProvisioningEnablementPercentage; // @synthesize ignoreProvisioningEnablementPercentage=_ignoreProvisioningEnablementPercentage;
@property _Bool messageServiceDisabled; // @synthesize messageServiceDisabled=_messageServiceDisabled;
@property _Bool transactionServiceDisabled; // @synthesize transactionServiceDisabled=_transactionServiceDisabled;
@property(retain) PKPaymentWebServiceConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy) NSDate *configurationDate; // @synthesize configurationDate=_configurationDate;
@property(copy) NSDate *registrationDate; // @synthesize registrationDate=_registrationDate;
@property _Bool devSigned; // @synthesize devSigned=_devSigned;
@property(copy) NSString *companionSerialNumber; // @synthesize companionSerialNumber=_companionSerialNumber;
@property(copy) NSString *pushToken; // @synthesize pushToken=_pushToken;
@property(copy) NSString *secureElementID; // @synthesize secureElementID=_secureElementID;
@property(copy) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (double)_contextProvisioningEnablementValue;
- (_Bool)contextMeetsProvisioningEnablementPercentageThresholdForRegion:(id)arg1;
@property(readonly) __weak NSDictionary *TSMURLStringByPushTopic;
- (id)TSMPushTopics;
@property(readonly) __weak PKPaymentWebServiceRegion *primaryRegion;
- (id)regionForIdentifier:(id)arg1;
- (void)removeVerificationRequestRecordForUniqueID:(id)arg1;
- (id)verificationRequestRecordForUniqueID:(id)arg1;
- (void)addVerificationRequestRecord:(id)arg1 forUniqueID:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

