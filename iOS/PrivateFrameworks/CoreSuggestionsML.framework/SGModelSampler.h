//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASRng;

@interface SGModelSampler : NSObject
{
    double _positiveRate;
    double _dynamicLabelRate;
    double _negativeRate;
    _PASRng *_rng;
}

- (void).cxx_destruct;
- (_Bool)shouldSampleForLabel:(id)arg1 isDynamicLabel:(_Bool)arg2;
- (id)initWithPositiveRate:(double)arg1 dynamicLabelRate:(double)arg2 negativeRate:(double)arg3 rng:(id)arg4;

@end
