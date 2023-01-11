//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAShapeLayer, UIImageView, _PKHueSpectrumView;

@interface _PKEmbossedColorPickerButton
{
    _PKHueSpectrumView *_hueSpectrumView;
    CAShapeLayer *_selectedColorLayer;
    UIImageView *_embossImageView;
    CAShapeLayer *_strokeShapeLayer;
}

@property(retain, nonatomic) CAShapeLayer *strokeShapeLayer; // @synthesize strokeShapeLayer=_strokeShapeLayer;
@property(retain, nonatomic) UIImageView *embossImageView; // @synthesize embossImageView=_embossImageView;
@property(retain, nonatomic) CAShapeLayer *selectedColorLayer; // @synthesize selectedColorLayer=_selectedColorLayer;
@property(retain, nonatomic) _PKHueSpectrumView *hueSpectrumView; // @synthesize hueSpectrumView=_hueSpectrumView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithColor:(id)arg1 isCompact:(_Bool)arg2;

@end
