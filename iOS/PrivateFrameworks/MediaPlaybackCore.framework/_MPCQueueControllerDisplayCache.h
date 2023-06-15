//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface _MPCQueueControllerDisplayCache : NSObject
{
    long long _displayItemCount;
    NSString *_furthestContentItemID;
    NSMapTable *_itemCache;
    NSMapTable *_indexCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *indexCache; // @synthesize indexCache=_indexCache;
@property(retain, nonatomic) NSMapTable *itemCache; // @synthesize itemCache=_itemCache;
@property(copy, nonatomic) NSString *furthestContentItemID; // @synthesize furthestContentItemID=_furthestContentItemID;
@property(nonatomic) long long displayItemCount; // @synthesize displayItemCount=_displayItemCount;
- (void)clearIndexCache;
- (void)setDisplayIndex:(long long)arg1 forContentItemID:(id)arg2;
- (long long)displayIndexForContentItemID:(id)arg1;
- (id)itemEnumerator;
- (void)clearItemCache;
- (void)setItem:(id)arg1 forContentItemID:(id)arg2;
- (id)itemForContentItemID:(id)arg1;
- (id)init;

@end

