//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIGameControllerEvent
{
    CDStruct_a7a14e3b _previousState;
    unsigned long long _activeComponent;
}

- (_Bool)_processShoulder:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (_Bool)_processRightStick:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (_Bool)_processLeftStick:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (_Bool)_processDPad:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (_Bool)_processStandardButtons:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (_Bool)_determineInputTypeAndProcess:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (struct CGPoint)_leftStickPosition;
- (void)_maybeConvertAndSendAsPressesEvent;
- (void)_reset;
- (void)_sendEventToResponder:(id)arg1;
- (long long)subtype;
- (long long)type;

@end
