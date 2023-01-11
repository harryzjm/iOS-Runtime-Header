//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObjectContext.h>

@interface NSManagedObjectContext (PLManagedObjectContext)
- (_Bool)pl_executeBatchUpdateRequest:(id)arg1 withBatchSize:(unsigned long long)arg2 error:(id *)arg3;
- (id)pl_resultWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (id)deleteObjectsWithIncrementalSave:(id)arg1;
- (id)enumerateWithIncrementalSaveUsingObjects:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)enumerateWithIncrementalSaveUsingObjects:(id)arg1 shouldRefreshAfterSave:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)enumerateObjectsFromFetchRequest:(id)arg1 count:(unsigned long long *)arg2 usingDefaultBatchSizeWithBlock:(CDUnknownBlockType)arg3;
- (id)enumerateObjectsFromFetchRequest:(id)arg1 count:(unsigned long long *)arg2 batchSize:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)pathManager;
- (id)photoLibrary;
- (_Bool)isUserInterfaceContext;
- (void)pl_refresh;
@end

