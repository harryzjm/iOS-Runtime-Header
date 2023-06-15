//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface HMDHomeKitCoreServer : HMFObject
{
    NSObject<OS_dispatch_queue> *_homekitCoreXPCQueue;
    NSObject<OS_xpc_object> *_homekitCoreXPCConnection;
    NSObject<OS_xpc_object> *_homekitCoreXPCStoreConnection;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_xpc_object> *homekitCoreXPCStoreConnection; // @synthesize homekitCoreXPCStoreConnection=_homekitCoreXPCStoreConnection;
@property(retain, nonatomic) NSObject<OS_xpc_object> *homekitCoreXPCConnection; // @synthesize homekitCoreXPCConnection=_homekitCoreXPCConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *homekitCoreXPCQueue; // @synthesize homekitCoreXPCQueue=_homekitCoreXPCQueue;
- (void)_handleXPCEvent:(id)arg1;
- (void)_startUpEmptyMachServices;
- (void)configureWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

