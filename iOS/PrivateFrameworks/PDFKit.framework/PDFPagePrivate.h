//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, PDFAKPageAdaptor, PDFDocument, PDFView, UIImage;

__attribute__((visibility("hidden")))
@interface PDFPagePrivate : NSObject
{
    PDFDocument *document;
    struct CGPDFPage *page;
    struct CGColor *pageBackgroundColorHint;
    PDFView *view;
    NSString *label;
    UIImage *image;
    struct CGImage *cgImage;
    struct CGImageSource *cgImageSource;
    unsigned int cgImageOrientation;
    struct os_unfair_lock_s layoutLock;
    struct CGPDFLayout *layout;
    _Atomic _Bool builtLayout;
    struct os_unfair_lock_s dataDetectorsLock;
    _Bool ranDataDetectors;
    NSString *text;
    NSAttributedString *attributedString;
    _Bool displaysAnnotations;
    _Bool displaysMarkups;
    NSMutableArray *annotations;
    _Atomic _Bool loadedAnnotations;
    NSLock *lock_getAnnotations;
    NSLock *lock_accessAnnotations;
    NSMutableArray *scannedAnnotations;
    long long rotation;
    struct CGRect mediaBox;
    struct CGRect cropBox;
    struct CGRect bleedBox;
    struct CGRect trimBox;
    struct CGRect artBox;
    struct CGDisplayList *displayList;
    _Bool creatingDisplayList;
    struct os_unfair_lock_s displayListCreationLock;
    _Bool bookmarked;
    _Bool isFullyConstructed;
    _Bool colorWidgetBackgrounds;
    PDFAKPageAdaptor *akPageAdaptor;
    _Bool akDidSetupRealPageModelController;
    NSMutableArray *annotationChanges;
    NSMutableSet *changedAnnotations;
    NSMutableDictionary *widgetAnnotationLookup;
    NSMutableArray *scannerResults;
    _Bool didChangeBounds;
}

- (void).cxx_destruct;

@end
