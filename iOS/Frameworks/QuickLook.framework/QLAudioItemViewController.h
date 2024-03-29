//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, NSString, QLOverlayPlayButton, QLVideoScrubberView, QLWaveformScrubberViewProvider, UIImageView, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface QLAudioItemViewController
{
    UIImageView *_backgroundIconImageView;
    QLOverlayPlayButton *_playButton;
    UIView *_scrubberContainer;
    UIScrollView *_scrubberContainerScrollView;
    QLVideoScrubberView *_scrubber;
    QLWaveformScrubberViewProvider *_scrubberViewProvider;
    _Bool _previewIsVisisble;
    _Bool _scrubbing;
    NSLayoutConstraint *_topScrubber;
    double _scrubberVerticalOffset;
}

- (void).cxx_destruct;
@property double scrubberVerticalOffset; // @synthesize scrubberVerticalOffset=_scrubberVerticalOffset;
@property _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(retain) UIView *scrubberContainer; // @synthesize scrubberContainer=_scrubberContainer;
@property(retain) NSLayoutConstraint *topScrubber; // @synthesize topScrubber=_topScrubber;
- (double)maximumWaveformDimension;
- (_Bool)usesScrubber;
- (id)imageAccessibilityIdentifier;
- (id)iconImageWithConfiguration:(id)arg1;
- (double)waveformImageDimension;
- (void)setupConstraints;
- (void)transitionDidFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)transitionDidStart:(_Bool)arg1;
- (_Bool)canEnterFullScreen;
- (id)timeLabelScrollView;
- (id)accessoryView;
- (void)didChangePlayingStatus;
- (void)_tapRecognized:(id)arg1;
- (void)setPlayControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;
- (_Bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)addScrubberWithDeferral;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

