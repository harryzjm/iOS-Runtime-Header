//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOrderedSet, NSSet;

@interface IBICVectorGlyphSet
{
    long long _symbolRenderingIntent;
}

+ (id)importPriority;
+ (id)contentReferenceTypeName;
+ (id)classNameComponents;
+ (id)catalogItemFileExtensionWithAlternatesForReading;
+ (id)catalogItemFileExtension;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(_Bool)arg2;
+ (id)defaultName;
+ (Class)assetRepClass;
+ (id)createDefaultInstancesForUnitTesting;
@property(nonatomic) long long symbolRenderingIntent; // @synthesize symbolRenderingIntent=_symbolRenderingIntent;
- (_Bool)isEqualForUnitTests:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)shouldMutateChild:(id)arg1 byCopyingContentToNewSlot:(id)arg2;
- (void)manifestArchivist:(id)arg1 populateManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromManifest:(id)arg2 manifestFileData:(id)arg3;
- (void)enumerateDescriptionAttributeComponents:(CDUnknownBlockType)arg1;
- (CDStruct_2a4d9400)taggingSupport;
- (id)initializeManifestArchivist;
@property(readonly, nonatomic) NSOrderedSet *intrinsicallyOrderedChildren;
@property(readonly, nonatomic) NSSet *children;
- (id)assetRepForStructuredIdentifier:(id)arg1;
- (id)childForIdentifier:(id)arg1;
- (id)assetRepForIdentifier:(id)arg1;
- (id)conflictFreeChildForSlot:(id)arg1;
- (id)assetRepMatchingVariant:(id)arg1 forPlatform:(id)arg2;
- (id)slotForChild:(id)arg1;
- (id)assetRepForSlot:(id)arg1;

@end

