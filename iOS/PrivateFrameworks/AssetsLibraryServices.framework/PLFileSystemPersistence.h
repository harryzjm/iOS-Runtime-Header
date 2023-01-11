//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PLFileSystemPersistence : NSObject
{
    NSObject<OS_dispatch_queue> *_writerQueue;
}

+ (void)performBlockOnWriterQueue:(CDUnknownBlockType)arg1;
+ (void)persistMetadata:(id)arg1 fileURL:(id)arg2;
+ (void)persistString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (void)persistUInt16:(unsigned short)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (void)persistUUIDString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (id)persistedAttributesForFileAtURL:(id)arg1 exists:(_Bool *)arg2;
+ (id)persistedAttributesForFileAtURL:(id)arg1;
+ (void)persistData:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (id)filesystemPersistenceBatchItemForFileAtURL:(id)arg1;
+ (id)sharedInstance;
- (void)_performOnWriterQueueWithIdentifier:(const char *)arg1 block:(CDUnknownBlockType)arg2;
- (void)_backgroundWriteData:(id)arg1 toFileAtURL:(id)arg2;
- (void)dealloc;
- (id)init;

@end

