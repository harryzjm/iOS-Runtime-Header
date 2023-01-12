//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSIndexSet, NSMapTable, NSString, TSPComponentDataReferenceMap, TSPComponentExternalReferenceMap, TSPComponentObjectUUIDMap, TSPObject, TSPObjectReferenceMap;
@protocol OS_dispatch_queue, TSPComponentDelegate;

@interface TSPComponent : NSObject
{
    _Atomic int _accessCount;
    id <TSPComponentDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_concurrentAccessQueue;
    long long _identifier;
    NSString *_preferredLocator;
    NSString *_locator;
    unsigned long long _documentReadVersion;
    unsigned long long _documentWriteVersion;
    unsigned long long _componentReadVersion;
    unsigned long long _componentRequiredVersion;
    NSArray *_featureInfos;
    unsigned long long _saveToken;
    TSPObject *_strongRootObject;
    TSPObject *_weakRootObject;
    NSMapTable *_writtenObjects;
    TSPComponentExternalReferenceMap *_externalReferenceMap;
    NSIndexSet *_ambiguousReferences;
    _Atomic struct _flags;
    TSPComponentDataReferenceMap *_persistedComponentDataReferenceMap;
    TSPComponentDataReferenceMap *_upgradedComponentDataReferenceMap;
    TSPComponentObjectUUIDMap *_componentObjectUUIDMap;
    unsigned long long _encodedLength;
    NSDate *_lastModificationDate;
    TSPObjectReferenceMap *_objectReferenceMap;
}

+ (id)componentsDiscardingContentOnCurrentThread;
- (void).cxx_destruct;
@property(readonly, nonatomic) TSPObjectReferenceMap *objectReferenceMap; // @synthesize objectReferenceMap=_objectReferenceMap;
@property(readonly, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(readonly, nonatomic) unsigned long long encodedLength; // @synthesize encodedLength=_encodedLength;
@property(readonly, nonatomic) TSPComponentObjectUUIDMap *componentObjectUUIDMap; // @synthesize componentObjectUUIDMap=_componentObjectUUIDMap;
@property(readonly, nonatomic) TSPComponentDataReferenceMap *upgradedComponentDataReferenceMap; // @synthesize upgradedComponentDataReferenceMap=_upgradedComponentDataReferenceMap;
@property(readonly, nonatomic) TSPComponentDataReferenceMap *persistedComponentDataReferenceMap; // @synthesize persistedComponentDataReferenceMap=_persistedComponentDataReferenceMap;
@property(readonly, nonatomic) NSArray *featureInfos; // @synthesize featureInfos=_featureInfos;
@property(readonly, nonatomic) NSString *preferredLocator; // @synthesize preferredLocator=_preferredLocator;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)additionalDescription;
- (id)newUpdatedExternalReferenceMapUsingDelegate:(id)arg1;
- (_Bool)addExternalReferenceToObjectOrLazyReference:(id)arg1 isWeak:(_Bool)arg2 externalReferenceMap:(id)arg3 delegate:(id)arg4;
- (id)newExternalReferenceMapWithStrongReferences:(id)arg1 weakReferences:(id)arg2 delegate:(id)arg3;
- (struct ComponentExternalReferenceInfo)externalReferenceInfoForObjectIdentifier:(long long)arg1;
- (void)enumerateExternalReferences:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isTransientComponent;
@property(readonly) _Bool needsArchiving;
- (_Bool)needsArchivingImpl;
@property(readonly) _Bool persisted;
- (void)markAsDiscarded;
- (void)willDiscardComponent;
- (void)setUpgradedComponentDataReferenceMap:(id)arg1;
- (void)setComponentObjectUUIDMap:(id)arg1;
- (void)setDocumentReadVersion:(unsigned long long)arg1 documentWriteVersion:(unsigned long long)arg2 componentObjectUUIDMap:(id)arg3;
- (void)setEncodedLength:(unsigned long long)arg1 lastModificationDate:(id)arg2;
- (void)setPackageIdentifier:(unsigned char)arg1 preferredLocator:(id)arg2 locator:(id)arg3 isStoredOutsideObjectArchive:(_Bool)arg4 compressionAlgorithm:(long long)arg5 rootObjectOrNil:(id)arg6 archivedObjects:(id)arg7 externalReferenceMap:(id)arg8 persistedComponentDataReferenceMap:(id)arg9 ambiguousReferences:(id)arg10 documentReadVersion:(unsigned long long)arg11 documentWriteVersion:(unsigned long long)arg12 componentReadVersion:(unsigned long long)arg13 componentRequiredVersion:(unsigned long long)arg14 canBeDropped:(_Bool)arg15 isWasteful:(_Bool)arg16 requiredPackageIdentifier:(unsigned char)arg17 featureInfos:(id)arg18 componentObjectUUIDMap:(id)arg19 objectReferenceMap:(id)arg20 saveToken:(unsigned long long)arg21 encodedLength:(unsigned long long)arg22 lastModificationDate:(id)arg23 wasCopied:(_Bool)arg24 wasModifiedDuringWrite:(_Bool)arg25;
- (void)didReadObjects:(id)arg1;
- (void)setArchivedObjectsImpl:(id)arg1;
- (void)setModifiedImpl:(_Bool)arg1 forObject:(id)arg2;
- (void)setModified:(_Bool)arg1 forObject:(id)arg2 isDocumentUpgrade:(_Bool)arg3;
- (void)setModified:(_Bool)arg1 forObject:(id)arg2;
@property(readonly) _Bool modified;
@property(readonly, nonatomic) unsigned long long saveToken;
@property(readonly, nonatomic) long long compressionAlgorithm;
@property(readonly, nonatomic) unsigned char requiredPackageIdentifier;
@property(readonly, nonatomic) NSIndexSet *ambiguousReferences;
@property(readonly, nonatomic) _Bool isWasteful;
@property(readonly, nonatomic) _Bool canBeDropped;
@property(readonly, nonatomic) unsigned long long componentRequiredVersion;
@property(readonly, nonatomic) unsigned long long componentReadVersion;
@property(readonly, nonatomic) unsigned long long documentWriteVersion;
@property(readonly, nonatomic) unsigned long long documentReadVersion;
@property(readonly) unsigned char packageIdentifier;
- (void)p_setLocator:(id)arg1;
- (id)p_locator;
@property(readonly, nonatomic) NSString *locator;
- (_Bool)isContentDiscarded;
- (void)endContentAccess;
- (_Bool)beginContentAccess;
- (void)discardContentIfPossibleFromNSCache:(_Bool)arg1;
- (void)discardContentIfPossible;
- (void)performSynchronousDiscardContentIfPossibleUsingBlock:(CDUnknownBlockType)arg1;
- (void)continueDiscardingContentIfPossibleUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)isDiscardingContent;
@property(retain) TSPObject *rootObject;
- (_Bool)shouldKeepStrongObjectImpl;
@property(readonly, nonatomic) _Bool incompatibleVersion;
@property(readonly, nonatomic) _Bool isStoredOutsideObjectArchive;
- (_Bool)shouldForceCaching;
- (_Bool)isCachingEnabled;
- (id)initWithDelegate:(id)arg1 message:(const void *)arg2 packageIdentifier:(unsigned char)arg3 encodedLength:(unsigned long long)arg4 lastModificationDate:(id)arg5;
- (id)initWithDelegate:(id)arg1 rootObject:(id)arg2;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 preferredLocator:(id)arg3 packageIdentifier:(unsigned char)arg4;
- (id)init;
- (void)saveToMessage:(void *)arg1 saveToken:(unsigned long long)arg2 writtenComponentInfo:(const struct WrittenComponentInfo *)arg3;

@end

