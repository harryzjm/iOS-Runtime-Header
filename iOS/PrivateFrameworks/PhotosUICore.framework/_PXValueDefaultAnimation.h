//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _PXValueDefaultAnimation
{
    double _initialValue;
    long long _curve;
}

- (double)currentValue;
- (id)initWithFromValue:(double)arg1 currentMediaTime:(double)arg2 spec:(struct _PXValueAnimationSpec)arg3;
- (id)initWithDuration:(double)arg1 currentMediaTime:(double)arg2 spec:(struct _PXValueAnimationSpec)arg3;

@end
