//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@interface WFChooseFromListAction : WFHandleCustomIntentAction
{
}

+ (id)userInterfaceProtocol;
- (_Bool)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2;
- (void)getOutputFromIntentResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)roundedImageFromWFImage:(id)arg1 roundingStyle:(unsigned long long)arg2 desiredSize:(struct CGSize)arg3 desiredScale:(double)arg4;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)populatesInputFromInputParameter;
- (void)presentAlertWithUserInterface:(id)arg1 input:(id)arg2;
- (id)contentItemsFromSelectedItem:(id)arg1;
- (id)itemsFromDictionaryItem:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (_Bool)shouldCreateIntentAvailableResource;

@end
