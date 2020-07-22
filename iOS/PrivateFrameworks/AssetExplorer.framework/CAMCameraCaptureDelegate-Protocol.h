//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssetExplorer/NSObject-Protocol.h>

@class AVAsset, AVAudioMix, CAMCameraViewController, NSDictionary, NSError, PHLivePhoto, UIImage;

@protocol CAMCameraCaptureDelegate <NSObject>

@optional
- (void)cameraViewController:(CAMCameraViewController *)arg1 didCaptureAVAsset:(AVAsset *)arg2 andAudioMix:(AVAudioMix *)arg3 withProperties:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)cameraViewController:(CAMCameraViewController *)arg1 didCaptureLivePhoto:(PHLivePhoto *)arg2 withProperties:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)cameraViewController:(CAMCameraViewController *)arg1 didCapturePhoto:(UIImage *)arg2 withProperties:(NSDictionary *)arg3 error:(NSError *)arg4;
@end

