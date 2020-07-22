//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPMusicPlayerController-Protocol.h>

@class BKSApplicationStateMonitor, MPMusicPlayerControllerServer, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject;
@protocol MPMusicPlayerControllerServerDelegate, OS_dispatch_queue;

@interface MPMusicPlayerControllerServerInternal <MPMusicPlayerController>
{
    id <MPMusicPlayerControllerServerDelegate> _delegate;
    MPMusicPlayerControllerServer *_musicPlayerServer;
    int _activeClientPID;
    BKSApplicationStateMonitor *_applicationStateMonitor;
    NSObject<OS_dispatch_queue> *_applicationStateMonitorQueue;
    long long _applicationStateMonitorCount;
    NSMutableArray *_clientPorts;
    NSMutableDictionary *_clientPortsForPIDs;
    NSMutableDictionary *_clientStateForPIDs;
    unsigned int _queuePrepared:1;
    unsigned int _hasSentQueuePrepared:1;
    _Bool _isInsidePrepareQueue;
    _Bool _hasAttemptedQueuePreparation;
    NSMutableSet *_pendingPreparationClientPIDs;
}

+ (_Bool)_canSeedGeniusWithItem:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)_numberOfItems;
- (void)_endPlayback;
- (void)_endPlaybackForClientIfNecessary:(int)arg1;
- (void)_prepareQueueIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setQueueWithQuery:(id)arg1;
- (void)_setQueuePrepared:(_Bool)arg1;
- (void)_handlePendingPreparationClientPIDs;
- (id)_avControllerForClientPID:(int)arg1;
- (id)_avController;
- (_Bool)_currentClientPIDHasPermissionToPlay;
- (_Bool)_clientPIDHasPermissionToPlay:(int)arg1;
- (id)_clientStateForPID:(int)arg1;
- (id)_clientState;
- (void)_clientPortInvalidated:(id)arg1;
- (void)_registerClientPort:(unsigned int)arg1 forProcessID:(int)arg2 hasAudioBackgroundMode:(_Bool)arg3;
- (void)_queueDidInvalidateNotification:(id)arg1;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_playbackErrorPostedNotification:(id)arg1;
- (void)_playbackBufferingStateDidChangeNotification:(id)arg1;
- (void)_applicationStateChangedWithUserInfo:(id)arg1;
- (void)_clientPortInvalidatedNotification:(id)arg1;
- (id)setQueueWithStoreIDs:(id)arg1;
- (void)setQueueWithRadioStation:(id)arg1;
- (void)setQueueWithGeniusMixPlaylist:(id)arg1;
- (void)setUseApplicationSpecificQueue:(id)arg1;
- (_Bool)useApplicationSpecificQueue;
- (void)registerForServerDiedNotifications;
- (id)serverIsAlive;
- (void)setQueue:(id)arg1;
- (void)requestQueue;
- (id)queueWithUUID:(id)arg1;
- (id)currentQueueUUID;
- (void)setUserQueueModificationsDisabled:(id)arg1;
- (id)userQueueModificationsDisabled;
- (void)prepareQueueForPlayback;
- (void)setCurrentChapterIndex:(id)arg1;
- (id)currentChapterIndex;
- (void)skipToPreviousChapter;
- (void)skipToNextChapter;
- (id)skipInDirection:(id)arg1;
- (id)indexOfNowPlayingItem;
- (void)pauseWithFadeoutDuration:(id)arg1;
- (void)playItem:(id)arg1;
- (id)nowPlayingItemAtIndex:(id)arg1;
- (id)queueAsRadioStation;
- (id)queueAsQuery;
- (void)appendQueueDescriptor:(id)arg1;
- (void)prependQueueDescriptor:(id)arg1;
- (void)setQueueWithDescriptor:(id)arg1;
- (void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2;
- (id)setQueueWithSeedItems:(id)arg1;
- (id)isGeniusAvailableForSeedItems:(id)arg1;
- (id)isGeniusAvailable;
- (void)skipToBeginningOrPreviousItem;
- (void)skipToPreviousItem;
- (void)skipToBeginning;
- (void)skipToNextItem;
- (void)endSeeking;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)setRepeatMode:(id)arg1;
- (id)repeatMode;
- (void)setShuffleMode:(id)arg1;
- (id)shuffleMode;
- (id)numberOfItems;
- (id)playbackState;
- (void)setCurrentPlaybackTime:(id)arg1;
- (id)currentPlaybackTime;
- (void)setCurrentPlaybackRate:(id)arg1;
- (id)currentPlaybackRate;
- (void)stop;
- (void)pause;
- (void)shuffle;
- (void)prepareToPlay;
- (void)play;
- (void)setQueueWithItemCollection:(id)arg1;
- (void)setQueueWithQuery:(id)arg1;
- (id)nowPlayingItem;
- (void)setNowPlayingItem:(id)arg1;
- (_Bool)shouldDelayInvocation:(id)arg1;
- (void)dealloc;
- (id)init;

@end

