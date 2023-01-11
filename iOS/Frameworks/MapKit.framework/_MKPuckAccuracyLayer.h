//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class UIColor, UITraitCollection;

__attribute__((visibility("hidden")))
@interface _MKPuckAccuracyLayer : CALayer
{
    unsigned long long _mapType;
    UIColor *_tintColor;
    _Bool _stale;
    double _minimumRadius;
    _Bool _externallyHidden;
    _Bool _internallyHidden;
    _Bool _shouldShowAnimationsIfAvailable;
    UIColor *_fullOpacityFillColor;
    double _baseOpacity;
    double _additionalOpacityMultiplier;
    UITraitCollection *_traitCollection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(nonatomic) double minimumRadius; // @synthesize minimumRadius=_minimumRadius;
@property(nonatomic, getter=isStale) _Bool stale; // @synthesize stale=_stale;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
- (void)updateLegacyConfiguration;
- (void)stopAnimations;
- (void)startAnimationsIfNecessary;
- (void)setHidden:(_Bool)arg1;
- (void)setFillOpacity:(double)arg1 duration:(double)arg2;
@property(readonly, nonatomic) double presentationFillOpacity;
- (void)setAccuracy:(double)arg1 duration:(double)arg2;
- (void)_updateColors;
- (id)init;

@end
