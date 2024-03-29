//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKBPanGestureVelocitySample : NSObject
{
    struct CGPoint start;
    struct CGPoint end;
    double dt;
    double force;
    double majorRadius;
}

@property double majorRadius; // @synthesize majorRadius;
@property double force; // @synthesize force;
@property double dt; // @synthesize dt;
@property struct CGPoint end; // @synthesize end;
@property struct CGPoint start; // @synthesize start;
- (void)resetValues;
- (void)pullValuesFrom:(id)arg1;

@end

