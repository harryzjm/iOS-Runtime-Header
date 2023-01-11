//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VectorKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKPShieldVariant : PBCodable <NSCopying>
{
    CDStruct_79d0722e _textShadow;
    CDStruct_033e8ed6 *_layers;
    unsigned long long _layersCount;
    unsigned long long _layersSpace;
    CDStruct_f43f0670 _textStroke;
    CDStruct_58ec0031 _fontColor;
    CDStruct_58ec0031 _nonDigitFontColor;
    CDStruct_fae3dc92 _centerPoints;
    unsigned int _atlasIndex;
    unsigned int _backgroundColor;
    unsigned int _borderColor;
    float _capWidthLeft;
    float _capWidthRight;
    float _centerOffsetX;
    NSString *_fontName;
    float _fontSize;
    float _lineSpacing;
    unsigned int _maxDigits;
    unsigned int _minDigits;
    NSString *_nonDigitFontName;
    float _nonDigitFontSize;
    float _paddingLeft;
    float _paddingRight;
    unsigned int _quadIndex;
    float _textBaseline;
    int _textMaskColor;
    struct {
        unsigned int textShadow:1;
        unsigned int textStroke:1;
        unsigned int fontColor:1;
        unsigned int nonDigitFontColor:1;
        unsigned int atlasIndex:1;
        unsigned int backgroundColor:1;
        unsigned int borderColor:1;
        unsigned int capWidthLeft:1;
        unsigned int capWidthRight:1;
        unsigned int centerOffsetX:1;
        unsigned int fontSize:1;
        unsigned int lineSpacing:1;
        unsigned int maxDigits:1;
        unsigned int minDigits:1;
        unsigned int nonDigitFontSize:1;
        unsigned int paddingLeft:1;
        unsigned int paddingRight:1;
        unsigned int quadIndex:1;
        unsigned int textBaseline:1;
        unsigned int textMaskColor:1;
    } _has;
}

@property(nonatomic) CDStruct_58ec0031 nonDigitFontColor; // @synthesize nonDigitFontColor=_nonDigitFontColor;
@property(nonatomic) float paddingRight; // @synthesize paddingRight=_paddingRight;
@property(nonatomic) float paddingLeft; // @synthesize paddingLeft=_paddingLeft;
@property(nonatomic) float capWidthRight; // @synthesize capWidthRight=_capWidthRight;
@property(nonatomic) float capWidthLeft; // @synthesize capWidthLeft=_capWidthLeft;
@property(nonatomic) unsigned int borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) unsigned int backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) float nonDigitFontSize; // @synthesize nonDigitFontSize=_nonDigitFontSize;
@property(retain, nonatomic) NSString *nonDigitFontName; // @synthesize nonDigitFontName=_nonDigitFontName;
@property(nonatomic) CDStruct_79d0722e textShadow; // @synthesize textShadow=_textShadow;
@property(nonatomic) CDStruct_f43f0670 textStroke; // @synthesize textStroke=_textStroke;
@property(nonatomic) CDStruct_58ec0031 fontColor; // @synthesize fontColor=_fontColor;
@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(nonatomic) float centerOffsetX; // @synthesize centerOffsetX=_centerOffsetX;
@property(nonatomic) float textBaseline; // @synthesize textBaseline=_textBaseline;
@property(nonatomic) unsigned int maxDigits; // @synthesize maxDigits=_maxDigits;
@property(nonatomic) unsigned int minDigits; // @synthesize minDigits=_minDigits;
@property(nonatomic) unsigned int quadIndex; // @synthesize quadIndex=_quadIndex;
@property(nonatomic) unsigned int atlasIndex; // @synthesize atlasIndex=_atlasIndex;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasNonDigitFontColor;
@property(nonatomic) _Bool hasLineSpacing;
@property(nonatomic) float lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) _Bool hasTextMaskColor;
@property(nonatomic) int textMaskColor; // @synthesize textMaskColor=_textMaskColor;
@property(nonatomic) _Bool hasPaddingRight;
@property(nonatomic) _Bool hasPaddingLeft;
@property(nonatomic) _Bool hasCapWidthRight;
@property(nonatomic) _Bool hasCapWidthLeft;
@property(nonatomic) _Bool hasBorderColor;
@property(nonatomic) _Bool hasBackgroundColor;
- (void)setLayers:(CDStruct_033e8ed6 *)arg1 count:(unsigned long long)arg2;
- (CDStruct_033e8ed6)layerAtIndex:(unsigned long long)arg1;
- (void)addLayer:(CDStruct_033e8ed6)arg1;
- (void)clearLayers;
@property(readonly, nonatomic) CDStruct_033e8ed6 *layers;
@property(readonly, nonatomic) unsigned long long layersCount;
- (void)setCenterPoints:(float *)arg1 count:(unsigned long long)arg2;
- (float)centerPointAtIndex:(unsigned long long)arg1;
- (void)addCenterPoint:(float)arg1;
- (void)clearCenterPoints;
@property(readonly, nonatomic) float *centerPoints;
@property(readonly, nonatomic) unsigned long long centerPointsCount;
@property(nonatomic) _Bool hasNonDigitFontSize;
@property(readonly, nonatomic) _Bool hasNonDigitFontName;
@property(nonatomic) _Bool hasTextShadow;
@property(nonatomic) _Bool hasTextStroke;
@property(nonatomic) _Bool hasFontColor;
@property(nonatomic) _Bool hasFontSize;
@property(readonly, nonatomic) _Bool hasFontName;
@property(nonatomic) _Bool hasCenterOffsetX;
@property(nonatomic) _Bool hasTextBaseline;
@property(nonatomic) _Bool hasMaxDigits;
@property(nonatomic) _Bool hasMinDigits;
@property(nonatomic) _Bool hasQuadIndex;
@property(nonatomic) _Bool hasAtlasIndex;
- (void)dealloc;
- (struct CGImage *)newImageWithTextureAtlases:(id)arg1 atlasToImageCache:(id)arg2 atlasToImageCacheLock:(id)arg3 contentScale:(double)arg4 colors:(CDStruct_b3fd5d76 *)arg5;
- (Matrix_5173352a)_colorForMaskColor:(int)arg1 colors:(CDStruct_b3fd5d76 *)arg2;

@end

