//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIButton, UIStackView;

@interface LUILogOptionsView : UIView
{
    UIStackView *_buttonStackView;
    UIButton *_tenMinutesLogButton;
    UIButton *_halfHourButton;
    UIButton *_hourButton;
    UIButton *_lastDayButton;
    UIButton *_streamButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *streamButton; // @synthesize streamButton=_streamButton;
@property(retain, nonatomic) UIButton *lastDayButton; // @synthesize lastDayButton=_lastDayButton;
@property(retain, nonatomic) UIButton *hourButton; // @synthesize hourButton=_hourButton;
@property(retain, nonatomic) UIButton *halfHourButton; // @synthesize halfHourButton=_halfHourButton;
@property(retain, nonatomic) UIButton *tenMinutesLogButton; // @synthesize tenMinutesLogButton=_tenMinutesLogButton;
@property(retain, nonatomic) UIStackView *buttonStackView; // @synthesize buttonStackView=_buttonStackView;
- (id)_createButtonWithTitle:(id)arg1;
- (id)_createButtonStackView;
- (void)layoutSubviews;
- (void)_setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end
