//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection;

@interface CDPDaemonConnection : NSObject
{
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

- (void).cxx_destruct;
- (id)synchronousDaemonWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)daemonWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)daemon;
- (id)connection;
- (id)init;

@end
