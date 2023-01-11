//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface LRUCache : NSObject
{
    unsigned long long _maxCapacity;
    NSMutableDictionary *_items;
    NSMutableArray *_lru;
}

@property(retain, nonatomic) NSMutableArray *lru; // @synthesize lru=_lru;
@property(retain, nonatomic) NSMutableDictionary *items; // @synthesize items=_items;
@property(nonatomic) unsigned long long maxCapacity; // @synthesize maxCapacity=_maxCapacity;
- (void)dealloc;
- (id)description;
- (void)removeAllItems;
- (id)itemForKey:(id)arg1;
- (void)removeItemForKey:(id)arg1;
- (void)addItem:(id)arg1 forKey:(id)arg2;
- (void)_insert:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end
