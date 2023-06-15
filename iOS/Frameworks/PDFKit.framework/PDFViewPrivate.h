//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, PDFAnnotation, PDFCoachMarkManager, PDFDocument, PDFDocumentViewController, PDFPage, PDFPasswordViewController, PDFRenderingProperties, PDFScrollView, PDFSelection, PDFTimer, PDFViewController, PDFViewLayout, UIDragInteraction, UIFindInteraction, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol OS_dispatch_queue, PDFViewDelegate;

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
    _Bool delegateRespondsToAllowFormFilling;
    _Bool delegateRespondsToAllowFormFillingWithAutoFill;
    _Bool delegateRespondsToAllowFormFillingWithConfidence;
    double gutterWide;
    _Bool displaysPageBreaks;
    struct UIEdgeInsets pageBreakMargins;
    struct UIEdgeInsets documentMargins;
    long long displayMode;
    long long displayDirection;
    PDFViewLayout *viewLayout;
    _Bool displaysAsBook;
    _Bool displaysRTL;
    PDFRenderingProperties *renderingProperties;
    unsigned long long lastVerticalScrollDirection;
    unsigned long long lastHorizontalScrollDirection;
    _Bool displaysBookmarksForPages;
    unsigned long long firstVisiblePage;
    unsigned long long lastVisiblePage;
    _Bool inhibitAutoScroll;
    PDFPage *fromPage;
    PDFPage *toPage;
    PDFTimer *pageSyncTimer;
    NSObject<OS_dispatch_queue> *pagePreloadQueue;
    NSMutableArray *destinationHistory;
    long long historyIndex;
    NSArray *highlights;
    PDFCoachMarkManager *coachMarkManager;
    PDFPasswordViewController *passwordViewController;
    PDFAnnotation *annotationOver;
    _Bool showsScrollIndicators;
    _Bool dataDetectorsEnabled;
    _Bool debugDrawCGPDFNodeLayer[11];
    _Bool wantsForceUpdate;
    double blockingWaitDuration;
    unsigned long long activeMarkupStyle;
    _Bool inFormFillingMode;
    _Bool formFillingUpdatesAnnotationOnEveryTextChange;
    _Bool allowsMarkupAnnotationEditing;
    _Bool allowsUndo;
    _Bool textSelectionEnabled;
    UILongPressGestureRecognizer *longPressGestureRecognizer;
    UITapGestureRecognizer *tapGestureRecognizer;
    UITapGestureRecognizer *doubleTapGestureRecognizer;
    _Bool isUsingPageViewController;
    PDFDocumentViewController *documentViewController;
    NSDictionary *pageViewControllerOptions;
    UIDragInteraction *dragInteraction;
    UIFindInteraction *findInteraction;
    struct UIEdgeInsets savedSafeAreaInsets;
    double horizontalScaleFactorBeforeRotation;
    struct CGPoint documentViewCenterBeforeRotation;
    struct CGRect extensionViewBoundsInDocument;
    struct CGRect extensionViewFrame;
    double extensionViewZoomScale;
    PDFTimer *tilesSyncTimer;
}

- (void).cxx_destruct;

@end

