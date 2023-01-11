//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>

@class NSCondition, NSMapTable, NSMutableSet, NSString;
@protocol HDSQLiteDatabasePoolDelegate, OS_dispatch_semaphore;

@interface HDSQLiteDatabasePool : NSObject <HDDiagnosticObject>
{
    NSCondition *_cacheCondition;
    NSMutableSet *_cache;
    unsigned long long _cacheGeneration;
    long long _cacheSize;
    long long _concurrentReaderLimit;
    _Atomic int _count;
    struct os_unfair_lock_s _checkoutLock;
    NSMapTable *_checkoutMap;
    NSObject<OS_dispatch_semaphore> *_readerSemaphore;
    NSObject<OS_dispatch_semaphore> *_writerSemaphore;
    id <HDSQLiteDatabasePoolDelegate> _delegate;
}

@property __weak id <HDSQLiteDatabasePoolDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (void)_didFlushDatabases:(id)arg1;
- (id)_semaphoreForCheckOutOptions:(unsigned long long)arg1;
- (id)_removeDatabaseFromCheckoutMap:(id)arg1;
- (void)_addDatabaseWrapperToCheckoutMap:(id)arg1;
- (void)flush;
- (void)checkInDatabase:(id)arg1 flushImmediately:(_Bool)arg2;
- (id)checkOutDatabaseWithOptions:(unsigned long long)arg1 error:(id *)arg2;
@property(readonly) long long concurrentReaderLimit;
@property(readonly) long long cacheSize;
@property(readonly) long long count;
- (void)dealloc;
- (id)initWithConcurrentReaderLimit:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

