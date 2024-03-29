//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPObject.h>

@class NSArray, NSString, NSURL, NSUUID, TPPageTemplate, TPSectionTemplatePage, TSDFill, TSWPStorage;

@interface TPSection : TSPObject
{
    TPSectionTemplatePage *_sectionTemplatePages[3];
    TSWPStorage *_parentStorage;
    NSString *_name;
    NSUUID *_sectionHyperlinkUUID;
    _Bool _inheritPreviousHeaderFooter;
    _Bool _sectionTemplateFirstPageDifferent;
    _Bool _sectionTemplateFirstPageHidesHeaderFooter;
    _Bool _sectionTemplateEvenOddPagesDifferent;
    unsigned int _sectionStartKind;
    unsigned int _sectionPageNumberKind;
    unsigned int _sectionPageNumberStart;
    TSDFill *_backgroundFill;
}

+ (_Bool)needsObjectUUID;
- (void).cxx_destruct;
@property(retain, nonatomic) TSDFill *backgroundFill; // @synthesize backgroundFill=_backgroundFill;
@property(nonatomic) _Bool sectionTemplateEvenOddPagesDifferent; // @synthesize sectionTemplateEvenOddPagesDifferent=_sectionTemplateEvenOddPagesDifferent;
@property(nonatomic) _Bool sectionTemplateFirstPageHidesHeaderFooter; // @synthesize sectionTemplateFirstPageHidesHeaderFooter=_sectionTemplateFirstPageHidesHeaderFooter;
@property(nonatomic) _Bool sectionTemplateFirstPageDifferent; // @synthesize sectionTemplateFirstPageDifferent=_sectionTemplateFirstPageDifferent;
- (id)allDrawables;
- (void)p_addAllDrawablesFromInfo:(id)arg1 toMutableArray:(id)arg2;
- (id)sectionTemplatePageOwningInfo:(id)arg1;
- (id)sectionTemplatePageOwningModel:(id)arg1;
- (id)sectionTemplatePageForType:(long long)arg1;
@property(readonly, nonatomic) NSArray *sectionTemplatePages;
- (void)p_makeUserGuideStorage;
- (void)p_upgradePageSizeAndMarginsFromParsedArchive:(const void *)arg1;
- (void)p_unarchiveAndUpgrade:(id)arg1 archive:(const void *)arg2;
- (void)i_clearPropertiesToDefaults;
- (void)i_copyHeadersAndFootersFrom:(id)arg1 dolcContext:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1;
- (struct CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (void)acceptVisitor:(id)arg1;
- (id)childEnumerator;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
@property(nonatomic) __weak TSWPStorage *parentStorage;
- (void)setSectionTemplatePageForFirstPage:(id)arg1;
- (id)copyWithContext:(id)arg1;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSString *localizedPrettyDisplayStringLong;
@property(readonly, nonatomic) NSString *localizedPrettyDisplayStringShort;
@property(copy, nonatomic) NSUUID *sectionHyperlinkUUID;
- (_Bool)isHeaderFooterEmpty:(long long)arg1;
- (_Bool)isHeaderFooterVisible:(long long)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)objectUUIDPath;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 section:(id)arg2;
@property(nonatomic) unsigned int sectionPageNumberStart;
@property(nonatomic) unsigned int sectionPageNumberKind;
@property(nonatomic) unsigned int sectionStartKind;
- (_Bool)pageMasterEvenOddPagesDifferent;
- (_Bool)pageMasterFirstPageHidesHeaderFooter;
- (_Bool)pageMasterFirstPageDifferent;
@property(nonatomic) _Bool inheritPreviousHeaderFooter;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) NSArray *pageInfosForPropagation;
@property(readonly, nonatomic) TPPageTemplate *pageTemplate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

