//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLock, NSObject, NSURL, PKRemoteAssetManager;
@protocol OS_dispatch_queue;

@interface PKFileDataAccessor
{
    NSLock *_remoteAssetManagerLock;
    _Bool _remoteAssetManagerAccessed;
    PKRemoteAssetManager *_remoteAssetManager;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSURL *_fileURL;
}

@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
- (void).cxx_destruct;
- (id)displayProfileOfType:(long long)arg1;
- (id)remoteAssetManager;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)remoteAssetsDownloaded;
- (id)bundle;
- (id)serializedFileWrapper;
- (id)archiveData;
- (id)manifestHash;
- (id)dataForBundleResources:(id)arg1;
- (id)dataForBundleResource:(id)arg1;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2;
- (id)resourceValueForKey:(id)arg1;
- (void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(_Bool)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(_Bool)arg5;
- (void)contentWithCompletion:(CDUnknownBlockType)arg1;
- (id)content;
- (void)dictionaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)dictionary;
- (void)revocationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFileURL:(id)arg1 error:(id *)arg2 processingQueue:(id)arg3;
- (id)initWithFileURL:(id)arg1 error:(id *)arg2;
- (id)init;

@end

