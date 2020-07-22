//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSSet;

@interface AXAlternativeVoices : NSObject
{
    NSDictionary *_voiceClassesMap;
    NSMutableDictionary *_voiceNameMap;
}

+ (_Bool)supportsAlex;
+ (_Bool)supportsSiri;
+ (id)sharedInstance;
+ (_Bool)inUnitTestMode;
+ (void)setInUnitTestMode:(_Bool)arg1;
@property(retain, nonatomic) NSMutableDictionary *voiceNameMap; // @synthesize voiceNameMap=_voiceNameMap;
@property(retain, nonatomic) NSDictionary *voiceClassesMap; // @synthesize voiceClassesMap=_voiceClassesMap;
- (void).cxx_destruct;
- (id)_siriBaseIdentifierFromIdentifier:(id)arg1;
- (id)_siriIdentifierFromBaseIdentifier:(id)arg1 language:(id)arg2 quality:(long long)arg3;
- (_Bool)_siriSupportsLanguage:(id)arg1;
- (id)voiceForVoiceIdentifier:(id)arg1 forLanguage:(id)arg2;
- (id)nameForVoiceIdentifier:(id)arg1;
- (id)alternativeVoiceIdentifiersForLangauge:(id)arg1;
- (_Bool)isAlexAvailableForLanguage:(id)arg1;
- (_Bool)isSiriVoiceIdentifier:(id)arg1;
- (_Bool)isOldSiriVoiceIdentifier:(id)arg1;
- (_Bool)isAlternativeVoice:(id)arg1;
- (_Bool)isAlternativeVoiceIdentifier:(id)arg1 forLanguage:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *supportedSiriLanguages;

@end

