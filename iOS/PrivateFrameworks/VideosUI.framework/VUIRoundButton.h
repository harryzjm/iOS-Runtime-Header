//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton, UIImage, UIStackView;
@protocol VUIRoundButtonDelegate;

@interface VUIRoundButton : UIView
{
    UIImage *_buttonImage;
    NSArray *_textLabels;
    id <VUIRoundButtonDelegate> _delegate;
    UIButton *_button;
    UIStackView *_textLabelStackView;
}

@property(retain, nonatomic) UIStackView *textLabelStackView; // @synthesize textLabelStackView=_textLabelStackView;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak id <VUIRoundButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *textLabels; // @synthesize textLabels=_textLabels;
@property(retain, nonatomic) UIImage *buttonImage; // @synthesize buttonImage=_buttonImage;
- (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (void)buttonReleased:(id)arg1;
- (void)buttonSelected:(id)arg1;
- (void)configureTextStackView;
- (void)_setUpViews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

