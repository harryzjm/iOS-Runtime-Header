//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDModernTransportMessageContextOptions, HMDRemoteMessage, HMFMessageDestination, HMFTimer, NSMutableSet, NSSet, NSString, NSUUID;
@protocol HMDDateProvider, HMDTimerProvider;

__attribute__((visibility("hidden")))
@interface HMDModernTransportMessageContext : NSObject
{
    NSMutableSet *_remainingTransports;
    NSMutableSet *_inProgressTransports;
    _Bool _didSucceedSending;
    _Bool _didNotifyDeviceReachability;
    HMDModernTransportMessageContextOptions *_options;
    CDUnknownBlockType _completionHandler;
    id <HMDDateProvider> _dateProvider;
    id <HMDTimerProvider> _timerProvider;
    HMFTimer *_responseTimer;
    CDUnknownBlockType _responseCompletionBlock;
    HMFTimer *_fallbackTimer;
    CDUnknownBlockType _fallbackCompletionBlock;
    double _requestStartTime;
    HMDRemoteMessage *_message;
}

- (void).cxx_destruct;
@property(readonly) HMDRemoteMessage *message; // @synthesize message=_message;
@property double requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(copy) CDUnknownBlockType fallbackCompletionBlock; // @synthesize fallbackCompletionBlock=_fallbackCompletionBlock;
@property(retain) HMFTimer *fallbackTimer; // @synthesize fallbackTimer=_fallbackTimer;
@property(copy) CDUnknownBlockType responseCompletionBlock; // @synthesize responseCompletionBlock=_responseCompletionBlock;
@property(retain) HMFTimer *responseTimer; // @synthesize responseTimer=_responseTimer;
@property(readonly) id <HMDTimerProvider> timerProvider; // @synthesize timerProvider=_timerProvider;
@property(readonly) id <HMDDateProvider> dateProvider; // @synthesize dateProvider=_dateProvider;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) _Bool didNotifyDeviceReachability; // @synthesize didNotifyDeviceReachability=_didNotifyDeviceReachability;
@property(readonly, nonatomic) _Bool didSucceedSending; // @synthesize didSucceedSending=_didSucceedSending;
@property(readonly, copy, nonatomic) NSSet *inProgressTransports; // @synthesize inProgressTransports=_inProgressTransports;
@property(readonly, copy, nonatomic) NSSet *remainingTransports; // @synthesize remainingTransports=_remainingTransports;
@property(readonly, nonatomic) HMDModernTransportMessageContextOptions *options; // @synthesize options=_options;
- (void)timerDidFire:(id)arg1;
- (void)done;
- (void)startTransportFallbackTimerWithTimeInterval:(double)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startResponseTimerWithTimeInterval:(double)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (double)timeoutRemaining;
- (id)preparedMessageWithTimeout:(double)arg1;
- (void)completeSendingOverTransport:(id)arg1 withError:(id)arg2;
- (void)startSendingOverTransport:(id)arg1;
@property(readonly, nonatomic) _Bool expectsResponse;
@property(readonly, nonatomic) double timeout;
@property(readonly, nonatomic) HMFMessageDestination *destination;
@property(readonly, nonatomic) NSUUID *messageID;
@property(readonly, nonatomic) NSUUID *identifier;
- (id)initWithMessage:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 dateProvider:(id)arg4 timerProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

