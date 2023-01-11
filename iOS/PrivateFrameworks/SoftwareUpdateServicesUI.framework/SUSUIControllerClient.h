//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServicesUI/SUSUIControllerServerInterface-Protocol.h>

@class NSString, NSXPCConnection;

@interface SUSUIControllerClient : NSObject <SUSUIControllerServerInterface>
{
    NSXPCConnection *_serverConnection;
    _Bool _connected;
    _Bool _serverIsExiting;
}

- (void).cxx_destruct;
- (void)_noteServerExiting;
- (void)_noteConnectionDropped;
- (void)_connectToServerIfNecessary;
- (void)_invalidateConnection;
- (id)_remoteInterfaceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteInterface;
- (_Bool)createKeybagWithSecret:(id)arg1;
- (void)dealloc;
- (void)invalidate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

