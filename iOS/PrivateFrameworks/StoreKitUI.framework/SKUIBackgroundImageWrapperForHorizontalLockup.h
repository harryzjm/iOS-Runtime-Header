//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKUIHorizontalLockupView, SKUIImageView;

__attribute__((visibility("hidden")))
@interface SKUIBackgroundImageWrapperForHorizontalLockup
{
    SKUIHorizontalLockupView *_lockup;
    SKUIImageView *_imageView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SKUIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak SKUIHorizontalLockupView *lockup; // @synthesize lockup=_lockup;
- (void)setImage:(id)arg1;
- (id)initWithImage:(id)arg1;

@end
