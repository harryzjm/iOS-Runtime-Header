//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ML3PersistentIDGenerator.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ML3ImportPersistentIDGenerator : ML3PersistentIDGenerator
{
    NSMutableDictionary *_pregeneratedIdMappings;
}

- (void).cxx_destruct;
- (void)removePersistentIDFromIdMapping:(long long)arg1;
- (long long)nextPersistentIDForImportItem:(shared_ptr_de333b55)arg1;
- (void)addIdMapping:(id)arg1 forProperty:(unsigned int)arg2;
- (id)initWithDatabaseConnection:(id)arg1 tableName:(id)arg2;

@end

