//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowEditor/UIDocumentPickerDelegate-Protocol.h>

@class MISSING_TYPE;

@interface _TtC14WorkflowEditor32FilePickerParameterSummaryEditor <UIDocumentPickerDelegate>
{
    MISSING_TYPE *chooser;
    MISSING_TYPE *modal;
}

- (void).cxx_destruct;
- (id)initWithParameter:(id)arg1 initialState:(id)arg2 initialArrayState:(id)arg3 arrayIndex:(long long)arg4 processing:(_Bool)arg5;
- (void)cancelEditingWithCompletionHandler:(void (^)(void))arg1;
- (void)beginEditingNewArrayElementFromPresentationAnchor:(id)arg1;
- (void)beginEditingSlotWithIdentifier:(id)arg1 presentationAnchor:(id)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;

@end
