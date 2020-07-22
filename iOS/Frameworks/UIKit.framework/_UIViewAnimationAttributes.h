//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSSecureCoding-Protocol.h>

@interface _UIViewAnimationAttributes : NSObject <NSSecureCoding>
{
    double _duration;
    double _delay;
    unsigned long long _options;
    _Bool _hasSpringAttributes;
    double _springDamping;
    double _springVelocity;
    double _springMass;
    double _springStiffness;
    long long _curve;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=_curve) long long curve; // @synthesize curve=_curve;
@property(readonly, nonatomic, getter=_springStiffness) double springStiffness; // @synthesize springStiffness=_springStiffness;
@property(readonly, nonatomic, getter=_springMass) double springMass; // @synthesize springMass=_springMass;
@property(readonly, nonatomic, getter=_springVelocity) double springVelocity; // @synthesize springVelocity=_springVelocity;
@property(readonly, nonatomic, getter=_springDamping) double springDamping; // @synthesize springDamping=_springDamping;
@property(readonly, nonatomic, getter=_hasSpringAttributes) _Bool hasSpringAttributes; // @synthesize hasSpringAttributes=_hasSpringAttributes;
@property(readonly, nonatomic, getter=_delay) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic, getter=_duration) double duration; // @synthesize duration=_duration;
- (long long)curve;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

