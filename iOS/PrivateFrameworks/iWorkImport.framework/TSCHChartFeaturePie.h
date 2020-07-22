//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSCHChartFeaturePie
{
}

- (_Bool)supportsReferenceLines;
- (int)representativeGridValueAxisType;
- (unsigned long long)maxCellsToCheckForGridValueType;
- (_Bool)supportsCategoryLabelsInChartRangeEditor;
- (_Bool)supportsMoreThanOneLiveCategory;
- (id)initialSceneWithChartInfo:(id)arg1 layoutSettings:(CDStruct_44ada6bf)arg2;
- (Class)presetImagerClass;
- (_Bool)supportsPercentNumberFormatting;
- (_Bool)supportsLabelExplosion;
- (_Bool)supportsElementSeriesNames;
- (_Bool)supportsBorderFrame;
- (_Bool)isPie;
- (_Bool)supportsErrorBars;
- (_Bool)supportsTrendLines;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (_Bool)supportsBackgroundFill;
- (_Bool)supportsGroupedShadows;
- (id)userInterfaceName;
- (id)genericToSpecificPropertyMap;
- (id)defaultDataFileName;
- (unsigned long long)styleIndexForAxisID:(id)arg1;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;
- (void)p_initializeAxisIDs;
- (int)deprecated3DShadowSpecificProperty;
- (int)deprecated3DBevelEdgesSpecificProperty;

@end

