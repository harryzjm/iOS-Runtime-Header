//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface SCNAnimationEvent : NSObject
{
    double _eventTime;
    CDUnknownBlockType _eventBlock;
}

+ (id)animationEventWithKeyTime:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)setEventBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)eventBlock;
- (void)setTime:(double)arg1;
- (double)time;
- (void)dealloc;
- (id)init;

@end

