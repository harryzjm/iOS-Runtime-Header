//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VUIApplicationNotificationManager : NSObject
{
}

+ (id)sharedInstance;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)listenForApplicationNotifications;
- (void)dealloc;

@end
