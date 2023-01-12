//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSManagedObject.h"

@class NSCKRecordMetadata, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface NSCKRecordZoneMoveReceipt : NSManagedObject
{
}

+ (id)countMoveReceiptsInStore:(id)arg1 matchingPredicate:(id)arg2 withManagedObjectContext:(id)arg3 error:(id *)arg4;
+ (id)moveReceiptsMatchingRecordIDs:(id)arg1 inManagedObjectContext:(id)arg2 persistentStore:(id)arg3 error:(id *)arg4;
+ (id)entityPath;
- (id)createRecordIDForMovedRecord;

// Remaining properties
@property(retain, nonatomic) NSDate *movedAt; // @dynamic movedAt;
@property(nonatomic) _Bool needsCloudDelete; // @dynamic needsCloudDelete;
@property(retain, nonatomic) NSString *ownerName; // @dynamic ownerName;
@property(retain, nonatomic) NSCKRecordMetadata *recordMetadata; // @dynamic recordMetadata;
@property(retain, nonatomic) NSString *recordName; // @dynamic recordName;
@property(retain, nonatomic) NSString *zoneName; // @dynamic zoneName;

@end

