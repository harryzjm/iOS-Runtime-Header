//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFActionUserInterface.h>

#import <ActionKitUI/EKEventEditViewDelegate-Protocol.h>
#import <ActionKitUI/WFAddNewEventActionUserInterface-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFAddNewEventActionUIKitUserInterface : WFActionUserInterface <WFAddNewEventActionUserInterface, EKEventEditViewDelegate>
{
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)finishWithEventIdentifier:(id)arg1 error:(id)arg2;
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showWithEventParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
