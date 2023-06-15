//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKController, AKModelController, AKRectAnnotation, AKToolbarView, NSString, PDFDocument, PDFView, UIView;
@protocol PDFAKControllerDelegateProtocol;

__attribute__((visibility("hidden")))
@interface PDFAKDocumentAdaptor : NSObject
{
    _Bool _isTornDown;
    PDFDocument *_pdfDocument;
    PDFView *_pdfView;
    AKController *_akController;
    id <PDFAKControllerDelegateProtocol> _pdfAKControllerDelegate;
    AKToolbarView *_akToolbarView;
    AKRectAnnotation *_editingAnnotaiton;
    struct TextAnnotationAnimationProperties _animationProperties;
    double _modelBaseScaleFactor;
}

+ (_Bool)isHandlingEditDetected;
+ (void)setIsHandlingEditDetected:(_Bool)arg1;
- (void).cxx_destruct;
- (void)_adjustScrollViewWithAnimationProperties:(struct TextAnnotationAnimationProperties)arg1 delta:(double)arg2;
- (void)adjustScrollViewForKeyboardNotification:(id)arg1;
- (unsigned long long)pageIndexForAnnotation:(id)arg1;
- (void)annotationDidEndEditing:(id)arg1;
- (void)annotationWillBeginEditing:(id)arg1;
- (void)_resetAnimationProperties;
- (id)_scrollViewRecognizersForPageAtIndex:(unsigned long long)arg1;
- (void)_updatePDFScrollViewMinimumNumberOfTouches;
- (void)_delayedModelBaseScaleFactorCalculation;
- (void)_scheduleDelayedModelBaseScaleFactorCalculation;
- (void)_pdfViewDidChangeScale:(id)arg1;
- (void)_pdfViewDidLayout:(id)arg1;
- (void)_pdfDocumentDidUnlock:(id)arg1;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (void)rotateLeft:(id)arg1;
- (void)rotateRight:(id)arg1;
- (_Bool)hasHighlightableSelectionForAnnotationController:(id)arg1;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (void)positionSketchOverlay:(id)arg1 forAnnotationController:(id)arg2;
- (void)handleTextSuggestion:(id)arg1 forAnnotationController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)handleBackTabInTextEditorForAnnotation:(id)arg1 forAnnotationController:(id)arg2;
- (_Bool)handleTabInTextEditorForAnnotation:(id)arg1 forAnnotationController:(id)arg2;
- (_Bool)shouldAddTabControlsToTextEditorForAnnotation:(id)arg1 forAnnotationController:(id)arg2;
- (void)controllerDidExitToolMode:(id)arg1;
- (void)controllerWillExitToolMode:(id)arg1;
- (void)controllerDidEnterToolMode:(id)arg1;
- (void)controllerWillEnterToolMode:(id)arg1;
- (void)controllerWillDismissSignatureManagerView:(id)arg1;
- (void)controllerWillShowSignatureManagerView:(id)arg1;
- (void)controllerWillDismissSignatureCaptureView:(id)arg1;
- (void)controllerWillShowSignatureCaptureView:(id)arg1;
- (void)penStrokeCompletedForAnnotationController:(id)arg1;
- (void)editDetectedForAnnotationController:(id)arg1;
- (void)editCheckpointReachedForAnnotationController:(id)arg1;
- (struct CGRect)positioningRectForCandidatePicker;
- (_Bool)shouldPlaceProposedFormElementAtRect:(struct CGRect)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (_Bool)shouldPlaceFormElementAtPoint:(struct CGPoint)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (_Bool)controllerShouldDetectFormElements:(id)arg1;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (void)updateDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 withPriority:(_Bool)arg3 forAnnotationController:(id)arg4;
- (void)uninstallDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)installDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (struct CGAffineTransform)_compensatingAffineTransformForPage:(id)arg1;
- (id)newContentSnapshotPDFDataIncludingAdornments:(_Bool)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5;
- (struct CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (id)undoManagerForAnnotationController:(id)arg1;
- (_Bool)rulerHostWantsSharedRuler;
- (id)rulerHostingView;
- (void)pdfDocument:(id)arg1 didReplacePagePlaceholder:(id)arg2 atIndex:(unsigned long long)arg3 withPage:(id)arg4;
- (void)pdfDocument:(id)arg1 didExchangePage:(id)arg2 atIndex:(unsigned long long)arg3 withPage:(id)arg4 atIndex:(unsigned long long)arg5;
- (void)pdfDocumentDidRemoveAllPagesOrPlaceholders:(id)arg1;
- (void)pdfDocument:(id)arg1 didRemovePage:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)pdfDocument:(id)arg1 didInsertPage:(id)arg2 atIndex:(unsigned long long)arg3;
@property(nonatomic) __weak id <PDFAKControllerDelegateProtocol> PDFAKControllerDelegate;
@property(readonly, nonatomic) UIView *akToolbarView;
@property(readonly, nonatomic) AKModelController *akDocumentModelController;
@property(readonly, nonatomic) AKController *akMainController;
@property(readonly, nonatomic) __weak PDFDocument *pdfDocument;
@property(nonatomic) __weak PDFView *pdfView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_teardown;
- (void)teardown;
- (void)dealloc;
- (id)initWithPDFDocument:(id)arg1 andView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *originalImageDescription;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsFormFill;
@property(readonly, nonatomic) _Bool supportsImageDescriptionEditing;

@end

