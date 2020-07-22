//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCRateControlOWRDEstimator : NSObject
{
    unsigned int _firstSendTimestamp;
    unsigned int _previousSendTimestamp;
    unsigned int _previousSendTimestampDiff;
    int _sendTimestampWrappedAround;
    double _firstSendTime;
    unsigned int _firstReceiveTimestamp;
    unsigned int _previousReceiveTimestamp;
    unsigned int _previousReceiveTimestampDiff;
    int _receiveTimestampWrappedAround;
    double _firstReceiveTime;
    double _shortAverageLag;
    double _longAverageLag;
    double _owrd;
}

@property(readonly, nonatomic) double owrd; // @synthesize owrd=_owrd;
- (void)calculateOWRDWithSendTime:(double)arg1 receiveTime:(double)arg2;
- (double)relativeReceiveTimeWithTimestamp:(unsigned short)arg1 timestampRate:(unsigned short)arg2;
- (double)relativeSendTimeWithTimestamp:(unsigned int)arg1 timestampRate:(unsigned int)arg2;

@end

