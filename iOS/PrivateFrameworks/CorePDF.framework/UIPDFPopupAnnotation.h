//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIPDFAnnotation;

@interface UIPDFPopupAnnotation
{
    UIPDFAnnotation *parent;
    struct CGRect _adjustedBounds;
}

@property(nonatomic) struct CGRect adjustedBounds; // @synthesize adjustedBounds=_adjustedBounds;
@property(nonatomic) UIPDFAnnotation *parent; // @synthesize parent;
- (_Bool)recognizeGestures;
- (int)annotationType;
- (struct CGRect)bounds;
- (Class)viewClass;
- (id)init;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1;

@end
