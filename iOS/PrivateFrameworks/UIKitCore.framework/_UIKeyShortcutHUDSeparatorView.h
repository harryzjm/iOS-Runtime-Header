//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIColor, UIVisualEffect, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDSeparatorView : UIView
{
    UIVisualEffectView *_separatorVisualEffectView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIVisualEffectView *separatorVisualEffectView; // @synthesize separatorVisualEffectView=_separatorVisualEffectView;
@property(retain, nonatomic) UIVisualEffect *visualEffect;
@property(retain, nonatomic) UIColor *separatorColor;
@property(nonatomic, getter=isSeparatorHidden) _Bool separatorHidden;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

