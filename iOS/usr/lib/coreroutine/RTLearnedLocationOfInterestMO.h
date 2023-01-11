//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSOrderedSet, NSSet, NSString, NSUUID, RTMapItemMO;

@interface RTLearnedLocationOfInterestMO : NSManagedObject
{
    RTMapItemMO *cachedMapItem;
}

+ (id)managedObjectWithLocationOfInterest:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchRequest;
@property(retain, nonatomic) RTMapItemMO *cachedMapItem; // @synthesize cachedMapItem;
- (void).cxx_destruct;
- (void)setMapItem:(id)arg1;
- (id)mapItem;

// Remaining properties
@property(copy, nonatomic) NSNumber *confidence; // @dynamic confidence;
@property(copy, nonatomic) NSNumber *dataPointCount; // @dynamic dataPointCount;
@property(retain, nonatomic) NSUUID *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSNumber *locationLatitude; // @dynamic locationLatitude;
@property(copy, nonatomic) NSNumber *locationLongitude; // @dynamic locationLongitude;
@property(copy, nonatomic) NSNumber *locationReferenceFrame; // @dynamic locationReferenceFrame;
@property(copy, nonatomic) NSNumber *locationUncertainty; // @dynamic locationUncertainty;
@property(copy, nonatomic) NSDate *placeCreationDate; // @dynamic placeCreationDate;
@property(copy, nonatomic) NSString *placeCustomLabel; // @dynamic placeCustomLabel;
@property(copy, nonatomic) NSDate *placeExpirationDate; // @dynamic placeExpirationDate;
@property(retain, nonatomic) NSUUID *placeIdentifier; // @dynamic placeIdentifier;
@property(retain, nonatomic) NSUUID *placeMapItemIdentifier; // @dynamic placeMapItemIdentifier;
@property(copy, nonatomic) NSNumber *placeType; // @dynamic placeType;
@property(copy, nonatomic) NSNumber *placeTypeSource; // @dynamic placeTypeSource;
@property(retain, nonatomic) NSSet *transitions; // @dynamic transitions;
@property(retain, nonatomic) NSOrderedSet *visits; // @dynamic visits;

@end

