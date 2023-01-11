//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/AVCaptureDevice.h>

@class AVCaptureDeviceFormat;

@interface AVCaptureDevice (CAMDebugging)
- (void)cam_debugFocusAndExposureState;
- (void)cam_debugExposureState;
- (void)cam_debugFocusState;
@property(readonly, nonatomic) AVCaptureDeviceFormat *cam_formatForPortraitFrontFacingZoomed;
- (id)cameraPanoramaFormatForConfiguration:(id)arg1;
- (id)cam_highestQualityFormatForConfiguration:(long long)arg1 colorSpace:(long long)arg2;
- (void)cameraVideoFormat:(id *)arg1 orPreset:(id *)arg2 forVideoConfiguration:(long long)arg3 videoEncodingBehavior:(long long)arg4;
@end
