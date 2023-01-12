//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableDictionary, NSNumber, NSString, RTCReporting, VCAggregator;
@protocol OS_dispatch_queue, OS_nw_activity, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface RTCReportingAgent : NSObject
{
    unsigned int _callID;
    RTCReporting *_reportingObject;
    void *_symptomReporter;
    NSObject<OS_dispatch_queue> *_reportingQueue;
    NSArray *_backends;
    VCAggregator *_aggregator;
    struct os_unfair_lock_s _aggregatorLock;
    int _clientType;
    NSString *_serviceName;
    int _nextUnassignedReportingModuleID;
    NSMutableDictionary *_userInfoMap;
    _Bool _forceDisableABC;
    NSObject<OS_nw_activity> *_nwActivity;
    NSDate *_conversationTimeBase;
    NSObject<OS_os_transaction> *_transaction;
    NSNumber *_subSessionId;
}

@property NSNumber *subSessionId; // @synthesize subSessionId=_subSessionId;
@property(copy) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(getter=isABCForceDisabled) _Bool forceDisableABC; // @synthesize forceDisableABC=_forceDisableABC;
@property(readonly) NSMutableDictionary *userInfoMap; // @synthesize userInfoMap=_userInfoMap;
@property int clientType; // @synthesize clientType=_clientType;
@property(readonly) VCAggregator *aggregator; // @synthesize aggregator=_aggregator;
@property(copy) NSArray *backends; // @synthesize backends=_backends;
@property(readonly) NSObject<OS_dispatch_queue> *reportingQueue; // @synthesize reportingQueue=_reportingQueue;
@property(readonly) RTCReporting *reportingObject; // @synthesize reportingObject=_reportingObject;
- (int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2;
- (void)reportingSetReportCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;
- (void)reportingSymptom:(unsigned int)arg1 withOptionalDict:(struct __CFDictionary *)arg2;
- (void)sendAggregatedSessionReport;
- (unsigned short)reportingSessionTypeForClientType:(int)arg1;
- (unsigned short)reportingSessionMethodForClientType:(int)arg1;
- (void)sendAggregatedCallReport;
- (unsigned short)reportingCallMethodForClientType:(int)arg1;
- (void)releaseReportingObject;
- (void)didSendMessageForReportingClient:(id)arg1 event:(id)arg2;
- (void)reportQR:(id)arg1;
- (void)report:(id)arg1 segmentDirection:(int)arg2;
- (unsigned short)reportingSegmentMethodForClientType:(int)arg1;
- (void)reportingSetNetworkActivityReportingEnabled:(_Bool)arg1;
- (void)initAdaptiveLearningWithParameters:(id)arg1;
- (_Bool)sendMessageWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3 error:(id *)arg4;
- (void)sendMessageWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3;
- (void)finalizeAggregation;
- (void)setAggregatorForClientType:(int)arg1;
- (id)newAggregatorForClientType:(int)arg1 nwActivity:(id)arg2;
- (void)dealloc;
- (id)initWithConfig:(CDStruct_48bb2f2d)arg1;
- (id)deriveFromParentHierarchyToken:(id)arg1;
@property(readonly) int nextUnassignedReportingModuleID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

