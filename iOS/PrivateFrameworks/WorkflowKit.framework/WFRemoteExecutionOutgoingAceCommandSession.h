//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WFRemoteExecutionAceCommandRequest;

@interface WFRemoteExecutionOutgoingAceCommandSession
{
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)finishWithError:(id)arg1;
- (void)finish;
- (void)handleIncomingProtobuf:(id)arg1;
- (void)sendToDestinations:(id)arg1 options:(id)arg2;
- (id)initWithService:(id)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, nonatomic) WFRemoteExecutionAceCommandRequest *request; // @dynamic request;

@end
