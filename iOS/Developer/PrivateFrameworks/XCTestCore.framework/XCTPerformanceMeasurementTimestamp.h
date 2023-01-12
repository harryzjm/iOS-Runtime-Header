//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface XCTPerformanceMeasurementTimestamp : NSObject
{
    _Bool _hasContinuousTime;
    unsigned long long _continuousTime;
    unsigned long long _absoluteTime;
    NSDate *_date;
}

- (void).cxx_destruct;
@property(readonly) _Bool hasContinuousTime; // @synthesize hasContinuousTime=_hasContinuousTime;
@property(readonly, copy) NSDate *date; // @synthesize date=_date;
@property(readonly) unsigned long long absoluteTime; // @synthesize absoluteTime=_absoluteTime;
@property(readonly) unsigned long long continuousTime; // @synthesize continuousTime=_continuousTime;
@property(readonly) unsigned long long absoluteTimeNanoSeconds;
- (id)initWithAbsoluteTime:(unsigned long long)arg1 date:(id)arg2;
- (id)initWithContinuousTime:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 date:(id)arg3;
- (id)init;

@end
