//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIButton, UIImage, UILabel, UIView;

@interface CKTwoButtonInlineNotificationView
{
    UIView *_contentView;
    UIButton *_failureButton;
    UILabel *_headerLabel;
    UILabel *_descriptionLabel;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIView *_horizontalDivider;
    UIView *_verticalDivider;
    UIView *_leftGrayoutView;
    UIView *_rightGrayoutView;
}

@property(retain, nonatomic) UIView *rightGrayoutView; // @synthesize rightGrayoutView=_rightGrayoutView;
@property(retain, nonatomic) UIView *leftGrayoutView; // @synthesize leftGrayoutView=_leftGrayoutView;
@property(retain, nonatomic) UIView *verticalDivider; // @synthesize verticalDivider=_verticalDivider;
@property(retain, nonatomic) UIView *horizontalDivider; // @synthesize horizontalDivider=_horizontalDivider;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) UIButton *failureButton; // @synthesize failureButton=_failureButton;
- (void).cxx_destruct;
- (void)_handleContentSizeCategoryDidChange:(id)arg1;
- (void)_handleTouchUpOutside:(id)arg1;
- (void)_handleTouchUpInside:(id)arg1;
- (void)_handleTouchDown:(id)arg1;
@property(nonatomic) _Bool rightButtonIsGrayedOut; // @dynamic rightButtonIsGrayedOut;
@property(nonatomic) _Bool leftButtonIsGrayedOut; // @dynamic leftButtonIsGrayedOut;
- (void)_updateFonts;
- (double)_heightForBottomBoxWithContainerWidth:(double)arg1 startingYOffset:(double)arg2 leftButtonFrame:(struct CGRect *)arg3 rightButtonFrame:(struct CGRect *)arg4 dividerFrame:(struct CGRect *)arg5 leftGrayoutViewFrame:(struct CGRect *)arg6 rightGrayoutViewFrame:(struct CGRect *)arg7;
- (double)_heightForTopBoxWithContainerWidth:(double)arg1 failureButtonFrame:(struct CGRect *)arg2 labelFrame:(struct CGRect *)arg3 descriptionFrame:(struct CGRect *)arg4;
@property(retain, nonatomic) NSString *rightButtonText; // @dynamic rightButtonText;
@property(retain, nonatomic) NSString *leftButtonText; // @dynamic leftButtonText;
@property(retain, nonatomic) NSString *descriptionText; // @dynamic descriptionText;
@property(retain, nonatomic) NSString *headerText; // @dynamic headerText;
- (struct CGSize)contentViewSizeThatFits:(struct CGSize)arg1;
- (id)contentView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) UIImage *icon; // @dynamic icon;

@end

