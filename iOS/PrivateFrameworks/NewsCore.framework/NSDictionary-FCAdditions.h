//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (FCAdditions)
+ (id)fc_dictionaryByAddingEntriesFromDictionary:(id)arg1 toDictionary:(id)arg2;
+ (id)fc_dictionaryWithKeys:(id)arg1 valueWithIndexBlock:(CDUnknownBlockType)arg2;
+ (id)fc_dictionaryWithKeys:(id)arg1 valueBlock:(CDUnknownBlockType)arg2;
+ (id)fc_dictionaryWithObjects:(id)arg1 keyBlock:(CDUnknownBlockType)arg2;
+ (id)fc_dictionaryFromArray:(id)arg1 keyBlock:(CDUnknownBlockType)arg2 valueBlock:(CDUnknownBlockType)arg3;
+ (id)fc_dictionaryFromJSON:(id)arg1;
+ (id)fc_dictionaryFromJSON:(id)arg1 error:(id *)arg2;
+ (id)fc_dictionary:(CDUnknownBlockType)arg1;
- (id)fc_dictionaryByMergingDictionary:(id)arg1 withValueCombiner:(CDUnknownBlockType)arg2;
- (id)fc_jsonString;
- (id)fc_jsonStringWithObjectHandler:(CDUnknownBlockType)arg1 arrayObjectHandler:(CDUnknownBlockType)arg2 dictionaryKeyHandler:(CDUnknownBlockType)arg3 dictionaryValueHandler:(CDUnknownBlockType)arg4;
- (id)fc_jsonEncodableDictionary;
- (id)fc_jsonEncodableDictionaryWithObjectHandler:(CDUnknownBlockType)arg1 arrayObjectHandler:(CDUnknownBlockType)arg2 dictionaryKeyHandler:(CDUnknownBlockType)arg3 dictionaryValueHandler:(CDUnknownBlockType)arg4;
- (id)fc_jsonStringWithOmittedUnsupportedDataTypes;
- (id)fr_descriptionWithKeyComparator:(CDUnknownBlockType)arg1;
- (id)fc_dictionaryBySwappingValuesAndKeys;
- (id)fc_deepCopy;
- (id)fc_subdictionaryWithCopiesForKeys:(id)arg1;
- (id)fc_subdictionaryForKeys:(id)arg1;
- (id)nf_objectsForKeysWithoutMarker:(id)arg1;
- (id)fc_dictionaryByRemovingObjectForKey:(id)arg1;
- (id)fc_dictionaryByTransformingValuesWithBlock:(CDUnknownBlockType)arg1;
- (id)fc_dictionaryByTransformingValuesWithKeyAndValueBlock:(CDUnknownBlockType)arg1;
- (id)fc_sortedEntriesWithKeyBlock:(CDUnknownBlockType)arg1;
- (id)fc_dictionaryByTransformingKeysWithBlock:(CDUnknownBlockType)arg1;
- (id)fc_dictionaryByTransformingKeysWithKeyAndValueBlock:(CDUnknownBlockType)arg1;
@end

