//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIElasticValue : NSObject
{
    double _currentValue;
    double _targetValue;
    double _speed;
    double _friction;
    double _momentum;
}

@property(nonatomic) double momentum; // @synthesize momentum=_momentum;
@property(nonatomic) double friction; // @synthesize friction=_friction;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double targetValue; // @synthesize targetValue=_targetValue;
@property(nonatomic) double currentValue; // @synthesize currentValue=_currentValue;
- (id)description;
@property(readonly, nonatomic, getter=isSteady) _Bool steady;
- (void)updateFromDisplayLink:(id)arg1;
- (void)update:(double)arg1;
- (id)initWithValue:(double)arg1;
- (id)init;

@end

