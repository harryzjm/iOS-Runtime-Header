//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

#import <PDFKit/CALayerDelegate-Protocol.h>
#import <PDFKit/PDFPageLayerInterface-Protocol.h>

@class NSMutableDictionary, NSObject, NSString, PDFPage, PDFRenderingProperties;
@protocol PDFPageLayerGeometryInterface;

__attribute__((visibility("hidden")))
@interface PDFSimplePageLayer : CALayer <CALayerDelegate, PDFPageLayerInterface>
{
    PDFPage *_page;
    NSObject<PDFPageLayerGeometryInterface> *_geometryInterface;
    PDFRenderingProperties *_renderingProperties;
    NSMutableDictionary *_pageLayerEffects;
    CALayer *_effectsLayer;
    unsigned long long _visibilityDelegateIndex;
    double _contentsScale;
}

- (void).cxx_destruct;
- (void)_pageChangedPageRef:(id)arg1;
- (void)_pageDidRotate:(id)arg1;
- (void)_updateLayerEffect:(id)arg1 withPageTransform:(struct CGAffineTransform)arg2;
- (id)_pageLayerEffects;
- (void)_updateGeometry;
- (void)drawInContext:(struct CGContext *)arg1;
- (unsigned long long)visibilityDelegateIndex;
- (void)setVisibilityDelegateIndex:(unsigned long long)arg1;
- (void)willEndStartLiveResize;
- (void)willStartLiveResize;
- (void)applyTileLayoutScale:(double)arg1;
- (void)restoreOriginalTileLayout;
- (void)saveOriginalTileLayout;
- (void)clearTiles;
- (void)forceTileUpdate;
- (_Bool)enablesTileUpdates;
- (void)setEnableTileUpdates:(_Bool)arg1;
- (void)scalePageLayerEffects:(double)arg1;
- (struct CGAffineTransform)layerEffectTransform;
- (void)updatePageLayerEffects;
- (void)updatePageLayerEffectForID:(id)arg1;
- (id)pageLayerEffectForID:(id)arg1;
- (void)removePageLayerEffectForID:(id)arg1;
- (void)addPageLayerEffect:(id)arg1;
- (_Bool)isVisible;
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
