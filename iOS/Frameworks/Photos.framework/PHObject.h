//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>
#import <Photos/PLLocalUUIDConverter-Protocol.h>

@class NSManagedObjectID, NSString, PHPhotoLibrary;

@interface PHObject : NSObject <PLLocalUUIDConverter, NSCopying>
{
    _Bool _deleted;
    NSString *_uuid;
    NSManagedObjectID *_objectID;
    PHPhotoLibrary *_photoLibrary;
    unsigned long long _propertyHint;
}

+ (id)authorizationAwareFetchResultWithOptions:(id)arg1 fetchBlock:(CDUnknownBlockType)arg2;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)localIdentifierExpressionForFetchRequests;
+ (id)identifierCodeFromLocalIdentifier:(id)arg1;
+ (id)uuidFromLocalIdentifier:(id)arg1;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)identifierCode;
+ (_Bool)managedObjectSupportsMontage;
+ (_Bool)managedObjectSupportsSavedAssetType;
+ (_Bool)managedObjectSupportsFaceState;
+ (_Bool)managedObjectSupportsBursts;
+ (_Bool)managedObjectSupportsKeyFaces;
+ (_Bool)managedObjectSupportsPersonFilters;
+ (_Bool)managedObjectSupportsRejectedState;
+ (_Bool)managedObjectSupportsPendingState;
+ (_Bool)managedObjectSupportsVisibilityState;
+ (_Bool)managedObjectSupportsHiddenState;
+ (_Bool)managedObjectSupportsTrashedState;
+ (id)fetchType;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)identifierPropertiesToFetch;
+ (void)extendPropertiesToFetch:(id)arg1 withPropertySetClass:(Class)arg2;
+ (void)extendPropertiesToFetch:(id)arg1 withProperties:(id)arg2;
+ (Class)propertySetClassForPropertySet:(id)arg1;
+ (id)propertySetAccessorsByPropertySet;
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)arg1;
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)arg1;
@property unsigned long long propertyHint; // @synthesize propertyHint=_propertyHint;
@property(readonly) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, getter=isDeleted) _Bool deleted; // @synthesize deleted=_deleted;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, getter=isTransient) _Bool transient;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly) id identifier;
- (Class)changeRequestClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_shortObjectIDURI;
@property(readonly, copy, nonatomic) NSString *localIdentifier;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (_Bool)hasLoadedPropertySet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

