//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKit/EKEvent.h>

@interface EKEvent (Aggregation)
- (_Bool)pp_isDupeOfFoodEvent:(id)arg1;
- (id)pp_foodReservationTitle;
- (_Bool)pp_isDupeOfCarRentalDropoffEvent:(id)arg1;
- (id)pp_carRentalDropoffReservationTitle;
- (_Bool)pp_isDupeOfCarRentalPickupEvent:(id)arg1;
- (id)pp_carRentalPickupReservationTitle;
- (_Bool)pp_isDupeOfTrainEvent:(id)arg1;
- (id)pp_trainReservationTitle;
- (_Bool)pp_isDupeOfBoatEvent:(id)arg1;
- (id)pp_busReservationTitle;
- (_Bool)pp_isDupeOfBusEvent:(id)arg1;
- (id)pp_boatReservationTitle;
- (_Bool)pp_isDupeOfLodgingEvent:(id)arg1;
- (id)pp_lodgingName;
- (_Bool)pp_isDupeOfEvent:(id)arg1 forCategory:(unsigned char)arg2;
- (_Bool)pp_isDupeOfFlightEvent:(id)arg1;
- (id)pp_airports;
- (_Bool)pp_isConnectionFromFlight:(id)arg1;
- (id)pp_locationString;
- (unsigned char)pp_suggestedCategory;
@end

