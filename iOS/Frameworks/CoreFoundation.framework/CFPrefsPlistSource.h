//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CFPrefsPlistSource
{
    struct __CFString *userIdentifier;
    struct __CFString *domainIdentifier;
    struct __CFString *container;
    _Atomic struct __CFDictionary *_locallySetDict;
    _Atomic char *accessPath;
    _Atomic _Bool _isByHost;
    _Atomic _Bool _volatile;
    _Atomic _Bool _readonly;
    _Atomic _Bool _avoidsDaemonCache;
    _Atomic _Bool _restrictedAccess;
    _Atomic _Bool _checkedInvalidHome;
    _Atomic _Bool _lastWriteFailed;
    _Atomic _Bool _observing;
    _Atomic _Bool _byteCountLimitExceeded;
    _Atomic _Bool _directMode;
    _Atomic _Bool _disableBackup;
    _Atomic int _fileProtectionClass;
}

- (void)dealloc;
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)arg1 forRole:(int *)arg2;
- (int)alreadylocked_updateObservingRemoteChanges;
- (long long)generationCount;
- (long long)alreadylocked_generationCount;
- (_Bool)synchronize;
- (void)alreadylocked_clearCache;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(_Bool *)arg5;
- (id)createRequestNewContentMessageForDaemon:(int)arg1;
- (_Bool)servedByUserSessionDaemon;
- (_Bool)isDirectModeEnabled;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(CDUnknownBlockType)arg1;
- (_Bool)isVolatile;
- (id)createSynchronizeMessage;
- (void)alreadylocked_setPrecopiedValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3 from:(id)arg4;
- (struct __CFDictionary *)alreadylocked_copyDictionary;
- (struct __CFArray *)alreadylocked_copyKeyList;
- (void *)copyValueForKey:(struct __CFString *)arg1;
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg1;
- (void)setDaemonCacheEnabled:(_Bool)arg1;
- (void)setAccessRestricted:(_Bool)arg1;
- (void)setFileProtectionClass:(int)arg1;
- (void)setBackupDisabled:(_Bool)arg1;
- (id)initWithDomain:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(_Bool)arg3 containerPath:(struct __CFString *)arg4 containingPreferences:(id)arg5;
- (_Bool)isByHost;
- (struct __CFString *)container;
- (struct __CFString *)domainIdentifier;
- (struct __CFString *)userIdentifier;

@end

