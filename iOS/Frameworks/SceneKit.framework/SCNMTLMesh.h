//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTLStageInputOutputDescriptor, MTLVertexDescriptor, NSArray;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNMTLMesh : NSObject
{
    long long _mutabilityTimestamp;
    MTLVertexDescriptor *_vertexDescriptor;
    MTLVertexDescriptor *_tessellationVertexDescriptor;
    unsigned long long _vertexDescriptorHash;
    unsigned long long _tessellationVertexDescriptorHash;
    NSArray *_buffers;
    NSArray *_elements;
    MTLStageInputOutputDescriptor *_stageDescriptor;
    id <MTLBuffer> _volatileBuffer;
    unsigned long long volatileOffset;
    unsigned long long volatileStride;
    unsigned long long volatileSize;
    long long verticesCount;
}

@property(nonatomic) long long mutabilityTimestamp; // @synthesize mutabilityTimestamp=_mutabilityTimestamp;
@property(nonatomic) long long verticesCount; // @synthesize verticesCount;
@property(nonatomic) unsigned long long volatileSize; // @synthesize volatileSize;
@property(nonatomic) unsigned long long volatileStride; // @synthesize volatileStride;
@property(nonatomic) unsigned long long volatileOffset; // @synthesize volatileOffset;
@property(retain, nonatomic) id <MTLBuffer> volatileBuffer; // @synthesize volatileBuffer=_volatileBuffer;
@property(retain, nonatomic) MTLStageInputOutputDescriptor *stageDescriptor; // @synthesize stageDescriptor=_stageDescriptor;
@property(copy, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(copy, nonatomic) NSArray *buffers; // @synthesize buffers=_buffers;
- (id)bufferForAttribute:(long long)arg1;
- (void)dealloc;
- (id)description;
@property(readonly, nonatomic) unsigned long long tessellationVertexDescriptorHash;
@property(readonly, nonatomic) MTLVertexDescriptor *tessellationVertexDescriptor; // @synthesize tessellationVertexDescriptor=_tessellationVertexDescriptor;
- (void)buildTessellationVertexDescriptorIfNeeded;
@property(readonly, nonatomic) unsigned long long vertexDescriptorHash;
@property(copy, nonatomic) MTLVertexDescriptor *vertexDescriptor;

@end
