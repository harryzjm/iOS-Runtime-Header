//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <WorkflowUI/UITextFieldDelegate-Protocol.h>

@class NSArray, NSString, UITextField, UIView, WFWorkflowWizardNameClearButton, WFWorkflowWizardNameIconButton, WFWorkflowWizardNameRecordButton;
@protocol WFWorkflowWizardNameCellDataSource, WFWorkflowWizardNameCellDelegate;

@interface WFWorkflowWizardNameCell : UITableViewCell <UITextFieldDelegate>
{
    _Bool _showsHeySiri;
    _Bool _useDoneButtonOnKeyboard;
    _Bool _useHorizontalInset;
    id <WFWorkflowWizardNameCellDelegate> _delegate;
    id <WFWorkflowWizardNameCellDataSource> _dataSource;
    UIView *_platterView;
    UIView *_phraseView;
    WFWorkflowWizardNameIconButton *_iconButton;
    WFWorkflowWizardNameRecordButton *_recordButton;
    WFWorkflowWizardNameClearButton *_clearButton;
    UITextField *_shortcutNameTextField;
    NSArray *_horizontalConstraintsWithInset;
    NSArray *_horizontalConstraintsWithoutInset;
}

+ (double)defaultRowHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *horizontalConstraintsWithoutInset; // @synthesize horizontalConstraintsWithoutInset=_horizontalConstraintsWithoutInset;
@property(retain, nonatomic) NSArray *horizontalConstraintsWithInset; // @synthesize horizontalConstraintsWithInset=_horizontalConstraintsWithInset;
@property(retain, nonatomic) UITextField *shortcutNameTextField; // @synthesize shortcutNameTextField=_shortcutNameTextField;
@property(retain, nonatomic) WFWorkflowWizardNameClearButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) WFWorkflowWizardNameRecordButton *recordButton; // @synthesize recordButton=_recordButton;
@property(retain, nonatomic) WFWorkflowWizardNameIconButton *iconButton; // @synthesize iconButton=_iconButton;
@property(retain, nonatomic) UIView *phraseView; // @synthesize phraseView=_phraseView;
@property(retain, nonatomic) UIView *platterView; // @synthesize platterView=_platterView;
@property(nonatomic) _Bool useHorizontalInset; // @synthesize useHorizontalInset=_useHorizontalInset;
@property(nonatomic) _Bool useDoneButtonOnKeyboard; // @synthesize useDoneButtonOnKeyboard=_useDoneButtonOnKeyboard;
@property(nonatomic) _Bool showsHeySiri; // @synthesize showsHeySiri=_showsHeySiri;
@property(nonatomic) __weak id <WFWorkflowWizardNameCellDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WFWorkflowWizardNameCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapClearButton;
- (void)didTapRecordButton;
- (void)didTapIconButton;
- (void)updateViewForHorizontalConstraints;
- (void)updateViewForDoneButton;
- (void)updateButtonVisibility;
- (void)textFieldDidChange;
- (_Bool)shortcutNameIsEmpty;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)configureWithName:(id)arg1 showsHeySiri:(_Bool)arg2 useHorizontalInset:(_Bool)arg3 icon:(id)arg4 customImageData:(id)arg5;
- (void)configureWithName:(id)arg1 showsHeySiri:(_Bool)arg2 useHorizontalInset:(_Bool)arg3 icon:(id)arg4;
- (void)configureWithName:(id)arg1 showsHeySiri:(_Bool)arg2 icon:(id)arg3;
- (void)setIcon:(id)arg1 customImageData:(id)arg2;
- (void)setUseHorizontalContraints:(_Bool)arg1;
- (void)setName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name;
- (void)setDropdownMenuForIconButton:(id)arg1;
- (id)dropdownMenuIconButton;
- (id)regularIconButton;
- (void)setIconButtonConstraints;
- (_Bool)useDropdownMenuIconButton;
- (void)configureIconButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
