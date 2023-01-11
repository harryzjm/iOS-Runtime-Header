//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class UIColor, UIView;

@interface PKNumericBorderButton : UIButton
{
    UIView *_bottomBorder;
    UIView *_topBorder;
    UIView *_trailingBorder;
    UIView *_leadingBorder;
    UIColor *_normalBackgroundColor;
    UIColor *_highlightedBackgroundColor;
}

- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(copy, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
- (void)setBorder:(unsigned long long)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)pk_applyAppearance:(id)arg1;

@end
