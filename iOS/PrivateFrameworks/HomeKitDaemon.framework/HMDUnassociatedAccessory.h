//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMAccessoryCategory, HMDAccessoryAdvertisement, HMFMessageDispatcher, NSData, NSNumber, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDUnassociatedAccessory : HMFObject
{
    NSUUID *_uuid;
    struct os_unfair_recursive_lock_s _lock;
    NSString *_name;
    HMAccessoryCategory *_category;
    NSString *_identifier;
    long long _associationOptions;
    HMDAccessoryAdvertisement *_accessoryAdvertisement;
    HMFMessageDispatcher *_messageDispatcher;
    NSData *_rootPublicKey;
    NSNumber *_nodeID;
    NSString *_serialNumber;
    NSUUID *_commissioningID;
    NSNumber *_vendorID;
    NSNumber *_productID;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (id)shortDescription;
+ (id)otherAccessoryCategory;
- (void).cxx_destruct;
@property(copy) NSNumber *productID; // @synthesize productID=_productID;
@property(copy) NSNumber *vendorID; // @synthesize vendorID=_vendorID;
@property(copy) NSUUID *commissioningID; // @synthesize commissioningID=_commissioningID;
@property(copy) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, copy) NSNumber *nodeID; // @synthesize nodeID=_nodeID;
@property(readonly, copy) NSData *rootPublicKey; // @synthesize rootPublicKey=_rootPublicKey;
@property(readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) HMDAccessoryAdvertisement *accessoryAdvertisement; // @synthesize accessoryAdvertisement=_accessoryAdvertisement;
@property(readonly) long long associationOptions; // @synthesize associationOptions=_associationOptions;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, setter=setUUID:) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)messageDestination;
- (id)logIdentifier;
- (void)associateWithAccessoryAdvertisement:(id)arg1;
- (void)identifyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleIdentify:(id)arg1;
@property(readonly, getter=isReachable) _Bool reachable;
- (void)updateCategoryWithCategoryIdentifier:(id)arg1;
@property(retain) HMAccessoryCategory *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_registerForMessages;
- (id)dumpDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1 additionalDescription:(id)arg2;
- (id)shortDescription;
- (_Bool)isEqual:(id)arg1;
@property(readonly, getter=isKnownToSystemCommissioner) _Bool knownToSystemCommissioner;
@property(readonly) _Bool supportsCHIP;
@property(readonly) unsigned long long transportTypes;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly) Class superclass;

@end

