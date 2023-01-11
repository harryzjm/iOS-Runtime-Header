//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUnitLength;

@interface IBICARImageSet
{
    double _width;
    NSUnitLength *_unit;
}

+ (Class)requiredParentClass;
+ (_Bool)encodesCompressionForChildren;
+ (_Bool)supportsCompression;
+ (id)importPriority;
+ (id)contentReferenceTypeName;
+ (id)typeNameForIssues;
+ (id)classNameComponents;
+ (id)keyPathsForValuesAffectingHeight;
+ (id)keyPathsForValuesAffectingWidth;
+ (id)keyPathsForValuesAffectingAspectRatio;
+ (id)keyPathsForValuesAffectingSize;
+ (id)keyPathsForValuesAffectingDetectabilityEstimation;
+ (id)imagesFromPaths:(id)arg1;
+ (id)catalogItemFileExtension;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(_Bool)arg2;
+ (id)defaultName;
+ (id)createInstanceNamed:(id)arg1 baseSize:(struct CGSize)arg2 usingRenderer:(CDUnknownBlockType)arg3;
+ (id)createDefaultInstancesForUnitTesting;
+ (Class)assetRepClass;
@property(retain, nonatomic) NSUnitLength *unit; // @synthesize unit=_unit;
@property(nonatomic) double width; // @synthesize width=_width;
- (void).cxx_destruct;
- (_Bool)isEqualForUnitTests:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)enclosingResourceGroup;
- (void)manifestArchivist:(id)arg1 populateManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromManifest:(id)arg2;
- (_Bool)manifestArchivist:(id)arg1 validateManifest:(id)arg2 results:(id)arg3;
- (CDStruct_2a4d9400)taggingSupport;
- (void)enumerateDescriptionAttributeComponents:(CDUnknownBlockType)arg1;
- (_Bool)setHeight:(double)arg1 andUnit:(id)arg2;
- (_Bool)setHeight:(double)arg1 inUnit:(id)arg2;
- (id)heightInUnit:(id)arg1;
- (_Bool)setHeight:(double)arg1;
- (id)height;
- (id)widthMeasurement;
- (void)setWidth:(double)arg1 andUnit:(id)arg2;
- (void)setWidth:(double)arg1 inUnit:(id)arg2;
- (double)widthInUnit:(id)arg1;
- (void)_setUnit:(id)arg1 andConvertCurrentWidth:(_Bool)arg2;
- (_Bool)shouldPerformCV3DValidation;
- (id)aspectRatio;
- (id)size;
@property(readonly, nonatomic) double detectabilityEstimation;
- (void)setAssetData:(id)arg1;
- (id)initializeManifestArchivist;
- (id)intrinsicallyOrderedChildren;
- (id)children;
- (id)assetRepForStructuredIdentifier:(id)arg1;
- (id)childForIdentifier:(id)arg1;
- (id)assetRepForIdentifier:(id)arg1;
- (id)conflictFreeChildForSlot:(id)arg1;
- (id)assetRepMatchingVariant:(id)arg1 forPlatform:(id)arg2;
- (id)assetRepForSlot:(id)arg1;

@end
