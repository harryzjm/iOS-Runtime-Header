//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MarkupUI/AKControllerDelegateProtocol-Protocol.h>
#import <MarkupUI/MUContentViewControllerProtocol-Protocol.h>
#import <MarkupUI/UIScrollViewDelegate-Protocol.h>

@class AKPageController, AKRectAnnotation, NSArray, NSString, UIImage, UIImageView, UIScrollView, UITapGestureRecognizer, UIView;

@interface MUImageContentViewController <AKControllerDelegateProtocol, UIScrollViewDelegate, MUContentViewControllerProtocol>
{
    struct CGPoint _pointToCenterAfterRotation;
    _Bool _wasZoomToFit;
    _Bool _centersIgnoringContentInsets;
    _Bool _usePlaceholderAsDisplayImageIfPossible;
    _Bool _inDoubleTapZoom;
    _Bool _didSetup;
    UIImage *_tentativePlaceholderImage;
    double _maxImageDimension;
    unsigned long long _inkStyle;
    id _sourceContent;
    UIScrollView *_scrollView;
    UIView *_combinedContentView;
    UIImageView *_imageView;
    double _downsampledImageScale;
    CDUnknownBlockType _loadCompletionBlock;
    UITapGestureRecognizer *_localDoubleTapRecognizer;
    AKRectAnnotation *_editingAnnotaiton;
    AKPageController *_pageController;
    struct CGSize _sourceImagePixelSize;
    struct UIEdgeInsets _edgeInsets;
}

@property(nonatomic) __weak AKPageController *pageController; // @synthesize pageController=_pageController;
@property(nonatomic) __weak AKRectAnnotation *editingAnnotaiton; // @synthesize editingAnnotaiton=_editingAnnotaiton;
@property _Bool didSetup; // @synthesize didSetup=_didSetup;
@property(retain) UITapGestureRecognizer *localDoubleTapRecognizer; // @synthesize localDoubleTapRecognizer=_localDoubleTapRecognizer;
@property(copy) CDUnknownBlockType loadCompletionBlock; // @synthesize loadCompletionBlock=_loadCompletionBlock;
@property(nonatomic) _Bool inDoubleTapZoom; // @synthesize inDoubleTapZoom=_inDoubleTapZoom;
@property(nonatomic) _Bool usePlaceholderAsDisplayImageIfPossible; // @synthesize usePlaceholderAsDisplayImageIfPossible=_usePlaceholderAsDisplayImageIfPossible;
@property double downsampledImageScale; // @synthesize downsampledImageScale=_downsampledImageScale;
@property struct CGSize sourceImagePixelSize; // @synthesize sourceImagePixelSize=_sourceImagePixelSize;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *combinedContentView; // @synthesize combinedContentView=_combinedContentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain) id sourceContent; // @synthesize sourceContent=_sourceContent;
@property(nonatomic) unsigned long long inkStyle; // @synthesize inkStyle=_inkStyle;
@property double maxImageDimension; // @synthesize maxImageDimension=_maxImageDimension;
@property(retain, nonatomic) UIImage *tentativePlaceholderImage; // @synthesize tentativePlaceholderImage=_tentativePlaceholderImage;
@property(nonatomic) _Bool centersIgnoringContentInsets; // @synthesize centersIgnoringContentInsets=_centersIgnoringContentInsets;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void).cxx_destruct;
- (void)controllerWillDismissSignatureManagerView:(id)arg1;
- (void)controllerWillShowSignatureManagerView:(id)arg1;
- (void)controllerWillDismissSignatureCaptureView:(id)arg1;
- (void)controllerWillShowSignatureCaptureView:(id)arg1;
- (void)penStrokeCompletedForAnnotationController:(id)arg1;
- (void)editCheckpointReachedForAnnotationController:(id)arg1;
- (void)editDetectedForAnnotationController:(id)arg1;
- (void)controllerDidExitToolMode:(id)arg1;
- (void)controllerDidEnterToolMode:(id)arg1;
- (_Bool)shouldPlaceProposedFormElementAtRect:(struct CGRect)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (_Bool)shouldPlaceFormElementAtPoint:(struct CGPoint)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (_Bool)controllerShouldDetectFormElements:(id)arg1;
- (void)positionSketchOverlay:(id)arg1 forAnnotationController:(id)arg2;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (void)updateDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 withPriority:(_Bool)arg3 forAnnotationController:(id)arg4;
- (void)uninstallDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)installDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (id)undoManagerForAnnotationController:(id)arg1;
- (id)newContentSnapshotPDFDataIncludingAdornments:(_Bool)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5;
- (struct CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)adjustScrollViewToAccomodateKeyboardStartingFrame:(struct CGRect)arg1 endingFrame:(struct CGRect)arg2 annotationFrame:(struct CGRect)arg3 inOverlayView:(id)arg4 withAnimationDuration:(double)arg5 curve:(long long)arg6;
- (void)_adjustScrollViewForKeyboardNotification:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (unsigned long long)_pageIndexForAnnotation:(id)arg1;
- (void)_annotationDidEndEditing:(id)arg1;
- (void)_annotationWillBeginEditing:(id)arg1;
- (struct CGRect)_annotationRectInOverlay:(id)arg1 pageIndex:(unsigned long long)arg2;
- (struct CGPoint)_minimumContentOffset;
- (void)_updateMinMaxZoomFactor;
- (struct CGPoint)_maximumContentOffset;
- (void)_recoverFromRotation;
- (void)_prepareToRotate;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)_imageIsSize:(struct CGSize)arg1 isSmallerThanSize:(struct CGSize)arg2;
- (_Bool)_imageIsSmallerThanView;
- (struct CGRect)_zoomRectForScale:(double)arg1 withCenter:(struct CGPoint)arg2;
- (void)_doubleTap:(id)arg1;
- (double)_zoomToFitZoomFactorInBounds:(struct CGRect)arg1;
- (double)_zoomToFitZoomFactorIncludingScrollViewEdgeInsets;
- (double)_zoomToFitZoomFactor;
- (_Bool)_placeholderCanBeUsedForBaseImageOfSize:(struct CGSize)arg1;
- (void)_downsampleImageForDisplay:(struct CGImage *)arg1 fromImageSource:(struct CGImageSource *)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_setupScrollViewForImageOfScaledSize:(struct CGSize)arg1;
- (void)viewDidLayoutSubviews;
- (void)_setImage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) UIScrollView *contentViewScrollView;
@property(readonly, nonatomic) long long defaultToolTag;
- (void)uninstallAllAnnotationControllerOverlays;
- (void)_uninstallOverlayOfController:(id)arg1 forPageAtIndex:(unsigned long long)arg2;
- (void)_installOverlayOfController:(id)arg1 forPageAtIndex:(unsigned long long)arg2;
- (struct CGSize)idealContentSizeForScreenSize:(struct CGSize)arg1 windowDecorationSize:(struct CGSize)arg2;
- (struct CGSize)contentSize;
- (void)loadContentWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)teardown;
- (void)setup;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (id)contentSnapshot;
- (struct CGRect)visibleContentRectInCoordinateSpace:(id)arg1;
- (struct CGRect)visibleContentRect;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSourceContent:(id)arg1 archivedDataModel:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool navigationModeHorizontal;
@property(readonly) unsigned long long pageCount;
@property(nonatomic) _Bool showsThumbnailView;
@property(retain) NSArray *sourceContentReplacedAnnotationMaps;
@property(readonly) Class superclass;

@end

