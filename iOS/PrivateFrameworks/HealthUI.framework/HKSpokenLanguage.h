//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface HKSpokenLanguage : NSObject
{
    NSString *_identifier;
    NSString *_languageInCurrentLocale;
    NSString *_languageInLanguageLocale;
    unsigned long long _languageCategoryType;
}

- (void).cxx_destruct;
@property unsigned long long languageCategoryType; // @synthesize languageCategoryType=_languageCategoryType;
@property(retain, nonatomic) NSString *languageInLanguageLocale; // @synthesize languageInLanguageLocale=_languageInLanguageLocale;
@property(retain, nonatomic) NSString *languageInCurrentLocale; // @synthesize languageInCurrentLocale=_languageInCurrentLocale;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)localizedStringForDisplay;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithLanguageIdentifier:(id)arg1 forCategory:(unsigned long long)arg2;

@end
