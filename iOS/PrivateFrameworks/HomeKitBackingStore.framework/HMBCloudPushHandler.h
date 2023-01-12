//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/HMBAPSConnectionDelegate-Protocol.h>
#import <HomeKitBackingStore/HMFLogging-Protocol.h>

@class NSHashTable, NSString;
@protocol HMBAPSConnection;

@interface HMBCloudPushHandler : HMFObject <HMBAPSConnectionDelegate, HMFLogging>
{
    struct os_unfair_lock_s _lock;
    struct os_unfair_lock_s _apsLock;
    id <HMBAPSConnection> _apsConnection;
    NSHashTable *_observers;
}

+ (id)logCategory;
+ (id)sharedHandlerForEnvironment:(id)arg1;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)initWithAPSConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
