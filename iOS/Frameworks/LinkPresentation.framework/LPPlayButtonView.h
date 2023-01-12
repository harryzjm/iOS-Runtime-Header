//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPAudioPlayButtonStyle, LPInlineMediaPlaybackInformation, LPPlayButtonControl;

__attribute__((visibility("hidden")))
@interface LPPlayButtonView
{
    LPPlayButtonControl *_button;
    LPInlineMediaPlaybackInformation *_playbackInformation;
    struct UIEdgeInsets _contentInset;
    LPAudioPlayButtonStyle *_style;
    _Bool _hasBuilt;
}

- (void).cxx_destruct;
- (id)playable;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)layoutComponentView;
- (void)updateButton;
- (void)updateButtonForAudioFile;
- (void)installAudioButton;
- (void)updateButtonForPodcast;
- (void)updateButtonForAudioBook;
- (void)updateButtonForRadio;
- (void)updateButtonForSongOrAlbum;
- (void)installPreviewButton;
- (void)installDisablediTunesButton;
- (void)installiTunesButton;
- (void)installPlaceholderButton;
- (id)theme;
- (_Bool)isLyricStyle;
- (void)dealloc;
- (void)buildSubviewsIfNeeded;
- (id)initWithHost:(id)arg1 playbackInformation:(id)arg2 style:(id)arg3;
- (id)initWithHost:(id)arg1;

@end

