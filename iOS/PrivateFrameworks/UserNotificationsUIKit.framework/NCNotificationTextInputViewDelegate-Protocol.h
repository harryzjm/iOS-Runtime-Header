//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationAction, NCNotificationTextInputView, NSString;

@protocol NCNotificationTextInputViewDelegate <NSObject>
- (void)notificationTextInputView:(NCNotificationTextInputView *)arg1 didConfirmText:(NSString *)arg2 forAction:(NCNotificationAction *)arg3;
@end

