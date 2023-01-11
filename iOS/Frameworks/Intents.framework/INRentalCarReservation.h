//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class CLPlacemark, INDateComponentsRange, INRentalCar;

@interface INRentalCarReservation <NSCopying, NSSecureCoding>
{
    INRentalCar *_rentalCar;
    INDateComponentsRange *_rentalDuration;
    CLPlacemark *_pickupLocation;
    CLPlacemark *_dropOffLocation;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CLPlacemark *dropOffLocation; // @synthesize dropOffLocation=_dropOffLocation;
@property(readonly, copy, nonatomic) CLPlacemark *pickupLocation; // @synthesize pickupLocation=_pickupLocation;
@property(readonly, copy, nonatomic) INDateComponentsRange *rentalDuration; // @synthesize rentalDuration=_rentalDuration;
@property(readonly, copy, nonatomic) INRentalCar *rentalCar; // @synthesize rentalCar=_rentalCar;
- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_duration;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 rentalCar:(id)arg7 rentalDuration:(id)arg8 pickupLocation:(id)arg9 dropOffLocation:(id)arg10;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 rentalCar:(id)arg8 rentalDuration:(id)arg9 pickupLocation:(id)arg10 dropOffLocation:(id)arg11;

@end
