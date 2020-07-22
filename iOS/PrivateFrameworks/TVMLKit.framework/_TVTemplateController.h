//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IKViewElement, TVImageProxy, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface _TVTemplateController
{
    UIImageView *_backgroundImageView;
    UIView *_contentView;
    IKViewElement *_viewElement;
    TVImageProxy *_imageProxy;
}

@property(retain, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (id)_backgroundImageProxy;
- (struct CGSize)_backgroundImageProxySize;
- (id)_imageProxyFromTemplateViewElement:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_addNewContentView:(id)arg1;
- (void)loadView;

@end
