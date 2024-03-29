//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableSet.h>

__attribute__((visibility("hidden")))
@interface AMSMutableSet : NSMutableSet
{
    NSMutableSet *_backingSet;
    CDUnknownBlockType _hashBlock;
}

+ (id)setWithHashBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType hashBlock; // @synthesize hashBlock=_hashBlock;
- (id)_allObjectsFromBackingSet;
- (_Bool)containsObject:(id)arg1;
- (id)objectEnumerator;
- (id)member:(id)arg1;
- (id)anyObject;
- (id)allObjects;
- (unsigned long long)count;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObject:(id)arg1;
- (id)initWithHashBlock:(CDUnknownBlockType)arg1;

@end

