//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TSCH3DChartPlatformSettings : NSObject
{
    NSDictionary *_settings;
}

+ (id)sharedInstance;
+ (id)p_platformSettingsDictionary;
+ (id)p_defaultSettingsDictionary;
+ (_Bool)p_isMetalEnabled;
+ (_Bool)isMetalExcludedWithCapabilities:(id)arg1;
- (void).cxx_destruct;
- (_Bool)shouldHandleResourceCacheOutOfMemory;
- (_Bool)backgroundLayoutUsesTiledRendering;
- (double)backgroundLayoutContentsScaleFactor;
- (_Bool)protectCachedShaders;
- (float)prefilteredLinesFilterRadius;
- (_Bool)useTiledFullSizeInteractiveLayer;
- (unsigned long long)highQualityShadowsSize;
- (_Bool)useHighQualityShadows;
- (float)rotationTrackerSpeed;
- (float)normalizedLabelPickingSlackForViewScale:(double)arg1 viewport:(void *)arg2;
- (float)p_labelPickingSlack;
- (int)p_labelPickingSlackMethod;
- (_Bool)useLayoutInwardForInsertionIcons;
- (_Bool)useInteractiveModeWhileSelected;
- (_Bool)knobTrackingUsesRealTimePerformanceHint;
- (_Bool)interactiveModeUsesFastPerformanceHint;
- (unsigned long long)interactiveCanvasMultisamples;
- (_Bool)interactiveCanvasCanUseHighQualityRenderer;
- (unsigned long long)resourceCacheMemoryLimitInBytes;
- (unsigned long long)labelMaxTextureSize;
- (unsigned long long)printingMaxImageSize;
- (double)printingDPI;
- (unsigned long long)insertionIconSupersamplingSamples;
- (unsigned long long)supersamplingSamples;
- (unsigned long long)supersamplingTileSize;
- (unsigned long long)buildFramebufferMemoryLimitInBytes;
- (_Bool)buildTextureRendersAsSingleImage;
- (_Bool)buildsCanUseDynamicShadows;
- (_Bool)buildsUseLowDetailedGeometries;
- (double)buildTargetFPS;
- (_Bool)buildShouldDiscardBuffers;
- (unsigned long long)buildMultisamples;
- (_Bool)buildImageDefaultAntialias;
- (unsigned long long)buildImageTileSize;
- (_Bool)skipFirstMipmapLevel;
- (_Bool)useMetal;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

