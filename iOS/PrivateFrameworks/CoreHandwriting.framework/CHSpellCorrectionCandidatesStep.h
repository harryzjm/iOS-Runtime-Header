//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHSpellChecker, NSLocale;

@interface CHSpellCorrectionCandidatesStep
{
    NSLocale *_locale;
    CHSpellChecker *_spellChecker;
    struct _LXLexicon *_staticLexicon;
    struct _LXLexicon *_customLexicon;
}

- (void).cxx_destruct;
@property(nonatomic) struct _LXLexicon *customLexicon; // @synthesize customLexicon=_customLexicon;
@property(nonatomic) struct _LXLexicon *staticLexicon; // @synthesize staticLexicon=_staticLexicon;
@property(retain, nonatomic) CHSpellChecker *spellChecker; // @synthesize spellChecker=_spellChecker;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (id)process:(id)arg1 options:(id)arg2;
- (id)initWithLocale:(id)arg1 spellChecker:(id)arg2 staticLexicon:(struct _LXLexicon *)arg3 customLexicon:(struct _LXLexicon *)arg4;

@end

