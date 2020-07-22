//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CalDateRange, NSDate, NSDictionary;
@protocol OS_dispatch_queue;

@interface EKUIOverlayCalendarSignificantDatesProvider : NSObject
{
    CalDateRange *_cachedDateRange;
    CalDateRange *_cachedCentralYear;
    NSDictionary *_cachedFirstsOfMonths;
    NSDictionary *_cachedFirstsOfYears;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _currentGeneration;
    NSDate *_currentRequest;
    _Bool _loadPending;
    CDUnknownBlockType _significantDatesChangedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType significantDatesChangedHandler; // @synthesize significantDatesChangedHandler=_significantDatesChangedHandler;
- (void).cxx_destruct;
- (void)_load;
- (void)_requestDate:(id)arg1;
- (id)firstOfOverlayYearsForCalendarMonth:(id)arg1;
- (id)firstOfOverlayMonthsForCalendarMonth:(id)arg1;
- (void)_invalidateCaches;
- (void)dealloc;
- (id)init;

@end

