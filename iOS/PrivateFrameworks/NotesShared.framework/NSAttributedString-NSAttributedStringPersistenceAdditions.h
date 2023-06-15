//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@class NSArray;

@interface NSAttributedString (NSAttributedStringPersistenceAdditions)
+ (void)enumerateAttachmentsInData:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)ic_attributedStringWithData:(id)arg1 dataPersister:(id)arg2 note:(id)arg3 parentAttachment:(id)arg4 shouldCreateAttachments:(_Bool)arg5 error:(id *)arg6;
+ (id)ic_attributedStringWithData:(id)arg1 dataPersister:(id)arg2 note:(id)arg3 shouldCreateAttachments:(_Bool)arg4 error:(id *)arg5;
+ (id)ic_attributedStringWithData:(id)arg1 dataPersister:(id)arg2 createNewAttachmentsInNote:(id)arg3 forParentAttachment:(id)arg4 error:(id *)arg5;
+ (id)ic_attributedStringWithData:(id)arg1 dataPersister:(id)arg2 createNewAttachmentsInNote:(id)arg3 error:(id *)arg4;
+ (id)ic_attributedStringWithArchive:(const void *)arg1 dataPersister:(id)arg2 note:(id)arg3 parentAttachment:(id)arg4 shouldCreateNewAttachments:(_Bool)arg5 error:(id *)arg6;
+ (id)ic_attributedStringWithArchive:(const void *)arg1 dataPersister:(id)arg2 note:(id)arg3 shouldCreateNewAttachments:(_Bool)arg4 error:(id *)arg5;
- (_Bool)ic_isCopyableSize;
- (unsigned long long)ic_approximateAttachmentsSizeIncludingPreviews:(_Bool)arg1;
- (id)ic_serializeWithFlags:(unsigned long long)arg1 dataPersister:(id)arg2 managedObjectContext:(id)arg3 error:(id *)arg4;
- (_Bool)ic_saveToArchive:(void *)arg1 flags:(unsigned long long)arg2 dataPersister:(id)arg3 managedObjectContext:(id)arg4 error:(id *)arg5;
- (id)ic_searchableStringInContext:(id)arg1;
- (id)ic_attributedStringByFlatteningInlineAttachmentsWithContext:(id)arg1 flattenUnsupportedInlineAttachmentsOnly:(_Bool)arg2 updateRangeValueToObjectMapBlock:(CDUnknownBlockType)arg3 replacementAttributedStringBlock:(CDUnknownBlockType)arg4;
- (id)ic_attributedStringByFlatteningUnsupportedInlineAttachmentsWithContext:(id)arg1;
- (id)ic_attributedStringByFlatteningInlineAttachmentsWithContext:(id)arg1;
- (id)ic_attributedStringByFlatteningInlineAttachmentsWithContext:(id)arg1 flattenUnsupportedInlineattachmentsOnly:(_Bool)arg2;
- (void)ic_enumerateAbstractAttachmentsInContext:(id)arg1 range:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)ic_enumerateInlineAttachmentsInContext:(id)arg1 range:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)ic_enumerateAttachmentsInContext:(id)arg1 range:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)ic_enumerateAttachmentsInContext:(id)arg1 range:(struct _NSRange)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)ic_enumerateAttachmentsInContext:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *edits;
- (id)editsInRange:(struct _NSRange)arg1;
- (void)enumerateEditsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)editAtIndex:(unsigned long long)arg1;
@end

