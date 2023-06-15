//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SCNMTLBuffer;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNMTLMeshElement : NSObject
{
    unsigned long long _primitiveType;
    long long _indexCount;
    unsigned long long _instanceCount;
    long long _sharedIndexBufferOffset;
    SCNMTLBuffer *_indexBuffer;
    id <MTLBuffer> _drawIndexedPrimitivesIndirectBuffer;
    unsigned long long _indexType;
    long long _effectiveIndexOffset;
    long long _effectiveIndexCount;
    long long _drawIndexedPrimitivesIndirectBufferOffset;
}

- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

