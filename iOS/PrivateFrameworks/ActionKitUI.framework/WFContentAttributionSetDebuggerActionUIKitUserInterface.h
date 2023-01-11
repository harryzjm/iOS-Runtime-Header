//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFActionUserInterface.h>

#import <ActionKitUI/WFContentAttributionSetDebuggerActionUserInterface-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFContentAttributionSetDebuggerActionUIKitUserInterface : WFActionUserInterface <WFContentAttributionSetDebuggerActionUserInterface>
{
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)finish;
- (void)done;
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showWithInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
