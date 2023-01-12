//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, PFParallaxLayerStack, PFPosterConfiguration, PFPosterDescriptor, PHAsset;
@protocol PISegmentationItem;

__attribute__((visibility("hidden")))
@interface PUParallaxLayerStackRadarController : NSObject
{
    PHAsset *_asset;
    PFParallaxLayerStack *_layerStack;
    id <PISegmentationItem> _segmentationItem;
    PFPosterDescriptor *_posterDescriptor;
    PFPosterConfiguration *_posterConfiguration;
    NSURL *_baseTemporaryURL;
    NSURL *_screenshotURL;
}

+ (id)visualDiagnosticsActionForAsset:(id)arg1 layerStack:(id)arg2 segmentationItem:(id)arg3 fromViewController:(id)arg4 actionBeingHandler:(CDUnknownBlockType)arg5 actionEndHandler:(CDUnknownBlockType)arg6;
+ (id)visualDiagnosticsConfigurationForAsset:(id)arg1 layerStack:(id)arg2 segmentationItem:(id)arg3;
+ (void)loadLayerStackForAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *screenshotURL; // @synthesize screenshotURL=_screenshotURL;
@property(readonly, nonatomic) NSURL *baseTemporaryURL; // @synthesize baseTemporaryURL=_baseTemporaryURL;
@property(readonly, nonatomic) PFPosterConfiguration *posterConfiguration; // @synthesize posterConfiguration=_posterConfiguration;
@property(readonly, nonatomic) PFPosterDescriptor *posterDescriptor; // @synthesize posterDescriptor=_posterDescriptor;
@property(retain, nonatomic) id <PISegmentationItem> segmentationItem; // @synthesize segmentationItem=_segmentationItem;
@property(retain, nonatomic) PFParallaxLayerStack *layerStack; // @synthesize layerStack=_layerStack;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void)saveDebugLayerStack:(id)arg1 toFileName:(id)arg2 item:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (id)initWithAsset:(id)arg1 layerStack:(id)arg2 segmentationItem:(id)arg3 posterDescriptor:(id)arg4 posterConfiguration:(id)arg5;

@end

