//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXFeedAssetsSectionInfo
{
}

- (_Bool)isMine;
- (unsigned long long)assetsCount;
- (id)assets;
- (long long)indexOfItemWithAsset:(id)arg1;
- (_Bool)containsAsset:(id)arg1;
- (_Bool)areAllAssetsLiked;
- (void)getPhotoCount:(out unsigned long long *)arg1 videoCount:(out unsigned long long *)arg2;
- (id)countsByAssetDisplayType;
- (id)likesForItemAtIndex:(long long)arg1;
- (id)commentsForItemAtIndex:(long long)arg1;
- (id)commentForItemAtIndex:(long long)arg1;
- (long long)indexOfFirstItemFromLastBatch;
- (id)batchIDForItemAtIndex:(long long)arg1;
- (id)captionForItemAtIndex:(long long)arg1;
- (id)assetForItemAtIndex:(long long)arg1;
- (_Bool)hasPlayableAssetForItemAtIndex:(long long)arg1;
- (long long)typeForItemAtIndex:(long long)arg1;
- (void)updateFromCloudFeedEntry;
- (id)cloudFeedAssetsEntry;
- (long long)sectionType;

@end
