//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableSet
{
    NSKeyValueGetter *_valueGetter;
    NSKeyValueSetter *_valueSetter;
    _Bool _treatNilValuesLikeEmptySets;
    char _padding[3];
}

+ (CDStruct_7c9a8e9f *)_proxyNonGCPoolPointer;
- (void)unionSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)removeAllObjects;
- (void)minusSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObject:(id)arg1;
- (id)_createMutableSetValueWithSelector:(SEL)arg1;
- (id)objectEnumerator;
- (id)member:(id)arg1;
- (unsigned long long)count;
- (id)_setValueWithSelector:(SEL)arg1;
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;
- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;

@end

