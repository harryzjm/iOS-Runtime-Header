//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class HMCameraClip, NSURL;

@protocol HFCameraVideoDownloaderDelegate <NSObject>

@optional
- (void)downloadProgress:(unsigned long long)arg1 forClip:(HMCameraClip *)arg2;
- (void)failedToDownloadVideoFileForClip:(HMCameraClip *)arg1;
- (void)foundVideoFileForClip:(HMCameraClip *)arg1 atURL:(NSURL *)arg2;
- (void)didDownloadVideoFileForClip:(HMCameraClip *)arg1 toURL:(NSURL *)arg2;
@end

