//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;
@protocol WFVariableProvider, WFVariableUIDelegate, _TtP14WorkflowEditor42ParameterValuePickerViewControllerDelegate_;

@interface _TtC14WorkflowEditor34ParameterValuePickerViewController : UIViewController
{
    MISSING_TYPE *parameter;
    MISSING_TYPE *currentState;
    MISSING_TYPE *initialValue;
    MISSING_TYPE *allowsMultipleSelection;
    MISSING_TYPE *allowsVariables;
    MISSING_TYPE *delegate;
    MISSING_TYPE *variableProvider;
    MISSING_TYPE *variableUIDelegate;
    MISSING_TYPE *hostingViewController;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithParameter:(id)arg1 allowsVariables:(_Bool)arg2 allowsMultipleSelection:(_Bool)arg3 initialCollection:(id)arg4 currentState:(id)arg5;
@property(nonatomic) __weak id <WFVariableUIDelegate> variableUIDelegate; // @synthesize variableUIDelegate;
@property(nonatomic) __weak id <WFVariableProvider> variableProvider; // @synthesize variableProvider;
@property(nonatomic) __weak id <_TtP14WorkflowEditor42ParameterValuePickerViewControllerDelegate_> delegate; // @synthesize delegate;

@end
