//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebBookmarks/NSObject-Protocol.h>

@class CKShareMetadata, NSArray, NSData, NSString, NSURL, WBBrowserState, WBTab, WBTabGroup, WBWindowState;
@protocol WBTabGroupSyncAgentSyncObserver;

@protocol WBTabGroupSyncAgentProtocol <NSObject>
- (void)saveWindowState:(WBWindowState *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)deleteWindowStates:(NSArray *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)deleteWindowState:(WBWindowState *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)closeWindowState:(WBWindowState *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)updateTabs:(NSArray *)arg1 inTabGroup:(WBTabGroup *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)saveTab:(WBTab *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)insertTabs:(NSArray *)arg1 inTabGroup:(WBTabGroup *)arg2 afterTab:(WBTab *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)deleteTabs:(NSArray *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)saveTabGroup:(WBTabGroup *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)moveTabGroup:(WBTabGroup *)arg1 afterTabGroup:(WBTabGroup *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)insertTabGroup:(WBTabGroup *)arg1 afterTabGroup:(WBTabGroup *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)deleteTabGroup:(WBTabGroup *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)saveBrowserState:(WBBrowserState *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)movePresenceForParticipantToTabWithUUID:(NSString *)arg1;
- (void)acceptShareForURL:(NSURL *)arg1 invitationTokenData:(NSData *)arg2 completionHandler:(void (^)(CKShare *, NSError *))arg3;
- (void)beginSharingTabGroupWithUUID:(NSString *)arg1 completionHandler:(void (^)(CKShare *, NSError *))arg2;
- (void)userDidAcceptCloudKitShareWithMetadata:(CKShareMetadata *)arg1;
- (void)removeSyncObserver:(id <WBTabGroupSyncAgentSyncObserver>)arg1;
- (void)addSyncObserver:(id <WBTabGroupSyncAgentSyncObserver>)arg1;
- (void)scheduleSyncIfNeeded;
@end

