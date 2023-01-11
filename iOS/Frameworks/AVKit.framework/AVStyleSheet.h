//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIFont, UITraitCollection;

__attribute__((visibility("hidden")))
@interface AVStyleSheet : NSObject
{
    _Bool _shouldUseCompactFullScreenSize;
    UIFont *_scrubberTimeLabelFont;
    UIFont *_scrubberInfoLabelFont;
    UIFont *_infoLabelFont;
    double _standardPaddingFullScreen;
    double _standardPaddingInline;
    double _standardInteritemPadding;
    double _additionalInlinePaddingForDodgingSafeArea;
    double _volumeSliderInlineWidth;
    double _volumeSliderCompactFullScreenWidth;
    double _volumeSliderRegularFullScreenWidth;
    double _volumeSliderPadding;
    double _minimumProminentPlayButtonDimension;
    double _maximumProminentPlayButtonDimension;
    double _maximumTransportControlsWidth;
    double _maximumMultiRowTransportControlsWidth;
    double _minimumTransportControlsWidth;
    double _minimumSingleButtonTransportControlsWidth;
    double _spacingBetweenScrubInstructionsAndScrubber;
    double _liveBroadcastLabelTopToBackdropTopDistance;
    UITraitCollection *_traitCollection;
    struct CGSize _defaultItemInlineSize;
    struct CGSize _defaultItemFullScreenSize;
    struct CGSize _routePickerButtonInlineSize;
    struct CGSize _routePickerButtonFullScreenSize;
    struct CGSize _minimumScrubberSize;
    struct NSDirectionalEdgeInsets _doubleRowLayoutMargins;
    struct NSDirectionalEdgeInsets _doubleRowLayoutMarginsWhenShowingScrubInstructions;
    struct NSDirectionalEdgeInsets _doublerowLayoutMarginsWhenShowingCustomContentInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(nonatomic) _Bool shouldUseCompactFullScreenSize; // @synthesize shouldUseCompactFullScreenSize=_shouldUseCompactFullScreenSize;
@property(readonly, nonatomic) double liveBroadcastLabelTopToBackdropTopDistance; // @synthesize liveBroadcastLabelTopToBackdropTopDistance=_liveBroadcastLabelTopToBackdropTopDistance;
@property(readonly, nonatomic) double spacingBetweenScrubInstructionsAndScrubber; // @synthesize spacingBetweenScrubInstructionsAndScrubber=_spacingBetweenScrubInstructionsAndScrubber;
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets doublerowLayoutMarginsWhenShowingCustomContentInfo; // @synthesize doublerowLayoutMarginsWhenShowingCustomContentInfo=_doublerowLayoutMarginsWhenShowingCustomContentInfo;
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets doubleRowLayoutMarginsWhenShowingScrubInstructions; // @synthesize doubleRowLayoutMarginsWhenShowingScrubInstructions=_doubleRowLayoutMarginsWhenShowingScrubInstructions;
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets doubleRowLayoutMargins; // @synthesize doubleRowLayoutMargins=_doubleRowLayoutMargins;
@property(readonly, nonatomic) struct CGSize minimumScrubberSize; // @synthesize minimumScrubberSize=_minimumScrubberSize;
@property(readonly, nonatomic) double minimumSingleButtonTransportControlsWidth; // @synthesize minimumSingleButtonTransportControlsWidth=_minimumSingleButtonTransportControlsWidth;
@property(readonly, nonatomic) double minimumTransportControlsWidth; // @synthesize minimumTransportControlsWidth=_minimumTransportControlsWidth;
@property(readonly, nonatomic) double maximumMultiRowTransportControlsWidth; // @synthesize maximumMultiRowTransportControlsWidth=_maximumMultiRowTransportControlsWidth;
@property(readonly, nonatomic) double maximumTransportControlsWidth; // @synthesize maximumTransportControlsWidth=_maximumTransportControlsWidth;
@property(readonly, nonatomic) double maximumProminentPlayButtonDimension; // @synthesize maximumProminentPlayButtonDimension=_maximumProminentPlayButtonDimension;
@property(readonly, nonatomic) double minimumProminentPlayButtonDimension; // @synthesize minimumProminentPlayButtonDimension=_minimumProminentPlayButtonDimension;
@property(readonly, nonatomic) double volumeSliderPadding; // @synthesize volumeSliderPadding=_volumeSliderPadding;
@property(readonly, nonatomic) double volumeSliderRegularFullScreenWidth; // @synthesize volumeSliderRegularFullScreenWidth=_volumeSliderRegularFullScreenWidth;
@property(readonly, nonatomic) double volumeSliderCompactFullScreenWidth; // @synthesize volumeSliderCompactFullScreenWidth=_volumeSliderCompactFullScreenWidth;
@property(readonly, nonatomic) double volumeSliderInlineWidth; // @synthesize volumeSliderInlineWidth=_volumeSliderInlineWidth;
@property(readonly, nonatomic) struct CGSize routePickerButtonFullScreenSize; // @synthesize routePickerButtonFullScreenSize=_routePickerButtonFullScreenSize;
@property(readonly, nonatomic) struct CGSize routePickerButtonInlineSize; // @synthesize routePickerButtonInlineSize=_routePickerButtonInlineSize;
@property(readonly, nonatomic) double additionalInlinePaddingForDodgingSafeArea; // @synthesize additionalInlinePaddingForDodgingSafeArea=_additionalInlinePaddingForDodgingSafeArea;
@property(readonly, nonatomic) double standardInteritemPadding; // @synthesize standardInteritemPadding=_standardInteritemPadding;
@property(readonly, nonatomic) double standardPaddingInline; // @synthesize standardPaddingInline=_standardPaddingInline;
@property(readonly, nonatomic) double standardPaddingFullScreen; // @synthesize standardPaddingFullScreen=_standardPaddingFullScreen;
@property(readonly, nonatomic) struct CGSize defaultItemFullScreenSize; // @synthesize defaultItemFullScreenSize=_defaultItemFullScreenSize;
@property(readonly, nonatomic) struct CGSize defaultItemInlineSize; // @synthesize defaultItemInlineSize=_defaultItemInlineSize;
- (void)_loadFontsIfNeeded;
@property(readonly, getter=shouldUsePadStyle) _Bool shouldUsePadStyle;
@property(readonly, getter=shouldUseMacStyle) _Bool shouldUseMacStyle;
@property(readonly, nonatomic) UIFont *infoLabelFont; // @synthesize infoLabelFont=_infoLabelFont;
@property(readonly, nonatomic) UIFont *scrubberTimeLabelFont; // @synthesize scrubberTimeLabelFont=_scrubberTimeLabelFont;
@property(readonly, nonatomic) UIFont *scrubberInfoLabelFont; // @synthesize scrubberInfoLabelFont=_scrubberInfoLabelFont;
- (struct UIEdgeInsets)playbackControlsViewLayoutMarginsForView:(id)arg1 keyboardHeight:(double)arg2 isFullScreen:(_Bool)arg3;
- (id)initWithTraitCollection:(id)arg1 shouldUseCompactFullScreenSize:(_Bool)arg2;

@end
