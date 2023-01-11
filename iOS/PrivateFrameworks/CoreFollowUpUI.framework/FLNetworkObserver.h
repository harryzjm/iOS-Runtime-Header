//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_nw_path_monitor;

@interface FLNetworkObserver : NSObject
{
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_invocationByObserver;
    _Bool _isNetworkReachable;
    _Bool _isWiFiEnabled;
}

+ (id)sharedNetworkObserver;
- (void).cxx_destruct;
- (void)removeNetworkReachableObserver:(id)arg1;
- (id)addNetworkReachableBlock:(CDUnknownBlockType)arg1;
- (void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2;
- (_Bool)_isWiFiEnabled;
@property(readonly) _Bool isNetworkReachable;
- (void)_networkReachabilityDidChange;
- (void)_stopPathMonitor;
- (void)_startPathMonitor;
@property(readonly) _Bool isAirplaneModeActiveWithoutWiFi;
- (void)disableAirplaneMode;
- (void)dealloc;
- (id)_init;
- (id)init;

@end
