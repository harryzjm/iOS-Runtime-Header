//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection, BSServiceConnectionListener, CXChannelServiceDefinition, CXTransactionGroup, CXTransactionManager, NSArray, NSMutableDictionary, NSString;
@protocol CXChannelServiceServerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CXChannelServiceServer : NSObject
{
    struct os_unfair_lock_s _accessorLock;
    id <CXChannelServiceServerDelegate> _delegate;
    BSServiceConnection *_connection;
    CXChannelServiceDefinition *_definition;
    NSMutableDictionary *_identifierToClient;
    BSServiceConnectionListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
    CXTransactionManager *_transactionManager;
    CXTransactionGroup *_uncommittedTransactionGroup;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CXTransactionGroup *uncommittedTransactionGroup; // @synthesize uncommittedTransactionGroup=_uncommittedTransactionGroup;
@property(readonly, nonatomic) CXTransactionManager *transactionManager; // @synthesize transactionManager=_transactionManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) BSServiceConnectionListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) NSMutableDictionary *identifierToClient; // @synthesize identifierToClient=_identifierToClient;
@property(readonly, nonatomic) CXChannelServiceDefinition *definition; // @synthesize definition=_definition;
@property(readonly, nonatomic) BSServiceConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
@property(nonatomic) __weak id <CXChannelServiceServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)commitUncommittedTransactions;
- (void)failOutstandingActionsForChannelWithUUID:(id)arg1;
- (void)addAction:(id)arg1 toUncommittedTransactionForServiceClient:(id)arg2;
- (void)serviceClient:(id)arg1 requestedTransaction:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)serviceClient:(id)arg1 reportedIncomingTransmissionStartedForChannelWithUUID:(id)arg2 update:(id)arg3 shouldReplaceOutgoingTransmission:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)serviceClient:(id)arg1 reportedIncomingTransmissionEndedForChannelWithUUID:(id)arg2 reason:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)serviceClient:(id)arg1 reportedChannelWithUUID:(id)arg2 updated:(id)arg3;
- (void)serviceClient:(id)arg1 reportedChannelWithUUID:(id)arg2 startedConnectingAtDate:(id)arg3;
- (void)serviceClient:(id)arg1 reportedChannelWithUUID:(id)arg2 disconnectedAtDate:(id)arg3 disconnectedReason:(long long)arg4;
- (void)serviceClient:(id)arg1 reportedChannelWithUUID:(id)arg2 connectedAtDate:(id)arg3;
- (void)serviceClient:(id)arg1 reportedAudioFinishedForChannelWithUUID:(id)arg2;
- (void)serviceClient:(id)arg1 registeredWithConfiguration:(id)arg2;
- (void)serviceClient:(id)arg1 actionCompleted:(id)arg2;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)removeClient:(id)arg1;
@property(readonly, nonatomic) NSArray *clients;
- (id)clientForIdentifier:(id)arg1;
- (void)addClient:(id)arg1;
- (void)invalidate;
- (void)activate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

