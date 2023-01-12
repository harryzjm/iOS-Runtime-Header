//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/SPLocationFetchClientXPCProtocol-Protocol.h>

@class FMXPCSession, NSString, SPLocationFetchContext;
@protocol SPOwnerSessionXPCProtocol;

__attribute__((visibility("hidden")))
@interface SPOwnerSessionLocationFetch : NSObject <SPLocationFetchClientXPCProtocol>
{
    FMXPCSession *_session;
    id <SPOwnerSessionXPCProtocol> _proxy;
    CDUnknownBlockType _locationUpdates;
    CDUnknownBlockType _locationFetchSessionInvalidationBlock;
    unsigned long long _retryCount;
    SPLocationFetchContext *_lastContext;
}

+ (id)remoteInterface;
+ (id)exportedInterface;
- (void).cxx_destruct;
@property(copy, nonatomic) SPLocationFetchContext *lastContext; // @synthesize lastContext=_lastContext;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(copy, nonatomic) CDUnknownBlockType locationFetchSessionInvalidationBlock; // @synthesize locationFetchSessionInvalidationBlock=_locationFetchSessionInvalidationBlock;
@property(copy, nonatomic) CDUnknownBlockType locationUpdates; // @synthesize locationUpdates=_locationUpdates;
@property(retain, nonatomic) id <SPOwnerSessionXPCProtocol> proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) FMXPCSession *session; // @synthesize session=_session;
- (void)setInvalidationBlock:(CDUnknownBlockType)arg1;
- (void)locationForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)unsubscribeLocationUpdatesWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)subscribeAndFetchLocationForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setLocationUpdateBlock:(CDUnknownBlockType)arg1;
- (oneway void)receivedUpdatedLocation:(id)arg1;
- (void)invalidationHandler:(id)arg1;
- (double)_decayedWaitIntervalForRetryCount:(unsigned long long)arg1;
- (void)interruptionHandler:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
