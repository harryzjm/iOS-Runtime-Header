//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IBFoundation/IBMarshallableObjectPackage.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface IBCocoaTouchToolObjectPackage : IBMarshallableObjectPackage
{
    NSMutableArray *_topLevelObjects;
    NSMutableArray *_orderedObjects;
    NSMutableArray *_unprocessedTraitStorageLists;
    NSArray *_unprocessedConnections;
    NSArray *_processedConnections;
    NSMutableArray *_visibleWindows;
    NSMutableArray *_keyValuePairs;
    struct __CFDictionary *_customClasses;
    NSMutableDictionary *_objectIDToObjectTable;
    struct __CFDictionary *_objectToObjectIDTable;
    NSMutableArray *_orderedReplacementObjectsAddedDuringEnumeration;
    NSMutableSet *_replacementObjectsAddedDuringEnumeration;
    NSMutableDictionary *_objectIDsToKeyPathsToTraitStorages;
    NSMutableDictionary *_globalMarshallingContext;
    NSArray *_accessibilityConfigurations;
    NSArray *_initializationWarningMessages;
    unsigned long long _applicableTraits;
}

+ (id)decodeWithBinaryUnarchiver:(id)arg1;
+ (id)objectPackageFromRequest:(id)arg1 globalMarshallingContext:(id)arg2;
+ (id)objectPackageFromRequest:(id)arg1;
@property(readonly, nonatomic) unsigned long long applicableTraits; // @synthesize applicableTraits=_applicableTraits;
@property(readonly, nonatomic) NSArray *initializationWarningMessages; // @synthesize initializationWarningMessages=_initializationWarningMessages;
@property(readonly, nonatomic) NSArray *keyValuePairs; // @synthesize keyValuePairs=_keyValuePairs;
@property(readonly, nonatomic) NSArray *accessibilityConfigurations; // @synthesize accessibilityConfigurations=_accessibilityConfigurations;
@property(readonly, nonatomic) NSArray *orderedObjects; // @synthesize orderedObjects=_orderedObjects;
@property(readonly, nonatomic) NSArray *visibleWindows; // @synthesize visibleWindows=_visibleWindows;
@property(readonly, nonatomic) NSArray *topLevelObjects; // @synthesize topLevelObjects=_topLevelObjects;
- (void).cxx_destruct;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)associateObjectWithNewUniqueID:(id)arg1;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (id)objectForObjectRepresentation:(id)arg1;
- (id)objectRepresentationForObject:(id)arg1;
- (id)objectIDForObject:(id)arg1;
- (id)objectForObjectID:(id)arg1;
@property(readonly, nonatomic) NSDictionary *customClasses;
- (id)traitStorageListForTopLevelObjectCreatingIfNeeded:(id)arg1;
- (void)setTraitStorage:(id)arg1 forKeyPath:(id)arg2 ofObject:(id)arg3 inTraitStorageListForTopLevelObject:(id)arg4;
- (id)traitStorageForKeyPath:(id)arg1 ofObject:(id)arg2;
- (_Bool)usesTraitStorages;
@property(readonly, nonatomic) NSArray *traitStorageLists;
@property(readonly, nonatomic) NSArray *connections; // @synthesize connections=_processedConnections;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 globalMarshallingContext:(id)arg2;
- (id)init;
- (id)connectionsByProcessingConnections:(id)arg1;

@end

