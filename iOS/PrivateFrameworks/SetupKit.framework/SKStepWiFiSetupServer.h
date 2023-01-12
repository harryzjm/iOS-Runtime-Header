//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SetupKit/CULabelable-Protocol.h>
#import <SetupKit/SKStepable-Protocol.h>

@class CUBonjourAdvertiser, CUReachabilityMonitor, NSData, NSDictionary, NSError, NSString;
@protocol CUMessaging, OS_dispatch_queue, OS_dispatch_source;

@interface SKStepWiFiSetupServer : NSObject <CULabelable, SKStepable>
{
    _Bool _activateCalled;
    CUBonjourAdvertiser *_bonjourAdvertiser;
    NSObject<OS_dispatch_source> *_bonjourTimeoutTimer;
    _Bool _internetReachabilityEnabled;
    CUReachabilityMonitor *_internetReachabilityMonitor;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    double _metricTotalSeconds;
    CDUnknownBlockType _responseHandler;
    int _runState;
    NSDictionary *_scanResult;
    unsigned long long _startTicks;
    _Bool _stepDone;
    NSError *_stepError;
    struct LogCategory *_ucat;
    int _wifiChannel;
    _Bool _wifiDirected;
    id _wifiEAPConfig;
    id _wifiEAPTrustExceptions;
    _Bool _wifiHomeNetwork;
    NSString *_wifiPassword;
    NSData *_wifiPSK;
    NSString *_wifiSSID;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    CDUnknownBlockType _skCompletionHandler;
    id <CUMessaging> _skMessaging;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <CUMessaging> skMessaging; // @synthesize skMessaging=_skMessaging;
@property(copy, nonatomic) CDUnknownBlockType skCompletionHandler; // @synthesize skCompletionHandler=_skCompletionHandler;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_runInternetReachabilityStart;
- (void)_runJoinStart:(int)arg1;
- (void)_runScanResults:(id)arg1 error:(id)arg2 channel:(int)arg3;
- (void)_runScanStart:(int)arg1;
- (void)_run;
- (void)_handleRequestWiFiSetup:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleRequestBonjourTestDone:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleRequestBonjourTestStart:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_completeWithError:(id)arg1;
- (void)_invalidated;
- (void)invalidate;
- (void)_activate;
- (void)activate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
