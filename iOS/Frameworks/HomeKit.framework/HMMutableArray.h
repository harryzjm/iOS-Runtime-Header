//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFUnfairLock, NSArray, NSMutableArray;

@interface HMMutableArray : NSObject
{
    HMFUnfairLock *_lock;
    NSMutableArray *_internal;
}

+ (id)array;
+ (id)arrayWithArray:(id)arg1;
@property(readonly, copy, nonatomic) NSMutableArray *internal; // @synthesize internal=_internal;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)setIfDifferent:(id)arg1;
@property(copy, nonatomic) NSArray *array;
- (id)firstItemWithValue:(id)arg1 forKey:(id)arg2;
- (id)itemsWithValue:(id)arg1 forKey:(id)arg2;
- (id)filteredArrayUsingPredicate:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (void)addObjectIfNotPresent:(id)arg1;
- (void)addObject:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectsInArray:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)replaceObject:(id)arg1;
- (id)initWithArray:(id)arg1;
- (id)firstItemWithCharacteristicType:(id)arg1;
- (id)firstItemWithInstanceID:(id)arg1;
- (id)firstItemWithUniqueIdentifier:(id)arg1;
- (id)firstItemWithUUID:(id)arg1;
- (id)firstItemWithName:(id)arg1;

@end
