//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSNumber, RTLearnedVisitMO;

@interface RTLearnedTransitionMO
{
}

+ (id)managedObjectWithTransition:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchRequest;

// Remaining properties
@property(retain, nonatomic) RTLearnedVisitMO *destination; // @dynamic destination;
@property(retain, nonatomic) RTLearnedVisitMO *origin; // @dynamic origin;
@property(copy, nonatomic) NSNumber *predominantMotionActivityType; // @dynamic predominantMotionActivityType;
@property(copy, nonatomic) NSDate *startDate; // @dynamic startDate;
@property(copy, nonatomic) NSDate *stopDate; // @dynamic stopDate;

@end

