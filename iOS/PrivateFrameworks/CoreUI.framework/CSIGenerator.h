//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CUIPSDGradient, CUIShapeEffectPreset, NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSSet, NSString;

@interface CSIGenerator : NSObject
{
    struct CGSize _size;
    NSString *_name;
    NSString *_utiType;
    NSMutableArray *_slices;
    NSMutableArray *_bitmaps;
    NSMutableArray *_metrics;
    NSMutableArray *_layerReferences;
    _Bool _isFPOHint;
    _Bool _isExcludedFromFilter;
    _Bool _isVectorBased;
    long long _templateRenderingMode;
    _Bool _allowsMultiPassEncoding;
    _Bool _allowsOptimalRowbytesPacking;
    _Bool _optOutOfThinning;
    _Bool _preservedVectorRepresentation;
    _Bool _isFlippable;
    _Bool _isTintable;
    short _colorSpaceID;
    short _layout;
    unsigned int _scaleFactor;
    CUIPSDGradient *_gradient;
    NSData *_rawData;
    CUIShapeEffectPreset *_effectPreset;
    int _blendMode;
    double _opacity;
    NSDate *_modtime;
    unsigned int _pixelFormat;
    int _exifOrientation;
    unsigned long long _rowbytes;
    NSString *_assetPackIdentifier;
    NSSet *_externalTags;
    struct CGRect _externalReferenceFrame;
    unsigned short _linkLayout;
    struct CGSize _originalUncroppedSize;
    struct CGRect _alphaCroppedFrame;
    NSArray *_explicitlyPackedContents;
    double _compressionQuality;
    long long _compressionType;
    _Bool _isCubeMap;
    long long _textureFormat;
    long long _textureInterpretation;
    NSMutableArray *_mipReferences;
    _Bool _textureOpaque;
    NSArray *_colorComponents;
    NSDictionary *_sizesByIndex;
    _Bool _clampMetrics;
}

+ (int)fileEncoding;
+ (void)setFileEncoding:(int)arg1;
+ (void)initialize;
@property(nonatomic) _Bool clampMetrics; // @synthesize clampMetrics=_clampMetrics;
@property(copy, nonatomic) NSDictionary *sizesByIndex; // @synthesize sizesByIndex=_sizesByIndex;
@property(copy, nonatomic) NSArray *colorComponents; // @synthesize colorComponents=_colorComponents;
@property(nonatomic) _Bool textureOpaque; // @synthesize textureOpaque=_textureOpaque;
@property(readonly, nonatomic) NSArray *mipReferences; // @synthesize mipReferences=_mipReferences;
@property(nonatomic) long long textureInterpretation; // @synthesize textureInterpretation=_textureInterpretation;
@property(nonatomic) long long textureFormat; // @synthesize textureFormat=_textureFormat;
@property(nonatomic) _Bool cubemap; // @synthesize cubemap=_isCubeMap;
@property(nonatomic) _Bool isTintable; // @synthesize isTintable=_isTintable;
@property(nonatomic) _Bool isFlippable; // @synthesize isFlippable=_isFlippable;
@property(nonatomic) _Bool preservedVectorRepresentation; // @synthesize preservedVectorRepresentation=_preservedVectorRepresentation;
@property(nonatomic) _Bool optOutOfThinning; // @synthesize optOutOfThinning=_optOutOfThinning;
@property(nonatomic) _Bool allowsOptimalRowbytesPacking; // @synthesize allowsOptimalRowbytesPacking=_allowsOptimalRowbytesPacking;
@property(nonatomic) _Bool allowsMultiPassEncoding; // @synthesize allowsMultiPassEncoding=_allowsMultiPassEncoding;
@property(nonatomic) struct CGRect alphaCroppedFrame; // @synthesize alphaCroppedFrame=_alphaCroppedFrame;
@property(nonatomic) struct CGSize originalUncroppedSize; // @synthesize originalUncroppedSize=_originalUncroppedSize;
@property(nonatomic) int exifOrientation; // @synthesize exifOrientation=_exifOrientation;
@property(copy, nonatomic) NSDate *modtime; // @synthesize modtime=_modtime;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(retain, nonatomic) CUIShapeEffectPreset *effectPreset; // @synthesize effectPreset=_effectPreset;
@property(readonly, nonatomic) NSArray *layerReferences; // @synthesize layerReferences=_layerReferences;
@property(nonatomic) unsigned int pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(nonatomic) unsigned int scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(retain, nonatomic) CUIPSDGradient *gradient; // @synthesize gradient=_gradient;
@property(nonatomic) short colorSpaceID; // @synthesize colorSpaceID=_colorSpaceID;
@property(nonatomic, getter=isExcludedFromContrastFilter) _Bool excludedFromContrastFilter; // @synthesize excludedFromContrastFilter=_isExcludedFromFilter;
@property(nonatomic) long long templateRenderingMode; // @synthesize templateRenderingMode=_templateRenderingMode;
@property(nonatomic) _Bool isVectorBased; // @synthesize isVectorBased=_isVectorBased;
@property(nonatomic) _Bool isRenditionFPO; // @synthesize isRenditionFPO=_isFPOHint;
@property(copy, nonatomic) NSString *utiType; // @synthesize utiType=_utiType;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)CSIRepresentationWithCompression:(_Bool)arg1;
- (unsigned long long)writeTextureToData:(id)arg1;
- (unsigned long long)writeExternalLinkToData:(id)arg1;
- (unsigned long long)writeRawDataToData:(id)arg1;
- (unsigned long long)writeMultisizeImageSetToData:(id)arg1;
- (unsigned long long)writeColorToData:(id)arg1;
- (unsigned long long)writeGradientToData:(id)arg1;
- (void)_addNodes:(id)arg1 toNodeList:(struct _csigradientdatanode *)arg2;
- (unsigned long long)writeBitmap:(id)arg1 toData:(id)arg2 compress:(_Bool)arg3;
- (unsigned long long)writeResourcesToData:(id)arg1;
- (void)writeHeader:(struct _csiheader *)arg1 toData:(id)arg2;
- (void)formatCSIHeader:(struct _csiheader *)arg1;
- (void)addMipReference:(id)arg1;
- (void)addLayerReference:(id)arg1;
- (void)addMetrics:(CDStruct_1ba92a5e)arg1;
- (void)addSliceRect:(struct CGRect)arg1;
@property long long compressionType;
@property(nonatomic) double compressionQuality;
- (void)addBitmap:(id)arg1;
- (void)_updateCompressionInfoFor:(id)arg1;
- (_Bool)_shouldUseCompactCompressionForBitmap:(id)arg1;
- (id)rawData;
- (void)dealloc;
- (id)initWithMultisizeImageSetNamed:(id)arg1 sizesByIndex:(id)arg2;
- (id)initWithColorNamed:(id)arg1 colorSpaceID:(unsigned long long)arg2 components:(id)arg3;
- (id)initWithInternalReferenceRect:(struct CGRect)arg1 layout:(short)arg2;
- (id)initWithTextureImageWithSize:(struct CGSize)arg1 forPixelFormat:(long long)arg2 cubeMap:(_Bool)arg3;
- (id)initWithTextureForPixelFormat:(long long)arg1;
- (id)initWithLayerStackData:(id)arg1 withCanvasSize:(struct CGSize)arg2;
- (id)initWithExternalReference:(id)arg1 tags:(id)arg2;
- (id)initWithRawData:(id)arg1 pixelFormat:(unsigned int)arg2 layout:(short)arg3;
- (id)initWithExplicitlyPackedList:(id)arg1;
- (id)initWithShapeEffectPreset:(id)arg1 forScaleFactor:(unsigned int)arg2;
- (id)initWithCanvasSize:(struct CGSize)arg1 sliceCount:(unsigned int)arg2 layout:(short)arg3;

@end
