//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink;

@interface TSDDisplayLink : NSObject
{
    CADisplayLink *_displayLink;
    CDUnknownBlockType _tickBlock;
    CDUnknownBlockType _completionBlock;
    double _startTime;
    double _lastTime;
}

@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType tickBlock; // @synthesize tickBlock=_tickBlock;
- (void)p_handleDisplayLink:(id)arg1;
- (void)teardown;
- (void)start;
- (void)dealloc;

@end
