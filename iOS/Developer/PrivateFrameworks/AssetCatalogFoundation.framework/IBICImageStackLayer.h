//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IBICCatalogContentReference, IBICManifestArchivist, NSString, NSValue;

@interface IBICImageStackLayer
{
    IBICManifestArchivist *_manifestArchivist;
    int _blendMode;
    IBICCatalogContentReference *_contentReference;
    NSValue *_frameCenter;
    NSValue *_frameSize;
    double _opacity;
}

+ (id)createDefaultInstancesForUnitTesting;
+ (Class)requiredChildrenClass;
+ (id)contentReferenceTypeName;
+ (id)classNameComponents;
+ (id)catalogItemFileExtension;
+ (id)keysThatImpactDisplayOrder;
+ (_Bool)fileNameIsIdentifier;
+ (Class)requiredParentClass;
+ (id)defaultInstanceWithChildSlots:(id)arg1;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(_Bool)arg2;
+ (id)defaultEmbeddedInstanceForIdioms:(id)arg1 enforceStrictIdioms:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(retain, nonatomic) NSValue *frameSize; // @synthesize frameSize=_frameSize;
@property(retain, nonatomic) NSValue *frameCenter; // @synthesize frameCenter=_frameCenter;
@property(copy, nonatomic) IBICCatalogContentReference *contentReference; // @synthesize contentReference=_contentReference;
- (_Bool)isEqualForUnitTests:(id)arg1;
- (CDStruct_2a4d9400)taggingSupport;
- (Class)expectedReferenceType;
- (void)populateIssues:(id)arg1 context:(id)arg2;
- (id)runtimeNamespaceQualifier;
- (id)effectiveImageRepGivenCandidates:(CDUnknownBlockType)arg1 scale:(id)arg2;
- (id)effectiveFrameGivenImageRepCandidates:(CDUnknownBlockType)arg1 scale:(id)arg2;
- (id)effectiveFrameSizeGivenImageRepCandidates:(CDUnknownBlockType)arg1 scale:(id)arg2;
- (_Bool)providesBookmarkTitleForChild:(id)arg1;
- (id)parent;
- (void)enumerateDescriptionAttributeComponents:(CDUnknownBlockType)arg1;
- (_Bool)manifestArchivist:(id)arg1 childHasDataToRecordInManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 populateManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromManifest:(id)arg2 manifestFileData:(id)arg3;
- (_Bool)manifestArchivist:(id)arg1 validateManifest:(id)arg2 results:(id)arg3;
- (void)replaceChildrenFromFileSystemSnapshot:(id)arg1 results:(id)arg2;
- (id)manifestContent;
- (id)manifestFileName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

