//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AdCore/ADSingleton.h>

#import <AdID/ADOptInStatus_XPC-Protocol.h>
#import <AdID/BackgroundTaskDelegate-Protocol.h>
#import <AdID/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener;

@interface ADOptInStatusService : ADSingleton <NSXPCListenerDelegate, ADOptInStatus_XPC, BackgroundTaskDelegate>
{
    _Bool _requestInFlight;
    NSXPCListener *_listener;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool requestInFlight; // @synthesize requestInFlight=_requestInFlight;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
- (void).cxx_destruct;
- (void)checkOnTask:(id)arg1 activity:(id)arg2;
- (_Bool)runTask:(id)arg1;
- (void)doRunTask;
- (void)scheduleDeferredLATStatusChange:(_Bool)arg1;
- (id)optInStatusString:(long long)arg1;
- (void)advertisingIdentifierChanged:(CDUnknownBlockType)arg1;
- (long long)optInStatusFromRecord:(id)arg1;
- (void)requestOptInStatusFromJingle:(CDUnknownBlockType)arg1;
- (void)refreshOptInStatusRefreshingWeakToken:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)reconcileAndUpdateBeforeResponding:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)callOptInStatusCompletionHandler:(long long)arg1 refreshWeakToken:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setOptInStatus:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
