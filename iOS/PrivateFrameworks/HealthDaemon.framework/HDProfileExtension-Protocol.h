//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDXPCClient, NSXPCListenerEndpoint;

@protocol HDProfileExtension <NSObject>

@optional
- (void)prepareForObliteration;
- (NSXPCListenerEndpoint *)listenerEndpointForClient:(HDXPCClient *)arg1 error:(id *)arg2;
@end

