//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSDFPSCounterSample : NSObject
{
    double _time;
    double _duration;
}

+ (id)sampleWithTime:(double)arg1 duration:(double)arg2;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double time; // @synthesize time=_time;
- (id)initWithTime:(double)arg1 duration:(double)arg2;

@end
