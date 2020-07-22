//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXInitialHysteresisNumberFilter
{
    _Bool _didReachThreshold;
    double _offset;
    double _hysteresis;
}

@property(nonatomic) double hysteresis; // @synthesize hysteresis=_hysteresis;
@property(readonly, nonatomic) double outputDerivative;
- (double)updatedOutput;

@end

