//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBReservation-Protocol.h>

@class NSArray, NSString, _INPBDataString, _INPBTimestamp;

@interface _INPBReservation : PBCodable <_INPBReservation, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int reservationStatus:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _reservationStatus;
    NSArray *_actions;
    _INPBTimestamp *_bookingTime;
    _INPBDataString *_itemReference;
    NSString *_reservationHolderName;
    NSString *_reservationNumber;
}

+ (_Bool)supportsSecureCoding;
+ (Class)actionsType;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) int reservationStatus; // @synthesize reservationStatus=_reservationStatus;
@property(copy, nonatomic) NSString *reservationNumber; // @synthesize reservationNumber=_reservationNumber;
@property(copy, nonatomic) NSString *reservationHolderName; // @synthesize reservationHolderName=_reservationHolderName;
@property(retain, nonatomic) _INPBDataString *itemReference; // @synthesize itemReference=_itemReference;
@property(retain, nonatomic) _INPBTimestamp *bookingTime; // @synthesize bookingTime=_bookingTime;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (int)StringAsReservationStatus:(id)arg1;
- (id)reservationStatusAsString:(int)arg1;
@property(nonatomic) _Bool hasReservationStatus;
@property(readonly, nonatomic) _Bool hasReservationNumber;
@property(readonly, nonatomic) _Bool hasReservationHolderName;
@property(readonly, nonatomic) _Bool hasItemReference;
@property(readonly, nonatomic) _Bool hasBookingTime;
- (id)actionsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long actionsCount;
- (void)addActions:(id)arg1;
- (void)clearActions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
