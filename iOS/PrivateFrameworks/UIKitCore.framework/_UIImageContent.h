//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIImage, CUINamedVectorGlyph, NSString, UIBezierPath, UIImageSymbolConfiguration;

__attribute__((visibility("hidden")))
@interface _UIImageContent : NSObject
{
    double _scale;
    _Bool _isDecompressing;
    struct CGSize _sizeInPixels;
}

+ (id)empty;
@property(nonatomic) _Bool isDecompressing; // @synthesize isDecompressing=_isDecompressing;
@property(readonly, nonatomic) struct CGSize sizeInPixels; // @synthesize sizeInPixels=_sizeInPixels;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
- (id)debugQuickLookObject;
- (id)debugDescription;
- (void)_drawVectorGlyphWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 paletteColors:(id)arg4;
- (struct CGImage *)_provideVectorGlyphCGImageWithSize:(struct CGSize)arg1 scale:(double)arg2 paletteColors:(id)arg3;
- (void)_drawVectorGlyphWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 hierarchicalColorResolver:(CDUnknownBlockType)arg4;
- (struct CGImage *)_provideVectorGlyphCGImageWithSize:(struct CGSize)arg1 scale:(double)arg2 hierarchicalColorResolver:(CDUnknownBlockType)arg3;
- (void)_drawVectorGlyphWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 namedColorResolver:(CDUnknownBlockType)arg4;
- (struct CGImage *)_provideVectorGlyphCGImageWithSize:(struct CGSize)arg1 scale:(double)arg2 namedColorResolver:(CDUnknownBlockType)arg3;
- (struct CGImage *)_provideCGImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)_drawWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 effect:(id)arg4;
- (void)_prepareForDrawingWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3;
- (id)renditionWithSize:(struct CGSize)arg1 scale:(double)arg2 applyingEffect:(id)arg3;
- (id)renditionApplyingEffect:(id)arg1;
- (_Bool)_isSameSymbolImageContentExceptVariableValue:(id)arg1;
- (id)contentWithVariableValue:(double)arg1;
- (id)contentWithCGImage:(struct CGImage *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) UIBezierPath *outlinePath;
@property(readonly, nonatomic) double vectorScale;
@property(readonly, nonatomic) UIImageSymbolConfiguration *_automaticSymbolConfiguration;
@property(readonly, nonatomic) CUINamedVectorGlyph *vectorGlyph;
@property(readonly, nonatomic) double variableValue;
- (unsigned long long)numberOfHierarchyLayers;
- (_Bool)containsNamedColorStyle:(id)arg1;
- (_Bool)containsNamedColorStyles;
- (_Bool)isVectorGlyph;
- (struct CGSize)CGSVGDocumentSize;
- (_Bool)isCGSVGDocument;
@property(readonly, nonatomic) struct CGSVGDocument *CGSVGDocument;
- (struct CGSize)CGPDFPageSize;
- (_Bool)isCGPDFPage;
@property(readonly, nonatomic) struct CGPDFPage *CGPDFPage;
- (_Bool)isIOSurface;
@property(readonly, nonatomic) struct __IOSurface *IOSurface;
- (_Bool)isCIImage;
@property(readonly, nonatomic) CIImage *CIImage;
- (_Bool)optimizeContentForImageSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)contentOptimizedForImageSize:(struct CGSize)arg1;
- (_Bool)prepareContentForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)contentPreparedForDisplay;
@property(readonly, nonatomic) struct CGImage *CGImage;
- (_Bool)_canProvideCGImageDirectly;
- (_Bool)canEmitVectorDrawingCommands;
- (_Bool)canScaleImageToTargetResolution;
- (_Bool)prefersProvidingContentsDirectly;
- (_Bool)hasCGImage;
- (_Bool)hasExtendedDynamicRange;
- (_Bool)isPreparedCGImage;
- (_Bool)isCGImage;
- (_Bool)isCGImageOnly;
@property(readonly, nonatomic) NSString *typeName;
- (id)initWithScale:(double)arg1;
- (id)init;

@end

