//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBCloudZoneConfiguration, HMDHomeKitVersion, NSSet;

__attribute__((visibility("hidden")))
@interface HMDDatabaseZoneManagerConfiguration : HMFObject
{
    _Bool _zoneOwner;
    _Bool _shouldCreateZone;
    NSSet *_externalRecordTypesForSubscriptions;
    HMDHomeKitVersion *_minimumHomeKitVersion;
    NSSet *_requiredSupportedFeatures;
    HMBCloudZoneConfiguration *_cloudZoneConfiguration;
}

- (void).cxx_destruct;
@property(copy) HMBCloudZoneConfiguration *cloudZoneConfiguration; // @synthesize cloudZoneConfiguration=_cloudZoneConfiguration;
@property(copy) NSSet *requiredSupportedFeatures; // @synthesize requiredSupportedFeatures=_requiredSupportedFeatures;
@property(copy) HMDHomeKitVersion *minimumHomeKitVersion; // @synthesize minimumHomeKitVersion=_minimumHomeKitVersion;
@property(copy) NSSet *externalRecordTypesForSubscriptions; // @synthesize externalRecordTypesForSubscriptions=_externalRecordTypesForSubscriptions;
@property _Bool shouldCreateZone; // @synthesize shouldCreateZone=_shouldCreateZone;
@property(getter=isZoneOwner) _Bool zoneOwner; // @synthesize zoneOwner=_zoneOwner;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)attributeDescriptions;
- (id)init;

@end

