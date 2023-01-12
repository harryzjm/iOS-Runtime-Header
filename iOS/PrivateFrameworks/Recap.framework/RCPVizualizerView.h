//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <Recap/CALayerDelegate-Protocol.h>
#import <Recap/RCPTimelineViewDelegate-Protocol.h>

@class AVPlayer, AVPlayerLayer, CALayer, NSString, RCPMovie, RCPTraceLayer;

@interface RCPVizualizerView : UIView <CALayerDelegate, RCPTimelineViewDelegate>
{
    unsigned long long _time;
    RCPMovie *_recapMovie;
    AVPlayerLayer *_playerLayer;
    AVPlayer *_player;
    RCPTraceLayer *_traceLayer;
    CALayer *_screenshotLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *screenshotLayer; // @synthesize screenshotLayer=_screenshotLayer;
@property(retain, nonatomic) RCPTraceLayer *traceLayer; // @synthesize traceLayer=_traceLayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) RCPMovie *recapMovie; // @synthesize recapMovie=_recapMovie;
@property(nonatomic) unsigned long long time; // @synthesize time=_time;
- (struct CGRect)screenRect;
- (_Bool)isFlipped;
- (void)timelineView:(id)arg1 didSetTime:(unsigned long long)arg2;
- (void)layout;
- (void)setFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
