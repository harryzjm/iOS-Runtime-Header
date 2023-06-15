//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIContext, NSArray, NSMapTable, NSString, UIImage, UIImageSymbolConfiguration, UILayoutGuide, UIView, _UIImageLoader, _UIImageViewImageProperties;
@protocol _UIImageViewLoadingDelegate;

__attribute__((visibility("hidden")))
@interface _UIImageViewSimpleStorage : NSObject
{
    _UIImageViewImageProperties *_imageProperties;
    NSMapTable *layouts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *layouts; // @synthesize layouts;
@property(nonatomic, getter=isStoppingLoad) _Bool stoppingLoad;
@property(nonatomic, getter=isEnqueueingLoad) _Bool enqueueingLoad;
@property(nonatomic, getter=isStartingLoad) _Bool startingLoad;
@property(nonatomic) _Bool adjustsImageSizeForAccessibilityContentSizeCategory;
@property(nonatomic) _Bool masksTemplateImages;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(retain, nonatomic) UIView *placeholderView;
@property(retain, nonatomic) UIImage *imageBeingSetByLoader;
@property(retain, nonatomic) id <_UIImageViewLoadingDelegate> loadingDelegate;
@property(retain, nonatomic) _UIImageLoader *imageLoader;
@property(nonatomic) unsigned int drawMode;
@property(retain, nonatomic) UILayoutGuide *imageContentGuide;
@property(retain, nonatomic) CIContext *CIContext;
@property(nonatomic) unsigned long long templateImageRenderingEffects;
@property(nonatomic) long long defaultRenderingMode;
@property(nonatomic) long long animationRepeatCount;
@property(nonatomic) double animationDuration;
@property(retain, nonatomic) NSArray *highlightedAnimationImages;
@property(retain, nonatomic) NSArray *animationImages;
@property(retain, nonatomic) UIImageSymbolConfiguration *overridingSymbolConfiguration;
@property(retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property(retain, nonatomic) UIImage *resolvedHighlightedImage;
@property(retain, nonatomic) UIImage *highlightedImage;
@property(retain, nonatomic) UIImage *resolvedImage;
@property(retain, nonatomic) UIImage *image;
- (id)imageProperties;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

