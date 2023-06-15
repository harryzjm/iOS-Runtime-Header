//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsUI2/NSObject-Protocol.h>

@protocol FCNetworkReachabilityObserving;

@protocol FCNetworkReachabilityType <NSObject>
@property(nonatomic) long long offlineReason;
@property(readonly, nonatomic) _Bool isCloudKitReachable;
@property(readonly, nonatomic) _Bool isNetworkReachable;
- (void)removeObserver:(id <FCNetworkReachabilityObserving>)arg1;
- (void)addObserver:(id <FCNetworkReachabilityObserving>)arg1;
@end

