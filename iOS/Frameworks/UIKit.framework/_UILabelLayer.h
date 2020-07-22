//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class _UILabelContentLayer;

__attribute__((visibility("hidden")))
@interface _UILabelLayer : CALayer
{
    _UILabelContentLayer *_contentLayer;
    _Bool _contentInsetsValid;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
- (void)setContentsMultiplyColor:(struct CGColor *)arg1;
- (void)setContentsFormat:(id)arg1;
- (void)setNeedsDisplayOnBoundsChange:(_Bool)arg1;
- (void)setContentsGravity:(id)arg1;
- (id)_labelLayerToClipDuringBoundsSizeAnimation;
- (void)_setLabelMasksToBoundsForAnimation:(_Bool)arg1;
- (void)setMasksToBounds:(_Bool)arg1;
- (void)_clearContents;
- (void)_updateContentLayer;
- (void)invalidateContentInsets;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_setFrameOrBounds:(struct CGRect)arg1 settingAction:(CDUnknownBlockType)arg2;
- (void)layoutSublayers;
- (void)updateContentLayerSize;
- (void)updateContentInsets;

@end

