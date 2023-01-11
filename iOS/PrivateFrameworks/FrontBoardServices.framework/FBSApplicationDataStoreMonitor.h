//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/FBSApplicationDataStoreRepositoryClientObserver-Protocol.h>

@class NSHashTable, NSString;
@protocol FBSApplicationDataStoreRepositoryClient;

@interface FBSApplicationDataStoreMonitor : NSObject <FBSApplicationDataStoreRepositoryClientObserver>
{
    id <FBSApplicationDataStoreRepositoryClient> _client;
    _Bool _clientNeedsCheckin;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
- (void)applicationDataStoreRepositoryClient:(id)arg1 storeInvalidatedForApplication:(id)arg2;
- (void)applicationDataStoreRepositoryClient:(id)arg1 application:(id)arg2 changedObject:(id)arg3 forKey:(id)arg4;
- (_Bool)_hasObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithClient:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

