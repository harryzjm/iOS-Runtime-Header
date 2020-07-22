//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlaybackEngineEventObserving-Protocol.h>
#import <MediaPlaybackCore/MPNowPlayingInfoLyricsDelegate-Protocol.h>
#import <MediaPlaybackCore/MPNowPlayingPlaybackQueueDataSource_Private-Protocol.h>

@class MPCPlaybackEngine, MPLibraryAddStatusObserver, MPNowPlayingInfoCenter, MPRemoteCommandCenter, NSString;

@interface _MPCMediaRemotePublisher : NSObject <MPNowPlayingPlaybackQueueDataSource_Private, MPNowPlayingInfoLyricsDelegate, MPCPlaybackEngineEventObserving>
{
    MPLibraryAddStatusObserver *_libraryAddStatusObserver;
    _Bool _initializedSupportedCommands;
    _Bool _engineRestoringState;
    MPCPlaybackEngine *_playbackEngine;
    MPNowPlayingInfoCenter *_infoCenter;
    MPRemoteCommandCenter *_commandCenter;
}

@property(readonly, nonatomic) MPRemoteCommandCenter *commandCenter; // @synthesize commandCenter=_commandCenter;
@property(readonly, nonatomic) MPNowPlayingInfoCenter *infoCenter; // @synthesize infoCenter=_infoCenter;
@property(nonatomic, getter=isEngineRestoringState) _Bool engineRestoringState; // @synthesize engineRestoringState=_engineRestoringState;
@property(nonatomic, getter=hasInitializedSupportedCommands) _Bool initializedSupportedCommands; // @synthesize initializedSupportedCommands=_initializedSupportedCommands;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void).cxx_destruct;
- (void)_performCommandEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateSupportedCommands;
- (void)_disableQueueModificationsChangedNotification:(id)arg1;
- (void)_likedStateChangedNotification:(id)arg1;
- (void)_durationAvailableNotification:(id)arg1;
- (void)nowPlayingInfoCenter:(id)arg1 didEndLyricsEvent:(id)arg2;
- (void)nowPlayingInfoCenter:(id)arg1 didBeginLyricsEvent:(id)arg2;
- (void)engineDidEndStateRestoration:(id)arg1;
- (void)engineWillBeginStateRestoration:(id)arg1;
- (void)engine:(id)arg1 didChangeShuffleType:(long long)arg2;
- (void)engine:(id)arg1 didChangeRepeatType:(long long)arg2;
- (void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2;
- (void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;
- (void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;
- (void)removeSupportedSpecializedQueueIdentifier:(id)arg1;
- (void)addSupportedSpecializedQueueIdentifier:(id)arg1 localizedName:(id)arg2 queueType:(long long)arg3 queueParameters:(id)arg4;
- (void)publishIfNeeded;
- (void)becomeActive;
- (id)initWithPlaybackEngine:(id)arg1;
- (id)_contentItemForMPAVItem:(id)arg1;
- (id)nowPlayingContentItemsForRequest:(void *)arg1 range:(CDStruct_339ad95e *)arg2;
- (id)nowPlayingContentItemForIdentifier:(id)arg1;
- (id)contentItemForOffset:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
