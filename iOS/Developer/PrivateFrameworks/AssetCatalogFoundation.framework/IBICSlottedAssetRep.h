//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IBICSlot, NSData, NSString;

@interface IBICSlottedAssetRep
{
    NSData *_assetData;
    IBICSlot *_slot;
    unsigned long long _conflictState;
}

+ (id)keysThatImpactDisplayOrder;
+ (_Bool)fileNameIsIdentifier;
+ (id)keysThatImpactIdentifier;
+ (id)classNameComponents;
+ (id)catalogItemFileExtension;
+ (id)validSourceFileUTIs;
+ (id)validSourceFileNameExtensions;
+ (Class)requiredParentClass;
+ (id)assetRepIdentifiersForAssetReps:(id)arg1;
+ (_Bool)displayNameIsItemName;
+ (_Bool)itemNameIsFileNameWithoutCatalogExtension;
+ (id)assetRepWithRepIdentifier:(id)arg1;
+ (id)assetRepWithSlot:(id)arg1 fileName:(id)arg2 explicitlyUnassigned:(_Bool)arg3;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(_Bool)arg2;
+ (Class)slotClass;
+ (Class)slottedAssetClass;
+ (Class)repIdentifierClass;
+ (_Bool)isAbstractCatalogItemClass;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long conflictState; // @synthesize conflictState=_conflictState;
@property(copy, nonatomic) IBICSlot *slot; // @synthesize slot=_slot;
- (_Bool)shouldConsiderSiblingSlotForLanguageDirectionComponents:(id)arg1;
- (id)languageDirectionComponentsRepresentedByConflictFreeSiblings;
- (long long)compareForVariantMatching:(id)arg1;
- (long long)filteringPriorityForVariantSelection;
- (_Bool)isMinimallyFitForVariantSelection;
- (id)slotForVariantSelection;
- (_Bool)matchesFileType:(id)arg1;
- (id)fileType;
@property(readonly) NSString *fullyQualifiedRelativePathForFileWriter;
- (void)populateIssues:(id)arg1 context:(id)arg2;
- (_Bool)updateModificationDatesWithMutationResult:(id)arg1;
- (long long)compareDisplayOrder:(id)arg1;
- (void)replaceChildrenFromFileSystemSnapshot:(id)arg1 results:(id)arg2;
- (id)fileWrapperRepresentationWithOptions:(unsigned long long)arg1;
- (id)parent;
- (void)enumerateDescriptionAttributeComponents:(CDUnknownBlockType)arg1;
- (_Bool)recursivelyContainsAssetData;
- (_Bool)isBrokenFileReference;
- (id)identifier;
- (id)structuredIdentifier;
- (id)fullyQualifiedRuntimeNameProvidingItemForCARCompiler;
- (id)effectiveNodeForIssueGenerationForCARCompiler;
- (id)effectiveModificationDateForCARCompiler;
- (_Bool)isMinimallyFitForCompiling;
- (_Bool)requiresKnownFileTypeToBeMinimallyFitForCompiling;
- (id)copyUsingSlot:(id)arg1 andFileName:(id)arg2;
- (id)copyUsingSlot:(id)arg1;
- (id)shortDisplayName;
- (id)displayName;
- (id)nameForIssues;
- (void)setAssetData:(id)arg1;
- (void)assetDataWillChange;
- (id)assetData;
- (void)setConflictStateComponent:(unsigned long long)arg1 toValue:(_Bool)arg2;
- (_Bool)hasUnknownSlot;
- (_Bool)isInConflictDueToUnknownIdiom;
- (_Bool)isExplicitlyUnassigned;
- (_Bool)isInConflict;
- (_Bool)isConflictFree;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSlot:(id)arg1;
- (id)init;
- (void)populateLocaleOfNamedAssetImportInfo:(id)arg1 withOptions:(id)arg2;
- (void)populateDirectionOfNamedAssetImportInfo:(id)arg1 withOptions:(id)arg2;
- (void)populateThinningPreferenceOfNamedAssetImportInfo:(id)arg1 withOptions:(id)arg2;
- (_Bool)populateAppearanceOfNamedAssetImportInfo:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (_Bool)populateIdiomOfNamedAssetImportInfo:(id)arg1 options:(id)arg2 isIcon:(_Bool)arg3 error:(id *)arg4;
- (_Bool)validateSlottedAssetRepForWriting:(id)arg1 withOptions:(id)arg2 forOptionsKey:(id)arg3 andFailureIssue:(id *)arg4;
- (_Bool)validateSlottedAssetRepForWriting:(id)arg1 withOptions:(id)arg2 andFailureIssue:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

