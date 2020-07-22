//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISLoadURLBagOperation, ISURLBag, NSString;
@protocol OS_dispatch_queue;

@interface IKURLBagCache : NSObject
{
    id _isURLBagDidLoadToken;
    struct os_unfair_lock_s _bagOperationLock;
    ISURLBag *_bag;
    NSString *_cachePath;
    ISLoadURLBagOperation *_pendingBagOperation;
    NSObject<OS_dispatch_queue> *_updateBagQueue;
}

+ (id)_cachedBagFromCachePath:(id *)arg1;
+ (id)URLBagContext;
+ (id)sharedInMemoryBagCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *updateBagQueue; // @synthesize updateBagQueue=_updateBagQueue;
@property(nonatomic) __weak ISLoadURLBagOperation *pendingBagOperation; // @synthesize pendingBagOperation=_pendingBagOperation;
@property(readonly, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(readonly) ISURLBag *bag; // @synthesize bag=_bag;
- (void).cxx_destruct;
- (void)_persistURLBag;
- (void)_updateWithBag:(id)arg1 invalidate:(_Bool)arg2;
- (void)updateWithInvalidation:(_Bool)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)_initWithCachePath:(id)arg1 cachedBag:(id)arg2;
- (id)initWithCachePath:(id)arg1;
- (id)init;

@end
