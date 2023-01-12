//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHDDefaultTextProperties, CHDLegend, CHDPlotArea, CHDTitle, CHDView3D, EDSheet, EDWorkbook, NSMutableArray, NSString, OADGraphicProperties, OADThemeOverrides;

__attribute__((visibility("hidden")))
@interface CHDChart
{
    EDSheet *mSheet;
    int mStyleId;
    _Bool mAutoTitleDeleted;
    _Bool mPlotVisibleCellsOnly;
    _Bool mMSGraph;
    _Bool mHasSharedXValues;
    _Bool mDirectionChanged;
    _Bool mHasVisibleSeriesNames;
    int mDisplayBlankCellsAs;
    CHDPlotArea *mPlotArea;
    CHDView3D *mView3D;
    CHDTitle *mTitle;
    CHDLegend *mLegend;
    EDWorkbook *mExternalData;
    OADGraphicProperties *mChartAreaGraphicProperties;
    OADGraphicProperties *mBackWallGraphicProperties;
    OADGraphicProperties *mSideWallGraphicProperties;
    OADGraphicProperties *mFloorGraphicProperties;
    CHDDefaultTextProperties *mDefaultTextProperties;
    int mChartDirection;
    struct CGRect mLogicalBounds;
    NSMutableArray *mDrawables;
    OADThemeOverrides *mThemeOverrides;
}

+ (id)binaryEffects:(_Bool)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)setVisibleSeriesNames:(_Bool)arg1;
- (_Bool)hasVisibleSeriesNames;
- (void)setDirectionChanged:(_Bool)arg1;
- (_Bool)isDirectionChanged;
- (void)setHasSharedXValues:(_Bool)arg1;
- (_Bool)hasSharedXValues;
- (void)setMSGraph:(_Bool)arg1;
- (_Bool)isMSGraph;
- (unsigned long long)categoryCount;
- (unsigned long long)seriesCount;
- (_Bool)isBinary;
- (_Bool)isScatterOrBubble;
- (_Bool)supportsMarkers;
- (_Bool)isArea;
- (_Bool)isPie;
- (_Bool)is3D;
- (id)mainType;
- (id)styleMatrix;
- (int)defaultLabelPosition;
- (id)defaultFontWithResources:(id)arg1;
- (id)defaultContentFormat;
- (unsigned long long)defaultFontIndex;
- (id)defaultSeriesTitleFont;
- (id)defaultDataLabelFont;
- (id)defaultTextFont;
- (id)defaultThemeFont;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (void)setThemeOverrides:(id)arg1;
- (id)themeOverrides;
- (id)children;
- (id)childAtIndex:(unsigned long long)arg1;
- (void)addChildren:(id)arg1;
- (void)addChild:(id)arg1;
- (unsigned long long)childCount;
- (void)setLogicalBounds:(struct CGRect)arg1;
- (struct CGRect)logicalBounds;
- (void)setDirection:(int)arg1;
- (int)direction;
- (void)setDefaultTextProperties:(id)arg1;
- (id)defaultTextProperties;
- (void)setFloorGraphicProperties:(id)arg1;
- (id)floorGraphicProperties;
- (void)setSideWallGraphicProperties:(id)arg1;
- (id)sideWallGraphicProperties;
- (void)setBackWallGraphicProperties:(id)arg1;
- (id)backWallGraphicProperties;
- (void)setChartAreaGraphicProperties:(id)arg1;
- (id)chartAreaGraphicProperties;
- (void)setExternalData:(id)arg1;
- (id)externalData;
- (void)setLegend:(id)arg1;
- (id)legend;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setView3D:(id)arg1;
- (id)view3D;
- (void)setPlotArea:(id)arg1;
- (id)plotArea;
- (void)setDisplayBlankAs:(int)arg1;
- (int)displayBlankAs;
- (void)setPlotVisibleCellsOnly:(_Bool)arg1;
- (_Bool)isPlotVisibleCellsOnly;
- (void)setAutoTitleDeleted:(_Bool)arg1;
- (_Bool)isAutoTitleDeleted;
- (void)setStyleId:(int)arg1;
- (int)styleId;
- (id)processors;
- (id)workbook;
- (void)setSheet:(id)arg1;
- (id)sheet;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

