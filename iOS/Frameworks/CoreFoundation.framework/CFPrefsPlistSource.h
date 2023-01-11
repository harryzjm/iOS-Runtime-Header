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
    _Atomic _Bool _disableBackup;
}

- (void)dealloc;
- (void)_sharedCleanup;
- (void)alreadylocked_updateObservingRemoteChanges;
- (long long)generationCount;
- (long long)alreadylocked_generationCount;
- (_Bool)synchronize;
- (_Bool)volatilizeIfInvalidHomeDir;
- (void)alreadylocked_clearCache;
- (void)sendRequestNewDataMessage:(id)arg1 toConnection:(id)arg2 retryCount:(int)arg3 error:(_Bool *)arg4;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(_Bool *)arg5;
- (void)requestPlistValidation;
- (id)createRequestNewContentMessageForDaemon:(int)arg1;
- (_Bool)alreadylocked_requestNewData;
- (long long)sendMessageSettingValue:(void *)arg1 forKey:(struct __CFString *)arg2;
- (void)sendFullyPreparedMessage:(id)arg1 toConnection:(id)arg2 settingValue:(void *)arg3 forKey:(struct __CFString *)arg4 retryCount:(int)arg5;
- (void)addPIDImpersonationIfNecessary:(id)arg1;
- (_Bool)attachAccessTokenToMessage:(id)arg1 accessType:(int)arg2;
- (_Bool)handleErrorReply:(id)arg1 fromMessageSettingKey:(struct __CFString *)arg2 toValue:(void *)arg3 retryCount:(int)arg4 retryContinuation:(CDUnknownBlockType)arg5;
- (_Bool)handleErrorReply:(id)arg1 retryCount:(int)arg2 retryContinuation:(CDUnknownBlockType)arg3;
- (void)goReadOnlyAfterTryingToWriteKey:(struct __CFString *)arg1 value:(void *)arg2;
- (_Bool)isVolatile;
- (void)goVolatileAfterTryingToWriteKey:(struct __CFString *)arg1 value:(void *)arg2;
- (void)writeFailedForKey:(struct __CFString *)arg1 value:(void *)arg2;
- (id)createSynchronizeMessage;
- (_Bool)_isSharedInTheiOSSimulator;
- (void)alreadylocked_setPrecopiedValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3 from:(id)arg4;
- (struct __CFDictionary *)alreadylocked_copyDictionary;
- (struct __CFArray *)alreadylocked_copyKeyList;
- (void *)copyValueForKey:(struct __CFString *)arg1;
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg1;
- (void)setDaemonCacheEnabled:(_Bool)arg1;
- (void)setAccessRestricted:(_Bool)arg1;
- (void)setBackupDisabled:(_Bool)arg1;
- (id)initWithDomain:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(_Bool)arg3 containerPath:(struct __CFString *)arg4 containingPreferences:(id)arg5;
- (_Bool)isByHost;
- (struct __CFString *)container;
- (void)setContainer:(struct __CFString *)arg1;
- (void)setDomainIdentifier:(struct __CFString *)arg1;
- (struct __CFString *)domainIdentifier;
- (void)setUserIdentifier:(struct __CFString *)arg1;
- (struct __CFString *)userIdentifier;

@end

