//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUViewControllerSpec.h"

@class PUOneUpViewControllerSpecChange, UIColor;

__attribute__((visibility("hidden")))
@interface PUOneUpViewControllerSpec : PUViewControllerSpec
{
    _Bool _isChromeVisible;
    _Bool _isContentLocked;
    _Bool _isPresentedForPreview;
    _Bool _isShowingPlayPauseButtonInBars;
    _Bool _shouldPlaceButtonsInNavigationBar;
    _Bool _shouldUseCompactTitleView;
    _Bool _shouldUseContentGuideInsets;
    _Bool _shouldUseUserTransformTiles;
    _Bool _shouldDisplayBadges;
    _Bool _shouldDisplayAssetExplorerReviewScreenBadges;
    _Bool _shouldDisplayPlayButtons;
    _Bool _shouldDisplayProgressIndicators;
    _Bool _shouldDisplayPeopleRow;
    _Bool _shouldAutoplayOnAppear;
    _Bool _shouldDisplayBufferingIndicators;
    _Bool _canDisplayLoadingIndicators;
    _Bool _shouldDisplayEmptyPlaceholder;
    _Bool _shouldUseCompactCommentsTitle;
    _Bool _shouldCounterrotateReviewScreenBars;
    _Bool _shouldPinContentToTop;
    _Bool _shouldLayoutReviewScreenControlBarVertically;
    _Bool _shouldPlaceScrubberInScrubberBar;
    _Bool _shouldDisplaySyndicationAttribution;
    _Bool _prefersFloatingiPadInfoPanel;
    _Bool _hideNavigationBarWhenShowingAccessoryView;
    _Bool _hideScrubberWhenShowingAccessoryView;
    _Bool _prefersSquareImageInDetails;
    _Bool _hideStatusBarWhenShowingAccessoryView;
    _Bool _hideBadgesWhenShowingAccessoryView;
    unsigned long long _options;
    double _maximumToolbarHeight;
    double _maximumAccessoryToolbarHeight;
    UIColor *_backgroundColorOverride;
    long long _tileInitialContentMode;
    struct CGSize _progressIndicatorSize;
    struct CGSize _peopleRowSize;
    struct CGSize _bufferingIndicatorSize;
    struct CGSize _renderIndicatorSize;
    struct UIEdgeInsets _progressIndicatorContentInsets;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hideBadgesWhenShowingAccessoryView; // @synthesize hideBadgesWhenShowingAccessoryView=_hideBadgesWhenShowingAccessoryView;
@property(nonatomic) _Bool hideStatusBarWhenShowingAccessoryView; // @synthesize hideStatusBarWhenShowingAccessoryView=_hideStatusBarWhenShowingAccessoryView;
@property(nonatomic) _Bool prefersSquareImageInDetails; // @synthesize prefersSquareImageInDetails=_prefersSquareImageInDetails;
@property(nonatomic) _Bool hideScrubberWhenShowingAccessoryView; // @synthesize hideScrubberWhenShowingAccessoryView=_hideScrubberWhenShowingAccessoryView;
@property(nonatomic) _Bool hideNavigationBarWhenShowingAccessoryView; // @synthesize hideNavigationBarWhenShowingAccessoryView=_hideNavigationBarWhenShowingAccessoryView;
@property(nonatomic) _Bool prefersFloatingiPadInfoPanel; // @synthesize prefersFloatingiPadInfoPanel=_prefersFloatingiPadInfoPanel;
@property(readonly, nonatomic) _Bool shouldDisplaySyndicationAttribution; // @synthesize shouldDisplaySyndicationAttribution=_shouldDisplaySyndicationAttribution;
@property(nonatomic, setter=_setShouldPlaceScrubberInScrubberBar:) _Bool shouldPlaceScrubberInScrubberBar; // @synthesize shouldPlaceScrubberInScrubberBar=_shouldPlaceScrubberInScrubberBar;
@property(nonatomic, setter=_setShouldLayoutReviewScreenControlBarVertically:) _Bool shouldLayoutReviewScreenControlBarVertically; // @synthesize shouldLayoutReviewScreenControlBarVertically=_shouldLayoutReviewScreenControlBarVertically;
@property(nonatomic, setter=_setShouldPinContentToTop:) _Bool shouldPinContentToTop; // @synthesize shouldPinContentToTop=_shouldPinContentToTop;
@property(nonatomic, setter=_setShouldCounterrotateReviewScreenBars:) _Bool shouldCounterrotateReviewScreenBars; // @synthesize shouldCounterrotateReviewScreenBars=_shouldCounterrotateReviewScreenBars;
@property(nonatomic, setter=_setTileInitialContentMode:) long long tileInitialContentMode; // @synthesize tileInitialContentMode=_tileInitialContentMode;
@property(nonatomic, setter=_setShouldUseCompactCommentsTitle:) _Bool shouldUseCompactCommentsTitle; // @synthesize shouldUseCompactCommentsTitle=_shouldUseCompactCommentsTitle;
@property(readonly, nonatomic) struct CGSize renderIndicatorSize; // @synthesize renderIndicatorSize=_renderIndicatorSize;
@property(nonatomic, setter=_setBufferingIndicatorSize:) struct CGSize bufferingIndicatorSize; // @synthesize bufferingIndicatorSize=_bufferingIndicatorSize;
@property(nonatomic, setter=_setProgressIndicatorContentInsets:) struct UIEdgeInsets progressIndicatorContentInsets; // @synthesize progressIndicatorContentInsets=_progressIndicatorContentInsets;
@property(nonatomic, setter=_setPeopleRowSize:) struct CGSize peopleRowSize; // @synthesize peopleRowSize=_peopleRowSize;
@property(nonatomic, setter=_setProgressIndicatorSize:) struct CGSize progressIndicatorSize; // @synthesize progressIndicatorSize=_progressIndicatorSize;
@property(retain, nonatomic, setter=_setBackgroundColorOverride:) UIColor *backgroundColorOverride; // @synthesize backgroundColorOverride=_backgroundColorOverride;
@property(nonatomic, setter=_setShouldDisplayEmptyPlaceholder:) _Bool shouldDisplayEmptyPlaceholder; // @synthesize shouldDisplayEmptyPlaceholder=_shouldDisplayEmptyPlaceholder;
@property(nonatomic, setter=_setCanDisplayLoadingIndicators:) _Bool canDisplayLoadingIndicators; // @synthesize canDisplayLoadingIndicators=_canDisplayLoadingIndicators;
@property(nonatomic, setter=_setShouldDisplayBufferingIndicators:) _Bool shouldDisplayBufferingIndicators; // @synthesize shouldDisplayBufferingIndicators=_shouldDisplayBufferingIndicators;
@property(nonatomic, setter=_setShouldAutoplayOnAppear:) _Bool shouldAutoplayOnAppear; // @synthesize shouldAutoplayOnAppear=_shouldAutoplayOnAppear;
@property(nonatomic, setter=_setShouldDisplayPeopleRow:) _Bool shouldDisplayPeopleRow; // @synthesize shouldDisplayPeopleRow=_shouldDisplayPeopleRow;
@property(nonatomic, setter=_setShouldDisplayProgressIndicators:) _Bool shouldDisplayProgressIndicators; // @synthesize shouldDisplayProgressIndicators=_shouldDisplayProgressIndicators;
@property(nonatomic, setter=_setShouldDisplayPlayButtons:) _Bool shouldDisplayPlayButtons; // @synthesize shouldDisplayPlayButtons=_shouldDisplayPlayButtons;
@property(nonatomic, setter=_setShouldDisplayAssetExplorerReviewScreenBadges:) _Bool shouldDisplayAssetExplorerReviewScreenBadges; // @synthesize shouldDisplayAssetExplorerReviewScreenBadges=_shouldDisplayAssetExplorerReviewScreenBadges;
@property(nonatomic, setter=_setShouldDisplayBadges:) _Bool shouldDisplayBadges; // @synthesize shouldDisplayBadges=_shouldDisplayBadges;
@property(nonatomic, setter=_setShouldUseUserTransformTiles:) _Bool shouldUseUserTransformTiles; // @synthesize shouldUseUserTransformTiles=_shouldUseUserTransformTiles;
@property(nonatomic, setter=_setShouldUseContentGuideInsets:) _Bool shouldUseContentGuideInsets; // @synthesize shouldUseContentGuideInsets=_shouldUseContentGuideInsets;
@property(nonatomic, setter=_setMaximumAccessoryToolbarHeight:) double maximumAccessoryToolbarHeight; // @synthesize maximumAccessoryToolbarHeight=_maximumAccessoryToolbarHeight;
@property(nonatomic, setter=_setMaximumToolbarHeight:) double maximumToolbarHeight; // @synthesize maximumToolbarHeight=_maximumToolbarHeight;
@property(nonatomic, setter=_setShouldUseCompactTitleView:) _Bool shouldUseCompactTitleView; // @synthesize shouldUseCompactTitleView=_shouldUseCompactTitleView;
@property(nonatomic, setter=_setShouldPlaceButtonsInNavigationBar:) _Bool shouldPlaceButtonsInNavigationBar; // @synthesize shouldPlaceButtonsInNavigationBar=_shouldPlaceButtonsInNavigationBar;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic, setter=setShowingPlayPauseButtonInBars:) _Bool isShowingPlayPauseButtonInBars; // @synthesize isShowingPlayPauseButtonInBars=_isShowingPlayPauseButtonInBars;
@property(nonatomic, setter=setPresentedForPreview:) _Bool isPresentedForPreview; // @synthesize isPresentedForPreview=_isPresentedForPreview;
@property(nonatomic, setter=setContentLocked:) _Bool isContentLocked; // @synthesize isContentLocked=_isContentLocked;
@property(nonatomic, setter=setChromeVisible:) _Bool isChromeVisible; // @synthesize isChromeVisible=_isChromeVisible;
- (void)_setHideBadgesWhenShowingAccessoryView:(_Bool)arg1;
- (void)_setHideStatusBarWhenShowingAccessoryView:(_Bool)arg1;
- (void)_setPrefersSquareImageInDetails:(_Bool)arg1;
- (void)_setHideScrubberWhenShowingAccessoryView:(_Bool)arg1;
- (void)_setHideNavigationBarWhenShowingAccessoryView:(_Bool)arg1;
- (void)_setShouldDisplaySyndicationAttribution:(_Bool)arg1;
- (void)_setRenderIndicatorSize:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGSize playButtonSize;
- (void)updateIfNeeded;
@property(readonly, nonatomic) _Bool isInCompactLayoutStyle;
@property(readonly, nonatomic) _Bool shouldDisableNavigationBarsVisibility;
- (id)spotlightBackgroundColor;
@property(readonly, nonatomic) _Bool shouldUseSpotlightStyling;
- (_Bool)_shouldForceBlackBackground;
@property(readonly, nonatomic) _Bool shouldDisplayReviewScreenBars;
@property(readonly, nonatomic) struct CGSize assetExplorerReviewScreenProgressIndicatorSize;
@property(readonly, nonatomic) _Bool shouldDisplayAssetExplorerReviewScreenProgressIndicators;
@property(readonly, nonatomic) _Bool shouldDisplaySelectionIndicators;
@property(readonly, nonatomic) _Bool shouldShowTitleView;
@property(readonly, nonatomic) _Bool allowTapOnTitle;
@property(readonly, nonatomic) _Bool allowProgrammaticNavBackButton;
@property(readonly, nonatomic) _Bool allowSuggestions;
@property(readonly, nonatomic) _Bool allowAccessoryVisibility;
- (_Bool)_isAssetExplorerReviewScreen;
@property(readonly, nonatomic) PUOneUpViewControllerSpecChange *currentChange;
- (id)newSpecChange;
- (id)initWithOptions:(unsigned long long)arg1;

@end

