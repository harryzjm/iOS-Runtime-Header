//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CALayer, NSArray;

__attribute__((visibility("hidden")))
@interface TSCHMultiDataChartRepMultiDataBuildAnimatedLayers : NSObject
{
    CALayer *legendLayer;
    CALayer *backgroundLayer;
    CALayer *dataSetNameLayer;
    NSArray *elementLayers;
    NSArray *referenceLineLayers;
}

+ (id)animatedLayers;
@property(copy, nonatomic) NSArray *referenceLineLayers; // @synthesize referenceLineLayers;
@property(copy, nonatomic) NSArray *elementLayers; // @synthesize elementLayers;
@property(retain, nonatomic) CALayer *dataSetNameLayer; // @synthesize dataSetNameLayer;
@property(retain, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer;
@property(retain, nonatomic) CALayer *legendLayer; // @synthesize legendLayer;
- (id)layersAlreadyHaveProperTransforms;
- (id)layersRequiringGeometryTransformsBackgroundOnly:(_Bool)arg1;
- (id)elementFadingLayers;
- (id)allBackgroundFadingLayers;
- (void)dealloc;

@end

