//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCondition;

@interface ARCompositeSignaler : NSObject
{
    NSCondition *_renderCondition;
    NSCondition *_compositeCondition;
    _Atomic unsigned long long _renderCount;
    _Atomic unsigned long long _lastRenderCount;
}

- (void).cxx_destruct;
- (void)signalCompositorThread;
- (void)signalRenderThreadWhenPaused;
- (void)waitRenderThreadUsingBlock:(CDUnknownBlockType)arg1;
- (void)signalRenderThread;
- (void)waitCompositorThread;
- (id)init;

@end
