//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUINamedVectorGlyph, _UIImageContent;

__attribute__((visibility("hidden")))
@interface _UIImageCUIVectorGlyphContent
{
    CUINamedVectorGlyph *_vectorGlyph;
    _UIImageContent *_vectorContent;
    double _glyphScaleFactor;
    double _vectorScale;
    struct CGSize _sizeInPixels;
    struct CGImage *_overrideImageRef;
    _Atomic id _isMultiColor;
    _Atomic id _numberOfHierarchyLayers;
}

- (void).cxx_destruct;
@property(nonatomic) double glyphScaleFactor; // @synthesize glyphScaleFactor=_glyphScaleFactor;
- (void)dealloc;
- (void)_drawVectorGlyphWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 paletteColors:(id)arg4;
- (struct CGImage *)_provideVectorGlyphCGImageWithSize:(struct CGSize)arg1 scale:(double)arg2 paletteColors:(id)arg3;
- (void)_drawVectorGlyphWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 hierarchicalColorResolver:(CDUnknownBlockType)arg4;
- (struct CGImage *)_provideVectorGlyphCGImageWithSize:(struct CGSize)arg1 scale:(double)arg2 hierarchicalColorResolver:(CDUnknownBlockType)arg3;
- (void)_drawVectorGlyphWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 namedColorResolver:(CDUnknownBlockType)arg4;
- (struct CGImage *)_provideVectorGlyphCGImageWithSize:(struct CGSize)arg1 scale:(double)arg2 namedColorResolver:(CDUnknownBlockType)arg3;
- (struct CGImage *)_provideCGImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)_drawWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 effect:(id)arg4;
- (void)_prepareForDrawingWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3;
- (struct CGSize)sizeInPixels;
- (id)_automaticSymbolConfiguration;
- (double)variableValue;
- (unsigned long long)numberOfHierarchyLayers;
- (_Bool)containsNamedColorStyle:(id)arg1;
- (_Bool)containsNamedColorStyles;
- (id)contentWithVariableValue:(double)arg1;
- (id)contentWithCGImage:(struct CGImage *)arg1;
- (id)vectorGlyph;
- (_Bool)isVectorGlyph;
- (struct CGImage *)CGImage;
- (_Bool)_canProvideCGImageDirectly;
- (_Bool)canEmitDrawingCommands;
- (_Bool)canScaleImageToTargetResolution;
- (_Bool)canDrawImage;
- (_Bool)isCGImage;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)outlinePath;
- (double)vectorScale;
- (id)initWithScale:(double)arg1;
- (id)initWithCUIVectorGlyph:(id)arg1 scale:(double)arg2;

@end

