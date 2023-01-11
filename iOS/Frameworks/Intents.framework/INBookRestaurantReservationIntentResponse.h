//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INBookRestaurantReservationIntentResponseExport-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>

@class INRestaurantReservationUserBooking, NSString;

@interface INBookRestaurantReservationIntentResponse <INImageProxyInjecting, INBookRestaurantReservationIntentResponseExport>
{
    INRestaurantReservationUserBooking *_userBooking;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) INRestaurantReservationUserBooking *userBooking; // @synthesize userBooking=_userBooking;
- (void).cxx_destruct;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dictionaryRepresentation;
@property(readonly, nonatomic) long long code;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

