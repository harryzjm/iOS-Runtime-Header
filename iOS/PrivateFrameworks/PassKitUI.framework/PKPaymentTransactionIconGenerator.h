//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, PKObjectDownloader, PKPaymentService;
@protocol OS_dispatch_queue;

@interface PKPaymentTransactionIconGenerator : NSObject
{
    NSMutableDictionary *_iconCache;
    NSMutableArray *_iconCacheKeys;
    _Bool _useCache;
    _Bool _hasNetworkAccess;
    double _scale;
    NSMutableOrderedSet *_highPriorityIconRequests;
    NSMutableOrderedSet *_lowPriorityIconRequests;
    NSMutableArray *_inflightRequests;
    _Bool _processingRequest;
    NSObject<OS_dispatch_queue> *_queueIcons;
    struct os_unfair_lock_s _lockRequests;
    PKObjectDownloader *_fileDownloader;
    PKPaymentService *_paymentService;
}

- (void).cxx_destruct;
- (id)fileDownloader;
- (void)_downloadLogoForTransaction:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_cacheImageFromDownloaderCacheForURL:(id)arg1;
- (id)_iconCacheKeyForMerchant:(id)arg1 size:(struct CGSize)arg2 ignoreLogoURL:(_Bool)arg3 imageOut:(id *)arg4;
- (id)_iconCacheKeyForPaymentTransaction:(id)arg1 size:(struct CGSize)arg2 ignoreLogoURL:(_Bool)arg3 imageOut:(id *)arg4;
- (id)_iconForCacheKey:(id)arg1;
- (void)queue_processNextIconRequest;
- (id)_iconForTransaction:(id)arg1 merchant:(id)arg2 size:(struct CGSize)arg3 ignoreLogoURL:(_Bool)arg4 requestType:(unsigned long long)arg5 iconHandler:(CDUnknownBlockType)arg6;
- (id)iconForMerchant:(id)arg1 size:(struct CGSize)arg2 ignoreLogoURL:(_Bool)arg3 requestType:(unsigned long long)arg4 iconHandler:(CDUnknownBlockType)arg5;
- (id)iconCacheKeyForTransaction:(id)arg1 size:(struct CGSize)arg2;
- (id)iconForTransaction:(id)arg1 size:(struct CGSize)arg2 ignoreLogoURL:(_Bool)arg3 requestType:(unsigned long long)arg4 iconHandler:(CDUnknownBlockType)arg5;
- (id)initWithCache:(_Bool)arg1 scale:(double)arg2;

@end
