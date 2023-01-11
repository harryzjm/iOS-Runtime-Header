//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXDocumentStyleRenderer-Protocol.h>
#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSString, SXGradientFillView, SXImageFillView, SXVideoFillView, SXViewport, UIView;
@protocol SXDocumentControllerProvider, SXGradientFactory, SXImageViewFactory, SXPresentationDelegate;

@interface SXDocumentStyleRenderer : NSObject <SXViewportChangeListener, SXDocumentStyleRenderer>
{
    id <SXPresentationDelegate> _presentationDelegate;
    id <SXDocumentControllerProvider> _documentControllerProvider;
    id <SXImageViewFactory> _imageViewFactory;
    SXViewport *_viewport;
    id <SXGradientFactory> _gradientFactory;
    UIView *_topBackgroundView;
    SXGradientFillView *_gradientFillView;
    SXImageFillView *_imageFillView;
    SXVideoFillView *_videoFillView;
}

@property(retain, nonatomic) SXVideoFillView *videoFillView; // @synthesize videoFillView=_videoFillView;
@property(retain, nonatomic) SXImageFillView *imageFillView; // @synthesize imageFillView=_imageFillView;
@property(retain, nonatomic) SXGradientFillView *gradientFillView; // @synthesize gradientFillView=_gradientFillView;
@property(retain, nonatomic) UIView *topBackgroundView; // @synthesize topBackgroundView=_topBackgroundView;
@property(readonly, nonatomic) id <SXGradientFactory> gradientFactory; // @synthesize gradientFactory=_gradientFactory;
@property(readonly, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;
@property(readonly, nonatomic) id <SXImageViewFactory> imageViewFactory; // @synthesize imageViewFactory=_imageViewFactory;
@property(readonly, nonatomic) id <SXDocumentControllerProvider> documentControllerProvider; // @synthesize documentControllerProvider=_documentControllerProvider;
@property(nonatomic) __weak id <SXPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void).cxx_destruct;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)layoutTopBackgroundView;
- (id)videoPlayerViewForFill:(id)arg1;
- (id)imageViewForFill:(id)arg1;
- (id)gradientViewForFill:(id)arg1;
- (id)viewForFill:(id)arg1;
- (void)applyFillForStyle:(id)arg1 onView:(id)arg2;
- (void)applyTopBackgroundForStyle:(id)arg1 onView:(id)arg2;
- (void)applyBackgroundColorForStyle:(id)arg1 onView:(id)arg2;
- (void)applyStyle:(id)arg1 onView:(id)arg2;
- (id)initWithDocumentControllerProvider:(id)arg1 viewport:(id)arg2 imageViewFactory:(id)arg3 gradientFactory:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

