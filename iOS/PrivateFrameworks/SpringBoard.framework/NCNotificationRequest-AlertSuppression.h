//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsKit/NCNotificationRequest.h>

@interface NCNotificationRequest (AlertSuppression)
+ (id)_notificationSoundFromSound:(id)arg1;
+ (long long)_soundTypeForSBSoundType:(long long)arg1;
+ (id)_notificationOptionsForAlertItem:(id)arg1;
+ (id)_destinations;
+ (id)notificationRequestWithAlertItem:(id)arg1;
+ (id)notificationRequestWithCardItem:(id)arg1;
- (_Bool)sb_shouldSuppressAlert;
@end
