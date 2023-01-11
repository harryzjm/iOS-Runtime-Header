//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SFSession;

@interface TRClientConnection
{
    SFSession *_session;
}

- (void).cxx_destruct;
@property(retain) SFSession *session; // @synthesize session=_session;
- (void)connectToNearbyDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)sendResponse:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)setRequestMessageHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)requestMessageHandler;
- (void)setEventMessageHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)eventMessageHandler;
- (void)setInvalidationHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)invalidationHandler;
- (void)setInterruptionHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)interruptionHandler;

@end
