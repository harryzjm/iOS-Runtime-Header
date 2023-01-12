//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CADStatCollectionContext;

@interface CADStatsCalendars
{
    CADStatCollectionContext *_context;
    int _totalCalendars;
    int _totalSharedCalendars;
    int _totalCalendarSharees;
    int _totalHolidayCalendars;
    int _totalSubscribedCalendars;
    int _totalCalDAVSubscribedCalendars;
    int _totalAuthenticatedSubscribedCalendars;
}

+ (id)eventName;
- (void).cxx_destruct;
- (id)eventDictionaries;
- (_Bool)calendarUsesAuthentication:(void *)arg1;
- (void)processCalendars:(id)arg1 inStore:(void *)arg2;
- (_Bool)wantsCalendars;
- (void)prepareWithContext:(id)arg1;

@end
