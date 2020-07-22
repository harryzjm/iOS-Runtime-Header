//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWDCoreRoutineTrafficConditions, RTLocationOfInterest;

@interface RTTrafficConditionsMetric : NSObject
{
    RTLocationOfInterest *_locationOfInterest;
    AWDCoreRoutineTrafficConditions *_metric;
}

@property(readonly, nonatomic) AWDCoreRoutineTrafficConditions *metric; // @synthesize metric=_metric;
@property(readonly, nonatomic) RTLocationOfInterest *locationOfInterest; // @synthesize locationOfInterest=_locationOfInterest;
- (void).cxx_destruct;
- (id)description;
- (void)updatePrecisionRecallWithVisitedLocation:(id)arg1;
- (id)initWithPLOIETA:(id)arg1;
- (id)init;

@end

