//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDModernTransportMessageContextManager, HMDRemoteMessageTransport, NSMutableOrderedSet, NSObject, NSString;
@protocol HMDDateProvider, HMDDeviceResidencyProvider, HMDTimerProvider, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDModernRemoteMessageTransport
{
    _Bool _started;
    _Bool _rapportLinkSlow;
    id <HMDDeviceResidencyProvider> _residencyProvider;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDRemoteMessageTransport *_rapportTransport;
    HMDRemoteMessageTransport *_idsTransport;
    HMDModernTransportMessageContextManager *_contextManager;
    id <HMDDateProvider> _systemDateProvider;
    id <HMDDateProvider> _idsDateProvider;
    id <HMDTimerProvider> _timerProvider;
    NSMutableOrderedSet *_messageIDDedupeBuffer;
}

+ (id)logCategory;
+ (id)timeToLiveHeaderKey;
+ (id)requestStartTimeHeaderKey;
- (void).cxx_destruct;
@property(nonatomic, getter=isRapportLinkSlow) _Bool rapportLinkSlow; // @synthesize rapportLinkSlow=_rapportLinkSlow;
@property(readonly, nonatomic) NSMutableOrderedSet *messageIDDedupeBuffer; // @synthesize messageIDDedupeBuffer=_messageIDDedupeBuffer;
@property(readonly, nonatomic) id <HMDTimerProvider> timerProvider; // @synthesize timerProvider=_timerProvider;
@property(readonly, nonatomic) id <HMDDateProvider> idsDateProvider; // @synthesize idsDateProvider=_idsDateProvider;
@property(readonly, nonatomic) id <HMDDateProvider> systemDateProvider; // @synthesize systemDateProvider=_systemDateProvider;
@property(readonly, nonatomic) HMDModernTransportMessageContextManager *contextManager; // @synthesize contextManager=_contextManager;
@property(readonly, nonatomic) HMDRemoteMessageTransport *idsTransport; // @synthesize idsTransport=_idsTransport;
@property(readonly, nonatomic) HMDRemoteMessageTransport *rapportTransport; // @synthesize rapportTransport=_rapportTransport;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(getter=isStarted) _Bool started; // @synthesize started=_started;
@property __weak id <HMDDeviceResidencyProvider> residencyProvider; // @synthesize residencyProvider=_residencyProvider;
- (void)configureWithHomeMembershipVerifier:(id)arg1;
- (void)transport:(id)arg1 idsIdentifier:(id)arg2 didAppearReachable:(_Bool)arg3;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)canSendMessage:(id)arg1;
- (id)start;
- (long long)qualityOfService;
- (_Bool)isSecure;
- (id)initWithAccountRegistry:(id)arg1 rapportTransport:(id)arg2 idsTransport:(id)arg3 contextManager:(id)arg4 systemDateProvider:(id)arg5 idsDateProvider:(id)arg6 timerProvider:(id)arg7;
- (id)initWithAccountRegistry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

