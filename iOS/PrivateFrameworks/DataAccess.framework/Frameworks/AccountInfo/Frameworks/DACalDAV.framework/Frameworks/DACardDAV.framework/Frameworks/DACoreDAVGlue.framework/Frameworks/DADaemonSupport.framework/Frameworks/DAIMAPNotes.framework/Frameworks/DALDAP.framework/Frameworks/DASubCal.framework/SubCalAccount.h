//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DataAccess/DAAccount.h>

#import <DASubCal/SubCalValidationTaskDelegate-Protocol.h>

@class DACoreDAVTaskManager, NSData, NSDictionary, NSString, NSURL;

@interface SubCalAccount : DAAccount <SubCalValidationTaskDelegate>
{
    _Bool _isManagedCalendar;
    _Bool _isHolidaySubscribedCalendar;
    int _subCalAccountVersion;
    NSData *_tmpICSData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *tmpICSData; // @synthesize tmpICSData=_tmpICSData;
@property(nonatomic) int subCalAccountVersion; // @synthesize subCalAccountVersion=_subCalAccountVersion;
@property(nonatomic) _Bool isHolidaySubscribedCalendar; // @synthesize isHolidaySubscribedCalendar=_isHolidaySubscribedCalendar;
@property(nonatomic) _Bool isManagedCalendar; // @synthesize isManagedCalendar=_isManagedCalendar;
- (void)handleTrustChallenge:(id)arg1 forTask:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleTrustChallenge:(id)arg1 forTask:(id)arg2;
- (_Bool)hasSubscribedCalendarAtURL:(id)arg1;
- (id)onBehalfOfBundleIdentifier;
- (id)localizedInvalidPasswordMessage;
- (id)localizedIdenticalAccountFailureMessage;
- (void)removeDBSyncData;
- (_Bool)accountHasSignificantPropertyChangesWithChangeInfo:(id)arg1;
- (_Bool)isEqualToAccount:(id)arg1;
- (void)refreshAllCalendars:(_Bool)arg1;
@property(nonatomic) _Bool useFTP;
@property(nonatomic) double refreshInterval;
@property(nonatomic) _Bool shouldRemoveAttachments;
@property(nonatomic) _Bool shouldRemoveAlarms;
@property(retain, nonatomic) NSDictionary *externalRepresentation;
@property(retain, nonatomic) NSString *syncId;
- (void)setHost:(id)arg1;
- (void)upgradeAccountSpecificPropertiesOnAccount:(id)arg1 inStore:(id)arg2 parentAccount:(id)arg3;
- (_Bool)upgradeAccount;
@property(nonatomic) _Bool allowInsecureConnection;
@property(nonatomic) _Bool subscribedURLSanitized;
- (void)clearTmpICSData;
- (void)saveTmpICSData;
- (id)_tmpICSCalendarPath;
- (void)subCalValidationTask:(id)arg1 downloadProgressedTo:(long long)arg2 outOf:(long long)arg3;
- (void)subCalValidationTask:(id)arg1 finishedWithError:(id)arg2 calendarName:(id)arg3 document:(id)arg4 calendarData:(id)arg5;
- (void)quickValidate:(id)arg1;
- (void)discoverInitialPropertiesWithConsumer:(id)arg1;
- (void)_checkValidityWithConsumer:(id)arg1 quickValidate:(_Bool)arg2;
@property(readonly, nonatomic) DACoreDAVTaskManager *taskManager;
@property(readonly, nonatomic) NSString *calendarExternalId;
@property(retain, nonatomic) NSString *calDAVURLString;
@property(readonly, nonatomic) NSURL *subscriptionURL;
- (void)setAccountDescription:(id)arg1;
- (id)accountDescription;
- (_Bool)isSubscribedCalendarAccount;
- (id)initWithBackingAccountInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
