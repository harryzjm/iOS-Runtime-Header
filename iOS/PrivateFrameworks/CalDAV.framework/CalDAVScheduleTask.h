//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVPostTask.h>

@class CalDAVScheduleResponseItem, NSArray, NSString;

@interface CalDAVScheduleTask : CoreDAVPostTask
{
    NSArray *_attendees;
    CalDAVScheduleResponseItem *_scheduleResponse;
    NSString *_originator;
}

@property(retain, nonatomic) NSString *originator; // @synthesize originator=_originator;
@property(retain, nonatomic) CalDAVScheduleResponseItem *scheduleResponse; // @synthesize scheduleResponse=_scheduleResponse;
@property(retain, nonatomic) NSArray *attendees; // @synthesize attendees=_attendees;
- (void).cxx_destruct;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)additionalHeaderValues;
- (id)initWithOriginator:(id)arg1 attendees:(id)arg2 outboxURL:(id)arg3 payload:(id)arg4;

@end

