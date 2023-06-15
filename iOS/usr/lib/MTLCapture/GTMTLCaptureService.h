//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTCaptureDescriptor, MTLCaptureDescriptorInternal, NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source, OS_os_log;

@interface GTMTLCaptureService : NSObject
{
    NSObject<OS_os_log> *_log;
    NSURL *_currentCaptureURL;
    MTLCaptureDescriptorInternal *_activeCaptureDesc;
    NSObject<OS_dispatch_semaphore> *_interposeSemaphore;
    NSMutableDictionary *_observerIdToObserver;
    unsigned long long _nextObserverId;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    GTCaptureDescriptor *_captureRequest;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void).cxx_destruct;
- (void)notifyCaptureRequest:(id)arg1;
- (void)notifyUnsupportedFenum:(id)arg1;
- (void)notifyCaptureProgress:(id)arg1;
- (void)notifyCaptureObjectsChanged:(id)arg1;
- (id)query:(id)arg1;
- (id)update:(id)arg1;
- (id)startWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deregisterObserver:(unsigned long long)arg1;
- (_Bool)hasObservers;
- (unsigned long long)registerObserver:(id)arg1;
- (void)stop;
- (void)waitForInterposeSignal;
- (void)signalInterposeSemaphore;
- (id)initWithGuestApp:(struct GTMTLGuestAppClient *)arg1;

@end

