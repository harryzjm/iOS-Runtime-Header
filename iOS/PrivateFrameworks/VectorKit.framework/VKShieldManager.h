//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VectorKit/GEOResourceManifestTileGroupObserver-Protocol.h>

@class GEOResourceManifestConfiguration, NSArray, NSLock, NSMapTable, NSString, VKGenericShieldGenerator, VKResourceManager;

@interface VKShieldManager : NSObject <GEOResourceManifestTileGroupObserver>
{
    struct _GEOGenericContainer<md::ShieldCacheKey, VKShieldArtwork *, std::__1::hash<md::ShieldCacheKey>, std::__1::equal_to<md::ShieldCacheKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> _artworkPool;
    struct _GEOGenericContainer<md::GenericShieldCacheKey, VKShieldArtwork *, std::__1::hash<md::GenericShieldCacheKey>, std::__1::equal_to<md::GenericShieldCacheKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> _genericArtworks;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    VKResourceManager *_resourceManager;
    VKGenericShieldGenerator *_genericShieldGenerator;
    NSArray *_nonRegionalResourceNames;
    struct mutex _nonRegionalResourceNamesLock;
    NSMapTable *_atlases;
    NSLock *_atlasesLock;
    NSMapTable *_indexes;
    NSLock *_indexesLock;
    _Bool _shouldCacheAtlases;
}

+ (id)sharedManager;
@property(readonly, nonatomic) _Bool shouldCacheAtlases; // @synthesize shouldCacheAtlases=_shouldCacheAtlases;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)imageForShieldType:(long long)arg1 shieldText:(id)arg2 contentScale:(double)arg3 size:(long long)arg4 idiom:(long long)arg5 colors:(CDStruct_87ab733e *)arg6 featureType:(unsigned long long)arg7 variant:(unsigned long long)arg8;
- (id)artworkForShieldType:(long long)arg1 textLength:(unsigned long long)arg2 contentScale:(double)arg3 size:(long long)arg4 idiom:(long long)arg5 colors:(CDStruct_87ab733e *)arg6 featureType:(unsigned long long)arg7 variant:(unsigned long long)arg8;
- (id)artworkForShieldType:(long long)arg1 textLength:(unsigned long long)arg2 contentScale:(double)arg3 size:(long long)arg4 idiom:(long long)arg5 mapRect:(CDStruct_90e2a262)arg6 colors:(CDStruct_87ab733e *)arg7 featureType:(unsigned long long)arg8 variant:(unsigned long long)arg9;
- (id)artworkForShieldName:(id)arg1 textLength:(unsigned long long)arg2 contentScale:(double)arg3 resourceNames:(id)arg4 size:(long long)arg5 idiom:(long long)arg6 numberOfLines:(unsigned long long)arg7 colors:(CDStruct_87ab733e *)arg8;
- (id)artworkForShieldType:(long long)arg1 textLength:(unsigned long long)arg2 contentScale:(double)arg3 resourceNames:(id)arg4 style:(const shared_ptr_f1f56723 *)arg5 size:(long long)arg6 idiom:(long long)arg7 numberOfLines:(unsigned long long)arg8 colors:(CDStruct_87ab733e *)arg9 featureType:(unsigned long long)arg10 variant:(unsigned long long)arg11;
- (id)_indexForName:(id)arg1;
- (id)_atlasForName:(id)arg1;
- (id)_nonRegionalIndexesAndPacks;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)purge;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 resourceManager:(id)arg2 shouldCacheAtlases:(_Bool)arg3;
- (id)initWithConfiguration:(id)arg1 resourceManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

