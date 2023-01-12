//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOConfigStorageExpiryCached, NSPointerArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOConfigRemoteProxy : NSObject
{
    struct os_unfair_recursive_lock_s _lock;
    NSPointerArray *_configStores;
    GEOConfigStorageExpiryCached *_expiryUser;
    GEOConfigStorageExpiryCached *_expirySystem;
}

- (void).cxx_destruct;
- (id)configExpiryForSource:(long long)arg1;
- (id)configStoreForSource:(long long)arg1;
- (id)configExpiryForOptions:(unsigned long long)arg1;
- (id)configStoreForOptions:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

