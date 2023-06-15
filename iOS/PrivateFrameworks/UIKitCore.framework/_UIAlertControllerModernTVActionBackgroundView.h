//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerModernTVActionBackgroundView
{
    NSMutableDictionary *_vibrancies;
    _Bool _shouldUseTintColorAsHighlightColor;
    UIVisualEffectView *_effectView;
}

+ (struct CGSize)backgroundInsetAmount;
- (void).cxx_destruct;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) _Bool shouldUseTintColorAsHighlightColor; // @synthesize shouldUseTintColorAsHighlightColor=_shouldUseTintColorAsHighlightColor;
- (double)_shadowRadius;
- (double)_shadowOpacity;
- (struct CGSize)_shadowOffset;
- (_Bool)vibrantCompositing:(unsigned long long)arg1;
- (void)setVibrantCompositing:(_Bool)arg1 forState:(unsigned long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateCompositingForHighlighted:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)_updateBackgroundColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

