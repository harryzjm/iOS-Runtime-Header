//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVMomentCaptureMovieRecordingResolvedSettings, NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AVMomentCaptureMovieFileOutputDelegateWrapper
{
    NSString *_videoCodecType;
    NSURL *_spatialOverCaptureMovieFileURL;
    NSArray *_spatialOverCaptureMovieMetadata;
    AVMomentCaptureMovieRecordingResolvedSettings *_resolvedSettings;
    _Bool _didFinishWritingMovieCallbackFired;
    _Bool _didFinishWritingSpatialOverCaptureMovieCallbackFired;
}

+ (id)wrapperWithSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3;
@property(nonatomic) _Bool didFinishWritingSpatialOverCaptureMovieCallbackFired; // @synthesize didFinishWritingSpatialOverCaptureMovieCallbackFired=_didFinishWritingSpatialOverCaptureMovieCallbackFired;
@property(nonatomic) _Bool didFinishWritingMovieCallbackFired; // @synthesize didFinishWritingMovieCallbackFired=_didFinishWritingMovieCallbackFired;
@property(retain, nonatomic) AVMomentCaptureMovieRecordingResolvedSettings *resolvedSettings; // @synthesize resolvedSettings=_resolvedSettings;
@property(readonly) NSArray *spatialOverCaptureMovieMetadata; // @synthesize spatialOverCaptureMovieMetadata=_spatialOverCaptureMovieMetadata;
@property(readonly) NSURL *spatialOverCaptureMovieFileURL; // @synthesize spatialOverCaptureMovieFileURL=_spatialOverCaptureMovieFileURL;
@property(readonly) NSString *videoCodecType; // @synthesize videoCodecType=_videoCodecType;
- (void)dealloc;
- (id)initWithSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3;

@end

