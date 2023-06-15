//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPointerArray;

__attribute__((visibility("hidden")))
@interface VCAudioRedBuilder : NSObject
{
    int _redPayloadType;
    unsigned int _sampleRate;
    unsigned int _samplesPerFrame;
    unsigned int _numPayloads;
    unsigned int _maxDelay;
    _Bool _includeSequenceOffset;
    struct tagVCAudioRedPayload _latestPrimaryPayload;
    NSPointerArray *_selectedRedPayloads;
    struct tagVCAudioRedPayload _redPayloadToSend;
    unsigned char _redPayloadBufferToSend[1472];
    struct tagVCAudioRedPayload _payloadHistory[9];
    unsigned int _payloadHistoryCount;
    char *_payloadBufferHistory;
    int _payloadBufferHistoryIndex;
}

+ (unsigned int)redOverheadForNumPayloads:(unsigned int)arg1;
@property(readonly, nonatomic) int redPayloadType; // @synthesize redPayloadType=_redPayloadType;
@property(nonatomic) unsigned int numPayloads; // @synthesize numPayloads=_numPayloads;
@property(nonatomic) unsigned int maxDelay; // @synthesize maxDelay=_maxDelay;
- (id)initWithRedPayloadType:(int)arg1 sampleRate:(unsigned int)arg2 samplesPerFrame:(unsigned int)arg3 numPayloads:(unsigned int)arg4 maxDelay:(unsigned int)arg5 includeSequenceOffset:(_Bool)arg6;
- (void)dealloc;
- (void)resetPayloadHistory;
- (struct tagVCAudioRedPayload *)redPayloadForPrimaryPayload:(struct tagVCAudioRedPayload *)arg1;
- (id)payloadHistoryDescription;
- (id)redundantPayloadsDescription:(id)arg1;
- (id)redPayloadDescription:(struct tagVCAudioRedPayload *)arg1;
- (_Bool)redundantPayloads:(id)arg1 containsPointer:(void *)arg2;
- (id)selectRedPayloadsForPrimaryPayload:(struct tagVCAudioRedPayload *)arg1;
- (struct tagVCAudioRedPayload *)nearestRedPayloadForTimestamp:(unsigned int)arg1;
- (char *)resetOutputPayload:(struct tagVCAudioRedPayload *)arg1;
- (_Bool)isPayloadTimestampWithinThreshold:(struct tagVCAudioRedPayload *)arg1 forTimestamp:(unsigned int)arg2;
- (struct tagVCAudioRedPayload *)buildRedPayloadWithPrimaryPayload:(struct tagVCAudioRedPayload *)arg1 redPayloads:(id)arg2;

@end

