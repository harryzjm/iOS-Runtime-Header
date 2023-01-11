//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppSSO/SORemoteExtensionServiceProtocol-Protocol.h>

@class NSString, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SOExtensionServiceConnection : NSObject <SORemoteExtensionServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSXPCListenerEndpoint *_serviceXpcEndpoint;
}

@property(retain) NSXPCListenerEndpoint *serviceXpcEndpoint; // @synthesize serviceXpcEndpoint=_serviceXpcEndpoint;
@property(retain) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)beginAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_connectToService;
- (id)initWithListenerEndpoint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
