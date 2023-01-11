//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VCDefaults : NSObject
{
    int _forceCaptureWidth;
    int _forceCaptureHeight;
    int _forceEncodeWidth;
    int _forceEncodeHeight;
    int _forceEncodeFramerate;
    int _forceFramerate;
    int _forceBitrate;
    int _forceVideoPayload;
    int _forceRecvVideoPayload;
    int _forceKeyFrameInterval;
}

+ (_Bool)booleanValueForKey:(struct __CFString *)arg1 defaultValue:(_Bool)arg2;
+ (_Bool)booleanValueForKey:(struct __CFString *)arg1;
+ (long long)integerValueForKey:(struct __CFString *)arg1 defaultValue:(long long)arg2;
+ (long long)integerValueForKey:(struct __CFString *)arg1;
+ (double)getDoubleValueForKey:(struct __CFString *)arg1 defaultValue:(double)arg2;
+ (id)sharedInstance;
@property(readonly) unsigned int prominenceInactiveAccumulationThreshold;
@property(readonly) unsigned int prominenceInactiveProbabilityThreshold;
@property(readonly) unsigned int prominenceActiveAccumulationThreshold;
@property(readonly) unsigned int prominenceActiveProbabilityThreshold;
@property(readonly) _Bool forceDisableReporting;
@property(readonly) _Bool forceDisableMessageEncryption;
@property(readonly) _Bool forceDisableMediaEncryption;
- (_Bool)shouldOverrideEffectsFramerate:(unsigned int *)arg1;
@property(readonly) _Bool forceDisableMediaStalled;
@property(readonly) _Bool forceDisableVideoDegraded;
@property(readonly) float depthFrameRateMultiplier;
@property(readonly) _Bool forceDynamicEffectsFramerate;
@property(readonly) _Bool forceDisableFaceZoom;
@property(readonly) unsigned int multiwayVideoNetworkBitrateCapCellular;
@property(readonly) unsigned int multiwayVideoNetworkBitrateCapWifi;
@property(readonly) unsigned int multiwayAudioNetworkBitrateCapCellular;
@property(readonly) unsigned int multiwayAudioNetworkBitrateCapWifi;
@property(readonly) _Bool forceAudioPriorityEnabled;
@property(readonly) unsigned char forceAudioPriorityValue;
@property(readonly) unsigned int silenceLevelMovingAveragePeriod;
@property(readonly) float audioVoiceDetectionSensitivity;
@property(readonly) unsigned char audioPriorityRampUpSpeed;
@property(readonly) unsigned char audioPriorityDecayFast;
@property(readonly) unsigned char audioPriorityDecaySlow;
@property(readonly) _Bool forceDisableMediaPriority;
@property(readonly) _Bool forceFECRepairStream;
@property(readonly) unsigned int forceVisibilityIndex;
@property(readonly) unsigned int minParticipantCountSendVoiceActiveOnly;
@property(readonly) _Bool forceMuteAtStart;
@property(readonly) _Bool forceEVSWideBand;
@property(readonly) unsigned int maxActiveVideoDecoders;
@property(readonly) unsigned int maxActiveVideoEncoders;
@property(readonly) _Bool dumpMediaBlob;
@property(readonly) _Bool momentsUserPreferenceEnabled;
@property(readonly) _Bool shouldDisplayVideoInfoLayer;
@property(readonly) float pauseHeartbeatInterval;
@property(readonly) int localWRMLinkType;
@property(readonly) NSNumber *enableiRATSuggestion;
@property(readonly) _Bool forceIPv6;
@property(readonly) int max2GRate;
@property(readonly) int redundancyControlForceVideoRedundancyPercentage;
@property(readonly) int rateControlForceRxRate;
@property(readonly) int rateControlForceTxRate;
@property(readonly) int rateControlForceRxCap;
@property(readonly) int rateControlForceTxCap;
@property(readonly) _Bool rateControlLogEnabled;
@property(readonly) _Bool rateControlDumpEnabled;
@property(readonly) _Bool mediaQueueDumpEnabled;
@property(readonly) _Bool forceDisableMediaQueue;
@property(readonly) _Bool cannedReplayEnabled;
@property(readonly) int videoStreamRateControlAlgorithm;
@property(readonly) _Bool videoStreamRateControlDumpEnabled;
@property(readonly) int forceVideoStreamRxMinBitrate;
@property(readonly) int forceVideoStreamRxMaxBitrate;
@property(readonly) int forceVideoStreamKeyFrameInterval;
@property(readonly) int forceVideoStreamFramerate;
@property(readonly) int forceVideoStreamTxMinBitrate;
@property(readonly) int forceVideoStreamTxMaxBitrate;
@property(readonly) int forceVideoStreamResolution;
@property(readonly) unsigned int aacBlockSize;
@property(readonly) _Bool useSBR;
@property(readonly) int forceRedMaxDelay;
@property(readonly) int forceRedNumPayloads;
@property(readonly) _Bool disableRed;
@property(readonly) _Bool forceDisableAudioPowerSpectrumRegister;
@property(readonly) int forceAudioChannelCount;
@property(readonly) _Bool forceUseFloat;
@property(readonly) int forceAudioPowerTimeInterval;
@property(readonly) float forceAudioPowerThreshold;
@property(readonly) int forceAudioHardwareSampleRate;
@property(readonly) int forceAudioPacketsPerBundle;
@property(readonly) int forceAudioBitrate;
@property(readonly) int forceAudioPayload;
@property(readonly) _Bool audioRecordingEnabled;
@property(readonly) int bundleAudio;
@property(readonly) _Bool disableVAD;
@property(readonly) _Bool canDecodeHD;
@property(readonly) int encodingScore;
@property(readonly) int extraPayloads;
@property(readonly) _Bool enablePacketLogging;
@property(readonly) _Bool enableTxBitstreamDump;
@property(readonly) int enableTxSourceYuvDump;
@property(readonly) _Bool enableRecvBitstreamDump;
@property(readonly) _Bool enableVPBLogging;
@property(readonly) int enable2vuyCapture;
@property(readonly) _Bool enableBitstreamCapture;
- (unsigned int)forceThermalLevelFramerate:(unsigned int)arg1;
@property(readonly) _Bool forceEnablePearlCamera;
@property(readonly) _Bool forceMirroredCapture;
@property(readonly) _Bool forceARCapture;
@property(readonly) int forceKeyFrameInterval;
@property(readonly) int forceRecvVideoPayload;
@property(readonly) int forceVideoPayload;
@property(readonly) int forceBitrate;
@property(readonly) int forceFramerate;
@property(readonly) int forceEncodeFramerate;
@property(readonly) int forceEncodeHeight;
@property(readonly) int forceEncodeWidth;
@property(readonly) int forceCaptureHeight;
@property(readonly) int forceCaptureWidth;
- (void)seperateString:(id)arg1;
@property(readonly) _Bool forceDisableThermal;
@property(readonly) _Bool forceMultiwayHWI;
@property(readonly) _Bool forceHWI;
@property(readonly) _Bool forceScreenHWI;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allocWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

