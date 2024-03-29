//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VCHardwareSettingsEmbedded
{
    NSString *_deviceName;
    long long _chipId;
    int _deviceClass;
    int _screenWidth;
    int _screenHeight;
    unsigned long long _maxScreenEncodingSizeSupported;
    long long _videoEncoderType;
    _Bool _hasAppleNeuralEngine;
    _Bool _isInitialized;
    _Bool _hasBasebandInitialized;
    _Bool _hasBaseband;
    NSString *_marketingName;
    int _productType;
}

+ (long long)deviceClass;
+ (id)sharedInstance;
+ (id)virtualHardwareSettings:(id)arg1;
@property(readonly, nonatomic) _Bool isMLEnhanceOneToOneSupported;
@property(readonly, nonatomic) _Bool isExternalCameraSupported;
@property(readonly, nonatomic) _Bool isSmartBrakeSupported;
- (_Bool)isSmartBrakeSupportedATV;
- (_Bool)isSmartBrakeSupportedIPad;
- (_Bool)isSmartBrakeSupportedIPhone;
@property(readonly, nonatomic) _Bool isViewPointCorrectionSupported;
@property(readonly, nonatomic) _Bool isMediaRecordingSupported;
@property(readonly, nonatomic) _Bool isCellularTappingSupported;
- (long long)screenShareCapabilitiesIPod;
- (long long)screenShareCapabilitiesIPad;
- (long long)screenShareCapabilitiesIPhone;
@property(readonly, nonatomic) long long screenShareCapabilities;
- (_Bool)disableMLScalarDuringSharing;
- (_Bool)supportsDedicatedSystemAudioStream;
- (_Bool)supportsSystemAudioTap;
- (_Bool)supportsScreenCapture;
- (_Bool)limitCameraDownlinkBitrateDuringSharing;
@property(readonly, nonatomic) NSArray *supportedVideoPayloads;
@property(readonly, nonatomic) _Bool isPixelFormatAvailable;
- (void)addPixelFormat;
- (unsigned int)maxFpsCameraCaptureDuringSharing;
- (unsigned int)maxRemoteParticipants30fps;
@property(readonly, nonatomic) _Bool canDo1080p;
@property(readonly, nonatomic) _Bool isHEVC444DecodeSupported;
@property(readonly, nonatomic) _Bool isSecondDisplaySupportEnabled;
@property(readonly, nonatomic) _Bool isRemoteCameraSenderSupported;
- (_Bool)isRemoteCameraSenderSupportediPhone;
- (_Bool)isRemoteCameraSenderSupportediPad;
@property(readonly, nonatomic) unsigned int audioPacketLossConcealmentAlgorithmAACELD;
@property(readonly, nonatomic) _Bool supportsHEIFEncoding;
@property(readonly, nonatomic) _Bool isVoiceProcessingAt24KSupported;
@property(readonly, nonatomic) _Bool isCaptionsSupported;
@property(readonly, nonatomic) _Bool hasAppleNeuralEngine;
@property(readonly, nonatomic) _Bool isDeviceLargeScreen;
@property(readonly, nonatomic) unsigned int maxActiveScreenEncoders;
@property(readonly, nonatomic) unsigned int maxActiveVideoDecoders;
@property(readonly, nonatomic) unsigned int maxActiveVideoEncoders;
@property(readonly, nonatomic) unsigned int maxDisplayRefreshRate;
- (unsigned int)maxMultiwayFramerateSupported;
- (unsigned int)maxOneToOneFramerateSupported;
@property(readonly, nonatomic) _Bool supportsMultiway1080pStream;
- (_Bool)deviceSupportsMultiway1080p;
- (_Bool)supportsMultiway1080pStreamEmbeddedOS;
- (_Bool)supportsMultiway1080pStreamATV;
@property(readonly, nonatomic) _Bool supportsMultiway720pStream;
@property(readonly, nonatomic) _Bool useSoftFramerateSwitching;
@property(readonly, nonatomic) long long videoEncoderType;
@property(readonly, nonatomic) long long chipId;
@property(readonly, nonatomic) long long deviceClass;
- (unsigned int)maxFrameRateSupportedBackgroundBlur;
@property(readonly, nonatomic) _Bool shouldEnforceScreenFrameRateLimit;
@property(readonly, nonatomic) unsigned int maxFrameRateSupportedScreenShare;
@property(readonly, nonatomic) unsigned long long maxScreenEncodingSizeSupported;
@property(readonly, nonatomic) _Bool isDisplayPortrait;
- (double)previewPreferredAspectRatio;
- (unsigned int)screenHeightForDisplayID:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int screenHeight;
- (unsigned int)screenWidthForDisplayID:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int screenWidth;
@property(readonly, nonatomic) _Bool isCaptureSIFRPreferred;
@property(readonly, nonatomic) _Bool isSpatialAudioSupported;
- (_Bool)isSpatialAudioSupportedIPod;
- (_Bool)isSpatialAudioSupportedIPad;
- (_Bool)isSpatialAudioSupportedAppleTV;
- (_Bool)isSpatialAudioSupportedIPhone;
@property(readonly, nonatomic) _Bool hasBaseband;
- (id)marketingName;
@property(readonly, nonatomic) NSString *deviceName;
- (void)_initializeScreenDimension;
- (void)setupSiriSupport;
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

