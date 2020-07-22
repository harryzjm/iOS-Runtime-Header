//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class UILabel, UIView;

@interface SKUIRoundedRectButton : UIButton
{
    UIView *_borderView;
    UILabel *_subtitleLabel;
}

- (void).cxx_destruct;
- (void)_reloadFonts;
- (void)_reloadColors;
- (id)_basicAnimationWithKeyPath:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)tintColorDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setTitleEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setSubtitleWithLabel:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

