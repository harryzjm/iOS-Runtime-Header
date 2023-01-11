//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXTextComponentLayoutHosting-Protocol.h>
#import <Silex/SXTextSelecting-Protocol.h>
#import <Silex/SXTextTangierInteractiveCanvasControllerDataSource-Protocol.h>
#import <Silex/SXTextTangierInteractiveCanvasControllerDelegate-Protocol.h>
#import <Silex/SXViewportChangeListener-Protocol.h>
#import <Silex/TSDiOSCanvasViewControllerDelegate-Protocol.h>

@class NSMutableSet, NSString, SXScrollView, SXTangierRepDirectLayerHostProvider, SXTangierTextRenderCollector, SXTextTangierCanvasViewController, SXTextTangierDocumentRoot, SXTextTangierInteractiveCanvasController, SXViewport, TSKDocumentRoot, TSWPSelection, UIView;
@protocol SXComponentActionHandler, SXComponentController, SXComponentInteractionManager, SXDOMObjectProviding, SXTangierControllerDelegate, SXTangierDragItemProvider;

@interface SXTangierController : NSObject <SXTextTangierInteractiveCanvasControllerDelegate, SXTextTangierInteractiveCanvasControllerDataSource, SXViewportChangeListener, TSDiOSCanvasViewControllerDelegate, SXTextComponentLayoutHosting, SXTextSelecting>
{
    SXTextTangierDocumentRoot *_documentRoot;
    _Bool _enclosingCanvasScrolling;
    _Bool _rebuildFlows;
    _Bool _preventScrollViewDidScrollReentrance;
    _Bool _disableClippingForTiles;
    _Bool _performedInitialLayoutAndRender;
    struct os_unfair_lock_s _unfairLock;
    id <SXTangierControllerDelegate> _delegate;
    SXTextTangierCanvasViewController *_cvc;
    SXTextTangierInteractiveCanvasController *_icc;
    unsigned long long _initialSubviewCount;
    SXViewport *_viewport;
    SXScrollView *_scrollView;
    id <SXComponentActionHandler> _componentActionHandler;
    id <SXTangierDragItemProvider> _dragItemProvider;
    id <SXComponentController> _componentController;
    id <SXComponentInteractionManager> _componentInteractionManager;
    id <SXDOMObjectProviding> _DOMObjectProvider;
    SXTangierTextRenderCollector *_textRenderCollector;
    SXTangierRepDirectLayerHostProvider *_directLayerHostProvider;
    UIView *_underRepsHost;
    UIView *_aboveRepsHost;
    UIView *_overlayRepsHost;
    TSWPSelection *_storedSelection;
    NSMutableSet *_presentedTextViews;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct os_unfair_lock_s unfairLock; // @synthesize unfairLock=_unfairLock;
@property(readonly, nonatomic) NSMutableSet *presentedTextViews; // @synthesize presentedTextViews=_presentedTextViews;
@property(nonatomic) _Bool performedInitialLayoutAndRender; // @synthesize performedInitialLayoutAndRender=_performedInitialLayoutAndRender;
@property(retain, nonatomic) TSWPSelection *storedSelection; // @synthesize storedSelection=_storedSelection;
@property(nonatomic) _Bool disableClippingForTiles; // @synthesize disableClippingForTiles=_disableClippingForTiles;
@property(nonatomic) _Bool preventScrollViewDidScrollReentrance; // @synthesize preventScrollViewDidScrollReentrance=_preventScrollViewDidScrollReentrance;
@property(readonly, nonatomic) UIView *overlayRepsHost; // @synthesize overlayRepsHost=_overlayRepsHost;
@property(readonly, nonatomic) UIView *aboveRepsHost; // @synthesize aboveRepsHost=_aboveRepsHost;
@property(readonly, nonatomic) UIView *underRepsHost; // @synthesize underRepsHost=_underRepsHost;
@property(readonly, nonatomic) SXTangierRepDirectLayerHostProvider *directLayerHostProvider; // @synthesize directLayerHostProvider=_directLayerHostProvider;
@property(readonly, nonatomic) SXTangierTextRenderCollector *textRenderCollector; // @synthesize textRenderCollector=_textRenderCollector;
@property(readonly, nonatomic) id <SXDOMObjectProviding> DOMObjectProvider; // @synthesize DOMObjectProvider=_DOMObjectProvider;
@property(readonly, nonatomic) __weak id <SXComponentInteractionManager> componentInteractionManager; // @synthesize componentInteractionManager=_componentInteractionManager;
@property(readonly, nonatomic) __weak id <SXComponentController> componentController; // @synthesize componentController=_componentController;
@property(readonly, nonatomic) id <SXTangierDragItemProvider> dragItemProvider; // @synthesize dragItemProvider=_dragItemProvider;
@property(readonly, nonatomic) id <SXComponentActionHandler> componentActionHandler; // @synthesize componentActionHandler=_componentActionHandler;
@property(retain, nonatomic) SXScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;
@property(nonatomic) unsigned long long initialSubviewCount; // @synthesize initialSubviewCount=_initialSubviewCount;
@property(nonatomic) _Bool rebuildFlows; // @synthesize rebuildFlows=_rebuildFlows;
@property(readonly, nonatomic) SXTextTangierInteractiveCanvasController *icc; // @synthesize icc=_icc;
@property(readonly, nonatomic) SXTextTangierCanvasViewController *cvc; // @synthesize cvc=_cvc;
@property(nonatomic) __weak id <SXTangierControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEnclosingCanvasScrolling) _Bool enclosingCanvasScrolling; // @synthesize enclosingCanvasScrolling=_enclosingCanvasScrolling;
- (id)backgroundColorForDragUIPlatter;
@property(readonly, retain, nonatomic) TSKDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
- (id)layoutDescriptionForComponent:(id)arg1;
- (void)endSelection;
@property(readonly, nonatomic) _Bool shouldClipToScrollViewBoundsInVisibleBounds;
- (id)interactiveCanvasController:(id)arg1 delegateConformingToProtocol:(id)arg2 forRep:(id)arg3;
- (_Bool)interactiveCanvasControllerIsRelatedCanvasScrolling:(id)arg1;
- (void)didTransitionToPresented;
- (void)willTransitionToPresented;
- (id)visibleBoundsClipViewForInteractiveCanvasController:(id)arg1;
- (struct CGRect)interactiveCanvasController:(id)arg1 expandVisibleBoundsForClippingReps:(struct CGRect)arg2;
- (void)updateInfosWithBlock:(CDUnknownBlockType)arg1;
- (id)interactiveCanvasController:(id)arg1 infoForModel:(id)arg2 withSelection:(id)arg3;
- (id)interactiveCanvasController:(id)arg1 dragItemForSmartField:(id)arg2 interaction:(id)arg3 session:(id)arg4;
@property(readonly, nonatomic) _Bool isCanvasInteractive;
- (_Bool)interactiveCanvasController:(id)arg1 shouldBeginInteraction:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)interactiveCanvasControllerDidLayoutAndRenderOnBackgroundThread:(id)arg1;
- (void)interactiveCanvasControllerWillStartInteraction:(id)arg1;
- (struct CGRect)interactiveCanvasController:(id)arg1 expandVisibleBoundsForTiling:(struct CGRect)arg2;
- (void)interactiveCanvasController:(id)arg1 scrollViewDidEndDragging:(id)arg2 willDecelerate:(_Bool)arg3;
- (void)interactiveCanvasController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)interactiveCanvasController:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(struct CGPoint)arg3 targetContentOffset:(inout struct CGPoint *)arg4;
- (void)_fixLayoutOffsets;
- (void)interactiveCanvasControllerDidStopScrolling:(id)arg1;
- (void)interactiveCanvasControllerDidScroll:(id)arg1;
- (void)interactiveCanvasController:(id)arg1 interactedWithHyperlink:(id)arg2 info:(id)arg3 range:(struct _NSRange)arg4 touchPoint:(struct CGPoint)arg5 touchAndHold:(_Bool)arg6;
- (struct CGRect)visibleBounds;
- (id)topLevelLayersForInteractiveCanvasController:(id)arg1;
- (id)topLevelRepsForInteractiveCanvasController:(id)arg1;
- (struct CGPoint)pointForCharacterAtIndex:(unsigned long long)arg1 inComponentWithIdentifier:(id)arg2;
- (id)scrollPositionForRect:(struct CGRect)arg1 componentRect:(struct CGRect)arg2 componentIdentifier:(id)arg3 canvasWidth:(double)arg4 relativePageOffset:(double)arg5;
- (void)setUnscaledCanvasRect:(struct CGRect)arg1;
- (void)updateCanvasSize:(struct CGSize)arg1 forComponentViews:(id)arg2;
- (void)clearSelection;
@property(nonatomic) _Bool selectionEnabled;
- (void)didStopPresentingTextView:(id)arg1;
- (void)didStartPresentingTextView:(id)arg1;
- (void)dealloc;
- (void)teardown;
- (void)updatePresentationState;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (id)initWithViewport:(id)arg1 scrollView:(id)arg2 componentActionHandler:(id)arg3 dragItemProvider:(id)arg4 componentController:(id)arg5 componentInteractionManager:(id)arg6 DOMObjectProvider:(id)arg7;

// Remaining properties
@property(readonly, nonatomic) _Bool allowEditMenuToAppear;
@property(readonly, nonatomic) _Bool allowTextEditingToBegin;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool interactiveCanvasControllerAllowsHyperlinkInteraction;
@property(readonly, nonatomic) _Bool isPrintingCanvas;
@property(readonly, nonatomic) _Bool shouldPopKnobsOutsideEnclosingScrollView;
@property(readonly, nonatomic) _Bool shouldResizeCanvasToScrollView;
@property(readonly, nonatomic) _Bool shouldShowInstructionalText;
@property(readonly, nonatomic) _Bool shouldShowTextOverflowGlyphs;
@property(readonly, nonatomic) struct CGSize sizeOfScrollViewEnclosingCanvas;
@property(readonly, nonatomic) _Bool spellCheckingSupported;
@property(readonly, nonatomic) _Bool spellCheckingSuppressed;
@property(readonly) Class superclass;

@end
