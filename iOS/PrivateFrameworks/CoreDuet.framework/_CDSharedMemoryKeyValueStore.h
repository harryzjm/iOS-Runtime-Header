//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDStringKeyDataValueStoring-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_os_log;

@interface _CDSharedMemoryKeyValueStore : NSObject <_CDStringKeyDataValueStoring>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_archivingQueue;
    _Bool _needToPersist;
    NSObject<OS_os_log> *_log;
    NSMutableDictionary *_dictionary;
    void *_mappedMem;
    unsigned long long _size;
}

+ (id)readKeyedDataDictionaryFromMemory:(void *)arg1 size:(unsigned long long)arg2;
+ (void *)openOrCreateSharedMemoryWithName:(id)arg1 size:(unsigned long long)arg2;
+ (id)log;
+ (id)keyValueStoreWithName:(id)arg1 size:(unsigned long long)arg2;
+ (id)sharedInstance;
+ (id)defaultName;
+ (unsigned long long)defaultSize;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)description;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)allKeys;
- (id)dataForKey:(id)arg1;
- (_Bool)removeDataForKeys:(id)arg1;
- (_Bool)removeDataForKey:(id)arg1;
- (_Bool)setData:(id)arg1 forKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)setData:(id)arg1 forKey:(id)arg2;
- (_Bool)asyncPersistToShMemWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)persistToShMemWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)errorForExceedingSizeLimits;
- (void *)memoryPointer;
- (id)initWithName:(id)arg1 size:(unsigned long long)arg2;

@end

