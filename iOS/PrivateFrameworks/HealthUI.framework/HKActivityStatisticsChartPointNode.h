//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKValueRange, NSNumber;

@interface HKActivityStatisticsChartPointNode : NSObject
{
    HKValueRange *_dateRange;
    long long _type;
    NSNumber *_value;
}

@property(readonly, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) HKValueRange *dateRange; // @synthesize dateRange=_dateRange;
- (void).cxx_destruct;
- (id)initWithRange:(id)arg1 type:(long long)arg2 value:(id)arg3;

@end

