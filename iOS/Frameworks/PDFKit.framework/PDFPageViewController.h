//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PDFKit/UIScrollViewDelegate-Protocol.h>

@class NSString, PDFPageViewControllerPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageViewController : UIViewController <UIScrollViewDelegate>
{
    PDFPageViewControllerPrivate *_private;
}

- (void).cxx_destruct;
- (void)_centerAlign;
- (void)didRotatePageNotification:(id)arg1;
- (void)changedBoundsForBoxNotification:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)pdfView;
- (void)_updateAnnotations;
- (void)_removePDFView;
- (void)_setupGestureRecognizerDependencies;
- (void)_buildPDFPageView;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)removeAKOverlay;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2;
- (id)selection;
- (void)setSelection:(id)arg1;
- (double)autoScaleFactor;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (void)setMinScaleFactor:(double)arg1 withMaxScaleFactor:(double)arg2;
- (void)enforceAutoScaleFactor;
- (void)setAutoScales:(_Bool)arg1;
- (id)textInputView;
- (id)scrollView;
- (id)pageView;
- (id)PDFPage;
- (void)setPDFPage:(id)arg1;
- (void)setPageBreakMargins:(struct UIEdgeInsets)arg1;
- (void)setPDFView:(id)arg1;
- (void)setRenderingProperties:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

