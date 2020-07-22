//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OpusKit/NSSecureCoding-Protocol.h>
#import <OpusKit/OKActionPinchExports-Protocol.h>

@interface OKActionPinch <OKActionPinchExports, NSSecureCoding>
{
    double _scale;
    double _angle;
    double _velocity;
    struct CGPoint _translation;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)pinchActionWithState:(unsigned long long)arg1 location:(struct CGPoint)arg2 touchCount:(unsigned long long)arg3 scale:(double)arg4 angle:(double)arg5 translation:(struct CGPoint)arg6 velocity:(double)arg7 context:(id)arg8;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) struct CGPoint translation; // @synthesize translation=_translation;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) double scale; // @synthesize scale=_scale;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

