//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;
@protocol OS_xpc_object;

@interface CSAudioChunk : NSObject
{
    _Bool _wasBuffered;
    NSData *_data;
    unsigned long long _numChannels;
    unsigned long long _numSamples;
    unsigned long long _sampleByteDepth;
    unsigned long long _startSampleCount;
    unsigned long long _hostTime;
    unsigned long long _arrivalHostTimeToAudioRecorder;
    NSData *_remoteVAD;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *remoteVAD; // @synthesize remoteVAD=_remoteVAD;
@property(readonly, nonatomic) _Bool wasBuffered; // @synthesize wasBuffered=_wasBuffered;
@property(readonly, nonatomic) unsigned long long arrivalHostTimeToAudioRecorder; // @synthesize arrivalHostTimeToAudioRecorder=_arrivalHostTimeToAudioRecorder;
@property(readonly, nonatomic) unsigned long long hostTime; // @synthesize hostTime=_hostTime;
@property(readonly, nonatomic) unsigned long long startSampleCount; // @synthesize startSampleCount=_startSampleCount;
@property(readonly, nonatomic) unsigned long long sampleByteDepth; // @synthesize sampleByteDepth=_sampleByteDepth;
@property(readonly, nonatomic) unsigned long long numSamples; // @synthesize numSamples=_numSamples;
@property(readonly, nonatomic) unsigned long long numChannels; // @synthesize numChannels=_numChannels;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void)splitAudioChunkSuchThatNumSamplesReceivedSoFar:(unsigned long long)arg1 reachesACountOf:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)skipSamplesAtStartSuchThatNumSamplesReceivedSoFar:(unsigned long long)arg1 reachesACountOf:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)gainCompensatedChunk;
- (id)remoteVADSubChunkFrom:(unsigned long long)arg1 numSamples:(unsigned long long)arg2 numAudioSamplesPerRemoteVAD:(unsigned long long)arg3;
- (unsigned long long)copySubAudioChunkFrom:(unsigned long long)arg1 numSamples:(unsigned long long)arg2 to:(void *)arg3 dstBufferSize:(unsigned long long)arg4;
- (id)subChunkFrom:(unsigned long long)arg1 numSamples:(unsigned long long)arg2;
- (id)subChunkFrom:(unsigned long long)arg1 numSamples:(unsigned long long)arg2 forChannel:(unsigned long long)arg3;
@property(readonly, nonatomic) _Bool remoteVADAvailable;
- (id)dataWithRemoteVADWithScaleFactor:(float)arg1 numAudioSamplesPerRemoteVAD:(unsigned long long)arg2;
- (id)dataForChannel:(unsigned long long)arg1;
- (id)chunkForChannel:(unsigned long long)arg1;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
- (id)initWithXPCObject:(id)arg1;
- (id)initWithData:(id)arg1 numChannels:(unsigned long long)arg2 numSamples:(unsigned long long)arg3 sampleByteDepth:(unsigned long long)arg4 startSampleCount:(unsigned long long)arg5 hostTime:(unsigned long long)arg6 remoteVAD:(id)arg7;
- (id)initWithData:(id)arg1 numChannels:(unsigned long long)arg2 numSamples:(unsigned long long)arg3 sampleByteDepth:(unsigned long long)arg4 startSampleCount:(unsigned long long)arg5 hostTime:(unsigned long long)arg6 arrivalHostTimeToAudioRecorder:(unsigned long long)arg7 wasBuffered:(_Bool)arg8 remoteVAD:(id)arg9;

@end
