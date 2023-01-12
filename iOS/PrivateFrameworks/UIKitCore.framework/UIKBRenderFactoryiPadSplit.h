//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryiPadSplit
{
}

- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (void)_customizeSymbolStyle:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (id)variantGeometriesForGeometry:(id)arg1 variantCount:(unsigned long long)arg2 rowLimit:(long long)arg3 annotationIndex:(unsigned long long)arg4;
- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (double)_row4ControlSegmentWidthLeft;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (double)keyInsetBottom;
- (double)symbolFrameInset;
- (double)defaultPathWeight;
- (id)backgroundTraitsForKeyplane:(id)arg1;
- (_Bool)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;
- (double)variantAnnotationTextFontSize;
- (struct CGPoint)variantAnnotationTextOffset;
- (double)skinnyKeyThreshold;
- (double)symbolImageControlKeyFontSize;
- (double)keyCornerRadius;
- (id)muttitapReverseKeyImageName;
- (id)multitapCompleteKeyImageName;
- (struct CGPoint)shiftKeyOffset;
- (struct CGPoint)deleteKeyOffset;
- (struct CGPoint)dismissKeyOffset;
- (struct CGPoint)internationalKeyOffset;

@end

