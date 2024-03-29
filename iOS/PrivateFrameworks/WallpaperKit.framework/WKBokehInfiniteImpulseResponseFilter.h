//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKBokehInfiniteImpulseResponseFilter : NSObject
{
    unsigned long long _count;
    double *_ffC;
    double *_fbC;
    double *_inputHistory;
    double *_outputHistory;
    double _zeroGradientThreshold;
}

- (void)dealloc;
- (id)initWithCount:(unsigned long long)arg1 feedforwardCoefficients:(double *)arg2 feedbackCoefficients:(double *)arg3;

@end

