//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSCHPieElementBuilder
{
}

- (struct CGPath *)newElementPathInBody:(id)arg1 forSeries:(id)arg2 outTransform:(struct CGAffineTransform *)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5 outWedgeCenterPoint:(struct CGPoint *)arg6 outSelectionKnobLocations:(id *)arg7 withInnerRadius:(id)arg8;
- (_Bool)hasAxisLineInBody:(id)arg1 forAxis:(id)arg2 outTransform:(struct CGAffineTransform *)arg3 outLine:(CDStruct_e3b9714e *)arg4;
- (unsigned long long)countOfGridLinesInBody:(id)arg1 forAxis:(id)arg2 minor:(_Bool)arg3 outNewLineDescriptors:(struct **)arg4;
- (unsigned long long)countOfCalloutLinesForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewClipRect:(struct CGRect *)arg4;
- (unsigned long long)countOfLabelsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewTransforms:(struct CGAffineTransform **)arg4 outNewElementSizes:(struct CGSize **)arg5 outNewClipRect:(struct CGRect **)arg6 outNewStrings:(id *)arg7;
- (unsigned long long)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(struct CGRect **)arg4 outNewClipRects:(struct CGRect **)arg5 outNewElementPaths:(const struct CGPath ***)arg6 outSelectionKnobLocations:(id *)arg7 withInnerRadius:(id)arg8;
- (unsigned long long)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(struct CGRect **)arg4 outNewClipRects:(struct CGRect **)arg5 outNewElementPaths:(const struct CGPath ***)arg6 outSelectionKnobLocations:(id *)arg7 forHighlightPath:(_Bool)arg8;

@end
