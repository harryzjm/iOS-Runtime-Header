//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetTrack;

__attribute__((visibility("hidden")))
@interface VCPVideoTrackDecoder : NSObject
{
    AVAssetTrack *_track;
}

+ (CDStruct_1ef3fb1f)decodeDimensionsForTrack:(id)arg1;
- (void).cxx_destruct;
- (struct opaqueCMSampleBuffer *)getNextCaptureSampleBuffer;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (long long)status;
- (id)settings;
- (id)initWithTrack:(id)arg1;
- (id)init;

@end
