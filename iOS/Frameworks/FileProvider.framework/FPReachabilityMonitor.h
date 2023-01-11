//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSNumber;
@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPReachabilityMonitor : NSObject
{
    NSHashTable *_reachabilityObservers;
    struct __SCNetworkReachability *_reachabilityRef;
    unsigned int _reachabilityFlags;
    NSObject<OS_dispatch_queue> *_queue;
    id <NSObject> _accountDidChangeNotificationObserver;
    NSNumber *_isCellularEnabledForDocumentsAndData;
}

+ (id)_notifAccountStore;
+ (id)sharedReachabilityMonitor;
+ (_Bool)isNetworkReachableForFlags:(unsigned int)arg1;
@property(nonatomic) unsigned int reachabilityFlags; // @synthesize reachabilityFlags=_reachabilityFlags;
- (void).cxx_destruct;
- (void)invalidate;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)isNetworkReachableForBundle:(id)arg1;
- (_Bool)isCellularAllowedForBR;
- (void)_accountDidChange;
- (void)dealloc;
- (id)init;

@end

