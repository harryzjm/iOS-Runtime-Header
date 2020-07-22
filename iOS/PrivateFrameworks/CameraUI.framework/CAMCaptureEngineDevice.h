//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureDevice, AVCaptureDeviceFormat, AVCaptureDeviceInput, CAMCaptureEngine, CAMMemoizationCache, NSString;

@interface CAMCaptureEngineDevice : NSObject
{
    AVCaptureDeviceInput *_captureDeviceInput;
    AVCaptureDeviceFormat *_stillImageDeviceFormat;
    AVCaptureDevice *_captureDevice;
    CAMCaptureEngine *__captureEngine;
    CAMMemoizationCache *__videoDeviceFormatForVideoConfiguration;
    CAMMemoizationCache *__videoSessionPresetForVideoConfiguration;
    AVCaptureDeviceFormat *__panoramaDeviceFormat;
}

@property(readonly, nonatomic) AVCaptureDeviceFormat *_panoramaDeviceFormat; // @synthesize _panoramaDeviceFormat=__panoramaDeviceFormat;
@property(readonly, nonatomic) CAMMemoizationCache *_videoSessionPresetForVideoConfiguration; // @synthesize _videoSessionPresetForVideoConfiguration=__videoSessionPresetForVideoConfiguration;
@property(readonly, nonatomic) CAMMemoizationCache *_videoDeviceFormatForVideoConfiguration; // @synthesize _videoDeviceFormatForVideoConfiguration=__videoDeviceFormatForVideoConfiguration;
@property(readonly, nonatomic) __weak CAMCaptureEngine *_captureEngine; // @synthesize _captureEngine=__captureEngine;
@property(readonly, nonatomic) AVCaptureDevice *captureDevice; // @synthesize captureDevice=_captureDevice;
- (void).cxx_destruct;
- (id)videoDevicePresetForGraphConfiguration:(id)arg1;
- (id)videoDeviceFormatForGraphConfiguration:(id)arg1;
@property(readonly, nonatomic) AVCaptureDeviceFormat *portraitModeDeviceFormat;
@property(readonly, nonatomic) NSString *portraitModeSessionPreset;
@property(readonly, nonatomic) AVCaptureDeviceFormat *timelapseDeviceFormat;
@property(readonly, nonatomic) NSString *timelapseSessionPreset;
- (id)panoramaSessionPresetForConfiguration:(id)arg1;
- (id)panoramaDeviceFormatForConfiguration:(id)arg1;
- (id)highestQualitySessionPresetForVideoConfiguration:(long long)arg1;
- (id)highestQualityDeviceFormatForVideoConfiguration:(long long)arg1;
@property(readonly, nonatomic) NSString *stillImageSessionPreset;
@property(readonly, nonatomic) AVCaptureDeviceFormat *stillImageDeviceFormat; // @synthesize stillImageDeviceFormat=_stillImageDeviceFormat;
@property(readonly, nonatomic) AVCaptureDeviceInput *captureDeviceInput; // @synthesize captureDeviceInput=_captureDeviceInput;
- (id)init;
- (id)initWithEngine:(id)arg1 captureDevice:(id)arg2;

@end
