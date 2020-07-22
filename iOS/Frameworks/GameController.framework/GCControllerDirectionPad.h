//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GCControllerAxisInput, GCControllerButtonInput;

@interface GCControllerDirectionPad
{
}

@property(readonly, nonatomic) GCControllerButtonInput *right;
@property(readonly, nonatomic) GCControllerButtonInput *left;
@property(readonly, nonatomic) GCControllerButtonInput *down;
@property(readonly, nonatomic) GCControllerButtonInput *up;
@property(readonly, nonatomic) GCControllerAxisInput *yAxis;
@property(readonly, nonatomic) GCControllerAxisInput *xAxis;
- (id)description;
- (_Bool)setHIDValue:(struct __IOHIDValue *)arg1 queue:(id)arg2;
- (_Bool)setHIDValue:(struct __IOHIDValue *)arg1;
@property(copy, nonatomic) CDUnknownBlockType valueChangedHandler;
- (id)initWithFlippedY:(_Bool)arg1 digital:(_Bool)arg2;

@end
