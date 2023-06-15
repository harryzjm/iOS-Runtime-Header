//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink;

__attribute__((visibility("hidden")))
@interface WKDisplayLinkHandler : NSObject
{
    void *_drawingAreaProxy;
    CADisplayLink *_displayLink;
}

- (void)pause;
- (void)schedule;
- (void)invalidate;
- (void)displayLinkFired:(id)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)dealloc;
- (id)initWithDrawingAreaProxy:(void *)arg1;

@end

