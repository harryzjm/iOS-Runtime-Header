//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector, VCConnectionHealthMonitor;

__attribute__((visibility("hidden")))
@interface AVCRateControlFeedbackController : NSObject
{
    unsigned int _mode;
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _feedbackMessageCount;
    unsigned int _currentMediaTimestamp;
    unsigned int _outOfOrderCount;
    _Bool _isFeedbackReceived;
    _Bool _didRegisterPacketReceivedHandler;
    unsigned int _totalECT1Count;
    unsigned int _totalCECount;
    unsigned int _totalReceivedAudioPackets;
    unsigned int _totalReceivedVideoPackets;
    unsigned char _numECNBadRatio;
    _Bool _isECNEnabled;
    VCConnectionHealthMonitor *_connectionHealthMonitor;
}

@property(nonatomic) _Bool isFeedbackReceived; // @synthesize isFeedbackReceived=_isFeedbackReceived;
@property(retain, nonatomic) VCConnectionHealthMonitor *connectionHealthMonitor; // @synthesize connectionHealthMonitor=_connectionHealthMonitor;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
- (void)resetBurstyLossStatistics;
- (id)translateRateControlDataWithFeedbackMessage:(CDStruct_469ef8fa)arg1;
- (_Bool)processRateControlProbingMessage:(CDStruct_d30cff71)arg1 type:(unsigned int)arg2 error:(id *)arg3;
- (unsigned int)getConnectionStatsBlob;
- (_Bool)getVCStatisticsFeedbackMessage:(struct tagVCStatisticsMessage *)arg1 time:(double)arg2;
- (_Bool)getRateControlFeedbackMessage:(id *)arg1 type:(unsigned int)arg2 metaData:(id *)arg3 error:(id *)arg4;
- (_Bool)processFeedbackMessage:(id)arg1 type:(unsigned int)arg2 metaData:(id)arg3 error:(id *)arg4;
- (_Bool)getFeedbackMessage:(id *)arg1 type:(unsigned int)arg2 metaData:(id *)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)initWithStatisticsCollector:(id)arg1;

@end

