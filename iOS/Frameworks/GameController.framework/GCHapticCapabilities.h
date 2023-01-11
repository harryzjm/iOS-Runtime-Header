//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/GCDeviceHapticCapabilityInfo-Protocol.h>
#import <GameController/NSSecureCoding-Protocol.h>

@class GCController, GCDeviceHaptics, GCHapticCapabilityGraph, NSArray, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

@interface GCHapticCapabilities : NSObject <NSSecureCoding, GCDeviceHapticCapabilityInfo>
{
    NSArray *_hapticEnginesInfo;
    GCController *_controller;
    _Bool _initialized;
    id <NSObject><NSCopying><NSSecureCoding> _identifier;
    GCHapticCapabilityGraph *_capabilityGraph;
    GCDeviceHaptics *_deviceHaptics;
    NSArray *_hapticEngines;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
@property(copy) NSArray *hapticEngines; // @synthesize hapticEngines=_hapticEngines;
@property(readonly) GCDeviceHaptics *deviceHaptics; // @synthesize deviceHaptics=_deviceHaptics;
@property(readonly) GCHapticCapabilityGraph *capabilityGraph; // @synthesize capabilityGraph=_capabilityGraph;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)setController:(id)arg1;
- (void)removeHapticEngines;
- (void)initializeHapticEngines;
- (id)init;
- (id)initWithIdentifier:(id)arg1 hapticEnginesInfo:(id)arg2 hapticCapabilityGraph:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
