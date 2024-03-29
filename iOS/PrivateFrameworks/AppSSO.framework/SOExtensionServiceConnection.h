//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface SOExtensionServiceConnection : NSObject
{
    NSXPCConnection *_xpcConnection;
    NSXPCListenerEndpoint *_serviceXpcEndpoint;
}

- (void).cxx_destruct;
@property(retain) NSXPCListenerEndpoint *serviceXpcEndpoint; // @synthesize serviceXpcEndpoint=_serviceXpcEndpoint;
@property(retain) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)beginAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_connectToService;
- (id)initWithListenerEndpoint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

