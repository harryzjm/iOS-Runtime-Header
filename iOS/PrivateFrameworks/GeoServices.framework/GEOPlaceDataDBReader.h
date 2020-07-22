//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GEOPlaceDataDBReader
{
    struct sqlite3_stmt *_sqlMUIDForPhoneNumber;
    struct sqlite3_stmt *_sqlAllComponents;
    struct sqlite3_stmt *_sqlAllPhoneNumbers;
    struct sqlite3_stmt *_sqlAllComponentsPerPlaceData;
    struct sqlite3_stmt *_sqlAllComponentsForPlaceData;
}

- (id)allCacheEntries;
- (unsigned long long)muidForPhoneNumber:(unsigned long long)arg1;
- (id)placeDataForPhoneNumber:(unsigned long long)arg1;
- (id)placeDataForKey:(struct _GEOTileKey)arg1;
- (id)placeDataForMUID:(unsigned long long)arg1;
- (id)_placeDataForIdentifier:(unsigned long long)arg1;
- (void)_openDBIfNotAlreadyOpen;
- (void)_openDB;
- (void)dealloc;
- (id)componentForKey:(union _GEOPlaceDataComponentKey)arg1;

@end

