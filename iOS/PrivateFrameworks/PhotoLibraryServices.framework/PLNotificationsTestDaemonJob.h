//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, PLPhotoLibrary;

@interface PLNotificationsTestDaemonJob
{
    long long _notificationType;
    NSString *_albumUUID;
    NSArray *_addedAssetUUIDs;
    PLPhotoLibrary *_photoLibrary;
}

+ (void)notifyCommentWasReceivedForAssets:(id)arg1;
+ (void)notifyLikeWasReceivedForAssets:(id)arg1;
+ (void)notifyAssets:(id)arg1 wereAddedToAlbum:(id)arg2;
+ (void)notifyInvitationWasReceivedForAlbum:(id)arg1;
@property(retain, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(retain, nonatomic) NSArray *addedAssetUUIDs; // @synthesize addedAssetUUIDs=_addedAssetUUIDs;
@property(retain, nonatomic) NSString *albumUUID; // @synthesize albumUUID=_albumUUID;
@property long long notificationType; // @synthesize notificationType=_notificationType;
- (void)runDaemonSide;
- (void)run;
- (long long)daemonOperation;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;
- (void)dealloc;

@end

