//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/AVBehaviorContext-Protocol.h>
#import <AVKit/AVBehaviorContextInternal-Protocol.h>
#import <AVKit/AVMetricsCollectionBehaviorContext-Protocol.h>
#import <AVKit/AVPlayerViewControllerBehaviorContext-Protocol.h>

@class AVMusicAppBehavior, AVObservationController, AVPlayerController, AVPlayerViewController, NSNumber, NSString;

@interface AVMusicAppBehaviorContext : NSObject <AVBehaviorContextInternal, AVPlayerViewControllerBehaviorContext, AVMetricsCollectionBehaviorContext, AVBehaviorContext>
{
    _Bool _showsSkipItemButtons;
    _Bool _skipToPreviousItemButtonEnabled;
    _Bool _skipToNextItemButtonEnabled;
    _Bool _scrubbing;
    AVPlayerViewController *_playerViewController;
    AVMusicAppBehavior *_behavior;
    NSNumber *_seekTargetTime;
    AVObservationController *_observationController;
    AVPlayerController *_playerController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property(readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property(nonatomic, getter=isScrubbing) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(retain, nonatomic) NSNumber *seekTargetTime; // @synthesize seekTargetTime=_seekTargetTime;
@property(nonatomic, getter=isSkipToNextItemButtonEnabled) _Bool skipToNextItemButtonEnabled; // @synthesize skipToNextItemButtonEnabled=_skipToNextItemButtonEnabled;
@property(nonatomic, getter=isSkipToPreviousItemButtonEnabled) _Bool skipToPreviousItemButtonEnabled; // @synthesize skipToPreviousItemButtonEnabled=_skipToPreviousItemButtonEnabled;
@property(nonatomic) _Bool showsSkipItemButtons; // @synthesize showsSkipItemButtons=_showsSkipItemButtons;
@property(nonatomic) __weak AVMusicAppBehavior *behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) __weak AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
- (void)_updatePlaybackControlsInclusion;
- (void)_updateSkipItemButtonsEnabled;
- (void)playerViewController:(id)arg1 didCollectMetricsEvent:(long long)arg2;
- (void)viewDidLoad;
- (void)didRemoveBehavior:(id)arg1;
- (void)willRemoveBehavior:(id)arg1;
- (void)didAddBehavior:(id)arg1;
- (void)willAddBehavior:(id)arg1;
- (void)dealloc;
- (id)initWithAVKitOwner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
