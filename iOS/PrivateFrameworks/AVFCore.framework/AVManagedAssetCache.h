//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVManagedAssetCacheInternal;

__attribute__((visibility("hidden")))
@interface AVManagedAssetCache
{
    AVManagedAssetCacheInternal *_priv;
}

+ (id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)arg1;
+ (id)assetCacheForProgressiveDownloadWithURL:(id)arg1;
+ (id)assetCacheForHTTPLiveStreamingWithURL:(id)arg1;
+ (id)assetCacheWithURL:(id)arg1;
- (_Bool)isHTTPLiveStreamingCacheEnabled;
- (_Bool)isProgressiveDownloadCacheEnabled;
- (_Bool)isPlayableOffline;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;
- (id)allKeys;
- (id)lastModifiedDateOfEntryForKey:(id)arg1;
- (long long)sizeOfEntryForKey:(id)arg1;
- (void)removeEntryForKey:(id)arg1;
- (id)URL;
- (long long)currentSize;
- (void)setMaxEntrySize:(long long)arg1;
- (long long)maxEntrySize;
- (void)setMaxSize:(long long)arg1;
- (long long)maxSize;
- (void)dealloc;
- (id)initWithURL:(id)arg1 enableCRABSCache:(_Bool)arg2 enableHLSCache:(_Bool)arg3;
- (id)initWithURL:(id)arg1;

@end
