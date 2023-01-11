//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/MFDiagnosticsGenerator-Protocol.h>

@class MFObservable, NSCountedSet, NSString;
@protocol MFCancelable, OS_dispatch_queue;

@interface MFPowerController : NSObject <MFDiagnosticsGenerator>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_powerQueue;
    int _pluggedIn;
    int _powerToken;
    int _batteryNotificationToken;
    NSCountedSet *_identifiers;
    id <MFCancelable> _appStateCancelable;
    _Bool _isForeground;
    float _batteryLevel;
}

+ (void)powerlog:(id)arg1 eventData:(id)arg2;
+ (id)sharedInstance;
@property(readonly, nonatomic) float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
- (id)copyDiagnosticInformation;
@property(readonly, nonatomic) MFObservable *batteryLevelObservable;
- (id)batteryLevelStateChangeNotificationObservable;
@property(readonly, nonatomic) MFObservable *lowPowerModeObservable;
@property(readonly, nonatomic) MFObservable *pluggedInObservable;
- (id)powerObservable;
- (void)_applicationForegroundStateChanged:(_Bool)arg1;
- (void)_applicationForegroundStateChanged_nts:(_Bool)arg1;
- (void)releaseAssertionWithIdentifier:(id)arg1;
- (void)retainAssertionWithIdentifier:(id)arg1 withAccount:(id)arg2;
- (void)retainAssertionWithIdentifier:(id)arg1;
- (void)_releaseTaskAssertion_nts;
- (void)_retainTaskAssertion_nts;
- (void)_releasePowerAssertion_nts;
- (void)_retainPowerAssertion_nts;
- (void)_setupAssertionTimer:(double)arg1;
- (double)_assertionTimeout;
@property(readonly, getter=isBatterySaverModeEnabled) _Bool batterySaverModeEnabled;
- (void)_lowPowerModeChangedNotification:(id)arg1;
- (void)startListeningForBatterySaverNotifications;
- (_Bool)_isHoldingTaskAssertion;
@property(readonly, getter=isHoldingAssertion) _Bool holdingAssertion;
@property(readonly, getter=isPluggedIn) _Bool pluggedIn;
- (void)_setPluggedIn:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

