//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@interface NSManagedObject (IC)
+ (void)ic_enumerateObjectsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 relationshipKeyPathsForPrefetching:(id)arg3 context:(id)arg4 batchSize:(unsigned long long)arg5 saveAfterBatch:(_Bool)arg6 usingBlock:(CDUnknownBlockType)arg7;
+ (id)ic_objectIDsMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)ic_objectIDsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 context:(id)arg3;
+ (id)ic_objectsMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)ic_objectsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 relationshipKeyPathsForPrefetching:(id)arg3 fetchLimit:(unsigned long long)arg4 context:(id)arg5;
+ (id)ic_objectsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 context:(id)arg3;
+ (id)ic_resultsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 resultType:(unsigned long long)arg3 relationshipKeyPathsForPrefetching:(id)arg4 fetchLimit:(unsigned long long)arg5 context:(id)arg6;
+ (id)ic_permanentObjectIDsFromObjects:(id)arg1;
+ (id)ic_objectIDsFromObjects:(id)arg1;
+ (id)ic_objectsFromObjectIDs:(id)arg1 context:(id)arg2;
+ (id)ic_objectsFromObjectIDs:(id)arg1 relationshipKeyPathsForPrefetching:(id)arg2 context:(id)arg3;
+ (id)ic_existingObjectWithID:(id)arg1 context:(id)arg2;
+ (_Bool)ic_containsFaultingManagedObjects:(id)arg1;
- (id)ic_postNotificationOnMainThreadAfterSaveWithName:(id)arg1;
- (void)ic_postNotificationOnMainThreadWithName:(id)arg1;
- (id)ic_permanentObjectID;
- (_Bool)ic_obtainPermanentObjectIDIfNecessary;
@end

