//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol NSCoreTypesetterDelegate;

@interface NSCoreTypesetter
{
    CDUnknownBlockType laidOutLineFragment;
    id <NSCoreTypesetterDelegate> delegate;
    struct _NSRange characterRange;
    struct CGSize textContainerSize;
}

+ (_Bool)_allowsDefaultLineBreakStrategy;
+ (void)_maximumAscentAndDescentForRuns:(struct __CFArray *)arg1 ascender:(double *)arg2 descender:(double *)arg3;
+ (void)_lineMetricsFromAttributedString:(id)arg1 range:(struct _NSRange)arg2 typesetterBehavior:(long long)arg3 usesFontLeading:(_Bool)arg4 applySpacings:(_Bool)arg5 usesSystemFontLeading:(_Bool)arg6 usesNegativeFontLeading:(_Bool)arg7 lineHeight:(double *)arg8 baselineOffset:(double *)arg9 spacing:(double *)arg10 applicationFrameworkContext:(long long)arg11;
+ (void)_lineMetricsForAttributes:(id)arg1 typesetterBehavior:(long long)arg2 usesFontLeading:(_Bool)arg3 applySpacings:(_Bool)arg4 usesSystemFontLeading:(_Bool)arg5 usesNegativeFontLeading:(_Bool)arg6 lineHeight:(double *)arg7 baselineOffset:(double *)arg8 spacing:(double *)arg9 applicationFrameworkContext:(long long)arg10;
+ (_Bool)_supportsStringDrawingPath:(unsigned char)arg1;
@property __weak id <NSCoreTypesetterDelegate> delegate; // @synthesize delegate;
@property(copy) CDUnknownBlockType laidOutLineFragment; // @synthesize laidOutLineFragment;
@property struct CGSize textContainerSize; // @synthesize textContainerSize;
@property struct _NSRange characterRange; // @synthesize characterRange;
- (void).cxx_destruct;
- (struct CGRect)_stringDrawingCoreTextEngineWithOriginalString:(id)arg1 rect:(struct CGRect)arg2 padding:(double)arg3 context:(struct CGContext *)arg4 forceClipping:(_Bool)arg5 styledTextOptions:(id)arg6 attributes:(id)arg7 stringDrawingOptions:(long long)arg8 drawingContext:(id)arg9 wantsTextLineFragments:(_Bool)arg10 validatedAttributedString:(id)arg11 firstNonRenderedCharacterIndex:(long long *)arg12 foundSoftHyphenAtEOL:(_Bool *)arg13 enginePathUsed:(unsigned char *)arg14;
- (int)_NSFastDrawString:(id)arg1 length:(unsigned long long)arg2 attributes:(id)arg3 paragraphStyle:(id)arg4 typesetterBehavior:(long long)arg5 lineBreakMode:(long long)arg6 rect:(struct CGRect)arg7 padding:(double)arg8 cgContext:(struct CGContext *)arg9 baselineRendering:(_Bool)arg10 usesFontLeading:(_Bool)arg11 usesScreenFont:(_Bool)arg12 scrollable:(_Bool)arg13 syncAlignment:(_Bool)arg14 mirrored:(_Bool)arg15 boundingRectPointer:(struct CGRect *)arg16 baselineOffsetPointer:(double *)arg17 wantsTextLineFragments:(_Bool)arg18 applicationFrameworkContext:(long long)arg19;
- (void)layout;
- (void)dealloc;
- (id)init;

@end

