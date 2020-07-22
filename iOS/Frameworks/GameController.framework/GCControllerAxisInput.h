//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GCControllerButtonInput;

@interface GCControllerAxisInput
{
}

- (_Bool)setHIDValue:(struct __IOHIDValue *)arg1 queue:(id)arg2;
- (_Bool)setHIDValue:(struct __IOHIDValue *)arg1;
- (_Bool)_setValue:(float)arg1 queue:(id)arg2;
- (_Bool)_setValue:(float)arg1;
@property(readonly, nonatomic) GCControllerButtonInput *negative;
@property(readonly, nonatomic) GCControllerButtonInput *positive;
@property(copy, nonatomic) CDUnknownBlockType valueChangedHandler;
@property(readonly, nonatomic, getter=isFlipped) _Bool flipped;
@property(readonly, nonatomic, getter=isDigital) _Bool digital;
- (_Bool)isAnalog;
@property(readonly, nonatomic) float value;
- (id)description;

@end

