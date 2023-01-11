//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection, NSXPCInterface;

@interface MSXPCService : NSObject
{
    NSLock *_lock;
    NSXPCInterface *_remoteObjectInterface;
    NSXPCConnection *_connection;
    _Bool _shouldLaunchMobileMail;
}

+ (id)remoteProxyForXPCInterface:(id)arg1 shouldLaunchMobileMail:(_Bool)arg2 connectionErrorHandler:(CDUnknownBlockType)arg3;
+ (id)remoteProxyForXPCInterface:(id)arg1 connectionErrorHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldLaunchMobileMail; // @synthesize shouldLaunchMobileMail=_shouldLaunchMobileMail;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (id)newConnectionForInterface:(id)arg1;
- (id)connection;
- (void)dealloc;
- (id)initWithRemoteObjectInterface:(id)arg1;
- (id)init;

@end
