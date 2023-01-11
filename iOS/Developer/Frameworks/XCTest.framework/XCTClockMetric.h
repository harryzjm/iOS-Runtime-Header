//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTest/XCTMetric-Protocol.h>
#import <XCTest/XCTMetric_Private-Protocol.h>

@class MXMClockMetric, NSString;

@interface XCTClockMetric : NSObject <XCTMetric_Private, XCTMetric>
{
    NSString *_instrumentationName;
    MXMClockMetric *__underlyingMetric;
}

+ (id)realTime;
+ (id)monotonicTime;
- (void).cxx_destruct;
@property(retain, nonatomic) MXMClockMetric *_underlyingMetric; // @synthesize _underlyingMetric=__underlyingMetric;
@property(readonly, nonatomic) NSString *instrumentationName; // @synthesize instrumentationName=_instrumentationName;
- (id)reportMeasurementsFromStartTime:(id)arg1 toEndTime:(id)arg2 error:(id *)arg3;
- (void)didStopMeasuringAtTimestamp:(id)arg1;
- (void)didStartMeasuringAtTimestamp:(id)arg1;
- (void)willBeginMeasuringAtEstimatedTimestamp:(id)arg1;
- (void)prepareToMeasureWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUnderlyingMetric:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
