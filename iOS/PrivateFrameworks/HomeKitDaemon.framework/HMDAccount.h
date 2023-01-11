//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreModelBackedObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMerging-Protocol.h>
#import <HomeKitDaemon/NSFastEnumeration-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class CNContact, HMDAccountHandle, HMDAccountIdentifier, HMFUnfairLock, NSArray, NSMutableSet, NSObject, NSSet, NSString, NSUUID;
@protocol HMDAccountManager, OS_dispatch_queue;

@interface HMDAccount : HMFObject <HMFLogging, HMFMerging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, NSFastEnumeration, NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    HMFUnfairLock *_lock;
    NSSet *_handles;
    NSMutableSet *_devices;
    HMDAccountIdentifier *_identifier;
    id <HMDAccountManager> _manager;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (id)accountWithHandle:(id)arg1;
+ (id)accountWithDestination:(id)arg1;
@property __weak id <HMDAccountManager> manager; // @synthesize manager=_manager;
@property(readonly, copy) HMDAccountIdentifier *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)modelBackedObjects;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
@property(readonly, nonatomic) NSUUID *modelParentIdentifier;
@property(readonly, nonatomic) NSUUID *modelIdentifier;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)mergeObject:(id)arg1;
- (_Bool)shouldMergeObject:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)logIdentifier;
- (void)__notifyDelegateUpdatedDevice:(id)arg1;
- (void)removeDevice:(id)arg1;
- (void)addDevice:(id)arg1;
- (id)deviceWithModelIdentifier:(id)arg1;
- (id)deviceForHandle:(id)arg1;
- (id)deviceForIdentifier:(id)arg1;
@property(readonly, copy) NSArray *devices;
@property(readonly, copy) NSString *destination;
- (id)accountHandleWithModelIdentifier:(id)arg1;
- (void)removeHandle:(id)arg1;
- (void)addHandle:(id)arg1;
- (void)setHandles:(id)arg1;
@property(readonly, copy) HMDAccountHandle *primaryHandle;
@property(readonly, copy) NSArray *handles;
@property(readonly, copy) CNContact *contact;
@property(readonly, copy) NSString *name;
@property(readonly) _Bool shouldCache;
@property(readonly, getter=isAuthenticated) _Bool authenticated;
- (id)attributeDescriptions;
- (id)shortDescription;
- (_Bool)isRelatedToAccount:(id)arg1;
- (_Bool)isEqualToAccount:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithObjectModel:(id)arg1;
- (id)initWithIdentifier:(id)arg1 handles:(id)arg2 devices:(id)arg3;
- (id)init;
- (id)currentDevice;
@property(readonly, getter=isCurrentAccount) _Bool currentAccount;
@property(readonly, copy) NSArray *identities;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

