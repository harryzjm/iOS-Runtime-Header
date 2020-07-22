//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXLangMap, AXLanguageManager, NSCharacterSet, NSLocale, NSString;

@interface AXDialectMap : NSObject
{
    AXLangMap *_langMap;
    NSString *_voiceName;
    NSLocale *_locale;
    NSString *_specificLanguageID;
    NSCharacterSet *_speakableCharacters;
    NSCharacterSet *_secondaryLanguageRange;
}

@property(retain, nonatomic) NSCharacterSet *secondaryLanguageRange; // @synthesize secondaryLanguageRange=_secondaryLanguageRange;
@property(retain, nonatomic) NSCharacterSet *speakableCharacters; // @synthesize speakableCharacters=_speakableCharacters;
@property(copy, nonatomic) NSString *specificLanguageID; // @synthesize specificLanguageID=_specificLanguageID;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(copy, nonatomic) NSString *voiceName; // @synthesize voiceName=_voiceName;
@property(nonatomic) __weak AXLangMap *langMap; // @synthesize langMap=_langMap;
- (void).cxx_destruct;
- (_Bool)canSpeakString:(id)arg1;
- (_Bool)canSpeakLongCharacter:(unsigned int)arg1;
- (_Bool)canSpeakCharacter:(unsigned short)arg1;
- (_Bool)isDialectSecondaryForCharacter:(unsigned short)arg1;
@property(readonly, nonatomic) NSString *languageNameAndLocaleInNativeLocale;
@property(readonly, nonatomic) NSString *localeNameInCurrentLocale;
@property(readonly, nonatomic) NSString *languageNameAndLocaleInCurrentLocale;
@property(readonly, nonatomic) NSString *languageNameInNativeLocale;
@property(readonly, nonatomic) NSString *languageNameInCurrentLocale;
@property(readonly, nonatomic) NSString *regionID;
@property(readonly, nonatomic) AXLanguageManager *langManager;
- (id)debugDescription;
- (id)basicDescription;
- (id)description;
- (id)initWithLocale:(id)arg1 voiceName:(id)arg2 specificLanguageID:(id)arg3 speakableCharacters:(id)arg4 secondaryLanguageRange:(id)arg5;

@end

