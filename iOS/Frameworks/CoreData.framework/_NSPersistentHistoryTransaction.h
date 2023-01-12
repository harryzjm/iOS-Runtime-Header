//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSPersistentHistoryTransaction.h"

@class NSArray, NSData, NSManagedObjectID, NSPersistentStoreCoordinator, NSString;

__attribute__((visibility("hidden")))
@interface _NSPersistentHistoryTransaction : NSPersistentHistoryTransaction
{
    long long _rowIdentifier;
    double _timestamp;
    NSArray *_changes;
    NSString *_storeID;
    NSString *_bundleID;
    NSString *_processID;
    NSString *_contextName;
    NSString *_author;
    NSData *_queryGeneration;
    NSPersistentStoreCoordinator *_coordinator;
    NSManagedObjectID *_backingObjectID;
}

+ (_Bool)supportsSecureCoding;
- (id)objectIDNotification;
- (id)_backingObjectID;
- (id)author;
- (id)contextName;
- (id)processID;
- (id)bundleID;
- (id)storeID;
- (id)postQueryGenerationToken;
- (id)initialQueryGenerationToken;
- (id)token;
- (long long)transactionNumber;
- (id)changes;
- (id)timestamp;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 andObjectID:(id)arg2;

@end

