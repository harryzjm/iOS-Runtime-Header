//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NURenderNode.h>

@class NSCache, PTCinematographyScript;

@interface PIPortraitVideoDebugDetectionsRenderNode : NURenderNode
{
    PTCinematographyScript *_cinematographyScript;
    NSCache *_labelImageCache;
    CDStruct_1b6d18a9 _renderTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSCache *labelImageCache; // @synthesize labelImageCache=_labelImageCache;
@property(nonatomic) CDStruct_1b6d18a9 renderTime; // @synthesize renderTime=_renderTime;
@property(retain, nonatomic) PTCinematographyScript *cinematographyScript; // @synthesize cinematographyScript=_cinematographyScript;
- (id)_evaluateImage:(out id *)arg1;
- (id)_imageByAddingDetection:(id)arg1 toImage:(id)arg2 isPrimary:(_Bool)arg3 canvasSize:(struct CGSize)arg4 inverseOrientation:(long long)arg5;
- (_Bool)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (id)initWithInput:(id)arg1 assetURL:(id)arg2 cinematographyState:(id)arg3 monochrome:(_Bool)arg4;

@end
