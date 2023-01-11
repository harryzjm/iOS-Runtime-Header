//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, REDependencyGraph;

@interface REOrderingArray : NSObject
{
    NSArray *_orderedObjects;
    REDependencyGraph *_dependencyGraph;
    _Bool _needsUpdate;
    unsigned long long _batchCount;
    NSArray *_comparators;
}

@property(readonly, nonatomic) NSArray *comparators; // @synthesize comparators=_comparators;
- (void).cxx_destruct;
- (void)_updateContentOrder;
- (void)_performOrMarkUpdate;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (void)sortAllObjects;
- (void)updateObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)_createDependenciesForObject:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithComparators:(id)arg1;

@end

