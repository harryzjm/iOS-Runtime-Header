//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersistentConnection/PCInterfaceUsabilityMonitorProtocol-Protocol.h>

@class CUTWeakReference, NSMutableArray, NSString;
@protocol OS_dispatch_queue, PCInterfaceUsabilityMonitorDelegate;

__attribute__((visibility("hidden")))
@interface PCInterfaceUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol>
{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    long long _interfaceIdentifier;
    NSString *_interfaceName;
    CUTWeakReference *_delegateReference;
    void *_reachability;
    _Bool _isInternetReachable;
    void *_dynamicStore;
    struct __CFRunLoopSource *_linkQualitySource;
    struct __CFString *_lqKey;
    int _linkQuality;
    _Bool _trackUsability;
    unsigned long long _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    NSMutableArray *_offTransitions;
}

+ (id)stringForLinkQuality:(int)arg1;
+ (_Bool)isBadLinkQuality:(int)arg1;
+ (_Bool)isPoorLinkQuality:(int)arg1;
- (void).cxx_destruct;
- (void)_createLinkQualityMonitor;
- (void)_createLinkQualityMonitorOnIvarQueue;
- (void)_dynamicStoreCallback:(id)arg1;
- (void)_dynamicStoreCallbackOnIvarQueue:(id)arg1;
- (void)_processLinkQualityUpdateOnIvarQueueWithUpdatedLinkQuality:(int)arg1;
- (void)_unscheduleLinkQualityMonitorOnIvarQueue;
- (void)_reachabilityCallbackOnIvarQueue:(unsigned int)arg1;
- (void)_reachabilityCallback:(unsigned int)arg1;
- (void)_createReachabilityMonitor;
- (void)_createReachabilityMonitorOnIvarQueue;
- (void)_unscheduleReachabilityMonitorOnIvarQueue;
- (void)_callDelegateOnIvarQueueWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) id <PCInterfaceUsabilityMonitorDelegate> delegate;
@property(readonly, nonatomic) long long interfaceIdentifier;
@property(readonly, nonatomic) _Bool isNetworkingPowerExpensiveToUse;
@property(readonly, nonatomic) _Bool isRadioHot;
@property(readonly, nonatomic) _Bool isInternetReachable;
@property(readonly, nonatomic) int linkQuality;
@property(readonly, nonatomic) _Bool isBadLinkQuality;
@property(readonly, nonatomic) _Bool isPoorLinkQuality;
@property(readonly, retain, nonatomic) NSString *linkQualityString;
@property(readonly, nonatomic) _Bool isInterfaceHistoricallyUsable;
- (_Bool)_isInterfaceHistoricallyUsableOnIvarQueue;
@property(readonly, nonatomic) _Bool isInterfaceUsable;
- (_Bool)_isInterfaceUsableOnIvarQueue;
- (void)setTrackedTimeInterval:(double)arg1;
- (void)setThresholdOffTransitionCount:(unsigned long long)arg1;
- (void)setTrackUsability:(_Bool)arg1;
- (void)_flushStaleTransitionsOnIvarQueue;
- (void)_updateOffTransitionsForLinkQualityChangeOnIvarQueue;
- (void)dealloc;
- (id)initWithInterfaceName:(id)arg1 interfaceIdentifier:(long long)arg2 delegateQueue:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) int currentRAT;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isLTEWithCDRX;
@property(readonly, nonatomic) NSString *networkCode;
@property(readonly) Class superclass;
@property(readonly, nonatomic) struct __CFString *wwanInterfaceName;

@end

