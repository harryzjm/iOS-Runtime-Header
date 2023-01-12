//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICQUsageStorageCache, NSArray, UIBarButtonItem, UILabel;

@interface ICQUsageStorageMonitor : NSObject
{
    float _availableSize;
    UIBarButtonItem *_footerItem;
    UILabel *_footerLabel;
    NSArray *_footerItems;
    long long _storageClientCount;
    ICQUsageStorageCache *_cache;
    float _usedSize;
}

+ (id)sharedMonitor;
- (void).cxx_destruct;
@property(nonatomic) float usedSize; // @synthesize usedSize=_usedSize;
@property(readonly, nonatomic) float availableSize; // @synthesize availableSize=_availableSize;
- (void)flushViews;
@property(readonly, nonatomic) NSArray *footerItems;
- (void)_setAvailable:(float)arg1;
- (void)fetchSystemSizeStrings;
- (id)mediaCollectionForKey:(id)arg1;
- (void)removeMediaCollectionCacheForKey:(id)arg1;
- (void)clearUsageDataCache;
- (void)populateUsageDataWithProgressBlock:(CDUnknownBlockType)arg1;
- (void)deregisterUsageStorageClient;
- (void)registerUsageStorageClient;
- (id)init;

@end
