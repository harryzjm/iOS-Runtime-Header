//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface UNSKeyedDataStoreRepository : NSObject
{
    NSString *_directory;
    NSString *_fileName;
    NSString *_pathExtension;
    long long _maxObjectsPerKey;
    _Bool _shouldExcludeFromBackup;
}

- (void).cxx_destruct;
- (void)_removeItemAtPath:(id)arg1;
- (void)removeDataStoreRepository;
- (void)removeStoreForKey:(id)arg1;
- (id)_addObject:(id)arg1 replaceObjectUsingTest:(CDUnknownBlockType)arg2 atPath:(id)arg3;
- (id)addObject:(id)arg1 replaceObjectUsingTest:(CDUnknownBlockType)arg2 forKey:(id)arg3;
- (id)addObject:(id)arg1 forKey:(id)arg2;
- (void)_setObjects:(id)arg1 atPath:(id)arg2;
- (void)setObjects:(id)arg1 forKey:(id)arg2;
- (id)_removeObjectsPassingTest:(CDUnknownBlockType)arg1 atPath:(id)arg2;
- (id)removeObjectsPassingTest:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)removeAllObjectsForKey:(id)arg1;
- (_Bool)_saveObjects:(id)arg1 atPath:(id)arg2;
- (id)_dataAtPath:(id)arg1;
- (id)_objectsAtPath:(id)arg1;
- (id)objectsForKey:(id)arg1;
- (id)_pathForKey:(id)arg1;
- (id)directoryForKey:(id)arg1;
- (id)pathForKey:(id)arg1;
- (id)directoryPath;
- (id)_directoryForKey:(id)arg1;
- (id)allKeys;
- (id)initWithDirectory:(id)arg1 fileName:(id)arg2 pathExtension:(id)arg3 maxObjectsPerKey:(long long)arg4 shouldExcludeFromBackup:(_Bool)arg5;

@end

