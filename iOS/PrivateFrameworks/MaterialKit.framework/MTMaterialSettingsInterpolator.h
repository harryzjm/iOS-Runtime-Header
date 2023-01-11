//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor;
@protocol MTMaterialSettings;

@interface MTMaterialSettingsInterpolator : NSObject
{
    double _previousWeighting;
    double _weighting;
    id <MTMaterialSettings> _initialSettings;
    unsigned long long _initialOptions;
    id <MTMaterialSettings> _finalSettings;
    unsigned long long _finalOptions;
}

+ (_Bool)isCaptureOnly:(unsigned long long)arg1;
@property(nonatomic) unsigned long long finalOptions; // @synthesize finalOptions=_finalOptions;
@property(retain, nonatomic) id <MTMaterialSettings> finalSettings; // @synthesize finalSettings=_finalSettings;
@property(nonatomic) unsigned long long initialOptions; // @synthesize initialOptions=_initialOptions;
@property(retain, nonatomic) id <MTMaterialSettings> initialSettings; // @synthesize initialSettings=_initialSettings;
@property(nonatomic) double weighting; // @synthesize weighting=_weighting;
- (void).cxx_destruct;
- (id)description;
- (id)_colorAddColorWithSettings:(id)arg1 options:(unsigned long long)arg2 alpha:(double)arg3;
- (id)_colorMatrixColorWithSettings:(id)arg1 options:(unsigned long long)arg2 alpha:(double)arg3;
- (id)_zoomWithSettings:(id)arg1 wrappedOptions:(id)arg2;
- (id)_backdropTintAlphaWithSettings:(id)arg1 wrappedOptions:(id)arg2;
- (id)_tintAlphaWithSettings:(id)arg1 wrappedOptions:(id)arg2;
- (id)_brightnessWithSettings:(id)arg1 wrappedOptions:(id)arg2;
- (id)_saturationWithSettings:(id)arg1 wrappedOptions:(id)arg2;
- (id)_luminanceAlphaWithSettings:(id)arg1 wrappedOptions:(id)arg2;
- (id)_blurRadiusWithSettings:(id)arg1 wrappedOptions:(id)arg2;
- (_Bool)_isBackdropRequiredWithSettings:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)_isBackdropRequiredForOverlayWithSettings:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)_isBackdropRequiredForMainMaterialWithSettings:(id)arg1 options:(unsigned long long)arg2;
- (id)_colorForBackdrop:(_Bool)arg1 withGetterBlock:(CDUnknownBlockType)arg2;
- (double)_propertyValueForProperty:(id)arg1;
- (double)_propertyValueForProperty:(id)arg1 withTransformer:(CDUnknownBlockType)arg2;
- (_Bool)_isPropertyEnabled:(id)arg1 consideringWeighting:(_Bool)arg2;
- (id)_performanceConfiguringSettingsForSettings:(id)arg1;
- (id)_v2SettingsForSettings:(id)arg1;
- (id)_luminanceOverlaySettingsForSettings:(id)arg1;
- (id)_basicOverlaySettingsForSettings:(id)arg1;
@property(readonly, copy, nonatomic) NSString *luminanceColorMapName;
- (double)identityValueForProperty:(id)arg1;
@property(readonly, copy, nonatomic) UIColor *colorAddColor;
@property(readonly, copy, nonatomic) UIColor *colorMatrixColor;
@property(readonly, copy, nonatomic) UIColor *secondaryOverlayColor;
@property(readonly, copy, nonatomic) UIColor *primaryOverlayColor;
@property(readonly, copy, nonatomic) UIColor *baseOverlayColor;
@property(readonly, copy, nonatomic) NSString *blurInputQuality;
@property(readonly, nonatomic) double backdropScale;
@property(readonly, nonatomic) double zoom;
@property(readonly, nonatomic) double tintAlpha;
@property(readonly, nonatomic) double brightness;
@property(readonly, nonatomic) double saturation;
@property(readonly, nonatomic) double luminanceAlpha;
@property(readonly, nonatomic) double blurRadiusWithTransformer;
@property(readonly, nonatomic) double blurRadius;
- (_Bool)isBackdropRequiredForOverlayOption:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isZoomEnabled) _Bool zoomEnabled;
@property(readonly, nonatomic, getter=isBackdropTintEnabled) _Bool backdropTintEnabled;
@property(readonly, nonatomic, getter=isBrightnessEnabled) _Bool brightnessEnabled;
@property(readonly, nonatomic, getter=isSaturationEnabled) _Bool saturationEnabled;
@property(readonly, nonatomic, getter=isLuminanceAlphaEnabled) _Bool luminanceAlphaEnabled;
@property(readonly, nonatomic, getter=isBlurEnabled) _Bool blurEnabled;
@property(readonly, nonatomic, getter=isOverlay) _Bool overlay;
@property(readonly, nonatomic) _Bool hasOverlay;
@property(readonly, nonatomic, getter=isBackdropRequiredEver) _Bool backdropRequiredEver;
@property(readonly, nonatomic, getter=isBackdropRequiredFinally) _Bool backdropRequiredFinally;
@property(readonly, nonatomic, getter=isBackdropRequiredInitially) _Bool backdropRequiredInitially;
- (_Bool)isOverlayOptionEnabled:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isCaptureOnlyOptionEnabled) _Bool captureOnlyOptionEnabled;
@property(readonly, nonatomic, getter=isAuxiliaryOverlayOptionEnabled) _Bool auxiliaryOverlayOptionEnabled;
@property(readonly, nonatomic, getter=isSecondaryOverlayOptionEnabled) _Bool secondaryOverlayOptionEnabled;
@property(readonly, nonatomic, getter=isPrimaryOverlayOptionEnabled) _Bool primaryOverlayOptionEnabled;
@property(readonly, nonatomic, getter=isBaseOverlayOptionEnabled) _Bool baseOverlayOptionEnabled;
@property(readonly, nonatomic, getter=isLuminanceOnlyOptionEnabled) _Bool luminanceOnlyOptionEnabled;
@property(readonly, nonatomic, getter=isZoomOptionEnabled) _Bool zoomOptionEnabled;
@property(readonly, nonatomic, getter=isBlurOptionEnabled) _Bool blurOptionEnabled;
@property(readonly, nonatomic, getter=isGammaOptionEnabled) _Bool gammaOptionEnabled;
- (id)invertedMaterialSettingsInterpolator;
- (id)initWithSettings:(id)arg1 options:(unsigned long long)arg2;

@end

