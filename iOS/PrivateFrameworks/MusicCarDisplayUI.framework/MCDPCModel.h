//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCDPCItem, NSCache, NSMapTable, NSMutableSet, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MCDPCModel : NSObject
{
    NSMapTable *_identifiersToItems;
    NSObject<OS_dispatch_group> *_mediaRemoteGroup;
    NSObject<OS_dispatch_queue> *_serialAccessQueue;
    NSObject<OS_dispatch_queue> *_mediaRemoteNotificationQueue;
    NSObject<OS_dispatch_queue> *_imageProcessingQueue;
    unsigned long long _nextAllowedInvalidate;
    unsigned long long _nextAllowedUpdate;
    NSMutableSet *_updatedItems;
    NSCache *_resizedImages;
    _Bool _needsInvalidation;
    NSString *_bundleID;
    MCDPCItem *_rootItem;
    struct CGSize _imageSize;
}

@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) MCDPCItem *rootItem; // @synthesize rootItem=_rootItem;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (void)_performMediaRemoteAccess:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)_endMediaRemoteAccess;
- (void)_beginMediaRemoteAccess;
- (void)_mediaRemoteCommunicationWithIndexPath:(id)arg1 work:(CDUnknownBlockType)arg2;
- (void)_populateImageForItem:(id)arg1;
- (id)itemsFromMRContentItems:(id)arg1;
- (void)initiatePlaybackAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)imageForIdentifier:(id)arg1;
- (void)getRemoteAppIsPlaying:(CDUnknownBlockType)arg1;
- (void)getChildrenAtIndexPath:(id)arg1 inRange:(struct _NSRange)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getCountOfChildrenAtIndexPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getNowPlayingIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)getChildrenSupportsPlaybackProgressForIndexPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getItemAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)containerForRoot;
@property(readonly, nonatomic) NSString *appTitle;
- (void)_nowPlayingAppDidChangeNotification:(id)arg1;
- (void)_nowPlayingDidChangeNotification:(id)arg1;
- (void)_finishLoadingNotification:(id)arg1;
- (void)_playbackInitiatedNotification:(id)arg1;
- (void)_contentItemsUpdated:(id)arg1;
- (void)_dataSourceInvalidated:(id)arg1;
- (void)_registerNotifications;
- (void)dealloc;
- (id)initWithBundleID:(id)arg1;

@end

