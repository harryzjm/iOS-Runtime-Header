//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarUIKit/NSObject-Protocol.h>

@class EKEvent, EKEventStore, NSArray, NSDate, NSIndexPath, NSSet, NSString;

@protocol CUIKOccurrenceCacheDataSourceProtocol <NSObject>
- (void)invalidate;
- (void)stopSearching;
- (void)searchWithTerm:(NSString *)arg1;
- (void)fetchDaysStartingFromSection:(long long)arg1 sectionsToLoadInBothDirections:(long long)arg2;
- (void)fetchDaysInBackgroundStartingFromSection:(long long)arg1;
- (void)invalidateCachedOccurrences;
- (NSArray *)indexPathsForOccurrence:(EKEvent *)arg1;
- (long long)sectionForCachedOccurrencesOnDate:(NSDate *)arg1;
- (EKEvent *)cachedOccurrenceAtIndexPath:(NSIndexPath *)arg1;
- (NSDate *)dateAtDayIndex:(long long)arg1;
- (long long)countOfOccurrencesAtDayIndex:(long long)arg1;
- (long long)cachedDayCount;
- (_Bool)cachedOccurrencesAreLoaded;
- (_Bool)supportsFakeTodaySection;
- (_Bool)supportsInvitations;
- (id)initWithEventStore:(EKEventStore *)arg1 calendars:(NSSet *)arg2;
@end

