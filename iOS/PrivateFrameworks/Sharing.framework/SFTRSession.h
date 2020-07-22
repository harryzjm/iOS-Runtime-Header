//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SFSession, TRAnisetteDataHandler, TRSession;
@protocol OS_dispatch_queue;

@interface SFTRSession : NSObject
{
    _Bool _activateCalled;
    TRAnisetteDataHandler *_anisetteDataHandler;
    _Bool _invalidateCalled;
    NSMutableDictionary *_handlerMap;
    _Bool _connected;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFSession *_session;
    CDUnknownBlockType _disconnectHandler;
    CDUnknownBlockType _sendEventImpHandler;
    CDUnknownBlockType _sendRequestImpHandler;
}

@property(copy, nonatomic) CDUnknownBlockType sendRequestImpHandler; // @synthesize sendRequestImpHandler=_sendRequestImpHandler;
@property(copy, nonatomic) CDUnknownBlockType sendEventImpHandler; // @synthesize sendEventImpHandler=_sendEventImpHandler;
@property(copy, nonatomic) CDUnknownBlockType disconnectHandler; // @synthesize disconnectHandler=_disconnectHandler;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(retain, nonatomic) SFSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (id)_decodeTRMessageData:(id)arg1 kindOfClass:(Class)arg2;
@property(readonly, nonatomic) TRSession *trSession;
- (void)setRequestHandler:(CDUnknownBlockType)arg1 forRequestClass:(Class)arg2;
- (void)setEventHandler:(CDUnknownBlockType)arg1 forEventClass:(Class)arg2;
- (void)sendRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)sendEvent:(id)arg1;
- (void)disconnect;
- (void)handleRequest:(id)arg1 flags:(unsigned int)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)handleEvent:(id)arg1 flags:(unsigned int)arg2;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

