//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol PLIndexMappingCache;

@protocol PLDerivedAlbumListOrigin
- (void)enumerateDerivedAlbumLists:(void (^)(NSObject<PLIndexMappingCache> *))arg1;
- (void)unregisterAllDerivedAlbums;
- (void)registerDerivedAlbumList:(NSObject<PLIndexMappingCache> *)arg1;
@end
