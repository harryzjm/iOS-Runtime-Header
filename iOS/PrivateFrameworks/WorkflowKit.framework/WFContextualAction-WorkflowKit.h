//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceShortcutClient/WFContextualAction.h>

@class WFContextualActionContext;

@interface WFContextualAction (WorkflowKit)
- (void)getInputWithCompletionHandler:(void (^)(WFContentCollection *, NSError *))arg1;
@property(nonatomic, readonly) _Bool selfPopulatesInput;
- (void)_getActionRepresentationTakingInput:(_Bool)arg1 context:(WFContextualActionContext *)arg2 completionHandler:(void (^)(WFAction *, NSError *))arg3;
- (void)getActionRepresentationTakingInput:(_Bool)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@end

