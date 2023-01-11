//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AudioToolbox/NSSecureCoding-Protocol.h>

@interface AVHapticPlayerParameterCurveControlPoint : NSObject <NSSecureCoding>
{
    float _value;
    double _time;
}

+ (_Bool)supportsSecureCoding;
@property float value; // @synthesize value=_value;
@property double time; // @synthesize time=_time;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTime:(double)arg1 value:(float)arg2;

@end
