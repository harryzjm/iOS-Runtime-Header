//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBRideStatus-Protocol.h>

@class NSArray, NSString, _INPBDateTimeRangeValue, _INPBLocationValue, _INPBRideCompletionStatus, _INPBRideDriver, _INPBRideOption, _INPBRideVehicle, _INPBTimestamp, _INPBUserActivity;

@interface _INPBRideStatus : PBCodable <_INPBRideStatus, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int phase:1;
    } _has;
    int _phase;
    NSArray *_additionalActionItems;
    _INPBRideCompletionStatus *_completionStatus;
    _INPBRideDriver *_driver;
    _INPBLocationValue *_dropOffLocation;
    _INPBTimestamp *_estimatedDropOffDate;
    _INPBTimestamp *_estimatedPickupDate;
    _INPBTimestamp *_estimatedPickupEndDate;
    _INPBLocationValue *_pickupLocation;
    NSString *_rideIdentifier;
    _INPBRideOption *_rideOption;
    _INPBDateTimeRangeValue *_scheduledPickupTime;
    _INPBUserActivity *_userActivityForCancelingInApplication;
    _INPBRideVehicle *_vehicle;
    NSArray *_waypoints;
}

+ (_Bool)supportsSecureCoding;
+ (Class)waypointsType;
+ (Class)additionalActionItemsType;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *waypoints; // @synthesize waypoints=_waypoints;
@property(retain, nonatomic) _INPBRideVehicle *vehicle; // @synthesize vehicle=_vehicle;
@property(retain, nonatomic) _INPBUserActivity *userActivityForCancelingInApplication; // @synthesize userActivityForCancelingInApplication=_userActivityForCancelingInApplication;
@property(retain, nonatomic) _INPBDateTimeRangeValue *scheduledPickupTime; // @synthesize scheduledPickupTime=_scheduledPickupTime;
@property(retain, nonatomic) _INPBRideOption *rideOption; // @synthesize rideOption=_rideOption;
@property(copy, nonatomic) NSString *rideIdentifier; // @synthesize rideIdentifier=_rideIdentifier;
@property(retain, nonatomic) _INPBLocationValue *pickupLocation; // @synthesize pickupLocation=_pickupLocation;
@property(nonatomic) int phase; // @synthesize phase=_phase;
@property(retain, nonatomic) _INPBTimestamp *estimatedPickupEndDate; // @synthesize estimatedPickupEndDate=_estimatedPickupEndDate;
@property(retain, nonatomic) _INPBTimestamp *estimatedPickupDate; // @synthesize estimatedPickupDate=_estimatedPickupDate;
@property(retain, nonatomic) _INPBTimestamp *estimatedDropOffDate; // @synthesize estimatedDropOffDate=_estimatedDropOffDate;
@property(retain, nonatomic) _INPBLocationValue *dropOffLocation; // @synthesize dropOffLocation=_dropOffLocation;
@property(retain, nonatomic) _INPBRideDriver *driver; // @synthesize driver=_driver;
@property(retain, nonatomic) _INPBRideCompletionStatus *completionStatus; // @synthesize completionStatus=_completionStatus;
@property(copy, nonatomic) NSArray *additionalActionItems; // @synthesize additionalActionItems=_additionalActionItems;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)waypointsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long waypointsCount;
- (void)addWaypoints:(id)arg1;
- (void)clearWaypoints;
@property(readonly, nonatomic) _Bool hasVehicle;
@property(readonly, nonatomic) _Bool hasUserActivityForCancelingInApplication;
@property(readonly, nonatomic) _Bool hasScheduledPickupTime;
@property(readonly, nonatomic) _Bool hasRideOption;
@property(readonly, nonatomic) _Bool hasRideIdentifier;
@property(readonly, nonatomic) _Bool hasPickupLocation;
- (int)StringAsPhase:(id)arg1;
- (id)phaseAsString:(int)arg1;
@property(nonatomic) _Bool hasPhase;
@property(readonly, nonatomic) _Bool hasEstimatedPickupEndDate;
@property(readonly, nonatomic) _Bool hasEstimatedPickupDate;
@property(readonly, nonatomic) _Bool hasEstimatedDropOffDate;
@property(readonly, nonatomic) _Bool hasDropOffLocation;
@property(readonly, nonatomic) _Bool hasDriver;
@property(readonly, nonatomic) _Bool hasCompletionStatus;
- (id)additionalActionItemsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long additionalActionItemsCount;
- (void)addAdditionalActionItems:(id)arg1;
- (void)clearAdditionalActionItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
