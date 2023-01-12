//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDOntologyDatabaseAvailabilityObserver-Protocol.h>
#import <HealthDaemon/HDProfileReadyObserver-Protocol.h>
#import <HealthDaemon/HDUserDomainConceptObserver-Protocol.h>

@class HDProfile, NSString;

@interface HDUserDomainConceptProcessingManager : NSObject <HDOntologyDatabaseAvailabilityObserver, HDProfileReadyObserver, HDUserDomainConceptObserver>
{
    struct os_unfair_lock_s _lock;
    long long _batchSize;
    _Bool _hasScheduledProcessing;
    _Bool _ignoresAutomaticProcessingTriggers;
    HDProfile *_profile;
    CDUnknownBlockType _unitTesting_userDomainConceptProcessingManagerDidFinishProcessing;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType unitTesting_userDomainConceptProcessingManagerDidFinishProcessing; // @synthesize unitTesting_userDomainConceptProcessingManagerDidFinishProcessing=_unitTesting_userDomainConceptProcessingManagerDidFinishProcessing;
@property(nonatomic) _Bool ignoresAutomaticProcessingTriggers; // @synthesize ignoresAutomaticProcessingTriggers=_ignoresAutomaticProcessingTriggers;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void)unitTesting_overrideDefaultBatchSize:(long long)arg1;
- (void)unitTesting_triggerUserDomainConceptProcessing;
- (void)userDomainConceptManager:(id)arg1 didJournalUserDomainConcepts:(id)arg2;
- (void)userDomainConceptManager:(id)arg1 didDeleteUserDomainConcepts:(id)arg2;
- (void)userDomainConceptManager:(id)arg1 didUpdateUserDomainConcepts:(id)arg2;
- (void)userDomainConceptManager:(id)arg1 didAddUserDomainConcepts:(id)arg2;
- (void)ontologyDatabase:(id)arg1 didBecomeAvailable:(_Bool)arg2;
- (void)profileDidBecomeReady:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
