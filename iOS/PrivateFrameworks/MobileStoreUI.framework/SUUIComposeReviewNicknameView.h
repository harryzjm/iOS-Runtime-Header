//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class SUUIComposeReviewSampleCardView, SUUIGradientView, UILabel, UITextField;

__attribute__((visibility("hidden")))
@interface SUUIComposeReviewNicknameView : UIView
{
    UITextField *_nicknameTextfield;
    UILabel *_nicknameInfoLabel;
    UILabel *_titleView;
    UILabel *_nicknamePlaceholderLabel;
    SUUIComposeReviewSampleCardView *_sampleCardView;
    SUUIGradientView *_sampleCardGradientView;
    UIView *_nicknameBackgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *nicknameBackgroundView; // @synthesize nicknameBackgroundView=_nicknameBackgroundView;
@property(retain, nonatomic) SUUIGradientView *sampleCardGradientView; // @synthesize sampleCardGradientView=_sampleCardGradientView;
@property(retain, nonatomic) SUUIComposeReviewSampleCardView *sampleCardView; // @synthesize sampleCardView=_sampleCardView;
@property(retain, nonatomic) UILabel *nicknamePlaceholderLabel; // @synthesize nicknamePlaceholderLabel=_nicknamePlaceholderLabel;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UILabel *nicknameInfoLabel; // @synthesize nicknameInfoLabel=_nicknameInfoLabel;
@property(retain, nonatomic) UITextField *nicknameTextfield; // @synthesize nicknameTextfield=_nicknameTextfield;
- (void)_setupInfo;
- (void)_setupTextField;
- (void)_setupSampleCardView;
- (void)_setupTitle;
- (void)_setupView;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

