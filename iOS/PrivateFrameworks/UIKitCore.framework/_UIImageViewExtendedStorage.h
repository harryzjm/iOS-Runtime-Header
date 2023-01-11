//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/CAAnimationDelegate-Protocol.h>

@class CIContext, NSArray, NSMapTable, NSString, UIImage, UIImageSymbolConfiguration, UIImageView, UILayoutGuide, UIView, _UIImageLoader;
@protocol _UIImageViewLoadingDelegate;

__attribute__((visibility("hidden")))
@interface _UIImageViewExtendedStorage : NSObject <CAAnimationDelegate>
{
    UIImageView *_imageView;
    UIImage *_image;
    UIImage *_highlightedImage;
    UIImage *_configuredImage;
    UIImage *_configuredHighlightedImage;
    UIImageSymbolConfiguration *_preferredSymbolConfiguration;
    UIImageSymbolConfiguration *_overridingSymbolConfiguration;
    NSArray *_animationImages;
    NSArray *_highlightedAnimationImages;
    double _animationDuration;
    long long _animationRepeatCount;
    long long _defaultRenderingMode;
    unsigned long long _templateImageRenderingEffects;
    UIImage *_displayedImage;
    UIImage *_displayedHighlightedImage;
    CIContext *_CIContext;
    UILayoutGuide *_imageContentGuide;
    NSMapTable *_layouts;
    unsigned int _drawMode;
    _UIImageLoader *_imageLoader;
    id <_UIImageViewLoadingDelegate> _loadingDelegate;
    UIImage *_imageBeingSetByLoader;
    UIView *_placeholderView;
    struct {
        unsigned int highlighted:1;
        unsigned int masksTemplateImages:1;
        unsigned int adjustsImageSizeForAccessibilityContentSizeCategory:1;
        unsigned int startingLoad:1;
        unsigned int enqueueingLoad:1;
        unsigned int stoppingLoad:1;
    } _flags;
}

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)initForImageView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
