//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NURenderPipelineVideoFrame : NSObject
{
    struct __CVBuffer *_pixelBuffer;
    CDStruct_1b6d18a9 _frameTime;
}

@property(readonly) CDStruct_1b6d18a9 frameTime; // @synthesize frameTime=_frameTime;
@property(readonly) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (void)dealloc;
- (id)initWithFrameTime:(CDStruct_1b6d18a9)arg1 pixelBuffer:(struct __CVBuffer *)arg2;

@end
