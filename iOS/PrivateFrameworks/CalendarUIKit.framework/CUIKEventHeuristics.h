//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CUIKEventHeuristics : NSObject
{
}

+ (_Bool)_shouldFilterEvent:(id)arg1 filterOptions:(unsigned long long)arg2;
+ (id)_sortedEvents:(id)arg1 withMethod:(unsigned long long)arg2;
+ (id)_sortedAndFilteredEventsForPredicate:(id)arg1 filterOptions:(unsigned long long)arg2 sortMethod:(unsigned long long)arg3 eventStore:(id)arg4;
+ (id)upcomingEventsInCalendars:(id)arg1 onlyReturnFirstEvents:(_Bool)arg2 filterOptions:(unsigned long long)arg3 sortMethod:(unsigned long long)arg4 eventStore:(id)arg5;
+ (id)tomorrowsEventsInCalendars:(id)arg1 filterOptions:(unsigned long long)arg2 sortMethod:(unsigned long long)arg3 eventStore:(id)arg4;
+ (id)todaysEventsInCalendars:(id)arg1 filterOptions:(unsigned long long)arg2 sortMethod:(unsigned long long)arg3 eventStore:(id)arg4;

@end
