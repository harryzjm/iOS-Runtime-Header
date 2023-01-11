//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GEOFeatureSpecificSimpleTileRequester
{
}

+ (unsigned char)tileProviderIdentifier;
- (id)_localizationURLForTileKey:(const struct _GEOTileKey *)arg1;
- (unsigned char)_authTypeForTileKey:(const struct _GEOTileKey *)arg1;
- (_Bool)useProxyAuthForTileKey:(const struct _GEOTileKey *)arg1;
- (id)urlForTileKey:(const struct _GEOTileKey *)arg1;
- (int)checksumMethodForIncomingTileDataWithKey:(const struct _GEOTileKey *)arg1;
- (unsigned int)tileEditionForKey:(const struct _GEOTileKey *)arg1;
- (_Bool)tileDataIsCacheableForTileKey:(const struct _GEOTileKey *)arg1;
- (struct _GEOTileKey)_regularTileKeyForTransitLineSelectionTileKey:(const struct _GEOTileKey *)arg1 muid:(unsigned long long *)arg2;

@end

