//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (BUAdditions)
- (id)bu_prettyDescription;
- (id)bu_dictionaryUsingPropertyAsKey:(id)arg1;
- (id)bu_arrayByRemovingObjectsInArray:(id)arg1;
- (id)bu_arrayByRemovingItemsWithDuplicateValuesForKey:(id)arg1;
- (id)bu_arrayByRemovingDuplicates;
- (id)bu_arrayByInvokingBlock:(CDUnknownBlockType)arg1;
- (id)bu_arrayByRemovingNSNulls;
- (id)bu_arrayByRemovingNSNullsInvokingBlockForNulls:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)bu_sortDescriptorComparator;
- (id)bu_arrayOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)bu_objectsMatching:(CDUnknownBlockType)arg1;
- (_Bool)bu_containsLocalizedStringCaseInsensitive:(id)arg1;
- (_Bool)bu_containsStringCaseInsensitive:(id)arg1;
- (id)bu_reversedArray;
- (long long)bu_indexOfObjectWithValue:(id)arg1 forKeyPath:(id)arg2;
@end

