//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WBDatabaseLockAcquisitor, WBSDistributedNotificationObserver, WebBookmarkCollection;

__attribute__((visibility("hidden")))
@interface CyclerCommandHandler : NSObject
{
    WebBookmarkCollection *_bookmarkCollection;
    NSMutableArray *_blocksAwaitingDatabaseLock;
    WBSDistributedNotificationObserver *_syncAgentNotificationObserver;
    WBDatabaseLockAcquisitor *_bookmarkDatabaseLockAcquisitor;
    _Bool _isWaitingToAcquireLock;
}

- (void).cxx_destruct;
- (_Bool)_isBookmarkSyncEnabled;
- (void)_tryToAcquireDatabaseLockWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_cyclerRepresentationOfBookmark:(id)arg1;
- (unsigned long long)_adjustInsertionIndex:(unsigned long long)arg1 forInsertionIntoListWithIdentifier:(int)arg2;
- (_Bool)_isSpecialBookmark:(id)arg1;
- (void)_startMonitoringSyncStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)databaseLockAcquisitor:(id)arg1 acquiredLock:(_Bool)arg2;
- (void)syncBookmarksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setURL:(id)arg1 forBookmarkWithIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setTitle:(id)arg1 forBookmarkWithIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)moveBookmarkWithIdentifier:(id)arg1 intoListWithIdentifier:(id)arg2 atIndex:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)deleteBookmarkWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)createBookmarkListWithTitle:(id)arg1 inListWithIdentifier:(id)arg2 atIndex:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)createBookmarkWithTitle:(id)arg1 url:(id)arg2 inListWithIdentifier:(id)arg3 atIndex:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)clearBookmarksWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchTopLevelBookmarkList:(CDUnknownBlockType)arg1;
- (id)initWithBookmarkCollection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

