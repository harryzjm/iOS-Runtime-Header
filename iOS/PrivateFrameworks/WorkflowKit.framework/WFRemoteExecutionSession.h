//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSString, WFRemoteExecutionRequest;
@protocol OS_dispatch_source, WFRemoteExecutionSessionDelegate;

@interface WFRemoteExecutionSession : NSObject
{
    unsigned long long _state;
    id <WFRemoteExecutionSessionDelegate> _delegate;
    WFRemoteExecutionRequest *_request;
    IDSService *_service;
    NSString *_idsIdentifier;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property(retain, nonatomic) WFRemoteExecutionRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak id <WFRemoteExecutionSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (id)invalidAceCommandError;
- (id)sessionTimedOutError;
- (void)cancelTimeout;
- (void)restartTimeout;
- (void)handleTimeout;
- (double)timeoutLimitInSeconds;
- (void)finish;
- (void)finishWithError:(id)arg1;
- (void)handleIncomingProtobuf:(id)arg1;
- (void)sendToDestinations:(id)arg1 options:(id)arg2;
- (id)initWithService:(id)arg1;

@end
