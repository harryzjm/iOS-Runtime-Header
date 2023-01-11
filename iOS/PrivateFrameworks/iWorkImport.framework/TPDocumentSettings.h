//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface TPDocumentSettings
{
    _Bool _hasBody;
    _Bool _hasHeaders;
    _Bool _hasFooters;
    _Bool _hasFacingPages;
    _Bool _qlPreview;
    _Bool _copyMovies;
    _Bool _copyAssets;
    _Bool _placeholderAuthoring;
    _Bool _sectionAuthoring;
    _Bool _linksEnabled;
    _Bool _hyphenation;
    _Bool _ligatures;
    _Bool _tocLinksEnabled;
    _Bool _showCTMarkup;
    _Bool _showCTDeletions;
    int _ctBubblesVisibility;
    _Bool _changeBarsVisible;
    _Bool _formatChangesVisible;
    _Bool _annotationsVisible;
    _Bool _documentIsRTL;
    long long _footnoteKind;
    long long _footnoteFormat;
    long long _footnoteNumbering;
    long long _footnoteGap;
    NSString *_decimalTab;
    NSString *_language;
    NSString *_hyphenationLanguage;
    NSString *_creationLocale;
    NSString *_originalTemplate;
    NSString *_creationDate;
    NSString *_bibliographyFormat;
}

@property(nonatomic) int ctBubblesVisibility; // @synthesize ctBubblesVisibility=_ctBubblesVisibility;
- (void).cxx_destruct;
- (id)stringWithCurrentDate;
- (void)resetForNewDocumentFromTemplate:(id)arg1 locale:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
@property(nonatomic) _Bool hasBody;
@property(readonly, nonatomic) long long basicFootnoteFormat;
@property(copy, nonatomic) NSString *bibliographyFormat;
@property(copy, nonatomic) NSString *creationDate;
@property(copy, nonatomic) NSString *originalTemplate;
@property(copy, nonatomic) NSString *creationLocale;
@property(copy, nonatomic) NSString *hyphenationLanguage;
@property(copy, nonatomic) NSString *language;
@property(copy, nonatomic) NSString *decimalTab;
@property(nonatomic) long long footnoteGap;
@property(nonatomic) long long footnoteNumbering;
@property(nonatomic) long long footnoteFormat;
@property(nonatomic) long long footnoteKind;
@property(nonatomic) _Bool sectionAuthoring;
@property(nonatomic) _Bool documentIsRTL;
@property(nonatomic) _Bool annotationsVisible;
@property(nonatomic) _Bool formatChangesVisible;
@property(nonatomic) _Bool changeBarsVisible;
- (void)setCTBubblesVisibility:(int)arg1;
@property(nonatomic) _Bool showCTDeletions;
@property(nonatomic) _Bool showCTMarkup;
@property(nonatomic) _Bool tocLinksEnabled;
@property(nonatomic) _Bool useLigatures;
@property(nonatomic) _Bool autoHyphenation;
@property(nonatomic) _Bool hyperlinksEnabled;
@property(nonatomic) _Bool placeholderAuthoring;
@property(nonatomic) _Bool copyTemplateAssets;
@property(nonatomic) _Bool copyMovies;
@property(nonatomic) _Bool quickLookPreview;
@property(nonatomic) _Bool hasFacingPages;
@property(nonatomic) _Bool hasFooters;
@property(nonatomic) _Bool hasHeaders;

@end

