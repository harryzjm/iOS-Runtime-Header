//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSWPTextSource-Protocol.h>

@class NSString;
@protocol TSWPTextSource;

__attribute__((visibility("hidden")))
@interface TSWPFormulaEditingTextSource : NSObject <TSWPTextSource>
{
    id <TSWPTextSource> _source;
}

- (void).cxx_destruct;
- (unsigned long long)storageLength;
- (void)updateStorageChangeCount;
- (unsigned long long)changeCount;
- (struct _NSRange)charRangeRemappedFromStorage:(struct _NSRange)arg1;
- (unsigned long long)charIndexRemappedFromStorage:(unsigned long long)arg1;
- (struct _NSRange)charRangeMappedFromStorage:(struct _NSRange)arg1;
- (struct _NSRange)charRangeMappedToStorage:(struct _NSRange)arg1;
- (unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1;
- (id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)arg1 forAttributeKind:(int)arg2 effectiveRange:(struct _NSRange *)arg3;
- (long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(struct _NSRange)arg2 locale:(id)arg3 hyphenChar:(unsigned int *)arg4;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (struct _NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(_Bool)arg2 includeHyphenation:(_Bool)arg3;
- (struct _NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(_Bool)arg2;
- (id)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (_Bool)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)arg1;
- (id)paragraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)attachmentOrFootnoteAtCharIndex:(unsigned long long)arg1;
- (id)attachmentAtCharIndex:(unsigned long long)arg1;
- (id)footnoteReferenceAtCharIndex:(unsigned long long)arg1;
- (id)smartFieldsWithAttributeKind:(int)arg1 intersectingRange:(struct _NSRange)arg2;
- (id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(int)arg2 effectiveRange:(struct _NSRange *)arg3;
- (void)attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(_Bool [21])arg2 attributesTable:(id [21])arg3 effectiveRange:(struct _NSRange *)arg4;
- (_Bool)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)arg1;
- (_Bool)hasColumnBreakAtCharIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id)string;
- (unsigned long long)length;
- (_Bool)adjustRangesByDelta:(long long)arg1 startingAt:(unsigned long long)arg2;
- (unsigned long long)mappedIndexFrom:(unsigned long long)arg1;
- (unsigned long long)unmappedIndexFrom:(unsigned long long)arg1;
- (struct _NSRange)mappedRangeFrom:(struct _NSRange)arg1;
- (struct _NSRange)unmappedRangeFrom:(struct _NSRange)arg1;
- (id)initWithSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

