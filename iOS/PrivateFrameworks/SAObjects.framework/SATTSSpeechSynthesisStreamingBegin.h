//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SATTSSpeechSynthesisResource, SATTSSpeechSynthesisVoice, SAUIAudioDescription;

@interface SATTSSpeechSynthesisStreamingBegin
{
}

+ (id)speechSynthesisStreamingBeginWithDictionary:(id)arg1 context:(id)arg2;
+ (id)speechSynthesisStreamingBegin;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *text;
@property(nonatomic) float streamingPlaybackBufferSize;
@property(retain, nonatomic) SATTSSpeechSynthesisVoice *speechSynthesisVoice;
@property(retain, nonatomic) SATTSSpeechSynthesisResource *speechSynthesisResource;
@property(retain, nonatomic) SAUIAudioDescription *playerStreamDescription;
@property(retain, nonatomic) SAUIAudioDescription *decoderStreamDescription;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
