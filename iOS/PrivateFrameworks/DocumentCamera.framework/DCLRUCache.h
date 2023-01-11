//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray;
@protocol DCLRUCacheDelegate;

__attribute__((visibility("hidden")))
@interface DCLRUCache : NSObject
{
    NSMapTable *mData;
    NSMutableArray *mOrderedKeys;
    unsigned long long mMax;
    id <DCLRUCacheDelegate> _delegate;
}

+ (void)purgeAllCaches;
+ (id)cacheCollection;
@property(nonatomic) __weak id <DCLRUCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long maxSize; // @synthesize maxSize=mMax;
- (void).cxx_destruct;
- (void)p_removeOldestObject;
@property(readonly, nonatomic) NSArray *allKeys;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithMaxSize:(unsigned long long)arg1;

@end
