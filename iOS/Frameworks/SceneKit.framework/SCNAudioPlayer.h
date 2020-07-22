//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class AVAudioNode, AVAudioPlayerNode, SCNAudioSource;

@interface SCNAudioPlayer : NSObject
{
    AVAudioNode *_audioNode;
    AVAudioPlayerNode *_audioPlayer;
    SCNAudioSource *_audioSource;
    struct __C3DNode *_nodeRef;
    struct __C3DScene *_scene;
    _Bool _customAudioNode;
    _Bool _completed;
    CDUnknownBlockType willStartPlayback;
    CDUnknownBlockType didFinishPlayback;
}

+ (id)audioPlayerWithSource:(id)arg1;
+ (id)audioPlayerWithAVAudioNode:(id)arg1;
@property(readonly) _Bool customAudioNode; // @synthesize customAudioNode=_customAudioNode;
@property _Bool completed; // @synthesize completed=_completed;
@property(readonly) struct __C3DScene *scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) SCNAudioSource *audioSource; // @synthesize audioSource=_audioSource;
@property(readonly) AVAudioPlayerNode *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(readonly, nonatomic) AVAudioNode *audioNode; // @synthesize audioNode=_audioNode;
@property(copy, nonatomic) CDUnknownBlockType didFinishPlayback; // @synthesize didFinishPlayback;
@property(copy, nonatomic) CDUnknownBlockType willStartPlayback; // @synthesize willStartPlayback;
- (id)audioBufferFormat;
- (void)recycle;
- (void)play;
- (const void *)__CFObject;
- (struct __C3DNode *)nodeRef;
- (void)setNodeRef:(struct __C3DNode *)arg1;
- (void)dealloc;
- (void)reset;
- (id)initWithAVAudioNode:(id)arg1;
- (id)initWithSource:(id)arg1;

@end

