//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAudioEngine, AVAudioPlayerNode, NSMutableArray;

@interface AXMSoundComponent
{
    AVAudioEngine *_engine;
    AVAudioPlayerNode *_oneShotSoundPlayer;
    NSMutableArray *_activeSounds;
    id _configChangedObserverToken;
}

+ (_Bool)isSupported;
- (void).cxx_destruct;
@property(retain, nonatomic) id configChangedObserverToken; // @synthesize configChangedObserverToken=_configChangedObserverToken;
- (void)_logAudioFileInfo:(id)arg1;
- (void)_stopActiveSound:(id)arg1;
- (_Bool)_startEngineIfNeeded:(id *)arg1;
- (void)_scheduleOneShotSound:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_scheduleActiveSound:(id)arg1;
- (void)handleRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canHandleRequest:(id)arg1;
- (void)transitionToState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end
