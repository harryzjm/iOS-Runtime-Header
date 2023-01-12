//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class NSString, PDFPageLayerPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageLayer : CALayer
{
    PDFPageLayerPrivate *_private;
}

- (void).cxx_destruct;
- (void)_updateTiles;
- (void)_pageChangedPageRef:(id)arg1;
- (void)_pageDidRotate:(id)arg1;
- (void)_renderingPropertyUpdate:(id)arg1;
- (void)_printRectsArray:(id)arg1;
- (_Bool)_hasTileWithFrameInLayer:(struct CGRect)arg1;
- (struct CGRect)_pageLayerVisibleRect;
- (struct CGRect)_layerTileToRootViewBounds:(id)arg1;
- (id)_subtractRectB:(struct CGRect)arg1 fromRectA:(struct CGRect)arg2;
- (_Bool)_isTile:(id)arg1 occludedByTiles:(id)arg2;
- (void)tileDrawingComplete:(id)arg1;
- (void)_setEnablePageShadows:(_Bool)arg1;
- (void)_hideTileLayer:(_Bool)arg1;
- (void)_releasePageLayerEffects;
- (void)_releaseTiles;
- (void)layoutSublayers;
- (void)setBounds:(struct CGRect)arg1;
- (unsigned long long)visibilityDelegateIndex;
- (void)setVisibilityDelegateIndex:(unsigned long long)arg1;
- (void)willEndStartLiveResize;
- (void)willStartLiveResize;
- (void)applyTileLayoutScale:(double)arg1;
- (void)restoreOriginalTileLayout;
- (void)saveOriginalTileLayout;
- (void)clearTiles;
- (_Bool)enablesTileUpdates;
- (void)_forceTileUpdate;
- (void)forceTileUpdate;
- (void)setEnableTileUpdates:(_Bool)arg1;
- (void)scalePageLayerEffects:(double)arg1;
- (struct CGAffineTransform)layerEffectTransform;
- (void)_updateLayerEffect:(id)arg1 withPageTransform:(struct CGAffineTransform)arg2;
- (void)updatePageLayerEffects;
- (void)updatePageLayerEffectForID:(id)arg1;
- (id)_pageLayerEffects;
- (id)pageLayerEffectForID:(id)arg1;
- (void)removePageLayerEffectForID:(id)arg1;
- (void)addPageLayerEffect:(id)arg1;
- (_Bool)isVisible;
- (void)_tileUpdateComplete;
- (long long)displayBox;
- (void)setNeedsTilesUpdate;
- (id)renderingProperties;
- (id)geometryInterface;
- (id)page;
- (void)dealloc;
- (id)initWithPage:(id)arg1 geometryInterface:(id)arg2 andRenderingProperties:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

