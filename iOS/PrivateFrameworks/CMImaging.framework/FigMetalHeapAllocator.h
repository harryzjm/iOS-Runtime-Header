//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FigMetalUtils;
@protocol MTLHeap;

__attribute__((visibility("hidden")))
@interface FigMetalHeapAllocator : NSObject
{
    id <MTLHeap> _heap;
    unsigned long long _alignment;
    FigMetalUtils *_utils;
    unsigned long long _memSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long memSize; // @synthesize memSize=_memSize;
@property(readonly, nonatomic) FigMetalUtils *utils; // @synthesize utils=_utils;
@property(readonly, nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
- (unsigned long long)bufferOffset:(id)arg1;
- (unsigned long long)textureOffset:(id)arg1;
- (_Bool)hasCreatedBuffer:(id)arg1;
- (_Bool)hasCreatedTexture:(id)arg1;
- (void)purgeResources;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;
- (id)newBufferWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;
- (CDStruct_4bcfbbae)getSizeAndAlignForBufferDescriptor:(id)arg1;
- (CDStruct_4bcfbbae)getSizeAndAlignForDescriptor:(id)arg1;
- (int)setupWithDescriptor:(id)arg1;
- (id)description;
- (id)initWithMetalUtils:(id)arg1;

@end

