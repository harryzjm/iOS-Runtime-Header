//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTXPCServiceSubscriptionContext, CUTWeakReference, CoreTelephonyClient, NSString, PCInterfaceUsabilityMonitor;
@protocol OS_dispatch_queue, PCInterfaceUsabilityMonitorDelegate;

__attribute__((visibility("hidden")))
@interface PCWWANUsabilityMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_monitorDelegateQueue;
    CUTWeakReference *_delegateReference;
    _Bool _isInCall;
    _Bool _isInHighPowerState;
    _Bool _trackUsability;
    unsigned long long _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    NSString *_interfaceName;
    PCInterfaceUsabilityMonitor *_interfaceMonitor;
    int _currentRAT;
    unsigned int _currentDataBearerSoMask;
    int _powerlogCDRXToken;
    CoreTelephonyClient *_ctClient;
    int _wwanContextID;
    NSObject<OS_dispatch_queue> *_ctServerQueue;
    CTXPCServiceSubscriptionContext *_currentDataSimContext;
}

- (void).cxx_destruct;
- (void)interfaceReachabilityChanged:(id)arg1;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)_callDelegateOnIvarQueueWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) id <PCInterfaceUsabilityMonitorDelegate> delegate;
@property(readonly, nonatomic) _Bool isNetworkingPowerExpensiveToUse;
@property(readonly, nonatomic) _Bool isRadioHot;
@property(readonly, nonatomic) _Bool isBadLinkQuality;
@property(readonly, nonatomic) _Bool isPoorLinkQuality;
@property(readonly, retain, nonatomic) NSString *linkQualityString;
@property(readonly, nonatomic) _Bool isInternetReachable;
@property(readonly, nonatomic) _Bool isInterfaceHistoricallyUsable;
@property(readonly, nonatomic) _Bool isInterfaceUsable;
@property(readonly, nonatomic) int linkQuality;
@property(readonly, nonatomic) long long interfaceIdentifier;
- (void)setTrackedTimeInterval:(double)arg1;
- (void)setThresholdOffTransitionCount:(unsigned long long)arg1;
- (void)setTrackUsability:(_Bool)arg1;
- (void)_forwardConfigurationOnIvarQueue;
@property(readonly, nonatomic) struct __CFString *wwanInterfaceName;
@property(readonly, nonatomic) int currentRAT; // @synthesize currentRAT=_currentRAT;
- (id)_currentDataSimContext;
@property(readonly, nonatomic) NSString *networkCode;
@property(readonly, nonatomic) unsigned long long interface5GMode;
@property(readonly, nonatomic) _Bool isLTEWithCDRX;
- (_Bool)_isCurrentDataSimContextOnIvarQueue:(id)arg1;
- (void)_adjustInterfaceNameForWWANContextID:(int)arg1 interfaceName:(id)arg2 forContext:(id)arg3;
- (void)_setupWWANMonitor;
- (void)dealloc;
- (id)initWithDelegateQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

