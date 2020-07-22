//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKOccurrenceCacheSearch, NSMutableArray;

@interface OccurrenceCacheSearchDataSource
{
    EKOccurrenceCacheSearch *_search;
    NSMutableArray *_processingCachedDays;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _resultsLock;
}

- (void).cxx_destruct;
- (id)_cachedDays;
- (void)stopSearching;
- (void)searchWithTerm:(id)arg1;
- (void)_setCachedDaysAndNotify:(id)arg1;
- (long long)countOfOccurrencesAtDayIndex:(long long)arg1;
- (void)invalidateCachedOccurrences;
- (_Bool)supportsFakeTodaySection;
- (_Bool)supportsInvitations;
- (void)dealloc;
- (void)invalidate;
- (id)initWithEventStore:(id)arg1 calendars:(id)arg2;

@end

