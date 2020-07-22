//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKComplicationDisplayWrapperView, NTKUtilityComplicationFactory;

@interface NTKVideoFaceView
{
    unsigned long long _theme;
    NTKUtilityComplicationFactory *_complicationFactory;
    NTKComplicationDisplayWrapperView *_touchWrapper;
    unsigned int _tapToPlayGestureEnabled:1;
    unsigned int _useDefaultListing:1;
    unsigned int _isComplicationColorApplied:1;
}

- (void).cxx_destruct;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (_Bool)_shouldDelayBeforePlayingNextVideo;
- (void)_handleTapToPlayVideoGesture;
- (id)_nextListing;
- (id)_defaultListing;
- (void)_selectDefaultListing;
- (void)didAddSubview:(id)arg1;
- (id)_onDeckPosterImageView;
- (id)_posterImageView;
- (void)_applyComplicationContentSpecificAttributesWithColor:(id)arg1 animated:(_Bool)arg2;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_overlayColor;
- (void)_configureComplicationFactory;
- (id)_posterImageViewWithTheme:(unsigned long long)arg1;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_updatePaused;
- (double)_timeTravelYAdjustment;
- (double)_rightSideMarginForDigitalTimeHeroPosition;
- (id)_viewForEditOption:(id)arg1;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_loadLayoutRules;
- (long long)_utilitySlotForSlot:(id)arg1;
- (void)_cleanupAfterEditing;
- (void)_prepareForEditing;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)_performPreloadVideoTask;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)_complicationDisplayWrapperForTouch:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

