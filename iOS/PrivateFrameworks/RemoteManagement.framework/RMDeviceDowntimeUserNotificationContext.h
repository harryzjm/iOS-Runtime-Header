//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface RMDeviceDowntimeUserNotificationContext
{
    NSString *_localizedUserNotificationBodyKey;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *localizedUserNotificationBodyKey; // @synthesize localizedUserNotificationBodyKey=_localizedUserNotificationBodyKey;
- (void).cxx_destruct;
- (id)notificationBundleIdentifier;
- (id)destinations;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)setEndDateComponents:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
