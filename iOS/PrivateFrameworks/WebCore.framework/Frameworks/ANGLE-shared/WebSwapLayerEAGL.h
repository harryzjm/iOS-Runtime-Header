//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAEAGLLayer.h>

@class EAGLContext;

__attribute__((visibility("hidden")))
@interface WebSwapLayerEAGL : CAEAGLLayer
{
    EAGLContext *mDisplayContext;
    _Bool initialized;
    struct SharedSwapState *mSwapState;
    const void *mFunctions;
    unsigned int mReadFramebuffer;
}

- (void)display;
- (id)initWithSharedState:(struct SharedSwapState *)arg1 withContext:(id)arg2 withFunctions:(const void *)arg3;

@end
