//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IBICIdiom, IBICLanguageDirection, IBICLocale, IBICLuminosityAppearance;

@interface IBICVectorGlyphSetRepSlot
{
    IBICIdiom *_idiom;
    IBICLanguageDirection *_languageDirection;
    IBICLocale *_locale;
    IBICLuminosityAppearance *_luminosityAppearance;
}

+ (id)orderedComponentClasses;
+ (id)genesisSlotsForSlots:(id)arg1;
+ (Class)assetRepClass;
+ (Class)assetSetClass;
+ (id)slotFilterWithNilMatching:(long long)arg1 idioms:(id)arg2 includeLocales:(_Bool)arg3 languageDirections:(id)arg4 luminositySlots:(id)arg5;
+ (id)slotFilterUnionedWithStandardUniversalCounterpart:(_Bool)arg1 idioms:(id)arg2 includeLocales:(_Bool)arg3 languageDirections:(id)arg4 luminositySlots:(id)arg5;
- (void).cxx_destruct;
@property(readonly) IBICLuminosityAppearance *luminosityAppearance; // @synthesize luminosityAppearance=_luminosityAppearance;
@property(readonly) IBICLocale *locale; // @synthesize locale=_locale;
@property(readonly) IBICLanguageDirection *languageDirection; // @synthesize languageDirection=_languageDirection;
@property(readonly) IBICIdiom *idiom; // @synthesize idiom=_idiom;
- (id)outputFileNameGivenBaseName:(id)arg1 andExtension:(id)arg2;
- (_Bool)hasUnspecifiedLocale;
- (_Bool)hasUnspecifiedAppearance;
- (id)detailAreaPath;
- (long long)compareDisplayOrder:(id)arg1;
- (id)shortDisplayNameConsideringCounterparts:(id)arg1;
- (_Bool)anyExplicitValuesForSlotComponentClass:(Class)arg1 amongCounterparts:(id)arg2;
- (void)captureComponents;

@end

