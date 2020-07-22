//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CALayer, NSMutableArray, NSString, UIPDFAnnotationController, UIPDFAnnotationView, UIPDFPage, UIPDFPopupAnnotation, UIPDFSelection;

@interface UIPDFAnnotation : NSObject
{
    struct CGPDFDictionary *_dictionary;
    struct CGColor *_color;
    void *_appearanceStream;
    struct CGPDFString *_pdfContents;
    NSString *_annotationID;
    _Bool _hidden;
    UIPDFAnnotationView *_annotationView;
    UIPDFAnnotationController *_annotationController;
    NSMutableArray *_quadPoints;
    CALayer *_drawingLayer;
    UIPDFSelection *_selection;
    _Bool editable;
    id data;
    NSString *_contents;
    long long _index;
    UIPDFPopupAnnotation *_popup;
    NSString *_associatedAnnotationID;
    UIPDFPage *_page;
    unsigned long long _tag;
}

+ (id)newAnnotationWithPage:(id)arg1 fromArchive:(id)arg2;
@property(nonatomic) unsigned long long tag; // @synthesize tag=_tag;
@property(nonatomic) UIPDFPage *page; // @synthesize page=_page;
@property(retain, nonatomic) CALayer *drawingLayer; // @synthesize drawingLayer=_drawingLayer;
@property(retain, nonatomic) NSString *associatedAnnotationID; // @synthesize associatedAnnotationID=_associatedAnnotationID;
@property(nonatomic) UIPDFPopupAnnotation *popup; // @synthesize popup=_popup;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) id data; // @synthesize data;
@property(nonatomic) _Bool editable; // @synthesize editable;
@property(nonatomic) UIPDFAnnotationController *annotationController; // @synthesize annotationController=_annotationController;
@property(retain, nonatomic) UIPDFAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
@property(nonatomic) UIPDFSelection *selection; // @dynamic selection;
- (id)descriptionHOLD;
- (struct CGRect)popUpAnnotationRect;
- (const char *)pdfContents;
- (_Bool)hasPopUp;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (struct CGColor *)color;
- (void)setColor:(struct CGColor *)arg1;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (struct CGRect)bounds;
- (struct CGRect)frame;
- (struct CGRect)Rect;
- (struct CGRect)rectIn:(struct CGPDFArray *)arg1;
- (_Bool)hidden;
- (id)getImageNamed:(id)arg1 ofType:(id)arg2;
- (id)archive;
- (int)annotationType;
- (Class)viewClass;
- (void)setAnnotationID:(id)arg1;
- (id)annotationID;
- (void)setPageView:(id)arg1;
- (void)dealloc;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1;
- (id)init;
@property(readonly, nonatomic) _Bool recognizeGestures; // @dynamic recognizeGestures;
- (struct CGPath *)newPathFromQuadPoints;
- (void)makeQuadpointsFrom:(id)arg1;
- (id)newSelection;

@end

