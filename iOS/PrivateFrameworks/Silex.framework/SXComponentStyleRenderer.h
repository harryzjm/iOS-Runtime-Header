//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSString, SXComponentStyle, SXComponentView, SXGradientFillView, SXImageFillView, SXVideoFillView, UIView;

@interface SXComponentStyleRenderer : NSObject <SXViewportChangeListener>
{
    _Bool _didRegisterForDynamicBounds;
    SXComponentStyle *_componentStyle;
    SXComponentView *_componentView;
    SXGradientFillView *_gradientFillView;
    SXImageFillView *_imageFillView;
    SXVideoFillView *_videoFillView;
    UIView *_fillClippingView;
    UIView *_borderContainerView;
}

@property(nonatomic) _Bool didRegisterForDynamicBounds; // @synthesize didRegisterForDynamicBounds=_didRegisterForDynamicBounds;
@property(retain, nonatomic) UIView *borderContainerView; // @synthesize borderContainerView=_borderContainerView;
@property(retain, nonatomic) UIView *fillClippingView; // @synthesize fillClippingView=_fillClippingView;
@property(retain, nonatomic) SXVideoFillView *videoFillView; // @synthesize videoFillView=_videoFillView;
@property(retain, nonatomic) SXImageFillView *imageFillView; // @synthesize imageFillView=_imageFillView;
@property(retain, nonatomic) SXGradientFillView *gradientFillView; // @synthesize gradientFillView=_gradientFillView;
@property(readonly, nonatomic) __weak SXComponentView *componentView; // @synthesize componentView=_componentView;
@property(readonly, nonatomic) __weak SXComponentStyle *componentStyle; // @synthesize componentStyle=_componentStyle;
- (void).cxx_destruct;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)drawBorder:(id)arg1;
- (id)videoPlayerViewForFill:(id)arg1;
- (id)imageViewForFill:(id)arg1;
- (id)gradientViewForFill:(id)arg1;
- (id)viewForFill:(id)arg1;
- (void)applyFill:(id)arg1;
- (void)applyComponentStyle;
- (void)componentVisiblityStateDidChange:(long long)arg1;
- (void)prepare;
- (id)initWithComponentView:(id)arg1 componentStyle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
