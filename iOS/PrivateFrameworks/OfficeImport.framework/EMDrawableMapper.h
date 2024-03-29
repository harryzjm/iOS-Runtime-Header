//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface EMDrawableMapper
{
    double *mRowGrid;
    double *mColumnGrid;
}

+ (_Bool)isAnchorRelative:(id)arg1;
- (void)mapTextBoxAt:(id)arg1 withState:(id)arg2;
- (struct CGRect)mapAnchorToRect:(id)arg1 rowGrid:(double *)arg2 columnGrid:(double *)arg3;
- (struct CGPoint)anchorMarkerToPosition:(struct EDCellAnchorMarker)arg1 rowGrid:(double *)arg2 columnGrid:(double *)arg3 start:(_Bool)arg4 relative:(_Bool)arg5;
- (struct CGRect)getImageRect;
- (void)mapBounds;
- (void)setBoundingBox;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithOADDrawable:(id)arg1 rowGrid:(double *)arg2 columnGrid:(double *)arg3;
- (id)initWithChartDrawable:(id)arg1 box:(struct CGRect)arg2 parent:(id)arg3;
- (id)initWithOADDrawable:(id)arg1 parent:(id)arg2;
- (void)mapDiagramAt:(id)arg1 withState:(id)arg2;
- (void)mapChartAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2;
- (id)workbookMapper;
- (id)worksheetMapper;

@end

