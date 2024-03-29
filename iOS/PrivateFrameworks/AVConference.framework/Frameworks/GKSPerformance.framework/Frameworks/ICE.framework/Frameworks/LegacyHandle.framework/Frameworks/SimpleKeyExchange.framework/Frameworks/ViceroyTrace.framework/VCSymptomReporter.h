//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface VCSymptomReporter : NSObject
{
    unsigned int _callID;
    NSString *_loggingDirectory;
    NSObject<OS_os_log> *_osLogNetworkingHandle;
    NSObject<OS_dispatch_queue> *_reportingQueue;
    CDUnknownFunctionPointerType _symptomReporterCallback;
    id _symptomReporterContext;
    _Bool _didSubmitABCSymptom[48];
    _Bool _didShowAlreadyExistFailure[48];
    _Bool _isSymptomReportingEnabled;
    NSString *_procName;
}

@property(copy, nonatomic) NSString *loggingDirectory; // @synthesize loggingDirectory=_loggingDirectory;
- (id)symptomNameWithDomain:(id)arg1 subtypeContext:(id)arg2;
- (int)reportSymptomWithOptions:(id)arg1 type:(id)arg2 subType:(id)arg3 context:(id)arg4;
- (int)requestRemoteSideWithOptions:(id)arg1 context:(id)arg2 signature:(id)arg3;
- (int)reportSymptomWithGroupID:(id)arg1 signature:(id)arg2 actions:(id)arg3;
- (int)reportOSLogSymptomWithDictionary:(id)arg1;
- (int)reportSymptomWithIDSDestination:(id)arg1 sessionID:(id)arg2 type:(id)arg3 subType:(id)arg4 context:(id)arg5;
- (int)reportSymptomWithType:(id)arg1 subType:(id)arg2 context:(id)arg3 actions:(id)arg4;
- (int)reportMediaSymptomSubtypeConnectionWithContext:(id)arg1;
- (int)reportVideoSymptom:(id)arg1 options:(id)arg2;
- (int)reportVideoSymptom:(id)arg1;
- (int)reportKeyFrameGenerationFailure;
- (int)reportTerminateProcessWithOptionalDictionary:(id)arg1;
- (int)reportFrameQueueForDecodeHighWaterMarkExceeded;
- (int)reportInvalidVideoStallTime;
- (int)reportInactiveSlotsInChannelSequence;
- (int)reportInvalidTransportType;
- (int)reportSustainedHighDownlinkPacketLoss;
- (int)reportSustainedHighUplinkPacketLoss;
- (int)reportNoServerStatsActivity;
- (int)reportUnexpectedRampUpFrozen;
- (int)reportUnexpectedHighRTT;
- (int)reportHighConsecutiveAudioErasuresWithOptionalDictionary:(id)arg1;
- (int)reportMediaQueueFlushingTooFrequent;
- (int)reportMediaQueueOvershoot;
- (int)reportUnexpectedLowTargetBitrate;
- (int)reportTargetBitrateOvershoot;
- (int)reportMediaQueuePoolEmpty;
- (int)reportKeyIndexNotReceived;
- (int)reportSessionInfoErrorResponse;
- (int)reportReceiveSessionStatsFailed;
- (int)reportQRATKNTokenError;
- (int)reportIDSDataChannelEventUsageError;
- (int)reportNegativeJitterBufferSize;
- (int)reportAlgosScoreWithOptionalDictionary:(id)arg1;
- (int)reportVideoStall:(id)arg1;
- (int)reportAudioStall:(id)arg1;
- (int)reportSignificantHandshakeDelayWithOptionalDictionary:(id)arg1;
- (int)reportExtendedPoorConnectionWithOptionalDictionary:(id)arg1;
- (int)reportMKMDecryptionWithOptionalDictionary:(id)arg1;
- (int)reportCCReliableDataNotReceived:(id)arg1;
- (int)reportNoPacketsWithOptionalDictionary:(id)arg1;
- (int)reportNoFirstFrameWithOptionalDictionary:(id)arg1;
- (int)reportFailedToStartVideo;
- (int)reportFailedToSetupAudioCodec;
- (int)reportFailedToStartAudio;
- (int)reportNoSNATMAPResponseWithOptionalDictionary:(id)arg1;
- (int)reportNoRelayResponseWithOptionalDictionary:(id)arg1;
- (int)reportConnectionTimeout:(id)arg1;
- (int)reportSignalingFailed:(id)arg1;
- (int)reportNoMediaBlob;
- (int)reportBandwidthEstimationMismatch;
- (int)reportRateTargetMismatch;
- (int)reportSymptomInternal:(unsigned int)arg1 optionalDictionary:(id)arg2;
- (void)dealloc;
- (void)VCSymptomReporterSetCallback:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)reportSymptom:(unsigned int)arg1 optionalDictionary:(id)arg2;
- (id)initWithCallID:(unsigned int)arg1;

@end

