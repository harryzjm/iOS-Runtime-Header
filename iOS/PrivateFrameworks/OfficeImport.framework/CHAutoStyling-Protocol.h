//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OfficeImport/NSObject-Protocol.h>

@class CHDMarker, OADFill, OADGraphicProperties, OADStroke;

@protocol CHAutoStyling <NSObject>
- (OADFill *)autoTextFill;
- (OADStroke *)autoStrokeForSeriesIndex:(unsigned long long)arg1;
- (void)resolveMarker:(CHDMarker *)arg1 withSeriesGraphicProperties:(OADGraphicProperties *)arg2 forSeriesIndex:(unsigned long long)arg3 clientGraphicPropertyDefaults:(id (^)(OADGraphicProperties *, NSArray *))arg4;
- (void)resolveLegendGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveMinorGridLinesGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveMajorGridLinesGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveAxisGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolvePlotAreaGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveFloorGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveWallGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveChartAreaGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveGraphicPropertiesOfErrorBar:(OADGraphicProperties *)arg1 forSeriesIndex:(unsigned long long)arg2;
- (void)resolveGraphicPropertiesOfTrendline:(OADGraphicProperties *)arg1 forSeriesIndex:(unsigned long long)arg2;
- (void)resolveGraphicPropertiesOfSeries:(OADGraphicProperties *)arg1 forSeriesIndex:(unsigned long long)arg2 isLine:(_Bool)arg3;
- (void)resolveGraphicPropertiesOfSeries:(OADGraphicProperties *)arg1 forSeriesIndex:(unsigned long long)arg2;

@optional
- (void)setAutoChartStrokeIsHollow:(_Bool)arg1;
- (void)setAutoChartFillIsHollow:(_Bool)arg1;
@end

