//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, TTSSpeechServer, TTSTimer, TTSVocalizer;
@protocol OS_dispatch_queue;

@interface TTSSpeechServerInstance : NSObject
{
    NSLock *_speechLock;
    NSMutableArray *_speechRequestQueue;
    unsigned char _speechActive;
    unsigned char _speechThreadActive;
    struct __CFRunLoop *_speechThreadRunLoop;
    struct __CFRunLoopSource *_speechActivitySignal;
    CDStruct_24e90a37 *_speechActiveContext;
    unsigned char _newVoiceInstalled;
    unsigned char _speechThreadPriorityIsHigh;
    unsigned char _shouldTerminateThread;
    unsigned char _didTerminateThread;
    unsigned long long _synthesizerId;
    TTSTimer *_wordCallbackTimer;
    TTSSpeechServer *_speechService;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    TTSVocalizer *_vocalizer;
    CDUnknownBlockType _unitTestMarkerProcessingCallback;
}

@property(nonatomic) unsigned long long synthesizerId; // @synthesize synthesizerId=_synthesizerId;
@property(copy, nonatomic) CDUnknownBlockType unitTestMarkerProcessingCallback; // @synthesize unitTestMarkerProcessingCallback=_unitTestMarkerProcessingCallback;
@property(retain, nonatomic) TTSVocalizer *vocalizer; // @synthesize vocalizer=_vocalizer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue; // @synthesize serviceQueue=_serviceQueue;
@property(nonatomic) TTSSpeechServer *speechService; // @synthesize speechService=_speechService;
@property(retain, nonatomic) TTSTimer *wordCallbackTimer; // @synthesize wordCallbackTimer=_wordCallbackTimer;
- (id)_speechVocalizerPlaybackDataProviderWithVocalizer:(id)arg1 playback:(struct __TTSPlayback *)arg2 inContext:(void *)arg3;
- (struct __CFArray *)loadedVoiceResources;
- (_Bool)_defaultVoiceIsFallback;
- (void)_ttsLogSpeechForServerRequest:(id)arg1;
- (void)_uninitializeSpeech:(CDStruct_24e90a37 *)arg1;
- (void)_loadVoiceResource:(CDStruct_24e90a37 *)arg1 voiceResource:(id)arg2;
- (void)_setParameters:(CDStruct_24e90a37 *)arg1 rate:(float)arg2 pitch:(float)arg3 volume:(float)arg4 footprint:(long long)arg5;
- (void)_initializeSpeech:(CDStruct_24e90a37 *)arg1;
- (void)_initializeSpeechEngine:(CDStruct_24e90a37 *)arg1;
- (_Bool)_footprintOrVoiceNameHasChanged:(CDStruct_24e90a37 *)arg1;
- (id)_ttSSpeechServerCopyVoiceNamesForLanguage:(id)arg1 voiceType:(long long)arg2 queryingMobileAssets:(_Bool)arg3;
- (void)_newVoiceInstalled;
- (void)processMarker:(long long)arg1 withByteOffset:(unsigned int)arg2 markerPosition:(unsigned int)arg3 markerLength:(unsigned int)arg4 context:(CDStruct_24e90a37 *)arg5 currentTime:(unsigned long long)arg6 secondPass:(_Bool)arg7;
- (unsigned char)_shouldContinueSpeechGivenMark:(CDStruct_24e90a37 *)arg1 markType:(long long)arg2 blockIfPaused:(unsigned char)arg3;
- (unsigned char)_needsParameterChange:(CDStruct_24e90a37 *)arg1 lock:(unsigned char)arg2 rate:(float *)arg3 pitch:(float *)arg4 volume:(float *)arg5 footprint:(long long *)arg6 voiceType:(long long *)arg7;
- (void)_handleSpeechThread;
- (unsigned int)_vocalizerMessageBufferDone:(struct _VE_HSAFE)arg1 context:(CDStruct_b823fdf7 *)arg2 outData:(CDStruct_ef07e5a0 *)arg3;
- (void)_terminateThread;
- (unsigned char)_activeRequestShouldPauseImmediately:(CDStruct_24e90a37 *)arg1;
- (unsigned char)_activeRequestShouldStopImmediately:(CDStruct_24e90a37 *)arg1;
- (unsigned char)_activeRequestShouldStopAtAnyMark:(CDStruct_24e90a37 *)arg1;
- (unsigned char)_activeRequestShouldContinue:(CDStruct_24e90a37 *)arg1;
- (oneway void)getSpeechIsActiveForRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_speechThreadSignal;
- (oneway void)stopSpeechRequest:(id)arg1 atMark:(long long)arg2;
- (oneway void)continueSpeechRequest:(id)arg1;
- (oneway void)pauseSpeechRequest:(id)arg1 atMark:(long long)arg2;
- (unsigned char)_setActiveRequestActionForMark:(long long)arg1 clientRequest:(id)arg2 markType:(long long)arg3;
- (void)_cleanupAfterRequest:(CDStruct_24e90a37 *)arg1;
- (void)_processCurrentRequest:(CDStruct_24e90a37 *)arg1;
- (void)_startSpeechThread;
- (void)_appendSpeechRequestAndStart:(id)arg1;
- (oneway void)startSpeechRequest:(id)arg1;
- (id)_getAvailableVoiceForVoice:(id)arg1;
- (void)dealloc;
- (id)init;

@end
