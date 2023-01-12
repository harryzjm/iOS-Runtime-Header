//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UISwitch, UITextField, VUIDebugViewDefaults, VUILabel, VUISeparatorView, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIDebugCollectionViewDefaultsCell
{
    VUITextLayout *_titleLayout;
    VUILabel *_titleLabel;
    VUITextLayout *_subtitleLayout;
    VUILabel *_subtitleLabel;
    UISwitch *_defaultsSwitch;
    UITextField *_textField;
    VUIDebugViewDefaults *_defaults;
    VUISeparatorView *_separatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VUISeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) VUIDebugViewDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UISwitch *defaultsSwitch; // @synthesize defaultsSwitch=_defaultsSwitch;
@property(retain, nonatomic) VUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) VUITextLayout *subtitleLayout; // @synthesize subtitleLayout=_subtitleLayout;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) VUITextLayout *titleLayout; // @synthesize titleLayout=_titleLayout;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)_defaultsSwitchPressed:(id)arg1;
- (void)layoutSubviews;
- (void)configureCellWithDefaults:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

