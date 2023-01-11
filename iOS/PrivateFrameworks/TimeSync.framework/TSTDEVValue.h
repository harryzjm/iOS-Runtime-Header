//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSTDEVValue : NSObject
{
    double _observationInterval;
    double _tdev;
}

@property(readonly, nonatomic) double tdev; // @synthesize tdev=_tdev;
@property(readonly, nonatomic) double observationInterval; // @synthesize observationInterval=_observationInterval;
- (id)description;
- (id)initWithObservationInterval:(double)arg1 andTDEV:(double)arg2;

@end
