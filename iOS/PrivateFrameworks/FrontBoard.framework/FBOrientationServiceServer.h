//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSServiceFacility.h>

@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface FBOrientationServiceServer : FBSServiceFacility
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_interestedClients;
    long long _interfaceOrientation;
}

- (void).cxx_destruct;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;
- (id)_prerequisiteMilestones;
- (void)_queue_handleRequestActiveOrientation:(id)arg1 fromClient:(id)arg2;
- (void)_queue_handleRegisterOrientationInterest:(id)arg1 fromClient:(id)arg2;
- (void)_queue_updateInterest:(unsigned int)arg1 forClient:(id)arg2;
- (void)noteInterfaceOrientationChanged:(long long)arg1 animationSettings:(id)arg2 direction:(long long)arg3;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2;
- (id)init;

@end

