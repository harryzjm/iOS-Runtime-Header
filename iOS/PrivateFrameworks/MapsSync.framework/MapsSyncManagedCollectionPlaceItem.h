//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MapsSyncManagedMixinMapItem, NSData, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface MapsSyncManagedCollectionPlaceItem
{
}

+ (Class)wrapperClass;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, copy) NSString *customName; // @dynamic customName;
@property(nonatomic, copy) NSData *droppedPinCoordinate; // @dynamic droppedPinCoordinate;
@property(nonatomic) int droppedPinFloorOrdinal; // @dynamic droppedPinFloorOrdinal;
@property(nonatomic, retain) NSNumber *latitude; // @dynamic latitude;
@property(nonatomic, retain) NSNumber *longitude; // @dynamic longitude;
@property(nonatomic, retain) MapsSyncManagedMixinMapItem *mapItem; // @dynamic mapItem;
@property(nonatomic, retain) NSNumber *muid; // @dynamic muid;
@property(nonatomic) short origin; // @dynamic origin;

@end

