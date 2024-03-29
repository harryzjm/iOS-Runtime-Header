//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPDFAnnotation.h"

__attribute__((visibility("hidden")))
@interface UIPDFSquareOrCircleAnnotation : UIPDFAnnotation
{
    double _W;
    unsigned short _S;
    struct CGPDFArray *_D;
    double _SE;
    double _I;
}

- (void)drawInContext:(struct CGContext *)arg1;
- (void)strokePath:(struct CGContext *)arg1 inRect:(struct CGRect)arg2;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1;

@end

