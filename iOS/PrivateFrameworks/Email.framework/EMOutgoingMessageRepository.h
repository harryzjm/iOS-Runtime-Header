//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Email/EFLoggable-Protocol.h>
#import <Email/EMOutgoingMessageRepositoryInterfaceObserver-Protocol.h>

@class EMRemoteConnection, NSMutableArray, NSNumber, NSString;
@protocol EFCancelable, EFScheduler;

@interface EMOutgoingMessageRepository : NSObject <EFLoggable, EMOutgoingMessageRepositoryInterfaceObserver>
{
    EMRemoteConnection *_connection;
    id <EFCancelable> _registrationCancelable;
    id <EFScheduler> _scheduler;
    NSMutableArray *_observers;
    NSNumber *_pendingMessages;
}

+ (id)remoteInterface;
+ (id)signpostLog;
+ (id)log;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *pendingMessages; // @synthesize pendingMessages=_pendingMessages;
@property(readonly, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <EFScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) id <EFCancelable> registrationCancelable; // @synthesize registrationCancelable=_registrationCancelable;
@property(retain) EMRemoteConnection *connection; // @synthesize connection=_connection;
- (void)updateObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)numberOfPendingMessagesChanged:(id)arg1;
- (void)_startObservingUnsentChangesIfNecessary;
- (void)_restartObservingUnsentChangesIfNecessary;
- (unsigned long long)numberOfPendingMessages;
- (_Bool)isProcessing;
- (void)processAllQueuedMessages;
- (void)resumeDeliveryQueue;
- (void)suspendDeliveryQueue;
- (_Bool)outboxContainsMessageFromAccount:(id)arg1;
- (id)deliverMessage:(id)arg1 usingMailDrop:(_Bool)arg2;
- (void)deleteDraftsInMailbox:(id)arg1 documentID:(id)arg2 previousDraftObjectID:(id)arg3;
- (id)saveDraftMessage:(id)arg1 mailboxObjectID:(id)arg2 previousDraftObjectID:(id)arg3;
- (void)dealloc;
- (id)initWithRemoteConnection:(id)arg1;
- (unsigned long long)signpostID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
