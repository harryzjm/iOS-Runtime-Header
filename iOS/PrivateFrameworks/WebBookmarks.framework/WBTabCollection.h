//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebBookmarks/WBStateProvider-Protocol.h>

@class NSArray, NSError, NSString, WBBrowserState, WBCollectionConfiguration, WBWindowState, WebBookmarkTabCollection;
@protocol OS_dispatch_queue;

@interface WBTabCollection : NSObject <WBStateProvider>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    WebBookmarkTabCollection *_collection;
    unsigned long long _maximumTabsPerGroup;
}

+ (id)inMemoryChangesFileURL;
+ (id)databasePathForConfiguration:(id)arg1;
+ (id)inMemoryChangeSet;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long maximumTabsPerGroup; // @synthesize maximumTabsPerGroup=_maximumTabsPerGroup;
@property(readonly, nonatomic) WebBookmarkTabCollection *tabCollection; // @synthesize tabCollection=_collection;
- (void)performMaintenance;
@property(readonly, nonatomic) _Bool isLockedSync;
- (void)unlockSync;
- (_Bool)lockSync;
- (_Bool)_reorderTab:(id)arg1 afterTab:(id)arg2;
- (_Bool)_insertBookmark:(id)arg1 afterBookmark:(id)arg2 inFolderWithID:(int)arg3;
- (id)_bookmarksForTabs:(id)arg1 syncable:(_Bool)arg2;
- (id)_bookmarksForTabs:(id)arg1;
- (_Bool)_resultOnInternalQueue:(CDUnknownBlockType)arg1;
- (_Bool)saveWindowState:(id)arg1;
- (_Bool)deleteAllWindowStates;
- (_Bool)deleteWindowStates:(id)arg1;
- (_Bool)deleteWindowState:(id)arg1;
- (_Bool)closeWindowState:(id)arg1;
- (id)windowStateWithUUID:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *windowStates;
@property(readonly, copy, nonatomic) NSArray *recentlyClosedWindowStates;
@property(readonly, nonatomic) WBWindowState *lastClosedWindowState;
- (_Bool)updateTabs:(id)arg1 inTabGroup:(id)arg2;
- (_Bool)saveTab:(id)arg1;
- (_Bool)replaceTab:(id)arg1 withTab:(id)arg2;
- (_Bool)reorderTab:(id)arg1 afterTab:(id)arg2;
- (_Bool)moveTab:(id)arg1 toTabGroup:(id)arg2 afterTab:(id)arg3;
- (_Bool)insertTabs:(id)arg1 inTabGroup:(id)arg2 afterTab:(id)arg3;
- (_Bool)insertTab:(id)arg1 inTabGroup:(id)arg2 afterTab:(id)arg3;
- (_Bool)deleteTabs:(id)arg1;
- (id)tabWithUUID:(id)arg1;
- (id)tabsForTabGroup:(id)arg1;
- (_Bool)saveTabGroup:(id)arg1;
- (_Bool)moveTabGroup:(id)arg1 afterTabGroup:(id)arg2;
- (_Bool)insertTabGroup:(id)arg1 afterTabGroup:(id)arg2;
- (_Bool)deleteTabGroup:(id)arg1;
- (id)tabGroupWithUUID:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *tabGroups;
- (_Bool)deleteAllRecentlyClosedTabs;
- (_Bool)saveRecentlyClosedTabs:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *recentlyClosedTabs;
@property(readonly, nonatomic) int privatePinnedTabsFolderID;
@property(readonly, nonatomic) int pinnedTabsFolderID;
- (_Bool)_updatePinnedTabs:(id)arg1 privatePinnedTabs:(id)arg2;
- (_Bool)deleteAllSavedState;
@property(readonly, nonatomic) WBBrowserState *lastSessionBrowserState;
- (_Bool)saveBrowserState:(id)arg1;
@property(readonly, nonatomic) WBBrowserState *browserState;
- (id)applyInMemoryChanges:(id)arg1;
@property(readonly, nonatomic, getter=isPersistent) _Bool persistent;
@property(readonly, nonatomic) NSError *error;
@property(nonatomic, getter=hasCompletedMigration) _Bool completedMigration;
@property(readonly, nonatomic) WBCollectionConfiguration *configuration;
- (id)initWithConfiguration:(id)arg1 checkIntegrity:(_Bool)arg2;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
