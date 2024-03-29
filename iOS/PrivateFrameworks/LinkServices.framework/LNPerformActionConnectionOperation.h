//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LNAction, LNActionExecutor, LNSuccessResult;

__attribute__((visibility("hidden")))
@interface LNPerformActionConnectionOperation
{
    LNAction *_action;
    LNActionExecutor *_executor;
    CDUnknownBlockType _completionHandler;
    LNSuccessResult *_result;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LNSuccessResult *result; // @synthesize result=_result;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) LNActionExecutor *executor; // @synthesize executor=_executor;
@property(readonly, nonatomic) LNAction *action; // @synthesize action=_action;
- (double)timeout;
- (void)finishWithError:(id)arg1;
- (void)start;
- (id)initWithConnectionInterface:(id)arg1 action:(id)arg2 executor:(id)arg3 executorActivity:(id)arg4 queue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;

@end

