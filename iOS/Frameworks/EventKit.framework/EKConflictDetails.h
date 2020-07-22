//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CalDateRange, NSArray;

__attribute__((visibility("hidden")))
@interface EKConflictDetails : NSObject
{
    NSArray *_conflictingDates;
    NSArray *_conflictingEvents;
    NSArray *_needsActionEvents;
    unsigned long long _totalOccurrencesInSeries;
    unsigned long long _totalConflictsInSeries;
    unsigned long long _totalConflictingEvents;
    unsigned long long _totalNeedsActionEvents;
    CalDateRange *_conflictPeriodForSeries;
}

+ (id)calendarIdentifiersToScanForConflictsForEvent:(id)arg1;
+ (double)_maxRangeLengthForRule:(id)arg1;
+ (id)_dateRangeToScanForConflictsForEvent:(id)arg1 dateForNow:(id)arg2;
+ (id)dateRangeToScanForConflictsForEvent:(id)arg1;
+ (id)infoWithConflicts:(long long)arg1 needsAction:(long long)arg2 event:(id)arg3;
+ (id)infoWithConflictsInSeries:(long long)arg1 outOf:(long long)arg2 withPeriod:(id)arg3;
@property(retain) CalDateRange *conflictPeriodForSeries; // @synthesize conflictPeriodForSeries=_conflictPeriodForSeries;
@property unsigned long long totalNeedsActionEvents; // @synthesize totalNeedsActionEvents=_totalNeedsActionEvents;
@property unsigned long long totalConflictingEvents; // @synthesize totalConflictingEvents=_totalConflictingEvents;
@property unsigned long long totalConflictsInSeries; // @synthesize totalConflictsInSeries=_totalConflictsInSeries;
@property unsigned long long totalOccurrencesInSeries; // @synthesize totalOccurrencesInSeries=_totalOccurrencesInSeries;
@property(retain) NSArray *needsActionEvents; // @synthesize needsActionEvents=_needsActionEvents;
@property(retain) NSArray *conflictingEvents; // @synthesize conflictingEvents=_conflictingEvents;
@property(retain) NSArray *conflictingDates; // @synthesize conflictingDates=_conflictingDates;
- (void).cxx_destruct;
- (id)description;
- (id)initWithConflictingDates:(id)arg1 conflictingEvents:(id)arg2 needsActionEvents:(id)arg3 totalOccurrencesInSeries:(unsigned long long)arg4 conflictPeriodForSeries:(id)arg5;

@end

