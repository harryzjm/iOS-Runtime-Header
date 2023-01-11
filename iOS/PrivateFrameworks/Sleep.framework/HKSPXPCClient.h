//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sleep/BSDescriptionProviding-Protocol.h>

@class NSString, NSXPCConnection;
@protocol HKSPClient;

@interface HKSPXPCClient : NSObject <BSDescriptionProviding>
{
    NSXPCConnection *_connection;
    id <HKSPClient> _clientLink;
    NSString *_clientIdentifier;
}

+ (id)clientForConnection:(id)arg1 clientIdentifierProvider:(id)arg2 clientLink:(id)arg3;
+ (id)clientForConnection:(id)arg1 clientLink:(id)arg2;
- (void).cxx_destruct;
@property(copy) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) id <HKSPClient> clientLink; // @synthesize clientLink=_clientLink;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) int processID;
- (id)initWithConnection:(id)arg1 clientIdentifierProvider:(id)arg2 clientLink:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
