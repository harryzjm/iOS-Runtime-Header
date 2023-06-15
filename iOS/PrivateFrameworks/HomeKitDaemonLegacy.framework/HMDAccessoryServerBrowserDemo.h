//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPAccessoryServerBrowser.h>

@class NSDictionary, NSMutableArray, NSObject;
@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessoryServerBrowserDemo : HAPAccessoryServerBrowser
{
    _Bool _accessoryPaired;
    id <HAPAccessoryServerBrowserDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableArray *_servers;
    NSDictionary *_demoData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool accessoryPaired; // @synthesize accessoryPaired=_accessoryPaired;
@property(retain, nonatomic) NSDictionary *demoData; // @synthesize demoData=_demoData;
@property(retain, nonatomic) NSMutableArray *servers; // @synthesize servers=_servers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HAPAccessoryServerBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_handleTestModeConfigRequest:(id)arg1 response:(id *)arg2;
- (id)_handleTestAccessoryReadValue:(id)arg1;
- (id)_handleTestAccessoryGenerateNotification:(id)arg1;
- (id)_handleTestAccessorySetReachability:(id)arg1;
- (id)_handleTestAccessorySetValue:(id)arg1 response:(id *)arg2;
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)resetDemoAccessory:(id)arg1;
- (void)appendDemoData:(id)arg1;
- (void)loadDemoData:(id)arg1 finalized:(_Bool)arg2;
- (void)discoverServer;
- (void)stopDiscoveringAccessoryServers;
- (void)startDiscoveringAccessoryServers;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (long long)linkType;

@end

