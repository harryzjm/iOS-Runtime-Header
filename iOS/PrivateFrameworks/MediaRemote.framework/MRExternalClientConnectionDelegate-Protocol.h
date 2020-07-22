//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/NSObject-Protocol.h>

@class MRExternalClientConnection, MRProtocolMessage;

@protocol MRExternalClientConnectionDelegate <NSObject>

@optional
- (void)clientDidDisconnect:(MRExternalClientConnection *)arg1;
- (void)clientConnection:(MRExternalClientConnection *)arg1 didReceiveMessage:(MRProtocolMessage *)arg2;
@end

