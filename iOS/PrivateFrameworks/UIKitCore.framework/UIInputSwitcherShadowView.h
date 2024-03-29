//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, UIKeyboardMenuView, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherShadowView : UIView
{
    int m_mode;
    double m_pointerOffset;
    NSArray *m_gradientColors;
    UIKeyboardMenuView *_menu;
    _UIBackdropView *_blurView;
    struct CGRect _keyRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _UIBackdropView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) UIKeyboardMenuView *menu; // @synthesize menu=_menu;
@property(nonatomic) struct CGRect keyRect; // @synthesize keyRect=_keyRect;
@property(retain, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=m_gradientColors;
@property(nonatomic) double pointerOffset; // @synthesize pointerOffset=m_pointerOffset;
@property(nonatomic) int mode; // @synthesize mode=m_mode;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

