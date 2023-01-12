//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXGainMapAnimationDurationFilter
{
    _Bool _gainMapImageAvailable;
    _Bool _enabled;
    double _filterStartTime;
    double _activationThreshold;
}

@property(nonatomic) double activationThreshold; // @synthesize activationThreshold=_activationThreshold;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) double filterStartTime; // @synthesize filterStartTime=_filterStartTime;
@property(nonatomic) _Bool gainMapImageAvailable; // @synthesize gainMapImageAvailable=_gainMapImageAvailable;
- (double)updatedOutput;
- (id)init;

@end
