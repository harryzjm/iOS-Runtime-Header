//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFModuleSummaryEditor.h"

@class MISSING_TYPE;
@protocol WFVariableProvider;

@interface _TtC14WorkflowEditor35QuantityFieldParameterSummaryEditor : WFModuleSummaryEditor
{
    MISSING_TYPE *autocompleteDataSource;
    MISSING_TYPE *hasStagedChanges;
    MISSING_TYPE *isPickingActionOutput;
    MISSING_TYPE *autocompleteCoordinator;
}

+ (unsigned long long)variableResultTypeForParameter:(id)arg1;
- (void).cxx_destruct;
- (id)initWithParameter:(id)arg1 arrayIndex:(long long)arg2 processing:(_Bool)arg3;
- (void)stageState:(id)arg1;
- (void)textEntryDidFinish;
- (void)textEntryTextDidChange:(id)arg1;
- (_Bool)textEntryShouldChangeText:(id)arg1;
- (void)textEntryWillBegin:(id)arg1 allowMultipleLines:(_Bool *)arg2;
- (id)clearButtonMenuItemForSlotWithIdentifier:(id)arg1;
- (_Bool)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)arg1;
- (id)stateByReplacingVariableFromCurrentState:(id)arg1 withVariable:(id)arg2;
@property(nonatomic, retain) id <WFVariableProvider> variableProvider;
- (void)cancelEditingWithCompletionHandler:(void (^)(void))arg1;
- (id)customMenuElementsForSlotWithIdentifier:(id)arg1 style:(unsigned long long)arg2;
- (void)beginEditingSlotWithIdentifier:(id)arg1 presentationAnchor:(id)arg2;

@end

