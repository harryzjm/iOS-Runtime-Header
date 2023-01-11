//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenTimeUI/MCProfileConnectionObserver-Protocol.h>

@class NSString, PSSpecifier, UIViewController;

@interface STEnableScreenTimeGroupSpecifierProvider <MCProfileConnectionObserver>
{
    PSSpecifier *_setupScreenTimeSpecifier;
    UIViewController *_rootViewController;
}

+ (id)providerWithCoordinator:(id)arg1 rootViewController:(id)arg2;
@property __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain) PSSpecifier *setupScreenTimeSpecifier; // @synthesize setupScreenTimeSpecifier=_setupScreenTimeSpecifier;
- (void).cxx_destruct;
- (void)saveValuesForModel:(id)arg1;
- (void)setupScreenTime:(id)arg1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

