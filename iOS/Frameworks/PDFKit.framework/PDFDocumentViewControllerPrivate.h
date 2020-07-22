//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDFDocument, PDFPageBackgroundManager, PDFPageViewController, PDFRenderingProperties, PDFView, UIScrollView;

__attribute__((visibility("hidden")))
@interface PDFDocumentViewControllerPrivate : NSObject
{
    PDFView *pdfView;
    PDFDocument *document;
    PDFRenderingProperties *renderingProperties;
    PDFPageViewController *activePageView;
    PDFPageBackgroundManager *pageBackgroundManager;
    double minScale;
    double maxScale;
    _Bool displaysRTL;
    UIScrollView *scrollView;
    _Bool showTextSelectionHandles;
}

- (void).cxx_destruct;

@end
