//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTMessageDelivery, NSDate, PDSRequest, PDSUserTracker;
@protocol OS_dispatch_queue, PDSRequestQueueDelegate;

@interface PDSRequestQueue : NSObject
{
    id <PDSRequestQueueDelegate> _delegate;
    PDSRequest *_inflightRequest;
    PDSRequest *_queuedRequest;
    NSObject<OS_dispatch_queue> *_queue;
    FTMessageDelivery *_messageDelivery;
    PDSUserTracker *_userTracker;
    CDUnknownBlockType _pushTokenBlock;
    long long _authRetries;
    NSDate *_lastReauthAttempt;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastReauthAttempt; // @synthesize lastReauthAttempt=_lastReauthAttempt;
@property(nonatomic) long long authRetries; // @synthesize authRetries=_authRetries;
@property(copy, nonatomic) CDUnknownBlockType pushTokenBlock; // @synthesize pushTokenBlock=_pushTokenBlock;
@property(retain, nonatomic) PDSUserTracker *userTracker; // @synthesize userTracker=_userTracker;
@property(retain, nonatomic) FTMessageDelivery *messageDelivery; // @synthesize messageDelivery=_messageDelivery;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) PDSRequest *queuedRequest; // @synthesize queuedRequest=_queuedRequest;
@property(retain, nonatomic) PDSRequest *inflightRequest; // @synthesize inflightRequest=_inflightRequest;
@property(nonatomic) __weak id <PDSRequestQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_logProtoUserPushToken:(id)arg1;
- (void)_logEntries:(id)arg1;
- (void)_reAuthAndContinueWithRequest:(id)arg1 forUser:(id)arg2;
- (_Bool)_isAuthIssue:(long long)arg1;
- (void)_flightRequest:(id)arg1;
- (id)_hwVersion;
- (id)_osVersion;
- (id)_machineID;
- (id)_deviceInfo;
- (void)_dequeueIfNeeded;
- (_Bool)enqueueRequest:(id)arg1;
- (id)initWithMessageDelivery:(id)arg1 userTracker:(id)arg2 queue:(id)arg3 pushTokenBlock:(CDUnknownBlockType)arg4;

@end
