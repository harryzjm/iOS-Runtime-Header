//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ECRemoteContentParser, EDRemoteContentPersistence, EFCancelationToken, EFLocked, EMRemoteContentURLSession, NSBackgroundActivityScheduler, NSDate, NSLock;
@protocol EDRemoteContentManagerTestDelegate, EFScheduler;

@interface EDRemoteContentManager : NSObject
{
    NSBackgroundActivityScheduler *_requestScheduler;
    id <EFScheduler> _unconditionalRequestScheduler;
    unsigned long long _remainingCountToSchedule;
    struct os_unfair_lock_s _requestSchedulerLock;
    ECRemoteContentParser *_remoteContentParser;
    struct os_unfair_lock_s _remoteContentParserLock;
    struct os_unfair_lock_s _timeoutLock;
    struct os_unfair_lock_s _schedulingLock;
    EFCancelationToken *_token;
    EFCancelationToken *_contentRuleListsObservationToken;
    EFLocked *_currentContentRuleLists;
    EFLocked *_remoteLinkVerificationTimes;
    EDRemoteContentPersistence *_remoteContentPersistence;
    EMRemoteContentURLSession *_urlSession;
    id <EFScheduler> _backgroundWorkScheduler;
    NSLock *_requestLock;
    unsigned long long _requestedSinceLastPrune;
    double _minimumTimeout;
    double _maximumTimeout;
    NSDate *_timeoutLastUpdate;
    double _requestInterval;
    unsigned long long _batchSize;
    NSDate *_schedulingLastUpdate;
    id <EDRemoteContentManagerTestDelegate> _testDelegate;
    CDUnknownBlockType _requestSchedulerBlock;
    unsigned long long _pruneFrequency;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long pruneFrequency; // @synthesize pruneFrequency=_pruneFrequency;
@property(copy, nonatomic) CDUnknownBlockType requestSchedulerBlock; // @synthesize requestSchedulerBlock=_requestSchedulerBlock;
@property(nonatomic) __weak id <EDRemoteContentManagerTestDelegate> testDelegate; // @synthesize testDelegate=_testDelegate;
@property(retain, nonatomic) NSDate *schedulingLastUpdate; // @synthesize schedulingLastUpdate=_schedulingLastUpdate;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(nonatomic) double requestInterval; // @synthesize requestInterval=_requestInterval;
@property(retain, nonatomic) NSDate *timeoutLastUpdate; // @synthesize timeoutLastUpdate=_timeoutLastUpdate;
@property(nonatomic) double maximumTimeout; // @synthesize maximumTimeout=_maximumTimeout;
@property(nonatomic) double minimumTimeout; // @synthesize minimumTimeout=_minimumTimeout;
@property(nonatomic) unsigned long long requestedSinceLastPrune; // @synthesize requestedSinceLastPrune=_requestedSinceLastPrune;
@property(readonly, nonatomic) NSLock *requestLock; // @synthesize requestLock=_requestLock;
@property(readonly, nonatomic) id <EFScheduler> backgroundWorkScheduler; // @synthesize backgroundWorkScheduler=_backgroundWorkScheduler;
@property(readonly, nonatomic) EMRemoteContentURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) EDRemoteContentPersistence *remoteContentPersistence; // @synthesize remoteContentPersistence=_remoteContentPersistence;
- (void)test_tearDown;
- (void)contentRuleListMangager:(id)arg1 didRemoveRuleList:(id)arg2;
- (void)contentRuleListMangager:(id)arg1 didUpdateContentRuleList:(id)arg2 oldContentRuleList:(id)arg3;
- (void)contentRuleListMangager:(id)arg1 didAddRuleList:(id)arg2;
- (void)_setRemoteContentRuleLists:(id)arg1;
@property(readonly, nonatomic) ECRemoteContentParser *remoteContentParser;
- (void)noteViewOfRemoteContentLinks:(id)arg1;
- (id)_viewDurationsFromBiome;
- (void)_updateTimeoutSettingDefaultIfNeeded:(_Bool)arg1;
- (double)_getTimeout;
- (void)_addRemoteContentLinks:(id)arg1 requiredParsing:(_Bool)arg2;
- (void)_addRemoteContentLinks:(id)arg1 andVerify:(_Bool)arg2 withHTMLData:(id)arg3 defaultCharsetName:(id)arg4;
- (void)addRemoteContentLinks:(id)arg1 andVerifyWithHTMLData:(id)arg2 defaultCharsetName:(id)arg3;
- (void)addRemoteContentLinks:(id)arg1;
- (_Bool)shouldVerifyRemoteLinks;
- (void)addRemoteContentLinksFromHTMLData:(id)arg1 defaultCharsetName:(id)arg2;
- (void)addRemoteContentLinksFromHTMLData:(id)arg1;
- (_Bool)shouldAddRemoteContentLinksForMessageWithDateReceived:(id)arg1;
- (_Bool)shouldAddRemoteContentLinksForMessage:(id)arg1 logMessage:(id *)arg2;
- (id)_requestSchedulerWithInterval:(double)arg1;
@property(readonly, nonatomic) id <EFScheduler> unconditionalRequestScheduler;
- (id)_issueAndWaitForBatch:(id)arg1 deferBlock:(CDUnknownBlockType)arg2 successful:(unsigned long long *)arg3 failed:(unsigned long long *)arg4 canceled:(unsigned long long *)arg5 deferred:(unsigned long long *)arg6;
- (unsigned long long)_performRequests:(unsigned long long)arg1 unconditionally:(_Bool)arg2 withDeferBlock:(CDUnknownBlockType)arg3 completedCount:(unsigned long long *)arg4;
- (unsigned long long)_requestRemoteLinksInBackground:(unsigned long long)arg1 unconditionally:(_Bool)arg2 hasMoreLinks:(_Bool *)arg3 deferBlock:(CDUnknownBlockType)arg4;
- (void)_scheduleRequestForLinks:(unsigned long long)arg1 unconditionally:(_Bool)arg2 withDelay:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_updateScheduling;
- (void)_scheduleBackgroundRequests;
- (void)scheduleRecurringActivity;
- (void)dealloc;
- (id)initWithRemoteContentPersistence:(id)arg1 contentRuleListManager:(id)arg2 urlSession:(id)arg3;

@end
