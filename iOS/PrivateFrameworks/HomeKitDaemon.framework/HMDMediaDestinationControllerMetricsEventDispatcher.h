//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent, NSString, NSUUID;
@protocol HMDMediaDestinationControllerMetricsEventDispatcherDataSource, HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationControllerMetricsEventDispatcher : HMFObject
{
    struct os_unfair_lock_s _lock;
    id <HMDMediaDestinationControllerMetricsEventDispatcherDataSource> _dataSource;
    NSUUID *_identifier;
    id <HMMLogEventSubmitting> _logEventSubmitter;
    HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent *_trackedStagedDestinationIdentifierEvent;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain) HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent *trackedStagedDestinationIdentifierEvent; // @synthesize trackedStagedDestinationIdentifierEvent=_trackedStagedDestinationIdentifierEvent;
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDMediaDestinationControllerMetricsEventDispatcherDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;
- (void)runDailyTask;
- (id)dataSourceIsTriggeredOnControllerDevice;
- (id)dataSourceDestinationTypeWithIdentifier:(id)arg1;
- (id)dataSourceCurrentDestinationType;
- (id)dataSourceCurrentUser;
- (id)dataSourceCurrentUserPrivilege;
- (void)submitDailySetDestinationEvent;
- (void)submitStagedDestinationIdentifierCommittedEventWithCommittedDestinationIdentifier:(id)arg1;
- (void)startStagedDestinationIdentifierCommittedEventWithStagedDestinationIdentifier:(id)arg1;
- (void)submitFailureEventWithEventErrorCode:(unsigned long long)arg1 error:(id)arg2;
- (void)submitTransactionUpdatedDestinationEventWithDestinationIdentifier:(id)arg1 existingDestinationIdentifier:(id)arg2;
- (void)submitReceivedUpdateDestinationRequestMessageEventWithDestinationIdentifier:(id)arg1 existingDestinationIdentifier:(id)arg2;
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2 dataSource:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

