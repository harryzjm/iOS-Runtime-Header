//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAENotificationCenter, HDCloudSyncManager, HDHeadphoneExposureNotificationSyncManager, HDProfile;

__attribute__((visibility("hidden")))
@interface HDHeadphoneExposureNotificationCenter : NSObject
{
    HDProfile *_profile;
    HAENotificationCenter *_notificationCenter;
    HDHeadphoneExposureNotificationSyncManager *_notificationSyncManager;
    HDCloudSyncManager *_cloudSyncManager;
}

- (void).cxx_destruct;
- (void)_reportHeadphoneNotificationWithNowDate:(id)arg1 eventDuration:(double)arg2 exposureLevel:(double)arg3 exposureDuration:(double)arg4 hasPrunableData:(_Bool)arg5 isDeviceLocked:(_Bool)arg6 analyticsInfo:(id)arg7;
- (id)postSevenDayDoseNotification:(id)arg1 nowDate:(id)arg2 analyticsInfo:(id)arg3 error:(id *)arg4;
- (id)initWithProfile:(id)arg1 syncManager:(id)arg2;

@end

