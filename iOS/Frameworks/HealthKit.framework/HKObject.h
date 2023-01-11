//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKUUIDProvider-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKContributor, HKDevice, HKSource, HKSourceRevision, NSDate, NSDictionary, NSString, NSUUID;

@interface HKObject : NSObject <HKUUIDProvider, NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;
    HKSourceRevision *_sourceRevision;
    HKDevice *_device;
    NSDictionary *_metadata;
    long long _provenanceID;
    NSString *_sourceBundleIdentifier;
    double _creationTimestamp;
    HKContributor *_contributor;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isConcreteObjectClass;
+ (id)_newDataObjectWithMetadata:(id)arg1 device:(id)arg2 config:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) HKContributor *contributor; // @synthesize contributor=_contributor;
@property(nonatomic, getter=_creationTimestamp, setter=_setCreationTimestamp:) double creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(copy, nonatomic, getter=_sourceBundleIdentifier, setter=_setSourceBundleIdentifier:) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property(readonly) HKDevice *device; // @synthesize device=_device;
@property(readonly) HKSourceRevision *sourceRevision; // @synthesize sourceRevision=_sourceRevision;
@property(readonly, copy, nonatomic, getter=_timeZoneName) NSString *timeZoneName;
@property(copy, nonatomic, getter=_creationDate, setter=_setCreationDate:) NSDate *creationDate;
- (void)_setContributor:(id)arg1;
- (void)_setDevice:(id)arg1;
- (void)_setSourceRevision:(id)arg1;
- (id)_source;
@property(readonly) HKSource *source;
- (void)_setMetadata:(id)arg1;
@property(readonly, copy) NSDictionary *metadata;
- (void)_setUUID:(id)arg1;
@property(readonly) NSUUID *UUID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (long long)_externalSyncObjectCode;
- (id)_valueDescription;
@property(readonly, copy) NSString *description;
- (_Bool)_shouldNotifyOnInsert;
- (id)_validateConfigurationAllowingPrivateMetadata:(_Bool)arg1 applicationSDKVersion:(unsigned int)arg2;
- (id)_validateConfiguration;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;
- (_Bool)prepareForDelivery:(id *)arg1;
- (_Bool)prepareForSaving:(id *)arg1;
- (_Bool)_validateForSavingWithClientEntitlements:(id)arg1 applicationSDKVersion:(unsigned int)arg2 error:(id *)arg3;
- (void)_validateForCreation;
- (id)_copyByArchiving;
- (id)_init;
- (id)init;
- (id)hk_UUID;
- (long long)hk_integerValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
