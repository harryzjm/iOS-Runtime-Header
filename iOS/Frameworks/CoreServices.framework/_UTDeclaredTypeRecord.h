//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSBundleRecord;

__attribute__((visibility("hidden")))
@interface _UTDeclaredTypeRecord
{
    LSBundleRecord *_weakDeclaringBundleRecord;
}

+ (_Bool)supportsSecureCoding;
+ (id)_propertyClasses;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_detachFromContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;
- (void)_enumerateRelatedTypesWithContext:(struct LSContext *)arg1 unitID:(unsigned int)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)_LSRecord_resolve__delegatePath;
- (id)_delegatePath;
- (id)_delegatePathWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;
- (void)_LSRecord_resolve__declaringBundleBookmark;
- (id)_declaringBundleBookmark;
- (id)_declaringBundleBookmarkWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;
- (void)_LSRecord_resolve__localizedDescription;
- (id)_localizedDescription;
- (id)_localizedDescriptionWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;
- (void)_LSRecord_resolve_childTypeIdentifiers;
- (id)childTypeIdentifiers;
- (id)childTypeIdentifiersWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;
- (void)_LSRecord_resolve_parentTypeIdentifiers;
- (id)parentTypeIdentifiers;
- (id)parentTypeIdentifiersWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;
- (void)_LSRecord_resolve_pedigree;
- (id)pedigree;
- (id)pedigreeWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;
- (_Bool)conformsToTypeIdentifier:(id)arg1;
- (void)_LSRecord_resolve_referenceURL;
- (id)referenceURL;
- (id)referenceURLWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;
- (void)_LSRecord_resolve_tagSpecification;
- (id)tagSpecification;
- (id)tagSpecificationWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;
- (void)_LSRecord_resolve_declaration;
- (id)declaration;
- (id)declarationWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;
- (id)declaringBundleRecord;
- (_Bool)isCoreType;
- (_Bool)isActive;
- (_Bool)isImported;
- (_Bool)isExported;
- (_Bool)isInPublicDomain;
- (_Bool)isWildcard;
- (_Bool)isDeclared;
- (_Bool)isDynamic;
- (void)_LSRecord_resolve_version;
- (id)version;
- (id)versionWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;
- (void)_LSRecord_resolve_identifier;
- (id)identifier;
- (id)identifierWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;
- (void)_enumerateRelatedTypeStructuresWithContext:(struct LSContext *)arg1 unitID:(unsigned int)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)_LSRecord_resolve__declaringBundleRecord;
@property(readonly) LSBundleRecord *_declaringBundleRecord;
- (id)_declaringBundleRecordWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;
- (void)_LSRecord_resolve__rawFlags;
@property(readonly) unsigned int _rawFlags;
- (unsigned int)_rawFlagsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;

@end
