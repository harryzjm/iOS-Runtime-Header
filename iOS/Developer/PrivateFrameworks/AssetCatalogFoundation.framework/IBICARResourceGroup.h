//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IBICManifestArchivist;

@interface IBICARResourceGroup
{
    IBICManifestArchivist *_manifestArchivist;
    long long _progress;
}

+ (id)validationDispatchQueue;
+ (_Bool)canHostItemsOfClass:(Class)arg1;
+ (id)importPriority;
+ (_Bool)fileNameIsIdentifier;
+ (id)displayNameForChildren;
+ (Class)requiredChildrenClass;
+ (id)contentReferenceTypeName;
+ (id)classNameComponents;
+ (id)catalogItemFileExtension;
+ (id)defaultEmptyInstanceWithName:(id)arg1;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(_Bool)arg2;
+ (void)log:(id)arg1;
+ (void)log:(id)arg1 arguments:(char *)arg2;
+ (id)createDefaultInstancesForUnitTesting;
+ (id)createInstanceNamed:(id)arg1;
- (void).cxx_destruct;
- (void)invalidateIssues;
- (void)populateIssues:(id)arg1 context:(id)arg2;
- (_Bool)isEqualForUnitTests:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)manifestArchivist:(id)arg1 populateManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromManifest:(id)arg2 manifestFileData:(id)arg3;
- (Class)manifestArchivist:(id)arg1 childClassForChildEntry:(id)arg2 results:(id)arg3;
- (_Bool)manifestArchivist:(id)arg1 childHasDataToRecordInManifest:(id)arg2;
- (id)initializeManifestArchivist;
- (void)setItemName:(id)arg1;
- (void)removeChildren:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)insertChild:(id)arg1 atIndex:(id)arg2;
- (long long)activityProgress;
- (id)activityName;
- (long long)displayPositionForProposedChild:(id)arg1 temporarilyValidatingFileName:(_Bool)arg2;
- (id)classesForImportingLooseFilesInImportOrder;
- (id)destinationContainerForItemsInDropIncludingReceiver:(id)arg1;
- (id)manifestContent;
- (id)manifestFileName;
- (void)replaceChildrenFromFileSystemSnapshot:(id)arg1 results:(id)arg2;
- (CDStruct_2a4d9400)taggingSupport;
- (long long)childOrdering;
- (id)effectiveModificationDateForCARCompiler;
- (id)displayName;
- (id)defaultUnqualifiedRuntimeName;
- (id)init;
- (void)sharedInit;
- (void)log:(id)arg1;
- (void)createSampleImagesWithBaseName:(id)arg1 size:(struct CGSize)arg2 count:(long long)arg3 usingRenderer:(CDUnknownBlockType)arg4;
- (_Bool)populateNamedAssetImportInfo:(id)arg1 allCompiledItems:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;

@end

