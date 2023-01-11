//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class _UIBackdropViewSettings, _UIVisualEffectConfig;

@interface UIVisualEffect : NSObject <NSCopying, NSSecureCoding>
{
    _UIVisualEffectConfig *_effectConfig;
}

+ (_Bool)supportsSecureCoding;
+ (id)effectCompositingColor:(id)arg1 withMode:(long long)arg2 alpha:(double)arg3;
+ (id)effectCompositingImage:(id)arg1 withMode:(long long)arg2 alpha:(double)arg3;
+ (id)effectCompositingColor:(id)arg1;
+ (id)effectCompositingImage:(id)arg1;
+ (id)effectCombiningEffects:(id)arg1;
+ (id)emptyEffect;
@property(readonly, nonatomic) _UIVisualEffectConfig *effectConfig; // @synthesize effectConfig=_effectConfig;
- (void).cxx_destruct;
- (long long)_expectedUsage;
- (_Bool)_needsUpdateForMovingToWindow:(id)arg1 fromWindow:(id)arg2 inEffectView:(id)arg3;
- (_Bool)_needsUpdateForMovingToSuperview:(id)arg1 fromSuperview:(id)arg2 inEffectView:(id)arg3;
- (_Bool)_needsUpdateForOption:(id)arg1;
- (_Bool)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (_Bool)_selectorOverriden:(SEL)arg1;
- (void)_enumerateEffects:(CDUnknownBlockType)arg1;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (id)effectConfigForOptions:(id)arg1;
- (id)effectConfigForQuality:(long long)arg1;
@property(readonly, nonatomic) _Bool _isAutomaticStyle;
@property(readonly, nonatomic) _Bool _isATVStyle;
@property(readonly, nonatomic) _UIBackdropViewSettings *effectSettings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
