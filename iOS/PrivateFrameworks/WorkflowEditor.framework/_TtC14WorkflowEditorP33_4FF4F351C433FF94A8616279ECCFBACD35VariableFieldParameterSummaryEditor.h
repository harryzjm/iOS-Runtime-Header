//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC14WorkflowEditorP33_4FF4F351C433FF94A8616279ECCFBACD35VariableFieldParameterSummaryEditor
{
    MISSING_TYPE *hasStagedChanges;
}

- (id)initWithParameter:(id)arg1 initialState:(id)arg2 initialArrayState:(id)arg3 arrayIndex:(long long)arg4 processing:(_Bool)arg5;
- (void)textEntryDidFinish;
- (void)textEntryTextDidChange:(id)arg1;
- (void)textEntryWillBegin:(id)arg1 allowMultipleLines:(_Bool *)arg2;
- (void)cancelEditingWithCompletionHandler:(void (^)(void))arg1;
- (void)beginEditingSlotWithIdentifier:(id)arg1 presentationAnchor:(id)arg2;

@end
