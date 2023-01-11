//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber;

@interface RTVisitMO : NSManagedObject
{
}

+ (id)managedObjectWithVisit:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSNumber *confidence; // @dynamic confidence;
@property(copy, nonatomic) NSNumber *dataPointCount; // @dynamic dataPointCount;
@property(copy, nonatomic) NSDate *detectionDate; // @dynamic detectionDate;
@property(copy, nonatomic) NSDate *entryDate; // @dynamic entryDate;
@property(copy, nonatomic) NSDate *exitDate; // @dynamic exitDate;
@property(copy, nonatomic) NSDate *locationDate; // @dynamic locationDate;
@property(copy, nonatomic) NSNumber *locationLatitude; // @dynamic locationLatitude;
@property(copy, nonatomic) NSNumber *locationLongitude; // @dynamic locationLongitude;
@property(copy, nonatomic) NSNumber *locationReferenceFrame; // @dynamic locationReferenceFrame;
@property(copy, nonatomic) NSNumber *locationUncertainty; // @dynamic locationUncertainty;
@property(copy, nonatomic) NSNumber *type; // @dynamic type;

@end
