//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC14SiriKitRuntime35ExecutionBridgeDelegateToXPCAdapter : _TtCs12_SwiftObject
{
    MISSING_TYPE *wrapped;
    MISSING_TYPE *runtimeNotReadyHandler;
}

- (void)runtimeWasNotReadyWithReply:(CDUnknownBlockType)arg1;
- (void)fetchSpeechInfoWithReply:(CDUnknownBlockType)arg1;
- (void)fetchContextsFor:(id)arg1 includesNearByDevices:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareForAudioHandoffFailedWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareForAudioHandoffWithCompletion:(CDUnknownBlockType)arg1;
- (void)fallbackToServerForResultCandidateId:(id)arg1;
- (void)flowPluginWillExecuteWithFlowPluginInfo:(id)arg1;
- (void)closeWithExecutionOutput:(id)arg1 errorString:(id)arg2;
- (void)closeWithExecutionOutput:(id)arg1;
- (void)submitWithExecutionOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
