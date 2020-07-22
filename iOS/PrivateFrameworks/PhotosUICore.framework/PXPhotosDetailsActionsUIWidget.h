//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXActionRowTileDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotosDataSourceChangeObserver-Protocol.h>
#import <PhotosUICore/PXReusableObjectPoolDelegate-Protocol.h>
#import <PhotosUICore/PXTileSource-Protocol.h>
#import <PhotosUICore/PXTilingControllerTransitionDelegate-Protocol.h>
#import <PhotosUICore/PXUIWidget-Protocol.h>
#import <PhotosUICore/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSArray, NSMutableSet, NSString, PHFetchResult, PXActionPerformer, PXActionRowTile, PXOneUpPresentation, PXPhotoKitAssetCollectionActionManager, PXPhotosDataSource, PXPhotosDetailsActionsSpecManager, PXPhotosDetailsContext, PXReusableObjectPool, PXSectionedSelectionManager, PXTilingController, PXUIScrollViewController, PXWidgetSpec;
@protocol PXActionPerformerDelegate, PXAnonymousView, PXTileAnimator, PXWidgetDelegate, PXWidgetUnlockDelegate;

@interface PXPhotosDetailsActionsUIWidget : NSObject <PXPhotosDataSourceChangeObserver, PXTileSource, PXTilingControllerTransitionDelegate, PXReusableObjectPoolDelegate, PXActionRowTileDelegate, PXActionPerformerDelegate, PXChangeObserver, PXPhotoLibraryUIChangeObserver, UIPopoverPresentationControllerDelegate, PXUIWidget>
{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    _Bool _ensureTransition;
    struct {
        _Bool peopleFetchResult;
        _Bool actionManager;
        _Bool allowedActionTypes;
        _Bool performableActionTypes;
        _Bool rowHeight;
        _Bool layout;
    } _needsUpdateFlags;
    _Bool _allowRevealInMomentAction;
    _Bool _allowCreateMemoryAction;
    id <PXWidgetDelegate> _widgetDelegate;
    id <PXWidgetUnlockDelegate> _widgetUnlockDelegate;
    PXWidgetSpec *_spec;
    PXPhotosDetailsContext *_context;
    id <PXActionPerformerDelegate> _actionPerformerDelegate;
    PXTilingController *__tilingController;
    id <PXTileAnimator> __tileAnimator;
    PXUIScrollViewController *__scrollViewController;
    NSMutableSet *__tilesInUse;
    PXReusableObjectPool *__tileReusePool;
    PXPhotosDataSource *__photosDataSource;
    PHFetchResult *__peopleFetchResult;
    PXPhotoKitAssetCollectionActionManager *__assetCollectionActionManager;
    NSArray *__allowedActionTypes;
    NSArray *__performableActionTypes;
    NSMutableSet *__disabledActionTypes;
    PXPhotosDetailsActionsSpecManager *__specManager;
    PXActionRowTile *__measuringActionRowTile;
    double __rowHeight;
    PXActionPerformer *__activePerformer;
    struct CGPoint _lastNormalizedTapPosition;
}

@property(nonatomic) struct CGPoint lastNormalizedTapPosition; // @synthesize lastNormalizedTapPosition=_lastNormalizedTapPosition;
@property(retain, nonatomic, setter=_setActivePerformer:) PXActionPerformer *_activePerformer; // @synthesize _activePerformer=__activePerformer;
@property(nonatomic, setter=_setRowHeight:) double _rowHeight; // @synthesize _rowHeight=__rowHeight;
@property(readonly, nonatomic) PXActionRowTile *_measuringActionRowTile; // @synthesize _measuringActionRowTile=__measuringActionRowTile;
@property(readonly, nonatomic) PXPhotosDetailsActionsSpecManager *_specManager; // @synthesize _specManager=__specManager;
@property(readonly, nonatomic) NSMutableSet *_disabledActionTypes; // @synthesize _disabledActionTypes=__disabledActionTypes;
@property(retain, nonatomic, setter=_setPerformableActionTypes:) NSArray *_performableActionTypes; // @synthesize _performableActionTypes=__performableActionTypes;
@property(retain, nonatomic, setter=_setAllowedActionTypes:) NSArray *_allowedActionTypes; // @synthesize _allowedActionTypes=__allowedActionTypes;
@property(retain, nonatomic, setter=_setAssetCollectionActionManager:) PXPhotoKitAssetCollectionActionManager *_assetCollectionActionManager; // @synthesize _assetCollectionActionManager=__assetCollectionActionManager;
@property(retain, nonatomic, setter=_setPeopleFetchResult:) PHFetchResult *_peopleFetchResult; // @synthesize _peopleFetchResult=__peopleFetchResult;
@property(retain, nonatomic, setter=_setPhotosDataSource:) PXPhotosDataSource *_photosDataSource; // @synthesize _photosDataSource=__photosDataSource;
@property(readonly, nonatomic) PXReusableObjectPool *_tileReusePool; // @synthesize _tileReusePool=__tileReusePool;
@property(readonly, nonatomic) NSMutableSet *_tilesInUse; // @synthesize _tilesInUse=__tilesInUse;
@property(readonly, nonatomic) PXUIScrollViewController *_scrollViewController; // @synthesize _scrollViewController=__scrollViewController;
@property(readonly, nonatomic) id <PXTileAnimator> _tileAnimator; // @synthesize _tileAnimator=__tileAnimator;
@property(readonly, nonatomic) PXTilingController *_tilingController; // @synthesize _tilingController=__tilingController;
@property(nonatomic) __weak id <PXActionPerformerDelegate> actionPerformerDelegate; // @synthesize actionPerformerDelegate=_actionPerformerDelegate;
@property(nonatomic) _Bool allowCreateMemoryAction; // @synthesize allowCreateMemoryAction=_allowCreateMemoryAction;
@property(nonatomic) _Bool allowRevealInMomentAction; // @synthesize allowRevealInMomentAction=_allowRevealInMomentAction;
@property(retain, nonatomic) PXPhotosDetailsContext *context; // @synthesize context=_context;
@property(retain, nonatomic) PXWidgetSpec *spec; // @synthesize spec=_spec;
@property(nonatomic) __weak id <PXWidgetUnlockDelegate> widgetUnlockDelegate; // @synthesize widgetUnlockDelegate=_widgetUnlockDelegate;
@property(nonatomic) __weak id <PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
- (void).cxx_destruct;
- (void)_updateLayoutIfNeeded;
- (void)_invalidateLayoutEnsureTransition;
- (void)_invalidateLayout;
- (void)_updateRowHeightIfNeeded;
- (void)_invalidateRowHeight;
- (void)_updateActionManagerIfNeeded;
- (void)_invalidateActionManager;
- (void)_updatePerformableActionTypesIfNeeded;
- (void)_invalidatePerformableActionTypes;
- (void)_updateAllowedActionTypesIfNeeded;
- (void)_invalidateAllowedActionTypes;
- (void)_updatePeopleFetchResultIfNeeded;
- (void)_invalidatePeopleFetchResult;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (_Bool)_needsUpdate;
- (void)_performChanges:(CDUnknownBlockType)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)prepareForPopoverPresentation:(id)arg1;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)actionRowTileSelected:(id)arg1 tapPositionInTile:(struct CGPoint)arg2;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)configureActionButtonTile:(id)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void)reusableObjectPool:(id)arg1 didEvictReusableObject:(id)arg2;
- (void)reusableObjectPool:(id)arg1 didCreateReusableObject:(id)arg2;
@property(readonly, nonatomic) PXTilingController *contentTilingController;
@property(readonly, nonatomic) _Bool hasContentForCurrentInput;
- (id)_createNewLayout;
- (void)_handleContentSizeCategoryDidChange:(id)arg1;
- (void)_loadTilingController;
- (id)_extendedTraitCollection;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) _Bool allowUserInteractionWithSubtitle;
@property(readonly, nonatomic) long long contentLayoutStyle;
@property(readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property(readonly, nonatomic) long long contentViewAnchoringType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property(readonly, nonatomic) _Bool hasLoadedContentData;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localizedCaption;
@property(readonly, nonatomic) NSString *localizedDisclosureTitle;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(retain, nonatomic) PXOneUpPresentation *oneUpPresentation;
@property(nonatomic, getter=isSelecting) _Bool selecting;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsFaceMode;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;

@end
