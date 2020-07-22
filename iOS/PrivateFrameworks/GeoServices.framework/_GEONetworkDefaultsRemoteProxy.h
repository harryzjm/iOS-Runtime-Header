//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEONetworkDefaultsServerProxy-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, _GEONetworkDefaultsServerProxyDelegate;

__attribute__((visibility("hidden")))
@interface _GEONetworkDefaultsRemoteProxy : NSObject <_GEONetworkDefaultsServerProxy>
{
    id <_GEONetworkDefaultsServerProxyDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_isolation;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSMutableArray *_updateCompletionHandlers;
    int _configChangedToken;
}

@property(nonatomic) __weak id <_GEONetworkDefaultsServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateNetworkDefaults:(CDUnknownBlockType)arg1;
- (void)_networkDefaultsDidChange;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

