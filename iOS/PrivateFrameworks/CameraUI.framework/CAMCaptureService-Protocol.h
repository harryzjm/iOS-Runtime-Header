//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/CAMMetadataDelegate-Protocol.h>
#import <CameraUI/CAMPanoramaCaptureDelegate-Protocol.h>
#import <CameraUI/CAMPanoramaConfigurationDelegate-Protocol.h>
#import <CameraUI/CAMRecoveryDelegate-Protocol.h>
#import <CameraUI/CAMSessionDelegate-Protocol.h>
#import <CameraUI/CAMStillImageCaptureDelegate-Protocol.h>
#import <CameraUI/CAMVideoCaptureDelegate-Protocol.h>
#import <CameraUI/NSObject-Protocol.h>

@protocol CAMCaptureService <NSObject, CAMStillImageCaptureDelegate, CAMVideoCaptureDelegate, CAMPanoramaCaptureDelegate, CAMPanoramaConfigurationDelegate, CAMMetadataDelegate, CAMRecoveryDelegate, CAMSessionDelegate>
@end

