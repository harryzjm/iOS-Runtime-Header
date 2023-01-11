//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSXPCListenerDelegate-Protocol.h>

@class NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue, RERemoteTrainingClientListenerDelegate;

@interface RERemoteTrainingClientListener : NSObject <NSXPCListenerDelegate>
{
    NSMutableSet *_clients;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
    id <RERemoteTrainingClientListenerDelegate> _delegate;
}

@property(nonatomic) __weak id <RERemoteTrainingClientListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
