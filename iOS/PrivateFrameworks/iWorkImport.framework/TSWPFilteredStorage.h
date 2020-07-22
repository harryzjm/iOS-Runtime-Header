//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSWPTextSource-Protocol.h>

@class NSString, TSWPDeletionRangeMap, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPFilteredStorage : NSObject <TSWPTextSource>
{
    TSWPStorage *_storage;
    TSWPDeletionRangeMap *_rangeMap;
    unsigned long long _length;
    unsigned long long _storageChangeCount;
}

- (struct _NSRange)rangeForSelectionAtCharIndex:(unsigned long long)arg1 caretIndex:(unsigned long long)arg2;
- (struct _NSRange)whiteSpaceRangeAtCharIndex:(unsigned long long)arg1 includingBreaks:(_Bool)arg2;
- (unsigned long long)nextCharacterIndex:(unsigned long long)arg1;
- (unsigned long long)previousCharacterIndex:(unsigned long long)arg1;
- (struct _NSRange)scanBackwardForWordAtCharIndex:(unsigned long long)arg1;
- (unsigned long long)storageLength;
- (void)updateStorageChangeCount;
- (unsigned long long)changeCount;
- (_Bool)hasSmartFieldsInRange:(struct _NSRange)arg1;
- (void)enumerateSmartFieldsWithAttributeKind:(int)arg1 inRange:(struct _NSRange)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateWithAttributeKind:(int)arg1 inRange:(struct _NSRange)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)substringWithRange:(struct _NSRange)arg1;
- (_Bool)adjustRangesByDelta:(long long)arg1 startingAt:(unsigned long long)arg2;
- (_Bool)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)arg1;
- (id)paragraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (struct _NSRange)charRangeRemappedFromStorage:(struct _NSRange)arg1;
- (unsigned long long)charIndexRemappedFromStorage:(unsigned long long)arg1;
- (struct _NSRange)charRangeMappedFromStorage:(struct _NSRange)arg1;
- (struct _NSRange)charRangeMappedToStorage:(struct _NSRange)arg1;
- (unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1;
- (id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)arg1 forAttributeKind:(int)arg2 effectiveRange:(struct _NSRange *)arg3;
- (long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(struct _NSRange)arg2 locale:(struct __CFLocale *)arg3 hyphenChar:(unsigned int *)arg4;
- (struct _NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(_Bool)arg2;
- (id)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)attachmentOrFootnoteAtCharIndex:(unsigned long long)arg1;
- (id)attachmentAtCharIndex:(unsigned long long)arg1;
- (id)footnoteReferenceAtCharIndex:(unsigned long long)arg1;
- (id)smartFieldsWithAttributeKind:(int)arg1 intersectingRange:(struct _NSRange)arg2;
- (id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(int)arg2 effectiveRange:(struct _NSRange *)arg3;
- (void)attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(_Bool [20])arg2 attributesTable:(id [20])arg3 effectiveRange:(struct _NSRange *)arg4;
- (_Bool)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)arg1;
- (_Bool)hasColumnBreakAtCharIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)string;
- (unsigned long long)length;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 subRange:(struct _NSRange)arg2 removeRanges:(id)arg3;
- (id)initWithStorage:(id)arg1 subRange:(struct _NSRange)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

