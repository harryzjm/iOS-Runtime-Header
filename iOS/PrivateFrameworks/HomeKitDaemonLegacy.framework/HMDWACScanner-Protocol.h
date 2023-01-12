//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HAPAccessoryServerBrowserIP, NSObject;
@protocol HMDWACScannerDelegate, OS_dispatch_queue;

@protocol HMDWACScanner
- (void)startDiscoveringAirPlayAccessoriesWithBrowser:(HAPAccessoryServerBrowserIP *)arg1;
- (void)resume;
- (void)backoff;
- (void)stop;
- (void)start;
- (void)setDelegate:(id <HMDWACScannerDelegate>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
@end

