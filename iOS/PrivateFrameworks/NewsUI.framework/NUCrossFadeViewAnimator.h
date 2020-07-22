//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NUCrossFadeViewAnimator : NSObject
{
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)animateView:(id)arg1 toEmptyStateWithCompletion:(CDUnknownBlockType)arg2;
- (void)animateView:(id)arg1 toValue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetView:(id)arg1;
- (void)crossFadeFromView:(id)arg1 toView:(id)arg2 value:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end

