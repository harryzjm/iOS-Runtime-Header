//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MIInstallerClient : NSObject
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _delegatesCompleteCondMutex;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _delegatesCompleteCond;
    _Bool _delegatesComplete;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _appDictionaryEnumBlock;
    NSError *_delegatesCompleteError;
}

+ (id)installerWithAppDictionaryEnumerator:(CDUnknownBlockType)arg1;
+ (id)installerWithProgressBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *delegatesCompleteError; // @synthesize delegatesCompleteError=_delegatesCompleteError;
@property(nonatomic) _Bool delegatesComplete; // @synthesize delegatesComplete=_delegatesComplete;
@property(copy, nonatomic) CDUnknownBlockType appDictionaryEnumBlock; // @synthesize appDictionaryEnumBlock=_appDictionaryEnumBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (_Bool)clearTestFlags:(unsigned long long)arg1 withError:(id *)arg2;
- (_Bool)setTestFlags:(unsigned long long)arg1 withError:(id *)arg2;
- (_Bool)getTestModeEnabled:(_Bool *)arg1 outError:(id *)arg2;
- (_Bool)endTestMode:(id *)arg1;
- (_Bool)setTestMode:(id *)arg1;
- (void)dieForTesting;
- (int)pidForTesting;
- (void)createSerializedPlaceholderForInstalledAppWithBundeID:(id)arg1 personaUniqueString:(id)arg2 atResultURL:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)waitForSystemAppMigratorWithCompletion:(CDUnknownBlockType)arg1;
- (void)waitForSystemAppMigratorToComplete:(CDUnknownBlockType)arg1;
- (void)systemAppMigratorHasCompleted:(CDUnknownBlockType)arg1;
- (void)setSystemAppMigrationComplete:(CDUnknownBlockType)arg1;
- (void)snapshotWKAppInCompanionAppID:(id)arg1 toURL:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getAppMetadataForApp:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatePlaceholderMetadataForApp:(id)arg1 installType:(unsigned long long)arg2 failureReason:(unsigned long long)arg3 underlyingError:(id)arg4 failureSource:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)checkCapabilities:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)listSafeHarborsOfType:(unsigned long long)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeSafeHarborForIdentifier:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)registerSafeHarborAtPath:(id)arg1 forIdentifier:(id)arg2 ofType:(unsigned long long)arg3 withOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchDiskUsageForIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateiTunesMetadataForIXWithIdentifier:(id)arg1 options:(id)arg2 plistData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateiTunesMetadataForLSWithIdentifier:(id)arg1 options:(id)arg2 plistData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateSinfForIXWithIdentifier:(id)arg1 withOptions:(id)arg2 sinfData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateSinfForLSWithIdentifier:(id)arg1 withOptions:(id)arg2 sinfData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchInfoForContainerizedAppWithBundleID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchInfoForFrameworkAtURL:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enumerateInstalledAppsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSystemAppStateForIdentifier:(id)arg1 appState:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)lookupSystemAppStateWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearUninstalledIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)lookupUninstalledWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidateReference:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)acquireReferenceforInstalledAppWithIdentity:(id)arg1 inDomain:(unsigned long long)arg2 matchingInstallSessionID:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)finalizeReference:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)uninstallIdentity:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)uninstallIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)revertIdentity:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)revertForLSWithIdentifier:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerPlaceholderForReference:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installURL:(id)arg1 identity:(id)arg2 targetingDomain:(unsigned long long)arg3 withOptions:(id)arg4 returningResultInfo:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (id)_waitForPendingDelegateMessages;
- (void)delegateMessageDeliveryCompleteWithError:(id)arg1;
- (void)enumerateAppDictionary:(id)arg1 error:(id)arg2;
- (void)reportProgress:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_invalidateObject;

@end

