//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NSString, UNNotificationResponse, _UNNotificationExtensionHostViewController;

@protocol _UNNotificationExtensionHostDelegate <NSObject>
- (void)notificationHostExtension:(_UNNotificationExtensionHostViewController *)arg1 audioAccessoryViewLayerContextId:(unsigned int)arg2;
- (void)notificationHostExtensionRequestsDismiss:(_UNNotificationExtensionHostViewController *)arg1;
- (void)notificationHostExtension:(_UNNotificationExtensionHostViewController *)arg1 setDismissEnabled:(_Bool)arg2;
- (void)notificationHostExtensionMediaPlayingDidPause:(_UNNotificationExtensionHostViewController *)arg1;
- (void)notificationHostExtensionMediaPlayingDidStart:(_UNNotificationExtensionHostViewController *)arg1;
- (void)notificationHostExtension:(_UNNotificationExtensionHostViewController *)arg1 setTitle:(NSString *)arg2;
- (void)notificationHost:(_UNNotificationExtensionHostViewController *)arg1 extensionDidCompleteResponse:(UNNotificationResponse *)arg2 withOption:(unsigned long long)arg3;
- (void)notificationHostExtensionDidUpdateControls:(_UNNotificationExtensionHostViewController *)arg1;
@end
