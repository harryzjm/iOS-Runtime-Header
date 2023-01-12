//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton, UILabel, UIStackView;
@protocol WFWidgetConfigurationCardHeaderViewDelegate;

__attribute__((visibility("hidden")))
@interface WFWidgetConfigurationCardHeaderView : UIView
{
    id <WFWidgetConfigurationCardHeaderViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSLayoutConstraint *_bottomAreaHeightConstraint;
    UIStackView *_labelsStackView;
    UIView *_blendedBorderView;
    UIButton *_closeButton;
    double _widgetDescriptionTallScriptCompensatedSpacing;
}

- (void).cxx_destruct;
@property(nonatomic) double widgetDescriptionTallScriptCompensatedSpacing; // @synthesize widgetDescriptionTallScriptCompensatedSpacing=_widgetDescriptionTallScriptCompensatedSpacing;
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) UIView *blendedBorderView; // @synthesize blendedBorderView=_blendedBorderView;
@property(readonly, nonatomic) UIStackView *labelsStackView; // @synthesize labelsStackView=_labelsStackView;
@property(readonly, nonatomic) NSLayoutConstraint *bottomAreaHeightConstraint; // @synthesize bottomAreaHeightConstraint=_bottomAreaHeightConstraint;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WFWidgetConfigurationCardHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)close;
- (void)updateIconBorderColor;
- (void)updateIconBorderWidth;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithIcon:(id)arg1 closeButton:(id)arg2 title:(id)arg3 subtitle:(id)arg4;
- (id)initWithRequest:(id)arg1;

@end

