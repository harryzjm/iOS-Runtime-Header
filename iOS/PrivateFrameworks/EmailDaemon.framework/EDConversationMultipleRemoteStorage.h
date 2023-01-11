//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDConversationRemoteStorage-Protocol.h>
#import <EmailDaemon/EDConversationRemoteStorageDelegate-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDConversationRemoteCloudKitStorage, EDTransactionService, NSString;
@protocol EDConversationRemoteStorage, EDConversationRemoteStorageDelegate, OS_dispatch_queue;

@interface EDConversationMultipleRemoteStorage : NSObject <EDConversationRemoteStorageDelegate, EDConversationRemoteStorage, EFLoggable>
{
    id <EDConversationRemoteStorageDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_privateQueue;
    id <EDConversationRemoteStorage> _kvsStorage;
    EDConversationRemoteCloudKitStorage *_cloudKitStorage;
    EDTransactionService *_dataReplicationTransaction;
}

+ (id)log;
@property(retain, nonatomic) EDTransactionService *dataReplicationTransaction; // @synthesize dataReplicationTransaction=_dataReplicationTransaction;
@property(retain, nonatomic) EDConversationRemoteCloudKitStorage *cloudKitStorage; // @synthesize cloudKitStorage=_cloudKitStorage;
@property(retain, nonatomic) id <EDConversationRemoteStorage> kvsStorage; // @synthesize kvsStorage=_kvsStorage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(nonatomic) __weak id <EDConversationRemoteStorageDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_replicateAllContentFromStore:(id)arg1 toStore:(id)arg2 synchronize:(_Bool)arg3;
- (void)_handleStorageReady:(id)arg1;
- (void)_saveChanges:(id)arg1 fromStorage:(id)arg2 toStorage:(id)arg3 synchronize:(_Bool)arg4;
- (void)conversationRemoteStorageWillResetData:(id)arg1;
- (void)conversationRemoteStorageDidResetData:(id)arg1;
- (void)conversationRemoteStorageDidInitialize:(id)arg1;
- (void)conversationRemoteStorage:(id)arg1 didChangeEntries:(id)arg2 reason:(long long)arg3;
- (id)storageName;
- (_Bool)isInitialized;
- (void)refresh;
- (_Bool)synchronize;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)removeDictionaryForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryForKey:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
