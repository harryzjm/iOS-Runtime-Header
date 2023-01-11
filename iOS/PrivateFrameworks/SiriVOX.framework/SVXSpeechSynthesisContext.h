//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, SVXAudioSessionAssertion, SVXSpeechSynthesisRequest, VSInstrumentMetrics, VSPresynthesizedAudioRequest, VSSpeechRequest;
@protocol SVXTaskTracking;

__attribute__((visibility("hidden")))
@interface SVXSpeechSynthesisContext : NSObject
{
    CDUnknownBlockType _preparation;
    CDUnknownBlockType _finalization;
    _Bool _handledPresynthesizedAudioRequest;
    _Bool _handledSpeechRequest;
    unsigned int _audioSessionID;
    long long _operationType;
    SVXSpeechSynthesisRequest *_request;
    NSString *_languageCode;
    long long _gender;
    NSDictionary *_analyticsContext;
    VSPresynthesizedAudioRequest *_presynthesizedAudioRequest;
    VSSpeechRequest *_speechRequest;
    VSInstrumentMetrics *_instrumentMetrics;
    NSArray *_speechWordTimingInfoArray;
    id <SVXTaskTracking> _taskTracker;
    SVXAudioSessionAssertion *_audioSessionAssertion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SVXAudioSessionAssertion *audioSessionAssertion; // @synthesize audioSessionAssertion=_audioSessionAssertion;
@property(readonly, nonatomic) id <SVXTaskTracking> taskTracker; // @synthesize taskTracker=_taskTracker;
@property(copy, nonatomic) NSArray *speechWordTimingInfoArray; // @synthesize speechWordTimingInfoArray=_speechWordTimingInfoArray;
@property(retain, nonatomic) VSInstrumentMetrics *instrumentMetrics; // @synthesize instrumentMetrics=_instrumentMetrics;
@property(retain, nonatomic) VSSpeechRequest *speechRequest; // @synthesize speechRequest=_speechRequest;
@property(retain, nonatomic) VSPresynthesizedAudioRequest *presynthesizedAudioRequest; // @synthesize presynthesizedAudioRequest=_presynthesizedAudioRequest;
@property(nonatomic) _Bool handledSpeechRequest; // @synthesize handledSpeechRequest=_handledSpeechRequest;
@property(nonatomic) _Bool handledPresynthesizedAudioRequest; // @synthesize handledPresynthesizedAudioRequest=_handledPresynthesizedAudioRequest;
@property(readonly, copy, nonatomic) NSDictionary *analyticsContext; // @synthesize analyticsContext=_analyticsContext;
@property(readonly, nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(readonly, nonatomic) long long gender; // @synthesize gender=_gender;
@property(readonly, copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, copy, nonatomic) SVXSpeechSynthesisRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) long long operationType; // @synthesize operationType=_operationType;
- (void)finalizeWithResultType:(long long)arg1 utteranceInfo:(id)arg2 error:(id)arg3;
- (void)prepare;
- (id)initWithOperationType:(long long)arg1 request:(id)arg2 languageCode:(id)arg3 gender:(long long)arg4 audioSessionID:(unsigned int)arg5 preparation:(CDUnknownBlockType)arg6 finalization:(CDUnknownBlockType)arg7 taskTracker:(id)arg8 analyticsContext:(id)arg9;
- (id)description;
- (void)dealloc;

@end
