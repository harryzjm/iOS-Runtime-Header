//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface RTStateModelAggOutOfStateSelection : NSObject
{
    NSMutableArray *_selectOOStStates;
    double _weeklyDensityCorrection;
    double _dailyDensityCorrection;
}

@property(nonatomic) double dailyDensityCorrection; // @synthesize dailyDensityCorrection=_dailyDensityCorrection;
@property(nonatomic) double weeklyDensityCorrection; // @synthesize weeklyDensityCorrection=_weeklyDensityCorrection;
@property(retain, nonatomic) NSMutableArray *selectOOStStates; // @synthesize selectOOStStates=_selectOOStStates;
- (void).cxx_destruct;
- (id)initWithSelectOOStStates:(id)arg1 dailyDensityCorrection:(double)arg2 weeklyDensityCorrection:(double)arg3;
- (id)init;

@end

