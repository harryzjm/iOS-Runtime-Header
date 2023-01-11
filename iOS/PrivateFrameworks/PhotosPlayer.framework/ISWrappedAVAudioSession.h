//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioSession, NSString;

@interface ISWrappedAVAudioSession : NSObject
{
    _Bool _didBeginObservingOutputVolume;
    CDUnknownBlockType _outputVolumeChangeHandler;
    AVAudioSession *_audioSession;
}

+ (id)auxiliarySession;
+ (void)sharedAmbientInstanceWithLoadHandler:(CDUnknownBlockType)arg1;
+ (id)sharedAmbientInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(copy, nonatomic) CDUnknownBlockType outputVolumeChangeHandler; // @synthesize outputVolumeChangeHandler=_outputVolumeChangeHandler;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_endObservingOutputVolumeIfNeeded;
- (void)_beginObservingOutputVolumeIfNeeded;
- (_Bool)setCategory:(id)arg1 mode:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)setCategory:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)setActive:(_Bool)arg1 error:(id *)arg2;
- (_Bool)setCategory:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) float outputVolume;
@property(readonly, nonatomic) NSString *category;
- (void)dealloc;
- (id)_init;

@end
