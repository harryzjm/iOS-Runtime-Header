//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SATTSSpeechSynthesisAudioInfo, SAUIAudioData;

@interface SATTSSpeechSynthesisPartialResponse
{
}

+ (id)speechSynthesisPartialResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)speechSynthesisPartialResponse;
- (_Bool)requiresResponse;
@property(nonatomic) long long currentPacketNumber;
@property(retain, nonatomic) SATTSSpeechSynthesisAudioInfo *aceAudioInfo;
@property(retain, nonatomic) SAUIAudioData *aceAudioData;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
