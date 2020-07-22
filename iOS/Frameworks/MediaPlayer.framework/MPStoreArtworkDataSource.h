//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPStoreArtworkDataSource
{
}

+ (id)sharedStoreArtworkDataSource;
- (id)_bestURLForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (void)getExportableArtworkURLForCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)wantsBackgroundImageDecompression;
- (id)supportedSizesForCatalog:(id)arg1;
- (id)sortedSupportedSizesForCatalog:(id)arg1;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;

@end

