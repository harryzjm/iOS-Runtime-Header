//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSServiceConnectionListenerDelegate-Protocol.h>
#import <SpringBoard/SBSFocusModesHomeScreenSettingsClientToServerInterface-Protocol.h>

@class BSServiceConnectionListener, FBServiceClientAuthenticator, NSMutableArray, NSString;
@protocol OS_dispatch_queue, SBFocusModesHomeScreenSettingsServerDelegate;

@interface SBFocusModesHomeScreenSettingsServer : NSObject <BSServiceConnectionListenerDelegate, SBSFocusModesHomeScreenSettingsClientToServerInterface>
{
    id <SBFocusModesHomeScreenSettingsServerDelegate> _delegate;
    FBServiceClientAuthenticator *_authenticator;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_connections;
    BSServiceConnectionListener *_listener;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BSServiceConnectionListener *listener; // @synthesize listener=_listener;
@property(readonly, copy, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) FBServiceClientAuthenticator *authenticator; // @synthesize authenticator=_authenticator;
@property(nonatomic) __weak id <SBFocusModesHomeScreenSettingsServerDelegate> delegate; // @synthesize delegate=_delegate;
- (oneway void)updateFocusModeHomeScreenSettingsWithRequest:(id)arg1;
- (oneway void)homeScreenSnapshotsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)activate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
