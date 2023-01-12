//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile, NSCalendar, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HDMedicationDoseEventDailyAnalytics : NSObject
{
    HDProfile *_profile;
    NSCalendar *_calendar;
    NSDate *_currentDate;
}

+ (id)_predicateForDoseEventsBetweenDate:(id)arg1 andDate:(id)arg2;
+ (id)_predicateForDoseEventsLoggedSinceDate:(id)arg1;
+ (id)_countOfDoseEventsWithPredicate:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
+ (id)_doseEventCountLoggedSinceDate:(id)arg1 transaction:(id)arg2;
- (void).cxx_destruct;
- (id)_hasLoggedAllScheduledMedsInPreviousDayPayloadWithTransaction:(id)arg1;
- (id)_weeksSinceFirstLoggedMedPayload;
- (id)_hasLoggedMedsInPastPayloadWithTransaction:(id)arg1;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id *)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *eventName;
@property(readonly, nonatomic) _Bool isEventSubmissionIHAGated;
- (id)initWithProfile:(id)arg1 calendar:(id)arg2 currentDate:(id)arg3;

@end

