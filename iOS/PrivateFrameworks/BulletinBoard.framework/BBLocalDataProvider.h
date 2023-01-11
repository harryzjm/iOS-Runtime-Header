//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol BBDataProvider, OS_dispatch_queue, OS_dispatch_source;

@interface BBLocalDataProvider
{
    NSObject<OS_dispatch_queue> *_localQueue;
    NSObject<OS_dispatch_queue> *_remoteQueue;
    id <BBDataProvider> _dataProvider;
    NSObject<OS_dispatch_source> *_watchdogTimer;
    _Bool _unresponsive;
    _Bool _invalidated;
}

+ (id)dataProviderWithDataProvider:(id)arg1 serverQueue:(id)arg2;
+ (id)dataProviderWithPrincipalClass:(Class)arg1 serverQueue:(id)arg2 initializationCompletion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) id <BBDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
- (void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)noteSectionInfoDidChange:(id)arg1;
- (void)reloadIdentityWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;
- (_Bool)canPerformMigration;
- (void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)_bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (void)_doAsynchronousRemoteRequest:(CDUnknownBlockType)arg1 conditionalOn:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_doSynchronousRemoteRequest:(CDUnknownBlockType)arg1 conditionalOn:(CDUnknownBlockType)arg2;
- (void)dataProviderDidLoad;
- (void)startWatchdog;
- (void)_watchdogFired;
- (void)_ping;
- (void)invalidate;
- (void)dealloc;
- (id)initWithPrincipalClass:(Class)arg1 serverQueue:(id)arg2 initializationCompletion:(CDUnknownBlockType)arg3;
- (id)initWithDataProvider:(id)arg1 serverQueue:(id)arg2;
- (id)_initWithDataProvider:(id)arg1 sectionID:(id)arg2 serverQueue:(id)arg3 initializationCompletion:(CDUnknownBlockType)arg4;

@end
