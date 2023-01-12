//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class CALayer, UIImageView, UILabel, _UIBannerContent;

__attribute__((visibility("hidden")))
@interface _UIBannerView : UIView
{
    _Bool _highlighted;
    _UIBannerContent *_content;
    CALayer *_backgroundLayer;
    UIView *_highlightView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) _UIBannerContent *content; // @synthesize content=_content;
- (void)setHighlighted:(_Bool)arg1 initialPress:(_Bool)arg2;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

