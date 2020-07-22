//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FlightUtilities/FUFlightFactoryInternalProtocol-Protocol.h>

@class NSString;

@interface FUFlightFactory_Parsec <FUFlightFactoryInternalProtocol>
{
}

+ (id)convertFlightModel:(id)arg1 withError:(id *)arg2;
+ (void)extractTimeForFlightStep:(id)arg1 fromLeg:(id)arg2 departure:(_Bool)arg3;
+ (id)airportFromSFAirport:(id)arg1;
+ (void)loadFlightStructuresWithFlightNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
