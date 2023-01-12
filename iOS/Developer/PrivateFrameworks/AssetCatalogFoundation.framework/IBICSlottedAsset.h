//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssetCatalogFoundation/IBICAssetWithSlottedChildren-Protocol.h>

@class IBICManifestArchivist, NSSet, NSString;

@interface IBICSlottedAsset <IBICAssetWithSlottedChildren>
{
    IBICManifestArchivist *_manifestArchivist;
    _Bool _localizable;
}

+ (id)fileUTIsToAllowInUnstructuredImport;
+ (id)fileExtensionsToAllowInUnstructuredImport;
+ (id)synthesizeItemsFromLoosePaths:(id)arg1 claimingPaths:(id *)arg2;
+ (Class)repIdentifierClass;
+ (Class)slotClass;
+ (_Bool)fileNameIsIdentifier;
+ (Class)requiredChildrenClass;
+ (Class)assetRepClass;
+ (id)catalogItemFileExtension;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(_Bool)arg2;
+ (id)defaultName;
+ (_Bool)isAbstractCatalogItemClass;
- (void).cxx_destruct;
@property(nonatomic, getter=isLocalizable) _Bool localizable; // @synthesize localizable=_localizable;
- (_Bool)isEqualForUnitTests:(id)arg1;
- (id)createDefaultChildForSlot:(id)arg1 suggestedIdioms:(id)arg2;
- (_Bool)shouldMutateChild:(id)arg1 byCopyingContentToNewSlot:(id)arg2;
- (void)setConflictState:(unsigned long long)arg1 forChild:(id)arg2;
- (_Bool)isChildMinimallyFitForCompiling:(id)arg1;
- (Class)expectedChildClassForSlot:(id)arg1;
- (id)conflictFreeChildForSlot:(id)arg1;
- (id)slotForChild:(id)arg1;
- (unsigned long long)conflictStateForChild:(id)arg1;
- (long long)manifestArchivist:(id)arg1 orderChildrenForSlotConflictResolutionByComparing:(id)arg2 to:(id)arg3;
- (void)manifestArchivist:(id)arg1 setConflictState:(unsigned long long)arg2 forChild:(id)arg3;
- (void)manifestArchivist:(id)arg1 setSlot:(id)arg2 forChild:(id)arg3;
- (unsigned long long)manifestArchivist:(id)arg1 conflictStateForChild:(id)arg2;
- (id)manifestArchivist:(id)arg1 slotForChild:(id)arg2;
- (Class)manifestArchivistSlotClassForChildren:(id)arg1;
- (void)replaceChildrenFromFileSystemSnapshot:(id)arg1 results:(id)arg2;
- (void)populateMutatorsToAddRequiredChildCounterparts:(id)arg1;
- (void)manifestArchivist:(id)arg1 populateManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromManifest:(id)arg2 manifestFileData:(id)arg3;
- (void)enumerateDescriptionAttributeComponents:(CDUnknownBlockType)arg1;
- (void)populateIssues:(id)arg1 context:(id)arg2;
- (id)requiredPixelSizeFromSlottedAssetCollectionForChild:(id)arg1;
- (id)assetRepMatchingVariant:(id)arg1 forPlatform:(id)arg2;
- (id)assetRepForSlot:(id)arg1;
- (id)assetRepForStructuredIdentifier:(id)arg1;
- (id)assetRepForIdentifier:(id)arg1;
- (id)childForIdentifier:(id)arg1;
@property(readonly, nonatomic) NSSet *children;
- (id)defaultUnqualifiedRuntimeName;
- (id)orderedSlotComponentClasses;
- (_Bool)fileStructureSnapshotChildWouldMapToModelChild:(id)arg1;
- (id)manifestContent;
- (id)manifestFileName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initializeManifestArchivist;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
