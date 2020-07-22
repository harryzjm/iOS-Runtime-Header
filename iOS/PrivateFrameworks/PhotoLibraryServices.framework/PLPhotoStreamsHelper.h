//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLPhotoStreamsHelper : NSObject
{
    _Bool _appHasPolledOnceThisForegroundSession;
}

+ (_Bool)canInitiateDistributedPhotoStreamDeletionForAssetUUID:(id)arg1;
+ (_Bool)writeBreadcrumbContent:(id)arg1 forHashString:(id)arg2;
+ (id)publishBreadcrumbsPath;
+ (id)iCloudServiceAccount;
+ (_Bool)photoStreamsEnabled;
+ (id)sharedPhotoStreamsHelper;
- (void)enumerateMasterHashesAndPublicGlobalUUIDsForAssets:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)initiateDeletionOfOriginalAssets:(id)arg1;
- (void)initiateDeletionOfPhotoStreamAssets:(id)arg1;
- (void)resume_mstreamd:(id)arg1;
- (id)pause_mstreamd;
- (void)resetServerState;
- (void)cleanupPhotoStreamMetadataForAssetsWithUUIDs:(id)arg1 forStreamID:(id)arg2;
- (void)savePhotoStreamMetadata:(id)arg1 forAsset:(id)arg2;
- (id)pathToSavedMetadataForAssetHash:(id)arg1 streamID:(id)arg2 createIntermediateDirs:(_Bool)arg3;
- (void)resetMstreamdStateForPersonID:(id)arg1;
- (id)derivedAssetForMasterAsset:(id)arg1;
- (struct CGSize)derivedAssetSizeForMasterSizeWidth:(double)arg1 height:(double)arg2;
- (id)temporaryPathForRecentlyUploadedAsset:(id)arg1;
- (id)temporaryPathForConvertedAssetWithUUID:(id)arg1;
- (long long)friendsLimit;
- (long long)imageLimitForFriendStream;
- (long long)imageLimitForOwnStream;
- (long long)maxPixelSizeForDerivative;
- (id)imageLimitsByAssetType;
- (long long)_serverIntegerLimitForKey:(id)arg1 debugDefaultKey:(id)arg2;
- (_Bool)shouldUploadVideos;
- (_Bool)shouldPublishScreenShots;
- (void)pollForNewSubscriptionContentOncePerAppForegroundSession;
- (void)pollForNewSubscriptionContent;
- (_Bool)dequeueAssetsForPSPublishing:(id)arg1;
- (_Bool)enqueueAssetForPSPublishing:(id)arg1 fullPath:(id)arg2 fileSize:(id)arg3 reenqueueCount:(unsigned long long)arg4 publicGlobalUUID:(id *)arg5;
- (_Bool)isValidUploadAsset:(id)arg1 type:(id)arg2 fileSize:(id)arg3;
- (void)writeDidPublishBreadcrumbforHash:(id)arg1 imagePath:(id)arg2;
- (void)writeDidEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2;
- (void)writeWillEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2;
- (_Bool)removeBreadcrumbsForHashString:(id)arg1;
- (id)lastPhotoStreamUpdateDate;
- (id)psHashAsString:(id)arg1;
- (id)psHashForData:(id)arg1;
- (id)photoStreamsPublishStreamID;
- (void)_appDidEnterBackground:(id)arg1;
- (void)_clearPhotoStreamAccountSettings;
- (void)_accountStoreDidChange:(id)arg1;
- (void)clearCachedAccountState;
- (void)dealloc;
- (id)init;

@end

