//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIFocusEffectSettings;

@interface _UIFocusEffect
{
    _UIFocusEffectSettings *_settings;
}

+ (id)_effectWithSettings:(id)arg1;
+ (id)_effectWithPrivateStyle:(long long)arg1;
+ (id)effectWithStyle:(long long)arg1 state:(long long)arg2;
@property(copy, nonatomic, getter=_settings, setter=_setSettings:) _UIFocusEffectSettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (_Bool)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (long long)_expectedUsage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (id)init;

@end

