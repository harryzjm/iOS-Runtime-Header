//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CameraUI/NSCoding-Protocol.h>

@class CAMVideoThumbnailOutputConfiguration, NSArray;

@interface CAMCaptureGraphConfiguration : NSObject <NSCoding>
{
    long long _mode;
    long long _device;
    long long _videoConfiguration;
    long long _audioConfiguration;
    unsigned long long _previewConfiguration;
    long long _previewSampleBufferVideoFormat;
    NSArray *_previewFilters;
    CAMVideoThumbnailOutputConfiguration *_videoThumbnailOutputConfiguration;
    long long _photoEncodingBehavior;
    long long _videoEncodingBehavior;
}

@property(readonly, nonatomic) long long videoEncodingBehavior; // @synthesize videoEncodingBehavior=_videoEncodingBehavior;
@property(readonly, nonatomic) long long photoEncodingBehavior; // @synthesize photoEncodingBehavior=_photoEncodingBehavior;
@property(readonly, nonatomic) CAMVideoThumbnailOutputConfiguration *videoThumbnailOutputConfiguration; // @synthesize videoThumbnailOutputConfiguration=_videoThumbnailOutputConfiguration;
@property(readonly, nonatomic) NSArray *previewFilters; // @synthesize previewFilters=_previewFilters;
@property(readonly, nonatomic) long long previewSampleBufferVideoFormat; // @synthesize previewSampleBufferVideoFormat=_previewSampleBufferVideoFormat;
@property(readonly, nonatomic) unsigned long long previewConfiguration; // @synthesize previewConfiguration=_previewConfiguration;
@property(readonly, nonatomic) long long audioConfiguration; // @synthesize audioConfiguration=_audioConfiguration;
@property(readonly, nonatomic) long long videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;
@property(readonly, nonatomic) long long device; // @synthesize device=_device;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (id)description;
- (id)completeDescription;
- (id)shortDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCaptureMode:(long long)arg1 captureDevice:(long long)arg2 videoConfiguration:(long long)arg3 audioConfiguration:(long long)arg4 previewConfiguration:(unsigned long long)arg5 previewSampleBufferVideoFormat:(long long)arg6 previewFilters:(id)arg7 videoThumbnailOutputConfiguration:(id)arg8 photoEncodingBehavior:(long long)arg9 videoEncodingBehavior:(long long)arg10;

@end
