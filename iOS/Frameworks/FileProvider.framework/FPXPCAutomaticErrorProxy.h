//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FileProvider/FPXPCAutomaticErrorProxy-Protocol.h>

@class NSError, NSString, Protocol;
@protocol NSXPCProxyCreating;

@interface FPXPCAutomaticErrorProxy : NSObject <FPXPCAutomaticErrorProxy>
{
    NSObject<NSXPCProxyCreating> *_target;
    Protocol *_protocol;
    NSError *_error;
    CDUnknownBlockType _requestWillBeginBlock;
    NSString *_name;
    id _retainSelfWhileMessageIsPending;
    _Bool _isSynchronous;
    _Atomic unsigned long long _retainCounter;
    int _pid;
}

+ (_Bool)sanitizeErrors;
- (void).cxx_destruct;
@property(nonatomic) int requestEffectivePid; // @synthesize requestEffectivePid=_pid;
- (id)description;
- (_Bool)conformsToProtocol:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)remoteObjectProxy;
- (id)synchronousRemoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_requestDidFinish:(id)arg1 requestDidFinishBlock:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_requestWillBegin:(SEL)arg1 requestID:(id)arg2;
- (id)initWithRemoteObjectProxy:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 requestWillBegin:(CDUnknownBlockType)arg6;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 requestWillBegin:(CDUnknownBlockType)arg6 requestDidFinish:(CDUnknownBlockType)arg7;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 requestWillBegin:(CDUnknownBlockType)arg6;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5;

@end
