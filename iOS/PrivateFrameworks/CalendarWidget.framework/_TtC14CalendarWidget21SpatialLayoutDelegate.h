//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC14CalendarWidget21SpatialLayoutDelegate : NSObject
{
    MISSING_TYPE *displayedRect;
    MISSING_TYPE *startDate;
    MISSING_TYPE *endDate;
    MISSING_TYPE *startHourToShow;
    MISSING_TYPE *endHourToShow;
    MISSING_TYPE *scale;
    MISSING_TYPE *calendar;
    MISSING_TYPE *topPadding;
    MISSING_TYPE *originIsUpperLeft;
    MISSING_TYPE *hoursInDay;
    MISSING_TYPE *secondsInDay;
    MISSING_TYPE *secondsInMinute;
    MISSING_TYPE *secondsInHour;
}

- (void).cxx_destruct;
- (id)init;
- (double)RoundToScreenScale:(double)arg1;
- (struct CGPoint)pointForDate:(double)arg1;
- (double)dateForPoint:(struct CGPoint)arg1;
@property(nonatomic) _Bool originIsUpperLeft; // @synthesize originIsUpperLeft;
@property(nonatomic, readonly) double timeWidth;
@property(nonatomic) double topPadding; // @synthesize topPadding;
@property(nonatomic, readonly) double hourHeight;
@property(nonatomic, readonly) struct CGRect displayedRect; // @synthesize displayedRect;

@end

