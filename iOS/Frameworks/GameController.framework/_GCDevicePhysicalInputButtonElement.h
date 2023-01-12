//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;
@protocol GCPressedStateInput><GCLinearInput, GCTouchedStateInput;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputButtonElement
{
    _Bool _isAnalog;
    float _pressedThreshold;
    long long _pressedValueField;
    unsigned long long _valueChangedHandlerSlot;
    unsigned long long _pressedChangedHandlerSlot;
    unsigned long long _valueSlot;
    unsigned long long _timestampSlot;
}

- (void)onCommitInvokeCallbacks:(unsigned long long)arg1;
- (unsigned long long)handleGamepadEvent:(id)arg1 withTimestamp:(double)arg2;
@property(readonly) double lastPressedStateLatency;
@property(readonly) double lastPressedStateTimestamp;
@property(readonly, getter=isPressed) _Bool pressed;
@property(copy) CDUnknownBlockType pressedDidChangeHandler;
@property(readonly) double lastValueLatency;
@property(readonly) double lastValueTimestamp;
@property(readonly) _Bool canWrap;
@property(readonly, getter=isAnalog) _Bool analog;
@property(readonly) float value;
@property(copy) CDUnknownBlockType valueDidChangeHandler;
@property(readonly, copy) NSString *description;
- (_Bool)isEqualToElement:(id)arg1;
@property(readonly) id <GCTouchedStateInput> touchedInput;
@property(readonly) id <GCPressedStateInput><GCLinearInput> pressedInput;
- (id)initWith:(id)arg1 context:(id)arg2;
- (id)initWithIdentifier:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly) NSSet *aliases;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *localizedName;
@property(readonly) NSString *sfSymbolsName;
@property(readonly) Class superclass;

@end

