//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCRateControlAlgorithmLowLatencyNOWRD
{
    unsigned short _echoedTimestamp;
    unsigned short _previousTimestamp;
    unsigned short _queuingDelayTimestamp;
    unsigned int _receiveTimestamp;
    unsigned int _timestampWrapAroundCounter;
    unsigned int _newOWRDSampleCollected;
    double _previousNOWRD;
    double _sendBitrateLimitedStartTime;
    double _sendBitrateStartTime;
    double _lastSendDataTime;
    double _lastRampDownTime;
    double _lastPositiveOWRDTime;
    _Bool _isRampUpSettling;
    unsigned int _actualSendBitrate;
    unsigned int _instantBitrate;
    unsigned int _fastRampDownBitrateRange;
    unsigned int _maxBurstyLoss;
    unsigned int _nwConnectionMaxThroughput;
    unsigned int _nwConnectionAvgThroughput;
    int _nwConnectionRateTrendSuggestion;
    double _nwConnectionAvgDelay;
    _Bool _shouldBlockRampUpForNWConnection;
    unsigned int _nwConnectionOverDelayThresholdCount;
    unsigned int _nwConnectionPacketLossPerFrame;
    _Bool _isStable;
    double _rampUpSettleDuration;
    double _rateChangeSystemTime;
}

- (_Bool)setUpVTable;
- (id)init;

@end

