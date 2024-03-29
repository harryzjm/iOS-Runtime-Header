//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeAdministratorHandler, NSObject, NSString, NSUUID;
@protocol HMFMessageReceiver, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __HMDHomeAdministratorReceiver : HMFObject
{
    id <HMFMessageReceiver> _receiver;
    HMDHomeAdministratorHandler *_handler;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) __weak HMDHomeAdministratorHandler *handler; // @synthesize handler=_handler;
@property(readonly) __weak id <HMFMessageReceiver> receiver; // @synthesize receiver=_receiver;
- (id)logIdentifier;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)__handleXPCMessage:(id)arg1;
- (void)registerForMessage:(id)arg1 policies:(id)arg2;
- (id)shortDescription;
- (void)dealloc;
- (id)initWithReceiver:(id)arg1 handler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly) Class superclass;

@end

