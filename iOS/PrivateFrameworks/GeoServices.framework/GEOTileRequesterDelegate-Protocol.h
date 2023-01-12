//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOActiveTileSet, GEOTileData, GEOTileRequester, NSDictionary, NSError, NSString;

@protocol GEOTileRequesterDelegate
- (void)tileRequesterFinished:(GEOTileRequester *)arg1;
- (void)tileRequester:(GEOTileRequester *)arg1 receivedError:(NSError *)arg2 forKey:(struct _GEOTileKey)arg3;
- (void)tileRequester:(GEOTileRequester *)arg1 receivedData:(GEOTileData *)arg2 tileEdition:(unsigned int)arg3 tileSetDB:(CDUnion_20bcf645)arg4 tileSet:(GEOActiveTileSet *)arg5 etag:(NSString *)arg6 forKey:(struct _GEOTileKey)arg7 userInfo:(NSDictionary *)arg8;
@end

