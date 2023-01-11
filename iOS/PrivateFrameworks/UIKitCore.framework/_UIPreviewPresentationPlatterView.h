//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView, _UIPreviewPresentationEffectView;

__attribute__((visibility("hidden")))
@interface _UIPreviewPresentationPlatterView
{
    _Bool _dropShadowEnabled;
    UIView *_contentView;
    _UIPreviewPresentationEffectView *_contentEffectView;
    _UIPreviewPresentationEffectView *_contentClipView;
    UIView *_contentTransformView;
    UIView *_contentShadowView;
    struct CGSize _contentSize;
    struct CGSize _contentClippingSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *contentShadowView; // @synthesize contentShadowView=_contentShadowView;
@property(retain, nonatomic) UIView *contentTransformView; // @synthesize contentTransformView=_contentTransformView;
@property(retain, nonatomic) _UIPreviewPresentationEffectView *contentClipView; // @synthesize contentClipView=_contentClipView;
@property(retain, nonatomic) _UIPreviewPresentationEffectView *contentEffectView; // @synthesize contentEffectView=_contentEffectView;
@property(nonatomic, getter=isDropShadowEnabled) _Bool dropShadowEnabled; // @synthesize dropShadowEnabled=_dropShadowEnabled;
@property(nonatomic) struct CGSize contentClippingSize; // @synthesize contentClippingSize=_contentClippingSize;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (_Bool)_shouldEnclosedScrollViewFlashIndicators:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) double cornerRadius; // @dynamic cornerRadius;
@property(nonatomic) double blurRadius; // @dynamic blurRadius;
- (id)initWithContentView:(id)arg1;

@end
