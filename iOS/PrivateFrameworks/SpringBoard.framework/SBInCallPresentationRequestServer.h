//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSInvalidatable-Protocol.h>
#import <SpringBoard/BSServiceConnectionListenerDelegate-Protocol.h>
#import <SpringBoard/SBSInCallPresentationClientToServerInterface-Protocol.h>

@class BSServiceConnectionListener, FBServiceClientAuthenticator, NSMutableArray, NSString;
@protocol OS_dispatch_queue, SBInCallPresentationRequestServerDelegate;

@interface SBInCallPresentationRequestServer : NSObject <BSServiceConnectionListenerDelegate, SBSInCallPresentationClientToServerInterface, BSInvalidatable>
{
    NSMutableArray *_targets;
    FBServiceClientAuthenticator *_clientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    NSObject<OS_dispatch_queue> *_queue;
    id <SBInCallPresentationRequestServerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SBInCallPresentationRequestServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)activate;
- (oneway void)presentWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)invalidate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
