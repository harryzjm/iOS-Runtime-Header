//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, PKPassLibrary, UIWindow;
@protocol OS_dispatch_semaphore;

@interface PKPassSnapshotter : NSObject
{
    PKPassLibrary *_passLibrary;
    NSObject<OS_dispatch_semaphore> *_snapshotSem;
    UIWindow *_snapshotWindow;
    double _scale;
    NSMutableArray *_currentSnapshotKeys;
}

+ (void)purgeCacheOfPassSnapshotsWithUinqueID:(id)arg1;
+ (void)purgeCache;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)_cachedImageWithKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cacheItem:(id)arg1 withKey:(id)arg2;
- (void)_performSnapshot:(id)arg1 size:(struct CGSize)arg2 cacheKey:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_prepareSnapshotViewWithPass:(id)arg1 size:(struct CGSize)arg2 suppressedContent:(unsigned long long)arg3 cacheKey:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_snapshotWithPass:(id)arg1 size:(struct CGSize)arg2 suppressedContent:(unsigned long long)arg3 withCache:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)snapshotWithUniqueID:(id)arg1 manifestHash:(id)arg2 size:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (void)snapshotWithUniqueID:(id)arg1 size:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (void)snapshotWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)snapshotWithPass:(id)arg1 size:(struct CGSize)arg2 suppressedContent:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)snapshotWithPass:(id)arg1 size:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (void)snapshotWithPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)passLibrary;
- (void)dealloc;
@property(nonatomic) _Bool runsInBackgroundProcess;
- (id)init;

@end

