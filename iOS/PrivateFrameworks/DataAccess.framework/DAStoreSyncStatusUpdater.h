//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DAStoreSyncStatusUpdater : NSObject
{
}

+ (_Bool)_isCanceledError:(id)arg1;
+ (unsigned long long)_ekAccountErrorFromURLError:(id)arg1;
+ (unsigned long long)_ekAccountErrorFromSubCalErrorCode:(long long)arg1;
+ (unsigned long long)_ekAccountErrorFromCoreDAVHTTPStatusCode:(long long)arg1;
+ (unsigned long long)_ekAccountErrorFromDAValidationErrorCode:(unsigned long long)arg1;
+ (unsigned long long)_ekAccountErrorFromDAErrorCode:(long long)arg1;
+ (unsigned long long)_ekAccountErrorFromCoreDAVErrorCode:(int)arg1;
+ (unsigned long long)_accountErrorCodeForNSError:(id)arg1;
+ (id)_mappedAccountErrorFromError:(id)arg1;
+ (void)_updateStatusForCalendar:(id)arg1 lastSyncStartDate:(id)arg2 lastSyncEndDate:(id)arg3 lastSyncError:(id)arg4 canceled:(_Bool)arg5;
+ (void)_updateStatusForCalendarWithExternalID:(id)arg1 lastSyncStartDate:(id)arg2 lastSyncEndDate:(id)arg3 lastSyncError:(id)arg4 canceled:(_Bool)arg5;
+ (void)syncEndedForCalendarWithExternalID:(id)arg1 withError:(id)arg2;
+ (void)syncStartedForCalendarWithExternalID:(id)arg1;
+ (void)_updateStatusForStoreWithExternalID:(id)arg1 lastSyncStartDate:(id)arg2 lastSyncEndDate:(id)arg3 lastSyncError:(id)arg4 canceled:(_Bool)arg5;
+ (unsigned long long)_codeForLastSyncError:(id)arg1 userInfo:(id *)arg2;
+ (void)_updateStatusForSource:(id)arg1 lastSyncStartDate:(id)arg2 lastSyncEndDate:(id)arg3 lastSyncError:(id)arg4 canceled:(_Bool)arg5;
+ (id)_eventStore;
+ (id)_eventStorePurger;
+ (void)resetSyncStatusIfNecessaryForStoresOfType:(unsigned long long)arg1;
+ (void)resetSyncStatusForAllStoresIfNecessary;
+ (void)syncEndedForStoreWithExternalID:(id)arg1 withError:(id)arg2;
+ (void)syncStartedForStoreWithExternalID:(id)arg1;

@end
