//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureDevice, AVCaptureDeviceFormat, AVCaptureDeviceInput, CAMCaptureEngine, CAMMemoizationCache;

@interface CAMCaptureEngineDevice : NSObject
{
    AVCaptureDeviceInput *_captureDeviceInput;
    AVCaptureDevice *_captureDevice;
    CAMCaptureEngine *__captureEngine;
    CAMMemoizationCache *__videoDeviceFormatForVideoConfiguration;
    CAMMemoizationCache *__videoSessionPresetForVideoConfiguration;
    AVCaptureDeviceFormat *__cachedPanoramaDeviceFormat;
    AVCaptureDeviceFormat *__cachedPortraitDeviceFormat;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) AVCaptureDeviceFormat *_cachedPortraitDeviceFormat; // @synthesize _cachedPortraitDeviceFormat=__cachedPortraitDeviceFormat;
@property(readonly, nonatomic) AVCaptureDeviceFormat *_cachedPanoramaDeviceFormat; // @synthesize _cachedPanoramaDeviceFormat=__cachedPanoramaDeviceFormat;
@property(readonly, nonatomic) CAMMemoizationCache *_videoSessionPresetForVideoConfiguration; // @synthesize _videoSessionPresetForVideoConfiguration=__videoSessionPresetForVideoConfiguration;
@property(readonly, nonatomic) CAMMemoizationCache *_videoDeviceFormatForVideoConfiguration; // @synthesize _videoDeviceFormatForVideoConfiguration=__videoDeviceFormatForVideoConfiguration;
@property(readonly, nonatomic) __weak CAMCaptureEngine *_captureEngine; // @synthesize _captureEngine=__captureEngine;
@property(readonly, nonatomic) AVCaptureDevice *captureDevice; // @synthesize captureDevice=_captureDevice;
- (id)videoDevicePresetForGraphConfiguration:(id)arg1;
- (id)videoDeviceFormatForGraphConfiguration:(id)arg1;
- (id)_portraitModeDeviceFormat;
- (id)_portraitModeSessionPreset;
- (id)_timelapseSessionPreset;
- (id)_panoramaDeviceFormatForConfiguration:(id)arg1;
- (id)_keyForVideoConfiguration:(long long)arg1 videoEncodingBehavior:(long long)arg2;
- (id)_highestQualitySessionPresetForVideoConfiguration:(long long)arg1 videoEncodingBehavior:(long long)arg2;
- (id)_highestQualityDeviceFormatForVideoConfiguration:(long long)arg1 videoEncodingBehavior:(long long)arg2;
@property(readonly, nonatomic) AVCaptureDeviceInput *captureDeviceInput; // @synthesize captureDeviceInput=_captureDeviceInput;
- (id)initWithEngine:(id)arg1 captureDevice:(id)arg2;

@end
