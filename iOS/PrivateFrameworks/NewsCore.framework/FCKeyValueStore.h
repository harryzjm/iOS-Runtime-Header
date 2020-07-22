//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationThrottlerDelegate-Protocol.h>

@class FCKeyValueStoreClassRegistry, FCMutexLock, NSMutableDictionary, NSString;
@protocol FCKeyValueStoreMigrating, FCOperationThrottler;

@interface FCKeyValueStore : NSObject <FCOperationThrottlerDelegate>
{
    _Bool _needSave;
    NSString *_name;
    unsigned long long _storeSize;
    NSMutableDictionary *_objectsByKey;
    NSString *_storeDirectory;
    unsigned long long _clientVersion;
    unsigned long long _optionsMask;
    FCKeyValueStoreClassRegistry *_classRegistry;
    id <FCKeyValueStoreMigrating> _migrator;
    FCMutexLock *_writeLock;
    id <FCOperationThrottler> _saveThrottler;
}

+ (_Bool)shouldDumpToJSON;
+ (id)persistenceQueue;
@property(retain, nonatomic) id <FCOperationThrottler> saveThrottler; // @synthesize saveThrottler=_saveThrottler;
@property(retain, nonatomic) FCMutexLock *writeLock; // @synthesize writeLock=_writeLock;
@property(retain, nonatomic) id <FCKeyValueStoreMigrating> migrator; // @synthesize migrator=_migrator;
@property(retain, nonatomic) FCKeyValueStoreClassRegistry *classRegistry; // @synthesize classRegistry=_classRegistry;
@property(nonatomic) unsigned long long optionsMask; // @synthesize optionsMask=_optionsMask;
@property(nonatomic) unsigned long long clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *storeDirectory; // @synthesize storeDirectory=_storeDirectory;
@property(nonatomic) _Bool needSave; // @synthesize needSave=_needSave;
@property(retain, nonatomic) NSMutableDictionary *objectsByKey; // @synthesize objectsByKey=_objectsByKey;
@property(nonatomic) unsigned long long storeSize; // @synthesize storeSize=_storeSize;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)setOptionBackupEnabled:(_Bool)arg1;
- (_Bool)_isBackupEnabled;
- (_Bool)_shouldMigrateOnUpgrade;
- (void)_clearStore;
- (id)_initializeStoreDirectoryWithName:(id)arg1;
- (void)_queueSave;
- (void)_logCacheStatus;
- (void)_saveAsyncWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_maybeSaveJSONRepresentationOfDictionary:(id)arg1;
- (id)_loadFromDisk;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
- (void)saveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addAllEntriesToDictionary:(id)arg1;
- (id)allKeys;
- (_Bool)boolValueForKey:(id)arg1;
- (void)setBoolValue:(_Bool)arg1 forKey:(id)arg2;
- (id)objectsForKeys:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)updateObjectsForKeys:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)removeAllObjects;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)setObjects:(id)arg1 forKeys:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)containsObjectForKey:(id)arg1;
- (id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 classRegistry:(id)arg5;
- (id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 classRegistry:(id)arg5 migrator:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

