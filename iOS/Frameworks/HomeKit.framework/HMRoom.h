//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMMutableApplicationData-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMApplicationData, HMDelegateCaller, HMFMessageDispatcher, HMHome, NSArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMRoom : NSObject <NSSecureCoding, HMFMessageReceiver, HMObjectMerge, HMMutableApplicationData>
{
    NSUUID *_uniqueIdentifier;
    NSString *_name;
    NSUUID *_uuid;
    HMHome *_home;
    HMApplicationData *_applicationData;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDelegateCaller *_delegateCaller;
    HMFMessageDispatcher *_msgDispatcher;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_invalidate;
- (void)_unconfigure;
- (void)_configure:(id)arg1 uuid:(id)arg2 messageDispatcher:(id)arg3 clientQueue:(id)arg4 delegateCaller:(id)arg5;
- (void)_updateRoomName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleRoomRenamedNotification:(id)arg1;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;
- (void)setApplicationData:(id)arg1;
@property(readonly, nonatomic) HMApplicationData *applicationData; // @synthesize applicationData=_applicationData;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy, nonatomic) NSArray *accessories;
- (void)setName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

