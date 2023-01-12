//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryDisplayAssetFetchResult-Protocol.h>

@class NSString, PXStoryResourcesDataSource, PXStoryReusableDisplayAsset;
@protocol PXDisplayAsset;

@interface _PXStoryDummyDisplayAssetsFetchResult : NSObject <PXStoryDisplayAssetFetchResult>
{
    long long _capacity;
    long long *_resourceIndexes;
    PXStoryReusableDisplayAsset *_asset;
    PXStoryResourcesDataSource *_resourcesDataSource;
    long long _count;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, nonatomic) PXStoryResourcesDataSource *resourcesDataSource; // @synthesize resourcesDataSource=_resourcesDataSource;
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;
- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1;
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;
- (_Bool)containsObject:(id)arg1;
@property(readonly, nonatomic) id <PXDisplayAsset> lastObject;
@property(readonly, nonatomic) id <PXDisplayAsset> firstObject;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)storyDisplayAssetAtIndex:(long long)arg1;
@property(readonly, nonatomic) const long long *resourceIndexes;
- (void)setCount:(long long)arg1;
- (void)configureWithRange:(struct _NSRange)arg1;
- (void)dealloc;
- (id)initWithResourcesDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
