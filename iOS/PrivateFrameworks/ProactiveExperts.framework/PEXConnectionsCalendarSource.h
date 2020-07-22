//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProactiveExperts/PEXConnectionsLocationSource-Protocol.h>

@class EKEventStore, NSArray, NSCache, NSObject, NSString, PEXEventCache;
@protocol OS_dispatch_queue;

@interface PEXConnectionsCalendarSource <PEXConnectionsLocationSource>
{
    NSCache *_ekEventsCache;
    EKEventStore *_eventStore;
    NSArray *_calendars;
    _Bool _eventStoreAccessGranted;
    PEXEventCache *_eventCache;
    NSObject<OS_dispatch_queue> *_eventLoadingQueue;
}

+ (id)locationValueFromEKEvent:(id)arg1;
+ (id)locationLabelFromEKEvent:(id)arg1;
+ (id)locationNameFromEKEvent:(id)arg1;
+ (id)identifier;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)preloadEKEvents;
- (void)clearEKEventCaches;
- (void)registerForCalendarNotifications;
- (void)setEventStoreAccessGranted:(_Bool)arg1;
- (void)requestAccessToEventStore;
- (id)ekEventWithExternalID:(id)arg1;
- (id)_loadCalendars;
- (_Bool)isCalendarEventEligibleForLocationPrediction:(id)arg1;
- (id)_filterOutAllDayAndMultiDayEvents:(id)arg1;
- (id)_predicateForRange:(struct _NSRange)arg1;
- (id)upcomingCalendarEventsOfInterestFrom:(id)arg1 lookaheadTime:(double)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

