//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile, NSCalendar, NSDate, NSString, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface HDMedicationUserDomainConceptDailyAnalytics : NSObject
{
    HDProfile *_profile;
    NSUserDefaults *_medicationsUserDefaults;
    NSCalendar *_calendar;
    NSDate *_currentDate;
}

+ (id)_predicateForMedicationsSinceDate:(id)arg1;
+ (id)_countOfUserDomainConceptsWithPredicate:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
+ (id)_medicationsAddedCountSinceDate:(id)arg1 transaction:(id)arg2;
- (void).cxx_destruct;
- (id)_hasMedsListPayloadWithTransaction:(id)arg1;
- (id)_medsCountPayloadWithTransaction:(id)arg1;
- (id)_hasAddedMedsInPastUnrestrictedPayloadWithTransaction:(id)arg1;
- (id)_hasAddedMedsInPastIHAGatedPayloadWithTransaction:(id)arg1;
- (id)_medsInteractionsPayloadWithTransaction:(id)arg1;
- (id)_hasAnyLifestyleFactorEnabledPayload;
- (id)_weeksSinceFirstAddedMedPayloadWithTransaction:(id)arg1;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id *)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *eventName;
@property(readonly, nonatomic) _Bool isEventSubmissionIHAGated;
- (id)initWithProfile:(id)arg1 medicationsUserDefaults:(id)arg2 calendar:(id)arg3 currentDate:(id)arg4;

@end

