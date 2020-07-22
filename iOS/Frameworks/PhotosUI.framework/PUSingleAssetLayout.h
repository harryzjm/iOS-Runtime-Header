//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PUAssetReference;

__attribute__((visibility("hidden")))
@interface PUSingleAssetLayout
{
    PUAssetReference *_assetReference;
    struct CGRect _assetRect;
    struct UIEdgeInsets _cropInsets;
    struct CGRect _contentsRect;
}

@property(nonatomic) struct CGRect contentsRect; // @synthesize contentsRect=_contentsRect;
@property(nonatomic) struct UIEdgeInsets cropInsets; // @synthesize cropInsets=_cropInsets;
@property(nonatomic) struct CGRect assetRect; // @synthesize assetRect=_assetRect;
@property(retain, nonatomic) PUAssetReference *assetReference; // @synthesize assetReference=_assetReference;
- (void).cxx_destruct;
- (struct CGRect)visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(long long)arg2;
- (id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (id)layoutInfosForTilesInRect:(struct CGRect)arg1;
- (struct CGRect)contentBounds;
- (void)_invalidateSingleAssetLayout;

@end

