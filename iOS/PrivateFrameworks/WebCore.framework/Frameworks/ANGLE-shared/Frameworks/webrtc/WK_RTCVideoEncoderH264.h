//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WK_RTCVideoCodecInfo;

__attribute__((visibility("hidden")))
@interface WK_RTCVideoEncoderH264 : NSObject
{
    WK_RTCVideoCodecInfo *_codecInfo;
    struct unique_ptr<webrtc::BitrateAdjuster, std::default_delete<webrtc::BitrateAdjuster>> _bitrateAdjuster;
    unsigned int _targetBitrateBps;
    unsigned int _encoderBitrateBps;
    unsigned int _encoderFrameRate;
    unsigned int _maxAllowedFrameRate;
    unsigned long long _packetizationMode;
    struct optional<webrtc::H264ProfileLevelId> _profile_level_id;
    CDUnknownBlockType _callback;
    int _width;
    int _height;
    _Bool _useVCP;
    _Bool _useBaseline;
    struct OpaqueVTCompressionSession *_vtCompressionSession;
    void *_vcpCompressionSession;
    unsigned long long _mode;
    struct H264BitstreamParser _h264BitstreamParser;
    struct vector<unsigned char, std::allocator<unsigned char>> _frameScaleBuffer;
    _Bool _disableEncoding;
    _Bool _isKeyFrameRequired;
    _Bool _isH264LowLatencyEncoderEnabled;
    _Bool _isUsingSoftwareEncoder;
    _Bool _isBelowExpectedFrameRate;
    unsigned int _frameCount;
    long long _lastFrameRateEstimationTime;
    _Bool _useAnnexB;
    _Bool _needsToSendDescription;
    CDUnknownBlockType _descriptionCallback;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)flush;
- (id)scalingSettings;
- (void)frameWasEncoded:(int)arg1 flags:(unsigned int)arg2 sampleBuffer:(struct opaqueCMSampleBuffer *)arg3 codecSpecificInfo:(id)arg4 width:(int)arg5 height:(int)arg6 renderTimeMs:(long long)arg7 timestamp:(unsigned int)arg8 rotation:(long long)arg9 isKeyFrameRequired:(_Bool)arg10;
- (void)updateBitRateAccordingActualFrameRate;
- (void)setEncoderBitrateBps:(unsigned int)arg1 frameRate:(unsigned int)arg2;
- (void)setBitrateBps:(unsigned int)arg1 frameRate:(unsigned int)arg2;
- (id)implementationName;
- (void)destroyCompressionSession;
- (void)configureCompressionSession;
- (int)resetCompressionSessionWithPixelFormat:(unsigned int)arg1;
- (_Bool)resetCompressionSessionIfNeededWithFrame:(id)arg1;
- (unsigned int)pixelFormatOfFrame:(id)arg1;
- (long long)releaseEncoder;
- (int)setBitrate:(unsigned int)arg1 framerate:(unsigned int)arg2;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3;
- (_Bool)hasCompressionSession;
- (void)setDescriptionCallback:(CDUnknownBlockType)arg1;
- (void)setUseAnnexB:(_Bool)arg1;
- (long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2;
- (void)dealloc;
- (void)setH264LowLatencyEncoderEnabled:(_Bool)arg1;
- (id)initWithCodecInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

