//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FocusSettingsUI/DNDModeSelectionServiceListener-Protocol.h>

@class DNDModeAssertion, DNDModeSelectionService, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface FSUIFocusActivationManager : NSObject <DNDModeSelectionServiceListener>
{
    DNDModeSelectionService *_modeSelectionService;
    DNDModeAssertion *_latestModeAssertion;
    NSMutableArray *_listeners;
    NSObject<OS_dispatch_queue> *_listenersQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_modeSelectionService;
- (void)_notifyListenersOfActiveModeAssertionChange:(id)arg1;
- (void)modeSelectionService:(id)arg1 didReceiveUpdatedActiveModeAssertion:(id)arg2 stateUpdate:(id)arg3;
- (void)modeSelectionService:(id)arg1 didReceiveModesUpdate:(id)arg2;
- (void)modeSelectionService:(id)arg1 didReceiveAvailableModesUpdate:(id)arg2;
- (void)removeListenerForFocusActivationChanges:(id)arg1;
- (void)addListenerForFocusActivationChanges:(id)arg1;
- (void)setMode:(id)arg1 isActive:(_Bool)arg2;
- (_Bool)isActiveMode:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
