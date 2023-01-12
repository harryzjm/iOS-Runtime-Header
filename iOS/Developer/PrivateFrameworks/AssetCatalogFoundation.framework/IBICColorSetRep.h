//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IBICColor, NSString;

@interface IBICColorSetRep
{
    IBICColor *_color;
    NSString *_referenceColorName;
    NSString *_referenceColorPlatform;
    long long _componentInterpretation;
}

+ (id)contentReferenceTypeName;
+ (Class)slottedAssetClass;
+ (Class)repIdentifierClass;
+ (id)assetRepWithSlot:(id)arg1 fileName:(id)arg2 explicitlyUnassigned:(_Bool)arg3;
+ (id)assetRepWithRepIdentifier:(id)arg1;
+ (id)createDefaultInstancesForUnitTesting;
- (void).cxx_destruct;
@property(nonatomic) long long componentInterpretation; // @synthesize componentInterpretation=_componentInterpretation;
@property(copy, nonatomic) NSString *referenceColorPlatform; // @synthesize referenceColorPlatform=_referenceColorPlatform;
@property(copy, nonatomic) NSString *referenceColorName; // @synthesize referenceColorName=_referenceColorName;
@property(retain, nonatomic) IBICColor *color; // @synthesize color=_color;
- (_Bool)isDraggable;
- (id)copyUsingSlot:(id)arg1 andFileName:(id)arg2;
- (_Bool)isEqualForUnitTests:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)effectiveModificationDateForCARCompiler;
- (_Bool)isMinimallyFitForCompiling;
- (CDStruct_2a4d9400)taggingSupport;
- (void)enumerateDescriptionAttributeComponents:(CDUnknownBlockType)arg1;
- (void)setSlot:(id)arg1;
- (id)structuredIdentifier;
- (id)slot;
- (id)parent;
- (id)initWithSlot:(id)arg1;
- (_Bool)populateNamedAssetImportInfo:(id)arg1 allCompiledItems:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;
- (id)representativeColorForPlatform:(id)arg1;
@property(readonly, nonatomic) IBICColor *representativeColor;

@end
