//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GEOS2MapTileRequester
{
}

+ (unsigned char)tileProviderIdentifier;
- (_Bool)shouldDownloadToDiskForTileKey:(const struct _GEOTileKey *)arg1 estimatedDataSize:(unsigned long long)arg2;
- (id)_localizationURLForTileKey:(const struct _GEOTileKey *)arg1;
- (id)urlForTileKey:(const struct _GEOTileKey *)arg1;
- (id)activeTileSetForKey:(const struct _GEOTileKey *)arg1;

@end
