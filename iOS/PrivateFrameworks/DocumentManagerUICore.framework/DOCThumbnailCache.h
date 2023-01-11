//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSMapTable;

@interface DOCThumbnailCache : NSObject
{
    NSMapTable *_cachedThumbnailItems;
    NSCache *_recentlyUsedItems;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSCache *recentlyUsedItems; // @synthesize recentlyUsedItems=_recentlyUsedItems;
@property(readonly, nonatomic) NSMapTable *cachedThumbnailItems; // @synthesize cachedThumbnailItems=_cachedThumbnailItems;
- (void)clear;
- (id)init;

@end
