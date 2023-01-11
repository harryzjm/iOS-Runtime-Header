//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSNumber, NSString, _GCHapticClientProxy, _GCHapticDynamicParameter, _GCHapticLogicalDevice;

__attribute__((visibility("hidden")))
@interface _GCHapticPlayer : NSObject
{
    NSMutableArray *_scheduledCommands;
    NSMutableArray *_activeHapticEvents;
    NSMutableArray *_eventsToRemove;
    _GCHapticDynamicParameter *_intensityParameter;
    _GCHapticDynamicParameter *_sharpnessParameter;
    _GCHapticClientProxy *_client;
    _Bool _dirtyMuteState;
    _Bool _muted;
    int _muteReasons[5];
    _Bool _transientsEnqueuedSinceLastQuery;
    _Bool _activeEventThisSlice;
    double _initializationTime;
    double _activeLifetime;
    double _lastActiveTime;
    NSMutableArray *_intensityParamCurve;
    NSMutableArray *_sharpnessParamCurve;
    _Bool _retainedByClient;
    float _continuousIntensity;
    float _continuousSharpness;
    int _totalEventsProcessed;
    int _transientEventsProcessed;
    int _continuousEventsProcessed;
    int _parameterCurvesProcessed;
    NSArray *_actuators;
    _GCHapticLogicalDevice *_hapticLogicalDevice;
    NSNumber *_identifier;
    double _totalLifetimeInSeconds;
}

- (void).cxx_destruct;
@property(nonatomic) double totalLifetimeInSeconds; // @synthesize totalLifetimeInSeconds=_totalLifetimeInSeconds;
@property(nonatomic) int parameterCurvesProcessed; // @synthesize parameterCurvesProcessed=_parameterCurvesProcessed;
@property(nonatomic) int continuousEventsProcessed; // @synthesize continuousEventsProcessed=_continuousEventsProcessed;
@property(nonatomic) int transientEventsProcessed; // @synthesize transientEventsProcessed=_transientEventsProcessed;
@property(nonatomic) int totalEventsProcessed; // @synthesize totalEventsProcessed=_totalEventsProcessed;
@property(nonatomic, getter=isRetainedByClient) _Bool retainedByClient; // @synthesize retainedByClient=_retainedByClient;
@property(readonly, copy, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak _GCHapticLogicalDevice *hapticLogicalDevice; // @synthesize hapticLogicalDevice=_hapticLogicalDevice;
@property(readonly, copy, nonatomic) NSArray *actuators; // @synthesize actuators=_actuators;
- (void)dealloc;
- (void)teardown;
- (id)description;
- (void)handleCommand:(id)arg1;
- (void)clearParameters;
- (void)scheduleCommand:(const struct HapticCommand *)arg1;
- (_Bool)isActiveAtTime:(double)arg1;
- (_Bool)hasScheduledEventsByTime:(double)arg1;
- (_Bool)hasProcessedActiveEventsThisSlice;
- (_Bool)hasProcessedActiveEventsAfterTime:(double)arg1;
- (_Bool)hasScheduledCommands;
@property(readonly, nonatomic) float continuousSharpness; // @synthesize continuousSharpness=_continuousSharpness;
@property(readonly, nonatomic) float continuousIntensity; // @synthesize continuousIntensity=_continuousIntensity;
- (_Bool)isMuted;
- (_Bool)isMutedForReason:(unsigned long long)arg1;
- (void)setMute:(_Bool)arg1 forReason:(unsigned long long)arg2;
- (void)processSliceForLogicalDevice:(id)arg1 startTime:(double)arg2 endTime:(double)arg3;
- (_Bool)transientsEnqueuedSinceLastQuery;
- (id)initWithIdentifier:(unsigned long long)arg1 actuators:(id)arg2 client:(id)arg3;
@property(readonly, nonatomic) NSString *controllerProductCategory;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) double activeLifetimeInSeconds;

@end
