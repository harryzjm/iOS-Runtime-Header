//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDDeviceSetupSessionInternal, HMDHomeManager, HMFActivity, NSObject, NSString, NSUUID;
@protocol HMDDeviceSetupSessionDelegate, OS_dispatch_queue;

@interface HMDDeviceSetupSession : HMFObject <HMFLogging, HMFMessageReceiver>
{
    HMFActivity *_activity;
    _Bool _open;
    id <HMDDeviceSetupSessionDelegate> _delegate;
    NSUUID *_identifier;
    HMDHomeManager *_homeManager;
    NSObject<OS_dispatch_queue> *_clientQueue;
    HMDDeviceSetupSessionInternal *_internal;
}

+ (id)logCategory;
+ (_Bool)isRoleSupported:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=isOpen) _Bool open; // @synthesize open=_open;
@property(readonly, nonatomic) HMDDeviceSetupSessionInternal *internal; // @synthesize internal=_internal;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDDeviceSetupSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (void)_sendRequestData:(id)arg1;
- (void)_handleReceiveData:(id)arg1;
- (void)_handleClose:(id)arg1;
- (void)_closeWithError:(id)arg1;
- (void)open;
- (void)__registerForMessages;
- (id)messageDispatcher;
- (id)messageDestination;
@property(readonly) long long role;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithIdentifier:(id)arg1 role:(long long)arg2 homeManager:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
