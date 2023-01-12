//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StatusKitAgentCore/SKAChannelManaging-Protocol.h>
#import <StatusKitAgentCore/SKAPushManagingDelegate-Protocol.h>

@class NSString;
@protocol SKAAccountProviding, SKAChannelManagingDelegate, SKAPushManaging;

@interface SKAChannelManager : NSObject <SKAPushManagingDelegate, SKAChannelManaging>
{
    id <SKAPushManaging> _pushManager;
    id <SKAAccountProviding> _accountProvider;
    id <SKAChannelManagingDelegate> _delegate;
}

+ (id)_jwtTokenNotFoundError;
+ (id)logger;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SKAChannelManagingDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SKAAccountProviding> accountProvider; // @synthesize accountProvider=_accountProvider;
@property(retain, nonatomic) id <SKAPushManaging> pushManager; // @synthesize pushManager=_pushManager;
- (void)pushManager:(id)arg1 failedToSubscribeToChannel:(id)arg2 withError:(id)arg3;
- (void)pushManager:(id)arg1 didReceiveData:(id)arg2 onChannel:(id)arg3 dateReceived:(id)arg4 dateExpired:(id)arg5;
- (id)_getJWTToken;
- (id)serverTime;
- (id)_createPayloadDataFromData:(id)arg1;
- (void)unsubscribeFromChannels:(id)arg1;
- (void)subscribeToChannels:(id)arg1;
- (void)activeChannelSubscriptionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)publishData:(id)arg1 onChannel:(id)arg2 withChannelToken:(id)arg3 publishInitiateTime:(id)arg4 isPendingPublish:(_Bool)arg5 isScheduledPublish:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)createChannelWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPushManager:(id)arg1 accountProvider:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
