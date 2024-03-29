//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class CATextLayer, NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface AVPictureInPictureIndicatorSublayer : CALayer
{
    NSAttributedString *_attributedText;
    struct CGSize _imageSize;
    struct NSEdgeInsets _languageAwareOutsets;
    double _lineHeight;
    double _baselineOffset;
    CATextLayer *_textLayer;
    CALayer *_imageLayer;
    NSString *_customText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *customText; // @synthesize customText=_customText;
- (_Bool)canRenderAttributedTextWithoutTruncationInsideRect:(struct CGRect)arg1;
- (struct CGRect)textBoundingRectWhenDrawnInRect:(struct CGRect)arg1;
- (void)layoutSublayersWithTextAndImageUsingInsetBounds:(struct CGRect)arg1;
- (void)layoutSublayers;
- (id)init;
- (id)initWithDisplayScale:(double)arg1 placeholderImage:(struct CGImage *)arg2 opaque:(_Bool)arg3;

@end

