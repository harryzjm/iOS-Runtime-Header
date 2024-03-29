//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSURLCompletionDatabase.h>

@class NSArray, NSCache, NSObject, NSString;
@protocol OS_dispatch_queue, WBBookmarkProvider, WBSCloudTabDeviceProvider;

__attribute__((visibility("hidden")))
@interface URLCompletionDatabase : WBSURLCompletionDatabase
{
    id <WBSCloudTabDeviceProvider> _cloudTabStore;
    NSArray *_cloudDevices;
    NSObject<OS_dispatch_queue> *_cloudTabsAccessQueue;
    NSCache *_bookmarksCache;
    id <WBBookmarkProvider> _bookmarkProvider;
    NSString *_profileUUID;
    int _searchableCollectionsMask;
}

- (void).cxx_destruct;
@property(nonatomic) int searchableCollectionsMask; // @synthesize searchableCollectionsMask=_searchableCollectionsMask;
- (id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2 shouldPreload:(_Bool)arg3;
- (void)enumerateMatchDataForTypedStringHint:(id)arg1 filterResultsUsingProfileUUIDString:(id)arg2 options:(unsigned long long)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)tabGroupManagerDidUpdateDevices:(id)arg1;
- (void)_updateCloudDevices:(id)arg1;
- (void)clearBookmarksCache;
- (void)dealloc;
- (id)initWithCloudTabStore:(id)arg1 profileUUID:(id)arg2 searchableCollectionsMask:(int)arg3 bookmarkProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

