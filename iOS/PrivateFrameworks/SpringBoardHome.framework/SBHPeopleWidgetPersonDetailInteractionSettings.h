//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings;

@interface SBHPeopleWidgetPersonDetailInteractionSettings : PTSettings
{
    _Bool _usesCardStyle;
    double _cardWidth;
    double _cardHeightPortrait;
    double _cardHeightLandscape;
    double _cardCornerRadius;
    double _cardStyleHomeScreenScale;
    double _cardStyleHomeScreenAlpha;
    double _cardStyleDarkeningTintAlpha;
    double _fullScreenHomeScreenScale;
    double _fullScreenHomeScreenAlpha;
    double _fullScreenDarkeningTintAlpha;
    SBFFluidBehaviorSettings *_zoomAnimationSettings;
    SBFFluidBehaviorSettings *_fadeOutAnimationSettings;
    double _percentMargin;
    double _fractionBetweenSourceAndContainerX;
    double _fractionBetweenSourceAndContainerY;
}

+ (id)settingsControllerModule;
- (void).cxx_destruct;
@property(nonatomic) double fractionBetweenSourceAndContainerY; // @synthesize fractionBetweenSourceAndContainerY=_fractionBetweenSourceAndContainerY;
@property(nonatomic) double fractionBetweenSourceAndContainerX; // @synthesize fractionBetweenSourceAndContainerX=_fractionBetweenSourceAndContainerX;
@property(nonatomic) double percentMargin; // @synthesize percentMargin=_percentMargin;
@property(retain, nonatomic) SBFFluidBehaviorSettings *fadeOutAnimationSettings; // @synthesize fadeOutAnimationSettings=_fadeOutAnimationSettings;
@property(retain, nonatomic) SBFFluidBehaviorSettings *zoomAnimationSettings; // @synthesize zoomAnimationSettings=_zoomAnimationSettings;
@property(nonatomic) double fullScreenDarkeningTintAlpha; // @synthesize fullScreenDarkeningTintAlpha=_fullScreenDarkeningTintAlpha;
@property(nonatomic) double fullScreenHomeScreenAlpha; // @synthesize fullScreenHomeScreenAlpha=_fullScreenHomeScreenAlpha;
@property(nonatomic) double fullScreenHomeScreenScale; // @synthesize fullScreenHomeScreenScale=_fullScreenHomeScreenScale;
@property(nonatomic) double cardStyleDarkeningTintAlpha; // @synthesize cardStyleDarkeningTintAlpha=_cardStyleDarkeningTintAlpha;
@property(nonatomic) double cardStyleHomeScreenAlpha; // @synthesize cardStyleHomeScreenAlpha=_cardStyleHomeScreenAlpha;
@property(nonatomic) double cardStyleHomeScreenScale; // @synthesize cardStyleHomeScreenScale=_cardStyleHomeScreenScale;
@property(nonatomic) double cardCornerRadius; // @synthesize cardCornerRadius=_cardCornerRadius;
@property(nonatomic) double cardHeightLandscape; // @synthesize cardHeightLandscape=_cardHeightLandscape;
@property(nonatomic) double cardHeightPortrait; // @synthesize cardHeightPortrait=_cardHeightPortrait;
@property(nonatomic) double cardWidth; // @synthesize cardWidth=_cardWidth;
@property(nonatomic) _Bool usesCardStyle; // @synthesize usesCardStyle=_usesCardStyle;
- (void)setDefaultValues;

@end
