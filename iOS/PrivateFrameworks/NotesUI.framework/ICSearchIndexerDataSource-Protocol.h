//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesUI/NSObject-Protocol.h>

@class CSSearchableItem, NSArray, NSDictionary, NSError, NSManagedObjectContext, NSPersistentStoreCoordinator, NSString;
@protocol ICSearchIndexable;

@protocol ICSearchIndexerDataSource <NSObject>
- (_Bool)isObservingChanges;
- (void)stopObservingChanges;
- (void)startObservingChanges;
- (void)stageForReindexing;
- (void)searchIndexerDidFinishDeletingSearchableItemsWithIdentifiers:(NSArray *)arg1 error:(NSError *)arg2;
- (void)searchIndexerWillDeleteSearchableItemsWithIdentifiers:(NSArray *)arg1;
- (void)searchIndexerDidFinishIndexingObjectIDs:(NSArray *)arg1 error:(NSError *)arg2;
- (void)searchIndexerWillIndexObjectIDs:(NSArray *)arg1;
- (id <ICSearchIndexable>)objectForSearchableItemIdentifier:(NSString *)arg1 context:(NSManagedObjectContext *)arg2;
- (id <ICSearchIndexable>)objectForSearchableItem:(CSSearchableItem *)arg1 context:(NSManagedObjectContext *)arg2;
- (NSArray *)searchableItemsForObjectIDs:(NSArray *)arg1;
- (NSDictionary *)allIndexableObjectIdentifiersByObjectID;
- (NSArray *)searchableItemIdentifiersToBeDeleted;
- (NSArray *)objectIDsNeedingIndexing;
- (NSArray *)indexableObjectIDsWithIdentifiers:(NSArray *)arg1;
- (_Bool)needsReindexing;
- (NSManagedObjectContext *)newManagedObjectContext;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
- (NSString *)dataSourceIdentifier;
@end

