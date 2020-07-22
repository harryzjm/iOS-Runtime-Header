//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CADisplayLink, CAMediaTimingFunction;

__attribute__((visibility("hidden")))
@interface _UIPreviewPresentationAnimator : NSObject
{
    double _duration;
    CAMediaTimingFunction *_mediaTimingFunction;
    double _startMediaTime;
    CDUnknownBlockType _advanceBlock;
    CADisplayLink *_displayLink;
}

@property(nonatomic) __weak CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(copy, nonatomic) CDUnknownBlockType advanceBlock; // @synthesize advanceBlock=_advanceBlock;
@property(nonatomic) double startMediaTime; // @synthesize startMediaTime=_startMediaTime;
@property(retain, nonatomic) CAMediaTimingFunction *mediaTimingFunction; // @synthesize mediaTimingFunction=_mediaTimingFunction;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)_advanceFromDisplayLink:(id)arg1;
- (void)stopAnimation;
- (id)initWithDuration:(double)arg1 advanceBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end
