//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSIndexSet, NSMapTable, NSMutableIndexSet, NSMutableSet, NSSet, NSString, TSPArchiverManager, TSPComponent, TSPMutableComponentDataReferenceMap, TSPMutableComponentObjectUUIDMap, TSPObject, TSPObjectReferenceMap, TSPReferenceOrderedSet;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore, TSPComponentWriteChannel, TSPComponentWriterDelegate;

@interface TSPComponentWriter : NSObject
{
    NSString *_locator;
    id <TSPComponentWriterDelegate> _delegate;
    long long _mode;
    unsigned char _packageIdentifier;
    TSPObjectReferenceMap *_objectReferenceMap;
    id <TSPComponentWriteChannel> _writeChannel;
    TSPArchiverManager *_archiverManager;
    NSObject<OS_dispatch_semaphore> *_delegateSemaphore;
    unsigned long long _componentReadVersion;
    TSPReferenceOrderedSet *_archivedObjects;
    NSMapTable *_archivedObjectsDictionary;
    TSPMutableComponentObjectUUIDMap *_componentObjectUUIDMap;
    TSPMutableComponentDataReferenceMap *_componentDataReferenceMap;
    struct vector<TSP::ObjectStackEntry, std::allocator<TSP::ObjectStackEntry>> _objectStack;
    NSObject<OS_dispatch_group> *_writeGroup;
    NSObject<OS_dispatch_queue> *_writeQueue;
    TSPReferenceOrderedSet *_weakReferences;
    NSHashTable *_lazyReferences;
    NSHashTable *_dataReferences;
    NSMutableSet *_featureInfos;
    TSPReferenceOrderedSet *_externalReferences;
    NSIndexSet *_componentAmbiguousReferences;
    NSMutableIndexSet *_ambiguousReferences;
    unsigned long long _objectTargetType;
    struct {
        unsigned int success:1;
        unsigned int isErrorRecoverable:1;
        unsigned int calculatedObjectTargetType:1;
        unsigned int delegateRespondsToNeedsDocumentRecovery:1;
        unsigned int delegateRespondsToLocatorForClaimingComponent:1;
        unsigned int delegateRespondsToObjectBelongsToCopiedComponent:1;
        unsigned int delegateRespondsToExternalPackageDidWriteObject:1;
        unsigned int delegateRespondsToShouldDelayWritingObject:1;
    } _flags;
    TSPComponent *_component;
    TSPObject *_rootObject;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) TSPObject *rootObject; // @synthesize rootObject=_rootObject;
@property(readonly, nonatomic) NSSet *featureInfos; // @synthesize featureInfos=_featureInfos;
@property(readonly, nonatomic) TSPComponent *component; // @synthesize component=_component;
- (void)validateExplicitComponentOwnershipForObject:(id)arg1 archiverOrNil:(id)arg2 parentObject:(id)arg3 hasArchiverAccessLock:(_Bool)arg4;
- (void)validateAmbiguousObjectOwnershipForObject:(id)arg1 explicitComponentRootObject:(id)arg2 parentObject:(id)arg3 claimingComponent:(id)arg4 claimingPackageIdentifier:(unsigned char)arg5 claimingComponentWillBeCopied:(_Bool)arg6 claimingComponentReadVersion:(unsigned long long)arg7 isAmbiguousOwnership:(_Bool *)arg8;
- (_Bool)supportsAutomaticAmbiguousOwnershipResolutionWithComponentReadVersion:(unsigned long long)arg1;
- (_Bool)validateObjectContextForObject:(id)arg1;
- (_Bool)shouldDelayWritingObject:(id)arg1;
- (_Bool)isObjectExternalBecauseItAlreadyBelongsToAnotherComponent:(id)arg1 parentObject:(id)arg2 claimingComponent:(id *)arg3 claimingPackageIdentifier:(unsigned char *)arg4 claimingComponentWillBeCopied:(_Bool *)arg5 claimingComponentReadVersion:(unsigned long long *)arg6;
- (_Bool)isObjectExternalBecauseOfExplicitComponentOwnership:(id)arg1 archiverOrNil:(id)arg2 claimingComponentOrNil:(id)arg3 hasArchiverAccessLock:(_Bool)arg4 explicitComponentRootObject:(id *)arg5 claimingComponent:(id *)arg6 isOwnedByDifferentPackage:(_Bool *)arg7;
- (_Bool)isObjectExternal:(id)arg1 archiverOrNil:(id)arg2 parentObject:(id)arg3 hasArchiverAccessLock:(_Bool)arg4 claimingComponent:(id *)arg5 isOwnedByDifferentPackage:(_Bool *)arg6 isAmbiguousOwnership:(_Bool *)arg7;
- (_Bool)canSkipArchivingStronglyReferencedObject:(id)arg1 fromComponentRootObject:(id)arg2;
- (void)writeArchiver:(id)arg1 forObjectIdentifier:(long long)arg2;
- (void)writeObject:(id)arg1 archiver:(id)arg2 parentObject:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)writeWithArchiverAccessLockForObjects:(id)arg1 parentObject:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)acquireArchiverAccessLockAndWriteObjects:(id)arg1 parentObject:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shouldWriteObject:(id)arg1;
- (void)writeWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithComponent:(id)arg1 locator:(id)arg2 rootObject:(id)arg3 delegate:(id)arg4 mode:(long long)arg5 packageIdentifier:(unsigned char)arg6 objectReferenceMapOrNil:(id)arg7 writeChannel:(id)arg8 archiverManager:(id)arg9;

@end

