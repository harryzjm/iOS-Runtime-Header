//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreThemeDefinition/NSCopying-Protocol.h>

@class NSArray, NSDate, NSSet, NSString, NSURL, NSValue;

@interface TDNamedAssetImportInfo : NSObject <NSCopying>
{
    _Bool _preservesVectorRepresentation;
    _Bool _optOutOfThinning;
    _Bool _isFlippable;
    _Bool _cubeMap;
    short _autoscalingType;
    int _objectVersion;
    NSString *_name;
    long long _nameIdentifier;
    NSURL *_fileURL;
    NSDate *_modificationDate;
    long long _idiom;
    long long _subtype;
    unsigned long long _scaleFactor;
    long long _renditionType;
    long long _resizingMode;
    long long _templateRenderingMode;
    long long _sizeClassHorizontal;
    long long _sizeClassVertical;
    long long _displayGamut;
    long long _layoutDirection;
    unsigned long long _memoryClass;
    unsigned long long _graphicsClass;
    long long _graphicsFeatureSetClass;
    long long _compressionType;
    double _lossyCompressionQuality;
    NSSet *_tags;
    NSString *_universalTypeIdentifier;
    NSArray *_containedImageNames;
    NSArray *_layerReferences;
    unsigned long long _textureWidth;
    unsigned long long _textureHeight;
    unsigned long long _textureDepth;
    unsigned long long _arrayIndex;
    long long _texturePixelFormat;
    long long _textureInterpretation;
    NSArray *_textureInfos;
    long long _colorSpaceID;
    NSArray *_colorComponents;
    NSString *_systemColorName;
    NSString *_fontName;
    double _fontSize;
    NSString *_foregroundColorName;
    NSString *_backgroundColorName;
    long long _backgroundColorSpaceID;
    NSArray *_backgroundColorComponents;
    double _maxPointSize;
    double _minPointSize;
    NSValue *_iconSize;
    NSString *_appearanceName;
    long long _appearanceIdentifier;
    struct CGSize _resizableSliceSize;
    struct CGSize _physicalSizeInMeters;
    struct CGSize _canvasSize;
    CDStruct_3c058996 _sliceInsets;
    struct CGRect _alignmentRect;
    CDStruct_14d5dc5e _transformation;
}

@property(nonatomic) long long appearanceIdentifier; // @synthesize appearanceIdentifier=_appearanceIdentifier;
@property(copy, nonatomic) NSString *appearanceName; // @synthesize appearanceName=_appearanceName;
@property(copy, nonatomic) NSValue *iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) double minPointSize; // @synthesize minPointSize=_minPointSize;
@property(nonatomic) double maxPointSize; // @synthesize maxPointSize=_maxPointSize;
@property(copy, nonatomic) NSArray *backgroundColorComponents; // @synthesize backgroundColorComponents=_backgroundColorComponents;
@property(nonatomic) long long backgroundColorSpaceID; // @synthesize backgroundColorSpaceID=_backgroundColorSpaceID;
@property(copy, nonatomic) NSString *backgroundColorName; // @synthesize backgroundColorName=_backgroundColorName;
@property(copy, nonatomic) NSString *foregroundColorName; // @synthesize foregroundColorName=_foregroundColorName;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(retain, nonatomic) NSString *systemColorName; // @synthesize systemColorName=_systemColorName;
@property(copy, nonatomic) NSArray *colorComponents; // @synthesize colorComponents=_colorComponents;
@property(nonatomic) long long colorSpaceID; // @synthesize colorSpaceID=_colorSpaceID;
@property(copy, nonatomic) NSArray *textureInfos; // @synthesize textureInfos=_textureInfos;
@property(nonatomic) long long textureInterpretation; // @synthesize textureInterpretation=_textureInterpretation;
@property(nonatomic) long long texturePixelFormat; // @synthesize texturePixelFormat=_texturePixelFormat;
@property(nonatomic) unsigned long long arrayIndex; // @synthesize arrayIndex=_arrayIndex;
@property(nonatomic) _Bool cubeMap; // @synthesize cubeMap=_cubeMap;
@property(nonatomic) unsigned long long textureDepth; // @synthesize textureDepth=_textureDepth;
@property(nonatomic) unsigned long long textureHeight; // @synthesize textureHeight=_textureHeight;
@property(nonatomic) unsigned long long textureWidth; // @synthesize textureWidth=_textureWidth;
@property(copy, nonatomic) NSArray *layerReferences; // @synthesize layerReferences=_layerReferences;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
@property(nonatomic) int objectVersion; // @synthesize objectVersion=_objectVersion;
@property(nonatomic) CDStruct_14d5dc5e transformation; // @synthesize transformation=_transformation;
@property(nonatomic) struct CGSize physicalSizeInMeters; // @synthesize physicalSizeInMeters=_physicalSizeInMeters;
@property(copy, nonatomic) NSArray *containedImageNames; // @synthesize containedImageNames=_containedImageNames;
@property(copy, nonatomic) NSString *universalTypeIdentifier; // @synthesize universalTypeIdentifier=_universalTypeIdentifier;
@property(copy, nonatomic) NSSet *tags; // @synthesize tags=_tags;
@property(nonatomic) double lossyCompressionQuality; // @synthesize lossyCompressionQuality=_lossyCompressionQuality;
@property(nonatomic) long long compressionType; // @synthesize compressionType=_compressionType;
@property(nonatomic) long long graphicsFeatureSetClass; // @synthesize graphicsFeatureSetClass=_graphicsFeatureSetClass;
@property(nonatomic) unsigned long long graphicsClass; // @synthesize graphicsClass=_graphicsClass;
@property(nonatomic) unsigned long long memoryClass; // @synthesize memoryClass=_memoryClass;
@property(nonatomic) _Bool isFlippable; // @synthesize isFlippable=_isFlippable;
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(nonatomic) long long displayGamut; // @synthesize displayGamut=_displayGamut;
@property(nonatomic) long long sizeClassVertical; // @synthesize sizeClassVertical=_sizeClassVertical;
@property(nonatomic) long long sizeClassHorizontal; // @synthesize sizeClassHorizontal=_sizeClassHorizontal;
@property(nonatomic) struct CGRect alignmentRect; // @synthesize alignmentRect=_alignmentRect;
@property(nonatomic) _Bool optOutOfThinning; // @synthesize optOutOfThinning=_optOutOfThinning;
@property(nonatomic) long long templateRenderingMode; // @synthesize templateRenderingMode=_templateRenderingMode;
@property(nonatomic) short autoscalingType; // @synthesize autoscalingType=_autoscalingType;
@property(nonatomic) _Bool preservesVectorRepresentation; // @synthesize preservesVectorRepresentation=_preservesVectorRepresentation;
@property(nonatomic) struct CGSize resizableSliceSize; // @synthesize resizableSliceSize=_resizableSliceSize;
@property(nonatomic) long long resizingMode; // @synthesize resizingMode=_resizingMode;
@property(nonatomic) long long renditionType; // @synthesize renditionType=_renditionType;
@property(nonatomic) CDStruct_3c058996 sliceInsets; // @synthesize sliceInsets=_sliceInsets;
@property(nonatomic) unsigned long long scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) long long subtype; // @synthesize subtype=_subtype;
@property(nonatomic) long long idiom; // @synthesize idiom=_idiom;
@property(copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(nonatomic) long long nameIdentifier; // @synthesize nameIdentifier=_nameIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
@property(nonatomic) _Bool isTemplate;
- (long long)renditionSubtype;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

