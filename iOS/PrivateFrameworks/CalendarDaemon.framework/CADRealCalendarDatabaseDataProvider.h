//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CADRealCalendarDatabaseDataProvider : NSObject
{
}

+ (id)realDataProvider;
- (int)suggestionsCalendarRowIDInDatabase:(struct CalDatabase *)arg1;
- (int)naturalLanguageSuggestionsCalendarRowIDInDatabase:(struct CalDatabase *)arg1;
- (void)gatherCalendarRowIDs:(id)arg1 inStore:(void *)arg2 inDatabase:(struct CalDatabase *)arg3;
- (id)storeIDForStore:(void *)arg1 inDatabase:(struct CalDatabase *)arg2;
- (id)accountIDForStore:(void *)arg1 inDatabase:(struct CalDatabase *)arg2;
- (_Bool)isStoreDelegate:(void *)arg1 inDatabase:(struct CalDatabase *)arg2;
- (_Bool)isLocalStore:(void *)arg1 inDatabase:(struct CalDatabase *)arg2;
- (id)storesInDatabase:(struct CalDatabase *)arg1;
- (int)databaseID:(struct CalDatabase *)arg1;

@end

