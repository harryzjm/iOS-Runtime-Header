//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGHarvestQueueMetricsTimer : NSObject
{
    unsigned long long _cpuStart;
    unsigned long long _cpuEnd;
    unsigned long long _durationStart;
    unsigned long long _signpostId;
    _Bool _significantWork;
    NSString *_name;
    double _cpu;
    double _duration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool significantWork; // @synthesize significantWork=_significantWork;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double cpu; // @synthesize cpu=_cpu;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)applyAdjustmentIfSane:(id)arg1;
- (void)done:(_Bool)arg1;
- (id)initWithName:(id)arg1;

@end
