//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSSet;

__attribute__((visibility("hidden")))
@interface HMDCloudChangeTree : HMFObject
{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_objects;
    NSMapTable *_objectMap;
    NSMapTable *_recordMap;
    NSMapTable *_branchMap;
    NSSet *_validRootUUIDs;
}

+ (_Bool)modelTypeCanBeOrphaned:(id)arg1;
+ (id)logCategory;
+ (id)shortDescription;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *validRootUUIDs; // @synthesize validRootUUIDs=_validRootUUIDs;
@property(retain, nonatomic) NSMapTable *branchMap; // @synthesize branchMap=_branchMap;
@property(retain, nonatomic) NSMapTable *recordMap; // @synthesize recordMap=_recordMap;
@property(retain, nonatomic) NSMapTable *objectMap; // @synthesize objectMap=_objectMap;
@property(retain, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
@property(readonly, nonatomic) _Bool hasValidChanges;
- (id)recordMapWithFilter:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *invalidCloudChanges;
@property(readonly, nonatomic) NSMutableArray *cloudChanges;
@property(readonly, nonatomic) NSArray *orphans;
@property(readonly, nonatomic) NSArray *allTransactionStoreRowIDs;
@property(readonly, nonatomic) NSArray *objectsWithPotentialChanges;
- (void)findAndMarkOrphanedBranches;
- (void)findAndDeletedChildren;
- (void)updateNode:(id)arg1 withCloudRecord:(id)arg2;
- (void)updateChange:(id)arg1;
- (void)updateModel:(id)arg1;
- (void)updateRecordMapping:(id)arg1;
- (void)removeNode:(id)arg1;
- (void)_addNode:(id)arg1;
- (void)_updateNode:(id)arg1 oldRecordName:(id)arg2;
- (id)_findNodeWithRecordMapping:(id)arg1;
- (id)objectForRecordName:(id)arg1;
- (id)_objectForRecordName:(id)arg1;
- (id)objectForUUID:(id)arg1;
- (id)_objectForUUID:(id)arg1;
- (void)logChangeTreeWithIndent:(id)arg1;
- (id)description;
- (id)shortDescription;
- (id)initWithRootUUIDs:(id)arg1;
- (id)init;

@end

