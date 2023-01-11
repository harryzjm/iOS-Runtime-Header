//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class ASVBlurredBackgroundView, NSLayoutConstraint, NSString, UILabel;

@interface ASVTrackingStateStatusLabel : UIView
{
    long long _controlStyle;
    UILabel *_label;
    ASVBlurredBackgroundView *_blurredBackgroundView;
    NSLayoutConstraint *_viewWidthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *viewWidthConstraint; // @synthesize viewWidthConstraint=_viewWidthConstraint;
@property(retain, nonatomic) ASVBlurredBackgroundView *blurredBackgroundView; // @synthesize blurredBackgroundView=_blurredBackgroundView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) long long controlStyle; // @synthesize controlStyle=_controlStyle;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *text;
- (id)initWithFrame:(struct CGRect)arg1 controlStyle:(long long)arg2;

@end
