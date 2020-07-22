//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class VCAudioRelayIO;
@protocol OS_dispatch_source;

@interface VCAudioRelay : NSObject
{
    _Bool _isRelayRunning;
    double _IOBufferDuration;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_relayThread;
    struct _opaque_pthread_cond_t _wakeUpCondition;
    struct _opaque_pthread_mutex_t _wakeUpMutex;
    struct OpaqueAudioConverter *_clientToRemoteConverter;
    struct OpaqueAudioConverter *_remoteToClientConverter;
    VCAudioRelayIO *_remoteIO;
    VCAudioRelayIO *_clientIO;
    struct _opaque_pthread_mutex_t _relayLock;
    struct _opaque_pthread_mutex_t _clientIOLock;
    struct _opaque_pthread_mutex_t _remoteIOLock;
    NSObject<OS_dispatch_source> *_periodicHealthPrintDispatchSource;
    unsigned int _blocksRelayedCount;
    float _clientUplinkPowerMovingAverage;
    float _clientDownlinkPowerMovingAverage;
}

@property(readonly) float clientUplinkPowerMovingAverage; // @synthesize clientUplinkPowerMovingAverage=_clientUplinkPowerMovingAverage;
@property(readonly) float clientDownlinkPowerMovingAverage; // @synthesize clientDownlinkPowerMovingAverage=_clientDownlinkPowerMovingAverage;
@property(readonly) unsigned int blocksRelayedCount; // @synthesize blocksRelayedCount=_blocksRelayedCount;
@property(readonly) NSObject<OS_dispatch_source> *periodicHealthPrintDispatchSource; // @synthesize periodicHealthPrintDispatchSource=_periodicHealthPrintDispatchSource;
@property(readonly) struct OpaqueAudioConverter *clientToRemoteConverter; // @synthesize clientToRemoteConverter=_clientToRemoteConverter;
@property(readonly) struct OpaqueAudioConverter *remoteToClientConverter; // @synthesize remoteToClientConverter=_remoteToClientConverter;
@property(readonly) double IOBufferDuration; // @synthesize IOBufferDuration=_IOBufferDuration;
@property(readonly) _Bool isRelayRunning; // @synthesize isRelayRunning=_isRelayRunning;
@property(copy, nonatomic) VCAudioRelayIO *clientIO; // @synthesize clientIO=_clientIO;
@property(copy, nonatomic) VCAudioRelayIO *remoteIO; // @synthesize remoteIO=_remoteIO;
- (void)relayCallback;
- (void)startPeriodicHealthPrint;
- (void)updateRealTimeStats;
- (void)sleepTillTime:(struct timespec *)arg1;
- (void)forwardSamplesFromIO:(id)arg1 toIO:(id)arg2 withConverter:(struct OpaqueAudioConverter *)arg3;
- (float)rmsPowerOfBuffer:(float *)arg1 numSamples:(unsigned int)arg2;
- (void)printStreamFormats;
- (void)destroyAudioConverters;
- (struct OpaqueAudioConverter *)newAudioConverterWithInputFormat:(struct AudioStreamBasicDescription *)arg1 outputFormat:(struct AudioStreamBasicDescription *)arg2 withError:(id *)arg3;
- (_Bool)createAudioConvertersWithError:(id *)arg1;
- (void)stopRelayThread;
- (_Bool)startRelayThreadWithError:(id *)arg1;
- (_Bool)canSetPropertyWithError:(id *)arg1;
- (void)stopRemoteIO;
- (void)stopClientIO;
- (_Bool)stopRelayIO:(id)arg1;
- (_Bool)startRemoteIO;
- (_Bool)startClientIO;
- (_Bool)startRelayIO:(id)arg1 name:(id)arg2 recordingsName:(id)arg3;
- (_Bool)setClientIO:(id)arg1 withError:(id *)arg2;
- (_Bool)setRemoteIO:(id)arg1 withError:(id *)arg2;
- (_Bool)setIOBufferDuration:(double)arg1 withError:(id *)arg2;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)init;

@end

