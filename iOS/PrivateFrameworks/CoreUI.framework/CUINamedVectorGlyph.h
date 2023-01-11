//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUICatalog;

@interface CUINamedVectorGlyph
{
    double _pointSize;
    double _lookedupScaleFactor;
    struct CGImage *_cgImageRef;
    double _fontMatchingScaleFactor;
    CUICatalog *_catalog;
    long long _layoutDirection;
    unsigned int _generatedImage:1;
    unsigned int _flippable:1;
}

+ (id)_knockoutStyleNames;
+ (id)_colorStyleNames;
- (void).cxx_destruct;
- (struct CGImage *)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize)arg2 withTintColors:(id)arg3;
- (id)makeLayerTintedWithColors:(id)arg1;
- (id)makeLayerTintedWithColor:(struct CGColor *)arg1;
- (struct CGImage *)imageTintedWithColors:(id)arg1;
- (struct CGImage *)imageTintedWithColor:(struct CGColor *)arg1;
- (struct CGImage *)maskForLayerAtIndex:(unsigned long long)arg1;
- (_Bool)layerAtIndexContainsColor:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfLayers;
- (void)_prepareDocumentfromRendition:(id)arg1 withColorResolver:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) float templateVersion;
- (id)debugDescription;
- (_Bool)generatedImage;
@property(nonatomic) double fontMatchingScaleFactor;
- (struct CGImage *)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize)arg2;
- (struct CGImage *)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize)arg2 withColorResolver:(CDUnknownBlockType)arg3;
- (struct CGImage *)_rasterizeFromRendition:(id)arg1 imageUsingScaleFactor:(double)arg2 forTargetSize:(struct CGSize)arg3;
- (struct CGSVGDocument *)referenceGlyph;
@property(readonly, nonatomic) struct CGRect contentBounds;
@property(readonly, nonatomic) struct CGRect contentBoundsUnrounded;
@property(readonly, nonatomic) struct CGRect alignmentRect;
@property(readonly, nonatomic) struct CGRect alignmentRectUnrounded;
- (id)_fillColorsOfStylesNamed:(id)arg1 inDocument:(struct CGSVGDocument *)arg2;
- (void)_setFillColor:(struct CGColor *)arg1 ofStyle:(struct CGSVGAttributeMap *)arg2;
- (struct CGColor *)_fillColorOfStyle:(struct CGSVGAttributeMap *)arg1;
- (_Bool)_containsKnockoutStylesFromRendition:(id)arg1;
- (id)makeLayerWithColorResolver:(CDUnknownBlockType)arg1;
- (struct CGImage *)_imageForTemplateRendering:(_Bool)arg1 withColorResolver:(CDUnknownBlockType)arg2;
- (struct CGImage *)imageWithColorResolver:(CDUnknownBlockType)arg1;
- (struct CGImage *)image;
- (long long)layoutDirection;
- (id)knownAvailableVectorSizes;
@property(readonly, nonatomic) _Bool isFlippable;
- (double)referencePointSize;
@property(readonly, nonatomic) double capHeight;
@property(readonly, nonatomic) double capHeightUnrounded;
@property(readonly, nonatomic) double baselineOffset;
@property(readonly, nonatomic) double baselineOffsetUnrounded;
- (double)_requestedPointSizeRatio;
- (double)pointSize;
- (long long)glyphWeight;
- (long long)glyphSize;
- (double)scale;
- (void)_performWithLockedRendition:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 pointSize:(double)arg4 fromCatalog:(id)arg5 usingRenditionKey:(id)arg6 fromTheme:(unsigned long long)arg7;

@end
