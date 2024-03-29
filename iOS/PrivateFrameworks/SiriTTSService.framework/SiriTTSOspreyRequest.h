//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SiriTTSOspreyRequest : NSObject
{
    _Bool _serverLogs;
    float _pitch;
    float _rate;
    float _volume;
    float _neuralSentencePitch;
    float _neuralSentencePitchRange;
    float _neuralSentenceDuration;
    float _neuralSentenceEnergy;
    float _neuralSentenceTilt;
    NSString *_language;
    NSString *_text;
    NSString *_voiceName;
    NSString *_preferredType;
    NSString *_speechId;
    NSString *_appId;
    NSString *_experimentId;
    unsigned long long _requestCreatedTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool serverLogs; // @synthesize serverLogs=_serverLogs;
@property(nonatomic) float neuralSentenceTilt; // @synthesize neuralSentenceTilt=_neuralSentenceTilt;
@property(nonatomic) float neuralSentenceEnergy; // @synthesize neuralSentenceEnergy=_neuralSentenceEnergy;
@property(nonatomic) float neuralSentenceDuration; // @synthesize neuralSentenceDuration=_neuralSentenceDuration;
@property(nonatomic) float neuralSentencePitchRange; // @synthesize neuralSentencePitchRange=_neuralSentencePitchRange;
@property(nonatomic) float neuralSentencePitch; // @synthesize neuralSentencePitch=_neuralSentencePitch;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(nonatomic) float pitch; // @synthesize pitch=_pitch;
@property(nonatomic) unsigned long long requestCreatedTime; // @synthesize requestCreatedTime=_requestCreatedTime;
@property(copy, nonatomic) NSString *experimentId; // @synthesize experimentId=_experimentId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *speechId; // @synthesize speechId=_speechId;
@property(copy, nonatomic) NSString *preferredType; // @synthesize preferredType=_preferredType;
@property(copy, nonatomic) NSString *voiceName; // @synthesize voiceName=_voiceName;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
- (id)underlyingRequest;

@end

