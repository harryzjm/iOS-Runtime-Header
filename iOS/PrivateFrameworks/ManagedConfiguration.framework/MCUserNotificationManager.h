//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface MCUserNotificationManager : NSObject
{
}

+ (id)sharedManager;
- (void)cancelNotificationEntriesMatchingPredicate:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)cancelNotificationsWithIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)mainQueueDidReceiveAppWhitelistChangedNotification;
- (void)cancelAllNotificationsCompletionBlock:(CDUnknownBlockType)arg1;
- (void)displayUserNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonText:(id)arg4 alternateButtonText:(id)arg5 otherButtonText:(id)arg6 displayOnLockScreen:(_Bool)arg7 displayInAppWhitelistModes:(_Bool)arg8 dismissAfterTimeInterval:(double)arg9 assertion:(id)arg10 completionBlock:(CDUnknownBlockType)arg11;
- (void)displayUserNotificationWithTitle:(id)arg1 message:(id)arg2 defaultButtonText:(id)arg3 alternateButtonText:(id)arg4 otherButtonText:(id)arg5 displayOnLockScreen:(_Bool)arg6 displayInAppWhitelistModes:(_Bool)arg7 dismissAfterTimeInterval:(double)arg8 assertion:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (void)inviteUserToVPPWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)promptUserToLogIntoiTunesWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) _Bool hasOutstandingNotifications;
- (void)dealloc;
- (id)init;

@end
