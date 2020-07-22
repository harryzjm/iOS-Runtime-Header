//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSLRUCache;
@protocol OS_dispatch_queue;

@interface ISURLBagCache : NSObject
{
    SSLRUCache *_cachedBags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)URLWithBagContext:(id)arg1;
+ (id)sharedCache;
- (void).cxx_destruct;
- (id)_newRequestWithURLBagContext:(id)arg1;
- (void)_storeFrontChangedNotification:(id)arg1;
- (id)URLBagForContext:(id)arg1 withOptions:(long long)arg2;
- (id)URLBagForContext:(id)arg1;
- (void)invalidateURLBagForContext:(id)arg1;
- (void)invalidateAllURLBags;
- (void)addURLBag:(id)arg1;
- (void)dealloc;
- (id)init;

@end
