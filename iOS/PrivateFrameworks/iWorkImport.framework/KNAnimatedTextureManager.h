//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class KNPlaybackSession, KNSlideNode, NSLock, NSMapTable, NSMutableSet, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface KNAnimatedTextureManager : NSObject
{
    KNPlaybackSession *_session;
    KNSlideNode *_currentSlideNode;
    NSMapTable *_slideNodeToASVMap;
    NSMutableSet *_slideNodesInMemorySet;
    _Bool _isPrecachingActive;
    NSLock *_slideNodesInMemorySetLock;
    NSOperationQueue *_preCacheBackgroundQueue;
    NSOperationQueue *_rasterizeTextureQueue;
    _Bool _shouldPrecache;
    NSLock *_synchronizedRenderingLock;
}

@property(readonly, nonatomic) NSLock *synchronizedRenderingLock; // @synthesize synchronizedRenderingLock=_synchronizedRenderingLock;
@property(nonatomic) _Bool shouldPrecache; // @synthesize shouldPrecache=_shouldPrecache;
@property(nonatomic) __weak KNSlideNode *currentSlideNode; // @synthesize currentSlideNode=_currentSlideNode;
- (void).cxx_destruct;
- (void)p_didReceiveMemoryWarning:(id)arg1;
- (void)evictCacheForSlideNode:(id)arg1;
- (void)evictPersistentCache;
- (void)evictInMemoryCache;
- (void)evictCaches;
- (void)p_serializeExtraSlideNodes;
- (void)p_serializeTexturesForSlideNode:(id)arg1;
- (void)addTextureToRasterizationQueue:(id)arg1 isOpenGL:(_Bool)arg2 asv:(id)arg3;
- (void)p_rasterizeTexture:(id)arg1 isOpenGL:(_Bool)arg2;
- (void)stopPreCaching;
- (void)startPreCaching;
- (id)p_slideNodesToCacheAroundCurrentSlideNode:(id)arg1 shouldIncludeExtraSlideAtEnd:(_Bool)arg2;
- (void)p_setCurrentSlideNodeToProcess:(id)arg1;
- (void)p_processSlideNode:(id)arg1 isHighPriority:(_Bool)arg2;
- (id)ASVForSlideNode:(id)arg1;
- (void)p_addSlideNodeToMemorySet:(id)arg1;
- (id)description;
- (void)tearDown;
- (void)dealloc;
- (id)init;
- (id)initWithSession:(id)arg1;

@end
