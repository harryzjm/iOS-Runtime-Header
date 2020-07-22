//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PKSpringAnimationFactory.h>

#import <PassKitUIFoundation/_UIBasicAnimationFactory-Protocol.h>

@class NSString;

@interface PKUISpringAnimationFactory : PKSpringAnimationFactory <_UIBasicAnimationFactory>
{
    CDUnknownBlockType _animationDelayHandler;
    double _maximumVendedDelay;
}

@property(readonly, nonatomic) double maximumVendedDelay; // @synthesize maximumVendedDelay=_maximumVendedDelay;
@property(copy, nonatomic) CDUnknownBlockType animationDelayHandler; // @synthesize animationDelayHandler=_animationDelayHandler;
- (void).cxx_destruct;
- (id)_basicAnimationForView:(struct UIView *)arg1 withKeyPath:(id)arg2;
- (id)_springAnimationForView:(struct UIView *)arg1 withKeyPath:(id)arg2;
- (id)springAnimationForView:(struct UIView *)arg1 withKeyPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
