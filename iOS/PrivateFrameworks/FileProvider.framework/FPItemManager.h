//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface FPItemManager : NSObject
{
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableSet *_activeCollections;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (void)recursivelyExportItem:(id)arg1 toURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addOperation:(id)arg1;
- (void)scheduleAction:(id)arg1;
- (id)operationForAction:(id)arg1 items:(id)arg2;
- (id)eligibleActionsForDroppingUTIs:(id)arg1 underItem:(id)arg2;
- (id)eligibleActionsForDroppingItems:(id)arg1 underItem:(id)arg2;
- (_Bool)_isValidDestination:(id)arg1;
- (id)eligibleActionsForItems:(id)arg1;
- (void)_fetchServiceEndpointCreatingForItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchRequestProxyFactoryEndpointForMessageInterface:(id)arg1 providerIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchFileProviderServices:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchRemoteOperationServiceForProvider:(id)arg1 handler:(CDUnknownBlockType)arg2 connectionErrorHandler:(CDUnknownBlockType)arg3;
- (void)_fetchRemoteFileProviderVendorWithIdentifier:(id)arg1 remoteObjectInterface:(id)arg2 messageInterface:(id)arg3 handler:(CDUnknownBlockType)arg4 connectionErrorHandler:(CDUnknownBlockType)arg5;
- (void)_fetchRemoteFileProviderEndpointWithIdentifier:(id)arg1 remoteObjectInterface:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchRemoteServiceEndpointCreatingProviderWithIdentifier:(id)arg1 itemURL:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchRemoteFileProviderWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchDefaultLocationForApplication:(id)arg1 defaultProvider:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchRootItemForProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchParentForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)extendBookmarkForItem:(id)arg1 receivingBundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchItemForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchURLForItemID:(id)arg1 creatingPlaceholderIfMissing:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchURLForItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchURLForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchURLForItem:(id)arg1 creatingPlaceholderIfMissing:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_thumbnailsFetchOperationForProviderIdentifier:(id)arg1 itemIDs:(id)arg2 withSize:(struct CGSize)arg3 scale:(double)arg4;
- (id)thumbnailsFetchOperationForItems:(id)arg1 withSize:(struct CGSize)arg2 scale:(double)arg3;
- (id)recursiveFolderCollectionForProvider:(id)arg1;
- (id)newCollectionWithIdentifier:(id)arg1 providerIdentifier:(id)arg2;
- (id)collectionWithIdentifier:(id)arg1 domainIdentifier:(id)arg2 providerIdentifier:(id)arg3 fileTypes:(id)arg4;
- (id)collectionForFolderItem:(id)arg1 fileTypes:(id)arg2;
- (id)init;
- (id)rootCollectionForProvider:(id)arg1 fileTypes:(id)arg2;
- (id)newRootCollectionForProviderIdentifier:(id)arg1;

@end

