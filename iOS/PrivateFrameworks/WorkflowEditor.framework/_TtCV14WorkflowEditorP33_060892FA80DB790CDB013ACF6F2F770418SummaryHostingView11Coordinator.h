//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtCV14WorkflowEditorP33_060892FA80DB790CDB013ACF6F2F770418SummaryHostingView11Coordinator : NSObject
{
    MISSING_TYPE *view;
}

- (void).cxx_destruct;
- (id)init;
- (void)showParameterEditingHint:(id)arg1;
- (void)showVariableEditorWithOptions:(id)arg1 fromSourceRect:(struct CGRect)arg2;
- (void)revealAction:(id)arg1 preScrollHandler:(CDUnknownBlockType)arg2 goBackHandler:(CDUnknownBlockType)arg3 scrolledAwayHandler:(CDUnknownBlockType)arg4;
- (void)showActionOutputPickerAllowingShortcutInput:(_Bool)arg1 variableProvider:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)summaryCoordinator:(id)arg1 outputButtonDidChange:(_Bool)arg2;
- (void)summaryCoordinator:(id)arg1 disclosureArrowDidChange:(_Bool)arg2;
- (void)summaryCoordinatorDidInvalidateSize:(id)arg1;
- (id)viewControllerForCoordinator:(id)arg1;

@end

