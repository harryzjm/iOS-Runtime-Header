//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface GEOPlaceDailyHours : NSObject
{
    struct _NSRange _dayOfWeekRange;
    NSArray *_openIntervals;
}

+ (id)dailyHours:(id)arg1 forDays:(struct _NSRange)arg2;
@property(readonly) NSArray *openIntervals; // @synthesize openIntervals=_openIntervals;
@property(readonly) struct _NSRange dayOfWeekRange; // @synthesize dayOfWeekRange=_dayOfWeekRange;
- (void).cxx_destruct;
- (id)description;

@end

