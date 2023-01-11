//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ASVBasicSpring : NSObject
{
    float _target;
    float _velocity;
    float _position;
    float _tension;
    float _friction;
}

@property(nonatomic) float friction; // @synthesize friction=_friction;
@property(nonatomic) float tension; // @synthesize tension=_tension;
- (void)setInput:(float)arg1 velocity:(float)arg2;
- (void)stepWithDeltaTime:(double)arg1;
- (id)initWithTension:(float)arg1 friction:(float)arg2;
@property(nonatomic) float input;
@property(readonly, nonatomic) float output;

@end

