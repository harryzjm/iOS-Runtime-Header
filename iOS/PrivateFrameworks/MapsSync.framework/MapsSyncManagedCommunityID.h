//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MapsSyncManagedCommunityID : NSManagedObject
{
}

+ (Class)wrapperClass;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, copy) NSString *communityIdentifier; // @dynamic communityIdentifier;
@property(nonatomic, copy) NSDate *createTime; // @dynamic createTime;
@property(nonatomic) _Bool expired; // @dynamic expired;
@property(nonatomic, copy) NSUUID *identifier; // @dynamic identifier;
@property(nonatomic, copy) NSDate *modificationTime; // @dynamic modificationTime;
@property(nonatomic) long long positionIndex; // @dynamic positionIndex;
@property(nonatomic, retain) NSSet *rapRecords; // @dynamic rapRecords;
@property(nonatomic, retain) NSSet *reviewedPlaces; // @dynamic reviewedPlaces;
@property(nonatomic) long long usedCount; // @dynamic usedCount;

@end

