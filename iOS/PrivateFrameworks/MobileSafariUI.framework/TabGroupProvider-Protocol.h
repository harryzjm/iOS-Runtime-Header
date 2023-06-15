//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class BrowserController, NSArray, NSSet, NSString, NSURL, NSUUID, SFSyntheticBookmarkFolder, TabDocument, UIContextMenuConfiguration, UIDragItem, UIImage, UIMenu, UISwipeActionsConfiguration, WBProfile, WBTab, WBTabGroup, WebBookmark, WebBookmarkList;
@protocol WBTabGroupManagerObserver;

@protocol TabGroupProvider <NSObject>
@property(readonly, copy, nonatomic) NSString *deviceIdentifier;
@property(readonly, copy, nonatomic) NSString *startPageBackgroundImageIdentifier;
@property(readonly, nonatomic) NSArray *allSyntheticBookmarkFolders;
@property(readonly, nonatomic) NSSet *nonActiveTabGroupsInCurrentBrowsingMode;
@property(readonly, nonatomic) NSArray *allTabGroups;
@property(readonly, nonatomic) NSArray *namedTabGroups;
@property(readonly, nonatomic) NSArray *unnamedTabGroups;
@property(readonly, nonatomic) NSArray *tabGroups;
@property(readonly, nonatomic) NSString *activeLibraryType;
@property(readonly, nonatomic) NSString *moveLocalTabsToNewGroupTitle;
@property(readonly, nonatomic) _Bool createTabGroupAlertIsPresented;
@property(nonatomic) _Bool tabGroupOverviewIsPresented;
@property(copy, nonatomic) NSString *activeTabGroupUUID;
@property(readonly, copy, nonatomic) WBTabGroup *activeTabGroup;
@property(readonly, nonatomic) UIMenu *menuForSwitchingProfiles;
@property(readonly, copy, nonatomic) WBTabGroup *privateTabGroupIfAvailable;
@property(readonly, copy, nonatomic) WBTabGroup *unnamedTabGroup;
@property(readonly, copy, nonatomic) NSArray *namedProfiles;
@property(copy, nonatomic) NSString *activeProfileUUID;
@property(readonly, copy, nonatomic) WBProfile *activeProfile;
@property(readonly, copy, nonatomic) NSArray *profiles;
- (WBProfile *)updateProfileWithUUID:(NSString *)arg1 persist:(_Bool)arg2 usingBlock:(void (^)(WBMutableProfile *))arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)moveTabGroup:(WBTabGroup *)arg1 toProfile:(WBProfile *)arg2;
- (NSArray *)profilesMenuElementsWithOptions:(unsigned long long)arg1 movingSelectedTabGroups:(NSArray *)arg2 actionHandler:(void (^)(WBProfile *))arg3;
- (NSArray *)tabGroupsForProfileWithUUID:(NSString *)arg1;
- (UIImage *)imageForProfile:(WBProfile *)arg1;
- (void)registerTabGroupManagerObserver:(id <WBTabGroupManagerObserver>)arg1;
- (void)deleteScopedBookmarkWithUUID:(NSString *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)updateScopedBookmarkWithUUID:(NSString *)arg1 title:(NSString *)arg2 address:(NSString *)arg3;
- (void)reorderScopedBookmarkWithUUID:(NSString *)arg1 afterBookmarkWithUUID:(NSString *)arg2 notify:(_Bool)arg3;
- (WebBookmark *)copyBookmark:(WebBookmark *)arg1 toPerTabGroupBookmarkFolderWithID:(int)arg2;
- (void)insertPerTabGroupBookmark:(WebBookmark *)arg1 inPerTabGroupBookmarkFolderWithID:(int)arg2;
- (WebBookmarkList *)topScopedBookmarkListForActiveTabGroup;
- (WebBookmarkList *)perTabGroupBookmarkListForFolderID:(int)arg1 filteredUsingString:(NSString *)arg2;
- (SFSyntheticBookmarkFolder *)syntheticBookmarkFolderForTabGroup:(WBTabGroup *)arg1 withAttribution:(_Bool)arg2;
- (NSArray *)syntheticBookmarkFoldersIncludingActiveTabGroup:(_Bool)arg1;
- (void)togglePinningTab:(WBTab *)arg1 inInactiveTabGroup:(WBTabGroup *)arg2;
- (void)sortTabsInInactiveTabGroup:(WBTabGroup *)arg1 withSortMode:(long long)arg2;
- (void)closeTabs:(NSArray *)arg1 inInactiveTabGroup:(WBTabGroup *)arg2;
- (UIDragItem *)dragItemForTab:(WBTab *)arg1 inTabGroup:(WBTabGroup *)arg2;
- (UIImage *)iconForTabUUID:(NSString *)arg1;
- (void)toggleTabGroupUUIDExpanded:(NSString *)arg1;
- (_Bool)isTabGroupUUIDExpanded:(NSString *)arg1;
- (_Bool)isTabUUIDActive:(NSString *)arg1;
- (BrowserController *)browserControllerContainingLocalTabGroupUUID:(NSUUID *)arg1;
- (void)openURL:(NSURL *)arg1 inTabGroup:(WBTabGroup *)arg2;
- (void)openBookmark:(WebBookmark *)arg1 inTabGroup:(WBTabGroup *)arg2;
- (void)removeSingleBlankTabFromActiveTabGroup;
- (void)removeSingleBlankTabFromInactiveTabGroup:(WBTabGroup *)arg1;
- (void)renameTabGroup:(WBTabGroup *)arg1;
- (void)moveTabGroup:(WBTabGroup *)arg1 beforeOrAfterTabGroup:(WBTabGroup *)arg2;
- (void)moveTabDocument:(TabDocument *)arg1 toTabGroupWithUUID:(NSString *)arg2;
- (_Bool)moveTabWithUUID:(NSString *)arg1 fromForeignLocalGroupWithUUIDIntoActiveGroup:(NSString *)arg2;
- (void)moveTab:(WBTab *)arg1 fromTabGroupWithUUID:(NSString *)arg2 toTabGroupWithUUID:(NSString *)arg3 overTab:(WBTab *)arg4;
- (void)createTabGroupFromExistingTabs:(_Bool)arg1 completionHandler:(void (^)(WBTabGroup *))arg2;
- (void)presentAlertToCreateTabGroupFromTabs:(NSArray *)arg1 withTitle:(NSString *)arg2 message:(NSString *)arg3 suggestedName:(NSString *)arg4 okActionTitle:(NSString *)arg5 completionHandler:(void (^)(WBTabGroup *))arg6;
- (void)createNewTabGroup;
- (void)closeTabGroup:(WBTabGroup *)arg1;
- (_Bool)switchToTabWithUUID:(NSUUID *)arg1 inTabGroupWithUUID:(NSUUID *)arg2;
- (void)switchOutOfSyncedTabGroup;
- (NSArray *)tabGroupsMenuElementsWithOptions:(unsigned long long)arg1 newTabGroupName:(NSString *)arg2 hostTitle:(NSString *)arg3 descendantCount:(long long)arg4 movingSelectedTabs:(NSArray *)arg5 actionHandler:(void (^)(WBTabGroup *))arg6;
- (UIContextMenuConfiguration *)contextMenuConfigurationForTab:(WBTab *)arg1 inTabGroup:(WBTabGroup *)arg2;
- (UIContextMenuConfiguration *)contextMenuConfigurationForTabGroup:(WBTabGroup *)arg1 variant:(long long)arg2;
- (UIMenu *)openInTabGroupMenuWithNewTabGroupName:(NSString *)arg1 URL:(NSURL *)arg2 descendantCount:(long long)arg3 handler:(void (^)(void))arg4;
- (UIMenu *)menuForTabGroup:(WBTabGroup *)arg1 variant:(long long)arg2;
- (UISwipeActionsConfiguration *)swipeActionsConfigurationForTab:(WBTab *)arg1 inTabGroup:(WBTabGroup *)arg2;
- (UISwipeActionsConfiguration *)swipeActionsConfigurationForTabGroup:(WBTabGroup *)arg1 forPickerSheet:(_Bool)arg2;
- (UIImage *)imageForTabGroup:(WBTabGroup *)arg1;
@end

