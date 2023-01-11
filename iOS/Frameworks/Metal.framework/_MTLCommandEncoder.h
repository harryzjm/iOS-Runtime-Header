//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString, _MTLCommandBuffer;
@protocol MTLCommandBuffer, MTLDevice, MTLFence;

@interface _MTLCommandEncoder
{
    id <MTLDevice> _device;
    _MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;
    unsigned long long _numThisEncoder;
    unsigned long long _globalTraceObjectID;
    unsigned long long _labelTraceID;
    id <MTLFence> _progressFence;
    _Bool _needsFrameworkAssistedErrorTracking;
    _Bool _isProgressTrackingEncoder;
    NSMutableArray *_debugSignposts;
}

@property(nonatomic) unsigned long long numThisEncoder; // @synthesize numThisEncoder=_numThisEncoder;
@property(readonly, nonatomic) unsigned long long globalTraceObjectID; // @synthesize globalTraceObjectID=_globalTraceObjectID;
- (void)setAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;
@property(readonly) unsigned long long dispatchType; // @dynamic dispatchType;
- (void)memoryBarrierNotificationWithResources:(const id *)arg1 count:(unsigned long long)arg2;
- (void)memoryBarrierNotificationWithScope:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=getType) unsigned long long type;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)insertDebugSignpost:(id)arg1;
- (void)endEncoding;
- (void)preEndEncoding;
- (unsigned long long)getDriverUniqueID;
- (id)commandBuffer;
@property(readonly) id <MTLDevice> device;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCommandBuffer:(id)arg1;

// Remaining properties
@property(copy) NSString *label; // @dynamic label;

@end
