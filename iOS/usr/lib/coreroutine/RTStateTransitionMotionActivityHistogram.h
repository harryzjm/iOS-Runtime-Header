//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface RTStateTransitionMotionActivityHistogram : NSObject
{
    NSMutableArray *_histogramBins;
    long long _activityChangeCount;
    double _cumulativeInterval;
}

@property(nonatomic) double cumulativeInterval; // @synthesize cumulativeInterval=_cumulativeInterval;
@property(nonatomic) long long activityChangeCount; // @synthesize activityChangeCount=_activityChangeCount;
@property(retain, nonatomic) NSMutableArray *histogramBins; // @synthesize histogramBins=_histogramBins;
- (void).cxx_destruct;
- (unsigned long long)getDominantMotionActivityType;
- (void)show;
- (void)addActivity:(id)arg1 withInterval:(double)arg2;
- (id)initWithMotionActivities:(id)arg1 fromStartDate:(id)arg2 toEndDate:(id)arg3;
- (id)populateTransitionMotionActivityHistogram;

@end

