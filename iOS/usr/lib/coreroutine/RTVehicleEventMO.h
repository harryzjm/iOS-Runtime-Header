//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSNumber, NSString, NSUUID, RTMapItemMO;

@interface RTVehicleEventMO : NSManagedObject
{
    RTMapItemMO *cachedMapItem;
}

+ (id)managedObjectWithVehicleEvent:(id)arg1 inManagedObjectContext:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) RTMapItemMO *cachedMapItem; // @synthesize cachedMapItem;
- (void)setMapItem:(id)arg1;
- (id)mapItem;

// Remaining properties
@property(copy, nonatomic) NSDate *date; // @dynamic date;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSDate *locDate; // @dynamic locDate;
@property(copy, nonatomic) NSNumber *locLatitude; // @dynamic locLatitude;
@property(copy, nonatomic) NSNumber *locLongitude; // @dynamic locLongitude;
@property(copy, nonatomic) NSNumber *locReferenceFrame; // @dynamic locReferenceFrame;
@property(copy, nonatomic) NSNumber *locUncertainty; // @dynamic locUncertainty;
@property(copy, nonatomic) NSNumber *locationQuality; // @dynamic locationQuality;
@property(copy, nonatomic) NSUUID *mapItemIdentifier; // @dynamic mapItemIdentifier;
@property(copy, nonatomic) NSString *notes; // @dynamic notes;
@property(retain, nonatomic) NSData *photoData; // @dynamic photoData;
@property(copy, nonatomic) NSNumber *userSetLocation; // @dynamic userSetLocation;
@property(copy, nonatomic) NSNumber *usualLocation; // @dynamic usualLocation;
@property(copy, nonatomic) NSString *vehicleIdentifier; // @dynamic vehicleIdentifier;

@end
