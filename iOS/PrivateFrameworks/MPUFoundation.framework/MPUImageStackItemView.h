//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImage, UIImageView;

@interface MPUImageStackItemView
{
    UIImageView *_imageView;
    UIImage *_image;
    double _imageAlpha;
    struct CGRect _imageContentsRect;
    struct CGAffineTransform _imageTransform;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGAffineTransform imageTransform; // @synthesize imageTransform=_imageTransform;
@property(nonatomic) struct CGRect imageContentsRect; // @synthesize imageContentsRect=_imageContentsRect;
@property(nonatomic) double imageAlpha; // @synthesize imageAlpha=_imageAlpha;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
