//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookmarkDAV/CoreDAVTaskGroupDelegate-Protocol.h>

@class CoreDAVRecursiveContainerSyncTaskGroup, NSArray, NSData, NSDictionary, NSError, NSSet, NSString, NSURL;

@protocol CoreDAVLocalDBTreeInfoProvider <CoreDAVTaskGroupDelegate>
- (void)notePutToURL:(NSURL *)arg1 withDataPayload:(NSData *)arg2 finishedWithIgnoredError:(NSError *)arg3;
- (void)recursiveContainerSyncTask:(CoreDAVRecursiveContainerSyncTaskGroup *)arg1 completedFullSyncWithNewCTag:(NSString *)arg2 newPTag:(NSString *)arg3 newSyncToken:(NSString *)arg4 error:(NSError *)arg5;
- (void)recursiveContainerSyncTask:(CoreDAVRecursiveContainerSyncTaskGroup *)arg1 completedSyncOfFolderWithURL:(NSURL *)arg2 newCTag:(NSString *)arg3 newPTag:(NSString *)arg4 addedOrModified:(NSSet *)arg5 removed:(NSSet *)arg6 error:(NSError *)arg7;
- (void)recursiveContainerSyncTask:(CoreDAVRecursiveContainerSyncTaskGroup *)arg1 retrievedAddedOrModifiedActions:(NSSet *)arg2 removed:(NSSet *)arg3;
- (void)recursiveContainerSyncTask:(CoreDAVRecursiveContainerSyncTaskGroup *)arg1 receivedAddedOrModifiedFolder:(id)arg2;
- (_Bool)setLocalETag:(NSString *)arg1 forItemWithURL:(NSURL *)arg2;
- (NSSet *)copyAllLocalURLsInFolderWithURL:(NSURL *)arg1;
- (NSDictionary *)copyLocalETagsForURLs:(NSArray *)arg1;
- (_Bool)getCTag:(id *)arg1 pTag:(id *)arg2 forFolderWithURL:(NSURL *)arg3;

@optional
- (void)moveTaskFromURL:(NSURL *)arg1 toURL:(NSURL *)arg2 finishedWithIgnoredError:(NSError *)arg3;
@end
