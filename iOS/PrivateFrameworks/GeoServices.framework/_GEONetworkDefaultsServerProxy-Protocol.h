//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@protocol _GEONetworkDefaultsServerProxyDelegate;

@protocol _GEONetworkDefaultsServerProxy <NSObject>
@property(nonatomic) __weak id <_GEONetworkDefaultsServerProxyDelegate> delegate;
- (void)updateNetworkDefaultsWithReason:(unsigned long long)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

