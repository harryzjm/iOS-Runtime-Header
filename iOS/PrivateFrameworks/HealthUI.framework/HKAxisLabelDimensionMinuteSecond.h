//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSDateFormatter;

@interface HKAxisLabelDimensionMinuteSecond
{
    NSDateFormatter *_dateFormatter;
    NSDate *_startDate;
}

@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void).cxx_destruct;
- (id)stringForLocation:(id)arg1;
- (id)initWithStartDate:(id)arg1;

@end

