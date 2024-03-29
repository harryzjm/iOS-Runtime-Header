//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PagesQuicklook/NSObject-Protocol.h>

@class NSSet, TSDCanvas, TSDLayout, TSDRep, TSKDocumentRoot;
@protocol TSDCanvasProxyDelegate;

@protocol TSDCanvasDelegate <NSObject>
- (TSKDocumentRoot *)documentRoot;

@optional
@property(readonly, nonatomic) _Bool verticalTextAllowed;
@property(readonly, nonatomic) id <TSDCanvasProxyDelegate> canvasProxyDelegate;
- (_Bool)prefersThumbnailImagesToRenderForCanvas:(TSDCanvas *)arg1;
- (_Bool)textLayoutMustIncludeAdornments;
- (_Bool)isRenderingForKPF;
- (_Bool)supportsAdaptiveLayout;
- (_Bool)isCanvasDrawingIntoPDF:(TSDCanvas *)arg1;
- (_Bool)shouldShowInstructionalTextForLayout:(TSDLayout *)arg1;
- (_Bool)shouldShowTextCommentHighlightsForCanvas:(TSDCanvas *)arg1;
- (_Bool)shouldShowCommentsForCanvas:(TSDCanvas *)arg1;
- (_Bool)shouldShowTextOverflowGlyphs;
- (_Bool)shouldSuppressBackgrounds;
- (_Bool)spellCheckingSuppressed;
- (_Bool)spellCheckingSupported;
- (_Bool)isPrintingCanvas;
- (_Bool)wantsEditingLayoutsForOffscreenInfos;
- (_Bool)isCanvasInteractive;
- (void)canvas:(TSDCanvas *)arg1 createdRep:(TSDRep *)arg2;
- (NSSet *)infosToHideForCanvas:(TSDCanvas *)arg1;
- (double)captionWidthForCanvas:(TSDCanvas *)arg1;
- (NSSet *)additionalVisibleInfosForCanvas:(TSDCanvas *)arg1;
- (struct CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(TSDCanvas *)arg1;
- (void)updateLayerTreeForInteractiveCanvas:(TSDCanvas *)arg1;
- (void)canvasWillUpdateRepsFromLayouts:(TSDCanvas *)arg1;
- (void)canvasDidValidateLayoutsWithDependencies:(TSDCanvas *)arg1;
- (void)canvasDidLayout:(TSDCanvas *)arg1;
- (void)canvasDidValidateLayouts:(TSDCanvas *)arg1;
- (void)canvasWillValidateLayouts:(TSDCanvas *)arg1;
- (void)canvasLayoutInvalidated:(TSDCanvas *)arg1;
- (Class)canvasRootLayoutClass;
@end

