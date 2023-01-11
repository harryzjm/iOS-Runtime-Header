//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPlaybackEventTracking-Protocol.h>

@class NFStateMachine, NSError, NSString;
@protocol SVVideoLoadingStateObserving, SVVideoPlaybackStateObserving;

@interface SVVideoPlaybackEventTracker : NSObject <SVVideoPlaybackEventTracking>
{
    CDUnknownBlockType playbackStartBlock;
    CDUnknownBlockType playbackPausedBlock;
    CDUnknownBlockType playbackResumedBlock;
    CDUnknownBlockType playbackFinishedBlock;
    CDUnknownBlockType playbackFailedBlock;
    id <SVVideoPlaybackStateObserving> _playbackStateObserver;
    id <SVVideoLoadingStateObserving> _loadingStateObserver;
    NFStateMachine *_stateMachine;
    NSError *_error;
}

@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NFStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, nonatomic) id <SVVideoLoadingStateObserving> loadingStateObserver; // @synthesize loadingStateObserver=_loadingStateObserver;
@property(readonly, nonatomic) id <SVVideoPlaybackStateObserving> playbackStateObserver; // @synthesize playbackStateObserver=_playbackStateObserver;
@property(copy, nonatomic, setter=onPlaybackFailed:) CDUnknownBlockType playbackFailedBlock; // @synthesize playbackFailedBlock;
@property(copy, nonatomic, setter=onPlaybackFinished:) CDUnknownBlockType playbackFinishedBlock; // @synthesize playbackFinishedBlock;
@property(copy, nonatomic, setter=onPlaybackResumed:) CDUnknownBlockType playbackResumedBlock; // @synthesize playbackResumedBlock;
@property(copy, nonatomic, setter=onPlaybackPaused:) CDUnknownBlockType playbackPausedBlock; // @synthesize playbackPausedBlock;
@property(copy, nonatomic, setter=onPlaybackStart:) CDUnknownBlockType playbackStartBlock; // @synthesize playbackStartBlock;
- (void).cxx_destruct;
- (id)initWithPlaybackStateObserver:(id)arg1 loadingStateObserver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

