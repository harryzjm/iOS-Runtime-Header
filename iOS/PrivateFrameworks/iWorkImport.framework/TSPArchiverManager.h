//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, TSPDescriptionGenerator;
@protocol OS_dispatch_queue, TSPArchiverManagerDelegate;

__attribute__((visibility("hidden")))
@interface TSPArchiverManager : NSObject
{
    id <TSPArchiverManagerDelegate> _delegate;
    Class _archiverClass;
    NSMapTable *_archivers;
    NSObject<OS_dispatch_queue> *_archiversHighQueue;
    NSObject<OS_dispatch_queue> *_archiversLowQueue;
    NSObject<OS_dispatch_queue> *_archiveHighQueue;
    NSObject<OS_dispatch_queue> *_archiveDefaultQueue;
    NSObject<OS_dispatch_queue> *_archiveLowQueue;
    NSObject<OS_dispatch_queue> *_archiveCompletionQueue;
    struct {
        unsigned int isStopped:1;
        unsigned int delegateRespondsToDidCreateArchiver:1;
        unsigned int delegateRespondsToShouldDelayArchivingObject:1;
    } _flags;
    TSPDescriptionGenerator *_descriptionGenerator;
}

@property(retain, nonatomic) TSPDescriptionGenerator *descriptionGenerator; // @synthesize descriptionGenerator=_descriptionGenerator;
- (void).cxx_destruct;
- (void)archiveWithArchiver:(id)arg1 queue:(id)arg2 archiveCompletion:(CDUnknownBlockType)arg3;
- (id)archiverForObject:(id)arg1 archiveQueue:(id)arg2 archiveCompletion:(CDUnknownBlockType)arg3;
- (void)stop;
- (void)performAsynchronousArchiverAccessUsingBlock:(CDUnknownBlockType)arg1;
- (id)impl_explicitComponentRootObjectForObject:(id)arg1;
- (id)explicitComponentRootObjectForObject:(id)arg1 hasArchiverAccessLock:(_Bool)arg2;
- (void)archiveObjectWithLowPriority:(id)arg1;
- (void)archiveObjectWithHighPriority:(id)arg1;
- (void)impl_archiverForObject:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)archiverForObject:(id)arg1 hasArchiverAccessLock:(_Bool)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 archiverClass:(Class)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

