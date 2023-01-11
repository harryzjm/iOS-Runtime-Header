//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSCacheDelegate-Protocol.h>

@class NSCache, NSMutableDictionary, NSString, PXPlacesSearchProvider;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUSearchHomeThumbnailManager : NSObject <NSCacheDelegate>
{
    NSCache *_cache;
    NSMutableDictionary *_metadataPlist;
    NSObject<OS_dispatch_queue> *_metadataQueue;
    PXPlacesSearchProvider *_placesProvider;
}

+ (id)_filePathForMetadataPlist;
+ (id)_filePathForHash:(id)arg1;
+ (id)_thumbnailFilePath;
@property(retain, nonatomic) PXPlacesSearchProvider *placesProvider; // @synthesize placesProvider=_placesProvider;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *metadataQueue; // @synthesize metadataQueue=_metadataQueue;
@property(retain, nonatomic) NSMutableDictionary *metadataPlist; // @synthesize metadataPlist=_metadataPlist;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)_imageForHomeZeroKeywordWithMapImage:(id)arg1;
- (void)_writeMetadataPlistToDisk;
- (void)_setMetadataDate:(id)arg1 forKey:(id)arg2;
- (id)_hashForKeyString:(id)arg1;
- (void)_createThumbnailDirectoryIfNeeded;
- (void)_setThumbnail:(id)arg1 forKey:(id)arg2;
- (void)_fetchImageForLocation:(id)arg1 size:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (void)thumbnailForKey:(id)arg1 type:(long long)arg2 withSize:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

