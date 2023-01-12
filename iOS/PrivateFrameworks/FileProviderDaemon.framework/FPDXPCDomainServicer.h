//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPDDomain, FPDExtensionSession, FPDProvider, FPDServer, FPDXPCDomainServicerLifetimeExtender, NSString, NSXPCConnection;
@protocol FPProgressProtocol, OS_dispatch_queue, OS_os_log, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface FPDXPCDomainServicer : NSObject
{
    FPDServer *_server;
    FPDProvider *__provider;
    FPDDomain *_domain;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_requestQueue;
    id _activePresenterObservation;
    FPDXPCDomainServicerLifetimeExtender *_lifetimeExtender;
    _Bool _isALifetimerExtender;
    NSObject<OS_os_transaction> *_serviceTransaction;
    NSObject<OS_os_log> *_log;
    NSString *_providerDomainID;
    id <FPProgressProtocol> _uploadProxy;
    id <FPProgressProtocol> _downloadProxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <FPProgressProtocol> downloadProxy; // @synthesize downloadProxy=_downloadProxy;
@property(retain, nonatomic) id <FPProgressProtocol> uploadProxy; // @synthesize uploadProxy=_uploadProxy;
@property(readonly, nonatomic) NSString *providerDomainID; // @synthesize providerDomainID=_providerDomainID;
- (void)_t_setFilePresenterObserver:(id)arg1;
- (id)description;
- (void)startAccessingServiceWithName:(id)arg1 itemID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)subscribeToDownloadProgressUpdates:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)subscribeToUploadProgressUpdates:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)runTestingOperations:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)listAvailableTestingOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)temporaryDirectoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)signalErrorResolved:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)waitForStabilizationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)waitForChangesOnItemsBelowItemWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)currentPendingSetSyncAnchorWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enumeratePendingSetFromSyncAnchor:(id)arg1 suggestedBatchSize:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enumerateMaterializedSetFromSyncAnchor:(id)arg1 suggestedBatchSize:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)materializeItemWithIdentifier:(id)arg1 requestedRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)evictItemWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reimportItemsBelowItemWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)ingestFromCacheItemWithIdentifier:(id)arg1 requestedFields:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setDomainEjectable:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resolveItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didChangeItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopExtendingLifetime;
- (void)_registerLifetimeExtension;
- (void)_unregisterLifetimeExtension;
- (void)startExtendingLifetime;
- (id)newFileProviderProxy;
@property(readonly, nonatomic) FPDExtensionSession *sessionOrNil;
@property(readonly, nonatomic) FPDDomain *domainOrNil;
- (id)providerOrNil;
- (id)__providerIfExists;
- (int)pid;
- (void)dealloc;
- (void)invalidate;
- (id)initWithServer:(id)arg1 providerDomainID:(id)arg2 domain:(id)arg3 connection:(id)arg4;

@end

