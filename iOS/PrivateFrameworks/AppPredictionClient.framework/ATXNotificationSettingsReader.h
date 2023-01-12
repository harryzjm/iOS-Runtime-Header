//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXNotificationSettingsReaderProtocol-Protocol.h>

@class ATXDNDModeConfigurationClient, NSString, UNNotificationSettingsCenter;

@interface ATXNotificationSettingsReader : NSObject <ATXNotificationSettingsReaderProtocol>
{
    ATXDNDModeConfigurationClient *_modeConfigClient;
    UNNotificationSettingsCenter *_notificationSettingsCenter;
}

- (void).cxx_destruct;
- (id)allConfiguredDigestApps;
- (_Bool)doesAppAllowMessageBreakthrough:(id)arg1;
- (_Bool)doesAppSendNotificationsToDigest:(id)arg1;
- (_Bool)digestSetupComplete;
- (id)notificationDigestDeliveryTimes;
- (id)modeConfiguration:(id)arg1;
- (_Bool)contactIsOnAllowList:(id)arg1 dndModeUUID:(id)arg2;
- (_Bool)appIsOnAllowList:(id)arg1 dndModeUUID:(id)arg2;
- (id)initWithModeConfigurationClient:(id)arg1 notificationSettingsCenter:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
