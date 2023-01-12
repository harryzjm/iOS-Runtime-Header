//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXContentSyndicationSocialLayerHighlightProvider-Protocol.h>

@class NSHashTable, NSMutableDictionary, NSString, PXLRUMemoryCache;
@protocol OS_dispatch_queue;

@interface PXContentSyndicationPhotoKitSocialLayerHighlightProvider : NSObject <PXContentSyndicationSocialLayerHighlightProvider>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_observers;
    PXLRUMemoryCache *_highlightsCache;
    NSHashTable *_assetsWithNilHighlightsCache;
    CDUnknownBlockType _highlightFetchBlock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_didChangeHighlight:(id)arg1 forAsset:(id)arg2 withChangeObservers:(id)arg3;
- (void)_serialQueue_unregisterChangeObserver:(id)arg1 forAsset:(id)arg2;
- (void)_serialQueue_registerChangeObserver:(id)arg1 forAsset:(id)arg2;
- (id)_serialQueue_fetchSocialLayerHighlightForAsset:(id)arg1 usingHighlightResultBlock:(CDUnknownBlockType)arg2;
- (id)socialLayerHighlightForAsset:(id)arg1;
- (id)cachedSocialLayerHighlightForAsset:(id)arg1;
- (_Bool)isSocialLayerHighlightCachedForAsset:(id)arg1;
- (void)fetchSocialLayerHighlightForAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unregisterChangeObserver:(id)arg1 forAsset:(id)arg2;
- (void)registerChangeObserver:(id)arg1 forAsset:(id)arg2;
- (id)initWithHighlightFetchBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
