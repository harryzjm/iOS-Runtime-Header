//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSApplicationInforming-Protocol.h>

@class NSHashTable, NSString;

@interface SBDashBoardApplicationInformer : NSObject <CSApplicationInforming>
{
    NSHashTable *_observers;
}

- (void).cxx_destruct;
- (void)_screenTimeNotificationPolicyDidChange:(id)arg1;
- (void)_installedApplicationsDidChange:(id)arg1;
- (void)removeApplicationInformationObserver:(id)arg1;
- (void)addApplicationInformationObserver:(id)arg1;
- (_Bool)_isBundleIdentifierBlockedForCommunicationPolicy:(id)arg1;
- (_Bool)_isBundleIdentifierBlockedForScreenTimeExpiration:(id)arg1;
- (_Bool)shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg1;
- (_Bool)isBundleIdentifierWallet:(id)arg1;
- (_Bool)isBundleIdentifierClock:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
