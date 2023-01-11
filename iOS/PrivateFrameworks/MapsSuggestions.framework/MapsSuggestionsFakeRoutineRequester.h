//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsRoutineRequester-Protocol.h>

@class NSMutableDictionary, NSString;

@interface MapsSuggestionsFakeRoutineRequester : NSObject <MapsSuggestionsRoutineRequester>
{
    NSMutableDictionary *_fakeData;
    _Bool _breakCallbackPromise;
    unsigned long long _calledFetchNextPLOIs;
    unsigned long long _calledFetchLocationOfInterestWithIdentifier;
    unsigned long long _calledFetchLocationsOfInterestOfType;
    unsigned long long _calledFetchLocationsOfInterestVisitedSinceDate;
    unsigned long long _calledFetchRoutineModeFromLocation;
    unsigned long long _calledAddLocationOfInterest;
    unsigned long long _calledUpdateLocationOfInterest;
    unsigned long long _calledStartMonitoringVehicleEvents;
}

- (void).cxx_destruct;
- (_Bool)fetchLocationOfInterestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)clearAllVehicleEventsWithHandler:(CDUnknownBlockType)arg1;
- (void)stopMonitoringVehicleEvents;
- (_Bool)startMonitoringVehicleEventsWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)fetchRoutineModeFromLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)fetchLocationsOfInterestOfType:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)fetchNextPLOIsFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 handler:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSString *uniqueName;
- (unsigned long long)calledStartMonitoringVehicleEvents;
- (unsigned long long)calledUpdateLocationOfInterest;
- (unsigned long long)calledAddLocationOfInterest;
- (unsigned long long)calledFetchRoutineModeFromLocation;
- (unsigned long long)calledFetchLocationsOfInterestVisitedSinceDate;
- (unsigned long long)calledFetchLocationsOfInterestOfType;
- (unsigned long long)calledFetchLocationOfInterestWithIdentifier;
- (unsigned long long)calledFetchNextPLOIs;
- (void)configureBrokenCallBackPromise:(_Bool)arg1;
- (void)configureLOI:(id)arg1 forIdentifier:(id)arg2;
- (void)configureLOIs:(id)arg1 sinceDate:(id)arg2;
- (void)configureLOIs:(id)arg1 forType:(long long)arg2;
- (void)configureError:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
