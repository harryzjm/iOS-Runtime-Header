//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DACalDAV/CalDAVAccountPropertyRefreshDelegate-Protocol.h>
#import <DACalDAV/CalDAVCalendarPropertyRefreshDelegate-Protocol.h>
#import <DACalDAV/CalDAVCalendarSyncDelegate-Protocol.h>

@class CalDAVRefreshContext, CalDiagAccountSync, DATransaction, MobileCalDAVAccount, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_group;

@interface MobileCalDAVAccountRefreshActor : NSObject <CalDAVAccountPropertyRefreshDelegate, CalDAVCalendarPropertyRefreshDelegate, CalDAVCalendarSyncDelegate>
{
    DATransaction *_transaction;
    _Bool _shouldCancel;
    _Bool _didFinish;
    _Bool _refreshing;
    int _state;
    CalDAVRefreshContext *_context;
    MobileCalDAVAccount *_account;
    CDUnknownBlockType _completionBlock;
    NSMutableDictionary *_pathsToCTags;
    NSMutableDictionary *_pathsToSyncTokens;
    NSMutableArray *_calendarsToRefresh;
    NSObject<OS_dispatch_group> *_outstandingOperationGroup;
    NSMutableSet *_outstandingTaskGroups;
    NSMutableSet *_outstandingTasks;
    NSString *_calendarHomeSyncToken;
    CalDiagAccountSync *_accountSyncDiagnostics;
}

@property(retain, nonatomic) CalDiagAccountSync *accountSyncDiagnostics; // @synthesize accountSyncDiagnostics=_accountSyncDiagnostics;
@property(retain, nonatomic) NSString *calendarHomeSyncToken; // @synthesize calendarHomeSyncToken=_calendarHomeSyncToken;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableSet *outstandingTasks; // @synthesize outstandingTasks=_outstandingTasks;
@property(retain, nonatomic) NSMutableSet *outstandingTaskGroups; // @synthesize outstandingTaskGroups=_outstandingTaskGroups;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *outstandingOperationGroup; // @synthesize outstandingOperationGroup=_outstandingOperationGroup;
@property(retain, nonatomic) NSMutableArray *calendarsToRefresh; // @synthesize calendarsToRefresh=_calendarsToRefresh;
@property(retain, nonatomic) NSMutableDictionary *pathsToSyncTokens; // @synthesize pathsToSyncTokens=_pathsToSyncTokens;
@property(retain, nonatomic) NSMutableDictionary *pathsToCTags; // @synthesize pathsToCTags=_pathsToCTags;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(nonatomic) _Bool didFinish; // @synthesize didFinish=_didFinish;
@property(nonatomic) __weak MobileCalDAVAccount *account; // @synthesize account=_account;
@property(nonatomic) _Bool shouldCancel; // @synthesize shouldCancel=_shouldCancel;
@property(retain, nonatomic) CalDAVRefreshContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_sendResultToAccount;
- (void)_calendarCollectionsWereRefreshed;
- (void)calendarSyncForPrincipal:(id)arg1 calendar:(id)arg2 completedWithError:(id)arg3;
- (void)_syncCalendar:(id)arg1;
- (id)_refreshedSyncTokenForCalendar:(id)arg1;
- (id)_refreshedCtagForCalendar:(id)arg1;
- (void)_refreshRegularCalendars;
- (void)_refreshSpecialCalendars;
- (_Bool)_sendMoveForItem:(id)arg1;
- (void)_handleMoveTaskComplete:(id)arg1 moveItem:(id)arg2;
- (void)_clearMoveChange:(id)arg1;
- (void)_sendMoveTasks;
- (void)calendarRefreshForPrincipal:(id)arg1 completedWithNewCTags:(id)arg2 newSyncTokens:(id)arg3 calendarHomeSyncToken:(id)arg4 updatedCalendars:(id)arg5 error:(id)arg6;
- (void)_refreshCalendarProperties;
- (void)propertyRefreshForPrincipal:(id)arg1 completedWithError:(id)arg2;
- (void)_refreshAccountProperties;
- (void)refresh;
- (void)_waitForStateTransition;
- (_Bool)_refreshShouldContinue;
- (void)teardown;
- (void)cancelWithCompletion:(CDUnknownBlockType)arg1;
- (void)_teardownAllOutstandingOperations;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

