//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/TSDContainerInfo-Protocol.h>
#import <TSReading/TSKSearchable-Protocol.h>
#import <TSReading/TSSStyleClient-Protocol.h>
#import <TSReading/TSSThemedObject-Protocol.h>
#import <TSReading/TSWPStorageParent-Protocol.h>
#import <TSReading/TSWPTextSource-Protocol.h>

@class NSMutableString, NSObject, NSString, TSDInfoGeometry, TSKDocumentRoot, TSPObject, TSSStylesheet, TSWPStorageBroadcaster;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TSWPStorage <TSDContainerInfo, TSKSearchable, TSSThemedObject, TSWPStorageParent, TSSStyleClient, TSWPTextSource>
{
    NSObject<TSDContainerInfo> *_parentInfo;
    TSPObject<TSDOwningAttachment> *_owningAttachment;
    NSMutableString *_string;
    struct TSWPAttributeArray *_attributesTable[19];
    TSWPStorageBroadcaster *_broadcaster;
    TSKDocumentRoot *_documentRoot;
    TSSStylesheet *_stylesheet;
    int _WPKind;
    unsigned int _disallowElementKinds;
    _Bool _dolcSuppressed;
    _Bool _delayBroadcast;
    struct _NSRange _rangeToBroadcast;
    int _writingDirectionCache;
    _Bool _isInInit;
    unsigned long long _changeCount;
    _Bool _ignoreContentsChangedNotifications;
}

+ (Class)pStringClassForWPKind:(int)arg1;
+ (id)filterMarkAttributes:(id)arg1;
+ (id)filterText:(id)arg1 removingAttachments:(_Bool)arg2;
+ (id)filterText:(id)arg1;
+ (_Bool)allowsElementKind:(int)arg1 forStorageKind:(int)arg2;
+ (void)resetDisallowedElementKinds;
+ (void)setDisallowedElementKinds:(unsigned int)arg1 forStorageKind:(int)arg2;
+ (void)initialize;
+ (id)plainTextPasteStringForStorages:(id)arg1 forcePlainText:(_Bool)arg2;
+ (struct TSWPAttributeArray *)createAttributeArrayForKind:(unsigned int)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2;
+ (struct TSWPAttributeArray *)createEmptyAttributeArrayForKind:(unsigned int)arg1;
@property(nonatomic) _Bool ignoreContentsChangedNotifications; // @synthesize ignoreContentsChangedNotifications=_ignoreContentsChangedNotifications;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @synthesize owningAttachment=_owningAttachment;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @synthesize parentInfo=_parentInfo;
@property(readonly, nonatomic) unsigned long long changeCount; // @synthesize changeCount=_changeCount;
@property(readonly, nonatomic) _Bool isInInit; // @synthesize isInInit=_isInInit;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (int)compareRange:(struct _NSRange)arg1 otherStorage:(id)arg2 otherRange:(struct _NSRange)arg3 options:(unsigned long long)arg4;
- (id)newSubstorageWithRange:(struct _NSRange)arg1 storageContext:(id)arg2 objectsContext:(id)arg3 flags:(unsigned int)arg4 kind:(int)arg5;
- (id)newSubstorageWithRange:(struct _NSRange)arg1 context:(id)arg2 flags:(unsigned int)arg3 kind:(int)arg4;
- (id)newSubstorageWithRange:(struct _NSRange)arg1 storageContext:(id)arg2 objectsContext:(id)arg3 flags:(unsigned int)arg4;
- (id)newSubstorageWithRange:(struct _NSRange)arg1 context:(id)arg2 flags:(unsigned int)arg3;
- (unsigned long long)selectionRangeMaxForCharIndex:(unsigned long long)arg1;
- (unsigned long long)selectionRangeMinForCharIndex:(unsigned long long)arg1;
- (struct _NSRange)selectionRangeForCharIndex:(unsigned long long)arg1;
- (_Bool)canPasteAsPlainTextWithUniformParagraphs;
- (_Bool)canPasteAsPlainText;
- (_Bool)p_hasGoodAttributesForPlainTextPaste;
- (_Bool)hasVisibleText;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)referencedStyles;
- (id)referencedStylesOfClass:(Class)arg1;
- (id)childCommandForApplyThemeCommand:(id)arg1;
- (id)childInfos;
- (id)copyWithContext:(id)arg1;
- (_Bool)isThemeContent;
- (Class)repClass;
- (Class)layoutClass;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
@property(readonly, nonatomic) long long contentWritingDirection;
- (_Bool)textIsVertical;
- (_Bool)autoListTermination;
- (_Bool)autoListRecognition;
- (id)fontNameAtCharIndex:(unsigned long long)arg1 size:(double *)arg2 effectiveRange:(struct _NSRange *)arg3 styleProvider:(id)arg4;
- (void)fixGlyphVariantFontsForRange:(struct _NSRange)arg1;
- (id)glyphVariantDataAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)removeGlyphVariantDataFromRange:(struct _NSRange)arg1;
- (void)addGlyphVariantData:(id)arg1 toRange:(struct _NSRange)arg2;
- (void)autoUpdateSmartFieldsWithDocumentRoot:(id)arg1;
- (void)autoUpdateField:(id)arg1 withRange:(struct _NSRange)arg2 documentRoot:(id)arg3 returningInsertedRange:(struct _NSRange *)arg4;
- (void)smartFieldDidChange:(id)arg1;
- (id)smartFieldsWithAttributeKind:(unsigned int)arg1 intersectingRange:(struct _NSRange)arg2;
- (id)smartFieldsWithAttributeKind:(unsigned int)arg1 intersectingRange:(struct _NSRange)arg2 passingTest:(CDUnknownBlockType)arg3;
- (void)enumerateSmartFieldsWithAttributeKind:(unsigned int)arg1 inRange:(struct _NSRange)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateWithAttributeKind:(unsigned int)arg1 inRange:(struct _NSRange)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)hasSmartFieldsInRange:(struct _NSRange)arg1;
- (_Bool)hasSmartFields;
- (void)removeSmartField:(id)arg1 fromRange:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (void)addSmartField:(id)arg1 toRange:(struct _NSRange)arg2 dolcContext:(id)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;
- (id)editableSmartFieldAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(unsigned int)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)extendSelectionToIncludeSmartFields:(id)arg1;
- (struct _NSRange)p_extendRangeToIncludeSmartFields:(struct _NSRange)arg1;
- (_Bool)anchoredDrawableAttachmentCharacterAtCharIndex:(unsigned long long)arg1;
- (struct _NSRange)attachmentRangeForCharIndex:(unsigned long long)arg1 forwards:(_Bool)arg2 attributeKind:(unsigned int)arg3;
- (struct _NSRange)attachmentRangeForCharIndex:(unsigned long long)arg1 forwards:(_Bool)arg2;
- (unsigned long long)findCharIndexForAttachment:(id)arg1;
- (struct _NSRange)attachmentIndexRangeForTextRange:(struct _NSRange)arg1;
- (void)enumerateAttachmentsInTextRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAttachmentsOfClass:(Class)arg1 inTextRange:(struct _NSRange)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)attachmentIndexForInsertionAtCharIndex:(unsigned long long)arg1;
- (void)replaceWithAttachment:(id)arg1 forAttachmentIndex:(unsigned long long)arg2 dolcContext:(id)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;
- (unsigned long long)attachmentIndexAtCharIndex:(unsigned long long)arg1;
- (id)attachmentAtCharIndex:(unsigned long long)arg1;
- (id)attachmentAtAttachmentIndex:(unsigned long long)arg1 outCharIndex:(unsigned long long *)arg2;
- (unsigned long long)attachmentCount;
- (unsigned long long)findCharacterIndexForContainedInfo:(id)arg1;
- (id)attachmentOrFootnoteAtCharIndex:(unsigned long long)arg1;
- (struct _NSRange)insertAttachmentOrFootnote:(id)arg1 range:(struct _NSRange)arg2 dolcContext:(id)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4 changeSession:(id)arg5;
- (struct _NSRange)insertAttachmentOrFootnote:(id)arg1 range:(struct _NSRange)arg2;
- (void)invalidateCharIndexForAttachment:(id)arg1;
- (void)invalidatePageCountAttachmentCharIndexes:(_Bool)arg1;
- (void)invalidateFootnoteAttachmentCharIndexes;
- (unsigned long long)findCharIndexForFootnoteAttachment:(id)arg1;
- (id)footnoteStorages;
- (unsigned long long)footnoteIndexForFootnoteStorage:(id)arg1;
- (unsigned long long)footnoteIndexForFootnote:(id)arg1;
- (unsigned long long)autoNumberFootnoteCountForRange:(struct _NSRange)arg1;
- (struct _NSRange)footnoteRangeForTextRange:(struct _NSRange)arg1;
- (id)footnoteAtFootnoteIndex:(unsigned long long)arg1 outCharIndex:(unsigned long long *)arg2;
- (id)footnoteReferenceAtCharIndex:(unsigned long long)arg1;
- (id)footnoteMarkAtCharIndex:(unsigned long long)arg1;
- (id)footnoteReferenceAttachmentOrFootnoteMarkAttachmentAtCharIndex:(unsigned long long)arg1;
- (unsigned long long)footnoteIndexForCharIndex:(unsigned long long)arg1;
- (unsigned long long)footnoteCount;
- (void)appendSection:(id)arg1 charIndex:(unsigned long long)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (struct _NSRange)insertSection:(id)arg1 atCharIndex:(unsigned long long)arg2 dolcContext:(id)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4 changeSession:(id)arg5;
- (id)sectionAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (unsigned long long)sectionIndexForSection:(id)arg1;
- (unsigned long long)sectionIndexForCharIndex:(unsigned long long)arg1;
- (void)replaceSectionAtSectionIndex:(unsigned long long)arg1 withSection:(id)arg2 dolcContext:(id)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;
- (id)sectionAtSectionIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (_Bool)hasSectionForParagraphBreakAtCharIndex:(unsigned long long)arg1;
- (unsigned long long)sectionCount;
- (_Bool)supportsSectionCopying;
- (_Bool)supportsSections;
- (void)invalidateForStyle:(id)arg1;
- (void)styleDidChangeInRange:(struct _NSRange)arg1;
- (void)setColumnStyle:(id)arg1 forCharRange:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (id)columnStyleAtColumnStyleIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)columnStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (_Bool)hasColumnBreakAtCharIndex:(unsigned long long)arg1;
- (_Bool)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)arg1;
- (unsigned long long)columnStyleCount;
- (_Bool)supportsColumnStyles;
- (id)valueForProperty:(int)arg1 atCharIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (void)setCharacterStyle:(id)arg1 range:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (id)characterStyleAtCharIndex:(unsigned long long)arg1 left:(_Bool)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (unsigned long long)characterStyleAttributeCount;
- (void)setParagraphFlags:(unsigned short)arg1 level:(unsigned long long)arg2 forCharRange:(struct _NSRange)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;
- (void)setParagraphLevel:(unsigned long long)arg1 atParIndex:(unsigned long long)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (void)setParagraphLevel:(unsigned long long)arg1 forCharRange:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (unsigned long long)paragraphLevelAtParIndex:(unsigned long long)arg1;
- (unsigned long long)paragraphLevelAtCharIndex:(unsigned long long)arg1;
- (void)setParagraphFlags:(unsigned short)arg1 forCharRange:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (unsigned short)paragraphFlagsAtCharIndex:(unsigned long long)arg1;
- (void)paragraphFlags:(unsigned short *)arg1 andLevel:(unsigned long long *)arg2 atCharIndex:(unsigned long long)arg3;
- (unsigned long long)listStartAtCharIndex:(unsigned long long)arg1;
- (void)setListStart:(unsigned long long)arg1 forCharRange:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (unsigned long long)listNumberForParagraphEnumerator:(const struct TSWPParagraphEnumerator *)arg1 numberingData:(CDStruct_b9fbe577 *)arg2;
- (unsigned long long)listNumberForParagraphIndex:(unsigned long long)arg1 numberingData:(CDStruct_b9fbe577 *)arg2;
- (void)setListStyle:(id)arg1 atParIndex:(unsigned long long)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (void)setListStyle:(id)arg1 forCharRange:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (id)listStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)listStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (unsigned long long)listStyleCount;
- (_Bool)supportsListStyles;
- (void)enumerateParagraphsIntersectingTextRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)findNextParagraphStyleChange:(unsigned long long)arg1 maxCharIndex:(unsigned long long)arg2;
- (void)setParagraphStyle:(id)arg1 forCharRange:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (id)paragraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)setParagraphStyle:(id)arg1 atParIndex:(unsigned long long)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (id)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)setDictationAndAutocorrection:(id)arg1 forCharRange:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (void)addAllDictationAndAutocorrectionKeyRangesInRange:(struct _NSRange)arg1 toRanges:(struct TSWPRangeVector *)arg2;
- (id)dictationAndAutocorrectionKeyAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)languageAtParIndex:(unsigned long long)arg1 useStringTokenizer:(_Bool)arg2 useCreationLanguage:(_Bool)arg3;
- (id)languageForTextRange:(struct _NSRange)arg1 useStringTokenizer:(_Bool)arg2 useCreationLanguage:(_Bool)arg3;
- (id)bestCharacterLanguageForTextRange:(struct _NSRange)arg1;
- (void)setLanguage:(id)arg1 forCharRange:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (void)setParagraphWritingDirection:(int)arg1 forCharRange:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (int)writingDirectionForParagraphAtParIndex:(unsigned long long)arg1;
- (int)writingDirectionForParagraphAtCharIndex:(unsigned long long)arg1;
- (_Bool)isWritingDirectionRightToLeftForListAtParIndex:(unsigned long long)arg1;
- (_Bool)isWritingDirectionRightToLeftForParagraphAtParIndex:(unsigned long long)arg1;
- (_Bool)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)arg1;
- (_Bool)paragraphHasListLabelAtCharIndex:(unsigned long long)arg1;
- (struct _NSRange)paragraphIndexRangeForCharRange:(struct _NSRange)arg1;
- (struct _NSRange)textRangeForParagraphsInCharRange:(struct _NSRange)arg1;
- (unsigned long long)paragraphEndAtCharIndex:(unsigned long long)arg1;
- (unsigned long long)paragraphStartAtCharIndex:(unsigned long long)arg1;
- (struct _NSRange)textRangeForParagraphAtCharIndex:(unsigned long long)arg1;
- (struct _NSRange)textRangeForParagraphsInRange:(struct _NSRange)arg1;
- (struct _NSRange)textRangeForParagraphAtIndex:(unsigned long long)arg1;
- (unsigned long long)paragraphIndexAtCharIndex:(unsigned long long)arg1;
- (unsigned long long)paragraphCount;
- (unsigned long long)firstParIndexInListAtParIndex:(unsigned long long)arg1;
- (struct _NSRange)textRangeForListAtCharIndex:(unsigned long long)arg1;
- (unsigned long long)listEndAtCharIndex:(unsigned long long)arg1;
- (struct _NSRange)textRangeForListsInCharRange:(struct _NSRange)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (_Bool)styleOverridesAppliedToRange:(struct _NSRange)arg1;
- (struct _NSRange)replaceAllOccurrencesOfStyle:(id)arg1 withStyle:(id)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (_Bool)canUserReplaceText;
- (void)continueSearch:(id)arg1;
- (id)searchForAnnotationsWithHitBlock:(CDUnknownBlockType)arg1;
- (id)searchInRange:(struct _NSRange)arg1 forString:(id)arg2 options:(unsigned long long)arg3 onHit:(CDUnknownBlockType)arg4;
- (id)searchForString:(id)arg1 options:(unsigned long long)arg2 onHit:(CDUnknownBlockType)arg3;
- (struct _NSRange)rangeForHighlight:(id)arg1;
- (void)findChangesInRange:(struct _NSRange)arg1 onHit:(CDUnknownBlockType)arg2;
- (void)p_findChangesInRange:(struct _NSRange)arg1 onHit:(CDUnknownBlockType)arg2 withAttributeKind:(unsigned int)arg3;
- (void)findCommentsInRange:(struct _NSRange)arg1 onHit:(CDUnknownBlockType)arg2;
- (struct _NSRange)rangeOfAnnotationWithOptions:(unsigned long long)arg1 range:(struct _NSRange)arg2;
- (void)acceptVisitor:(id)arg1;
- (id)childEnumerator;
- (struct _NSRange)rangeOfParagraphBreakingCharacter:(unsigned short)arg1 backwards:(_Bool)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)rangeOfString:(id)arg1 searchOptions:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)rangeOfString:(id)arg1 searchOptions:(unsigned long long)arg2 updatingSearchRange:(struct _NSRange *)arg3;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)insertStorage:(id)arg1 atCharIndex:(unsigned long long)arg2 dolcContext:(id)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;
- (void)deleteRange:(struct _NSRange)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2;
- (void)insertString:(id)arg1 atCharIndex:(unsigned long long)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (id)substringWithSelection:(id)arg1;
- (id)substringWithRange:(struct _NSRange)arg1;
- (struct _NSRange)p_replaceCharactersInLogicalSelection:(id)arg1 withString:(id)arg2 withFlags:(unsigned int)arg3 replaceTextData:(CDStruct_a70f6672 *)arg4 changeSession:(id)arg5 undoTransaction:(struct TSWPStorageTransaction *)arg6 outInsertedRange:(struct _NSRange *)arg7;
- (struct _NSRange)replaceCharactersInSelection:(id)arg1 withString:(id)arg2 withFlags:(unsigned int)arg3 replaceTextData:(CDStruct_a70f6672 *)arg4 changeSession:(id)arg5 undoTransaction:(struct TSWPStorageTransaction *)arg6 outInsertedRange:(struct _NSRange *)arg7;
- (struct _NSRange)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2 notifyObservers:(_Bool)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;
- (struct _NSRange)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (id)extendSelectionForTopicChildren:(id)arg1;
- (struct _NSRange)p_RelocateNonSelectedAnchorsInRange:(struct _NSRange)arg1 selectionInfos:(id)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (id)relocateNonSelectedAnchorsInSelection:(id)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2;
- (struct __CFDictionary *)createFilteredCoreTextAttributes:(struct __CFDictionary *)arg1 effectiveRange:(struct _NSRange *)arg2 filterDelegate:(id)arg3;
- (double)filteredCoreTextAttributesFontScaleEffectiveRange:(struct _NSRange *)arg1 filterDelegate:(id)arg2;
- (_Bool)adjustRangesByDelta:(long long)arg1;
- (unsigned long long)storageLength;
- (struct _NSRange)charRangeMappedFromStorage:(struct _NSRange)arg1;
- (struct _NSRange)charRangeMappedToStorage:(struct _NSRange)arg1;
- (unsigned long long)charIndexRemappedFromStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1;
- (long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(struct _NSRange)arg2 locale:(struct __CFLocale *)arg3 hyphenChar:(unsigned int *)arg4;
- (void)attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(_Bool [19])arg2 attributesTable:(id [19])arg3 effectiveRange:(struct _NSRange *)arg4;
- (id)objectAtLocationAtExactCharIndex:(unsigned long long)arg1 forAttributeKind:(unsigned int)arg2;
- (id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)arg1 forAttributeKind:(unsigned int)arg2 effectiveRange:(struct _NSRange *)arg3;
- (struct _NSRange)rangeByTrimmingRange:(struct _NSRange)arg1 withBlock:(CDUnknownBlockType)arg2;
- (struct _NSRange)rangeByExpandingToIncludePartialWords:(struct _NSRange)arg1;
- (struct _NSRange)nextWordFromIndex:(unsigned long long)arg1 forward:(_Bool)arg2;
- (struct _NSRange)p_rangeForSelectionAtCharIndex:(unsigned long long)arg1 caretIndex:(unsigned long long)arg2 handleNextWordWhitespace:(_Bool)arg3;
- (struct _NSRange)rangeForSelectionAtCharIndex:(unsigned long long)arg1 caretIndex:(unsigned long long)arg2;
- (struct _NSRange)rangeForSelectionAtCharIndex:(unsigned long long)arg1 includePreviousWord:(_Bool)arg2;
- (struct _NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(_Bool)arg2;
- (struct _NSRange)scanLeftForWordAtCharIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeByExtendingRangeToLineBreak:(struct _NSRange)arg1;
- (struct _NSRange)rangeByExtendingRangeToWhitespace:(struct _NSRange)arg1 skipVisibleDeleted:(_Bool)arg2;
- (struct _NSRange)rangeByExtendingRangeToWhitespace:(struct _NSRange)arg1;
- (struct _NSRange)rangeForSelectionWithInsertionSelection:(id)arg1;
- (struct _NSRange)whiteSpaceRangeAtCharIndex:(unsigned long long)arg1 includingBreaks:(_Bool)arg2;
- (struct _NSRange)whiteSpaceRangeAtCharIndex:(unsigned long long)arg1;
- (_Bool)isAllWhitespaceInRange:(struct _NSRange)arg1;
- (_Bool)isEmptyParagraphSelection:(id)arg1 outRange:(struct _NSRange *)arg2;
- (_Bool)isWholeParagraphsForRange:(struct _NSRange)arg1 ignoreAttachmentCharacters:(_Bool)arg2 requireParagraphBreakSelected:(_Bool)arg3;
- (unsigned long long)emptyParagraphCount:(struct _NSRange)arg1;
- (unsigned long long)selectedParagraphBreakCount:(struct _NSRange)arg1;
- (unsigned long long)indexForCharacter:(unsigned short)arg1 startCharIndex:(unsigned long long)arg2;
- (unsigned long long)nextCharacterIndex:(unsigned long long)arg1;
- (unsigned long long)previousCharacterIndex:(unsigned long long)arg1 forDelete:(_Bool)arg2;
- (unsigned long long)previousCharacterIndex:(unsigned long long)arg1;
- (id)childEnumeratorForRange:(struct _NSRange)arg1;
- (unsigned long long)wordCount;
- (id)string;
- (id)stringValue;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (struct _NSRange)range;
- (unsigned long long)length;
- (unsigned long long)characterCount;
- (_Bool)setDOLCSuppressed:(_Bool)arg1;
- (_Bool)isDOLCSuppressed;
- (struct TSWPParagraphEnumerator)paragraphEnumeratorAtParIndex:(unsigned long long)arg1 styleProvider:(id)arg2;
- (struct TSWPParagraphEnumerator)paragraphEnumeratorForCharRange:(struct _NSRange)arg1 styleProvider:(id)arg2 requireHidden:(_Bool)arg3;
- (struct TSWPParagraphEnumerator)paragraphEnumeratorForCharRange:(struct _NSRange)arg1 styleProvider:(id)arg2;
- (struct TSWPParagraphEnumerator)paragraphEnumeratorAtCharIndex:(unsigned long long)arg1 styleProvider:(id)arg2;
- (id)textSourceForLayoutInRange:(struct _NSRange)arg1;
- (void)filterInvalidContentForStorage:(id)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2;
- (void)filterSectionBreaksFromStorage:(id)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2;
- (_Bool)allowsElementKind:(int)arg1;
- (unsigned int)disallowedElementKinds;
- (void)removeDisallowedElementKind:(int)arg1;
- (void)addDisallowedElementKind:(int)arg1;
- (void)setWPKind:(int)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2;
- (int)wpKind;
- (id)stylesheet;
- (void)setDocumentRoot:(id)arg1;
- (id)documentRoot;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 string:(id)arg2 stylesheet:(id)arg3 kind:(int)arg4;
- (id)initWithContext:(id)arg1 string:(id)arg2 kind:(int)arg3 stylesheet:(id)arg4 paragraphStyle:(id)arg5 listStyle:(id)arg6 section:(id)arg7 columnStyle:(id)arg8 paragraphDirection:(int)arg9;
- (id)initWithContext:(id)arg1 string:(id)arg2 kind:(int)arg3 stylesheet:(id)arg4 paragraphStyle:(id)arg5 listStyle:(id)arg6 section:(id)arg7 columnStyle:(id)arg8;
- (id)stringEquivalentFromRange:(struct _NSRange)arg1;
- (id)stringEquivalentFromRange:(struct _NSRange)arg1 withLayoutParent:(id)arg2;
- (id)plainTextStringFromRange:(struct _NSRange)arg1 convertTextualAttachments:(_Bool)arg2 includeChildTextStorages:(_Bool)arg3 forExport:(_Bool)arg4 withLayoutParent:(id)arg5;
- (void)pApplyOverrideObjectAfterReplacingCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2 overrideObject:(id)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;
- (void)pApplyOverrideObjectAfterReplacingCharactersInSelection:(id)arg1 withString:(id)arg2 overrideObject:(id)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;
- (id)pOverrideObjectBeforeReplacingCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2 withInsertionBehavior:(int)arg3;
- (id)pOverrideObjectBeforeReplacingCharactersInSelection:(id)arg1 withString:(id)arg2;
- (id)pFindValidInsertionCharStyleFromCharIndex:(unsigned long long)arg1;
- (int)compareAttributeArray1:(struct TSWPAttributeArray *)arg1 array2:(struct TSWPAttributeArray *)arg2 range1:(struct _NSRange)arg3 range2:(struct _NSRange)arg4 attributeIndex1:(unsigned long long)arg5 attributeIndex2:(unsigned long long)arg6;
- (int)compareAttributeArray:(struct TSWPAttributeArray *)arg1 range:(struct _NSRange)arg2 otherStorage:(id)arg3 otherRange:(struct _NSRange)arg4;
- (void)transferAttributeArraySource:(struct TSWPAttributeArray *)arg1 forSourceRange:(struct _NSRange)arg2 toDestStorage:(id)arg3 objectContext:(id)arg4 dolcContext:(id)arg5 flags:(int)arg6;
- (struct _NSRange)replaceAllOccurrencesOfObject:(id)arg1 withObject:(id)arg2 forKind:(unsigned int)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;
- (void)applyFlags:(unsigned short)arg1 level:(unsigned long long)arg2 toParagraphsInCharRange:(struct _NSRange)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;
- (void)applyObject:(id)arg1 toParagraphsInCharRange:(struct _NSRange)arg2 forKind:(unsigned int)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;
- (void)applyWritingDirection:(int)arg1 toParagraphIndexRange:(struct _NSRange)arg2 forKind:(unsigned int)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;
- (void)applyDataValue:(unsigned int)arg1 toParagraphIndexRange:(struct _NSRange)arg2 forKind:(unsigned int)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;
- (void)applyFlags:(unsigned short)arg1 level:(unsigned long long)arg2 toParagraphIndexRange:(struct _NSRange)arg3 forKind:(unsigned int)arg4 undoTransaction:(struct TSWPStorageTransaction *)arg5;
- (void)applyObject:(id)arg1 toParagraphIndexRange:(struct _NSRange)arg2 forKind:(unsigned int)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;
- (void)lowLevelApplyObject:(id)arg1 toCharRange:(struct _NSRange)arg2 forKind:(int)arg3 dolcContext:(id)arg4 undoTransaction:(struct TSWPStorageTransaction *)arg5;
- (void)applyObject:(id)arg1 toCharRange:(struct _NSRange)arg2 forKind:(int)arg3 dolcContext:(id)arg4 undoTransaction:(struct TSWPStorageTransaction *)arg5;
- (void)insertParagraphData:(CDStruct_8a5ee6e3)arg1 charIndex:(unsigned long long)arg2 attributeArray:(struct TSWPAttributeArray *)arg3 attributeIndex:(unsigned long long)arg4 undoTransaction:(struct TSWPStorageTransaction *)arg5;
- (void)insertObject:(id)arg1 charIndex:(unsigned long long)arg2 attributeArray:(struct TSWPAttributeArray *)arg3 attributeIndex:(unsigned long long)arg4 dolcContext:(id)arg5 undoTransaction:(struct TSWPStorageTransaction *)arg6;
- (struct _NSRange)insertSpecialCharacter:(unsigned short)arg1 object:(id)arg2 kind:(unsigned int)arg3 range:(struct _NSRange)arg4 dolcContext:(id)arg5 undoTransaction:(struct TSWPStorageTransaction *)arg6 changeSession:(id)arg7;
- (void)p_attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(_Bool [19])arg2 attributesTable:(id [19])arg3 effectiveRange:(struct _NSRange *)arg4;
- (void)compress:(struct TSWPStorageTransaction *)arg1;
- (void)compressAttributeArrayKind:(unsigned int)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2;
- (struct TSWPAttributeArray *)attributeArrayForKind:(unsigned int)arg1;
- (struct TSWPParagraphAttributeArray *)paragraphAttributeArrayForKind:(unsigned int)arg1 withCreate:(_Bool)arg2;
- (struct TSWPAttributeArray *)attributeArrayForKind:(unsigned int)arg1 withCreate:(_Bool)arg2 fromUndo:(_Bool)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;
- (struct TSWPAttributeArray *)attributeArrayForKind:(unsigned int)arg1 withCreate:(_Bool)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (struct _NSRange)replaceCharactersInSelection:(id)arg1 withStorage:(id)arg2 usePasteRules:(_Bool)arg3 dolcContext:(id)arg4 changeSession:(id)arg5 undoTransaction:(struct TSWPStorageTransaction *)arg6;
- (struct _NSRange)replaceCharactersInRange:(struct _NSRange)arg1 withStorage:(id)arg2 usePasteRules:(_Bool)arg3 dolcContext:(id)arg4 undoTransaction:(struct TSWPStorageTransaction *)arg5;
- (void)transferAttributeArraySource:(struct TSWPAttributeArray *)arg1 toAttributeArrayDest:(struct TSWPAttributeArray *)arg2 atCharIndex:(unsigned long long)arg3 dolcContext:(id)arg4 undoTransaction:(struct TSWPStorageTransaction *)arg5;
- (struct _NSRange)textRangeIgnoringTrailingLineBreaksForParagraphAtIndex:(unsigned long long)arg1;
- (void)p_fillMarkers:(vector_88016b54 *)arg1 startingAtCharIndex:(unsigned long long)arg2 forCount:(unsigned long long)arg3;
- (void)p_fillMarkers:(vector_a36e5995 *)arg1 string:(id)arg2 length:(unsigned long long)arg3 hasAttachments:(_Bool *)arg4 hasFootnotes:(_Bool *)arg5 hasBreaks:(_Bool *)arg6;
- (void)p_lowLevelReplaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2 length:(unsigned long long)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;
- (void)p_replaceCharactersInSelection:(id)arg1 withString:(id)arg2 length:(unsigned long long)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;
- (void)p_didChangeRange:(struct _NSRange)arg1 delta:(long long)arg2 broadcastKind:(int)arg3;
- (id)pDefaultSectionForContext:(id)arg1;
- (id)valueForBIUProperties:(id)arg1 selection:(id)arg2 insertionStyle:(id)arg3;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2 options:(unsigned long long)arg3 changedRange:(struct _NSRange *)arg4 changeDelta:(long long *)arg5 undoTransaction:(struct TSWPStorageTransaction *)arg6 changeSession:(id)arg7;
- (struct __CTFont *)createFontAtCharIndex:(unsigned long long)arg1 scaleTextPercent:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3 styleProvider:(id)arg4;
- (void)splitSmartFieldAtCharIndex:(unsigned long long)arg1 lengthToInsert:(unsigned long long)arg2 dolcContext:(id)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;
- (void)splitSmartFieldAtCharIndex:(unsigned long long)arg1 lengthToInsert:(unsigned long long)arg2 attributeKind:(unsigned int)arg3 dolcContext:(id)arg4 undoTransaction:(struct TSWPStorageTransaction *)arg5;
- (id)valueForBIUProperties:(id)arg1;
- (_Bool)canBeStoredInAStringValueCell;
- (_Bool)p_passesExtraTablesChecksForStoringInAStringValueCell;
- (_Bool)p_shouldInsertionSplitChange:(id)arg1 changeSession:(id)arg2;
- (void)p_handleChangeSplittingForInsertedRange:(struct _NSRange)arg1 changeSession:(id)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (id)p_replacementsForSelection:(id)arg1 withString:(id)arg2 changeSession:(id)arg3 shouldTrackDeletions:(_Bool)arg4;
- (id)editableAnnotationForInsertionPointSelection:(id)arg1 includeComments:(_Bool)arg2 withOutRange:(struct _NSRange *)arg3 selectionIsOnEdge:(_Bool *)arg4;
- (_Bool)highlightsAllowed;
- (id)firstHighlightForSelectionRange:(struct _NSRange)arg1 outRange:(struct _NSRange *)arg2 requireComment:(_Bool)arg3;
- (id)firstHighlightForSelectionRange:(struct _NSRange)arg1 outRange:(struct _NSRange *)arg2;
- (void)changeViewSettingsDidChange;
- (_Bool)selectionContainsVisibleTrackedChanges:(id)arg1;
- (struct _NSRange)rangeForTrackedChanges:(id)arg1;
- (id)changeDetailsForChange:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)changeDetailsAtCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;
- (id)previousChangeFromCharIndex:(unsigned long long)arg1 beforeChange:(id)arg2 changeRange:(struct _NSRange *)arg3;
- (id)nextChangeFromCharIndex:(unsigned long long)arg1 afterChange:(id)arg2 changeRange:(struct _NSRange *)arg3;
- (void)applyChanges:(_Bool)arg1 inRange:(struct _NSRange)arg2 inSelectionRange:(struct _NSRange)arg3 outChangedRange:(struct _NSRange *)arg4 outSelectionRange:(struct _NSRange *)arg5 undoTransaction:(struct TSWPStorageTransaction *)arg6 forceAll:(_Bool)arg7;
- (void)applyChange:(id)arg1 changeRange:(struct _NSRange)arg2 accept:(_Bool)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;
- (_Bool)hasDeletionInRange:(struct _NSRange)arg1;
- (unsigned long long)indexAfterLastVisibleCharInRange:(struct _NSRange)arg1;
- (unsigned long long)indexOfFirstNonDeletedCharInRange:(struct _NSRange)arg1;
- (unsigned long long)indexOfFirstVisibleCharInRange:(struct _NSRange)arg1;
- (unsigned long long)p_indexOfFirstNonDeletedCharInRange:(struct _NSRange)arg1 requireVisible:(_Bool)arg2;
- (_Bool)hasVisibleTextAtCharIndex:(unsigned long long)arg1;
- (_Bool)hasDeletedTextAtCharIndex:(unsigned long long)arg1 range:(struct _NSRange *)arg2;
- (_Bool)hasHiddenTextAtCharIndex:(unsigned long long)arg1 range:(struct _NSRange *)arg2;
- (_Bool)hasHiddenTextAtCharIndex:(unsigned long long)arg1;
- (_Bool)p_hasDeletedTextAtCharIndex:(unsigned long long)arg1 requireHidden:(_Bool)arg2 range:(struct _NSRange *)arg3;
- (id)visibleRangesInRange:(struct _NSRange)arg1;
- (id)hiddenRangesInRange:(struct _NSRange)arg1;
- (id)deletedRangesInRange:(struct _NSRange)arg1;
- (struct TSWPRangeVector)deletedRangeVectorInRange:(struct _NSRange)arg1;
- (id)changeAtCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;
- (id)changeAtCharIndex:(unsigned long long)arg1 attributeKind:(unsigned int)arg2 effectiveRange:(struct _NSRange *)arg3;
- (struct _NSRange)rangeForChange:(id)arg1;
@property(readonly, nonatomic) struct TSWPChangeAttributeArray *deletionChangesTable;
@property(readonly, nonatomic) struct TSWPChangeAttributeArray *insertionChangesTable;
@property(readonly, nonatomic) _Bool hasTrackedChanges;
- (_Bool)hasAttachmentsThatChangeWithPageNumberOrPageCount;
- (_Bool)changesWithPageCount;
@property(nonatomic) CDStruct_0441cfb5 hyperlinkCellID; // @dynamic hyperlinkCellID;
- (void)unstashBroadcaster;
- (void)stashBroadcaster;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(readonly) Class superclass;

@end

