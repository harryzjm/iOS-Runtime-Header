//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface TSRMSTIEValue : NSObject
{
    double _observationInterval;
    double _rmstie;
}

@property(readonly, nonatomic) double rmstie; // @synthesize rmstie=_rmstie;
@property(readonly, nonatomic) double observationInterval; // @synthesize observationInterval=_observationInterval;
- (id)description;
- (id)initWithObservationInterval:(double)arg1 andRMSTIE:(double)arg2;

@end

