//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMigrationManager.h"

__attribute__((visibility("hidden")))
@interface NSSQLiteInPlaceMigrationManager : NSMigrationManager
{
}

+ (_Bool)_canMigrateWithMappingModel:(id)arg1;
- (_Bool)migrateStoreFromURL:(id)arg1 type:(id)arg2 options:(id)arg3 withMappingModel:(id)arg4 toDestinationURL:(id)arg5 destinationType:(id)arg6 destinationOptions:(id)arg7 error:(id *)arg8;
- (void)dealloc;

@end

