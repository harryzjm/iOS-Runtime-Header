//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSAtomicStore.h>

__attribute__((visibility("hidden")))
@interface VSSubscriptionPropertyListStore : NSAtomicStore
{
}

+ (_Bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id *)arg3;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id *)arg2;
- (id)type;
- (id)newReferenceObjectForManagedObject:(id)arg1;
- (void)updateCacheNode:(id)arg1 fromManagedObject:(id)arg2;
- (id)newCacheNodeForManagedObject:(id)arg1;
- (_Bool)save:(id *)arg1;
- (_Bool)load:(id *)arg1;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;

@end

