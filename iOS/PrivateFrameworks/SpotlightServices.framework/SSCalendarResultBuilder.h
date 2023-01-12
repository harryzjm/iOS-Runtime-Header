//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface SSCalendarResultBuilder
{
    _Bool _isAllDay;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_calendarName;
    NSString *_delegateCalendarName;
    NSString *_eventIdentifier;
    NSString *_eventName;
    NSString *_location;
}

+ (id)stringWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(_Bool)arg3;
+ (_Bool)isCoreSpotlightResult;
+ (id)bundleId;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAllDay; // @synthesize isAllDay=_isAllDay;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(retain, nonatomic) NSString *eventIdentifier; // @synthesize eventIdentifier=_eventIdentifier;
@property(retain, nonatomic) NSString *delegateCalendarName; // @synthesize delegateCalendarName=_delegateCalendarName;
@property(retain, nonatomic) NSString *calendarName; // @synthesize calendarName=_calendarName;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)buildThumbnail;
- (id)subclassBuildHorizontallyScrollingCardSection;
- (id)buildCompactCardSection;
- (id)buildInlineCardSection;
- (id)initWithResult:(id)arg1;

@end
