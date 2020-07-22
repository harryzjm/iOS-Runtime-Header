//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ControlCenterUI/CCUICAAnimationFactory-Protocol.h>

@class CCUICASpringAnimationParameters, NSString;

@interface CCUICASpringAnimationFactory : NSObject <CCUICAAnimationFactory>
{
    CCUICASpringAnimationParameters *_parameters;
    double _speed;
}

- (void).cxx_destruct;
- (id)_animation;
- (_Bool)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
@property(readonly, nonatomic) double animationDuration; // @dynamic animationDuration;
- (id)initWithParameters:(id)arg1 speed:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

