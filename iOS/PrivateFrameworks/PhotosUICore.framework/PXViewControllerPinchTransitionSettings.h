//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXViewControllerPinchTransitionSettings
{
    _Bool _allowPinchTransitions;
    double _transitionDuration;
    double _backgroundScale;
    double _backgroundParallax;
    double _shadowOpacity;
    double _shadowRadius;
    double _dimmingWhite;
    double _dimmingOpacity;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) double dimmingOpacity; // @synthesize dimmingOpacity=_dimmingOpacity;
@property(nonatomic) double dimmingWhite; // @synthesize dimmingWhite=_dimmingWhite;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(nonatomic) double backgroundParallax; // @synthesize backgroundParallax=_backgroundParallax;
@property(nonatomic) double backgroundScale; // @synthesize backgroundScale=_backgroundScale;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) _Bool allowPinchTransitions; // @synthesize allowPinchTransitions=_allowPinchTransitions;
- (void)setDefaultValues;
- (id)parentSettings;

@end
