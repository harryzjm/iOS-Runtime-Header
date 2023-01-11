//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSXPCListenerDelegate-Protocol.h>
#import <PhotosUI/PUEditingExtensionUndoButtonHost-Protocol.h>
#import <PhotosUI/PUEditingExtensionUndoTarget-Protocol.h>

@class NSString, NSXPCConnection, NSXPCListener, NSXPCListenerEndpoint;
@protocol PUEditingExtensionUndoButtonHost;

@interface PUEditingExtensionUndoProxyHostSide : NSObject <PUEditingExtensionUndoButtonHost, NSXPCListenerDelegate, PUEditingExtensionUndoTarget>
{
    id <PUEditingExtensionUndoButtonHost> _target;
    NSXPCListener *_listener;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(nonatomic) __weak id <PUEditingExtensionUndoButtonHost> target; // @synthesize target=_target;
- (void)performRedo;
- (void)performUndo;
- (void)setUndoEnabled:(_Bool)arg1 redoEnabled:(_Bool)arg2;
- (void)setShowUndoRedo:(_Bool)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)remoteObject;
@property(readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
