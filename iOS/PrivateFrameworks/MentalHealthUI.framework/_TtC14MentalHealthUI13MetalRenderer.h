//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC14MentalHealthUI13MetalRenderer : NSObject
{
    MISSING_TYPE *framerateDelegate;
    MISSING_TYPE *displayLink;
    MISSING_TYPE *displayLinkTarget;
    MISSING_TYPE *displayLinkWillRenderFrame;
    MISSING_TYPE *commandQueueIsEmpty;
    MISSING_TYPE *commandQueue;
    MISSING_TYPE *defaultLibrary;
    MISSING_TYPE *device;
    MISSING_TYPE *layer;
    MISSING_TYPE *sampleCount;
    MISSING_TYPE *superSampling;
    MISSING_TYPE *currentTime;
    MISSING_TYPE *timeDelta;
    MISSING_TYPE *lastDrawableSize;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
@property(nonatomic) _Bool commandQueueIsEmpty; // @synthesize commandQueueIsEmpty;
@property(nonatomic, copy) CDUnknownBlockType displayLinkWillRenderFrame;

@end

