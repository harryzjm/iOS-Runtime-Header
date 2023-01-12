//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CPShape
{
    long long mcid;
    unsigned int pdfObjectID;
    struct CGPath *path;
    _Bool isUprightRectangle;
    int windingRule;
    double lineWidth;
    double miterLimit;
    int lineCap;
    int lineJoin;
    struct CGColor *fillColor;
    struct CGColor *strokeColor;
    struct CGPDFObject *fillObject;
    struct CGPDFObject *strokeObject;
    struct CGAffineTransform paintTransform;
    _Bool boundsComputed;
    _Bool renderedBoundsComputed;
}

- (unsigned int)pathElementCount;
- (void)makeLineFromVertex:(struct CGPoint)arg1 toVertex:(struct CGPoint)arg2;
- (id)string;
- (void)addShape:(id)arg1;
- (_Bool)canCombineWith:(id)arg1;
- (_Bool)isVisible;
- (_Bool)isStrokeFor:(id)arg1;
- (_Bool)hasSamePathAs:(id)arg1;
- (void)setPaintTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)paintTransform;
- (void)setLineJoin:(int)arg1;
- (int)lineJoin;
- (void)setLineCap:(int)arg1;
- (int)lineCap;
- (void)setMiterLimit:(double)arg1;
- (double)miterLimit;
- (void)setLineWidth:(double)arg1;
- (double)lineWidth;
- (_Bool)hasStroke;
- (void)setStrokeObject:(struct CGPDFObject *)arg1;
- (struct CGPDFObject *)strokeObject;
- (void)setStrokeColor:(struct CGColor *)arg1;
- (struct CGColor *)strokeColor;
- (_Bool)hasFill;
- (void)setFillObject:(struct CGPDFObject *)arg1;
- (struct CGPDFObject *)fillObject;
- (void)setFillColor:(struct CGColor *)arg1;
- (struct CGColor *)fillColor;
- (void)setWindingRule:(int)arg1;
- (int)windingRule;
- (long long)zOrder;
- (void)accept:(id)arg1;
- (id)attributes;
- (_Bool)isUprightRectangle;
- (struct CGRect)innerBounds;
- (void)recomputeRenderedBounds;
- (struct CGRect)renderedBounds;
- (void)setPath:(struct CGPath *)arg1;
- (struct CGPath *)path;
- (void)setPdfObjectID:(unsigned int)arg1;
- (unsigned int)pdfObjectID;
- (long long)mcid;
- (void)recomputeBounds;
- (struct CGRect)bounds;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)init;
- (id)initWithPDFShape:(struct CPPDFShape *)arg1;

@end

