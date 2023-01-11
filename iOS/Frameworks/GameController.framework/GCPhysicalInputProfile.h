//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/GCControllerComponent-Protocol.h>
#import <GameController/GCNamedProfile-Protocol.h>

@class GCController, GCControllerElement, GCControllerSettings, GCMotion, NSMutableDictionary, NSMutableSet, NSString;
@protocol GCDevice, NSObject><NSCopying><NSSecureCoding;

@interface GCPhysicalInputProfile : NSObject <GCNamedProfile, GCControllerComponent>
{
    GCController *_controller;
    id <GCDevice> _device;
    GCMotion *_motion;
    GCControllerElement *_remappedElements[41];
    GCControllerSettings *_appliedSettings;
    id <NSObject><NSCopying><NSSecureCoding> _identifier;
    double _lastEventTimestamp;
    NSMutableDictionary *_elements;
    NSMutableDictionary *_buttons;
    NSMutableDictionary *_axes;
    NSMutableDictionary *_dpads;
    NSMutableSet *_allElements;
    NSMutableSet *_allButtons;
    NSMutableSet *_allAxes;
    NSMutableSet *_allDpads;
    GCControllerSettings *_bundleSettings;
    GCControllerSettings *_defaultSettings;
    NSMutableSet *__topLevelElements;
    NSMutableSet *__topLevelButtons;
    NSMutableSet *__topLevelDirectionPads;
    NSMutableSet *__topLevelTouchpads;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak GCController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSMutableSet *_topLevelTouchpads; // @synthesize _topLevelTouchpads=__topLevelTouchpads;
@property(retain, nonatomic) NSMutableSet *_topLevelDirectionPads; // @synthesize _topLevelDirectionPads=__topLevelDirectionPads;
@property(retain, nonatomic) NSMutableSet *_topLevelButtons; // @synthesize _topLevelButtons=__topLevelButtons;
@property(retain, nonatomic) NSMutableSet *_topLevelElements; // @synthesize _topLevelElements=__topLevelElements;
@property(retain, nonatomic) GCControllerSettings *defaultSettings; // @synthesize defaultSettings=_defaultSettings;
@property(retain, nonatomic) GCControllerSettings *bundleSettings; // @synthesize bundleSettings=_bundleSettings;
@property(retain, nonatomic) NSMutableSet *allDpads; // @synthesize allDpads=_allDpads;
@property(retain, nonatomic) NSMutableSet *allAxes; // @synthesize allAxes=_allAxes;
@property(retain, nonatomic) NSMutableSet *allButtons; // @synthesize allButtons=_allButtons;
@property(retain, nonatomic) NSMutableSet *allElements; // @synthesize allElements=_allElements;
@property(retain, nonatomic) NSMutableDictionary *dpads; // @synthesize dpads=_dpads;
@property(retain, nonatomic) NSMutableDictionary *axes; // @synthesize axes=_axes;
@property(retain, nonatomic) NSMutableDictionary *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSMutableDictionary *elements; // @synthesize elements=_elements;
@property double lastEventTimestamp; // @synthesize lastEventTimestamp=_lastEventTimestamp;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)setStateFromPhysicalInput:(id)arg1;
- (id)capture;
@property(readonly, copy) NSString *description;
- (void)_receivedEvent;
- (void)_triggerValueChangedHandlerForElement:(id)arg1 queue:(id)arg2;
- (void)_registerTouchpad:(id)arg1;
- (void)_registerButton:(id)arg1;
- (void)_registerAxis:(id)arg1;
- (void)_registerDirectionPad:(id)arg1;
- (void)_registerTopLevelTouchpad:(id)arg1;
- (void)_registerTopLevelDirectionPad:(id)arg1;
- (void)_registerTopLevelButton:(id)arg1;
- (id)_touchpadWithInfo:(CDStruct_e11ff636)arg1;
- (id)_buttonWithInfo:(CDStruct_e11ff636)arg1;
- (id)_cursorWithInfo:(CDStruct_e11ff636)arg1;
- (id)_directionPadWithInfo:(CDStruct_e11ff636)arg1;
- (void)updateElementControllerReferences;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)remappedElementForIndex:(long long)arg1;
- (void)applySettings:(id)arg1;
- (void)setDefaultSettings:(id)arg1 bundleSettings:(id)arg2;
- (void)setController:(id)arg1;
@property(nonatomic) __weak id <GCDevice> device;
@property(readonly) NSString *name;
- (id)initWithIdentifier:(id)arg1;
- (id)init;
- (void)setButton:(id)arg1 pressed:(_Bool)arg2;
- (void)setButton:(id)arg1 value:(double)arg2;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3;
- (void)appDidBecomeActive;
- (void)appWillResignActive;
- (unsigned int)sampleRate;
- (_Bool)isBluetoothAndUSBMirrored;
- (CDUnknownBlockType)valueChangedHandler;
- (void)handleEvent:(struct __IOHIDEvent *)arg1;
- (void)setPlayerIndex:(long long)arg1;
- (id)productCategory;
@property(retain) GCMotion *_motion;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
