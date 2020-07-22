//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDFAKOverlayAdaptorPrivate, PDFView;

__attribute__((visibility("hidden")))
@interface PDFAKOverlayAdaptor : NSObject
{
    PDFAKOverlayAdaptorPrivate *_private;
}

+ (id)instanceForPlatformWithPDFView:(id)arg1;
- (void).cxx_destruct;
- (void)_selectionDidEndChanging:(id)arg1;
- (void)_selectionWillBeginChanging:(id)arg1;
- (void)_selectionChanged:(id)arg1;
- (void)_currentPageChanged:(id)arg1;
- (void)_pageRotationChanged:(id)arg1;
- (void)_teardownRotationNotificationObservationForPageAtIndex:(unsigned long long)arg1;
- (void)_setupRotationNotificationObservationForPageAtIndex:(unsigned long long)arg1;
- (void)_teardownGestureRecognizersForView:(id)arg1 andDocument:(id)arg2;
- (void)_setupGestureRecognizersForView:(id)arg1 andDocument:(id)arg2;
- (void)_uninstallAllOverlays;
- (void)_uninstallOverlayAtIndex:(unsigned long long)arg1;
- (void)_installOverlayForPageView:(id)arg1 ofPage:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)_annotationController;
- (id)_pdfView;
- (void)pdfView:(id)arg1 willRemoveView:(id)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)pdfView:(id)arg1 didAddView:(id)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)pdfView:(id)arg1 didSetDocument:(id)arg2;
- (void)pdfView:(id)arg1 willSetDocument:(id)arg2;
@property(readonly, nonatomic) __weak PDFView *pdfView;
- (void)_teardown;
- (void)teardown;
- (void)dealloc;
- (id)initWithPDFView:(id)arg1;

@end

