//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MapsSyncManagedVehicle : NSManagedObject
{
}

+ (Class)wrapperClass;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, copy) NSString *colorHex; // @dynamic colorHex;
@property(nonatomic, copy) NSDate *createTime; // @dynamic createTime;
@property(nonatomic, copy) NSData *currentVehicleState; // @dynamic currentVehicleState;
@property(nonatomic, copy) NSDate *dateOfVehicleIngestion; // @dynamic dateOfVehicleIngestion;
@property(nonatomic, copy) NSString *displayName; // @dynamic displayName;
@property(nonatomic, copy) NSString *headUnitBluetoothIdentifier; // @dynamic headUnitBluetoothIdentifier;
@property(nonatomic, copy) NSString *headUnitMacAddress; // @dynamic headUnitMacAddress;
@property(nonatomic, copy) NSString *iapIdentifier; // @dynamic iapIdentifier;
@property(nonatomic, copy) NSUUID *identifier; // @dynamic identifier;
@property(nonatomic, copy) NSDate *lastStateUpdateDate; // @dynamic lastStateUpdateDate;
@property(nonatomic, copy) NSString *licensePlate; // @dynamic licensePlate;
@property(nonatomic, copy) NSString *lprPowerType; // @dynamic lprPowerType;
@property(nonatomic, copy) NSString *lprVehicleType; // @dynamic lprVehicleType;
@property(nonatomic, copy) NSString *manufacturer; // @dynamic manufacturer;
@property(nonatomic, copy) NSString *model; // @dynamic model;
@property(nonatomic, copy) NSDate *modificationTime; // @dynamic modificationTime;
@property(nonatomic, copy) NSString *pairedAppIdentifier; // @dynamic pairedAppIdentifier;
@property(nonatomic) long long positionIndex; // @dynamic positionIndex;
@property(nonatomic, copy) NSData *powerByConnector; // @dynamic powerByConnector;
@property(nonatomic, copy) NSString *siriIntentsIdentifier; // @dynamic siriIntentsIdentifier;
@property(nonatomic, retain) NSNumber *supportedConnectors; // @dynamic supportedConnectors;
@property(nonatomic, copy) NSString *vehicleIdentifier; // @dynamic vehicleIdentifier;
@property(nonatomic, retain) NSNumber *vehicleType; // @dynamic vehicleType;
@property(nonatomic, retain) NSNumber *year; // @dynamic year;

@end

