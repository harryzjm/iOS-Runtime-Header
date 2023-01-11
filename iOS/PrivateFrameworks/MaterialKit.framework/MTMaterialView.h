//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MaterialKit/MTMaterialSettingsObserving-Protocol.h>

@class MTMaterialSettingsInterpolator, MTVibrantStylingProvider, NSString, UIViewFloatAnimatableProperty, _MTBackdropView;
@protocol MTMaterialSettings><MTMaterialSettingsObservable;

@interface MTMaterialView : UIView <MTMaterialSettingsObserving>
{
    MTMaterialSettingsInterpolator *_settingsInterpolator;
    _MTBackdropView *_backdropView;
    UIView *_reducedTransparencyBackdropReplacementView;
    UIView *_baseOverlayView;
    UIView *_primaryOverlayView;
    UIView *_secondaryOverlayView;
    _Bool _cornerRadiusIsContinuous;
    _Bool _isConfiguredAsOverlay;
    _Bool _highlighted;
    _Bool _shouldCrossfadeIfNecessary;
    _Bool _forceCrossfadeIfNecessary;
    _Bool _useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
    NSString *_groupName;
    CDUnknownBlockType _backdropScaleAdjustment;
    UIViewFloatAnimatableProperty *_backdropFloatAnimatableProperty;
}

+ (void)_validateRecipe:(long long *)arg1 andOptions:(unsigned long long *)arg2;
+ (id)materialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2;
+ (id)materialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3;
+ (void)initialize;
+ (double)highlightAlpha;
+ (id)materialViewWithSettings:(id)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(CDUnknownBlockType)arg4;
+ (id)materialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *backdropFloatAnimatableProperty; // @synthesize backdropFloatAnimatableProperty=_backdropFloatAnimatableProperty;
@property(nonatomic) _Bool useBuiltInAlphaTransformerAndBackdropScaleAdjustment; // @synthesize useBuiltInAlphaTransformerAndBackdropScaleAdjustment=_useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
@property(nonatomic) _Bool forceCrossfadeIfNecessary; // @synthesize forceCrossfadeIfNecessary=_forceCrossfadeIfNecessary;
@property(nonatomic) _Bool shouldCrossfadeIfNecessary; // @synthesize shouldCrossfadeIfNecessary=_shouldCrossfadeIfNecessary;
@property(copy, nonatomic) CDUnknownBlockType backdropScaleAdjustment; // @synthesize backdropScaleAdjustment=_backdropScaleAdjustment;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)_isCrossfadeNecessary;
- (id)_backdropLayer;
- (_Bool)_supportsVariableWeighting;
- (void)_reduceTransparencyStatusDidChange;
- (void)_reduceMotionStatusDidChange;
- (id)_observableSettings;
- (void)_configureSecondaryOverlayViewIfNecessaryWithSettingsInterpolator:(id)arg1;
- (void)_configurePrimaryOverlayViewIfNecessaryWithSettingsInterpolator:(id)arg1;
- (void)_configureBaseOverlayViewIfNecessaryWithSettingsInterpolator:(id)arg1;
- (void)_configureOverlayView:(id *)arg1 forOverlayOption:(unsigned long long)arg2 withSettingsInterpolator:(id)arg3 colorBlock:(CDUnknownBlockType)arg4;
- (id)_configureOverlayView:(id *)arg1 ofClass:(Class)arg2 withSettingsInterpolator:(id)arg3 color:(id)arg4;
- (void)_reevaluateShouldReduceCaptureBitDepth:(_Bool)arg1;
- (void)_setupOrInvalidateTransformer;
- (_Bool)_adjustScaleOfBackdropView:(id)arg1 ifNecessaryWithSettingsInterpolator:(id)arg2;
- (void)_configureBackdropView:(id)arg1 withSettingsInterpolator:(id)arg2;
- (void)_configureBackdropViewIfNecessaryWithSettingsInterpolator:(id)arg1;
- (void)_configureIfNecessaryWithSettingsInterpolator:(id)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (double)_continuousCornerRadius;
- (void)prune;
- (void)transitionToRecipe:(long long)arg1 options:(unsigned long long)arg2 weighting:(double)arg3;
- (void)setFinalRecipe:(long long)arg1 options:(unsigned long long)arg2;
- (void)_setCornerRadius:(double)arg1;
- (double)cornerRadius;
@property(nonatomic) double weighting;
@property(nonatomic) _Bool useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
- (void)dealloc;
- (id)initWithSettings:(id)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(CDUnknownBlockType)arg4;
- (void)transitionToSettings:(id)arg1 options:(unsigned long long)arg2 weighting:(double)arg3;
- (void)setFinalSettings:(id)arg1 options:(unsigned long long)arg2;
@property(nonatomic) _Bool allowsInPlaceFiltering;
@property(readonly, nonatomic) __weak MTVibrantStylingProvider *vibrantStylingProvider;
@property(readonly, nonatomic) id <MTMaterialSettings><MTMaterialSettingsObservable> materialSettings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

