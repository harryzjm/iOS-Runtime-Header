//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCalendar;

__attribute__((visibility("hidden")))
@interface TSCECalendar : NSObject
{
    NSCalendar *_calendar;
}

- (void).cxx_destruct;
- (void)extractComponentsFromDate:(id)arg1 year:(long long *)arg2 month:(long long *)arg3 day:(long long *)arg4;
- (void)extractComponentsFromDate:(id)arg1 year:(long long *)arg2 month:(long long *)arg3 day:(long long *)arg4 hour:(long long *)arg5 minute:(long long *)arg6 second:(long long *)arg7;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)dateFromComponents:(id)arg1;
- (id)initWithCalendarIdentifier:(id)arg1 timeZone:(id)arg2;
- (id)init;

@end

