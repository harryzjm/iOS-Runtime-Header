//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSArray, NSMapTable, NSMutableSet, NSString, _UIAssociationTable, _UILazyMapTable, _UIMotionEffectEvent, _UIMotionEffectEventProvider;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEngine : NSObject
{
    _UIAssociationTable *_effectViewAssociationTable;
    _UILazyMapTable *_analyzerSettingsToAnalyzers;
    NSMapTable *_analyzersToEffects;
    NSMapTable *_suspendedViewsToEffectSets;
    _UIMotionEffectEventProvider *_eventProvider;
    _Bool _hasReceivedAtLeastOneEventSinceStarting;
    _UIMotionEffectEvent *_pendingEvent;
    struct os_unfair_lock_s _pendingEventLock;
    CADisplayLink *_displayLink;
    _Bool _generatingUpdates;
    NSMutableSet *_suspendReasons;
    _UIMotionEffectEvent *_lastEvent;
    _Bool _slowUpdatesEnabled;
    _Bool _pendingSlowDown;
    long long _eventProviderStatus;
    _Bool _allAnalyzersAreCentered;
    _Bool _hasAppliedAtLeastOneUpdateSinceStarting;
    _Bool _isPendingReset;
    int _thermalNotificationToken;
    int _screenDimmingNotificationToken;
    long long _targetInterfaceOrientation;
}

+ (Class)_analyzerClass;
+ (Class)_eventProviderClass;
+ (_Bool)_motionEffectsSupported;
+ (_Bool)_motionEffectsEnabled;
- (void).cxx_destruct;
@property(nonatomic, setter=_setTargetInterfaceOrientation:) long long _targetInterfaceOrientation; // @synthesize _targetInterfaceOrientation;
@property(readonly, copy) NSString *debugDescription;
- (void)_unapplyAllEffects;
- (_Bool)_motionEffect:(id)arg1 belongsToView:(id)arg2;
- (_Bool)_hasMotionEffectsForView:(id)arg1;
- (id)_motionEffectsForView:(id)arg1;
- (void)_unregisterAllMotionEffectsForView:(id)arg1;
- (void)endApplyingMotionEffect:(id)arg1 toView:(id)arg2;
- (void)_unregisterMotionEffect:(id)arg1 fromView:(id)arg2;
- (void)beginApplyingMotionEffect:(id)arg1 toView:(id)arg2;
@property(readonly, nonatomic) NSArray *suspensionReasons;
- (_Bool)_motionEffectsAreSuspendedForView:(id)arg1;
- (void)endSuspendingMotionEffectsForView:(id)arg1;
- (void)beginSuspendingMotionEffectsForView:(id)arg1;
- (_Bool)_isSuspended;
- (void)_updateDisplayLinkInterval;
- (void)_stopGeneratingUpdates;
- (void)_startGeneratingUpdates;
- (void)_startOrStopGeneratingUpdates;
- (_Bool)_shouldGenerateUpdates;
- (void)endSuspendingForReason:(id)arg1;
- (void)beginSuspendingForReason:(id)arg1;
- (void)updateEventProviderStatus:(long long)arg1;
- (void)updateWithEvent:(id)arg1;
- (void)resetMotionAnalysis;
- (void)_applyEffectsFromAnalyzer:(id)arg1;
- (void)_handleLatestDeviceMotion;
- (void)_toggleSlowUpdates;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

