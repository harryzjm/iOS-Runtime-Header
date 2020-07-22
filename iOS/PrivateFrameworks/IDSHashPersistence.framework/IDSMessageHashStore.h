//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface IDSMessageHashStore : NSObject
{
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_source> *_databaseCloseTimer;
    double _databaseLastUpdateTime;
    unsigned long long __initialProcessTime;
    unsigned long long __initialServerTime;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long _initialServerTime; // @synthesize _initialServerTime=__initialServerTime;
@property(nonatomic) unsigned long long _initialProcessTime; // @synthesize _initialProcessTime=__initialProcessTime;
- (void).cxx_destruct;
- (void)_runCleanup;
- (void)_startCleanupTimer;
- (void)systemDidLeaveMemoryPressure;
- (void)systemDidEnterMemoryPressure;
- (void)performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)closeDatabase;
- (void)_setDatabaseCloseTimerOnIvarQueue;
- (void)_clearDatabaseCloseTimerOnIvarQueue;
- (void)__closeDatabaseOnIvarQueue;
- (unsigned int)dataProtectionClass;
- (void)_performInitialHousekeeping;
- (void)_storeInitialServerTime;
- (unsigned long long)_currentLocalTime;
- (void)updateCreationDateForHash:(id)arg1;
- (void)addMessageHash:(id)arg1;
- (_Bool)containsMessageHash:(id)arg1;
- (void)dealloc;
- (id)init;

@end

