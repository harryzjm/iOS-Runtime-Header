//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/NSSecureCoding-Protocol.h>
#import <GameController/_GCGamepadEventSink-Protocol.h>

@class GCController, GCControllerButtonInput, GCControllerDirectionPad, NSString;

@interface GCExtendedGamepad <_GCGamepadEventSink, NSSecureCoding>
{
    long long _buttonHomeUsage;
    long long _buttonMenuUsage;
    long long _buttonOptionsUsage;
    CDUnknownBlockType _valueChangedHandler;
    GCControllerDirectionPad *_dpad;
    GCControllerButtonInput *_button0;
    GCControllerButtonInput *_button1;
    GCControllerButtonInput *_button2;
    GCControllerButtonInput *_button3;
    GCControllerDirectionPad *_leftThumbstick;
    GCControllerDirectionPad *_rightThumbstick;
    GCControllerButtonInput *_leftShoulder;
    GCControllerButtonInput *_rightShoulder;
    GCControllerButtonInput *_leftTrigger;
    GCControllerButtonInput *_rightTrigger;
    GCControllerButtonInput *_leftThumbstickButton;
    GCControllerButtonInput *_rightThumbstickButton;
    id _gamepadEventObservation;
    GCControllerButtonInput *_buttonMenu;
    GCControllerButtonInput *_buttonOptions;
    GCControllerButtonInput *_buttonHome;
}

+ (id)_current;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) GCControllerButtonInput *rightThumbstickButton; // @synthesize rightThumbstickButton=_rightThumbstickButton;
@property(readonly, nonatomic) GCControllerButtonInput *leftThumbstickButton; // @synthesize leftThumbstickButton=_leftThumbstickButton;
@property(readonly, nonatomic) GCControllerButtonInput *rightTrigger; // @synthesize rightTrigger=_rightTrigger;
@property(readonly, nonatomic) GCControllerButtonInput *leftTrigger; // @synthesize leftTrigger=_leftTrigger;
@property(readonly, nonatomic) GCControllerButtonInput *rightShoulder; // @synthesize rightShoulder=_rightShoulder;
@property(readonly, nonatomic) GCControllerButtonInput *leftShoulder; // @synthesize leftShoulder=_leftShoulder;
@property(readonly, nonatomic) GCControllerDirectionPad *rightThumbstick; // @synthesize rightThumbstick=_rightThumbstick;
@property(readonly, nonatomic) GCControllerDirectionPad *leftThumbstick; // @synthesize leftThumbstick=_leftThumbstick;
@property(readonly, nonatomic) GCControllerButtonInput *buttonHome; // @synthesize buttonHome=_buttonHome;
@property(readonly, nonatomic) GCControllerButtonInput *buttonOptions; // @synthesize buttonOptions=_buttonOptions;
@property(readonly, nonatomic) GCControllerButtonInput *buttonMenu; // @synthesize buttonMenu=_buttonMenu;
@property(readonly, nonatomic) GCControllerDirectionPad *dpad; // @synthesize dpad=_dpad;
@property(copy, nonatomic) CDUnknownBlockType valueChangedHandler; // @synthesize valueChangedHandler=_valueChangedHandler;
@property(readonly, nonatomic) GCControllerButtonInput *buttonY; // @synthesize buttonY=_button3;
@property(readonly, nonatomic) GCControllerButtonInput *buttonX; // @synthesize buttonX=_button2;
@property(readonly, nonatomic) GCControllerButtonInput *buttonB; // @synthesize buttonB=_button1;
@property(readonly, nonatomic) GCControllerButtonInput *buttonA; // @synthesize buttonA=_button0;
- (void)setAllowsRotation:(_Bool)arg1;
- (_Bool)allowsRotation;
- (void)setReportsAbsoluteDpadValues:(_Bool)arg1;
- (_Bool)reportsAbsoluteDpadValues;
- (void)_triggerValueChangedHandlerForElement:(id)arg1 queue:(id)arg2;
- (void)setStateFromExtendedGamepad:(id)arg1;
- (id)setElementValuesFromExtendedGamepad:(id)arg1;
- (id)name;
- (id)saveSnapshot;
- (void)initAuxiliaryButtonsWithInitInfo:(const CDStruct_8de101df *)arg1;
@property(readonly, nonatomic) GCControllerButtonInput *_buttonHome;
@property(readonly, nonatomic) GCControllerButtonInput *button3;
@property(readonly, nonatomic) GCControllerButtonInput *button2;
@property(readonly, nonatomic) GCControllerButtonInput *button1;
@property(readonly, nonatomic) GCControllerButtonInput *button0;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 info:(const CDStruct_8de101df *)arg2;
- (id)initWithInfo:(const CDStruct_8de101df *)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)handleEvent:(struct __IOHIDEvent *)arg1;
- (id)productCategory;
- (id)initWithController:(id)arg1;
- (id)initWithController:(id)arg1 initInfo:(const CDStruct_8de101df *)arg2;
- (void)setGamepadEventSource:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) __weak GCController *controller; // @dynamic controller;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
