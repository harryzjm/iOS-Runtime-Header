//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TKClientToken.h"

@class NSNumber, NSXPCConnection, NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface TKExtensionClientToken : TKClientToken
{
    NSXPCListenerEndpoint *_serverEndpoint;
    NSXPCConnection *_serverConnection;
    _Bool _namedConnection;
    NSNumber *_targetUID;
    long long _connectionIdentifier;
    NSXPCConnection *_tokenConnection;
}

+ (id)builtinTokenIDs;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSXPCConnection *tokenConnection; // @synthesize tokenConnection=_tokenConnection;
- (void)dealloc;
- (id)withError:(id *)arg1 invoke:(CDUnknownBlockType)arg2;
- (_Bool)ensureConnectionWithError:(id *)arg1;
- (id)SEPKeyEndpoint;
- (id)watcherEndpoint;
- (id)configurationEndpoint;
- (id)endpoint;
@property(readonly, nonatomic) NSXPCConnection *serverConnection;
- (id)initWithTokenID:(id)arg1 serverEndpoint:(id)arg2 targetUID:(id)arg3;

@end

