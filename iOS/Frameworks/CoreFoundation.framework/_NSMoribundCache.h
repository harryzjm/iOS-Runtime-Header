//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _NSMoribundCache
{
}

- (void)setEvictsObjectsWithDiscardedContent:(_Bool)arg1;
- (_Bool)evictsObjectsWithDiscardedContent;
- (void)setCountLimit:(unsigned long long)arg1;
- (unsigned long long)countLimit;
- (void)setTotalCostLimit:(unsigned long long)arg1;
- (unsigned long long)totalCostLimit;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;

@end
