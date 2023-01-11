//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDBehaviorSettings, DNDBypassSettings, DNDRequestDetails, DNDScheduleSettings;

@protocol DNDRemoteServiceServerSettingsProtocol <NSObject>
- (void)registerForSettingsUpdatesWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)setScheduleSettings:(DNDScheduleSettings *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)getScheduleSettingsWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(DNDScheduleSettings *, NSError *))arg2;
- (void)setPhoneCallBypassSettings:(DNDBypassSettings *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)getPhoneCallBypassSettingsWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(DNDBypassSettings *, NSError *))arg2;
- (void)setBehaviorSettings:(DNDBehaviorSettings *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)getBehaviorSettingsWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(DNDBehaviorSettings *, NSError *))arg2;
@end

