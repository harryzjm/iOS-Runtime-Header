//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LAContext, NSDictionary, UIView;
@protocol LAUIAuthenticationCoreDelegate;

__attribute__((visibility("hidden")))
@interface LAUIAuthenticationCore : NSObject
{
    _Bool _doneMatching;
    _Bool _doneWatch;
    _Bool _usesInternalContext;
    _Bool _mirroringToDefaultUI;
    long long _lastState;
    _Bool _applicationActive;
    _Bool _keyWindow;
    _Bool _uiActive;
    NSObject<LAUIAuthenticationCoreDelegate> *_delegate;
    UIView *_view;
    long long _biometryType;
    unsigned long long _enabledMechanisms;
    unsigned long long _activeMechanisms;
    LAContext *_context;
    NSDictionary *_faceIdResult;
}

+ (void)performBlockOnMainThread:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *faceIdResult; // @synthesize faceIdResult=_faceIdResult;
@property(retain, nonatomic) LAContext *context; // @synthesize context=_context;
@property(nonatomic, getter=isUiActive) _Bool uiActive; // @synthesize uiActive=_uiActive;
@property(nonatomic, getter=isKeyWindow) _Bool keyWindow; // @synthesize keyWindow=_keyWindow;
@property(nonatomic, getter=isApplicationActive) _Bool applicationActive; // @synthesize applicationActive=_applicationActive;
@property(nonatomic) unsigned long long activeMechanisms; // @synthesize activeMechanisms=_activeMechanisms;
@property(nonatomic) unsigned long long enabledMechanisms; // @synthesize enabledMechanisms=_enabledMechanisms;
@property(readonly, nonatomic) long long biometryType; // @synthesize biometryType=_biometryType;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak NSObject<LAUIAuthenticationCoreDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)_biometricNoMatch;
- (void)_biometryState:(long long)arg1;
- (_Bool)_simpleStatusInParams:(id)arg1 touchId:(long long)arg2 faceId:(long long)arg3;
- (void)event:(long long)arg1 params:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_processActivityChangeForNotification:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)checkView;
- (void)_notification:(id)arg1;
- (id)notificationNames;
- (void)_stopBackgroundMechanisms;
- (void)_handleBackgroundMechanismsResult:(id)arg1 error:(id)arg2 context:(id)arg3;
- (id)_optionsForBackgroundMechanism;
- (void)_startBackgroundMechanisms;
- (long long)_policyForBackgroundMechanisms;
- (void)startOrStopBackgroundMechanisms;
- (_Bool)_mechanism:(unsigned long long)arg1 enable:(_Bool)arg2 error:(id *)arg3;
- (_Bool)disableMechanism:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)enableMechanism:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)isMechanismActive:(unsigned long long)arg1;
- (_Bool)isMechanismEnabled:(unsigned long long)arg1;
- (_Bool)isMechanismAvailable:(unsigned long long)arg1 error:(id *)arg2;
- (void)_setupNotifications:(_Bool)arg1;
- (void)_enableAvailableMechanisms:(unsigned long long)arg1;
- (void)_setupMechanisms:(unsigned long long)arg1;
- (id)initWithMechanisms:(unsigned long long)arg1 context:(id)arg2;
- (id)initWithMechanisms:(unsigned long long)arg1;

@end

