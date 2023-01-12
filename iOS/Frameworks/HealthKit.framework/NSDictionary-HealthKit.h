//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (HealthKit)
+ (_Bool)hk_acceptsMetadataValue:(id)arg1 allowPrivateMetadata:(_Bool)arg2;
+ (id)hk_acceptedPublicMetadataValueClasses;
+ (id)hk_acceptedMetadataValueClasses;
+ (id)hk_secureCodingClasses;
+ (void)_addDerivedPublicKeyIfNecessaryForPrivateKey:(id)arg1 mutableDictionary:(id)arg2;
+ (id)hk_secureAttachmentCodingClasses;
+ (id)hk_acceptedAttachmentMetadataValueClasses;
- (id)hk_map:(CDUnknownBlockType)arg1;
- (id)hk_filter:(CDUnknownBlockType)arg1;
- (id)hk_filteredDictionaryForKeys:(id)arg1;
- (id)hk_filterKeysWithBlock:(CDUnknownBlockType)arg1;
- (id)hk_allValuesBySortedKeys;
- (id)hk_sortedKeys;
- (id)hk_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (_Bool)_hk_validateMetadataValueContent:(id)arg1 forKey:(id)arg2 applicationSDKVersion:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)_hk_validateMetadataSydneyValueContent:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)_hk_validateMetadataSkyValueContent:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)_hk_validateMetadataAzulValueContent:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)_hk_validateMetadataYukonValueContent:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)_hk_validateMetadataBaseValueContent:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)_copyWithoutPrivateMetadataKeysShouldDerivePublicKeys:(_Bool)arg1;
- (id)hk_copySanitizedForPublicClient;
- (id)hk_copyWithoutPrivateMetadataKeys;
- (_Bool)hk_validateMetadataKeysAndValuesAllowingPrivateMetadataKeys:(_Bool)arg1 applicationSDKVersion:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)_hk_validateMetadataValueForWorkoutEvent:(id)arg1 valueContent:(id)arg2 forKey:(id)arg3 applicationSDKVersion:(unsigned int)arg4 error:(id *)arg5;
- (_Bool)_hk_validateYukonMetadataValueForWorkoutEvent:(id)arg1 valueContent:(id)arg2 key:(id)arg3 error:(id *)arg4;
- (_Bool)_hk_validateBaseMetadataValueForWorkoutEvent:(id)arg1 valueContent:(id)arg2 key:(id)arg3 error:(id *)arg4;
- (_Bool)hk_validateMetadataKeysAndValuesForWorkoutEvent:(id)arg1 applicationSDKVersion:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)hk_validateAttachmentMetadataKeysAndValuesWithError:(id *)arg1;
@end

