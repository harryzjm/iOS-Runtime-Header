//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCRateControlAlgorithmTelephony
{
    short _currentRSRP;
    unsigned char _currentUplinkBLER;
    unsigned int _nwConnectionAvgDelay;
    unsigned int _nwConnectionAvgThroughput;
    double _lastTimeBLERBelowRampDownThreshold;
    double _lastTimeBLERAboveRampUpThreshold;
}

- (_Bool)setUpVTable;
- (id)init;

@end

