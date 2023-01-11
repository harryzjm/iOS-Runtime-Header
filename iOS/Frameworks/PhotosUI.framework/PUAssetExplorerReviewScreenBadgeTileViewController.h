//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PXChangeObserver-Protocol.h>
#import <PhotosUI/PXUIAssetBadgeViewDelegate-Protocol.h>

@class NSString, PUAssetActionManager, PUAssetReference, PUBrowsingViewModel, PXUIAssetBadgeView;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenBadgeTileViewController <PXChangeObserver, PUBrowsingViewModelChangeObserver, PXUIAssetBadgeViewDelegate>
{
    _Bool __performingChanges;
    _Bool __needsUpdateBadgeView;
    _Bool __isOverContent;
    PUBrowsingViewModel *_browsingViewModel;
    PUAssetReference *_assetReference;
    PUAssetActionManager *_actionManager;
    PXUIAssetBadgeView *__badgeView;
}

+ (void)_configureBadgeView:(id)arg1 isOverContent:(_Bool)arg2 isLivePhotoDisabled:(_Bool)arg3;
+ (struct CGSize)badgeTileSize;
- (void).cxx_destruct;
@property(nonatomic, setter=_setOverContent:) _Bool _isOverContent; // @synthesize _isOverContent=__isOverContent;
@property(nonatomic, setter=_setNeedsUpdateBadgeView:) _Bool _needsUpdateBadgeView; // @synthesize _needsUpdateBadgeView=__needsUpdateBadgeView;
@property(nonatomic, getter=_isPerformingChanges, setter=_setPerformingChanges:) _Bool _performingChanges; // @synthesize _performingChanges=__performingChanges;
@property(readonly, nonatomic) PXUIAssetBadgeView *_badgeView; // @synthesize _badgeView=__badgeView;
@property(retain, nonatomic) PUAssetActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain, nonatomic) PUAssetReference *assetReference; // @synthesize assetReference=_assetReference;
@property(retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)assetBadgeView:(id)arg1 userDidSelectBadges:(unsigned long long)arg2;
- (void)_updateBadgeViewIfNeeded;
- (void)_invalidateBadgeView;
- (_Bool)_needsUpdate;
- (void)_updateIfNeeded;
- (void)applyLayoutInfo:(id)arg1;
- (id)_disableLivePhotosSelectionManager;
- (id)_reviewActionManager;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)viewDidLoad;
- (id)loadView;
- (void)performChanges:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
