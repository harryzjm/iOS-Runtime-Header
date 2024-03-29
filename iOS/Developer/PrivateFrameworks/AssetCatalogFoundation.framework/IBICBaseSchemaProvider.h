//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IBICColorSpace, IBICContrastAppearance, IBICFileType, IBICHeightClass, IBICIdiom, IBICLanguageDirection, IBICLocale, IBICLuminosityAppearance, IBICPlatform, IBICScale, IBICScreenWidth, IBICSize, IBICSubtype, IBICVibrancyAppearance, IBICWidthClass, NSArray, NSDictionary, NSSet, NSString;

@interface IBICBaseSchemaProvider : NSObject
{
    IBICPlatform *_universalPlatform;
    IBICIdiom *_universalIdiom;
    IBICScale *_anyScale;
    IBICScale *_oneXScale;
    IBICScale *_twoXScale;
    IBICScale *_threeXScale;
    IBICFileType *_pngFileType;
    IBICFileType *_jpegFileType;
    IBICFileType *_pdfFileType;
    IBICFileType *_gifFileType;
    IBICFileType *_exrFileType;
    IBICFileType *_svgFileType;
    IBICFileType *_avicFileType;
    IBICFileType *_heicFileType;
    IBICFileType *_heifFileType;
    IBICFileType *_arkit3DFileType;
    NSSet *_allSupportedBitmapFileTypes;
    NSSet *_allAlphaEnabledBitmapFileTypes;
    NSSet *_allVectorFileTypes;
    NSSet *_allVectorAndBitmapFileTypes;
    NSSet *_arkit3DFileTypes;
    NSArray *_modelFileTypes;
    IBICWidthClass *_anyWidthClass;
    IBICWidthClass *_compactWidthClass;
    IBICWidthClass *_regularWidthClass;
    IBICHeightClass *_anyHeightClass;
    IBICHeightClass *_compactHeightClass;
    IBICHeightClass *_regularHeightClass;
    IBICColorSpace *_anyColorSpace;
    IBICColorSpace *_sRGBColorSpace;
    IBICColorSpace *_P3ColorSpace;
    NSDictionary *_graphicsFeatureSetInspectorLabels;
    NSSet *_graphicsFeatureSetsToHideInSuggestionSets;
    IBICLuminosityAppearance *_anyLightness;
    IBICLuminosityAppearance *_darkAppearance;
    IBICLuminosityAppearance *_lightAppearance;
    IBICContrastAppearance *_anyContrast;
    IBICContrastAppearance *_highContrast;
    IBICVibrancyAppearance *_anyVibrancy;
    IBICVibrancyAppearance *_vibrant;
    IBICSubtype *_anySubtype;
    IBICScreenWidth *_anyScreenWidth;
    IBICSize *_size1024;
    IBICLanguageDirection *_anyLanguageDirection;
    IBICLanguageDirection *_leftToRightLanguageDirection;
    IBICLanguageDirection *_rightToLeftLanguageDirection;
    IBICLocale *_developmentLanguageLocale;
    NSArray *_cubeFaces;
    NSArray *_mipmapLevels;
}

- (void).cxx_destruct;
- (_Bool)hideGraphicsFeatureSets;
- (void)registerSystemCatalogColors:(id)arg1;
- (void)registerBaseColorSetComponentImplications:(id)arg1;
- (void)registerBaseModelSetComponentImplications:(id)arg1;
- (void)registerBaseDataSetComponentImplications:(id)arg1;
- (void)registerMipmapLevelSetComponentImplications:(id)arg1;
- (void)registerCubeTextureSetComponentImplications:(id)arg1;
- (void)registerFlatTextureSetComponentImplications:(id)arg1;
- (void)registerImageSetComponentImplications:(id)arg1;
- (void)registerAppIconSetComponentImplications:(id)arg1;
- (void)applyGraphicsFeatureSetComponentImplicationsForSlotClass:(Class)arg1 schema:(id)arg2;
- (void)applyMemoryClassComponentImplicationsForSlotClass:(Class)arg1 schema:(id)arg2;
- (void)applyColorSpaceComponentImplicationsForSlotClass:(Class)arg1 schema:(id)arg2;
- (void)applyScaleComponentImplicationsForSlotClass:(Class)arg1 schema:(id)arg2;
- (void)registerSchemaComponents:(id)arg1;
- (void)registerSuggestionSets:(id)arg1;
- (void)registerContrastSuggestionSets:(id)arg1 forSlotClasses:(id)arg2;
- (void)registerLuminositySuggestionSets:(id)arg1 forSlotClasses:(id)arg2;
- (void)registerGPUCapabilitySuggestionSets:(id)arg1 forSlotClasses:(id)arg2;
- (void)registerSizeClassSuggestionSets:(id)arg1 forSlotClasses:(id)arg2;
- (void)registerColorSpaceSuggestionSets:(id)arg1 forSlotClasses:(id)arg2 baseDisplayOrder:(double)arg3;
- (void)registerScaleSuggestionSets:(id)arg1 forSlotClasses:(id)arg2;
- (id)registerIdiomSuggestionSets:(id)arg1 forSlotClasses:(id)arg2;
- (void)captureExistingSlotComponents:(id)arg1;
- (void)registerSlotComponents:(id)arg1;
- (void)registerFileTypes:(id)arg1;
- (void)registerClasses:(id)arg1;
- (double)precedence;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

