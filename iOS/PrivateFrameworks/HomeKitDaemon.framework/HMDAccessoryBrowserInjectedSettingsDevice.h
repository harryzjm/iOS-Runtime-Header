//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDAccessoryBrowserInjectedSettings-Protocol.h>

@protocol OS_dispatch_queue;

@interface HMDAccessoryBrowserInjectedSettingsDevice : NSObject <HMDAccessoryBrowserInjectedSettings>
{
    NSObject<OS_dispatch_queue> *queue;
}

- (void).cxx_destruct;
- (id)createAuthServerWithDelegate:(id)arg1;
- (id)createRelayAccessoryBrowser;
- (id)createBtleAccessoryBrowser;
- (id)createIpAccessoryBrowser;
- (id)workQueue;
- (id)init;

@end
