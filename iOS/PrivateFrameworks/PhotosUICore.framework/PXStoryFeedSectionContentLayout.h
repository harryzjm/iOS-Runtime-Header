//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGLayoutContentSource-Protocol.h>
#import <PhotosUICore/PXGSublayoutProvider-Protocol.h>
#import <PhotosUICore/PXTapToRadarDiagnosticProvider-Protocol.h>

@class NSString, PXSectionedDataSource, PXSectionedDataSourceChangeDetails, PXStoryFeedAutoplayController, PXStoryFeedSublayoutComposition, PXStoryFeedViewModel;
@protocol PXStoryFeedItemLayoutFactory;

@interface PXStoryFeedSectionContentLayout <PXGSublayoutProvider, PXGLayoutContentSource, PXChangeObserver, PXTapToRadarDiagnosticProvider>
{
    CDStruct_af00bf4e _updateFlags;
    PXSectionedDataSourceChangeDetails *_lastChangeDetails;
    PXSectionedDataSource *_presentedDataSource;
    struct {
        _Bool setItemLayoutShouldAutoplayContentVideoTimeRange;
        _Bool setItemLayoutIsTouched;
        _Bool shouldReloadItemLayoutForChangedItemFromIndexPathInDataSourceToIndexPathInDataSource;
        _Bool itemPlacementControllerForItemReferenceItemLayout;
    } _itemLayoutFactoryRespondsTo;
    PXStoryFeedViewModel *_viewModel;
    PXSectionedDataSource *_dataSource;
    id <PXStoryFeedItemLayoutFactory> _itemLayoutFactory;
    PXStoryFeedAutoplayController *_autoplayController;
    struct PXSimpleIndexPath _sectionIndexPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXStoryFeedAutoplayController *autoplayController; // @synthesize autoplayController=_autoplayController;
@property(readonly, nonatomic) id <PXStoryFeedItemLayoutFactory> itemLayoutFactory; // @synthesize itemLayoutFactory=_itemLayoutFactory;
@property(readonly, nonatomic) struct PXSimpleIndexPath sectionIndexPath; // @synthesize sectionIndexPath=_sectionIndexPath;
@property(readonly, nonatomic) PXSectionedDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) PXStoryFeedViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;
- (_Bool)axCanFocusOnSpriteAtIndex:(unsigned int)arg1;
- (id)axSpriteIndexesInRect:(struct CGRect)arg1;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg1 inDirection:(unsigned long long)arg2;
- (id)axSpriteIndexes;
- (_Bool)axShouldSearchLeafsInSubgroups;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)willRemoveSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;
- (struct CGSize)layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize)arg3;
- (void)_invalidateItemLayoutParameters;
- (void)_updateAutoplayControllerParameters;
- (void)_invalidateAutoplayControllerParameters;
- (void)_updateCompositionParameters;
- (void)_invalidateCompositionParameters;
- (void)_updateFeedSprites;
- (void)_updateFeedSublayouts;
- (void)_invalidateFeedSublayouts;
- (void)didUpdate;
- (void)update;
- (void)willUpdate;
- (id)itemPlacementControllerForItemReference:(id)arg1;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_handleTouchForItemAtIndex:(long long)arg1;
- (_Bool)_handlePrimaryActionForItemAtIndex:(long long)arg1;
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;
- (void)visibleRectDidChange;
- (void)didUpdateSublayouts;
- (long long)scrollableAxis;
- (long long)itemForSpriteIndex:(unsigned int)arg1;
- (id)initWithViewModel:(id)arg1 dataSource:(id)arg2 sectionIndexPath:(struct PXSimpleIndexPath)arg3;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) PXStoryFeedSublayoutComposition *composition; // @dynamic composition;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
