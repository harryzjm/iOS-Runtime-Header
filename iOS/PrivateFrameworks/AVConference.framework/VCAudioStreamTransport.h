//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/WRMClientDelegate-Protocol.h>

@class WRMClient;

__attribute__((visibility("hidden")))
@interface VCAudioStreamTransport <WRMClientDelegate>
{
    WRMClient *_wrmClient;
    struct tagWRMMetricsInfo _wrmInfo;
}

- (void)setWRMNotification:(CDStruct_d2860d30 *)arg1;
- (void)setWRMMetricConfig:(CDStruct_69d7cc99 *)arg1;
- (void)stopWRM;
- (void)startWRM;
- (void)setWRMCallId:(unsigned int)arg1;
- (void)submitWRMReportWithJitterBufferMetrics:(struct tagVCJitterBufferWRMReportingMetrics *)arg1;
- (void)onStop;
- (void)onStart;
- (void)onRTCPPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 handle:(struct tagHANDLE *)arg2 callId:(unsigned int)arg3 localSSRC:(unsigned int)arg4 enableNetworkMonitor:(_Bool)arg5;
- (id)initWithDelegate:(id)arg1 handle:(struct tagHANDLE *)arg2 callId:(unsigned int)arg3 localSSRC:(unsigned int)arg4;
- (void)reportWRMMetrics:(const CDStruct_0db8e210 *)arg1;

@end

