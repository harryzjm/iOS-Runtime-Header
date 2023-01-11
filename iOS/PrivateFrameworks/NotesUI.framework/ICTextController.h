//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICAttachmentInsertionController, ICNote, NSMutableArray, NSMutableDictionary;

@interface ICTextController
{
    _Bool _userChangedWritingDirection;
    _Bool _disableAddingExtraLinesIfNeeded;
    _Bool _trackAddedExtraNewlineRanges;
    _Bool _alwaysHighlightAuthorEdits;
    _Bool _isConvertingTables;
    _Bool _shouldMergeNoteAfterScrolling;
    _Bool _isAutoListInsertionDisabled;
    ICNote *_note;
    ICAttachmentInsertionController *_attachmentInsertionController;
    NSMutableDictionary *_trackedToDoParagraphs;
    NSMutableArray *_trackedRangesForAddedExtraNewlines;
    unsigned long long _pauseMergeForScrollingCounter;
}

+ (id)attributedStringToPasteWithAdaptedParagraphStyles:(id)arg1 pasteRange:(struct _NSRange)arg2 textStorage:(id)arg3;
+ (void)filterAttachmentsForPrintingInAttributedString:(id)arg1;
+ (double)extraBulletWidthForNumberedListWithMaxItemNumber:(id)arg1 textFont:(struct UIFont *)arg2;
+ (double)indentForStyle:(id)arg1 range:(struct _NSRange)arg2 attributedString:(id)arg3 textView:(struct UITextView *)arg4;
+ (double)extraWidthNeededForStyle:(id)arg1 range:(struct _NSRange)arg2 attributedString:(id)arg3 textView:(struct UITextView *)arg4;
+ (id)removeBeginningListStyleIfNecessaryForAttributedString:(id)arg1 fromTextStorage:(id)arg2 andRange:(struct _NSRange)arg3;
+ (_Bool)shouldRetainFirstListStyleForFilteredAttributedSubstring:(id)arg1 fromRange:(struct _NSRange)arg2;
@property(nonatomic) _Bool isAutoListInsertionDisabled; // @synthesize isAutoListInsertionDisabled=_isAutoListInsertionDisabled;
@property(nonatomic) _Bool shouldMergeNoteAfterScrolling; // @synthesize shouldMergeNoteAfterScrolling=_shouldMergeNoteAfterScrolling;
@property(nonatomic) unsigned long long pauseMergeForScrollingCounter; // @synthesize pauseMergeForScrollingCounter=_pauseMergeForScrollingCounter;
@property(nonatomic) _Bool isConvertingTables; // @synthesize isConvertingTables=_isConvertingTables;
@property(nonatomic) _Bool alwaysHighlightAuthorEdits; // @synthesize alwaysHighlightAuthorEdits=_alwaysHighlightAuthorEdits;
@property(nonatomic) _Bool trackAddedExtraNewlineRanges; // @synthesize trackAddedExtraNewlineRanges=_trackAddedExtraNewlineRanges;
@property(retain, nonatomic) NSMutableArray *trackedRangesForAddedExtraNewlines; // @synthesize trackedRangesForAddedExtraNewlines=_trackedRangesForAddedExtraNewlines;
@property(nonatomic) _Bool disableAddingExtraLinesIfNeeded; // @synthesize disableAddingExtraLinesIfNeeded=_disableAddingExtraLinesIfNeeded;
@property _Bool userChangedWritingDirection; // @synthesize userChangedWritingDirection=_userChangedWritingDirection;
@property(readonly, nonatomic) NSMutableDictionary *trackedToDoParagraphs; // @synthesize trackedToDoParagraphs=_trackedToDoParagraphs;
@property(nonatomic) __weak ICAttachmentInsertionController *attachmentInsertionController; // @synthesize attachmentInsertionController=_attachmentInsertionController;
@property(nonatomic) __weak ICNote *note; // @synthesize note=_note;
- (void).cxx_destruct;
- (id)keyboardLanguageForTextView:(struct UITextView *)arg1;
- (void)fixModelAttributesInTextStorage:(id)arg1 inRange:(struct _NSRange)arg2;
- (struct _NSRange)numberListsInAttributedString:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)uniqueParagraphStylesInTextStorage:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)styleListsAndIndentsInAttributedString:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)updateTrackedToDoParagraphsAfterIndex:(unsigned long long)arg1 byDelta:(long long)arg2 excludingSeenParagraphs:(id)arg3;
- (void)createToDoItemForCharacterRange:(struct _NSRange)arg1 paragraphStyle:(id)arg2 textStorage:(id)arg3;
- (void)resetTrackedToDoParagraphs;
- (void)updateTrackedAttributesInTextStorage:(id)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (struct _NSRange)addExtraLinesIfNeededToTextStorage:(id)arg1 editedRange:(struct _NSRange)arg2 actualLengthIncrease:(long long *)arg3;
- (void)trackExtraNewLineRangeIfNecessary:(struct _NSRange)arg1;
- (void)setNote:(id)arg1 stylingTextUsingSeparateTextStorageForRendering:(_Bool)arg2 withLayoutManager:(id)arg3;
- (void)refreshTextStylingForTextStorage:(id)arg1 withTextController:(id)arg2;
- (_Bool)removeListStyleForDeletingEmptyParagrahIfNecessaryForTextView:(struct UITextView *)arg1 textStorage:(id)arg2 paragraphRange:(struct _NSRange)arg3 andLocation:(unsigned long long)arg4;
- (_Bool)deleteWordBackwardForSpecialCasesInTextView:(struct UITextView *)arg1;
- (_Bool)removeListStyleBeforeDeletingParagraphContentIfNecessaryForTextView:(struct UITextView *)arg1 textStorage:(id)arg2 rangeToBeDeleted:(struct _NSRange)arg3 blockBeforeEndEditing:(CDUnknownBlockType)arg4;
- (_Bool)deleteBackwardForSpecialCasesInTextView:(struct UITextView *)arg1;
- (void)setParagraphWritingDirectionInRange:(struct _NSRange)arg1 toDirection:(long long)arg2 inTextView:(struct UITextView *)arg3;
- (void)insertedText:(id)arg1 replacementRange:(struct _NSRange)arg2 inTextView:(struct UITextView *)arg3;
- (_Bool)insertedSpaceInTextView:(struct UITextView *)arg1 replacementRange:(struct _NSRange)arg2;
- (_Bool)insertNewlineForSpecialCasesInTextView:(struct UITextView *)arg1;
- (void)insertNewlineAtCharacterIndex:(unsigned long long)arg1 textStorage:(id)arg2;
- (struct _NSRange)cleanupTextStorage:(id)arg1 afterProcessingEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4 changeInLengthAfterCleanup:(long long *)arg5;
- (void)updateAttachmentsSelectionStateInTextStorage:(id)arg1 forSelectedRanges:(id)arg2 layoutManager:(id)arg3;
- (void)updateAttachmentsInNote;
- (void)updateTrackingInTextStorage:(id)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (void)fixTextStorage:(id)arg1 afterProcessingEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (id)nsParagraphStyleForTTParagraphStyle:(id)arg1 range:(struct _NSRange)arg2 attributedString:(id)arg3 textView:(struct UITextView *)arg4;
- (_Bool)isHighlightingTextInTextStorage:(id)arg1;
- (void)applyAuthorHighlightsWithPercentage:(double)arg1 forRange:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (void)setHighlightAuthorEdits:(_Bool)arg1 forRange:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (void)fadeTextHighlightInTextStorage:(id)arg1;
- (void)highlightTextAfter:(id)arg1 inTextStorage:(id)arg2;
- (id)rangesWithCutOutAttachmentsFromRange:(struct _NSRange)arg1 textStorage:(id)arg2;
- (void)unscriptRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;
- (void)superscriptDelta:(long long)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (void)superscriptUpdate:(CDUnknownBlockType)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (struct UIFont *)scaleFont:(struct UIFont *)arg1 withScale:(double)arg2;
- (void)scaleFontPointSize:(double)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (_Bool)isTodoDoneRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;
- (void)refreshTypingAttributesForTextView:(struct UITextView *)arg1 textStorage:(id)arg2;
- (void)refreshTypingAttributesForAllTextViewsOfTextStorage:(id)arg1;
- (void)setDone:(_Bool)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (void)setTypingTextStyle:(unsigned int)arg1 textView:(struct UITextView *)arg2;
- (void)setTypingAttributesForUndo:(id)arg1;
- (long long)setTextStyle:(unsigned int)arg1 removeExtraStyling:(_Bool)arg2 range:(struct _NSRange)arg3 inTextStorage:(id)arg4 inTextView:(struct UITextView *)arg5;
- (long long)setTextStyle:(unsigned int)arg1 removeExtraStyling:(_Bool)arg2 range:(struct _NSRange)arg3 inTextStorage:(id)arg4;
- (void)updateParagraphWritingDirectionToKeyboardWritingDirectionInRange:(struct _NSRange)arg1 textStorage:(id)arg2 textView:(struct UITextView *)arg3;
- (void)removeFontsAndColorsForRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;
- (_Bool)containsOnlyStyle:(unsigned int)arg1 inRange:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (long long)setTextStyle:(unsigned int)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3 inTextView:(struct UITextView *)arg4;
- (long long)setTextStyle:(unsigned int)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3;
- (_Bool)canChangeStyleForSelectedRanges:(id)arg1 inTextStorage:(id)arg2;
- (struct _NSRange)firstParagraphForSetListStyleRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;
- (id)todoForRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;
- (void)indentRange:(struct _NSRange)arg1 byAmount:(long long)arg2 inTextStorage:(id)arg3 textView:(struct UITextView *)arg4;
- (id)indentParagraphStyle:(id)arg1 byAmount:(long long)arg2;
- (_Bool)canIndentTextView:(struct UITextView *)arg1 byDelta:(long long)arg2;
- (_Bool)attachmentsExistInRange:(struct _NSRange)arg1 textStorage:(id)arg2;
- (long long)writingDirectionForRange:(struct _NSRange)arg1 inTextView:(struct UITextView *)arg2 inTextStorage:(id)arg3;
- (unsigned int)paragraphStyleForRange:(struct _NSRange)arg1 inTextView:(struct UITextView *)arg2 inTextStorage:(id)arg3;
- (unsigned int)paragraphStyleForRange:(struct _NSRange)arg1 inTextView:(struct UITextView *)arg2 inTextStorage:(id)arg3 ignoreTypingAttributes:(_Bool)arg4;
- (void)dealloc;
- (id)init;
- (void)updateCellInTable:(id)arg1 atColumnIndex:(unsigned long long)arg2 rowIndex:(unsigned long long)arg3 fromAttributedString:(id)arg4 andTextTableBlock:(id)arg5 filterPastedAttributes:(_Bool)arg6 isReadingSelectionFromPasteboard:(_Bool)arg7;
- (CDStruct_4bcfbbae)p_setCellsInTable:(id)arg1 fromAttributedString:(id)arg2 textTable:(id)arg3 atCellOffset:(CDStruct_4bcfbbae)arg4 filterPastedAttributes:(_Bool)arg5 isReadingSelectionFromPasteboard:(_Bool)arg6;
- (void)p_populateTable:(id)arg1 withNSTextTable:(id)arg2 attributedString:(id)arg3 filterPastedAttributes:(_Bool)arg4 isReadingSelectionFromPasteboard:(_Bool)arg5;
- (id)addTableAttachmentWithNSTextTable:(id)arg1 attributedString:(id)arg2 filterPastedAttributes:(_Bool)arg3 isReadingSelectionFromPasteboard:(_Bool)arg4;
- (void)workAroundSageTables:(id)arg1;
- (void)convertNSTablesToICTables:(id)arg1 pasteboardTypes:(id)arg2 filterPastedAttributes:(_Bool)arg3 isReadingSelectionFromPasteboard:(_Bool)arg4;

@end

