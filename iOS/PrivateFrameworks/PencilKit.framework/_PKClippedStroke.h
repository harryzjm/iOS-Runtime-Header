//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _PKClippedStroke
{
    vector_acef39cc _maskPaths;
    vector_1581e588 _centerlineSlices;
}

+ (id)sliceWithEraser:(const vector_acef39cc *)arg1 toClip:(id)arg2 clipType:(int)arg3;
+ (id)sliceWithEraser:(const vector_acef39cc *)arg1 toClip:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)intersectsClosedStroke:(id)arg1;
- (_Bool)intersectsLineFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 minThreshold:(double)arg3;
- (_Bool)intersectsPoint:(struct CGPoint)arg1 boundsOutset:(double)arg2 minimumStrokeThreshold:(double)arg3;
- (_Bool)intersectsPoint:(struct CGPoint)arg1;
- (void)generatePolyHull;
- (void)debugRender:(struct CGContext *)arg1;
- (struct CGPath *)selectionPathRepresentationWithPointsCount:(int *)arg1;
- (struct CGPath *)newPathRepresentation;
- (void)calculateCenterlineSlices;
- (id)sliceWithMask:(const vector_acef39cc *)arg1;
- (id)sliceWithEraser:(const vector_acef39cc *)arg1;
- (struct CGRect)_calculateBounds;
- (void)_appendPointsOfInterestForSelection:(vector_2e7754b6 *)arg1;
- (id)maskedPathRanges;
- (vector_1581e588 *)centerlineSlices;
- (id)mask;
- (vector_acef39cc *)maskPaths;
- (id)initWithInk:(id)arg1 strokePath:(id)arg2 transform:(struct CGAffineTransform)arg3 mask:(id)arg4;
- (id)initWithStroke:(id)arg1 hidden:(_Bool)arg2 version:(struct _PKStrokeID)arg3 ink:(id)arg4 transform:(struct CGAffineTransform)arg5;
- (id)initWithStroke:(id)arg1;
- (unsigned int)saveToArchive:(struct Stroke *)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 withPathData:(_Bool)arg4 parent:(id)arg5 transient:(_Bool)arg6;
- (id)initWithArchive:(const struct Stroke *)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 parent:(id)arg4 isHidden:(_Bool)arg5 transientArchiveDictionary:(id)arg6;

@end
