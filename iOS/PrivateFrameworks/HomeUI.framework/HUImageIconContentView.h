//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView;

@interface HUImageIconContentView
{
    UIImageView *_imageView;
    long long _originalImageRenderingMode;
}

@property(nonatomic) long long originalImageRenderingMode; // @synthesize originalImageRenderingMode=_originalImageRenderingMode;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (long long)renderingModeForSubview:(id)arg1 suggestedRenderingMode:(long long)arg2;
- (void)_updateIconImage;
- (void)setIconSize:(unsigned long long)arg1;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

