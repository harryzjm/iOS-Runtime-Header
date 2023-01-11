//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPArtworkDataSource-Protocol.h>
#import <MediaPlayer/MPMediaPlayback-Protocol.h>
#import <MediaPlayer/MPMusicPlayerControllerClient-Protocol.h>
#import <MediaPlayer/MPVolumeControllerDelegate-Protocol.h>

@class MPMediaItem, MPMusicPlayerControllerNowPlaying, MPMusicPlayerControllerNowPlayingTimeSnapshot, MPMusicPlayerQueueDescriptor, MPVolumeController, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MPMusicPlayerController : NSObject <MPArtworkDataSource, MPVolumeControllerDelegate, MPMusicPlayerControllerClient, MPMediaPlayback>
{
    NSXPCConnection *_connection;
    struct os_unfair_lock_s _lock;
    _Bool _isPreparedToPlay;
    NSString *_clientIdentifier;
    MPMusicPlayerControllerNowPlaying *_serverNowPlaying;
    MPMusicPlayerControllerNowPlayingTimeSnapshot *_serverTimeSnapshot;
    MPMusicPlayerQueueDescriptor *_serverQueueDescriptor;
    MPMusicPlayerControllerNowPlayingTimeSnapshot *_lastServerTimeSnapshot;
    MPMusicPlayerControllerNowPlaying *_lastServerNowPlaying;
    MPMusicPlayerQueueDescriptor *_targetQueueDescriptor;
    long long _notificationsCounter;
    MPVolumeController *_volumeController;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)setRunLoopForNotifications:(id)arg1;
+ (id)iPodMusicPlayer;
+ (id)alloc;
+ (id)applicationMusicPlayer;
+ (id)applicationQueuePlayer;
+ (id)systemMusicPlayer;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) MPVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(readonly, nonatomic) long long notificationsCounter; // @synthesize notificationsCounter=_notificationsCounter;
@property(readonly, nonatomic) MPMusicPlayerQueueDescriptor *targetQueueDescriptor; // @synthesize targetQueueDescriptor=_targetQueueDescriptor;
@property(readonly, nonatomic) MPMusicPlayerControllerNowPlaying *lastServerNowPlaying; // @synthesize lastServerNowPlaying=_lastServerNowPlaying;
@property(readonly, nonatomic) MPMusicPlayerControllerNowPlayingTimeSnapshot *lastServerTimeSnapshot; // @synthesize lastServerTimeSnapshot=_lastServerTimeSnapshot;
@property(readonly, nonatomic) MPMusicPlayerQueueDescriptor *serverQueueDescriptor; // @synthesize serverQueueDescriptor=_serverQueueDescriptor;
@property(readonly, nonatomic) MPMusicPlayerControllerNowPlayingTimeSnapshot *serverTimeSnapshot; // @synthesize serverTimeSnapshot=_serverTimeSnapshot;
@property(readonly, nonatomic) MPMusicPlayerControllerNowPlaying *serverNowPlaying; // @synthesize serverNowPlaying=_serverNowPlaying;
@property(readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) _Bool isPreparedToPlay; // @synthesize isPreparedToPlay=_isPreparedToPlay;
- (id)_mediaItemFromNowPlaying:(id)arg1;
- (id)_snapshot;
- (id)_nowPlaying;
- (id)_queueDescriptor;
- (void)onServerAsync:(CDUnknownBlockType)arg1;
- (void)onServer:(CDUnknownBlockType)arg1;
- (void)_establishConnectionIfNeeded;
- (void)_clearConnection;
- (void)volumeController:(id)arg1 mutedStateDidChange:(_Bool)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (void)serverQueueDidEnd;
- (void)serverItemDidEnd;
- (void)serverPlaybackModeDidChangeAffectingQueue:(_Bool)arg1;
- (void)setServerTimeSnapshot:(id)arg1;
- (void)setServerNowPlaying:(id)arg1;
- (void)setServerQueueDescriptor:(id)arg1;
- (void)adjustLoadedQueueRangeToReverseCount:(long long)arg1 forwardCount:(long long)arg2;
- (void)setQueueWithGeniusMixPlaylist:(id)arg1;
- (_Bool)setQueueWithSeedItems:(id)arg1;
- (_Bool)isGeniusAvailableForSeedItems:(id)arg1;
- (_Bool)isGeniusAvailable;
@property(nonatomic) unsigned long long currentChapterIndex;
@property(readonly, nonatomic) _Bool isNowPlayingItemFromGeniusMix;
@property(nonatomic) long long playbackSpeed;
- (void)setVolumePrivate:(float)arg1;
@property(nonatomic) float volume;
- (void)endSeeking;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
@property(nonatomic) float currentPlaybackRate;
@property(nonatomic) double currentPlaybackTime;
- (void)stop;
- (void)pause;
- (void)play;
- (void)prepareToPlay;
- (void)setUserQueueModificationsDisabled:(_Bool)arg1;
- (_Bool)userQueueModificationsDisabled;
- (unsigned long long)numberOfItems;
- (void)prepareQueueForPlayback;
- (void)skipToBeginningOrPreviousItem;
- (void)pauseWithFadeoutDuration:(double)arg1;
- (void)shuffle;
- (id)nowPlayingItemAtIndex:(unsigned long long)arg1;
- (id)nowPlayingAtIndex:(long long)arg1;
- (id)queueAsRadioStation;
- (id)queueAsQuery;
- (void)setQueueWithRadioStation:(id)arg1;
- (void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2;
- (void)endGeneratingPlaybackNotifications;
- (void)beginGeneratingPlaybackNotifications;
- (void)skipToPreviousItem;
- (void)skipToBeginning;
- (void)skipToNextItem;
- (void)prepareToPlayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)appendQueueDescriptor:(id)arg1;
- (void)prependQueueDescriptor:(id)arg1;
- (void)setQueueWithDescriptor:(id)arg1;
- (void)setQueueWithStoreIDs:(id)arg1;
- (void)setQueueWithItemCollection:(id)arg1;
- (void)setQueueWithQuery:(id)arg1;
@property(readonly, nonatomic) unsigned long long indexOfNowPlayingItem;
@property(copy, nonatomic) MPMediaItem *nowPlayingItem;
@property(nonatomic) long long shuffleMode;
@property(nonatomic) long long repeatMode;
@property(readonly, nonatomic) long long playbackState;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithClientIdentifier:(id)arg1 queue:(id)arg2;
- (id)initWithClientIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
