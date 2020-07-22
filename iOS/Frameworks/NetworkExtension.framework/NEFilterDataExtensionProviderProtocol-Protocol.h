//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NEFilterExtensionProviderProtocol-Protocol.h>

@class NSDictionary, NSFileHandle;

@protocol NEFilterDataExtensionProviderProtocol <NEFilterExtensionProviderProtocol>
- (void)provideURLAppendStringMap:(NSDictionary *)arg1;
- (void)provideRemediationMap:(NSDictionary *)arg1;
- (void)handleRulesChanged;
- (void)providerControlSocketFileHandle:(NSFileHandle *)arg1;
- (void)fetchProviderConnectionWithCompletionHandler:(void (^)(NSXPCListenerEndpoint *))arg1;
@end
