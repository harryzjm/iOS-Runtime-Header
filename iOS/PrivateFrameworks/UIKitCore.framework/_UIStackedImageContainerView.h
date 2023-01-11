//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIImageViewOverlayViewDelegate-Protocol.h>

@class NSObject, NSString, UIImage, UIMotionEffectGroup, UIView, _UIStackedImageConfiguration;
@protocol UINamedLayerStack;

@interface _UIStackedImageContainerView <_UIImageViewOverlayViewDelegate>
{
    UIMotionEffectGroup *_stackMotionEffects;
    _Bool _installsMotionEffectsWhenFocused;
    UIImage *_stackImage;
    NSObject<UINamedLayerStack> *_constructedStackImage;
    _UIStackedImageConfiguration *_config;
    UIView *_overlayView;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) _Bool installsMotionEffectsWhenFocused; // @synthesize installsMotionEffectsWhenFocused=_installsMotionEffectsWhenFocused;
@property(copy, nonatomic) _UIStackedImageConfiguration *config; // @synthesize config=_config;
@property(retain, nonatomic) NSObject<UINamedLayerStack> *constructedStackImage; // @synthesize constructedStackImage=_constructedStackImage;
@property(retain, nonatomic) UIImage *stackImage; // @synthesize stackImage=_stackImage;
- (void)overlayView:(id)arg1 didChangeClipsToBounds:(_Bool)arg2;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (_Bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
- (void)_uninstallMotionEffects;
- (void)_updateOverlayLayer;
- (void)_installMotionEffects;
@property(nonatomic) struct CGPoint focusDirection;
@property(nonatomic, getter=isPressed) _Bool pressed;
- (void)_setStackFocused:(_Bool)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3;
- (void)setStackFocused:(_Bool)arg1 withFocusAnimationCoordinator:(id)arg2;
@property(nonatomic, getter=isStackFocused) _Bool stackFocused;
- (void)_updateContainerLayerImages;
- (id)_imageContainerLayer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
