//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class UIStatusBarForegroundStyleAttributes, UIStatusBarStyleRequest;

__attribute__((visibility("hidden")))
@interface UIStatusBarStyleAttributes : NSObject <NSCopying>
{
    UIStatusBarStyleRequest *_request;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
    _Bool _pulsingAnimationEnabled;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isPulsingAnimationEnabled) _Bool pulsingAnimationEnabled; // @synthesize pulsingAnimationEnabled=_pulsingAnimationEnabled;
- (long long)tapButtonType;
- (_Bool)shouldShowInternalItemType:(int)arg1 withScreenCapabilities:(id)arg2;
- (double)glowAnimationDuration;
- (id)newForegroundStyleWithHeight:(double)arg1;
- (id)backgroundImageName;
- (id)backgroundColorWithTintColor:(id)arg1;
- (_Bool)shouldUseVisualAltitude;
- (_Bool)shouldProduceReturnEvent;
- (_Bool)isDoubleHeight;
- (_Bool)usesVerticalLayout;
- (_Bool)isLockScreen;
- (_Bool)isTransparent;
- (_Bool)isTranslucent;
- (double)heightForMetrics:(long long)arg1;
- (double)heightForOrientation:(long long)arg1;
- (long long)idiom;
- (id)foregroundStyle;
- (_Bool)supportsRasterization;
- (long long)legibilityStyle;
- (long long)style;
@property(nonatomic) double foregroundAlpha; // @dynamic foregroundAlpha;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithRequest:(id)arg1;

@end
