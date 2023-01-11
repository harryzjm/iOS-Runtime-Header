//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CFPDDataBuffer, CFPrefsDaemon;
@protocol OS_os_transaction, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CFPDSource : NSObject
{
    CFPrefsDaemon *_cfprefsd;
    CFPDDataBuffer *_plist;
    NSObject<OS_xpc_object> *_pendingChangesQueue;
    unsigned long long _pendingChangesSize;
    struct __CFString *_userName;
    struct __CFString *_domain;
    char *_actualPath;
    struct __CFSet *_observingConnections;
    NSObject<OS_os_transaction> *_dirtyTransaction;
    struct __CFString *_uncanonicalizedPathCache;
    struct os_unfair_lock_s _uncanonicalizedPathCacheLock;
    struct os_unfair_lock_s _observingConnectionsLock;
    struct os_unfair_lock_s _writeLock;
    struct os_unfair_lock_s _lock;
    unsigned int _lastEuid;
    unsigned int _lastEgid;
    int _fileProtectionClass;
    short _generationShmemIndex;
    _Bool _byHost;
    _Bool _managed;
    _Bool _managedUsesContainer;
    _Bool _watchingParentDirectory;
    unsigned int _handlingRequest:1;
    unsigned int _dirty:1;
    unsigned int _neverCache:1;
    unsigned int _checkedForNonPrefsPlist:1;
    unsigned int _restrictedReadability:1;
    unsigned int _waitingForDeviceUnlock:1;
    unsigned int _disableBackup:1;
}

- (void)dealloc;
- (void)cleanUpAfterAcceptingMessage:(id)arg1;
- (void)processEndOfMessageIntendingToRemoveSource:(_Bool *)arg1;
- (id)acceptMessage:(id)arg1;
- (int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 plistIsAvailableToRead:(_Bool)arg4 containerPath:(const char *)arg5 diagnosticMessage:(const char **)arg6;
- (void)lockedSync:(CDUnknownBlockType)arg1;
- (void)lockedAsync:(CDUnknownBlockType)arg1;
- (struct __CFString *)debugDump;
- (_Bool)enqueueNewKey:(id)arg1 value:(id)arg2 encoding:(int)arg3 inBatch:(_Bool)arg4;
- (void)drainPendingChanges;
- (void)observingConnectionWasInvalidated:(id)arg1;
- (void)asyncNotifyObserversOfWriteFromConnection:(id)arg1 message:(id)arg2;
- (id)copyPropertyListValidatingPlist:(_Bool)arg1;
- (id)copyPropertyListWithoutDrainingPendingChangesValidatingPlist:(_Bool)arg1;
- (void)syncWriteToDisk;
- (void)syncWriteToDiskAndFlushCacheForReason:(struct __CFString *)arg1;
- (void)finishedNonRequestWriteWithError:(int)arg1;
- (CDUnknownBlockType)createDiskWriteShouldPerformSynchronously:(_Bool *)arg1;
- (void)setDirty:(_Bool)arg1;
- (void)updateShmemEntry;
- (short)shmemIndex;
- (id)description;
- (_Bool)byHost;
- (void)respondToFileWrittenToBehindOurBack;
- (struct __CFString *)cloudConfigurationPath;
- (struct __CFString *)container;
- (struct __CFString *)user;
- (struct __CFString *)domain;
- (void)setManagedPreferencesUseContainer:(_Bool)arg1;
- (_Bool)managed;
- (id)initWithDomain:(struct __CFString *)arg1 userName:(struct __CFString *)arg2 byHost:(_Bool)arg3 managed:(_Bool)arg4 shmemIndex:(short)arg5 daemon:(id)arg6;
- (void)setUncanonicalizedPathCached:(_Bool)arg1;
- (struct __CFString *)copyUncanonicalizedPath;
- (void)cacheActualPath;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end
