//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableIndexSet, PDFDocument, PDFView;
@protocol PDFPageOverlayViewProvider;

__attribute__((visibility("hidden")))
@interface PDFOverlayViewsController : NSObject
{
    NSMapTable *_pageToOverlayMap;
    _Bool _isTornDown;
    NSMutableIndexSet *_observedPageIndices;
    PDFView *_pdfView;
    PDFDocument *_pdfDocument;
    id <PDFPageOverlayViewProvider> _viewProvider;
}

+ (id)instanceForPlatformWithPDFView:(id)arg1;
- (void).cxx_destruct;
@property __weak id <PDFPageOverlayViewProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property __weak PDFDocument *pdfDocument; // @synthesize pdfDocument=_pdfDocument;
@property __weak PDFView *pdfView; // @synthesize pdfView=_pdfView;
- (void)_pageRotationChanged:(id)arg1;
- (void)_teardownRotationNotificationObservationForPageAtIndex:(unsigned long long)arg1;
- (void)_setupRotationNotificationObservationForPageAtIndex:(unsigned long long)arg1;
- (void)_teardownGestureRecognizersForView:(id)arg1 andDocument:(id)arg2;
- (void)_setupGestureRecognizersForView:(id)arg1 andDocument:(id)arg2;
- (void)_uninstallAllOverlays;
- (void)_callWillEndDisplayingOverlayViewForPage:(id)arg1;
- (id)_callOverlayViewForPage:(id)arg1;
- (id)_cachedOverlayViewForPage:(id)arg1;
- (void)_uninstallOverlayForPageView:(id)arg1 ofPage:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_installOverlayForPageView:(id)arg1 ofPage:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)pdfView:(id)arg1 willRemoveView:(id)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)pdfView:(id)arg1 didAddView:(id)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)pdfView:(id)arg1 didSetDocument:(id)arg2;
- (void)pdfView:(id)arg1 willSetDocument:(id)arg2;
- (void)_teardown;
- (void)teardown;
- (void)dealloc;
- (id)initWithPDFView:(id)arg1;

@end

