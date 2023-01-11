//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSUtility/TSUNetworkReachabilityCore-Protocol.h>

@class NSString;

@interface TSUSCNetworkReachabilityCore : NSObject <TSUNetworkReachabilityCore>
{
    struct __SCNetworkReachability *_reachabilityRef;
    CDUnknownBlockType _notifyBlock;
}

- (void).cxx_destruct;
- (void)stopNotifying;
- (_Bool)startNotifyingWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)getReachabilityFlags:(out unsigned int *)arg1;
- (void)dealloc;
- (id)initWithReachabilityRef:(const struct __SCNetworkReachability *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
