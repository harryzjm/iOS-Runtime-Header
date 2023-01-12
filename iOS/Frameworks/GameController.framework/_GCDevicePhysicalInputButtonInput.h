//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputButtonInput
{
    _Bool _isAnalog;
    float _pressedThreshold;
    unsigned long long _valueChangedHandlerSlot;
    unsigned long long _pressedChangedHandlerSlot;
    unsigned long long _valueSlot;
    unsigned long long _timestampSlot;
}

@property(readonly) double lastPressedStateLatency;
@property(readonly) double lastPressedStateTimestamp;
@property(readonly, getter=isPressed) _Bool pressed;
@property(copy) CDUnknownBlockType pressedDidChangeHandler;
- (void)invokeCallbacksForInputChangedState:(unsigned char)arg1 withElement:(id)arg2;
@property(readonly) double lastValueLatency;
@property(readonly) double lastValueTimestamp;
@property(readonly) _Bool canWrap;
@property(readonly, getter=isAnalog) _Bool analog;
@property(readonly) float value;
@property(copy) CDUnknownBlockType valueDidChangeHandler;
- (id)init;
- (id)initWith:(id)arg1 context:(id)arg2;
- (id)initWithParams:(struct _GCDevicePhysicalInputButtonInputParams)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

