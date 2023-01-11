//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, VideoAttributes;
@protocol VCVideoCaptureServer;

__attribute__((visibility("hidden")))
@interface VCVideoCapture : NSObject
{
    id _captureServer;
    NSMutableArray *_sinkArray;
    NSString *_sourceUID;
    VideoAttributes *_localVideoAttributes;
    struct _opaque_pthread_mutex_t _sinkArrayMutex;
}

@property(readonly) NSArray *sinkArray; // @synthesize sinkArray=_sinkArray;
- (void)distributeVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 preview:(_Bool)arg3 orientation:(int)arg4 fromCamera:(_Bool)arg5 camera:(int)arg6 switching:(_Bool)arg7 videoMirrored:(_Bool)arg8;
- (void)removeSink:(id)arg1;
- (void)addSink:(id)arg1;
@property(readonly) NSObject<VCVideoCaptureServer> *captureServer;
- (void)dealloc;
- (id)initWithCaptureServer:(id)arg1;

@end
