//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMService.h>

#import <Home/HFNotificationPreferences-Protocol.h>

@class NSPredicate, NSString;

@interface HMService (HFNotificationPreferencesAdoption) <HFNotificationPreferences>
- (id)hf_updateNotificationsCondition:(id)arg1;
- (id)hf_updateShowNotificationsStatus:(_Bool)arg1;
@property(readonly, nonatomic) NSPredicate *hf_notificationsCondition;
@property(readonly, nonatomic) _Bool hf_isShowNotificationsStatus;
@property(readonly, nonatomic) _Bool hf_supportsNotifications;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

