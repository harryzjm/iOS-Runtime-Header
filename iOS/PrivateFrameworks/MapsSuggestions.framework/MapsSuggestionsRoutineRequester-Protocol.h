//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class CLLocation, NSDate, NSUUID;

@protocol MapsSuggestionsRoutineRequester <MapsSuggestionsObject>
- (void)clearAllVehicleEventsWithHandler:(void (^)(void))arg1;
- (void)stopMonitoringVehicleEvents;
- (_Bool)startMonitoringVehicleEventsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (_Bool)fetchRoutineModeFromLocation:(CLLocation *)arg1 handler:(void (^)(long long, NSError *))arg2;
- (_Bool)fetchLocationOfInterestWithIdentifier:(NSUUID *)arg1 handler:(void (^)(RTLocationOfInterest *, NSError *))arg2;
- (_Bool)fetchLocationsOfInterestVisitedSinceDate:(NSDate *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (_Bool)fetchLocationsOfInterestOfType:(long long)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (_Bool)fetchNextPLOIsFromLocation:(CLLocation *)arg1 startDate:(NSDate *)arg2 timeInterval:(double)arg3 handler:(void (^)(NSArray *, NSError *))arg4;
@end
