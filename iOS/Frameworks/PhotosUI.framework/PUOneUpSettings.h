//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSettings.h>

@class PUScrubberSettings;

@interface PUOneUpSettings : PXSettings
{
    _Bool _showInitialDetailsIndicator;
    _Bool _enableSuggestionsAnalysis;
    _Bool _initialDetailsIndicatorShouldSlideIn;
    _Bool _allowUserTransform;
    _Bool _allowBadges;
    _Bool _allowScrubber;
    _Bool _allowChromeHiding;
    _Bool _allowDoubleTapZoom;
    _Bool _allowFullsizeJPEGDisplay;
    _Bool _allowToggleOriginalBarItem;
    _Bool _showFacesAreaRect;
    _Bool _hideToolbarWhenShowingAccessoryView;
    _Bool _useGlobalDetailsVisibility;
    _Bool _useGlobalCommentsVisibility;
    _Bool _persistChromeVisibility;
    _Bool _allowParallax;
    _Bool _allowStatusBar;
    _Bool _doubleTapZoomAreaExcludesBars;
    _Bool _doubleTapZoomAreaExcludesBackground;
    _Bool _enableFigPhotoTiledLayer;
    _Bool _useURLForLargePhotosWithFigPhotoTiledLayer;
    _Bool _forceURLWithFigPhotoTiledLayer;
    _Bool _enableFigPhotoBackgroundSizeBasedDisplay;
    _Bool _simulateWorstCaseFigPhotoBackgroundSize;
    _Bool _allowPlayButtonInBars;
    _Bool _playVideoInScrubber;
    _Bool _lockScrollDuringLivePhotoPlayback;
    _Bool _livePhotoScrubberShowForPlayback;
    _Bool _allowGIFPlayback;
    _Bool _showGIFLoadingDelays;
    _Bool _useDebuggingColors;
    _Bool _useDebuggingProgressLabel;
    _Bool _showBufferingIndicatorDuringPlay;
    _Bool _showLoadingIndicatorDuringDownload;
    _Bool _alwaysShowAirPlayButton;
    _Bool _simulateAssetContentDownload;
    _Bool _simulateAssetContentDownloadFailure;
    long long _suggestionsStyle;
    long long _suggestionMaximumAssetAgeInDays;
    long long _simulatedAssetVariationSuggestion;
    double _initialDetailsIndicatorDelay;
    double _initialDetailsIndicatorDuration;
    long long _titleTapAction;
    PUScrubberSettings *_scrubberSettings;
    unsigned long long _scaleToFitBehavior;
    long long _userNavigationMaximumDistance;
    long long _accessoryViewType;
    double _accessoryInitialTopPosition;
    double _minimumVisibleContentHeight;
    double _minimumVisibleCommentedContentHeight;
    double _chromeDefaultAnimationDuration;
    long long _chromeAutoHideBehaviorOnLivePhoto;
    long long _chromeAutoHideBehaviorOnPlayButton;
    long long _chromeAutoHideBehaviorOnSwipe;
    long long _chromeAutoHideBehaviorOnZoom;
    double _chromeAutoHideDelay;
    double _chromeTimedAutoHideAnimationDuration;
    long long _chromeAnimationType;
    long long _chromeBackgroundAnimationType;
    double _interpageSpacing;
    double _pagingSpringPullAdjustment;
    double _pagingFrictionAdjustment;
    long long _parallaxModel;
    double _parallaxFactor;
    double _barsAreaVerticalOutset;
    double _defaultMaximumZoomFactor;
    double _maximumInitialZoomToFillScaleForCompactSizeClass;
    double _maximumInitialZoomToFillScaleForRegularSizeClass;
    double _doubleTapZoomFactor;
    double _videoPauseThreshold;
    double _livePhotoInteractionThreshold;
    unsigned long long _viewModelCacheCountLimit;
    double _visibilityDurationForEnteringQuickPagingRegime;
    double _visibilityDurationForExitingQuickPagingRegime;
    long long _minNavigationDistanceForQuickPagingRegime;
    double _visibilityDurationForEnteringFastRegime;
    double _visibilityDurationForExitingFastRegime;
    long long _minNavigationDistanceForFastRegime;
    double _bounceDuration;
    double _bounceDelay;
    double _bounceSpringDamping;
    double _bounceInitialVelocity;
    double _playGIFSettledThreshold;
    double _playGIFEnterThreshold;
    double _playGIFMoveOutThreshold;
    long long _debuggingTitleType;
    unsigned long long _debuggingBadges;
    unsigned long long _debuggingBadgesWhenFavorite;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) _Bool simulateAssetContentDownloadFailure; // @synthesize simulateAssetContentDownloadFailure=_simulateAssetContentDownloadFailure;
@property(nonatomic) _Bool simulateAssetContentDownload; // @synthesize simulateAssetContentDownload=_simulateAssetContentDownload;
@property(nonatomic) _Bool alwaysShowAirPlayButton; // @synthesize alwaysShowAirPlayButton=_alwaysShowAirPlayButton;
@property(nonatomic) _Bool showLoadingIndicatorDuringDownload; // @synthesize showLoadingIndicatorDuringDownload=_showLoadingIndicatorDuringDownload;
@property(nonatomic) _Bool showBufferingIndicatorDuringPlay; // @synthesize showBufferingIndicatorDuringPlay=_showBufferingIndicatorDuringPlay;
@property(nonatomic) _Bool useDebuggingProgressLabel; // @synthesize useDebuggingProgressLabel=_useDebuggingProgressLabel;
@property(nonatomic) unsigned long long debuggingBadgesWhenFavorite; // @synthesize debuggingBadgesWhenFavorite=_debuggingBadgesWhenFavorite;
@property(nonatomic) unsigned long long debuggingBadges; // @synthesize debuggingBadges=_debuggingBadges;
@property(nonatomic) long long debuggingTitleType; // @synthesize debuggingTitleType=_debuggingTitleType;
@property(nonatomic) _Bool useDebuggingColors; // @synthesize useDebuggingColors=_useDebuggingColors;
@property(nonatomic) double playGIFMoveOutThreshold; // @synthesize playGIFMoveOutThreshold=_playGIFMoveOutThreshold;
@property(nonatomic) double playGIFEnterThreshold; // @synthesize playGIFEnterThreshold=_playGIFEnterThreshold;
@property(nonatomic) double playGIFSettledThreshold; // @synthesize playGIFSettledThreshold=_playGIFSettledThreshold;
@property(nonatomic) _Bool showGIFLoadingDelays; // @synthesize showGIFLoadingDelays=_showGIFLoadingDelays;
@property(nonatomic) _Bool allowGIFPlayback; // @synthesize allowGIFPlayback=_allowGIFPlayback;
@property(nonatomic) double bounceInitialVelocity; // @synthesize bounceInitialVelocity=_bounceInitialVelocity;
@property(nonatomic) double bounceSpringDamping; // @synthesize bounceSpringDamping=_bounceSpringDamping;
@property(nonatomic) double bounceDelay; // @synthesize bounceDelay=_bounceDelay;
@property(nonatomic) double bounceDuration; // @synthesize bounceDuration=_bounceDuration;
@property(nonatomic) long long minNavigationDistanceForFastRegime; // @synthesize minNavigationDistanceForFastRegime=_minNavigationDistanceForFastRegime;
@property(nonatomic) double visibilityDurationForExitingFastRegime; // @synthesize visibilityDurationForExitingFastRegime=_visibilityDurationForExitingFastRegime;
@property(nonatomic) double visibilityDurationForEnteringFastRegime; // @synthesize visibilityDurationForEnteringFastRegime=_visibilityDurationForEnteringFastRegime;
@property(nonatomic) long long minNavigationDistanceForQuickPagingRegime; // @synthesize minNavigationDistanceForQuickPagingRegime=_minNavigationDistanceForQuickPagingRegime;
@property(nonatomic) double visibilityDurationForExitingQuickPagingRegime; // @synthesize visibilityDurationForExitingQuickPagingRegime=_visibilityDurationForExitingQuickPagingRegime;
@property(nonatomic) double visibilityDurationForEnteringQuickPagingRegime; // @synthesize visibilityDurationForEnteringQuickPagingRegime=_visibilityDurationForEnteringQuickPagingRegime;
@property(nonatomic) unsigned long long viewModelCacheCountLimit; // @synthesize viewModelCacheCountLimit=_viewModelCacheCountLimit;
@property(nonatomic) _Bool livePhotoScrubberShowForPlayback; // @synthesize livePhotoScrubberShowForPlayback=_livePhotoScrubberShowForPlayback;
@property(nonatomic) _Bool lockScrollDuringLivePhotoPlayback; // @synthesize lockScrollDuringLivePhotoPlayback=_lockScrollDuringLivePhotoPlayback;
@property(nonatomic) double livePhotoInteractionThreshold; // @synthesize livePhotoInteractionThreshold=_livePhotoInteractionThreshold;
@property(nonatomic) double videoPauseThreshold; // @synthesize videoPauseThreshold=_videoPauseThreshold;
@property(nonatomic) _Bool playVideoInScrubber; // @synthesize playVideoInScrubber=_playVideoInScrubber;
@property(nonatomic) _Bool allowPlayButtonInBars; // @synthesize allowPlayButtonInBars=_allowPlayButtonInBars;
@property(nonatomic) _Bool simulateWorstCaseFigPhotoBackgroundSize; // @synthesize simulateWorstCaseFigPhotoBackgroundSize=_simulateWorstCaseFigPhotoBackgroundSize;
@property(nonatomic) _Bool enableFigPhotoBackgroundSizeBasedDisplay; // @synthesize enableFigPhotoBackgroundSizeBasedDisplay=_enableFigPhotoBackgroundSizeBasedDisplay;
@property(nonatomic) _Bool forceURLWithFigPhotoTiledLayer; // @synthesize forceURLWithFigPhotoTiledLayer=_forceURLWithFigPhotoTiledLayer;
@property(nonatomic) _Bool useURLForLargePhotosWithFigPhotoTiledLayer; // @synthesize useURLForLargePhotosWithFigPhotoTiledLayer=_useURLForLargePhotosWithFigPhotoTiledLayer;
@property(nonatomic) _Bool enableFigPhotoTiledLayer; // @synthesize enableFigPhotoTiledLayer=_enableFigPhotoTiledLayer;
@property(nonatomic) _Bool doubleTapZoomAreaExcludesBackground; // @synthesize doubleTapZoomAreaExcludesBackground=_doubleTapZoomAreaExcludesBackground;
@property(nonatomic) _Bool doubleTapZoomAreaExcludesBars; // @synthesize doubleTapZoomAreaExcludesBars=_doubleTapZoomAreaExcludesBars;
@property(nonatomic) double doubleTapZoomFactor; // @synthesize doubleTapZoomFactor=_doubleTapZoomFactor;
@property(nonatomic) double maximumInitialZoomToFillScaleForRegularSizeClass; // @synthesize maximumInitialZoomToFillScaleForRegularSizeClass=_maximumInitialZoomToFillScaleForRegularSizeClass;
@property(nonatomic) double maximumInitialZoomToFillScaleForCompactSizeClass; // @synthesize maximumInitialZoomToFillScaleForCompactSizeClass=_maximumInitialZoomToFillScaleForCompactSizeClass;
@property(nonatomic) double defaultMaximumZoomFactor; // @synthesize defaultMaximumZoomFactor=_defaultMaximumZoomFactor;
@property(nonatomic) double barsAreaVerticalOutset; // @synthesize barsAreaVerticalOutset=_barsAreaVerticalOutset;
@property(nonatomic) _Bool allowStatusBar; // @synthesize allowStatusBar=_allowStatusBar;
@property(nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
@property(nonatomic) long long parallaxModel; // @synthesize parallaxModel=_parallaxModel;
@property(nonatomic) _Bool allowParallax; // @synthesize allowParallax=_allowParallax;
@property(nonatomic) double pagingFrictionAdjustment; // @synthesize pagingFrictionAdjustment=_pagingFrictionAdjustment;
@property(nonatomic) double pagingSpringPullAdjustment; // @synthesize pagingSpringPullAdjustment=_pagingSpringPullAdjustment;
@property(nonatomic) double interpageSpacing; // @synthesize interpageSpacing=_interpageSpacing;
@property(nonatomic) long long chromeBackgroundAnimationType; // @synthesize chromeBackgroundAnimationType=_chromeBackgroundAnimationType;
@property(nonatomic) long long chromeAnimationType; // @synthesize chromeAnimationType=_chromeAnimationType;
@property(nonatomic) _Bool persistChromeVisibility; // @synthesize persistChromeVisibility=_persistChromeVisibility;
@property(nonatomic) double chromeTimedAutoHideAnimationDuration; // @synthesize chromeTimedAutoHideAnimationDuration=_chromeTimedAutoHideAnimationDuration;
@property(nonatomic) double chromeAutoHideDelay; // @synthesize chromeAutoHideDelay=_chromeAutoHideDelay;
@property(nonatomic) long long chromeAutoHideBehaviorOnZoom; // @synthesize chromeAutoHideBehaviorOnZoom=_chromeAutoHideBehaviorOnZoom;
@property(nonatomic) long long chromeAutoHideBehaviorOnSwipe; // @synthesize chromeAutoHideBehaviorOnSwipe=_chromeAutoHideBehaviorOnSwipe;
@property(nonatomic) long long chromeAutoHideBehaviorOnPlayButton; // @synthesize chromeAutoHideBehaviorOnPlayButton=_chromeAutoHideBehaviorOnPlayButton;
@property(nonatomic) long long chromeAutoHideBehaviorOnLivePhoto; // @synthesize chromeAutoHideBehaviorOnLivePhoto=_chromeAutoHideBehaviorOnLivePhoto;
@property(nonatomic) double chromeDefaultAnimationDuration; // @synthesize chromeDefaultAnimationDuration=_chromeDefaultAnimationDuration;
@property(nonatomic) _Bool useGlobalCommentsVisibility; // @synthesize useGlobalCommentsVisibility=_useGlobalCommentsVisibility;
@property(nonatomic) _Bool useGlobalDetailsVisibility; // @synthesize useGlobalDetailsVisibility=_useGlobalDetailsVisibility;
@property(nonatomic) _Bool hideToolbarWhenShowingAccessoryView; // @synthesize hideToolbarWhenShowingAccessoryView=_hideToolbarWhenShowingAccessoryView;
@property(nonatomic) double minimumVisibleCommentedContentHeight; // @synthesize minimumVisibleCommentedContentHeight=_minimumVisibleCommentedContentHeight;
@property(nonatomic) double minimumVisibleContentHeight; // @synthesize minimumVisibleContentHeight=_minimumVisibleContentHeight;
@property(nonatomic) double accessoryInitialTopPosition; // @synthesize accessoryInitialTopPosition=_accessoryInitialTopPosition;
@property(nonatomic) long long accessoryViewType; // @synthesize accessoryViewType=_accessoryViewType;
@property(nonatomic) _Bool showFacesAreaRect; // @synthesize showFacesAreaRect=_showFacesAreaRect;
@property(nonatomic) long long userNavigationMaximumDistance; // @synthesize userNavigationMaximumDistance=_userNavigationMaximumDistance;
@property(nonatomic) _Bool allowToggleOriginalBarItem; // @synthesize allowToggleOriginalBarItem=_allowToggleOriginalBarItem;
@property(nonatomic) _Bool allowFullsizeJPEGDisplay; // @synthesize allowFullsizeJPEGDisplay=_allowFullsizeJPEGDisplay;
@property(nonatomic) _Bool allowDoubleTapZoom; // @synthesize allowDoubleTapZoom=_allowDoubleTapZoom;
@property(nonatomic) _Bool allowChromeHiding; // @synthesize allowChromeHiding=_allowChromeHiding;
@property(nonatomic) _Bool allowScrubber; // @synthesize allowScrubber=_allowScrubber;
@property(nonatomic) _Bool allowBadges; // @synthesize allowBadges=_allowBadges;
@property(nonatomic) _Bool allowUserTransform; // @synthesize allowUserTransform=_allowUserTransform;
@property(nonatomic) unsigned long long scaleToFitBehavior; // @synthesize scaleToFitBehavior=_scaleToFitBehavior;
@property(retain, nonatomic) PUScrubberSettings *scrubberSettings; // @synthesize scrubberSettings=_scrubberSettings;
@property(nonatomic) long long titleTapAction; // @synthesize titleTapAction=_titleTapAction;
@property(nonatomic) double initialDetailsIndicatorDuration; // @synthesize initialDetailsIndicatorDuration=_initialDetailsIndicatorDuration;
@property(nonatomic) double initialDetailsIndicatorDelay; // @synthesize initialDetailsIndicatorDelay=_initialDetailsIndicatorDelay;
@property(nonatomic) _Bool initialDetailsIndicatorShouldSlideIn; // @synthesize initialDetailsIndicatorShouldSlideIn=_initialDetailsIndicatorShouldSlideIn;
@property(nonatomic) _Bool enableSuggestionsAnalysis; // @synthesize enableSuggestionsAnalysis=_enableSuggestionsAnalysis;
@property(nonatomic) _Bool showInitialDetailsIndicator; // @synthesize showInitialDetailsIndicator=_showInitialDetailsIndicator;
@property(nonatomic) long long simulatedAssetVariationSuggestion; // @synthesize simulatedAssetVariationSuggestion=_simulatedAssetVariationSuggestion;
@property(nonatomic) long long suggestionMaximumAssetAgeInDays; // @synthesize suggestionMaximumAssetAgeInDays=_suggestionMaximumAssetAgeInDays;
@property(nonatomic) long long suggestionsStyle; // @synthesize suggestionsStyle=_suggestionsStyle;
- (void).cxx_destruct;
- (void)_updatePrototypeRelatedSettings;
- (void)_invalidatePrototypeRelatedSettings;
- (void)setDefaultValues;
- (id)parentSettings;

@end

