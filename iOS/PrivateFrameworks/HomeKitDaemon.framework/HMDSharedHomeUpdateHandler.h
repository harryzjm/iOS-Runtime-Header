//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDSharedHomeUpdateSessionDelegate-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDHome, HMDSharedHomeUpdateSession, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDSharedHomeUpdateHandler : HMFObject <HMDSharedHomeUpdateSessionDelegate, HMFLogging, HMFDumpState, NSSecureCoding>
{
    _Bool _pendingRequestDataFromResident;
    _Bool _firstFetchComplete;
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSMutableArray *_currentResidentDevices;
    HMDSharedHomeUpdateSession *_pendingRequestDataFromResidentSession;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
@property(retain, nonatomic) HMDSharedHomeUpdateSession *pendingRequestDataFromResidentSession; // @synthesize pendingRequestDataFromResidentSession=_pendingRequestDataFromResidentSession;
@property(retain, nonatomic) NSMutableArray *currentResidentDevices; // @synthesize currentResidentDevices=_currentResidentDevices;
@property(nonatomic) _Bool firstFetchComplete; // @synthesize firstFetchComplete=_firstFetchComplete;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)didCompleteHomeUpdateSession:(id)arg1 withError:(id)arg2;
- (void)pendingRequestFromResidentChanged;
@property(nonatomic) _Bool pendingRequestDataFromResident; // @synthesize pendingRequestDataFromResident=_pendingRequestDataFromResident;
- (void)requestDataSync;
- (void)_receivedHomeDataFromSourceVersion:(id)arg1;
- (void)receivedHomeDataFromSourceVersion:(id)arg1;
- (void)_requestDataFromResident:(id)arg1 currentUser:(id)arg2;
- (void)_startRequestForDataSync;
- (void)_evaluateNeedForSync;
- (void)reevaluateNeedForSync;
- (void)_updateResidents;
- (void)handleHomeDataFetchedNotification:(id)arg1;
- (void)residentsChanged:(id)arg1;
- (id)logIdentifier;
- (void)registerForMessages;
- (void)configureWithHome:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

