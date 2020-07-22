//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FitnessUI/FIUIChartPoint-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface FIUIChartPointNumeric : NSObject <FIUIChartPoint>
{
    NSDate *_xValue;
    NSNumber *_yValue;
}

+ (id)chartPointWithXValue:(id)arg1 yValue:(id)arg2;
@property(copy, nonatomic) NSNumber *yValue; // @synthesize yValue=_yValue;
@property(copy, nonatomic) NSDate *xValue; // @synthesize xValue=_xValue;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *maxYValue;
@property(readonly, nonatomic) NSNumber *minYValue;
- (id)initWithXValue:(id)arg1 yValue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

