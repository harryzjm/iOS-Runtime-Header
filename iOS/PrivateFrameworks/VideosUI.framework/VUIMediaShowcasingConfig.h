//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIMediaShowcasingConfig : NSObject
{
    _Bool _backgroundMediaTransferEnabled;
    _Bool _rubberBandingEnabled;
    _Bool _carouselBehaviorEnabled;
    _Bool _autoAdvanceToNextPageEnabled;
    _Bool _parallaxEnabled;
    _Bool _gradientUsesImageColor;
    float _backgroundVolume;
    float _foregroundVolume;
    float _titleViewTransitionDistance;
    float _navigationBarTransitionDistance;
    float _parallaxRatio;
    float _metadataFadeOutSpeed;
    float _metadataFadeInSpeed;
    float _swipeCompletionSpeedFactor;
    float _swipeSpeedFactor;
    double _playbackDelayInterval;
    double _animationTransitionDuration;
    double _backgroundMediaTransferAnimationDuration;
    double _backgroundMediaFullscreenTransitionDuration;
    double _volumeTransitionAnimationDuration;
    unsigned long long _numberOfVolumeIncrements;
    double _swipingEndAnimationDuration;
    double _autoSwipeAnimationDuration;
    double _advanceToNextPageDelayDuration;
    double _advanceToNextPageDelayDurationImageOnly;
    double _itemHoverDelayDuration;
    double _hideMuteButtonDelayDuration;
    double _hidePageIndicatorsDelayDuration;
}

@property(nonatomic) float swipeSpeedFactor; // @synthesize swipeSpeedFactor=_swipeSpeedFactor;
@property(nonatomic) double hidePageIndicatorsDelayDuration; // @synthesize hidePageIndicatorsDelayDuration=_hidePageIndicatorsDelayDuration;
@property(nonatomic) double hideMuteButtonDelayDuration; // @synthesize hideMuteButtonDelayDuration=_hideMuteButtonDelayDuration;
@property(nonatomic) _Bool gradientUsesImageColor; // @synthesize gradientUsesImageColor=_gradientUsesImageColor;
@property(nonatomic) double itemHoverDelayDuration; // @synthesize itemHoverDelayDuration=_itemHoverDelayDuration;
@property(nonatomic) float swipeCompletionSpeedFactor; // @synthesize swipeCompletionSpeedFactor=_swipeCompletionSpeedFactor;
@property(nonatomic) float metadataFadeInSpeed; // @synthesize metadataFadeInSpeed=_metadataFadeInSpeed;
@property(nonatomic) float metadataFadeOutSpeed; // @synthesize metadataFadeOutSpeed=_metadataFadeOutSpeed;
@property(nonatomic) float parallaxRatio; // @synthesize parallaxRatio=_parallaxRatio;
@property(nonatomic, getter=isParallaxEnabled) _Bool parallaxEnabled; // @synthesize parallaxEnabled=_parallaxEnabled;
@property(nonatomic) double advanceToNextPageDelayDurationImageOnly; // @synthesize advanceToNextPageDelayDurationImageOnly=_advanceToNextPageDelayDurationImageOnly;
@property(nonatomic) double advanceToNextPageDelayDuration; // @synthesize advanceToNextPageDelayDuration=_advanceToNextPageDelayDuration;
@property(nonatomic, getter=isAutoAdvanceToNextPageEnabled) _Bool autoAdvanceToNextPageEnabled; // @synthesize autoAdvanceToNextPageEnabled=_autoAdvanceToNextPageEnabled;
@property(nonatomic) float navigationBarTransitionDistance; // @synthesize navigationBarTransitionDistance=_navigationBarTransitionDistance;
@property(nonatomic) float titleViewTransitionDistance; // @synthesize titleViewTransitionDistance=_titleViewTransitionDistance;
@property(nonatomic) _Bool carouselBehaviorEnabled; // @synthesize carouselBehaviorEnabled=_carouselBehaviorEnabled;
@property(nonatomic) double autoSwipeAnimationDuration; // @synthesize autoSwipeAnimationDuration=_autoSwipeAnimationDuration;
@property(nonatomic) double swipingEndAnimationDuration; // @synthesize swipingEndAnimationDuration=_swipingEndAnimationDuration;
@property(nonatomic, getter=isRubberBandingEnabled) _Bool rubberBandingEnabled; // @synthesize rubberBandingEnabled=_rubberBandingEnabled;
@property(nonatomic) unsigned long long numberOfVolumeIncrements; // @synthesize numberOfVolumeIncrements=_numberOfVolumeIncrements;
@property(nonatomic) double volumeTransitionAnimationDuration; // @synthesize volumeTransitionAnimationDuration=_volumeTransitionAnimationDuration;
@property(nonatomic) double backgroundMediaFullscreenTransitionDuration; // @synthesize backgroundMediaFullscreenTransitionDuration=_backgroundMediaFullscreenTransitionDuration;
@property(nonatomic) double backgroundMediaTransferAnimationDuration; // @synthesize backgroundMediaTransferAnimationDuration=_backgroundMediaTransferAnimationDuration;
@property(nonatomic) _Bool backgroundMediaTransferEnabled; // @synthesize backgroundMediaTransferEnabled=_backgroundMediaTransferEnabled;
@property(nonatomic) float foregroundVolume; // @synthesize foregroundVolume=_foregroundVolume;
@property(nonatomic) float backgroundVolume; // @synthesize backgroundVolume=_backgroundVolume;
@property(nonatomic) double animationTransitionDuration; // @synthesize animationTransitionDuration=_animationTransitionDuration;
@property(nonatomic) double playbackDelayInterval; // @synthesize playbackDelayInterval=_playbackDelayInterval;
- (id)init;

@end

