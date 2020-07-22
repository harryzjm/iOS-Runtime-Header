//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (NSAttributedStringUIFoundationAdditions)
+ (id)_documentTypeForFileType:(id)arg1;
- (long long)itemNumberInTextList:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange)rangeOfTextList:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)_atEndOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)_atStartOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange)_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange)_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2 completeRow:(_Bool *)arg3;
- (_Bool)_atEndOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)_atStartOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange)rangeOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange)rangeOfTextBlock:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)rulerAttributesInRange:(struct _NSRange)arg1;
- (id)fontAttributesInRange:(struct _NSRange)arg1;
- (id)initWithHTML:(id)arg1 baseURL:(id)arg2 documentAttributes:(id *)arg3;
- (id)initWithHTML:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithHTML:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (id)initWithPath:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithURL:(id)arg1 documentAttributes:(id *)arg2;
- (id)_initWithURLFunnel:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (id)initWithFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (id)initWithURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (id)initWithDocFormat:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithRTFDFileWrapper:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithRTFD:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithRTF:(id)arg1 documentAttributes:(id *)arg2;
- (id)_initWithRTFSelector:(SEL)arg1 argument:(id)arg2 documentAttributes:(id *)arg3;
- (id)initWithData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (id)_documentFromRange:(struct _NSRange)arg1 document:(id)arg2 documentAttributes:(id)arg3 subresources:(id *)arg4;
- (id)_htmlDocumentFragmentString:(struct _NSRange)arg1 documentAttributes:(id)arg2 subresources:(id *)arg3;
- (id)docFormatFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;
- (id)RTFDFileWrapperFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;
- (id)RTFDFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;
- (id)RTFFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;
- (id)fileWrapperFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2 error:(id *)arg3;
- (id)dataFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2 error:(id *)arg3;
- (id)stringByStrippingAttachmentCharactersAndConvertingWritingDirectionToBidiControlCharactersFromRange:(struct _NSRange)arg1;
- (_Bool)containsAttachments;
- (_Bool)containsAttachmentsInRange:(struct _NSRange)arg1;
- (unsigned long long)nextWordFromIndex:(unsigned long long)arg1 forward:(_Bool)arg2;
- (unsigned long long)lineBreakByHyphenatingBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange)arg2;
- (unsigned long long)lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange)arg2;
- (unsigned long long)_lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange)arg2 usesAlternativeBreaker:(_Bool)arg3;
- (struct _NSRange)doubleClickAtIndex:(unsigned long long)arg1 inRange:(struct _NSRange)arg2;
- (struct _NSRange)doubleClickAtIndex:(unsigned long long)arg1;
- (id)defaultLanguage;
- (_Bool)_isStringDrawingTextStorage;
@end
