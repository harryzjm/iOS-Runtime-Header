//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/LPContentInsettable-Protocol.h>

@class LPInlineMediaPlaybackInformation, LPMusicPlayButtonStyle, LPPlayButtonControl;

__attribute__((visibility("hidden")))
@interface LPPlayButtonView <LPContentInsettable>
{
    LPPlayButtonControl *_button;
    LPInlineMediaPlaybackInformation *_playbackInformation;
    struct UIEdgeInsets _contentInset;
    LPMusicPlayButtonStyle *_style;
}

- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)layoutComponentView;
- (void)updateButton;
- (void)updateButtonForPodcast;
- (void)updateButtonForAudioBook;
- (void)updateButtonForAudioFile;
- (void)updateButtonForRadio;
- (void)updateButtonForSongOrAlbum;
- (void)installAudioButton;
- (void)installPreviewButton;
- (void)installDisablediTunesButton;
- (void)installiTunesButton;
- (void)installPlaceholderButton;
- (void)dealloc;
- (id)initWithPlaybackInformation:(id)arg1 style:(id)arg2;

@end
