//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HMCameraSnapshotControlDelegate-Protocol.h>
#import <Home/HMCameraStreamControlDelegate-Protocol.h>

@class HMCameraStream, HMCameraStreamControl, NSError;

@protocol HFCameraObserver <HMCameraSnapshotControlDelegate, HMCameraStreamControlDelegate>

@optional
- (void)cameraStream:(HMCameraStream *)arg1 didUpdateAudioStreamSettingWithError:(NSError *)arg2;
- (void)cameraStreamControlDidUpdateManagerState:(HMCameraStreamControl *)arg1;
- (void)cameraStreamControlDidUpdateStreamState:(HMCameraStreamControl *)arg1;
@end

