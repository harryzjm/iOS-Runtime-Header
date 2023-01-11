//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RCRecorderStyleProvider : NSObject
{
    long long _currentUserInterfaceStyle;
}

+ (id)sharedStyleProvider;
@property long long currentUserInterfaceStyle; // @synthesize currentUserInterfaceStyle=_currentUserInterfaceStyle;
- (_Bool)shouldTintNavBar;
- (_Bool)toolbarButtonsShouldHaveNonDefaultColor;
- (_Bool)toolbarShouldBeTransparent;
- (_Bool)allowsInteractiveCardSizing;
- (_Bool)needsPlaybackSpacerView;
- (_Bool)hasBeginAndEndTimeLabelAtOverviewWaveform;
- (_Bool)shouldAskForDeletionConfirmation;
- (_Bool)usesLargeTitles;
- (_Bool)pinsSearchBarInLibrary;
- (_Bool)useDefaultTableViewSeparators;
- (_Bool)useVibrancyStyleInRecordingsTableView;
- (_Bool)presentsRecoverConfirmationAsAlert;
- (_Bool)presentsDeleteConfirmationAsAlert;
- (_Bool)_usesRemindersUI;
- (_Bool)_isIOSMac;
- (_Bool)_isIpadOrIOSMac;
- (_Bool)recordingViewHidesBlurEffectsWhenInactive;
- (_Bool)showsEmptyLibraryMessageInLibrary;
- (_Bool)supportsLockScreen;
- (_Bool)supportsLockScreenRotation;
- (_Bool)playbackCardHasInsets;
- (_Bool)allowsScrollingUnderNavBar;
- (_Bool)showsVirtualNavBarInPlaybackView;
- (_Bool)alwaysHidesDetailNavBar;
- (_Bool)hasTransparentMasterNavBarBackground;
- (_Bool)usesSystemToolBarForRecordingLibrary;
- (_Bool)usesExtraWidePrimaryColumnWidth;
- (_Bool)usesScreenCaptureAsCardBackground;
- (_Bool)usesNavBarLargeTitleAndSearchBarHosting;
- (_Bool)showsBlurThroughEffectInBottomAccessory;
- (_Bool)showsGradientsInBottomOfCardView;
- (_Bool)supportsMainViewControllerUndo;
- (_Bool)hostsUndoButtonInToolbar;
- (_Bool)hostsTrimButtonInToolbar;
- (_Bool)hostsCancelButtonInBottomSection;
- (_Bool)hostsTransportAndDoneButtonInBottomSection;
- (_Bool)presentsTitleAndAdditionalEditingControlsInPlaybackCard;
- (_Bool)presentsTitleAndAdditionalEditingControlsInRecordingCard;
- (_Bool)supportsCompactRecordingCard;
- (_Bool)shouldShowOverviewWaveform;
- (_Bool)inhibitsLandscapeDisplayModeButton;
- (_Bool)supportsRotationButNotOtherResizing;
- (_Bool)shouldAnimateLibraryToCardTransition;
- (double)animationDurationBetweenLibraryAndCard;
- (_Bool)presentsCardModallyInRootViewController;
- (_Bool)expandsTableViewRowOnSelection;
- (_Bool)isAccessibilityLargerTextSizeEnabled;
- (id)accessibilityLargeSizes;
- (_Bool)_isIphone;
- (_Bool)_isIpad;
- (id)welcomeBulletBlurbTextAttributes;
- (id)welcomeBulletTitleTextAttributes;
- (id)welcomeTitleTextAttributesForFontSizePhone:(double)arg1 pad:(double)arg2;
- (id)beginEndLabelsFont;
- (id)timeLineLabelFont;
- (id)durationLabelFontForCompactRecordingView;
- (id)emptyLibraryTextScalableSecondaryFont;
- (id)editingToolbarTitleLabelFont;
- (id)editingToolbarCancelButtonLabelFont;
- (id)editingToolbarSaveButtonLabelFont;
- (id)editingControlButtonLabelFont;
- (id)recordingControlTextFont;
- (id)durationLabelFont;
- (id)creationDateLabelFontForTableViewCell;
- (id)creationDateLabelFont;
- (id)descriptionViewScalableSecondaryFont;
- (id)descriptionViewScalableTitleFontForCardView;
- (id)descriptionViewScalableTitleFontForTableViewCell;
- (id)navBarTintColor;
- (id)recentlyDeleteToolBarDividerColor;
- (id)recentlyDeleteNonDefaultButtonTextColor;
- (id)sliderThumbTintColor;
- (id)maxTrackTintColor;
- (id)minTrackTintColor;
- (id)replaceSelectionOverlayColor;
- (id)selectionOverlayEndpointTimeColor;
- (id)selectionOverlayEndpointBarColor;
- (id)selectionOverlayColor;
- (id)playbackPositionTimeColor;
- (id)recordPositionBarColor;
- (id)playbackPositionBarColor;
- (id)timeLineMajorPlaybackMarkerColor;
- (id)timeLineMinorPlaybackMarkerColor;
- (id)timeLineMinorMarkerColor;
- (id)timeLineMajorMarkerColor;
- (id)timelinePlaybackBackgroundColor;
- (id)timelinePlaybackTimeColor;
- (id)timeLineBackgroundColor;
- (id)timeLineTimeColor;
- (id)waveformHighlightedBackgroundColor;
- (id)waveformCompactHighlightedBackgroundColor;
- (id)waveformOverviewHighlightedBackgroundColor;
- (id)waveformOverviewBackgroundColor;
- (id)beginEndLabelsPlaybackColor;
- (id)beginEndLabelsColor;
- (id)overviewWaveformPlaybackColor;
- (id)waveformPlaybackColor;
- (id)waveformPlaybackHighlightedBackgroundColor;
- (id)waveformPlaybackBackgroundColor;
- (id)waveformDimmedColor;
- (id)overviewWaveformHighlightColor;
- (id)waveformHighlightColor;
- (id)overviewWaveformEditModePlaybackColor;
- (id)waveformColor;
- (id)waveformBackgroundColor;
- (id)backgroundColor;
- (id)waveformCompactBackgroundColor;
- (id)tableViewDoubleLineSeparatorColor;
- (id)tableViewToolboxSeparatorColor;
- (id)tableViewSeparatorColor;
- (long long)cellEditingSelectionStyle;
- (long long)cellSelectionStyle;
- (id)tableViewEditButtonTextColor;
- (id)tableViewCellTextColor;
- (id)tableViewSelectionCellBackgroundColor;
- (id)tableViewCellBackgroundColor;
- (id)tableViewBackgroundColor;
- (id)emptyLibraryBackgroundColor;
- (id)emptyLibraryMessageTextColor;
- (id)footerViewBackgroundColor;
- (id)recordingViewEffectsInactiveBackgroundColor;
- (id)recordingViewEffectsActiveBackgroundColor;
- (id)recordingSectionDoneButtonTextColor;
- (id)recordingSectionCancelButtonInnerColor;
- (double)recordingSectionDoneButtonDisabledOpacity;
- (id)recordingSectionDoneButtonInnerColor;
- (id)recordingControlOuterColorResume;
- (id)recordingControlInnerColorResume;
- (id)recordingControlInnerColor;
- (id)recordingControlFontColorResume;
- (id)recordingControlFontColor;
- (id)playbackCardSecondaryLabelFontColor;
- (id)playbackCardPrimaryLabelFontColor;
- (id)editingToolbarTitleTextColor;
- (id)editingToolbarButtonDisabledTextColor;
- (id)editingToolbarButtonTextColor;
- (id)titleEditingInsertionPointColor;
- (id)recordingCardTopBorderColor2;
- (id)recordingCardTopBorderColor1;
- (id)recordingCardBottomGradientColor;
- (id)recordingCardTopGradientColor;
- (id)recordingCardBottomAccessoryBackgroundColor;
- (id)recordingCardDefaultBackgroundColor;
- (id)recordingCardTimeLabelFontColor;
- (id)playbackCardTimeLabelFontColor;
- (id)playbackCardTopBorderColor2;
- (id)playbackCardTopBorderColor1;
- (id)playbackCardBottomGradientColor;
- (id)playbackCardTopGradientColor;
- (id)actionControlsColorForPlaybackCard;
- (id)transportControlsColorForPlaybackCard;
- (id)transportControlsColorForRecordingCard;
- (id)secondaryTransportControlsColorForLibrary;
- (id)transportControlsColorForLibrary;
- (id)_roundedThemePrimaryBackgroundColor;
- (id)navigationBarTintColor;
- (id)windowHeaderSpacerViewBackgroundColor;
- (id)playbackViewBackgroundColor;
- (id)mainViewBackgroundColor;
- (double)recordingControlLockScreenPadding;
- (double)compactStyleTimeBarHeightInset;
- (double)compactStyleTimeBarDefaultHeight;
- (double)compactStylePlayheadMultiplier;
- (double)overviewKnobWidthMultiplier;
- (double)overviewPlayheadWidthMultiplier;
- (double)knobWidthMultiplier;
- (double)playheadWidthMultiplier;
- (double)selectionLightOverlayAlpha;
- (double)selectionDimOverlayAlpha;
- (double)selectionOverlayAlpha;
- (double)selectionHitTestSlop;
- (double)selectionTimeInsetNormal;
- (double)selectionTimeInsetWhenSelected;
- (double)selectionTimeMinOffset;
- (double)selectionTimeBaseLineOffset;
- (double)selectionMiddleTimeBaselineInset;
- (double)selectionHighlightToKnobInset;
- (double)selectionBarWidthAX;
- (double)selectionBarWidth;
- (double)selectionKnobRadiusAX;
- (double)selectionKnobRadius;
- (double)editTrimToolbarButtonTopInset;
- (double)editToolbarButtonTopInset;
- (double)editToolbarTitleTopInset;
- (double)annotationViewHeight;
- (double)timeLineMinorTickHeight;
- (double)timeLineMajorTickHeight;
- (double)timeLineTickWidth;
- (double)overviewWaveformMinimumDurationToDisplayWhenRecording;
- (double)beginEndLabelsTopPadding;
- (double)compactWaveformWaveVerticalPadding;
- (double)overviewWaveformWaveVerticalPadding;
- (double)waveformWaveVerticalPadding;
- (double)overviewWaveformHorizontalSpacing;
- (double)overviewWaveformWaveWidth;
- (double)waveformHorizontalSpacing;
- (double)waveformWaveWidth;
- (double)waveformViewBottomPadding;
- (double)waveformViewTopPadding;
- (double)waveformViewRightPadding;
- (double)waveformViewleftPadding;
- (double)waveformVerticalOffset;
- (double)waveformVerticalHeightReduction;
- (double)defaultFlushRate;
- (double)maximumDecibelDisplayRange;
- (double)minimumDecibelDisplayRange;
- (double)descriptionViewCreationDurationInfoLabelXOffset;
- (double)descriptionViewCreationDateInfoLabelXOffset;
- (double)descriptionCompactViewTitleToSecondaryPadding;
- (double)descriptionViewTitleToSecondaryPadding;
- (double)descriptionViewSecondaryLabelsTopMargin;
- (struct CGSize)actionMenuImageSize;
- (double)libraryCellSliderAndControlsVerticalStackViewSpacing;
- (double)libraryCellDescriptionViewShuttleBarPadding;
- (double)libraryCellShuttleBarHeight;
- (double)libraryCellDescriptionHeight;
- (double)recordingControlLozengeFixedWidth;
- (double)recordingControlPauseStrokeCornerRadius;
- (double)recordingControlPauseGap;
- (double)recordingControlSquareCornerRadius;
- (double)recordingControlInnerSquareWidth;
- (double)recordingControlOuterRingGap;
- (double)recordingControlOuterRingThickness;
- (double)recordingControlDiameter;
- (double)transportButtonAnimationDuration;
- (double)transportButtonAnimationShrinkFactor;
- (id)transportButtonAnimationCircleColorLightBG;
- (id)transportButtonAnimationCircleColorDarkBG;
- (double)transportButtonAnimationPlayCircleRadius;
- (double)transportButtonAnimationJumpCircleRadius;
- (_Bool)transportButtonsAnimateWithCircle;
- (struct UIEdgeInsets)playbackViewFullScreenEdgeInsets;
- (struct UIEdgeInsets)playbackViewEdgeInsets;
- (_Bool)_isLandscape;
- (_Bool)_isPortrait;
- (double)playbackViewCornerRadius;
- (double)playbackViewShuttleBarWidth;
- (double)playbackViewVerticalSpacingBelowOverviewWaveform;
- (double)playbackViewVerticalSpacingAboveOverviewWaveform;
- (double)playbackViewWaveformOverviewSidePadding;
- (double)playbackViewTopPadding;
- (double)playbackViewControlSectionHeight;
- (double)playbackViewTimeLabelYOffset;
- (double)playbackViewTimeSectionHeight;
- (id)playbackViewTimeLabelFont;
- (double)jumpBackwardForwardButtonSpacing;
- (double)trimDeleteButtonSpacing;
- (double)recentlyDeletedToolbarDivdiderHeight;
- (double)recentlyDeletedToolbarDivdiderInset;
- (double)dragToCompactTransitionEpsilon;
- (double)overviewPlayheadHeightInset;
- (double)inOutButtonCornerRadius;
- (id)inOutButtonBackgroundColor;
- (id)inOutButtonTextColor;
- (struct CGSize)doneCancelButtonRightSize;
- (struct CGSize)trimDeleteButtonLeftSize;
- (double)trimDeleteButtonLeftPaddingDistance;
- (double)trimDeleteButtonLeftPadding;
- (double)trimDeleteButtonCornerRadius;
- (double)trimDeleteButtonDisabledOpacity;
- (id)trimDeleteButtonBackgroundColor;
- (id)trimDeleteButtonTextColor;
- (double)virtualNavBarButtonExtraSpaceItemSpacing;
- (double)virtualNavBarWidthInset;
- (double)virtualNavBarButtonItemSpacing;
- (double)dimmingAlphaForCardBackground;
- (double)recordingViewWaveformOverviewSidePadding;
- (double)recordingViewWaveformOverviewSpaceBetweenTimelabelAndOverview;
- (double)recordingViewWaveformOverviewSpaceBetweenMainWaveformAndOverview;
- (double)borderLayerThickness;
- (double)actionButtonExtraXAxisActiveWidth;
- (double)cardTransitionToCompactSpringiness;
- (double)topMarginForCardView;
- (double)topMarginMinSafeAreaTopInsetForCardView;
- (double)cornerRadiusForCardView;
- (double)shuttleBarButtonContainerHeightLibrary;
- (double)shuttleBarButtonContainerHeightCard;
- (double)shuttleBarHeight;
- (double)editToolbarCompactHeight;
- (double)editToolbarHeight;
- (double)positionReadoutLabelYOffset;
- (double)positionReadoutHeight;
- (double)fullScreenDescriptionHeight;
- (double)recordingSectionBottomPadding;
- (double)bottomAccessoryDescriptionHeight;
- (double)selectionOverlayBorderWidth;
- (double)overviewWaveformCornerRadius;
- (double)overviewWaveformHeight;
- (double)bottomAccessoryWaveformHeight;
- (double)recordingControlHorizontalOffset;
- (double)cancelButtonBottomAlignmentOffset;
- (double)doneEditingButtonSidePadding;
- (double)doneButtonSidePadding;
- (double)recordingControlSidePadding;
- (double)recordingControlSectionHeight;
- (double)topScreenSpacerHeight;
- (double)recordingControlHeight;
- (struct CGSize)centerClusterControlSize;
- (double)librarySelectedMoreAndTrashButtonPadding;
- (double)centerClusterWidthLibrary;
- (double)centerClusterWidthJumpButton;
- (double)centerClusterWidthCard;
- (double)emptyLibraryLabelXInset;
- (double)primaryColumnWidth;
- (double)descriptionViewSecondaryLabelAlpha;
- (double)recordingControlAlphaWhenPressed;
- (double)recordingControlAnimationDuration;
- (double)recordingViewResizeAnimationDuration;
- (double)tableViewAlphaWhenDisabled;
- (long long)tableViewAnimationCurve;
- (double)tableViewAnimationDuration;
- (_Bool)isDarkMode;
- (unsigned long long)supportedInterfaceOrientations;

@end

