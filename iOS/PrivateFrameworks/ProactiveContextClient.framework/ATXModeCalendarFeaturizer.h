//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveContextClient/ATXModeFeaturizer-Protocol.h>

@class NSHashTable, NSString, _PASSimpleCoalescingTimer;
@protocol ATXModeFeaturizerDelegate;

@interface ATXModeCalendarFeaturizer : NSObject <ATXModeFeaturizer>
{
    NSHashTable *_timers;
    _PASSimpleCoalescingTimer *_featureUpdateTimer;
    _Bool _calendarRefreshCoalesceTimerIsEnabled;
    id <ATXModeFeaturizerDelegate> _delegate;
}

+ (_Bool)isLikelyAWorkCalendar:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool calendarRefreshCoalesceTimerIsEnabled; // @synthesize calendarRefreshCoalesceTimerIsEnabled=_calendarRefreshCoalesceTimerIsEnabled;
@property(nonatomic) __weak id <ATXModeFeaturizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopListening;
- (id)provideFeatures;
- (void)beginListening;
- (void)_addTimerForDate:(id)arg1;
- (id)_fetchEventsForDay;
- (_Bool)_shouldConsiderEventBasedOnParticipantStatus:(long long)arg1;
- (void)_setFeaturesForEventsCurrentlyIn:(id)arg1 now:(id)arg2 featureSet:(id)arg3;
- (_Bool)_hasAnyEventsIn:(id)arg1 now:(id)arg2;
- (void)_updateFeatures;
- (void)_eventsDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
