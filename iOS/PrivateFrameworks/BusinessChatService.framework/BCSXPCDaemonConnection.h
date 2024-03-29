//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol BCSXPCDaemonProtocol;

__attribute__((visibility("hidden")))
@interface BCSXPCDaemonConnection : NSObject
{
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)resume;
@property(readonly, retain) id <BCSXPCDaemonProtocol> remoteObjectProxy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

