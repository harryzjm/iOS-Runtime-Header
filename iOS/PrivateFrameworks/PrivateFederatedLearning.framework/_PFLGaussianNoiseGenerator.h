//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _PFLGaussianNoiseGenerator : NSObject
{
    double _mean;
    double _deviation;
}

+ (id)generatorWithMean:(double)arg1 deviation:(double)arg2;
@property(readonly) double deviation; // @synthesize deviation=_deviation;
@property(readonly) double mean; // @synthesize mean=_mean;
- (id)description;
- (double)sample;
- (id)initWithMean:(double)arg1 deviation:(double)arg2;
- (id)init;

@end
