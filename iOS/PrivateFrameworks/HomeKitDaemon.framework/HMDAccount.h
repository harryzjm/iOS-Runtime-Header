//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMerging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableSet, NSObject, NSString, NSUUID;
@protocol HMDAccountDelegate, OS_dispatch_queue;

@interface HMDAccount : HMFObject <HMFLogging, HMFMerging, NSSecureCoding>
{
    NSMutableSet *_devices;
    id <HMDAccountDelegate> _delegate;
    NSUUID *_identifier;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSString *_destination;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (id)shortDescription;
+ (_Bool)isValidAccountDestination:(id)arg1;
+ (id)iCloudAccountDestination;
+ (id)accountDestinationForDestination:(id)arg1;
+ (id)destinationForAccount:(id)arg1;
+ (id)identifierFromAddressDestination:(id)arg1 error:(id *)arg2;
+ (id)identifierFromAccount:(id)arg1 error:(id *)arg2;
+ (id)namespace;
+ (id)accountWithDestination:(id)arg1;
+ (void)initialize;
@property(readonly, copy, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDAccountDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)mergeObject:(id)arg1;
- (id)logIdentifier;
- (void)notifyDelegateOfUpdatedDevice:(id)arg1;
- (void)notifyDelegateRemovedDevice:(id)arg1;
- (void)removeDevice:(id)arg1;
- (void)notifyDelegateAddedDevice:(id)arg1;
- (void)addDevice:(id)arg1;
@property(readonly, nonatomic) NSArray *devices;
@property(readonly, nonatomic, getter=isCurrentAccount) _Bool currentAccount;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (id)initWithIdentifier:(id)arg1 destination:(id)arg2 devices:(id)arg3;
- (id)initWithIDSService:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end

