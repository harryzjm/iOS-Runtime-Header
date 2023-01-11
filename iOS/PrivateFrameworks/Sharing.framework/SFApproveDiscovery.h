//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SFDeviceDiscovery;
@protocol OS_dispatch_queue;

@interface SFApproveDiscovery : NSObject
{
    _Bool _activateCalled;
    CDUnknownBlockType _activateHandler;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    SFDeviceDiscovery *_deviceDiscovery;
    struct NSMutableDictionary *_deviceDictionary;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _invalidationHandler;
    NSArray *_devices;
}

@property(retain, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_discoveryLostDevice:(id)arg1;
- (void)_discoveryDeviceChanged:(id)arg1;
- (void)_discoveryFoundDevice:(id)arg1;
- (void)_discoveryEnsureStopped;
- (void)_discoveryEnsureStarted;
- (void)_invalidated;
- (void)invalidate;
- (void)_activatedWithError:(id)arg1;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end
