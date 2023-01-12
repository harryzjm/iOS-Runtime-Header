//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryDisplayAssetCroppingContext-Protocol.h>

@protocol PXDisplayAsset, PXStoryDisplayAssetCroppingContext;

@interface PXStoryCachingDisplayAssetCroppingContext : NSObject <PXStoryDisplayAssetCroppingContext>
{
    id <PXStoryDisplayAssetCroppingContext> _croppingContext;
    id <PXDisplayAsset> _cachedAsset;
    unsigned long long _cachedOptions;
    long long _cachedFaceCount;
    long long _cachedFeaturedFaceCount;
    struct CGRect *_cachedNormalizedFaceRects;
}

- (void).cxx_destruct;
- (void)requestIndividualFaceRectsInAsset:(id)arg1 options:(unsigned long long)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithCroppingContext:(id)arg1;
- (id)init;

@end
