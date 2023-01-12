//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NanoUniverse/CLKUIQuadViewDelegate-Protocol.h>
#import <NanoUniverse/CLKUIResourceProviderDelegate-Protocol.h>

@class CLKDevice, CLKUIQuadView, CLKUIResourceProviderKey, NSBundle, NSString, NUNIMetalQuad, NUNIResources, NUNIScene;
@protocol NUNIViewDelegate;

@interface NUNIView : UIView <CLKUIQuadViewDelegate, CLKUIResourceProviderDelegate>
{
    CLKDevice *_device;
    CLKUIQuadView *_quadView;
    CLKUIResourceProviderKey *_resourceProviderKey;
    NUNIResources *_resources;
    NUNIMetalQuad *_quad;
    NSBundle *_bundle;
    NSString *_textureSuffix;
    id <NUNIViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <NUNIViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)resourceProviderKey;
- (id)provideAtlasBacking:(id)arg1;
- (void)quadViewWillDisplay:(id)arg1 forTime:(double)arg2;
@property(retain, nonatomic) NUNIScene *scene;
- (void)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;
- (void)stopAnimation;
- (void)startAnimation;
- (void)setAnimationFrameInterval:(int)arg1;
- (void)layoutSubviews;
- (void)setOpaque:(_Bool)arg1;
- (id)quadView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 textureSuffix:(id)arg2 colorSpace:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 textureSuffix:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
