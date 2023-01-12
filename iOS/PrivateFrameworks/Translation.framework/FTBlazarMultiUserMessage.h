//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTAudioLimitExceeded, FTAudioPacket, FTClientSetupInfo, FTFinalBlazarResponse, FTFinalSpeechRecognitionResponse, FTFinishAudio, FTMultiUserStartSpeechRequest, FTPartialSpeechRecognitionResponse, FTRecognitionCandidate, FTRecognitionProgress, FTRequestStatsResponse, FTResetServerEndpointer, FTServerEndpointFeatures, FTSetAlternateRecognitionSausage, FTSetEndpointerState, FTSetRequestOrigin, FTSetSpeechContext, FTSetSpeechProfile, FTUpdateAudioInfo, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTBlazarMultiUserMessage : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct BlazarMultiUserMessage *_root;
}

+ (long long)session_message_typeForImmutableObject:(id)arg1;
+ (Class)session_message_immutableClassForType:(long long)arg1;
- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_86cece31)addObjectToBuffer:(void *)arg1;
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property(readonly, nonatomic) FTFinalBlazarResponse *session_messageAsFTFinalBlazarResponse;
@property(readonly, nonatomic) FTAudioLimitExceeded *session_messageAsFTAudioLimitExceeded;
@property(readonly, nonatomic) FTClientSetupInfo *session_messageAsFTClientSetupInfo;
@property(readonly, nonatomic) FTServerEndpointFeatures *session_messageAsFTServerEndpointFeatures;
@property(readonly, nonatomic) FTRequestStatsResponse *session_messageAsFTRequestStatsResponse;
@property(readonly, nonatomic) FTRecognitionCandidate *session_messageAsFTRecognitionCandidate;
@property(readonly, nonatomic) FTRecognitionProgress *session_messageAsFTRecognitionProgress;
@property(readonly, nonatomic) FTPartialSpeechRecognitionResponse *session_messageAsFTPartialSpeechRecognitionResponse;
@property(readonly, nonatomic) FTFinalSpeechRecognitionResponse *session_messageAsFTFinalSpeechRecognitionResponse;
@property(readonly, nonatomic) FTSetAlternateRecognitionSausage *session_messageAsFTSetAlternateRecognitionSausage;
@property(readonly, nonatomic) FTResetServerEndpointer *session_messageAsFTResetServerEndpointer;
@property(readonly, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property(readonly, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property(readonly, nonatomic) FTSetEndpointerState *session_messageAsFTSetEndpointerState;
@property(readonly, nonatomic) FTSetSpeechProfile *session_messageAsFTSetSpeechProfile;
@property(readonly, nonatomic) FTSetSpeechContext *session_messageAsFTSetSpeechContext;
@property(readonly, nonatomic) FTSetRequestOrigin *session_messageAsFTSetRequestOrigin;
@property(readonly, nonatomic) FTUpdateAudioInfo *session_messageAsFTUpdateAudioInfo;
@property(readonly, nonatomic) FTMultiUserStartSpeechRequest *session_messageAsFTMultiUserStartSpeechRequest;
@property(readonly, nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BlazarMultiUserMessage *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BlazarMultiUserMessage *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

