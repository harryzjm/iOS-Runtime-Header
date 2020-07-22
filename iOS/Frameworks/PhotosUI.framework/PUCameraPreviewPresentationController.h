//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PUScrubberView, UIImage, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface PUCameraPreviewPresentationController
{
    _Bool __shouldHideScrubber;
    UIView *_customBackgroundView;
    UIView *_scrubberContainerView;
    PUScrubberView *_presentationScrubberView;
    UIImageView *__customDotImageView;
    UIView *__customSourceView;
    UIImage *__revealImage;
    struct CGRect __previewSourceRect;
    struct CGRect __revealFinalRect;
}

+ (_Bool)_shouldApplyVisualEffectsToPresentingView;
@property(retain, nonatomic, setter=_setRevealImage:) UIImage *_revealImage; // @synthesize _revealImage=__revealImage;
@property(nonatomic, setter=_setRevealFinalRect:) struct CGRect _revealFinalRect; // @synthesize _revealFinalRect=__revealFinalRect;
@property(retain, nonatomic, setter=_setCustomSourceView:) UIView *_customSourceView; // @synthesize _customSourceView=__customSourceView;
@property(retain, nonatomic, setter=_setCustomDotImageView:) UIImageView *_customDotImageView; // @synthesize _customDotImageView=__customDotImageView;
@property(nonatomic, setter=_setShouldHideScrubber:) _Bool _shouldHideScrubber; // @synthesize _shouldHideScrubber=__shouldHideScrubber;
@property(retain, nonatomic) PUScrubberView *presentationScrubberView; // @synthesize presentationScrubberView=_presentationScrubberView;
@property(nonatomic, setter=_setPreviewSourceRect:) struct CGRect _previewSourceRect; // @synthesize _previewSourceRect=__previewSourceRect;
@property(retain, nonatomic) UIView *scrubberContainerView; // @synthesize scrubberContainerView=_scrubberContainerView;
@property(retain, nonatomic) UIView *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
- (void).cxx_destruct;
- (_Bool)_isPreviewingInPortrait;
- (_Bool)_wantsScrubber;
- (void)_dismissTransitionDidComplete:(_Bool)arg1;
- (void)_layoutForDismissTransition;
- (void)_previewTransitionDidComplete:(_Bool)arg1;
- (void)_layoutForPreviewTransition;
- (void)_revealTransitionDidComplete:(_Bool)arg1;
- (void)_layoutForRevealTransition;
- (void)presentationTransitionWillBegin;

@end

