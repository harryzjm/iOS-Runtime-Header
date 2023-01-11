//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, NSMutableArray, PDFAnnotation, PDFPage, PDFPageLayer, PDFPageLayerEffect, PDFRenderingProperties, UIImage, UITextView, UIView;
@protocol PDFPageLayerGeometryInterface;

__attribute__((visibility("hidden")))
@interface PDFPageViewPrivate : NSObject
{
    NSObject<PDFPageLayerGeometryInterface> *geometryInterface;
    PDFRenderingProperties *renderingProperties;
    PDFPage *page;
    PDFPageLayer *pageLayer;
    PDFPageLayerEffect *searchLayer;
    PDFPageLayerEffect *selectionLayer;
    NSMutableArray *pageAnnotationEffects;
    PDFAnnotation *activeWidgetAnnotation;
    UIView *activeWidgetControl;
    NSMutableArray *pageSignatures;
    CALayer *backgroundLayer;
    UIImage *backgroundImage;
    int backgroundQuality;
    unsigned long long visibilityDelegateIndex;
    _Bool isPerformingUndo;
    CALayer *bookmarkLayer;
    struct CGSize bookmarkSize;
    UITextView *activeTextView;
}

- (void).cxx_destruct;

@end

