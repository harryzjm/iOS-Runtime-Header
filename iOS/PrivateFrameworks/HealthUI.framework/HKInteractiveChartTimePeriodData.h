//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesChartData-Protocol.h>

@class NSDateComponents, NSString;

@interface HKInteractiveChartTimePeriodData : NSObject <HKGraphSeriesChartData>
{
    double _timePeriod;
    NSString *_timePeriodPrefix;
    NSDateComponents *_statisticsInterval;
    long long _recordCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long recordCount; // @synthesize recordCount=_recordCount;
@property(retain, nonatomic) NSDateComponents *statisticsInterval; // @synthesize statisticsInterval=_statisticsInterval;
@property(retain, nonatomic) NSString *timePeriodPrefix; // @synthesize timePeriodPrefix=_timePeriodPrefix;
@property(nonatomic) double timePeriod; // @synthesize timePeriod=_timePeriod;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
