//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioMix, AVComposition, AVDepthData, AVVideoComposition, CIImage, NSDictionary, NSString, NUGeometrySpaceMap, NUImageGeometry;
@protocol NUImageProperties, NUVideoProperties;

@interface NURenderNode : NSObject
{
    _Bool _cached;
    long long _evaluatedForMode;
    unsigned long long _hashValue;
    _Bool _isGeometryNode;
    struct NSDictionary *_inputs;
    NSDictionary *_settings;
    struct NSDictionary *_xforms;
    CIImage *_cached_outputImage;
    AVDepthData *_cached_outputDepthData;
    AVComposition *_cached_outputVideo;
    AVVideoComposition *_cached_outputVideoComposition;
    AVAudioMix *_cached_outputAudioMix;
    NUImageGeometry *_cached_outputImageGeometry;
    id <NUImageProperties> _cached_imageProperties;
    id <NUVideoProperties> _cached_videoProperties;
    NUGeometrySpaceMap *_cached_geometrySpaceMap;
    NSString *_dominantInputKey;
    NSString *_spaceMapKey;
}

+ (id)nodeFromCache:(id)arg1 cache:(id)arg2;
+ (id)nodeFromCache:(id)arg1;
@property(readonly, nonatomic) NSString *spaceMapKey; // @synthesize spaceMapKey=_spaceMapKey;
@property(readonly, nonatomic) NSString *dominantInputKey; // @synthesize dominantInputKey=_dominantInputKey;
@property(retain) NUGeometrySpaceMap *cached_geometrySpaceMap; // @synthesize cached_geometrySpaceMap=_cached_geometrySpaceMap;
@property(retain) id <NUVideoProperties> cached_videoProperties; // @synthesize cached_videoProperties=_cached_videoProperties;
@property(retain) id <NUImageProperties> cached_imageProperties; // @synthesize cached_imageProperties=_cached_imageProperties;
@property(retain) NUImageGeometry *cached_outputImageGeometry; // @synthesize cached_outputImageGeometry=_cached_outputImageGeometry;
@property(retain) AVAudioMix *cached_outputAudioMix; // @synthesize cached_outputAudioMix=_cached_outputAudioMix;
@property(retain) AVVideoComposition *cached_outputVideoComposition; // @synthesize cached_outputVideoComposition=_cached_outputVideoComposition;
@property(retain) AVComposition *cached_outputVideo; // @synthesize cached_outputVideo=_cached_outputVideo;
@property(retain) AVDepthData *cached_outputDepthData; // @synthesize cached_outputDepthData=_cached_outputDepthData;
@property(retain) CIImage *cached_outputImage; // @synthesize cached_outputImage=_cached_outputImage;
@property(readonly) _Bool isGeometryNode; // @synthesize isGeometryNode=_isGeometryNode;
@property(readonly) NSDictionary *xforms; // @synthesize xforms=_xforms;
@property(readonly) NSDictionary *settings; // @synthesize settings=_settings;
@property(readonly) NSDictionary *inputs; // @synthesize inputs=_inputs;
@property(nonatomic) long long evaluatedForMode; // @synthesize evaluatedForMode=_evaluatedForMode;
@property(readonly, nonatomic) _Bool isCached; // @synthesize isCached=_cached;
- (void).cxx_destruct;
- (void)nu_updateDigest:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)_hash;
- (unsigned long long)settingsAndInputsHash;
- (_Bool)isEqualToRenderNode:(id)arg1;
- (_Bool)isEqualToSettingsAndInputs:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)descriptionSubClassHook;
- (id)_descriptionWithOffset:(long long)arg1 showInputs:(_Bool)arg2;
- (void)_appendInputsWithOffset:(long long)arg1 to:(id)arg2;
- (id)_dictionaryToSingleLineString:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)_evaluateVideoProperties:(out id *)arg1;
- (id)videoProperties:(out id *)arg1;
- (id)_evaluateImageProperties:(out id *)arg1;
- (id)imageProperties:(out id *)arg1;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)outputImageGeometry:(out id *)arg1;
- (id)_evaluateGeometrySpaceMap:(out id *)arg1;
- (id)geometryNode;
- (id)uniqueInputNode;
- (id)outputGeometrySpaceMap:(out id *)arg1;
- (_Bool)canPropagateOriginalDepthData;
- (id)_evaluateDepthData:(out id *)arg1;
- (id)originalDepthData:(out id *)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (id)outputImage:(out id *)arg1;
- (id)_evaluateAudioMix:(out id *)arg1;
- (id)outputAudioMix:(out id *)arg1;
- (_Bool)requiresAudioMix;
- (id)_evaluateVideoComposition:(out id *)arg1;
- (id)outputVideoComposition:(out id *)arg1;
- (_Bool)requiresVideoComposition;
- (id)_evaluateVideo:(out id *)arg1;
- (id)outputVideo:(out id *)arg1;
- (id)evaluateRenderDependenciesWithRequest:(id)arg1 error:(out id *)arg2;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)placeholderNodeWithCachedInputs:(struct NSDictionary *)arg1;
- (id)evaluateSettings:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (id)nodeByReplayingAgainstCache:(id)arg1 error:(out id *)arg2;
- (void)resetInput:(id)arg1 forKey:(id)arg2;
- (_Bool)hasCyclicalDependencyForInput:(id)arg1;
- (id)inputForKey:(id)arg1;
- (id)_generateSpaceMapKey;
@property(readonly) _Bool isPlaceholderNode;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)init;

@end

