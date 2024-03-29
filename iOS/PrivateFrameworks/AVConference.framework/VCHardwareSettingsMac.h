//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface VCHardwareSettingsMac
{
    _Bool _hiDefEncoding;
    _Bool _isGVAEncoderAvailableInitialized;
    _Bool _isGVAEncoderAvailable;
    int _machineType;
    int _cpuFamily;
    int _numProcessors;
    int _mhrtz;
    int _isG5;
    int _hardwareScore;
    NSString *_cpuType;
    NSString *_machineName;
    unsigned int _screenWidth;
    unsigned int _screenHeight;
    unsigned long long _maxScreenEncodingSizeSupported;
    _Bool _supportsFilteredScreenCapture;
    NSString *_modelName;
    unsigned int _modelVersion;
    unsigned int _modelRevision;
    NSData *_boardId;
}

+ (long long)deviceClass;
+ (id)sharedInstance;
+ (id)virtualHardwareSettings:(id)arg1;
@property(readonly, nonatomic) _Bool isMLEnhanceOneToOneSupported;
@property(readonly, nonatomic) _Bool isExternalCameraSupported;
@property(readonly, nonatomic) _Bool isSmartBrakeSupported;
@property(readonly, nonatomic) _Bool isViewPointCorrectionSupported;
@property(readonly, nonatomic) _Bool isMediaRecordingSupported;
@property(readonly, nonatomic) _Bool isRemoteCameraSenderSupported;
@property(readonly, nonatomic) _Bool isCellularTappingSupported;
- (_Bool)preferPresentationTimestamp;
- (_Bool)supportsPortraitCameraCapture;
@property(readonly, nonatomic) long long screenShareCapabilities;
- (_Bool)disableMLScalarDuringSharing;
- (_Bool)supportsDedicatedSystemAudioStream;
- (_Bool)supportsSystemAudioTap;
- (_Bool)supportsScreenCapture;
- (_Bool)limitCameraDownlinkBitrateDuringSharing;
@property(readonly, nonatomic) NSArray *supportedVideoPayloads;
- (id)queryBoardId;
@property(readonly, nonatomic) _Bool shouldEnforceScreenFrameRateLimit;
@property(readonly, nonatomic) unsigned int maxFrameRateSupportedScreenShare;
@property(readonly, nonatomic) unsigned int maxActiveScreenEncoders;
@property(readonly, nonatomic) unsigned long long maxScreenEncodingSizeSupported;
- (_Bool)supportsFilteredScreenCapture;
- (double)previewPreferredAspectRatio;
- (unsigned int)screenHeightForDisplayID:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int screenHeight;
@property(readonly, nonatomic) _Bool shouldOverrideGPUMuxing;
- (unsigned int)screenWidthForDisplayID:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int screenWidth;
- (void)_initializeScreenDimension;
@property(readonly, nonatomic) _Bool supportsMultiway1080pStream;
@property(readonly, nonatomic) _Bool supportsAVFCapture;
- (unsigned int)maxFpsCameraCaptureDuringSharing;
- (unsigned int)maxRemoteParticipants30fps;
@property(readonly, nonatomic) _Bool isPixelFormatAvailable;
- (void)addPixelFormat;
@property(readonly, nonatomic) _Bool supportsHEIFEncoding;
@property(readonly, nonatomic) _Bool isDeviceLargeScreen;
@property(readonly, nonatomic) unsigned int maxActiveVideoDecoders;
- (unsigned int)maxMultiwayFramerateSupported;
@property(readonly, nonatomic) _Bool isCaptionsSupported;
- (unsigned int)maxOneToOneFramerateSupported;
@property(readonly, nonatomic) _Bool supportsMultiway720pStream;
@property(readonly, nonatomic) unsigned int maxActiveVideoEncoders;
@property(readonly, nonatomic) unsigned int maxDisplayRefreshRate;
@property(readonly, nonatomic) _Bool useSoftFramerateSwitching;
@property(readonly, nonatomic) int hardwareScore;
@property(readonly, nonatomic) NSString *machineName;
@property(readonly, nonatomic) unsigned int hwEncoderEnterBitrate;
@property(readonly, nonatomic) unsigned int hwEncoderExitBitrate;
- (_Bool)isAppleSiliconMac;
@property(readonly, nonatomic) _Bool isMacmini;
- (_Bool)isMacBookAir;
- (_Bool)isIMacPro;
@property(readonly, nonatomic) _Bool isIMac;
@property(readonly, nonatomic) _Bool isMacPro;
@property(readonly, nonatomic) _Bool isMacBookWVGA;
@property(readonly, nonatomic) _Bool isSpatialAudioSupported;
@property(readonly, nonatomic) _Bool supports1080pDecoding;
@property(readonly, nonatomic) _Bool supports1080pEncoding;
@property(readonly, nonatomic) _Bool canDoHiDefDecoding;
@property(readonly, nonatomic) _Bool canDoHEVC;
@property(readonly, nonatomic) _Bool canDoHiDefEncoding;
- (_Bool)isGVAEncoderAvailable;
- (_Bool)_isModel:(id)arg1;
- (_Bool)_isMachineNewerThanSandybridge:(int)arg1;
- (id)_getCPUTypeStringForMachineType:(int)arg1;
- (int)_getCPUFamilyType;
- (void)setupMachineName;
- (void)dealloc;
- (id)initForDevice:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isSiriVoicePlayoutSupported;
@property(readonly, nonatomic) _Bool isSiriVoiceTapSupported;
@property(readonly) Class superclass;

@end

