//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICNote.h>

@class ICCollaborationColorManager, ICTTTextContentStorage, ICTTTextStorage, NSArray, NSString, PKInk;

@interface ICNote (HTML)
+ (id)hexStringForColor:(id)arg1;
+ (_Bool)isDefaultColor:(id)arg1;
+ (id)tagDictionariesForAttributes:(id)arg1 attachmentConversionHandler:(CDUnknownBlockType)arg2;
+ (id)tagDictionaryForWrapperAroundParagraphStyle:(id)arg1;
+ (id)htmlStringFromAttributedString:(id)arg1 attachmentConversionHandler:(CDUnknownBlockType)arg2;
+ (void)fixTextColorsInAttributedString:(id)arg1;
+ (void)fixFontsInAttributedString:(id)arg1;
+ (void)fixUnwantedCharactersInAttributedString:(id)arg1;
+ (void)fixDashedListsInAttributedString:(id)arg1;
+ (id)htmlStringByFixingDashedListsInHTMLString:(id)arg1;
+ (id)mutableAttributedStringFromHTMLString:(id)arg1 readerDelegate:(id)arg2;
+ (id)mutableAttributedStringFromHTMLString:(id)arg1 baseURL:(id)arg2;
+ (id)htmlObjectAttributesForAttachmentWithContentID:(id)arg1;
+ (id)attributedStringFromHTMLString:(id)arg1 baseURL:(id)arg2 readerDelegate:(id)arg3;
+ (id)attributedStringFromHTMLString:(id)arg1 readerDelegate:(id)arg2;
+ (id)attributedStringFromHTMLString:(id)arg1;
+ (id)lockedNavigationBarIcon;
+ (id)defaultNavigationBarIcon;
+ (void)removeUsageOfHashtag:(id)arg1;
+ (id)thumbnailImageForAttachment:(id)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 appearanceType:(unsigned long long)arg4 requireAppearance:(_Bool)arg5 imageScaling:(unsigned long long *)arg6 showAsFileIcon:(_Bool *)arg7 isMovie:(_Bool *)arg8 movieDuration:(CDStruct_198678f7 *)arg9;
+ (void)redactNote:(id)arg1;
+ (id)duplicateNote:(id)arg1 intoFolder:(id)arg2 isPasswordProtected:(_Bool)arg3 removeOriginalNote:(_Bool)arg4;
+ (id)duplicateNote:(id)arg1 isPasswordProtected:(_Bool)arg2 removeOriginalNote:(_Bool)arg3;
+ (id)newNoteWithString:(id)arg1 inFolder:(id)arg2 error:(id *)arg3;
+ (id)newNoteWithAttributedString:(id)arg1 inFolder:(id)arg2 error:(id *)arg3;
+ (void)createNoteForAirDropDocument:(id)arg1 legacyContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)htmlStringWithHTMLAttachments;
- (id)htmlStringWithAttachmentConversionHandler:(CDUnknownBlockType)arg1;
- (id)htmlStringWithAttachments:(_Bool)arg1;
- (id)htmlString;
- (id)searchableItemViewAttributeSet;
- (unsigned long long)ic_characterCountIncludingSpaces:(_Bool)arg1;
- (unsigned long long)ic_wordCount;
- (unsigned long long)ic_lineCount;
- (id)navigationBarIconWithSize:(struct CGSize)arg1;
@property(readonly, copy, nonatomic) NSString *folderSystemImageName;
- (_Bool)isHashtagRowAtRange:(struct _NSRange)arg1 outRangeForAppending:(struct _NSRange *)arg2 outIndex:(long long *)arg3 forHashtagAttachment:(id)arg4 outHashtagCount:(long long *)arg5;
- (_Bool)removeHashtag:(id)arg1;
- (id)addHashtagToNoteBody:(id)arg1 onlyIfMissing:(_Bool)arg2;
- (id)addHashtagToNoteBodyIfMissing:(id)arg1;
- (id)firstAttachmentInTextStorage;
- (void)updatePKDrawingsWithHandwritingRecognitionEnabled:(_Bool)arg1;
@property(nonatomic, getter=isHandwritingRecognitionEnabled) _Bool handwritingRecognitionEnabled;
@property(copy, nonatomic) PKInk *selectedInk;
- (id)checklistStyleAccessibilityDescriptionForRange:(struct _NSRange)arg1;
- (void)announceAccessibilitySelectionChangedByMerge;
- (void)announceAccessibilitySelectionChangedByMergeWithSavedSelections:(id)arg1 beforeMergeTimestamp:(id)arg2;
- (void)notifyTextViewsNoteDidMerge;
- (void)notifyTextViewsNoteWillMerge;
- (void)markBlockAndInlineAttachmentsForDeletion:(_Bool)arg1 inAttributedString:(id)arg2;
- (void)textStorageDidChange:(id)arg1;
- (void)textStorageWillChange:(id)arg1;
- (void)textStorageDidPerformUndo:(id)arg1;
- (void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (void)filterAttachmentsInTextStorage:(id)arg1 range:(struct _NSRange)arg2;
- (void)createMissingAttachmentsInTextStorage;
@property(nonatomic) _Bool isDrawingStroke;
- (void)updateModificationDateAndChangeCountAndSaveImmediately;
- (void)updateModificationDateAndChangeCountAndSaveAfterDelay;
- (void)updateModificationDateAndChangeCount;
- (void)saveAfterDelay;
- (void)save;
- (_Bool)copyValuesToNote:(id)arg1;
- (void)fetchThumbnailImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 cache:(id)arg3 appearanceInfo:(id)arg4 cacheKey:(id)arg5 processingBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)thumbnailImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 appearanceType:(unsigned long long)arg3 requireAppearance:(_Bool)arg4 imageScaling:(unsigned long long *)arg5 showAsFileIcon:(_Bool *)arg6 isMovie:(_Bool *)arg7 movieDuration:(CDStruct_198678f7 *)arg8 attachment:(id *)arg9;
- (id)thumbnailImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 appearanceType:(unsigned long long)arg3 requireAppearance:(_Bool)arg4 imageScaling:(unsigned long long *)arg5 showAsFileIcon:(_Bool *)arg6 isMovie:(_Bool *)arg7 movieDuration:(CDStruct_198678f7 *)arg8;
- (_Bool)updateThumbnailAttachmentIdentifier;
- (id)attachmentFromRemoteFileWrapper:(id)arg1;
- (id)attachmentFromLegacyAttachmentFileWrapper:(id)arg1;
- (id)attachmentFromStandardFileWrapper:(id)arg1;
- (id)attachmentFromSystemPaperAttachment:(id)arg1;
- (id)attachmentFromInlineDrawingAttachment:(id)arg1;
- (id)attachmentFromTableData:(id)arg1;
- (id)attachmentFromObject:(id)arg1 createIfNecessary:(_Bool)arg2;
- (void)_updateTextViewToPaperIfNecessary;
- (void)redactAuthorAttributionsToCurrentUser;
@property(readonly, nonatomic) unsigned long long preventLockReason;
- (id)attributedStringForUTI:(id)arg1 inRange:(struct _NSRange)arg2;
- (_Bool)appendAttributedString:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)appendAttributedString:(id)arg1 error:(id *)arg2;
- (id)attachmentActivityItemsForSharingForRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) NSArray *attachmentActivityItemsForSharing;
- (id)airDropActivityItemSource;
- (id)noteActivityItemsForSharingWithNoteExporter:(id)arg1;
@property(readonly, nonatomic) long long primaryWritingDirection;
- (id)uiAttributedString;
@property(readonly, nonatomic) ICTTTextStorage *textStorageWithoutCreating;
@property(readonly, nonatomic) ICTTTextStorage *textStorage;
- (id)textContentStorageCreateIfNeeded;
@property(readonly, nonatomic) ICTTTextContentStorage *textContentStorage;
- (_Bool)hasMentionForParticipant:(id)arg1;
@property(readonly, nonatomic) _Bool ic_hasLightBackground;
@property(readonly, retain, nonatomic) ICCollaborationColorManager *collaborationColorManager;
- (void)noteDidMergeNoteDocumentWithUserInfo:(id)arg1;
- (id)rangesModifiedAfterTimestamp:(id)arg1 inTextStorage:(id)arg2;
- (void)noteWillMergeDocumentWithUserInfo:(id)arg1;
- (void)noteDidReplaceDocument;
- (void)noteDidSaveAndClearDecryptedData;
- (void)noteWillReleaseTextStorage;
- (_Bool)shouldReleaseTextStorageWhenTurningIntoFault;
- (void)noteWillTurnIntoFault;
@property(nonatomic) _Bool isFastSyncSessionActive;
- (id)dataForTypeIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

