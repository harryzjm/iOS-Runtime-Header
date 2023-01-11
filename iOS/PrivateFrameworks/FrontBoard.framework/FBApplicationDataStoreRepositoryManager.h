//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoard/FBApplicationDataStoreRepositoryDelegate-Protocol.h>

@class FBSqliteApplicationDataStoreRepository, LSApplicationWorkspace, NSString, NSURL;
@protocol FBApplicationDataStoreRepository, OS_dispatch_queue;

@interface FBApplicationDataStoreRepositoryManager : NSObject <FBApplicationDataStoreRepositoryDelegate>
{
    NSURL *_dataStoreURL;
    FBSqliteApplicationDataStoreRepository *_dataStore;
    LSApplicationWorkspace *_lsApplicationWorkspace;
    NSObject<OS_dispatch_queue> *_deferredWorkQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) LSApplicationWorkspace *lsApplicationWorkspace; // @synthesize lsApplicationWorkspace=_lsApplicationWorkspace;
@property(retain, nonatomic) id <FBApplicationDataStoreRepository> dataStore; // @synthesize dataStore=_dataStore;
- (void).cxx_destruct;
- (void)storeInvalidatedForIdentifier:(id)arg1;
- (void)objectChangedForKeys:(id)arg1 application:(id)arg2;
- (void)_performAfterDeferredWork:(CDUnknownBlockType)arg1;
- (void)_handleApplicationInstalled:(id)arg1;
- (id)_safeObjectForKey:(id)arg1 forApplication:(id)arg2 ofType:(Class)arg3;
- (void)clearExpiredUninstalledApplicationsFromStoreIfNecessary;
- (_Bool)migrateFromPlistStoreAtURL:(id)arg1 toSqliteStoreAtURL:(id)arg2 error:(id *)arg3;
- (_Bool)migrateFromApplicationStore:(id)arg1 toApplicationStore:(id)arg2 error:(id *)arg3;
- (void)migrateApplicationStorePathIfNecessary;
- (_Bool)removeStoreAtURL:(id)arg1 error:(out id *)arg2;
- (id)urlByAppendingString:(id)arg1 toURL:(id)arg2;
- (void)dealloc;
- (id)_initWithDataStore:(id)arg1 lsWorkspace:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

