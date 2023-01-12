//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMFNetMonitor.h"

@class HMFNetAddress, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __HMFNetAddressMonitor : HMFNetMonitor
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _currentNetworkFlags;
    HMFNetAddress *_netAddress;
    struct __SCNetworkReachability *_networkReachabilityRef;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int currentNetworkFlags; // @synthesize currentNetworkFlags=_currentNetworkFlags;
@property(readonly, nonatomic) struct __SCNetworkReachability *networkReachabilityRef; // @synthesize networkReachabilityRef=_networkReachabilityRef;
- (id)netAddress;
- (id)logIdentifier;
- (void)handleNetworkReachabilityChange:(unsigned int)arg1;
- (unsigned long long)reachabilityPath;
- (id)attributeDescriptions;
- (id)shortDescription;
- (void)dealloc;
- (id)initWithNetAddress:(id)arg1;
- (id)init;
- (id)initWithNetService:(id)arg1;

@end

