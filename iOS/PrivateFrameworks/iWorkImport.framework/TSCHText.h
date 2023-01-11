//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCHText : NSObject
{
    Class _tswpTextClass;
    _Bool _textColorShouldBeBlack;
}

+ (_Bool)shouldLayoutTextForWrapWidth:(double)arg1 textLayoutProperties:(id)arg2;
+ (struct TSCHTextLayoutResults)initializeTextLayoutResults;
+ (void)clearCachesForDocumentRoot:(id)arg1;
+ (id)sharedInteriorWrappingText;
+ (id)sharedText;
@property(nonatomic) _Bool textColorShouldBeBlack; // @synthesize textColorShouldBeBlack=_textColorShouldBeBlack;
- (struct TSCHTextLayoutResults)textLayoutResultsForColumn:(id)arg1;
- (const struct __CTFont *)retainedCTFontForParagraphStyle:(id)arg1;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 viewScale:(double)arg4;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 range:(struct _NSRange)arg4 viewScale:(double)arg5;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 atPosition:(struct CGPoint)arg4 viewScale:(double)arg5;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 wrapWidth:(double)arg4 atPosition:(struct CGPoint)arg5 viewScale:(double)arg6 layoutProperties:(id)arg7 outTextLayoutResults:(struct TSCHTextLayoutResults *)arg8;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 wrapWidth:(double)arg4 atPosition:(struct CGPoint)arg5 viewScale:(double)arg6 layoutProperties:(id)arg7;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 wrapWidth:(double)arg4 atPosition:(struct CGPoint)arg5 viewScale:(double)arg6;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 atPosition:(struct CGPoint)arg4 range:(struct _NSRange)arg5 viewScale:(double)arg6;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 wrapWidth:(double)arg4 atPosition:(struct CGPoint)arg5 range:(struct _NSRange)arg6 viewScale:(double)arg7 layoutProperties:(id)arg8 outTextLayoutResults:(struct TSCHTextLayoutResults *)arg9;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 wrapWidth:(double)arg4 atPosition:(struct CGPoint)arg5 range:(struct _NSRange)arg6 viewScale:(double)arg7 layoutProperties:(id)arg8;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 wrapWidth:(double)arg4 atPosition:(struct CGPoint)arg5 range:(struct _NSRange)arg6 viewScale:(double)arg7;
- (void)drawAttributedString:(const struct __CFAttributedString *)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 atPosition:(struct CGPoint)arg4 range:(struct _NSRange)arg5 viewScale:(double)arg6;
- (struct CGRect)frameForRange:(struct _NSRange)arg1 inText:(id)arg2 paragraphStyle:(id)arg3 outErasableFrame:(struct CGRect *)arg4;
- (struct CGRect)frameForRange:(struct _NSRange)arg1 inText:(id)arg2 paragraphStyle:(id)arg3;
- (struct CGRect)frameForRange:(struct _NSRange)arg1 inText:(id)arg2 paragraphStyle:(id)arg3 wrapWidth:(double)arg4 outErasableFrame:(struct CGRect *)arg5 layoutProperties:(id)arg6;
- (struct CGRect)frameForRange:(struct _NSRange)arg1 inText:(id)arg2 paragraphStyle:(id)arg3 wrapWidth:(double)arg4 outErasableFrame:(struct CGRect *)arg5;
- (struct CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 outErasableFrame:(struct CGRect *)arg3;
- (struct CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2;
- (struct CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(double)arg3;
- (struct CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(double)arg3 layoutProperties:(id)arg4;
- (struct CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(double)arg3 outErasableFrame:(struct CGRect *)arg4 checkNumberTemplates:(_Bool)arg5 layoutProperties:(id)arg6 outTextLayoutResults:(struct TSCHTextLayoutResults *)arg7;
- (struct CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(double)arg3 outErasableFrame:(struct CGRect *)arg4 layoutProperties:(id)arg5 outTextLayoutResults:(struct TSCHTextLayoutResults *)arg6;
- (struct CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(double)arg3 outErasableFrame:(struct CGRect *)arg4 checkNumberTemplates:(_Bool)arg5;
- (struct CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(double)arg3 outErasableFrame:(struct CGRect *)arg4;
- (struct CGSize)measureAttributedString:(const struct __CFAttributedString *)arg1 paragraphStyle:(id)arg2 outErasableFrame:(struct CGRect *)arg3;
- (id)p_textCacheForParagraphStyle:(id)arg1;
- (id)p_wpStorageForAttributedString:(const struct __CFAttributedString *)arg1 paragraphStyle:(id)arg2;
- (struct CGSize)p_sizeForNumberTemplate:(id)arg1 paragraphStyle:(id)arg2 textCache:(id)arg3 layoutProperties:(id)arg4;
- (_Bool)p_styleSupportsEqualDigits:(id)arg1 textCache:(id)arg2;
- (id)p_wpColumnForText:(id)arg1 paragraphStyle:(id)arg2 textBlack:(_Bool)arg3 wrapWidth:(double)arg4 textCache:(id)arg5 layoutProperties:(id)arg6;
- (id)p_newWPColumnForText:(id)arg1 wpTextObject:(id)arg2 wrapWidth:(double)arg3 layoutProperties:(id)arg4;
- (id)p_wpTextForParagraphStyle:(id)arg1 text:(id)arg2 textBlack:(_Bool)arg3 textCache:(id)arg4 cacheKey:(id)arg5;
- (id)p_wpTextForParagraphStyle:(id)arg1 text:(id)arg2 textBlack:(_Bool)arg3 textCache:(id)arg4;
- (id)initWithTSWPTextClass:(Class)arg1;

@end

