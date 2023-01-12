//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>
#import <SpringBoardFoundation/BSInvalidatable-Protocol.h>
#import <SpringBoardFoundation/NSCopying-Protocol.h>
#import <SpringBoardFoundation/SBFTraitsPreferencesProviding-Protocol.h>
#import <SpringBoardFoundation/SBFTraitsPreferencesUpdating-Protocol.h>
#import <SpringBoardFoundation/SBFTraitsResolutionPoliciesProviding-Protocol.h>
#import <SpringBoardFoundation/SBFTraitsSettingsActuating-Protocol.h>
#import <SpringBoardFoundation/SBFTraitsSettingsActuationContextProviding-Protocol.h>
#import <SpringBoardFoundation/SBFTraitsSettingsUpdating-Protocol.h>

@class NSString, SBFTraitsArbiter, SBFTraitsOrientationResolutionPolicyInfo, SBFTraitsPreferencesOrientation, SBFTraitsPreferencesZOrderLevel, SBFTraitsSettings, SBFTraitsSettingsActuationContext;
@protocol BSInvalidatable, SBFTraitsParticipantDelegate;

@interface SBFTraitsParticipant : NSObject <SBFTraitsPreferencesUpdating, SBFTraitsSettingsUpdating, SBFTraitsSettingsActuationContextProviding, SBFTraitsPreferencesProviding, SBFTraitsResolutionPoliciesProviding, NSCopying, BSInvalidatable, BSDescriptionProviding, SBFTraitsSettingsActuating>
{
    _Bool _invalidated;
    id <BSInvalidatable> _stateDumpHandle;
    SBFTraitsArbiter *_arbiter;
    SBFTraitsPreferencesOrientation *_orientationPreferences;
    SBFTraitsPreferencesZOrderLevel *_zOrderLevelPreferences;
    SBFTraitsSettings *_currentSettings;
    SBFTraitsSettings *_previousSettings;
    SBFTraitsOrientationResolutionPolicyInfo *_orientationResolutionPolicyInfo;
    _Bool __debugDelegateDidValidateLastSettings;
    NSString *_role;
    NSString *_uniqueIdentifier;
    id <SBFTraitsParticipantDelegate> _delegate;
    NSString *__debugLastOrientationValidationFailureReason;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *_debugLastOrientationValidationFailureReason; // @synthesize _debugLastOrientationValidationFailureReason=__debugLastOrientationValidationFailureReason;
@property(nonatomic) _Bool _debugDelegateDidValidateLastSettings; // @synthesize _debugDelegateDidValidateLastSettings=__debugDelegateDidValidateLastSettings;
@property(nonatomic) __weak SBFTraitsArbiter *arbiter; // @synthesize arbiter=_arbiter;
@property(nonatomic) __weak id <SBFTraitsParticipantDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy, nonatomic) NSString *role; // @synthesize role=_role;
@property(retain, nonatomic) SBFTraitsSettings *previousSettings; // @synthesize previousSettings=_previousSettings;
@property(retain, nonatomic) SBFTraitsSettings *currentSettings; // @synthesize currentSettings=_currentSettings;
@property(retain, nonatomic) SBFTraitsPreferencesOrientation *orientationPreferences; // @synthesize orientationPreferences=_orientationPreferences;
@property(retain, nonatomic) SBFTraitsPreferencesZOrderLevel *zOrderLevelPreferences; // @synthesize zOrderLevelPreferences=_zOrderLevelPreferences;
@property(copy, nonatomic) SBFTraitsOrientationResolutionPolicyInfo *orientationResolutionPolicyInfo; // @synthesize orientationResolutionPolicyInfo=_orientationResolutionPolicyInfo;
- (id)_setupStateDump;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (_Bool)hasAnyActuationContext;
@property(readonly, copy, nonatomic) SBFTraitsSettingsActuationContext *orientationActuationContext;
- (void)updateOrientationSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateZOrderLevelSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateOrientationPreferencesWithBlock:(CDUnknownBlockType)arg1;
- (void)updateZOrderLevelPreferencesWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidate;
- (void)updatePreferencesIfNeeded;
- (void)setNeedsUpdatePreferencesWithReason:(id)arg1 force:(_Bool)arg2 animate:(_Bool)arg3;
- (void)setNeedsUpdatePreferencesWithReason:(id)arg1 animate:(_Bool)arg2;
- (void)setNeedsUpdatePreferencesWithReason:(id)arg1 force:(_Bool)arg2;
- (void)setNeedsUpdatePreferencesWithReason:(id)arg1;
- (id)initWithParticipant:(id)arg1;
- (id)initWithRole:(id)arg1 uniqueIdentifier:(id)arg2 delegate:(id)arg3 arbiter:(id)arg4;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
