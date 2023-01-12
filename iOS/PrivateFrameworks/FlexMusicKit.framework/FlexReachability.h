//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface FlexReachability : NSObject
{
    _Bool _isNotifying;
    _Bool localWiFiRef;
    struct __SCNetworkReachability *reachabilityRef;
    NSObject<OS_dispatch_queue> *_reachabilityQueue;
}

+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reachabilityQueue; // @synthesize reachabilityQueue=_reachabilityQueue;
- (long long)currentReachabilityStatus;
- (_Bool)interventionRequired;
- (_Bool)connectionRequired;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;
- (void)dealloc;
- (void)stopNotifier;
- (_Bool)startNotifier;
- (id)init;

@end

