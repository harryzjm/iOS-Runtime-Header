//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class ManagedCatalogWorkoutMetadata, NSString;

@interface ManagedTrainerEvent : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, retain) ManagedCatalogWorkoutMetadata *catalogWorkoutMetadata; // @dynamic catalogWorkoutMetadata;
@property(nonatomic) double duration; // @dynamic duration;
@property(nonatomic) double leadDuration; // @dynamic leadDuration;
@property(nonatomic) double startTime; // @dynamic startTime;
@property(nonatomic, copy) NSString *type; // @dynamic type;

@end
