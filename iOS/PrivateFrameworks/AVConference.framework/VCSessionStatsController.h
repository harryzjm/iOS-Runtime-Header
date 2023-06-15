//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector, VCConnectionManager, VCTransportStreamGFT;
@protocol OS_dispatch_source, VCSessionStatsControllerDelegate;

__attribute__((visibility("hidden")))
@interface VCSessionStatsController : NSObject
{
    id <VCSessionStatsControllerDelegate> _weakDelegate;
    AVCStatisticsCollector *_uplinkStatisticsCollector;
    AVCStatisticsCollector *_downlinkStatisticsCollector;
    struct {
        double responseTime;
        unsigned char linkID;
        unsigned short statsIdentifier;
        unsigned short remoteTimestamp;
        unsigned short serverPacketInterval;
        unsigned short uplinkBandwidthSample;
        unsigned short totalRemoteMediaPacketSent;
        unsigned short totalRemoteMediaPacketReceived;
    } _remoteStats;
    NSObject<OS_dispatch_source> *_localSessionStatsTimemoutSource;
    unsigned int _statsRequestCounter;
    VCConnectionManager *_connectionManager;
    VCTransportStreamGFT *_transportStream;
    double _lastTriggerRateControlTime;
    id _reportingAgentWeak;
    unsigned int _uplinkServerStatsByteUsed;
    unsigned int _downlinkServerStatsByteUsed;
    struct tagVCRealTimeThread *_statsReceiveThread;
    unsigned short _streamID;
    unsigned short _statsArrayIndex;
    _Bool _enableStatsReceiveThread;
    unsigned int _previousTotalPacketSent;
    unsigned int _previousTotalPacketReceived;
    unsigned int _uplinkMostRecentSendTimestamp;
    unsigned int _downlinkMostRecentSendTimestamp;
    _Bool _didReceiveServerStatsResponse;
    _Bool _enableStatsReporting;
    double _statsReportingInterval;
    double _lastStatsReportTime;
    int _lastProcessedBytesSent;
    int _bytesSentToReport;
    int _maxSentRate;
    int _minSentRate;
    int _lastProcessedBytesReceived;
    int _bytesReceivedToReport;
    int _maxReceivedRate;
    int _minReceivedRate;
    double _lastUpdateTime;
    double _lastTimeReceiveStatsFailed;
    unsigned int _statsNoResponseCounter;
    unsigned int _statsResponseCounter;
    unsigned int _numStatsDroppedDueToStatsID;
    unsigned int _numStatsDroppedDueToLinkID;
    unsigned int _numStatsDroppedDueToTooLate;
    unsigned int _numStatsProcessed;
    unsigned int _numStatsTriggeredForUplink;
    unsigned int _numStatsTriggeredForDownlink;
    double _averageInterCallbackDuration;
    double _lastPacketReceiveCallbackTime;
    double _totalStatsTransportStreamQueueTime;
    double _maxStatsTransportStreamQueueTime;
    double _lastHealthPrintTime;
}

@property(readonly, nonatomic) _Bool didReceiveServerStatsResponse; // @synthesize didReceiveServerStatsResponse=_didReceiveServerStatsResponse;
@property(nonatomic) double statsReportingInterval; // @synthesize statsReportingInterval=_statsReportingInterval;
- (void)flushRealTimeReportingStats;
- (void)deregisterPeriodicTask;
- (void)periodicTask:(void *)arg1;
- (void)registerPeriodicTask;
@property(readonly) id reportingAgent;
- (unsigned short)translateTimestampFromMicro:(double)arg1;
- (void)stopLocalSessionStatsUpdate;
- (void)startLocalSessionStatsSend;
- (void)startLocalSessionStatsReceive;
- (void)startLocalSessionStatsUpdate;
- (void)sendLocalStats;
- (void)reset;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 connectionManager:(id)arg2 uplinkStatsCollector:(id)arg3 downlinkStatsCollector:(id)arg4 reportingAgent:(struct opaqueRTCReporting *)arg5 transportSessionID:(unsigned int)arg6 streamID:(unsigned short)arg7 mediaQueue:(struct tagVCMediaQueue *)arg8;

@end

