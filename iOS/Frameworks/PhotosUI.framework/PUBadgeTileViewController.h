//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PUAssetViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PXUIAssetBadgeViewDelegate-Protocol.h>

@class NSString, PUAssetViewModel, PXUIAssetBadgeView;

__attribute__((visibility("hidden")))
@interface PUBadgeTileViewController <PUAssetViewModelChangeObserver, PXUIAssetBadgeViewDelegate>
{
    _Bool __needsUpdateBadgeInfo;
    _Bool __needsUpdateBadgeView;
    _Bool __isOverContent;
    _Bool __shouldAnimateNextBadgeViewUpdate;
    PUAssetViewModel *_assetViewModel;
    PXUIAssetBadgeView *__badgeView;
    double __contentWidth;
    struct PXAssetBadgeInfo __badgeInfo;
}

+ (id)badgeSizeCacheKeyValueFromBadgeInfo:(struct PXAssetBadgeInfo)arg1 contentWidth:(double)arg2;
+ (void)_configureBadgeView:(id)arg1 withBadgeInfo:(struct PXAssetBadgeInfo)arg2 isOverContent:(_Bool)arg3 contentWidth:(double)arg4 animated:(_Bool)arg5;
+ (struct CGSize)_badgeTileSizeForBadgeInfo:(struct PXAssetBadgeInfo)arg1 contentWidth:(double)arg2;
+ (struct CGSize)badgeTileSizeForAssetViewModel:(id)arg1 contentWidth:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic, setter=_setShouldAnimateNextBadgeViewUpdate:) _Bool _shouldAnimateNextBadgeViewUpdate; // @synthesize _shouldAnimateNextBadgeViewUpdate=__shouldAnimateNextBadgeViewUpdate;
@property(nonatomic, setter=_setContentWidth:) double _contentWidth; // @synthesize _contentWidth=__contentWidth;
@property(nonatomic, setter=_setOverContent:) _Bool _isOverContent; // @synthesize _isOverContent=__isOverContent;
@property(readonly, nonatomic) PXUIAssetBadgeView *_badgeView; // @synthesize _badgeView=__badgeView;
@property(nonatomic, setter=_setBadgeInfo:) struct PXAssetBadgeInfo _badgeInfo; // @synthesize _badgeInfo=__badgeInfo;
@property(nonatomic, setter=_setNeedsUpdateBadgeView:) _Bool _needsUpdateBadgeView; // @synthesize _needsUpdateBadgeView=__needsUpdateBadgeView;
@property(nonatomic, setter=_setNeedsUpdateBadgeInfo:) _Bool _needsUpdateBadgeInfo; // @synthesize _needsUpdateBadgeInfo=__needsUpdateBadgeInfo;
@property(retain, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)assetBadgeView:(id)arg1 userDidSelectBadges:(unsigned long long)arg2;
- (void)_updateBadgeViewIfNeeded;
- (void)_invalidateBadgeView;
- (void)_updateBadgeInfoIfNeeded;
- (void)_invalidateBadgeInfo;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)_updateIfNeeded;
- (void)prepareForReuse;
- (void)applyLayoutInfo:(id)arg1;
- (void)becomeReusable;
- (void)viewDidLoad;
- (id)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
