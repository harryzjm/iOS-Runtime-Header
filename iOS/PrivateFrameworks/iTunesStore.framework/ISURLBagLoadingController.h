//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSHashTable, NSMutableArray, SSURLBag;
@protocol OS_dispatch_queue;

@interface ISURLBagLoadingController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    _Bool _hasSuccessfullyLoadedBag;
    NSDictionary *_bagDictionary;
    NSMutableArray *_bagAccessRequestBlocks;
    NSError *_bagLoadingError;
    NSHashTable *_bagObservers;
    SSURLBag *_URLBag;
    _Bool _loadingBag;
}

+ (id)sharedBagLoadingController;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isLoadingBag) _Bool loadingBag; // @synthesize loadingBag=_loadingBag;
- (void)_updateBagWithDictionary:(id)arg1 error:(id)arg2;
- (void)_reloadURLBagAllowingUpdateUsingExistingBagDictionary:(_Bool)arg1;
- (void)_didCompleteLoadingBagDictionary:(id)arg1 withError:(id)arg2;
- (void)_handleStoreFrontDidChangeNotification:(id)arg1;
- (void)_handleNetworkReachabilityFlagsDidChangeNotification:(id)arg1;
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;
- (void)reloadBag;
- (void)requestAccessToBagUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeBagObserver:(id)arg1;
- (void)addBagObserver:(id)arg1;
@property(readonly, nonatomic) NSDictionary *bagDictionary;
- (void)dealloc;
- (id)init;

@end
