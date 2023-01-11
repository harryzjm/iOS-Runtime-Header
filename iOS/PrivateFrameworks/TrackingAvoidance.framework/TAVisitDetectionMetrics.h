//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrackingAvoidance/NSSecureCoding-Protocol.h>

@interface TAVisitDetectionMetrics : NSObject <NSSecureCoding>
{
    double _distanceToPreviousVisit;
    double _residualDistanceToPreviousVisit;
    unsigned long long _nSigmaBetweenVisits;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long nSigmaBetweenVisits; // @synthesize nSigmaBetweenVisits=_nSigmaBetweenVisits;
@property(readonly, nonatomic) double residualDistanceToPreviousVisit; // @synthesize residualDistanceToPreviousVisit=_residualDistanceToPreviousVisit;
@property(readonly, nonatomic) double distanceToPreviousVisit; // @synthesize distanceToPreviousVisit=_distanceToPreviousVisit;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDistance:(double)arg1 residualDistance:(double)arg2 nSigma:(unsigned long long)arg3;

@end
