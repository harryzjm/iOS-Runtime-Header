//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSUIAssetQueue, AMSURLSession, NSCache;
@protocol OS_dispatch_queue;

@interface AMSUIImageLoader : NSObject
{
    NSCache *_imageCache;
    AMSUIAssetQueue *_fetchQueue;
    AMSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)defaultLoader;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) AMSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) AMSUIAssetQueue *fetchQueue; // @synthesize fetchQueue=_fetchQueue;
@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
- (id)_fetchImageFromCacheWithURL:(id)arg1;
- (void)_cacheImage:(id)arg1 withURL:(id)arg2;
- (id)_makeOperationForImageWithURL:(id)arg1 searchBundles:(id)arg2 error:(id *)arg3;
- (_Bool)_isURLSystemImage:(id)arg1;
- (_Bool)_isURLBundleResource:(id)arg1;
- (id)_performLowLatencyOperation:(id)arg1;
- (id)_fetchImageWithURL:(id)arg1 searchBundles:(id)arg2 atPriority:(long long)arg3;
- (id)fetchImageWithURL:(id)arg1 searchBundles:(id)arg2;
- (id)fetchImageWithURL:(id)arg1;
- (id)init;

@end
