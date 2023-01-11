//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString, SSDownloadMetadata, SSDownloadPolicy, SSDownloadStatus, SSXPCConnection;

@interface SSDownload <SSXPCCoding>
{
    NSMutableDictionary *_localAssets;
    SSDownloadMetadata *_metadata;
    NSNumber *_prioritizeAboveDownload;
    SSDownloadStatus *_status;
}

+ (long long)_setValuesMessage;
+ (long long)_setExternalValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_existsMessage;
- (id)_errorWithXPCReply:(id)arg1;
- (id)_errorWithData:(id)arg1;
- (void)_applyPhase:(id)arg1 toStatus:(id)arg2;
@property(readonly, getter=_XPCConnection) SSXPCConnection *_XPCConnection;
- (void)_resetStatus;
@property(readonly) NSDictionary *_localAssets;
@property(retain, nonatomic) SSDownloadStatus *status;
@property(copy, nonatomic) SSDownloadMetadata *metadata;
- (void)setBackgroundNetworkingUserInitiated:(_Bool)arg1;
@property(retain, nonatomic) NSArray *assets;
@property(readonly, nonatomic, getter=isExternal) _Bool external;
- (_Bool)isBackgroundNetworkingUserInitiated;
- (void)handleWithDownloadHandler:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) id downloadIdentifier;
- (id)copyXPCEncoding;
- (id)initWithDownloadMetadata:(id)arg1;
- (id)_newAssetWithURL:(id)arg1 assetType:(id)arg2;
- (void)_resetLocalIVars;
- (void)_addCachedPropertyValues:(id)arg1;
- (void)_addCachedExternalValues:(id)arg1;
- (void)setValuesWithStoreDownloadMetadata:(id)arg1;
- (void)setNetworkConstraints:(id)arg1;
@property(copy) SSDownloadPolicy *downloadPolicy;
- (void)setDownloadHandler:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setBackgroundNetworkingJobGroupName:(id)arg1;
- (void)restart;
- (void)resume;
- (_Bool)removeAsset:(id)arg1;
- (void)prioritizeAboveDownload:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly) long long persistentIdentifier;
- (double)percentComplete;
- (void)pause;
- (id)networkConstraints;
- (_Bool)isEligibleForRestore:(id *)arg1;
@property(readonly, getter=isCancelable) _Bool cancelable;
- (id)failureError;
- (double)estimatedSecondsRemaining;
@property(readonly) long long downloadSizeLimit;
- (id)downloadPhaseIdentifier;
- (long long)bytesTotal;
- (long long)bytesDownloaded;
- (id)backgroundNetworkingJobGroupName;
- (id)assetsForType:(id)arg1;
- (_Bool)addAsset:(id)arg1 forType:(id)arg2;
- (void)dealloc;
- (id)_initWithLocalPropertyValues:(id)arg1;
- (id)initWithPersistentIdentifier:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
