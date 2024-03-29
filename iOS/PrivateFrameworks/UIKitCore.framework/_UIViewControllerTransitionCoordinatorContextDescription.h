//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIViewControllerTransitionCoordinatorContextDescription : NSObject
{
    _Bool _animated;
    _Bool _interactive;
    _Bool _cancelled;
    double _transitionDuration;
    double _percentComplete;
    double _completionVelocity;
    long long _completionCurve;
    long long _toOrientation;
    long long _fromOrientation;
    struct CGAffineTransform _targetTransform;
}

+ (_Bool)supportsSecureCoding;
+ (id)descriptionForTransitionCoordinatorContext:(id)arg1;
@property(nonatomic) long long fromOrientation; // @synthesize fromOrientation=_fromOrientation;
@property(nonatomic) long long toOrientation; // @synthesize toOrientation=_toOrientation;
@property(nonatomic) struct CGAffineTransform targetTransform; // @synthesize targetTransform=_targetTransform;
@property(nonatomic) long long completionCurve; // @synthesize completionCurve=_completionCurve;
@property(nonatomic) double completionVelocity; // @synthesize completionVelocity=_completionVelocity;
@property(nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isInteractive) _Bool interactive; // @synthesize interactive=_interactive;
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

