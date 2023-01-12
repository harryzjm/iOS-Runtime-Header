//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PDFAnnotationPointerTrackingView, PDFDocument, PDFDocumentContentView, PDFPageBackgroundManager, PDFRenderingProperties, PDFView;

__attribute__((visibility("hidden")))
@interface PDFDocumentViewPrivate : NSObject
{
    PDFView *pdfView;
    PDFDocument *document;
    PDFRenderingProperties *renderingProperties;
    struct CGSize documentViewSize;
    PDFDocumentContentView *contentView;
    NSMutableDictionary *pageViews;
    NSMutableDictionary *pageFrames;
    PDFPageBackgroundManager *pageBackgroundManager;
    _Bool ignoreChangedBoundsForBoxNotification;
    PDFAnnotationPointerTrackingView *pointerTrackingView;
}

- (void).cxx_destruct;

@end

