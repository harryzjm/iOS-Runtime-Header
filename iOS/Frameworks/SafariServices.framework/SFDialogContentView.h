//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SafariServices/UITableViewDataSource-Protocol.h>
#import <SafariServices/UITableViewDelegate-Protocol.h>
#import <SafariServices/UITextFieldDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, SFDialogTextField, SFDialogTextView, UIButton, UIStackView, UITableView, _SFDialogView;

__attribute__((visibility("hidden")))
@interface SFDialogContentView : UIView <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_actionButtons;
    UIStackView *_actionButtonsView;
    UIButton *_closeButton;
    unsigned long long _actionIndexTriggeredByOptionReturnKey;
    unsigned long long _actionIndexTriggeredByEscapeKey;
    unsigned long long _actionIndexTriggeredByReturnKey;
    _Bool _hasAttemptedHardwareKeyboardFocus;
    SFDialogTextField *_inputTextField;
    NSArray *_layoutConstraintsWhenInputIsVisible;
    NSArray *_layoutConstraintsWhenPasswordIsVisible;
    NSArray *_layoutConstraintsWhenInputAndPasswordAreVisible;
    SFDialogTextView *_messageTextView;
    SFDialogTextField *_passwordTextField;
    NSLayoutConstraint *_actionButtonsLeadingConstraintForHorizontalStackAlignment;
    NSLayoutConstraint *_actionButtonsLeadingConstraintForVerticalStackAlignment;
    UITableView *_tableView;
    NSArray *_tableData;
    CDUnknownBlockType _tableDidSelectRowAction;
    long long _selectedRow;
    NSArray *_layoutConstraintsWhenTableViewIsVisible;
    NSLayoutConstraint *_tableViewHeightConstraint;
    _SFDialogView *_dialogView;
    NSArray *_actions;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(nonatomic) __weak _SFDialogView *dialogView; // @synthesize dialogView=_dialogView;
- (void)_invokeDelegateWithSelectedIndex:(unsigned long long)arg1;
- (void)_escapeAction:(id)arg1;
- (void)_optionReturnAction:(id)arg1;
- (void)_returnAction:(id)arg1;
- (void)_focusInputTextField:(id)arg1;
- (void)_actionTriggered:(id)arg1;
- (_Bool)_usesLoginFormAppearance;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)didAppear;
- (void)setTableViewRows:(id)arg1 didSelectRowAction:(CDUnknownBlockType)arg2;
- (void)_updateActionButtons;
- (void)endEditing;
- (void)_setText:(id)arg1 placeholder:(id)arg2 forTextField:(id)arg3;
- (void)setPasswordText:(id)arg1 placeholder:(id)arg2;
- (void)setInputText:(id)arg1 placeholder:(id)arg2;
- (void)setMessageText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (double)_desiredButtonsWidth;
- (void)updateConstraints;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)keyCommands;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
