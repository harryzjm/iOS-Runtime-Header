//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString, RTLocation;

@interface RTCalendarEvent : NSObject
{
    _Bool _allDay;
    NSString *_eventIdentifier;
    NSDate *_startDate;
    NSDate *_endDate;
    unsigned long long _participantStatus;
    long long _availability;
    RTLocation *_location;
    NSString *_locationTitle;
    NSData *_locationMapItemHandle;
}

+ (id)eventAvailabilityToString:(long long)arg1;
+ (id)participantStatusToString:(unsigned long long)arg1;
@property(readonly, nonatomic) NSData *locationMapItemHandle; // @synthesize locationMapItemHandle=_locationMapItemHandle;
@property(readonly, nonatomic) NSString *locationTitle; // @synthesize locationTitle=_locationTitle;
@property(readonly, nonatomic) RTLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) long long availability; // @synthesize availability=_availability;
@property(readonly, nonatomic) unsigned long long participantStatus; // @synthesize participantStatus=_participantStatus;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
@property(readonly, nonatomic) NSString *eventIdentifier; // @synthesize eventIdentifier=_eventIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEventIdentifier:(id)arg1 allDay:(_Bool)arg2 startDate:(id)arg3 endDate:(id)arg4 participantStatus:(unsigned long long)arg5 availability:(long long)arg6 location:(id)arg7 locationTitle:(id)arg8 locationMapItemHandle:(id)arg9;
- (id)init;

@end

