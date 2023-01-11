//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Catalyst/CATTaskSessionDelegate-Protocol.h>

@class CATOperationQueue, CATStateMachine, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;
@protocol CATTaskServerDelegate, OS_dispatch_group;

@interface CATTaskServer : NSObject <CATTaskSessionDelegate>
{
    CATStateMachine *mFSM;
    NSMutableSet *mSessions;
    NSMutableDictionary *mActiveSessionsByUUID;
    NSMutableDictionary *mInvalidatingSessionsByUUID;
    NSMutableDictionary *mConnectedSessionsByUUID;
    CATTaskServer *mStrongSelf;
    NSObject<OS_dispatch_group> *mAllSessionsDidInvalidateGroup;
    CATOperationQueue *mOrphanedOperationQueue;
    id <CATTaskServerDelegate> _delegate;
    NSDictionary *_userInfo;
}

@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <CATTaskServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)delegateClientSession:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)delegateSessionDidInvalidate:(id)arg1;
- (void)delegateClientSessionDidDisconnect:(id)arg1;
- (void)delegateClientSessionDidConnect:(id)arg1;
- (void)delegateClientSession:(id)arg1 didInterruptWithError:(id)arg2;
- (void)delegateDidInvalidate;
- (_Bool)delegateClientSession:(id)arg1 shouldConnectWithTransport:(id)arg2;
- (void)session:(id)arg1 enqueueOperation:(id)arg2;
- (id)session:(id)arg1 prepareOperationForRequest:(id)arg2 error:(id *)arg3;
- (void)session:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)sessionDidInvalidate:(id)arg1;
- (void)sessionWillInvalidate:(id)arg1;
- (void)session:(id)arg1 didInterruptWithError:(id)arg2;
- (void)sessionDidDisconnect:(id)arg1;
- (void)sessionDidConnect:(id)arg1;
- (_Bool)session:(id)arg1 shouldAcceptConnectionFromTransport:(id)arg2;
- (void)delegateDidInvalidateAndFinalize;
- (void)allSessionsDidInvalidate;
- (void)startInvalidatingWithError:(id)arg1;
- (void)invalidateWithError:(id)arg1;
- (void)invalidate;
- (void)disconnectAllClientSessions;
- (void)invalidateAllClientSessions;
- (void)makeSessionWithClientTransport:(id)arg1;
- (void)connectWithClientTransport:(id)arg1;
- (void)postNotificationWithName:(id)arg1 userInfo:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *connectedClientSessions;
@property(readonly, copy, nonatomic) NSArray *clientSessions;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

