//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSMutableSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFileAccessArbiterProxy : NSObject
{
    NSXPCConnection *_server;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_presentersByID;
    NSMutableDictionary *_presenterMessengersByID;
    NSMutableSet *_providers;
    NSMapTable *_providerMessengersByID;
    _Bool _disableFileProviderReregistration;
}

+ (id)_fileReactorDebuggingInformation;
+ (id)_willBeginOperationForReactor:(id)arg1 withDescription:(id)arg2;
+ (void)_accessPresenterOperationRecordsUsingBlock:(CDUnknownBlockType)arg1;
+ (id)_idForReactor:(id)arg1;
- (void)handleCanceledServer;
- (void)performBarrierAsync:(CDUnknownBlockType)arg1;
- (void)performBarrier;
- (void)setAutomaticFileProviderReregistrationDisabled:(_Bool)arg1;
- (_Bool)itemHasPresentersAtURL:(id)arg1;
- (void)getDebugInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)idForFileReactor:(id)arg1;
- (id)fileProviders;
- (id)_onqueue_fileProviders;
- (void)removeFileProvider:(id)arg1;
- (void)addFileProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)filePresenters;
- (id)_onqueue_filePresenters;
- (void)removeFilePresenter:(id)arg1;
- (void)addFilePresenter:(id)arg1;
- (oneway void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityAttributes:(id)arg2 ofItemAtURL:(id)arg3;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeSharingOfItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;
- (oneway void)cancelAccessClaimForID:(id)arg1;
- (oneway void)revokeSubarbitrationClaimForID:(id)arg1;
- (void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2;
- (oneway void)revokeAccessClaimForID:(id)arg1;
- (id)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(_Bool)arg2;
- (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
- (void)dealloc;
- (id)initWithServer:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

