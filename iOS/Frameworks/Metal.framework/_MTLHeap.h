//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _MTLHeap
{
    unsigned long long _heapResourceOptions;
    long long _heapType;
    unsigned long long _gpuAddress;
}

@property(readonly, nonatomic) unsigned long long gpuAddress; // @synthesize gpuAddress=_gpuAddress;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
@property(readonly) unsigned long long unfilteredResourceOptions;
@property(readonly) unsigned long long resourceOptions;
@property(readonly) unsigned long long hazardTrackingMode;
@property(readonly) unsigned long long storageMode;
@property(readonly) unsigned long long cpuCacheMode;
@property(readonly) long long type;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (id)newTextureWithDescriptor:(id)arg1 atOffset:(unsigned long long)arg2;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 atOffset:(unsigned long long)arg3;
- (id)initWithType:(long long)arg1 options:(unsigned long long)arg2;
- (id)init;

@end
