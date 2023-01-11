//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSDFPSCounter : NSObject
{
    NSMutableArray *_sampleArray;
    double _startTimeInterval;
    double _endTimeInterval;
    unsigned long long _frameCount;
}

- (void).cxx_destruct;
- (id)p_fpsInfo;
- (double)p_standardDeviationFromArray:(id)arg1 mean:(double)arg2;
- (id)p_modeFromArray:(id)arg1;
- (id)formatInfoForLog:(id)arg1 identifier:(id)arg2 type:(id)arg3 testName:(id)arg4 direction:(id)arg5 duration:(double)arg6 slide:(long long)arg7;
- (id)fpsGraphString;
- (id)fpsSummaryString;
- (id)p_fpsSummaryStringIncludingGraph:(_Bool)arg1;
- (void)addSample:(id)arg1;
- (void)addFrameAtDrawTime:(double)arg1 duration:(double)arg2;
- (void)addFrameAtDrawTime:(double)arg1;
- (void)addFrame;
- (void)reset;
- (id)init;

@end
