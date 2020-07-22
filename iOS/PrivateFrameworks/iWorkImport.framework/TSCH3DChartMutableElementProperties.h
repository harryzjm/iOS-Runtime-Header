//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSCH3DArray2D, TSCH3DLabelResources, TSCH3DTransform;

__attribute__((visibility("hidden")))
@interface TSCH3DChartMutableElementProperties
{
    TSCH3DArray2D *mLightingModels;
    TSCH3DLabelResources *mLabels;
    TSCH3DTransform *mChartTransform;
    TSCH3DTransform *mElementsTransform;
}

@property(retain, nonatomic) TSCH3DTransform *elementsTransform; // @synthesize elementsTransform=mElementsTransform;
@property(retain, nonatomic) TSCH3DTransform *chartTransform; // @synthesize chartTransform=mChartTransform;
@property(retain, nonatomic) TSCH3DLabelResources *labels; // @synthesize labels=mLabels;
@property(retain, nonatomic) TSCH3DArray2D *lightingModels; // @synthesize lightingModels=mLightingModels;
- (id)renderingLightingModelForSeries:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end
