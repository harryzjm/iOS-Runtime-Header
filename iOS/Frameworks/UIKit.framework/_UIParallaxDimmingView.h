//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface _UIParallaxDimmingView
{
    UIImageView *leftEdgeFade;
    _Bool _backgroundIsDimmed;
    UIColor *_dimmingColor;
    UIView *_addingSubview;
}

@property(retain, nonatomic) UIView *addingSubview; // @synthesize addingSubview=_addingSubview;
@property(nonatomic) _Bool backgroundIsDimmed; // @synthesize backgroundIsDimmed=_backgroundIsDimmed;
@property(retain, nonatomic) UIColor *dimmingColor; // @synthesize dimmingColor=_dimmingColor;
- (void).cxx_destruct;
- (void)crossFade;
- (id)_basicAnimationWithKeyPath:(id)arg1;
- (void)didMoveToWindow;
- (void)_updateLeftEdgeFade:(_Bool)arg1;
- (id)initViewWrappingView:(id)arg1 withLeftBorder:(double)arg2 shouldReverseLayoutDirection:(_Bool)arg3;
- (id)defaultBorderColor;
- (id)initWithFrame:(struct CGRect)arg1 overrideDimmingColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
