//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFCameraClipPlaying-Protocol.h>
#import <Home/HFCameraClipQueueing-Protocol.h>

@class AVQueuePlayer, HFCameraClipPlayerItem, HFCameraClipPosition, HFCameraClipQueuePlayer, HMCameraProfile, NSArray, NSError, NSString;
@protocol HFCameraClipPlayerDelegate, HFCameraClipScrubbing;

@interface HFCameraClipPlayer : NSObject <HFCameraClipQueueing, HFCameraClipPlaying>
{
    _Bool _scrubbing;
    _Bool _mutatingQueue;
    id <HFCameraClipPlayerDelegate> _delegate;
    id <HFCameraClipScrubbing> _scrubber;
    HMCameraProfile *_cameraProfile;
    NSArray *_clips;
    NSError *_error;
    HFCameraClipPlayerItem *_lastPlayerItem;
    HFCameraClipQueuePlayer *_queuePlayer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HFCameraClipQueuePlayer *queuePlayer; // @synthesize queuePlayer=_queuePlayer;
@property(nonatomic) __weak HFCameraClipPlayerItem *lastPlayerItem; // @synthesize lastPlayerItem=_lastPlayerItem;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic, getter=isMutatingQueue) _Bool mutatingQueue; // @synthesize mutatingQueue=_mutatingQueue;
@property(retain, nonatomic) NSArray *clips; // @synthesize clips=_clips;
@property(readonly, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
@property(nonatomic, getter=isScrubbing) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(nonatomic) __weak id <HFCameraClipScrubbing> scrubber; // @synthesize scrubber=_scrubber;
@property(nonatomic) __weak id <HFCameraClipPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)seekToOffset:(double)arg1 inItem:(id)arg2;
- (void)removeQueueableItem:(id)arg1;
- (void)insertQueueableItem:(id)arg1 afterItem:(id)arg2;
- (id)createQueueableItemForClipManager:(id)arg1 clip:(id)arg2;
@property(readonly, nonatomic) NSArray *queuableItems;
- (void)playerItemDidPlayToEndTime:(id)arg1;
- (void)_rebuildPlayerQueueForPosition:(id)arg1;
- (void)_setupObservationForLastPlayerItem:(id)arg1;
- (void)_setupPlayerObservation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateErrorState;
- (void)_updatePlayerActionAtItemEnd;
- (void)removeTimeObserver:(id)arg1;
- (id)addPeriodicTimeObserverForInterval:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)endScrubbingWithOffset:(double)arg1;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) _Bool hasFatalError;
@property(readonly, nonatomic) long long timeControlStatus;
@property(nonatomic) double currentTime; // @dynamic currentTime;
@property(copy, nonatomic) HFCameraClipPosition *currentPosition;
@property(readonly, nonatomic) AVQueuePlayer *player;
- (void)dealloc;
- (id)initWithCameraProfile:(id)arg1 clips:(id)arg2 queuePlayer:(id)arg3;
- (id)initWithCameraProfile:(id)arg1 clips:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
