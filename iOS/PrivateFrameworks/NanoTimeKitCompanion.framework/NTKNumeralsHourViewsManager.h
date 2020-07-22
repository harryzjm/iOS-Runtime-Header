//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface NTKNumeralsHourViewsManager : NSObject
{
    NSArray *_hourViews;
    long long _visibleHour;
    long long _visibleComplicationSlot;
    _Bool _areComplicationsOff;
    _Bool _adjustingForStatusIndicator;
    _Bool _hasUpperComplication;
}

- (void).cxx_destruct;
- (void)_update12AdjustmentForStatusIndicator;
- (void)setAdjustsForStatusIndicator:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGPoint)_currentHourViewPlacementForEditMode:(long long)arg1 faceConfiguration:(id)arg2;
- (double)_hourAlphaForEditMode:(long long)arg1;
- (id)_hourViewForHour:(long long)arg1 loadIfNeeded:(_Bool)arg2;
- (id)_visibleHourView;
- (void)applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2;
- (void)applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2;
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 faceConfiguration:(id)arg4;
- (void)applyFaceColorFromFaceConfiguration:(id)arg1;
- (void)applyTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 faceConfiguration:(id)arg4;
- (void)configureForEditMode:(long long)arg1;
- (void)updateVisibleHour:(long long)arg1 targetUtilitySlot:(long long)arg2 faceConfiguration:(id)arg3 animationProgress:(double)arg4;
- (_Bool)needHourAnimationForChangeToHour:(long long)arg1 toFaceConfiguration:(id)arg2;
- (void)removeHourViews;
- (void)addHourViewsToSuperview:(id)arg1;
- (id)initWithStyleFromFaceConfiguration:(id)arg1;

@end
