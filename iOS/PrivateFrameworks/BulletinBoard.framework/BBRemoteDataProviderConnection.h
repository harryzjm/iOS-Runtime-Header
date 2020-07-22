//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/BBDataProviderConnectionServerProxy-Protocol.h>
#import <BulletinBoard/BBDataProviderStore-Protocol.h>
#import <BulletinBoard/BBRemoteDataProviderDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol BBRemoteDataProviderStoreDelegate, OS_dispatch_queue;

@interface BBRemoteDataProviderConnection : NSObject <BBRemoteDataProviderDelegate, BBDataProviderConnectionServerProxy, BBDataProviderStore>
{
    _Bool _connected;
    id <BBRemoteDataProviderStoreDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_dataProvidersBySectionID;
    NSMutableDictionary *_dataProvidersByUniversalSectionID;
    _Bool _clientReady;
    NSString *_serviceName;
    NSString *_bundleID;
}

@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;
- (void)performBlockOnDataProviders:(CDUnknownBlockType)arg1;
- (void)removeDataProvider:(id)arg1;
- (id)dataProviderForUniversalSectionID:(id)arg1;
- (id)dataProviderForSectionID:(id)arg1;
- (void)loadAllDataProviders;
- (void)clientIsReady:(CDUnknownBlockType)arg1;
- (void)addParentSectionFactory:(id)arg1;
- (void)removeDataProviderWithSectionID:(id)arg1;
- (void)remoteDataProviderNeedsToWakeClient:(id)arg1;
- (void)addDataProviderWithSectionID:(id)arg1 clientProxy:(id)arg2 identity:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_queue_removeDataProvider:(id)arg1;
- (void)setConnected:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool isConnected;
@property(readonly, copy) NSString *debugDescription;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (id)initWithServiceName:(id)arg1 bundleID:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

