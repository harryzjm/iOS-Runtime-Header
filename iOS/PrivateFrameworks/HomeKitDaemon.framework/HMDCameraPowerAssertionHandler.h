//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraPowerAssertionHandler : HMFObject <HMFLogging>
{
    unsigned int _powerAssertion;
    NSMutableSet *_currentRequestHandlerSessionIDs;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)logCategory;
+ (id)sharedHandler;
@property(nonatomic) unsigned int powerAssertion; // @synthesize powerAssertion=_powerAssertion;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSMutableSet *currentRequestHandlerSessionIDs; // @synthesize currentRequestHandlerSessionIDs=_currentRequestHandlerSessionIDs;
- (void).cxx_destruct;
- (void)deregisterRemoteRequestHandler:(id)arg1;
- (void)registerRemoteRequestHandler:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

