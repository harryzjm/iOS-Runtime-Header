//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC27HealthMedicationsExperience29MedicationListOnboardingEvent : _TtCs12_SwiftObject
{
    MISSING_TYPE *provenance;
    MISSING_TYPE *step;
    MISSING_TYPE *action;
    MISSING_TYPE *firstTimeMedFlow;
    MISSING_TYPE *medsDetailsEntryPoint;
    MISSING_TYPE *hasSuggestionsFromHealthRecords;
    MISSING_TYPE *itemRank;
    MISSING_TYPE *itemRankInOCR;
    MISSING_TYPE *timeSinceUserLastScannedAMed;
    MISSING_TYPE *didLastScanFallBackToOCR;
    MISSING_TYPE *algorithmType;
}

- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id *)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id *)arg2;
@property(nonatomic, readonly) NSString *eventName;
@property(nonatomic, readonly) _Bool isEventSubmissionIHAGated;

@end

