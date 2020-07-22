//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKTimeModuleViewTapClient-Protocol.h>

@class CLKTimeFormatter, NSDateComponentsFormatter, NSString, NTKLayoutRule, NTKTimeModuleView;

@interface NTKDigitalModularFaceView <NTKTimeModuleViewTapClient>
{
    NTKTimeModuleView *_timeModuleView;
    NTKLayoutRule *_timeLayoutRuleNormal;
    NTKLayoutRule *_timeLayoutRuleEditing;
    unsigned long long _faceColor;
    _Bool _is24HourMode;
    CLKTimeFormatter *_dateFormatter;
    NSDateComponentsFormatter *_dayOffsetDateFormatter;
    NSDateComponentsFormatter *_subdayOffsetDateFormatter;
}

+ (id)_swatchImageForColorOption:(id)arg1;
- (void).cxx_destruct;
- (void)_updateLocale;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (void)_layoutTimeTravelStatusModule:(id)arg1;
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_scrubToDate:(id)arg1 animated:(_Bool)arg2;
- (void)_startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (double)_timeTravelStatusModuleCaptionConstraintPadding;
- (_Bool)_wantsTimeTravelStatusModule;
- (_Bool)_supportsTimeScrubbing;
- (void)_applyFaceColor:(unsigned long long)arg1 toModuleView:(id)arg2;
- (void)_enumerateModuleViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)_moduleViewForComplicationSlot:(id)arg1;
- (id)_complicationSlotsForRow:(unsigned long long)arg1;
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (struct CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureForEditMode:(long long)arg1;
- (void)_cleanupAfterZoom;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_layoutForegroundContainerView;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (void)_loadLayoutRulesForState:(long long)arg1 withTopGap:(double)arg2 largeModuleHeight:(double)arg3;
- (void)_loadLayoutRules;
- (_Bool)_needsForegroundContainerView;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)performTapAction;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)dealloc;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

