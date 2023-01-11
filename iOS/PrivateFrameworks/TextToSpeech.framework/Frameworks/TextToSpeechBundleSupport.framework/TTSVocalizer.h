//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TTSVocalizer : NSObject
{
    void *_ttsVocalizerDataClass;
    struct __CFArray *_ttsVocalizerResourceDataPtrs;
    struct __CFData *_ttsVocalizerRulesetData;
    NSString *_ttsVocalizerCurrentLanguageCode;
}

@property(retain, nonatomic) NSString *ttsVocalizerCurrentLanguageCode; // @synthesize ttsVocalizerCurrentLanguageCode=_ttsVocalizerCurrentLanguageCode;
@property(retain, nonatomic) struct __CFData *ttsVocalizerRulesetData; // @synthesize ttsVocalizerRulesetData=_ttsVocalizerRulesetData;
@property(retain, nonatomic) struct __CFArray *ttsVocalizerResourceDataPtrs; // @synthesize ttsVocalizerResourceDataPtrs=_ttsVocalizerResourceDataPtrs;
@property(nonatomic) void *ttsVocalizerDataClass; // @synthesize ttsVocalizerDataClass=_ttsVocalizerDataClass;
- (unsigned int)_ttsVocalizerAppendPhonemeToString:(struct _VE_HSAFE *)arg1 phoneme:(unsigned short)arg2 phonemeString:(struct __CFString *)arg3;
- (unsigned int)_ttsVocalizerProcessText:(struct __CFString *)arg1 instance:(struct _VE_HSAFE *)arg2 callback:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;
- (unsigned int)_ttsVocalizerSetParameters:(struct _VE_HSAFE *)arg1 rate:(float)arg2 pitch:(float)arg3 volume:(float)arg4 footprintID:(long long)arg5;
- (double)_ttsVocalizerGetSampleRate:(struct _VE_HSAFE *)arg1;
- (unsigned int)_ttsVocalizerDestroyInstance:(struct _VE_HSAFE *)arg1;
- (void)stopSynthesis;
- (_Bool)readyForSynthesis:(struct _VE_HSAFE *)arg1;
- (unsigned int)_ttsVocalizerCreateInstance:(struct _VE_HSAFE *)arg1 desiredVoiceName:(char **)arg2 desiredFootprint:(long long)arg3 languageCode:(struct __CFString *)arg4 voiceType:(long long)arg5;
- (unsigned int)_ttsVocalizerVoiceInfoForActiveLanguage:(CDStruct_3f1f4513 *)arg1;
- (_Bool)_ttsVocalizerIsInitialized;
- (struct __CFArray *)_ttsVocalizerLoadedResources;
- (void)loadResource:(struct _VE_HSAFE)arg1 mimeType:(struct __CFString *)arg2 resourceURL:(struct __CFURL *)arg3 supportsAccurateWordCallbacks:(unsigned char)arg4;
- (void)_ttsVocalizerLoadProgrammaticRules:(struct _VE_HSAFE)arg1 supportsAccurateWordCallbacks:(unsigned char)arg2 forTests:(unsigned char)arg3;
- (unsigned int)_ttsVocalizerReallyLoadResource:(struct _VE_HSAFE)arg1 mimeType:(const char *)arg2 rules:(struct __CFData *)arg3 resource:(struct _VE_HSAFE *)arg4 supportsAccurateWordCallbacks:(unsigned char)arg5 resourceIdentifier:(id)arg6;
- (unsigned int)_ttsVocalizerCopyAvailableVoiceNames:(const struct __CFArray **)arg1;
- (unsigned int)_ttsVocalizerDestroy;
- (void)dealloc;
- (id)initWithLanguage:(struct __CFString *)arg1 defaultLanguage:(struct __CFString *)arg2 reinitIfNecessary:(unsigned char)arg3 instanceToDestroy:(struct _VE_HSAFE *)arg4 forceReinit:(unsigned char)arg5 voiceType:(long long)arg6 gender:(long long)arg7 footprint:(long long)arg8 voiceName:(struct __CFString *)arg9 error:(unsigned int *)arg10;
- (unsigned char)_ttsVocalizerDefaultVoiceIsFallback;

@end
