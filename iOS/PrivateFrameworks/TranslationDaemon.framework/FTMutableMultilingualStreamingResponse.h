//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTAudioLimitExceeded, FTFinalBlazarResponse, FTFinalSpeechRecognitionResponse, FTPartialSpeechRecognitionResponse, FTRecognitionCandidate, FTRequestStatsResponse, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableMultilingualStreamingResponse
{
}

+ (long long)content_typeForObject:(id)arg1;
+ (long long)content_typeForMutableObject:(id)arg1;
+ (Class)content_mutableClassForType:(long long)arg1;
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content; // @dynamic content;
@property(copy, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property(copy, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property(copy, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property(copy, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property(copy, nonatomic) FTPartialSpeechRecognitionResponse *contentAsFTPartialSpeechRecognitionResponse;
@property(copy, nonatomic) FTFinalSpeechRecognitionResponse *contentAsFTFinalSpeechRecognitionResponse;
@property(nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

