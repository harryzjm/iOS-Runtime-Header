//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSArray, NSIndexSet;

__attribute__((visibility("hidden")))
@interface TSTTableSortOrder : NSObject <NSCopying>
{
    int _type;
    NSArray *_rules;
    NSIndexSet *_cachedIndexes;
}

+ (id)sortOrderWithBaseColumn:(struct TSUModelColumnIndex)arg1 direction:(int)arg2 type:(int)arg3;
+ (id)sortOrderWithRules:(id)arg1 type:(int)arg2;
@property(retain, nonatomic) NSIndexSet *cachedIndexes; // @synthesize cachedIndexes=_cachedIndexes;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) NSArray *rules; // @synthesize rules=_rules;
- (void).cxx_destruct;
- (void)encodeToArchive:(struct TableSortOrderArchive *)arg1;
- (id)initFromArchive:(const struct TableSortOrderArchive *)arg1;
- (_Bool)containsAnyRulesInBaseColumns:(id)arg1;
- (id)sortOrderByRemovingBaseColumnIndices:(id)arg1;
- (id)sortOrderByReplacingRulesWithRules:(id)arg1;
- (id)sortOrderByReplacingRuleAtIndex:(unsigned long long)arg1 withRule:(id)arg2;
- (id)sortOrderByRemovingRuleAtIndex:(unsigned long long)arg1;
- (id)sortOrderByAddingRule:(id)arg1;
- (id)sortOrderByChangingTypeTo:(int)arg1;
@property(readonly, nonatomic) NSIndexSet *baseColumnIndices;
@property(readonly, nonatomic) unsigned long long ruleCount;
@property(readonly, nonatomic) _Bool empty;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRules:(id)arg1 type:(int)arg2;

@end

