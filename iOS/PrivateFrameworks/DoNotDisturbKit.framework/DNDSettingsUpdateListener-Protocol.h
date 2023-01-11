//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbKit/NSObject-Protocol.h>

@class DNDBehaviorSettings, DNDBypassSettings, DNDScheduleSettings, DNDSettingsService;

@protocol DNDSettingsUpdateListener <NSObject>

@optional
- (void)settingsService:(DNDSettingsService *)arg1 didReceiveUpdatedScheduleSettings:(DNDScheduleSettings *)arg2;
- (void)settingsService:(DNDSettingsService *)arg1 didReceiveUpdatedPhoneCallBypassSettings:(DNDBypassSettings *)arg2;
- (void)settingsService:(DNDSettingsService *)arg1 didReceiveUpdatedBehaviorSettings:(DNDBehaviorSettings *)arg2;
@end

