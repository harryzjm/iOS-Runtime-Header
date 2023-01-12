//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVDisplayCriteria, AVObservationController, AVPlayer, AVPlayerLayer, AVSecondScreen, AVSecondScreenDebugAssistant, AVSecondScreenViewController, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface AVSecondScreenConnection : NSObject
{
    _Bool _readyToConnect;
    _Bool _active;
    _Bool _playing;
    _Bool _requiresTVOutScreen;
    _Bool _ready;
    AVSecondScreenDebugAssistant *_debugAssistant;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    AVSecondScreen *_connectedSecondScreen;
    AVDisplayCriteria *_preferredDisplayCriteria;
    AVPlayer *_debugInfoPlayer;
    AVObservationController *_observationController;
    UIView *_contentView;
    AVSecondScreenViewController *_secondScreenViewController;
    struct CGSize _maximumVideoResolution;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVSecondScreenViewController *secondScreenViewController; // @synthesize secondScreenViewController=_secondScreenViewController;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property(nonatomic, getter=isReady) _Bool ready; // @synthesize ready=_ready;
@property(nonatomic) struct CGSize maximumVideoResolution; // @synthesize maximumVideoResolution=_maximumVideoResolution;
@property(retain, nonatomic) AVPlayer *debugInfoPlayer; // @synthesize debugInfoPlayer=_debugInfoPlayer;
@property(retain, nonatomic) AVDisplayCriteria *preferredDisplayCriteria; // @synthesize preferredDisplayCriteria=_preferredDisplayCriteria;
@property(nonatomic) _Bool requiresTVOutScreen; // @synthesize requiresTVOutScreen=_requiresTVOutScreen;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak AVSecondScreen *connectedSecondScreen; // @synthesize connectedSecondScreen=_connectedSecondScreen;
@property(readonly, nonatomic, getter=isReadyToConnect) _Bool readyToConnect; // @synthesize readyToConnect=_readyToConnect;
@property(readonly, nonatomic) __weak AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (_Bool)_currentItemIsReadyToPlayVideoOrLoadingWhileActive;
- (_Bool)_allowsNonAirPlayExternalPlayback;
- (_Bool)_determineIsReadyToConnect;
- (void)_updateReadyToConnect;
- (void)_updatePreferredDisplayCriteriaFromPreparedAssetIfNeeded:(id)arg1;
- (void)_updatePreferredDisplayCriteria;
- (void)_startObservingPlayer;
- (void)_postNotification:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3;
- (void)_loadSecondScreenViewControllerIfNeeded;
@property(readonly, nonatomic) double videoDisplayScale;
@property(readonly, nonatomic) struct CGSize videoDisplaySize;
- (void)connectWithScreen:(id)arg1 active:(_Bool)arg2;
- (void)setReadyToConnect:(_Bool)arg1;
- (void)setPlayerLayer:(id)arg1;
@property(readonly, nonatomic) AVSecondScreenDebugAssistant *debugAssistant; // @synthesize debugAssistant=_debugAssistant;
@property(readonly, nonatomic) UIViewController *contentViewController;
- (void)startUpdates;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 playerLayer:(id)arg2;

@end

