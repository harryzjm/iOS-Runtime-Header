//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface BBBulletinBoardDefaults : BSAbstractDefaultDomain
{
}

+ (id)standardDefaults;
- (void)_bindAndRegisterDefaults;
- (id)init;

// Remaining properties
@property(nonatomic) long long globalContentPreviewSetting; // @dynamic globalContentPreviewSetting;
@property(nonatomic) long long globalSpokenNotificationSetting; // @dynamic globalSpokenNotificationSetting;
@property(nonatomic, getter=isSpokenNotificationsSupported) _Bool spokenNotificationsSupported; // @dynamic spokenNotificationsSupported;

@end
