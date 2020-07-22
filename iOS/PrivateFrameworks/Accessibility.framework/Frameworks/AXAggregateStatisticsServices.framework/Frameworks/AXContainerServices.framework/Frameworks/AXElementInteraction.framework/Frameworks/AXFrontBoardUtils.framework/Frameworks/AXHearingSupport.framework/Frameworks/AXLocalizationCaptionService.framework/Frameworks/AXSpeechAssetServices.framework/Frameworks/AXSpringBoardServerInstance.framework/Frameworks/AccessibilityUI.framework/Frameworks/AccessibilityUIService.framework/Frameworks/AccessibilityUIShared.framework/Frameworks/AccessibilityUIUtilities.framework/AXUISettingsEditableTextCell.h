//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

#import <AccessibilityUIUtilities/UITextFieldDelegate-Protocol.h>

@class NSString, UITextField;

@interface AXUISettingsEditableTextCell : PSTableCell <UITextFieldDelegate>
{
    _Bool _shouldAllowSelection;
    UITextField *_nameTextField;
}

@property(nonatomic) _Bool shouldAllowSelection; // @synthesize shouldAllowSelection=_shouldAllowSelection;
@property(retain, nonatomic) UITextField *nameTextField; // @synthesize nameTextField=_nameTextField;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)setTextFieldValue:(id)arg1 specifier:(id)arg2;
- (id)textFieldValue:(id)arg1;
- (void)updateText;
- (void)layoutSubviews;
- (void)setSelectionStyle:(long long)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)initializeView;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)markNameTextFieldAccessible;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (_Bool)_accessibilityIgnoreInternalLabels;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

