//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SFRSSIQueue : NSObject
{
    NSMutableArray *_rssiValues;
    NSMutableArray *_tickValues;
}

- (void).cxx_destruct;
- (double)velocityFromA:(unsigned long long)arg1 toB:(unsigned long long)arg2;
@property(readonly, nonatomic) double velocitySmoothed;
@property(readonly, nonatomic) double velocity;
- (void)addSample:(double)arg1 atTicks:(unsigned long long)arg2;

@end

