//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <PreferencesUI/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSString;

@interface PSUIHealthKitVisibilityArbitrator : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    unsigned long long _visibilityState;
    CDUnknownBlockType _visibilityStateChangeHandler;
    unsigned long long _healthAppInstallState;
}

@property(nonatomic) unsigned long long healthAppInstallState; // @synthesize healthAppInstallState=_healthAppInstallState;
@property(copy, nonatomic) CDUnknownBlockType visibilityStateChangeHandler; // @synthesize visibilityStateChangeHandler=_visibilityStateChangeHandler;
@property(nonatomic) unsigned long long visibilityState; // @synthesize visibilityState=_visibilityState;
- (void).cxx_destruct;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)_queryHealthAppInstallStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_reloadVisibilityStateIncludingInstallState:(_Bool)arg1;
- (void)reloadVisibilityState;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
