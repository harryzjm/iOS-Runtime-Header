//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSPObjectDelegate-Protocol.h>
#import <iWorkImport/TSPUnarchiverDelegate-Protocol.h>

@class NSError, NSHashTable, NSMapTable, NSString, TSPComponent, TSPComponentObjectUUIDMap, TSPFinalizeHandlerQueue, TSPObjectContext;
@protocol OS_dispatch_group, OS_dispatch_queue, TSPReaderDelegate;

__attribute__((visibility("hidden")))
@interface TSPReader : NSObject <TSPObjectDelegate, TSPUnarchiverDelegate>
{
    _Bool _hasReadFailure;
    id <TSPReaderDelegate> _delegate;
    TSPComponent *_component;
    TSPComponentObjectUUIDMap *_componentObjectUUIDMap;
    TSPFinalizeHandlerQueue *_finalizeHandlerQueue;
    NSObject<OS_dispatch_group> *_completionGroup;
    NSObject<OS_dispatch_queue> *_errorQueue;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_unarchiveQueue;
    NSObject<OS_dispatch_queue> *_objectsQueue;
    struct unordered_map<long long, TSP::ObjectInfo, TSP::ObjectIdentifierHash, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ObjectInfo>>> _objectInfoMap;
    vector_8ef431c5 _repeatedReferences;
    NSMapTable *_objects;
    NSObject<OS_dispatch_queue> *_objectsToModifyQueue;
    NSHashTable *_objectsToModify;
    struct {
        unsigned int didFinishResolvingReferences:1;
        unsigned int needsUpgrade:1;
        unsigned int hasDocumentVersionUUID:1;
        unsigned int sourceType:3;
        unsigned int canRetainObjectReferencedByWeakLazyReference:1;
        unsigned int isCrossDocumentPaste:1;
        unsigned int isCrossAppPaste:1;
        unsigned int delegateRespondsToDidResetObjectIdentifierForObject:1;
        unsigned int delegateRespondsToDidResetObjectUUID:1;
        unsigned int delegateRespondsToDidUnarchiveObject:1;
    } _flags;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_group> *completionGroup; // @synthesize completionGroup=_completionGroup;
@property(readonly, nonatomic) TSPComponent *component; // @synthesize component=_component;
@property(readonly, nonatomic) __weak id <TSPReaderDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct ObjectInfo *)objectInfoForIdentifier:(long long)arg1;
@property(readonly, nonatomic) _Bool isCrossAppPaste;
@property(readonly, nonatomic) _Bool isCrossDocumentPaste;
@property(readonly, nonatomic) _Bool canRetainObjectReferencedByWeakLazyReference;
@property(readonly, nonatomic) long long sourceType;
@property(readonly, nonatomic) _Bool hasDocumentVersionUUID;
@property(readonly, nonatomic) _Bool didFinishResolvingReferences;
@property(readonly, nonatomic) unsigned long long fileFormatVersion;
@property(readonly, nonatomic) long long componentIdentifier;
- (id)dataForIdentifier:(long long)arg1;
- (id)UUIDForObjectIdentifier:(long long)arg1;
- (long long)objectIdentifierForUUID:(id)arg1;
- (void)unarchiver:(id)arg1 didReadLazyReference:(id)arg2 isExternal:(_Bool *)arg3;
- (_Bool)isObjectInDocument:(id)arg1;
- (id)objectUUIDMap;
- (_Bool)canSetObjectUUIDForObject:(id)arg1;
- (id)newObjectUUIDForObject:(id)arg1;
- (long long)newObjectIdentifier;
- (void)willModifyObject:(id)arg1 duringReadOperation:(_Bool)arg2;
- (void)endIgnoringModificationsForObject:(id)arg1;
- (void)beginIgnoringModificationsForObject:(id)arg1;
- (long long)modifyObjectTokenForNewObject;
@property(readonly, nonatomic) TSPObjectContext *context;
- (void)processObjectsToModifyWithRootObject:(id)arg1;
- (void)setObjectDelegatesToContextObjectDelegate;
- (void)resolveReferences;
- (_Bool)finishUnarchiving;
- (void)didUnarchiveObject:(id)arg1 withUnarchiver:(id)arg2;
- (_Bool)validateObjectIdentifierForObject:(id)arg1;
- (void)addUnarchivedObject:(id)arg1 unarchiver:(id)arg2;
- (void)attemptedToReadInMemoryObject:(id)arg1 objectIdentifier:(long long)arg2;
- (_Bool)shouldValidateComponentsOfInMemoryObjects;
- (void)unarchiveObjectWithUnarchiver:(id)arg1;
- (void)readWithIOCompletionQueue:(id)arg1 ioCompletion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)beginReadingWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly) _Bool hasReadFailure;
@property(retain, nonatomic) NSError *error;
- (id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

