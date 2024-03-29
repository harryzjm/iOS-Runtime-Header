//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNUIContactsEnvironment, HKHealthStore, HKMedicalIDStore, NSMutableDictionary, _HKMedicalIDData;
@protocol CNScheduler;

__attribute__((visibility("hidden")))
@interface CNHealthStoreManager : NSObject
{
    int _healthNotificationToken;
    _Bool _needsFetching;
    _Bool _isListeningToChanges;
    HKHealthStore *_healthStore;
    HKMedicalIDStore *_medicalIDStore;
    CNUIContactsEnvironment *_environment;
    _HKMedicalIDData *_medicalIDData;
    id <CNScheduler> _workQueue;
    NSMutableDictionary *_medicalIDDataHandlers;
    id <CNScheduler> _stateLock;
}

+ (id)identifiersForContactMatchingEmergencyContacts:(id)arg1 contactStore:(id)arg2;
+ (CDUnknownBlockType)emergencyContactMatchingContact:(id)arg1;
+ (_Bool)shouldShowEmergencyContacts;
+ (id)descriptorForRequiredKeys;
+ (id)log;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <CNScheduler> stateLock; // @synthesize stateLock=_stateLock;
@property(readonly, nonatomic) NSMutableDictionary *medicalIDDataHandlers; // @synthesize medicalIDDataHandlers=_medicalIDDataHandlers;
@property(nonatomic) _Bool isListeningToChanges; // @synthesize isListeningToChanges=_isListeningToChanges;
@property(nonatomic) _Bool needsFetching; // @synthesize needsFetching=_needsFetching;
@property(readonly, nonatomic) id <CNScheduler> workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) _HKMedicalIDData *medicalIDData; // @synthesize medicalIDData=_medicalIDData;
@property(retain, nonatomic) CNUIContactsEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) HKMedicalIDStore *medicalIDStore; // @synthesize medicalIDStore=_medicalIDStore;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (id)createMedicalIDFromContact:(id)arg1;
- (void)startListeningForChanges;
- (void)notifyHandlersWithMedicalIDData:(id)arg1;
- (void)updateAndDispatchMedicalIDData;
- (void)unregisterHandlerForToken:(id)arg1;
- (id)registerMedicalIDDataHandler:(CDUnknownBlockType)arg1;
- (id)nts_lazyMedicalIDStore;
- (id)nts_lazyHealthStore;
- (void)dealloc;
- (id)initWithEnvironment:(id)arg1 healthStore:(id)arg2 medicalIDStore:(id)arg3;
- (id)initWithEnvironment:(id)arg1;

@end

