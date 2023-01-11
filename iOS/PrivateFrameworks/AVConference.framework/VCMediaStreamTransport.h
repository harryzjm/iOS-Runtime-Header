//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCBasebandCongestionDetector, VCMediaStreamConfig;
@protocol VCMediaStreamTransportDelegate;

__attribute__((visibility("hidden")))
@interface VCMediaStreamTransport : NSObject
{
    VCMediaStreamConfig *_streamConfig;
    unsigned int _localSSRC;
    struct tagHANDLE *_rtpHandle;
    _Bool _isSRTPInitialized;
    AVCBasebandCongestionDetector *_basebandCongestionDetector;
    id _delegate;
}

+ (_Bool)isSameSRTPKey:(id)arg1 newKey:(id)arg2;
+ (int)SRTPCipherSuiteForVCMediaStreamCipherSuite:(long long)arg1;
+ (int)getSRTPMasterKeyLength:(long long)arg1;
@property(retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // @synthesize basebandCongestionDetector=_basebandCongestionDetector;
@property(readonly, nonatomic) struct tagHANDLE *rtpHandle; // @synthesize rtpHandle=_rtpHandle;
@property(readonly, nonatomic) VCMediaStreamConfig *streamConfig; // @synthesize streamConfig=_streamConfig;
- (unsigned int)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg1;
- (unsigned int)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg1;
- (_Bool)generateReceptionReport:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;
@property(readonly, nonatomic) unsigned short idsStreamId;
@property(nonatomic) long long streamDirection;
- (_Bool)setThrottlingInterval:(double)arg1;
- (_Bool)sendIntervalDidElapse:(int *)arg1 remainingTime:(double *)arg2;
@property(nonatomic) double decryptionTimeoutInterval;
@property(nonatomic, getter=isDecryptionTimeoutEnabled) _Bool decryptionTimeoutEnabled;
@property(nonatomic) double rtcpTimeoutInterval;
@property(nonatomic, getter=isRTCPTimeoutEnabled) _Bool rtcpTimeoutEnabled;
@property(nonatomic) double rtpTimeoutInterval;
@property(nonatomic, getter=isRTPTimeoutEnabled) _Bool rtpTimeoutEnabled;
@property(readonly, nonatomic, getter=isRTCPSendEnabled) _Bool rtcpSendEnabled;
@property(nonatomic) double rtcpSendInterval;
@property(nonatomic, getter=isRTCPEnabled) _Bool rtcpEnabled;
- (void)handleEncryptionInfoChange:(id)arg1;
- (int)getKeyDerivationCryptoSet:(CDStruct_5b6da142 *)arg1 withKeyMaterial:(id)arg2;
@property(readonly, nonatomic) double lastReceivedRTCPPacketTime;
- (id)rxNetworkPayloads;
- (void)registerRTPPayloadMappings;
- (_Bool)setupRTPWithTransportSetupInfo:(struct _VCMediaStreamTransportSetupInfo *)arg1 error:(id *)arg2;
- (_Bool)setupRTPWithIPInfo:(struct _VCMediaStreamTransportSetupInfo *)arg1 error:(id *)arg2;
- (_Bool)setupRTPForIDS:(id *)arg1;
- (_Bool)setupRTPWithSockets:(struct _VCMediaStreamTransportSetupInfo *)arg1 error:(id *)arg2;
- (int)setupSRTP;
- (int)getCryptoSet:(struct tagSRTPExchangeInfo *)arg1 withMasterKey:(id)arg2;
- (void)sendControlPacket:(struct _RTCP_SEND_CONTROL_PARAMETERS *)arg1;
- (void)resetPayloadMapping;
- (void)reset;
- (void)configureForMultiway;
- (_Bool)configureWithStreamConfig:(id)arg1 setupInfo:(struct _VCMediaStreamTransportSetupInfo *)arg2 customRTCPPackets:(_Bool)arg3 error:(id *)arg4;
- (void)onStop;
- (void)onStart;
- (void)onRTCPPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;
- (void)reportRTCPPackets:(struct _RTCPPacketList *)arg1;
- (void)unregisterRTCPCallback;
- (void)registerRTCPCallback;
- (_Bool)isSameSRTPConfig:(id)arg1;
- (void)setDelegate:(id)arg1;
@property(readonly, nonatomic) id <VCMediaStreamTransportDelegate> delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 handle:(struct tagHANDLE *)arg2 localSSRC:(unsigned int)arg3;

@end

