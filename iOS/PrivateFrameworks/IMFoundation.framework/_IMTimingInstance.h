//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface _IMTimingInstance : NSObject
{
    double _startTiming;
    double _stopTiming;
    double _totalTime;
    _Bool _isRunning;
}

+ (id)createTimingInstanceWithStartTime:(float)arg1;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
- (id)description;
- (void)stopUsingTime:(double)arg1;
- (void)startUsingTime:(double)arg1;
- (id)init;

@end

