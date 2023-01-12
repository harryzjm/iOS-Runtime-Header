//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BookDataStore/BDSCloudKitSupportSignOutDeleteWithoutInstance-Protocol.h>

@class BCCloudKitDatabaseController, BCCloudKitTransactionManager, BUCoalescingCallBlock, CKContainer;
@protocol BCContainerConfiguration, OS_dispatch_queue;

@interface BCCloudKitController : NSObject <BDSCloudKitSupportSignOutDeleteWithoutInstance>
{
    _Bool _didChangeContainer;
    _Bool _gettingAccountInfo;
    _Bool _enableCloudSync;
    _Bool _serviceMode;
    BCCloudKitTransactionManager *_transactionManager;
    BCCloudKitDatabaseController *_privateCloudDatabaseController;
    id <BCContainerConfiguration> _configuration;
    CKContainer *_container;
    NSObject<OS_dispatch_queue> *_accessQueue;
    BUCoalescingCallBlock *_coalescedAttachment;
}

+ (id)p_privateDatabaseArchiveURLForConfiguration:(id)arg1;
+ (id)p_createDatabaseArchiveDirectoryForConfiguration:(id)arg1;
+ (id)databaseFolderURLForConfiguration:(id)arg1;
+ (void)deleteCloudDataWithCompletion:(CDUnknownBlockType)arg1;
+ (void)registerForSecureNotifications;
+ (id)secureSharedInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) BUCoalescingCallBlock *coalescedAttachment; // @synthesize coalescedAttachment=_coalescedAttachment;
@property(nonatomic) _Bool serviceMode; // @synthesize serviceMode=_serviceMode;
@property(nonatomic) _Bool enableCloudSync; // @synthesize enableCloudSync=_enableCloudSync;
@property(nonatomic) _Bool gettingAccountInfo; // @synthesize gettingAccountInfo=_gettingAccountInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) id <BCContainerConfiguration> configuration; // @synthesize configuration=_configuration;
@property(nonatomic) _Bool didChangeContainer; // @synthesize didChangeContainer=_didChangeContainer;
@property(retain) BCCloudKitDatabaseController *privateCloudDatabaseController; // @synthesize privateCloudDatabaseController=_privateCloudDatabaseController;
@property(retain, nonatomic) BCCloudKitTransactionManager *transactionManager; // @synthesize transactionManager=_transactionManager;
- (void)p_identityChanged:(id)arg1;
- (void)p_accountChanged:(id)arg1;
- (void)handleRemoteNotification:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)p_getAccountInfo;
- (void)p_getNecessaryAccountInfoFromContainer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)p_updateAttachment;
- (void)setEnableCloudSync:(_Bool)arg1 serviceMode:(_Bool)arg2;
- (id)initWithConfiguration:(id)arg1;

@end
