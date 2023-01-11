//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PersonalizationPortraitInternals/PPConnectionsLocationSource-Protocol.h>

@class NSString, PPLocalEventStore;

@interface PPConnectionsCalendarSource <PPConnectionsLocationSource>
{
    PPLocalEventStore *_localEventStore;
}

+ (id)locationValueFromEvent:(id)arg1;
+ (id)locationLabelFromEvent:(id)arg1;
+ (id)locationNameFromEvent:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(id)arg6;
- (_Bool)isCalendarEventEligibleForLocationPrediction:(id)arg1;
- (id)ekEventWithExternalID:(id)arg1;
- (id)upcomingCalendarEventsOfInterestFrom:(id)arg1 lookaheadTime:(double)arg2;
- (id)init;
- (id)identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
