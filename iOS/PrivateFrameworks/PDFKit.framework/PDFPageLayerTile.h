//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

#import <PDFKit/PDFTilePoolDelegate-Protocol.h>

@class PDFPageLayer, PDFTileSurface;

__attribute__((visibility("hidden")))
@interface PDFPageLayerTile : CALayer <PDFTilePoolDelegate>
{
    PDFPageLayer *pageLayer;
    struct CGAffineTransform renderingTransform;
    double tileContentsScale;
    PDFTileSurface *pageSurface;
    int generationID;
    _Atomic _Bool isWorking;
    struct CGRect originalFrame;
}

- (void).cxx_destruct;
- (void)recievePDFTileSurface:(id)arg1;
- (_Bool)isWorking;
- (void)hasStartedWork;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 forPageLayer:(id)arg2 withRenderingTransform:(struct CGAffineTransform)arg3 tileContentsScale:(double)arg4 generationID:(int)arg5;

@end

