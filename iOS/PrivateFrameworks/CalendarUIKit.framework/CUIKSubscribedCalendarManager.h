//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CUIKSubscribedCalendarManager : NSObject
{
    unsigned long long _calendarSaveMonitoringToken;
    unsigned long long _accountsSaveMonitoringToken;
}

- (id)_accountDescriptionForCalendar:(id)arg1;
- (id)_createLocalSubCalAccountForCalendar:(id)arg1 inAccountStore:(id)arg2;
- (id)_createCalDAVChildSubCalAccountForCalendar:(id)arg1 inAccountStore:(id)arg2;
- (id)_createSubcalAccountForCalendar:(id)arg1 inAccountStore:(id)arg2 newAccountNeedsSaving:(_Bool *)arg3;
- (void)_saveAccount:(id)arg1 inStore:(id)arg2 updated:(_Bool)arg3;
- (void)_updateAccount:(id)arg1 inAccountStore:(id)arg2 withCalendar:(id)arg3 oldAccount:(id)arg4 newAccountDirty:(_Bool)arg5 newUsername:(id)arg6 newPassword:(id)arg7 newAllowsInsecureConnections:(_Bool)arg8;
- (void)updateOrCreateAccountWithCalendar:(id)arg1 previousAccountID:(id)arg2 newUsername:(id)arg3 newPassword:(id)arg4 newAllowsInsecureConnections:(_Bool)arg5;
- (void)restartDAAfterAccountUpdates;
- (void)shutdownDAForAccountUpdates;
- (void)restartDAAfterCalendarUpdates;
- (void)shutdownDAForCalendarUpdates;

@end
