//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDCell
{
    _Bool _flashing;
    _Bool _categoryVisible;
    _Bool _drawsBackground;
}

@property(nonatomic) _Bool drawsBackground; // @synthesize drawsBackground=_drawsBackground;
@property(nonatomic, getter=isCategoryVisible) _Bool categoryVisible; // @synthesize categoryVisible=_categoryVisible;
@property(nonatomic, getter=isFlashing) _Bool flashing; // @synthesize flashing=_flashing;
- (void)updateConfigurationUsingState:(id)arg1;
- (id)defaultContentConfiguration;
- (long long)_backgroundStyleForState:(id)arg1;
@property(readonly, nonatomic, getter=isBackgroundVisible) _Bool backgroundVisible;
- (void)prepareForReuse;
- (id)configurationState;
- (_Bool)_shouldSkipKeyCommand:(id)arg1 forMovement:(long long)arg2;
- (long long)_focusItemDeferralMode;
- (_Bool)canBecomeFocused;
- (_Bool)_wantsFocusRing;
- (id)initWithFrame:(struct CGRect)arg1;

@end
