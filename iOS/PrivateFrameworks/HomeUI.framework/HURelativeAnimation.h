//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HUAnimationApplier;

@interface HURelativeAnimation : NSObject
{
    HUAnimationApplier *_applier;
    double _relativeStart;
    double _relativeDuration;
}

@property(readonly, nonatomic) double relativeDuration; // @synthesize relativeDuration=_relativeDuration;
@property(readonly, nonatomic) double relativeStart; // @synthesize relativeStart=_relativeStart;
@property(readonly, nonatomic) HUAnimationApplier *applier; // @synthesize applier=_applier;
- (void).cxx_destruct;
- (id)initWithAnimationApplier:(id)arg1 relativeStart:(double)arg2 relativeDuration:(double)arg3;

@end

