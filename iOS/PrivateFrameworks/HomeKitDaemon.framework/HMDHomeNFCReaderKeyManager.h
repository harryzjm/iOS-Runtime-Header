//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, HMDHome, HMDHomeWalletKeyAccessoryManager, HMFMessageDispatcher, NAFuture, NSMutableSet, NSObject, NSString, NSUUID;
@protocol HAPSystemKeychainStore, HMDHomeWalletDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeNFCReaderKeyManager : HMFObject
{
    HMDHomeWalletKeyAccessoryManager *_accessoryManager;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <HAPSystemKeychainStore> _keychainStore;
    NSUUID *_uuid;
    HMDHome *_home;
    HMFMessageDispatcher *_messageDispatcher;
    id <HMDHomeWalletDataSource> _dataSource;
    NAFuture *_createKeychainItemFuture;
    NSMutableSet *_keyIdentifiersAlreadyUpdated;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain) NSMutableSet *keyIdentifiersAlreadyUpdated; // @synthesize keyIdentifiersAlreadyUpdated=_keyIdentifiersAlreadyUpdated;
@property(retain) NAFuture *createKeychainItemFuture; // @synthesize createKeychainItemFuture=_createKeychainItemFuture;
@property(readonly) id <HMDHomeWalletDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly) id <HAPSystemKeychainStore> keychainStore; // @synthesize keychainStore=_keychainStore;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMDHomeWalletKeyAccessoryManager *accessoryManager; // @synthesize accessoryManager=_accessoryManager;
- (id)newLogUUID;
- (id)logIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)requestPrimaryResidentToFetchOrCreateReaderKeyWithLogUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestDevice:(id)arg1 toCreateKeychainItemForReaderKeyWithLogUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly) HMDDevice *primaryResidentDevice;
- (void)removeKeychainItemForReaderKey:(id)arg1 home:(id)arg2 logUUID:(id)arg3;
- (id)createNFCReaderKeyModelWithHome:(id)arg1 nfcReaderKey:(id)arg2;
- (void)createReaderKeyKeychainItemForHome:(id)arg1 logUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)readerKeyWithKeychainItemIdentifier:(id)arg1 error:(id *)arg2 logUUID:(id)arg3;
- (void)deleteKeychainItemForNFCReaderKeyWithLogUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleSystemKeychainStoreUpdatedNotification:(id)arg1;
- (void)handleHomeRemovedNotification:(id)arg1;
- (void)handleHomeDidUpdateNFCReaderKeyNotification:(id)arg1;
- (void)fetchOrCreateReaderKeyWithRequiresPrivateKey:(_Bool)arg1 logUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteKeychainItemForNFCReaderKey_logUUID:(id)arg1;
- (void)handleCreateKeychainItemForReaderKeyMessage:(id)arg1;
- (void)handleFetchOrCreateReaderKeyMessage:(id)arg1;
- (void)handleDeleteKeychainItemForNFCReaderKey:(id)arg1;
- (void)configureWithHome:(id)arg1;
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 keychainStore:(id)arg3 dataSource:(id)arg4;
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

