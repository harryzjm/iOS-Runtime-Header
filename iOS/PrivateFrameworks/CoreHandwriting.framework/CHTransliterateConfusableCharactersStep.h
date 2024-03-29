//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSLocale;

@interface CHTransliterateConfusableCharactersStep
{
    NSArray *_characterTransliterations;
    struct _LXLexicon *_staticLexicon;
    struct _LXLexicon *_customLexicon;
    NSLocale *_locale;
}

+ (id)characterTransliterations;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) struct _LXLexicon *customLexicon; // @synthesize customLexicon=_customLexicon;
@property(nonatomic) struct _LXLexicon *staticLexicon; // @synthesize staticLexicon=_staticLexicon;
@property(nonatomic) NSArray *characterTransliterations; // @synthesize characterTransliterations=_characterTransliterations;
- (_Bool)isStringInLexicon:(id)arg1 outHasMatchingString:(_Bool *)arg2;
- (_Bool)isMatchingStringInLexicon:(id)arg1 withLexicon:(struct _LXLexicon *)arg2;
- (unsigned int)wordIDForCandidateString:(id)arg1;
- (id)handleConfusableCharactersInToken:(id)arg1 previousContext:(id)arg2 outPreserveOriginal:(_Bool *)arg3;
- (id)process:(id)arg1 options:(id)arg2;
- (id)initWithStaticLexicon:(struct _LXLexicon *)arg1 customLexicon:(struct _LXLexicon *)arg2 locale:(id)arg3;

@end

