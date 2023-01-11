//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject;
@protocol MTLBuffer, OS_dispatch_semaphore;

@interface MPSInstanceAccelerationStructure
{
    struct MPSBufferRange *_innerNodeBufferRange;
    struct MPSBufferRange *_leafNodeBufferRange;
    struct MPSBufferRange *_pageTable0BufferRange;
    struct MPSBufferRange *_pageTable1BufferRange;
    struct MPSBufferRange *_pageBufferRange;
    id <MTLBuffer> _instanceOffsetBuffer;
    id <MTLBuffer> _inverseTransformBuffer;
    unsigned long long _instanceOffsetBufferIdx;
    unsigned long long _instanceOffsetBufferOffset;
    NSObject<OS_dispatch_semaphore> *_instanceOffsetSem;
    _Bool _needFlushInstanceOffsets;
    unsigned long long _transformType;
    int _rootNodeType;
    unsigned long long _leafNodeCount;
    unsigned long long _innerNodeCount;
    NSArray *_accelerationStructures;
    id <MTLBuffer> _instanceBuffer;
    unsigned long long _instanceBufferOffset;
    id <MTLBuffer> _transformBuffer;
    unsigned long long _transformBufferOffset;
    id <MTLBuffer> _maskBuffer;
    unsigned long long _maskBufferOffset;
    unsigned long long _instanceCount;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long instanceCount; // @synthesize instanceCount=_instanceCount;
@property(nonatomic) unsigned long long maskBufferOffset; // @synthesize maskBufferOffset=_maskBufferOffset;
@property(retain, nonatomic) id <MTLBuffer> maskBuffer; // @synthesize maskBuffer=_maskBuffer;
@property(nonatomic) unsigned long long transformBufferOffset; // @synthesize transformBufferOffset=_transformBufferOffset;
@property(retain, nonatomic) id <MTLBuffer> transformBuffer; // @synthesize transformBuffer=_transformBuffer;
@property(nonatomic) unsigned long long instanceBufferOffset; // @synthesize instanceBufferOffset=_instanceBufferOffset;
@property(retain, nonatomic) id <MTLBuffer> instanceBuffer; // @synthesize instanceBuffer=_instanceBuffer;
@property(retain, nonatomic) NSArray *accelerationStructures; // @synthesize accelerationStructures=_accelerationStructures;
- (void)encodeRefitToCommandBuffer:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1 group:(id)arg2;
- (id)copyInstanceAccelerationStructureWithZone:(struct _NSZone *)arg1 device:(id)arg2 group:(id)arg3;
- (void)bindResourcesWithEncoder:(id)arg1 commandBuffer:(id)arg2 retainedResources:(id)arg3;
- (void)rebuild;
- (void)flushInstanceOffsetsWithCommandBuffer:(id)arg1;
- (void)rebuildWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)validate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1 group:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)decodeInstanceAccelerationStructureWithCoder:(id)arg1;
- (id)initWithGroup:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (void)sharedInitInstanceAccelerationStructure;
- (void)setInnerNodeCount:(unsigned long long)arg1;
- (unsigned long long)innerNodeCount;
- (void)setLeafNodeCount:(unsigned long long)arg1;
- (unsigned long long)leafNodeCount;
- (void)setRootNodeType:(int)arg1;
- (int)rootNodeType;
@property(nonatomic) unsigned long long transformType;
- (void)setInstanceOffsetBuffer:(id)arg1;
- (id)instanceOffsetBuffer;
- (struct MPSBufferRange *)pageBufferRange;
- (struct MPSBufferRange *)pageTable1BufferRange;
- (struct MPSBufferRange *)pageTable0BufferRange;
- (void)setLeafNodeBufferRange:(struct MPSBufferRange *)arg1;
- (struct MPSBufferRange *)leafNodeBufferRange;
- (void)setInnerNodeBufferRange:(struct MPSBufferRange *)arg1;
- (struct MPSBufferRange *)innerNodeBufferRange;

@end

