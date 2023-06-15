//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMFMessageDispatcher, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDZone : HMFObject
{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_roomUUIDs;
    NSMutableDictionary *_currentRooms;
    NSString *_name;
    NSUUID *_uuid;
    NSUUID *_spiClientIdentifier;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHome *_home;
    HMFMessageDispatcher *_msgDispatcher;
}

+ (_Bool)hasMessageReceiverChildren;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy) NSUUID *spiClientIdentifier; // @synthesize spiClientIdentifier=_spiClientIdentifier;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)backingStoreObjects:(long long)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)updateZoneWithModel:(id)arg1 message:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)removeRoom:(id)arg1;
- (void)addRoomIfNotPresent:(id)arg1;
- (_Bool)_handleSetRoomsTransactionWithRoomUUIDStrings:(id)arg1 error:(id *)arg2;
- (void)_handleRename:(id)arg1;
- (void)_handleRemoveRoom:(id)arg1;
- (id)_checkForAddValidity:(id)arg1;
- (void)_handleAddRoom:(id)arg1;
- (void)_registerForMessages;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dumpState;
- (id)rooms;
@property(readonly, copy) NSArray *roomUUIDs;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)configure:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3 queue:(id)arg4;
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

