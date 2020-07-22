//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLVertexAttributeDescriptorArrayInternal, MTLVertexBufferLayoutDescriptorArrayInternal;

__attribute__((visibility("hidden")))
@interface MTLVertexDescriptorInternal
{
    MTLVertexBufferLayoutDescriptorArrayInternal *_vertexBufferArray;
    MTLVertexAttributeDescriptorArrayInternal *_attributeArray;
}

+ (id)vertexDescriptor;
- (_Bool)validateWithVertexFunction:(id)arg1 error:(id *)arg2;
- (id)newSerializedDescriptor;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)attributes;
- (id)layouts;
- (id)init;

@end

