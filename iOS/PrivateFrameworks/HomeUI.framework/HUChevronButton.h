//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class UIImageView, UILabel, UIStackView;

@interface HUChevronButton : UIControl
{
    UILabel *_titleLabel;
    UIStackView *_containerView;
    UIImageView *_chevronImageView;
}

@property(retain, nonatomic) UIImageView *chevronImageView; // @synthesize chevronImageView=_chevronImageView;
@property(retain, nonatomic) UIStackView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

