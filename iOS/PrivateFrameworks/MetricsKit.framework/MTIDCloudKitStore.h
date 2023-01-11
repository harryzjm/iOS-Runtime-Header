//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetricsKit/MTIDCloudKitLocalDBDelegate-Protocol.h>
#import <MetricsKit/MTIDSecretStore-Protocol.h>

@class MTIDCloudKitLocalDB, MTIDCloudKitPromiseManager, MTPromise, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface MTIDCloudKitStore : NSObject <MTIDCloudKitLocalDBDelegate, MTIDSecretStore>
{
    _Bool _entitled;
    NSString *_containerIdentifier;
    MTPromise *_syncEnginePromise;
    MTIDCloudKitLocalDB *_localDB;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_generatedDates;
    NSObject<OS_os_transaction> *_transaction;
    MTIDCloudKitPromiseManager *_promiseManager;
}

+ (id)apsMachServiceName;
+ (void)setTransactionTimeout:(double)arg1;
+ (double)transactionTimeout;
+ (void)populateRecord:(id)arg1 withNewSecretForScheme:(id)arg2 date:(id)arg3;
+ (id)secretFromRecord:(id)arg1;
+ (id)recordIDForScheme:(id)arg1 date:(id)arg2;
+ (id)recordZoneID;
- (void).cxx_destruct;
@property(retain, nonatomic) MTIDCloudKitPromiseManager *promiseManager; // @synthesize promiseManager=_promiseManager;
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) NSMutableDictionary *generatedDates; // @synthesize generatedDates=_generatedDates;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) MTIDCloudKitLocalDB *localDB; // @synthesize localDB=_localDB;
@property(retain, nonatomic) MTPromise *syncEnginePromise; // @synthesize syncEnginePromise=_syncEnginePromise;
@property _Bool entitled; // @synthesize entitled=_entitled;
@property(retain, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (id)debugInfo;
- (void)_endTransaction;
- (void)_beginTransaction;
- (void)clearLocalData;
- (id)resetSecretForScheme:(id)arg1 options:(id)arg2;
- (id)secretForScheme:(id)arg1 options:(id)arg2;
- (void)cloudKitLocalDB:(id)arg1 didChangeRecord:(id)arg2;
- (id)promiseForRecordWithID:(id)arg1 timeout:(double)arg2 updateRecordMaybe:(CDUnknownBlockType)arg3;
- (id)recordWithID:(id)arg1 updateRecordMaybe:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (void)_generateFutureSecretsForScheme:(id)arg1;
- (void)generateFutureSecretsForScheme:(id)arg1;
- (id)startSyncEngine;
- (void)updateUserRecordID:(id)arg1;
- (void)accountDidChange:(id)arg1;
- (id)initWithContainerIdentifer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
