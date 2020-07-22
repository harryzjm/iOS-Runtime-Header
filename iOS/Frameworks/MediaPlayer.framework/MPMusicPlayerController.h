//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPMediaPlayback-Protocol.h>

@class MPMediaItem, MPMusicPlayerControllerInternal;

@interface MPMusicPlayerController : NSObject <MPMediaPlayback>
{
    MPMusicPlayerControllerInternal *_internal;
}

+ (void)setRunLoopForNotifications:(id)arg1;
+ (id)iPodMusicPlayer;
+ (id)systemMusicPlayer;
+ (id)applicationQueuePlayer;
+ (id)applicationMusicPlayer;
- (void).cxx_destruct;
- (void)_queueDidInvalidate;
- (void)_queueUpdateDidFinish;
- (void)_queueRequestDidFinish;
- (void)_stopMigServer;
- (void)_runMigServerOnPort:(unsigned int)arg1;
- (void)_queuePreparationFailedWithErrorCode:(unsigned char)arg1;
- (void)_itemPlaybackDidEnd:(unsigned long long)arg1;
- (void)_isQueuePreparedDidChange:(_Bool)arg1;
- (void)_repeatModeDidChange:(long long)arg1;
- (void)_shuffleModeDidChange:(long long)arg1;
- (void)_nowPlayingItemDidChange:(unsigned long long)arg1;
- (void)_playbackStateDidChange:(long long)arg1;
- (_Bool)_musicPlayerExistencePortIsValid;
- (void)_clientCheckInUsingExistencePort:(_Bool)arg1;
- (void)_unregisterForLaunchNotifications;
- (void)_registerForLaunchNotifications;
- (void)_musicPlayerDidLaunch;
- (void)_serverDied:(id)arg1;
- (void)_setUseApplicationSpecificQueue:(_Bool)arg1;
- (_Bool)serverIsAlive;
- (void)_cancelExistingPrepareToPlay;
- (void)prepareQueueForPlayback;
- (void)skipToPreviousChapter;
- (void)skipToNextChapter;
- (void)skipToBeginningOrPreviousItem;
- (void)shuffle;
- (void)playItem:(id)arg1;
- (id)queueAsRadioStation;
- (id)queueAsQuery;
- (_Bool)skipInDirection:(long long)arg1 error:(id *)arg2;
- (void)setUserQueueModificationsDisabled:(_Bool)arg1;
- (_Bool)userQueueModificationsDisabled;
- (void)appendQueueDescriptor:(id)arg1;
- (void)prependQueueDescriptor:(id)arg1;
- (void)setQueueWithDescriptor:(id)arg1;
- (void)setQueueWithStoreIDs:(id)arg1;
- (void)setQueueWithRadioStation:(id)arg1;
- (void)setQueueWithGeniusMixPlaylist:(id)arg1;
- (void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2;
- (void)setCurrentChapterIndex:(unsigned long long)arg1;
- (unsigned long long)currentChapterIndex;
- (_Bool)isNowPlayingItemFromGeniusMix;
- (unsigned long long)numberOfItems;
@property(readonly, nonatomic) unsigned long long indexOfNowPlayingItem;
- (void)setPlaybackSpeed:(long long)arg1;
- (long long)playbackSpeed;
- (id)nowPlayingItemAtIndex:(unsigned long long)arg1;
- (void)pauseWithFadeoutDuration:(double)arg1;
- (_Bool)setQueueWithSeedItems:(id)arg1;
- (_Bool)isGeniusAvailableForSeedItems:(id)arg1;
- (_Bool)isGeniusAvailable;
- (void)openToPlayQueueDescriptor:(id)arg1;
- (void)endGeneratingPlaybackNotifications;
- (void)beginGeneratingPlaybackNotifications;
- (void)setVolumePrivate:(float)arg1;
@property(nonatomic) float volume;
@property(nonatomic) long long shuffleMode;
@property(nonatomic) long long repeatMode;
@property(readonly, nonatomic) long long playbackState;
- (void)setQueueWithItemCollection:(id)arg1;
- (void)setQueueWithQuery:(id)arg1;
@property(copy, nonatomic) MPMediaItem *nowPlayingItem;
- (void)stop;
- (void)skipToPreviousItem;
- (void)skipToBeginning;
- (void)skipToNextItem;
@property(nonatomic) double currentPlaybackTime;
@property(nonatomic) float currentPlaybackRate;
- (void)pause;
- (void)play;
- (void)prepareToPlayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)prepareToPlay;
@property(readonly, nonatomic) _Bool isPreparedToPlay;
- (void)endSeeking;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)_systemVolumeDidChange:(id)arg1;
- (id)internal;
- (void)dealloc;
- (id)init;

@end
