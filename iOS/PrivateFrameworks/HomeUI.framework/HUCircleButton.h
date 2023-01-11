//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class HUCircleView, NSArray, UIImage, UIImageView;

@interface HUCircleButton : UIButton
{
    UIImage *_iconImage;
    HUCircleView *_circleView;
    UIImageView *_iconImageView;
    NSArray *_constraints;
}

@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) HUCircleView *circleView; // @synthesize circleView=_circleView;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
- (void).cxx_destruct;
- (void)setAlpha:(double)arg1;
- (void)tintColorDidChange;
- (void)_setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end
