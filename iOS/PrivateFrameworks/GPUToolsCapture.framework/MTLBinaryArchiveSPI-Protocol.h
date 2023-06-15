//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GPUToolsCapture/MTLBinaryArchive-Protocol.h>

@class MTLComputePipelineDescriptor, MTLMeshRenderPipelineDescriptor, MTLRenderPipelineDescriptor, MTLStitchedLibraryDescriptor, MTLTileRenderPipelineDescriptor, NSArray, NSMutableArray, NSString, NSURL;
@protocol MTLBinaryArchive, MTLBinaryArchiveSPI, NSObject;

@protocol MTLBinaryArchiveSPI <MTLBinaryArchive>
@property(readonly) NSArray *keys;
@property(readonly) unsigned long long options;
- (_Bool)enumerateArchivesFromPipelineCollection:(_Bool (^)(struct *, NSObject<OS_dispatch_data> *))arg1;
- (_Bool)enumerateArchivesFromBackingFile:(_Bool (^)(struct *, NSObject<OS_dispatch_data> *))arg1;
- (struct MTLPipelineCollection *)pipelineCollection;
- (_Bool)storeMeshRenderPipelineDescriptor:(MTLMeshRenderPipelineDescriptor *)arg1;
- (_Bool)storeTileRenderPipelineDescriptor:(MTLTileRenderPipelineDescriptor *)arg1;
- (_Bool)storeRenderPipelineDescriptor:(MTLRenderPipelineDescriptor *)arg1;
- (_Bool)storeComputePipelineDescriptor:(MTLComputePipelineDescriptor *)arg1;
- (_Bool)addLibraryWithDescriptor:(MTLStitchedLibraryDescriptor *)arg1 error:(id *)arg2;
- (_Bool)addMeshRenderPipelineFunctionsWithDescriptor:(MTLMeshRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)addMeshRenderPipelineFunctionsWithDescriptor:(MTLMeshRenderPipelineDescriptor *)arg1 error:(id *)arg2;
- (_Bool)addTileRenderPipelineFunctionsWithDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)addRenderPipelineFunctionsWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)addComputePipelineFunctionsWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (NSString *)formattedDescription:(unsigned long long)arg1;
- (_Bool)serializeToURL:(NSURL *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)recompileToArchive:(id <MTLBinaryArchiveSPI>)arg1 error:(id *)arg2;
- (NSMutableArray *)archiveFunctionIds;
- (unsigned long long)recompilablePipelineCount;
- (void)initMetalScriptWithArchive:(id <MTLBinaryArchive>)arg1;
- (id <NSObject>)newPipelineDescriptorAtIndex:(unsigned long long)arg1 pipelineType:(unsigned int *)arg2 error:(id *)arg3;
@end

