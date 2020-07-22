//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCacheCoordinatorLocking-Protocol.h>

@class NSString;

@interface FCCacheCoordinatorPthreadsReadWriteLock : NSObject <FCCacheCoordinatorLocking>
{
    struct _opaque_pthread_rwlock_t {
        long long __sig;
        char __opaque[192];
    } _lock;
}

- (void)performWriteSync:(CDUnknownBlockType)arg1;
- (void)performReadSync:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

