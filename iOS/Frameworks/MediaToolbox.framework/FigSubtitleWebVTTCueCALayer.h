//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "FigSubtitleBackdropCALayer.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FigSubtitleWebVTTCueCALayer : FigSubtitleBackdropCALayer
{
    struct OpaqueFigSubtitleWebVTTCueCALayerInternal *layerInternal;
}

- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)setDefaultFontSize:(double)arg1;
- (void)setViewport:(struct CGRect)arg1;
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer *)arg1;
- (void)setContent:(struct __CFAttributedString *)arg1;
- (struct __CFString *)getContentID;
- (unsigned char)isDirty;
- (struct CGRect)getSuggestedBounds:(unsigned char)arg1;
- (void)setCuePosition:(struct CGPoint)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

