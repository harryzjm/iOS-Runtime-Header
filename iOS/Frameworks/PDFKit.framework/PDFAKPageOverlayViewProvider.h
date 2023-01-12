//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKController, NSString, PDFDocument, PDFView;

__attribute__((visibility("hidden")))
@interface PDFAKPageOverlayViewProvider : NSObject
{
    PDFDocument *_pdfDocument;
    AKController *_akController;
    PDFView *_pdfView;
}

- (void).cxx_destruct;
- (void)overlayViewWillBeUninstalledForPage:(id)arg1;
- (void)overlayViewInstalledForPage:(id)arg1;
- (void)teardownGestureRecognizersForView:(id)arg1;
- (void)setupGestureRecognizersForView:(id)arg1;
@property(readonly, nonatomic) _Bool shouldVerticallyFlipOverlayViews;
- (void)pdfView:(id)arg1 willEndDisplayingOverlayView:(id)arg2 forPage:(id)arg3;
- (id)pdfView:(id)arg1 overlayViewForPage:(id)arg2;
- (id)initWithPDFDocument:(id)arg1 pdfView:(id)arg2 andAKController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

