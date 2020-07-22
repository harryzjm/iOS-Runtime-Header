//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock;

@interface GEONetworkObserver : NSObject
{
    NSLock *_lock;
    unsigned int _networkReachability;
    struct __SCNetworkReachability *_networkReach;
    _Bool _initialized;
    _Bool _networkNotified;
    _Bool _networkReachable;
}

+ (id)sharedNetworkObserver;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
- (_Bool)isCellConnection;
- (void)removeNetworkReachableObserver:(id)arg1;
- (void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2;
- (_Bool)isConnectionRequired;
- (_Bool)isNetworkReachable;
- (void)_networkReachableFirstCallBack:(id)arg1;
- (void)initializeIfNecessary;
- (void)_networkReachableCallBack:(unsigned int)arg1;
- (void)_networkObserversInitialize;
- (void)dealloc;
- (id)init;

@end

