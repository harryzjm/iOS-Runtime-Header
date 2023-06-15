//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CATiledLayer.h>

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface UIPDFPageContentTiledLayer : CATiledLayer
{
    CALayer *_selectionLayer;
}

- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)layoutSublayers;
- (void)setNeedsDisplay;
- (void)setSelectionNeedsDisplay;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

