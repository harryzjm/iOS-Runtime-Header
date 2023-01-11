//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChatKit/CKInternalAudioPlayerDelegate-Protocol.h>

@class CADisplayLink, CKInternalAudioPlayer, CKMediaObject, NSString;
@protocol CKAudioPlayerDelegate;

@interface CKAudioPlayer : NSObject <CKInternalAudioPlayerDelegate>
{
    CKMediaObject *_mediaObject;
    id <CKAudioPlayerDelegate> _delegate;
    CKInternalAudioPlayer *_audioPlayer;
    CADisplayLink *_displayLink;
    double _prevCurrentTime;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) double prevCurrentTime; // @synthesize prevCurrentTime=_prevCurrentTime;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) CKInternalAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) __weak id <CKAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
- (void).cxx_destruct;
- (void)displayLinkFired:(id)arg1;
- (void)internalAudioPlayerDidPrepareAudioForPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)internalAudioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
@property(nonatomic) float volume;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)prepareToPlay;
- (void)pause;
- (void)stop;
@property(readonly, nonatomic) _Bool usesAVPlayer;
- (void)playAfterDelay:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFileURL:(id)arg1;
- (id)initWithMediaObject:(id)arg1 shouldUseAVPlayer:(_Bool)arg2;
- (id)initWithMediaObject:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

