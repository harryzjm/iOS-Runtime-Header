//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactFormatter, EKEventStore, REMStore, _CDInteractionStore;

@interface _PSSuggestionFromTextPredictor : NSObject
{
    EKEventStore *_eventStore;
    _CDInteractionStore *_interactionStore;
    CNContactFormatter *_contactFormatter;
    REMStore *_remStore;
}

+ (_Bool)isEligibleUnstructuredEvent:(id)arg1;
- (void).cxx_destruct;
- (id)suggestionsFromUnstructuredCalendarEventsWithContext:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 priorScoreThreshold:(float)arg4;
- (id)suggestionsFromPortraitExtractionsWithContext:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 priorScoreThreshold:(float)arg4 reason:(id)arg5;
- (id)suggestionsFromIncompleteRemindersWithContext:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 priorScoreThreshold:(float)arg4;
- (id)suggestionFromText:(id)arg1 priorScoreThreshold:(float)arg2 bundleID:(id)arg3 reason:(id)arg4;
- (id)suggestionFromContactPriors:(id)arg1 priorScoreThreshold:(float)arg2 bundleID:(id)arg3 reason:(id)arg4;
- (id)initWithEventStore:(id)arg1 interactionStore:(id)arg2;

@end
