//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSCHChartFeatureBubble
{
}

- (id)filteredStyleOwnersFromStyleOwners:(id)arg1;
- (int)representativeGridValueAxisType;
- (unsigned long long)gridOffsetToSeriesForScatterFormat:(int)arg1;
- (_Bool)supportsShowLabelsInFrontOption;
- (_Bool)supportsConnectingLines;
- (_Bool)supportsBubbleOptions;
- (id)supportedSeriesTypes;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (id)supportedAxisScales;
- (id)genericToSpecificPropertyMap;
- (id)defaultDataFileName;
- (Class)presetImagerClass;
- (unsigned long long)styleIndexForAxisID:(id)arg1;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;
- (_Bool)supportsEditingForAxisID:(id)arg1;
- (void)p_initializeAxisIDs;
- (_Bool)supportsSharedAndSeparateX;

@end
