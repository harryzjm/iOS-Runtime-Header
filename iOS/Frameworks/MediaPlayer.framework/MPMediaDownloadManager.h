//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface MPMediaDownloadManager : NSObject
{
}

+ (id)sharedManager;
- (id)activeDownloadForStoreID:(long long)arg1;
- (id)activeDownloadForMediaItemPersistentID:(long long)arg1;
- (_Bool)hasActiveDownloads;
- (void)cancelDownloads:(id)arg1;
- (void)sendKeepLocalStatusChanged:(long long)arg1 forLibraryIdentifier:(long long)arg2 entityType:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)enqueueAssetForDownload:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *allMediaDownloadLibraryIdentifiers;
- (void)prioritizeDownload:(long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)_init;
- (id)init;

@end
