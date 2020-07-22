//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NSExtensionRequestHandling-Protocol.h>

@class NEVPNProtocol, NSArray, NSString;

@interface NETunnelProvider <NSExtensionRequestHandling>
{
    _Bool _reasserting;
    _Bool _onDemandEnabled;
    NEVPNProtocol *_protocolConfiguration;
    NSArray *_appRules;
}

@property _Bool onDemandEnabled; // @synthesize onDemandEnabled=_onDemandEnabled;
@property(retain) NSArray *appRules; // @synthesize appRules=_appRules;
@property(retain) NEVPNProtocol *protocolConfiguration; // @synthesize protocolConfiguration=_protocolConfiguration;
- (void).cxx_destruct;
@property(readonly) long long routingMethod;
- (void)handleAppMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property _Bool reasserting;
- (void)setTunnelNetworkSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

