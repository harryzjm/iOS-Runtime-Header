//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, PDFAKOverlayAdaptor, PDFAnnotation, PDFCoachMarkManager, PDFDocument, PDFDocumentViewController, PDFPage, PDFPanGestureRecognizer, PDFPasswordViewController, PDFRenderingProperties, PDFScrollView, PDFSelection, PDFTimer, PDFViewController, PDFViewLayout, UIDragInteraction, UILongPressGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer;
@protocol PDFViewDelegate, PDFViewPopupManager;

__attribute__((visibility("hidden")))
@interface PDFViewPrivate : NSObject
{
    PDFDocument *document;
    PDFScrollView *scrollView;
    PDFViewController *controller;
    PDFSelection *currentSelection;
    _Bool autoScale;
    _Bool scaling;
    double zoomIncrement;
    id <PDFViewDelegate> delegate;
    _Bool delegateWillScale;
    _Bool delegateOrdersPageDrawing;
    double gutterWide;
    _Bool displaysPageBreaks;
    struct UIEdgeInsets pageBreakMargins;
    long long displayMode;
    long long displayDirection;
    PDFViewLayout *viewLayout;
    _Bool scrollingChangesPages;
    _Bool displaysAsBook;
    _Bool displaysRTL;
    PDFRenderingProperties *renderingProperties;
    unsigned long long lastVerticalScrollDirection;
    unsigned long long lastHorizontalScrollDirection;
    _Bool displaysBookmarksForPages;
    unsigned long long scrollEntry;
    unsigned long long currentPageIndex;
    unsigned long long firstVisiblePage;
    unsigned long long lastVisiblePage;
    _Bool inhibitAutoScroll;
    PDFPage *fromPage;
    PDFTimer *pageSyncTimer;
    NSMutableArray *destinationHistory;
    long long historyIndex;
    NSArray *highlights;
    PDFCoachMarkManager *coachMarkManager;
    PDFPasswordViewController *passwordViewController;
    NSObject<PDFViewPopupManager> *popupManager;
    PDFAnnotation *currentTextWidget;
    PDFAKOverlayAdaptor *akOverlayAdaptor;
    _Bool enableSelectionDrawing;
    _Bool showsScrollIndicators;
    _Bool debugDrawCGPDFNodeLayer[11];
    _Bool wantsForceUpdate;
    double blockingWaitDuration;
    UILongPressGestureRecognizer *longPressGestureRecognizer;
    PDFPanGestureRecognizer *panGestureRecognizer;
    UITapGestureRecognizer *tapGestureRecognizer;
    UISwipeGestureRecognizer *swipeGestureRecognizer;
    _Bool needsRotationZoomFix;
    PDFDocumentViewController *documentViewController;
    _Bool isUsingPageViewController;
    NSDictionary *pageViewControllerOptions;
    UIDragInteraction *dragInteraction;
}

- (void).cxx_destruct;

@end
