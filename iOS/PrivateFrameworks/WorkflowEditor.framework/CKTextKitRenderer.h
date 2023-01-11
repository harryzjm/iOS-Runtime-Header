//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKTextKitContext, CKTextKitShadower, UITraitCollection;
@protocol CKTextKitTruncating;

@interface CKTextKitRenderer : NSObject
{
    struct CGSize _calculatedSize;
    double _verticalOffset;
    CKTextKitContext *_context;
    id <CKTextKitTruncating> _truncater;
    CKTextKitShadower *_shadower;
    UITraitCollection *_traitCollection;
    struct CGSize _constrainedSize;
    struct CKTextKitAttributes _attributes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) struct CGSize constrainedSize; // @synthesize constrainedSize=_constrainedSize;
@property(readonly, nonatomic) struct CKTextKitAttributes attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) CKTextKitShadower *shadower; // @synthesize shadower=_shadower;
@property(readonly, nonatomic) id <CKTextKitTruncating> truncater; // @synthesize truncater=_truncater;
@property(readonly, nonatomic) CKTextKitContext *context; // @synthesize context=_context;
- (vector_b5e32e34)visibleRanges;
- (unsigned long long)lineCount;
- (void)drawInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2;
- (struct CGSize)size;
- (void)_calculateSize;
- (id)initWithTextKitAttributes:(const struct CKTextKitAttributes *)arg1 constrainedSize:(struct CGSize)arg2;
- (struct CGRect)frameForTextRange:(struct _NSRange)arg1;
- (struct CGRect)trailingRect;
- (void)enumerateTextIndexesAtPosition:(struct CGPoint)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct CGRect)_internalRectForGlyphAtIndex:(unsigned long long)arg1 measureOption:(unsigned long long)arg2 layoutManager:(id)arg3 textContainer:(id)arg4 textStorage:(id)arg5;
- (unsigned long long)nearestTextIndexAtPosition:(struct CGPoint)arg1;
- (id)rectsForTextRange:(struct _NSRange)arg1 measureOption:(unsigned long long)arg2;
- (id)textCheckingResultAtPoint:(struct CGPoint)arg1;

@end
