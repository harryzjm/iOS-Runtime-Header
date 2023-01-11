//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosEditUI/PUAdjustmentsModeBarDataSource-Protocol.h>
#import <PhotosEditUI/PUAdjustmentsModeBarDelegate-Protocol.h>
#import <PhotosEditUI/PUPhotoEditVisualLevelSliderDataSource-Protocol.h>
#import <PhotosEditUI/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotosEditUI/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSMapTable, NSMutableSet, NSString, PUAdjustmentsMode, PUAdjustmentsModeBar, PUAdjustmentsStatisticsCache, PUAdjustmentsToolControllerSpec, PXUISnappingController, UIScrollView;

__attribute__((visibility("hidden")))
@interface PUAdjustmentsToolController <UIScrollViewDelegate, UIGestureRecognizerDelegate, PUAdjustmentsModeBarDataSource, PUAdjustmentsModeBarDelegate, PUPhotoEditVisualLevelSliderDataSource>
{
    PUAdjustmentsModeBar *_adjustmentsModeBar;
    UIScrollView *_adjustmentScrollView;
    NSArray *_adjustmentScrollViewConstraints;
    NSArray *_adjustmentsModeBarConstraints;
    NSArray *__allAvailableModes;
    PUAdjustmentsMode *_lastUsedMode;
    double _currentModeLevelSliderOffset;
    struct CGPoint _interactionInitialScrollOffset;
    long long _interactionMode;
    double _scrollViewModeSwitchSideOriginOffset;
    double _interactiveModeTransitionStartOffset;
    NSMapTable *_levelSlidersByMode;
    NSMapTable *_sliderThumbnailsByModeAndIntensity;
    NSMutableSet *_cleanSliderThumbnailsModes;
    _Bool _ppt_EverAdjusted;
    double _ppt_scrollDelta;
    long long _viewLoadingStartTime;
    PUAdjustmentsStatisticsCache *_statisticsCache;
    PXUISnappingController *__snappingController;
}

@property(retain, nonatomic, setter=_setSnappingController:) PXUISnappingController *_snappingController; // @synthesize _snappingController=__snappingController;
- (void).cxx_destruct;
- (void)ppt_selectBWSlider:(CDUnknownBlockType)arg1;
- (void)ppt_selectColorSlider:(CDUnknownBlockType)arg1;
- (void)ppt_selectLightSlider:(CDUnknownBlockType)arg1;
- (void)ppt_scrollSelectedSliderByDelta;
- (void)ppt_setSteps:(long long)arg1;
- (void)_ppt_scrollAfterDelay:(CDUnknownBlockType)arg1;
- (void)invalidateStatisticsCacheWithEditModel:(id)arg1 andUpdate:(_Bool)arg2;
- (void)_copyAdjustmentValuesFromModel:(id)arg1;
- (id)_allAvailableModes;
- (id)visualLevelSlider:(id)arg1 imageForIntensityIndex:(long long)arg2;
- (long long)visualLevelSliderNumberOfThumbnails:(id)arg1;
- (void)adjustmentsModeBar:(id)arg1 didTapModeToggle:(id)arg2;
- (_Bool)adjustmentsModeBar:(id)arg1 isEnabledForMode:(id)arg2;
- (void)adjustmentsModeBarDidChangeModeListExpandedState:(id)arg1;
- (void)_updateAlternateToolbarButton;
- (void)adjustmentsModeBarDidChangeSelectedMode:(id)arg1;
- (double)adjustmentsModeBar:(id)arg1 levelForMode:(id)arg2;
- (id)adjustmentsModeBar:(id)arg1 levelSliderForMode:(id)arg2;
- (id)adjustmentModesForAdjustmentsModeBar:(id)arg1;
- (void)_finishCurentInteraction;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_invalidateVisualSliderThumbnailsForMode:(id)arg1;
- (void)_invalidateVisualSliderThumbnailsForAllModes;
- (void)basePhotoInvalidated;
- (void)_generateThumbnailsIfNeededForSlider:(id)arg1 mode:(id)arg2;
- (void)_saveVisualSliderImage:(id)arg1 forMode:(id)arg2 intensityIndex:(long long)arg3;
- (id)_visualSliderImageForMode:(id)arg1 intensityIndex:(long long)arg2;
- (double)_sliderLength;
- (double)_levelForAdjustmentScrollViewOffset:(double)arg1 inMode:(id)arg2;
- (double)_adjustmentScrollViewOffsetForLevel:(double)arg1 inMode:(id)arg2;
- (id)_existingLevelSliderForMode:(id)arg1;
- (id)_levelSliderForMode:(id)arg1;
- (void)_setCurrentModeLevelSliderOffset:(double)arg1 animatedBaseValueIndicator:(_Bool)arg2;
- (void)_updateValuesForLevelSlider:(id)arg1 mode:(id)arg2 animatedBaseValueIndicator:(_Bool)arg3;
- (void)_resyncAdjustmentScrollViewOffset;
- (void)_updateAdjustmentScrollView;
- (void)_handleModePickerCancelButton:(id)arg1;
- (void)photoEditModelDidChange;
- (void)specDidChange;
- (void)didBecomeActiveTool;
- (void)willBecomeActiveTool;
- (_Bool)installLivePhotoPlaybackGestureRecognizer:(id)arg1;
- (_Bool)installTogglePreviewGestureRecognizer:(id)arg1;
- (void)_reloadLayoutDependentUIFromOrientation:(long long)arg1 toOrientation:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)setLayoutOrientation:(long long)arg1;
- (id)preferredPreviewBackgroundColor;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct UIEdgeInsets)preferredPreviewViewInsets;
- (void)resetToDefaultValueAnimated:(_Bool)arg1;
- (id)localizedResetToolActionTitle;
- (_Bool)canResetToDefaultValue;
- (id)selectedToolbarIcon;
- (id)toolbarIcon;
- (id)localizedName;
- (void)_updateBackgroundColorAnimated:(_Bool)arg1;
- (void)_updateSubviewsOrdering;
- (void)_updateAdjustmentsModeBar;
- (void)mediaViewIsReady;
- (void)setupWithPhotoEditModel:(id)arg1 editSource:(id)arg2 valuesCalculator:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)updateViewConstraints;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PUAdjustmentsToolControllerSpec *spec; // @dynamic spec;
@property(readonly) Class superclass;

@end

