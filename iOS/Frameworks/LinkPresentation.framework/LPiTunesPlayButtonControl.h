//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPInlineMediaPlaybackInformation, MPModelGenericObject, NSTimer;

__attribute__((visibility("hidden")))
@interface LPiTunesPlayButtonControl
{
    LPInlineMediaPlaybackInformation *_playbackInformation;
    NSTimer *_playbackStateUpdateTimer;
    MPModelGenericObject *_enqueuedItem;
    MPModelGenericObject *_enqueuedItemContext;
    double _currentPlaybackPosition;
    _Bool _currentlyPlaying;
    _Bool _hasStartedPlaying;
}

- (void).cxx_destruct;
- (_Bool)matchesNowPlayingItem;
- (void)buttonPressed:(id)arg1;
- (void)startPlaying;
- (id)mediaPlaybackApplicationID;
- (struct _MRSystemAppPlaybackQueue *)createPlaybackQueue;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToWindow;
- (void)updatePlaybackState;
- (void)stopListeningForPlayback;
- (void)startListeningForPlayback;
- (void)updatePlayState;
- (id)initWithPlaybackInformation:(id)arg1 style:(id)arg2;

@end
