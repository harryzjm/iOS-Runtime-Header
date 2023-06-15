//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface _UISelectorSet : NSObject
{
    NSHashTable *_hash;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)unionSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (_Bool)containsSet:(id)arg1;
- (_Bool)intersectsSet:(id)arg1;
- (void)enumerateSelectorsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeSelector:(SEL)arg1;
- (void)addSelector:(SEL)arg1;
- (_Bool)containsSelector:(SEL)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSelectors:(SEL)arg1;
- (id)init;
- (id)initWithHash:(id)arg1;

@end

