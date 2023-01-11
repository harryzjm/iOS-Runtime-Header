//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKUtilityComplicationFactory, UIColor, UITapGestureRecognizer, UIView;

@interface NTKTimelapseFaceView
{
    unsigned long long _theme;
    UIView *_cornerView;
    UITapGestureRecognizer *_tapToPlayGesture;
    NTKUtilityComplicationFactory *_complicationFactory;
    unsigned long long _deviceSizeClass;
    UIColor *_foregroundColor;
    UIColor *_shadowColor;
    UIView *_topGradientView;
    UIView *_bottomGradientView;
    unsigned int _isUsingLegibility:1;
    unsigned int _isComplicationColorApplied:1;
}

- (void).cxx_destruct;
- (void)_endScrubbingAnimationFromUIViewAnimateWithDuration;
- (void)_startScrubbingAnimationFromUIViewAnimateWithDuration;
- (void)_applyScrubbingForegroundColor:(id)arg1 shadowColor:(id)arg2;
- (void)_playQueuedUpVideo;
- (id)_nextListing;
- (void)_resetVideoForListing;
- (void)didAddSubview:(id)arg1;
- (id)_onDeckPosterImageView;
- (id)_onDeckPosterImageViewWithTheme:(unsigned long long)arg1;
- (id)_posterImageView;
- (id)_posterImageViewWithTheme:(unsigned long long)arg1;
- (void)_applyDataMode;
- (void)_setDateAttributes:(id)arg1 animated:(_Bool)arg2;
- (id)_newBottomGradientViewWithColor:(id)arg1;
- (id)_newTopGradientViewWithColor:(id)arg1;
- (void)_handleTapToPlayVideoGesture:(id)arg1;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (id)_viewForEditOption:(id)arg1;
- (void)_performPreloadVideoTask;
- (void)_handleOrdinaryScreenWake;
- (void)_handleWristRaiseScreenWake;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyComplicationContentSpecificAttributesAnimated:(_Bool)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureComplicationFactory;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (long long)_utilitySlotForSlot:(id)arg1;
- (void)_loadLayoutRules;
- (void)layoutSubviews;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)_prepareForEditing;
- (_Bool)_timeLabelUsesLegibility;
- (void)dealloc;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;

@end

