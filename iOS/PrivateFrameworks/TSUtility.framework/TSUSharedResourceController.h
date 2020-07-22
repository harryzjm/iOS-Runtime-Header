//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSCondition, NSString;
@protocol OS_dispatch_group, TSUSharedResourceControllerDelegate;

@interface TSUSharedResourceController : NSObject
{
    int _acquirerCount;
    id <TSUSharedResourceControllerDelegate> _delegate;
    NSString *_resourceForThreadKey;
    NSString *_hasResourceForThreadKey;
    NSCondition *_resourceLock;
    id _resource;
    struct {
        unsigned int canWaitOnMainThread:1;
        unsigned int acquiresResourceAsynchronously:1;
        unsigned int hasResource:1;
    } _flags;
    int _threadsAcquiringResourceCount;
    NSCondition *_waitLock;
    int _waitCount;
    NSObject<OS_dispatch_group> *_accessInProgressGroup;
    NSObject<OS_dispatch_group> *_willEndAccessGroup;
    NSString *_UUID;
}

@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)description;
- (void)waitForResourceWithLockAndPerformSynchronousAccessUsingBlock:(CDUnknownBlockType)arg1;
- (void)acquireResourceWithLockAndPerformSynchronousAccessUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)performSynchronousAccessIfResourceIsAvailable:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)performSynchronousAccessIfResourceIsAvailableUsingBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronousAccessUsingBlock:(CDUnknownBlockType)arg1;
- (void)willEndAccessToResourceForcingToWaitForPendingAccesses:(_Bool)arg1;
- (void)willEndAccessToResource;
- (void)wakeUpAllThreadsWaitingForResourceWithLock;
- (void)didBeginAccessToResource:(id)arg1 isFromThreadWaitingToAcquireResource:(_Bool)arg2;
- (void)didBeginAccessToResource:(id)arg1;
@property(nonatomic) _Bool canWaitOnMainThread;
- (void)dealloc;
- (id)initWithName:(id)arg1 delegate:(id)arg2;
- (id)init;

@end

