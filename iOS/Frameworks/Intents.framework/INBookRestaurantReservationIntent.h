//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INBookRestaurantReservationIntentExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>

@class INRestaurant, INRestaurantGuest, INRestaurantOffer, NSDate, NSDateComponents, NSString;

@interface INBookRestaurantReservationIntent <INBookRestaurantReservationIntentExport, NSCopying>
{
    INRestaurant *_restaurant;
    NSDateComponents *_bookingDateComponents;
    unsigned long long _partySize;
    NSString *_bookingIdentifier;
    INRestaurantGuest *_guest;
    INRestaurantOffer *_selectedOffer;
    NSString *_guestProvidedSpecialRequestText;
    NSDate *_bookingDate;
}

+ (id)intentDescription;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *bookingDate; // @synthesize bookingDate=_bookingDate;
@property(copy, nonatomic) NSString *guestProvidedSpecialRequestText; // @synthesize guestProvidedSpecialRequestText=_guestProvidedSpecialRequestText;
@property(copy, nonatomic) INRestaurantOffer *selectedOffer; // @synthesize selectedOffer=_selectedOffer;
@property(copy, nonatomic) INRestaurantGuest *guest; // @synthesize guest=_guest;
@property(copy, nonatomic) NSString *bookingIdentifier; // @synthesize bookingIdentifier=_bookingIdentifier;
@property(nonatomic) unsigned long long partySize; // @synthesize partySize=_partySize;
@property(copy, nonatomic) NSDateComponents *bookingDateComponents; // @synthesize bookingDateComponents=_bookingDateComponents;
@property(copy, nonatomic) INRestaurant *restaurant; // @synthesize restaurant=_restaurant;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestaurant:(id)arg1 bookingDateComponents:(id)arg2 partySize:(unsigned long long)arg3 bookingIdentifier:(id)arg4 guest:(id)arg5 selectedOffer:(id)arg6 guestProvidedSpecialRequestText:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
