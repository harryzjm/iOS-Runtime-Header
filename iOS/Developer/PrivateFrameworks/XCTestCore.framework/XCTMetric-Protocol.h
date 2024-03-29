//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCTestCore/NSCopying-Protocol.h>
#import <XCTestCore/NSObject-Protocol.h>

@class NSArray, XCTPerformanceMeasurementTimestamp;

@protocol XCTMetric <NSCopying, NSObject>
- (NSArray *)reportMeasurementsFromStartTime:(XCTPerformanceMeasurementTimestamp *)arg1 toEndTime:(XCTPerformanceMeasurementTimestamp *)arg2 error:(id *)arg3;

@optional
- (void)didStopMeasuring;
- (void)willBeginMeasuring;
@end

