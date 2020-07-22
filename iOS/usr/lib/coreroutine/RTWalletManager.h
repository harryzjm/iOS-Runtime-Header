//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RTDefaultsManager;

@interface RTWalletManager
{
    RTDefaultsManager *_defaultsManager;
    double _maximumTransactionDistance;
}

@property(nonatomic) double maximumTransactionDistance; // @synthesize maximumTransactionDistance=_maximumTransactionDistance;
@property(retain, nonatomic) RTDefaultsManager *defaultsManager; // @synthesize defaultsManager=_defaultsManager;
- (void).cxx_destruct;
- (void)_unregisterPaymentUseCallbacks;
- (void)_unregisterPassUseCallbacks;
- (void)_registerPaymentUseCallbacks;
- (void)_registerPassUseCallbacks;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)updateDoubleForKey:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)onDefaultsUpdate:(id)arg1;
- (void)_setup;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (void)shutdown;
- (id)initWithDefaultsManager:(id)arg1;
- (id)init;

@end
