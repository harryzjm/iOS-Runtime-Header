//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCompositeSettingLanguageValue
{
    NSString *_inputLanguageCode;
    NSString *_outputVoiceGenderCode;
    NSString *_outputVoiceLanguageCode;
    NSString *_voiceName;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *voiceName; // @synthesize voiceName=_voiceName;
@property(readonly, copy) NSString *outputVoiceLanguageCode; // @synthesize outputVoiceLanguageCode=_outputVoiceLanguageCode;
@property(readonly, copy) NSString *outputVoiceGenderCode; // @synthesize outputVoiceGenderCode=_outputVoiceGenderCode;
@property(readonly, copy) NSString *inputLanguageCode; // @synthesize inputLanguageCode=_inputLanguageCode;
- (id)attributeDescriptions;
- (id)initWithInputLanguage:(id)arg1 outputVoiceLanguageCode:(id)arg2 outputVoiceGenderCode:(id)arg3 voiceName:(id)arg4;

@end

