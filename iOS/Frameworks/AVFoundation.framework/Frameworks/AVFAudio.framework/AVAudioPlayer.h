//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioFormat, NSArray, NSData, NSDictionary, NSURL;
@protocol AVAudioPlayerDelegate;

@interface AVAudioPlayer : NSObject
{
    id _impl;
}

- (void)setMixToUplink:(_Bool)arg1;
- (_Bool)mixToUplink;
- (void)setAudioSession:(id)arg1;
- (id)audioSession;
@property(copy, nonatomic) NSArray *channelAssignments;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (void)updateMeters;
@property(getter=isMeteringEnabled) _Bool meteringEnabled;
@property long long numberOfLoops;
@property double currentTime;
@property(readonly) double deviceCurrentTime;
@property(readonly) unsigned long long numberOfChannels;
@property float pan;
@property float rate;
@property _Bool enableRate;
- (void)setVolume:(float)arg1 fadeDuration:(double)arg2;
@property float volume;
@property(readonly) double duration;
@property(readonly) AVAudioFormat *format;
@property(readonly) NSDictionary *settings;
@property id <AVAudioPlayerDelegate> delegate;
@property(readonly) NSData *data;
@property(readonly) NSURL *url;
@property(readonly, getter=isPlaying) _Bool playing;
- (void)stop;
- (void)pause;
- (_Bool)playAtTime:(double)arg1;
- (_Bool)play;
- (_Bool)prepareToPlay;
- (id)initWithData:(id)arg1 fileTypeHint:(id)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 fileTypeHint:(id)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (void)finalize;
- (void)endInterruption;
- (void)endInterruptionWithFlags:(id)arg1;
- (void)beginInterruption;
- (void)decodeError:(id)arg1;
- (void)finishedPlaying:(id)arg1;
- (id)initBase;
- (id)impl;

@end

