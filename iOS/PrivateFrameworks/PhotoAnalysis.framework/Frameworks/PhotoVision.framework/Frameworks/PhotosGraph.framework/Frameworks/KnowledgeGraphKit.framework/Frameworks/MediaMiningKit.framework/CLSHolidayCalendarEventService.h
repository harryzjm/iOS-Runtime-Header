//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSHolidayCalendarEventDateRuleDelegate-Protocol.h>

@class NSArray, NSString;

@interface CLSHolidayCalendarEventService : NSObject <CLSHolidayCalendarEventDateRuleDelegate>
{
    NSArray *_eventRules;
}

@property(retain, nonatomic) NSArray *eventRules; // @synthesize eventRules=_eventRules;
- (void).cxx_destruct;
- (id)_ruleWithUUID:(id)arg1;
- (id)dateForRuleWithUUID:(id)arg1 byEvaluatingForYear:(long long)arg2;
- (void)enumerateEventRulesBetweenLocalDate:(id)arg1 andLocalDate:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)eventRuleForLocalDate:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (id)initWithLocale:(id)arg1 calendarSourcesURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

