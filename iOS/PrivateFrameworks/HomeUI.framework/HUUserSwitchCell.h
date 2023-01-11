//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIActivityIndicatorView, UISwitch;
@protocol HUUserSwitchCellDelegate;

@interface HUUserSwitchCell
{
    _Bool _loading;
    id <HUUserSwitchCellDelegate> _delegate;
    UISwitch *_switchView;
    UIActivityIndicatorView *_activityIndicator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UISwitch *switchView; // @synthesize switchView=_switchView;
@property(nonatomic) __weak id <HUUserSwitchCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
- (void)_toggleOn:(id)arg1;
- (double)labelSpacing;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isOn) _Bool on;
- (void)setDisabled:(_Bool)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
