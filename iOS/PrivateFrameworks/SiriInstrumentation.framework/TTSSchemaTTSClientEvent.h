//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, TTSSchemaTTSClientEventMetadata, TTSSchemaTTSClientSpeechContext, TTSSchemaTTSRequestReceived, TTSSchemaTTSRequestReceivedTier1, TTSSchemaTTSVoiceFallbackOccurred;

@interface TTSSchemaTTSClientEvent
{
    TTSSchemaTTSClientEventMetadata *_eventMetadata;
    TTSSchemaTTSClientSpeechContext *_speechContext;
    TTSSchemaTTSRequestReceived *_requestReceived;
    TTSSchemaTTSRequestReceivedTier1 *_requestReceivedTier1;
    TTSSchemaTTSVoiceFallbackOccurred *_voiceFallbackOccurred;
    _Bool _hasEventMetadata;
    _Bool _hasSpeechContext;
    _Bool _hasRequestReceived;
    _Bool _hasRequestReceivedTier1;
    _Bool _hasVoiceFallbackOccurred;
    unsigned long long _whichEvent_Type;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasVoiceFallbackOccurred; // @synthesize hasVoiceFallbackOccurred=_hasVoiceFallbackOccurred;
@property(nonatomic) _Bool hasRequestReceivedTier1; // @synthesize hasRequestReceivedTier1=_hasRequestReceivedTier1;
@property(nonatomic) _Bool hasRequestReceived; // @synthesize hasRequestReceived=_hasRequestReceived;
@property(nonatomic) _Bool hasSpeechContext; // @synthesize hasSpeechContext=_hasSpeechContext;
@property(nonatomic) _Bool hasEventMetadata; // @synthesize hasEventMetadata=_hasEventMetadata;
@property(retain, nonatomic) TTSSchemaTTSClientEventMetadata *eventMetadata; // @synthesize eventMetadata=_eventMetadata;
@property(readonly, nonatomic) unsigned long long whichEvent_Type; // @synthesize whichEvent_Type=_whichEvent_Type;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(retain, nonatomic) TTSSchemaTTSVoiceFallbackOccurred *voiceFallbackOccurred; // @synthesize voiceFallbackOccurred=_voiceFallbackOccurred;
@property(retain, nonatomic) TTSSchemaTTSRequestReceivedTier1 *requestReceivedTier1; // @synthesize requestReceivedTier1=_requestReceivedTier1;
@property(retain, nonatomic) TTSSchemaTTSRequestReceived *requestReceived; // @synthesize requestReceived=_requestReceived;
@property(retain, nonatomic) TTSSchemaTTSClientSpeechContext *speechContext; // @synthesize speechContext=_speechContext;
- (id)qualifiedMessageName;
- (int)getAnyEventType;

@end
