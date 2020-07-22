//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSLayoutConstraint, NSString, UIButton, UIImage, UILabel;

@interface PUAdjustmentsModePickerCell : UITableViewCell
{
    UIButton *_accessoryButton;
    UILabel *_displayLabel;
    UILabel *_displayValueLabel;
    NSArray *_accessoryButtonConstraints;
    NSArray *_displayValueLabelConstraints;
    NSLayoutConstraint *_standardLeadingConstraint;
    NSLayoutConstraint *_subLeadingConstraint;
    _Bool _isSubMode;
    NSString *_localizedModeName;
    UIImage *_modeIcon;
    NSString *_currentDisplayValue;
    long long _buttonType;
    CDUnknownBlockType _buttonAction;
}

+ (void)configureModePickerCellLabel:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType buttonAction; // @synthesize buttonAction=_buttonAction;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
@property(nonatomic) _Bool isSubMode; // @synthesize isSubMode=_isSubMode;
@property(copy, nonatomic) NSString *currentDisplayValue; // @synthesize currentDisplayValue=_currentDisplayValue;
@property(retain, nonatomic) UIImage *modeIcon; // @synthesize modeIcon=_modeIcon;
@property(copy, nonatomic) NSString *localizedModeName; // @synthesize localizedModeName=_localizedModeName;
- (void).cxx_destruct;
- (void)_preferredContentSizeCategoryChanged;
- (void)_handleAccessoryButton:(id)arg1;
- (void)_updateDisplayValueLabel;
- (void)_updateDisplayLabel;
- (void)_updateButton;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

