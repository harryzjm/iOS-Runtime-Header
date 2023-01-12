//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreRE/NSSecureCoding-Protocol.h>

@class MISSING_TYPE, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface REMeshPartDescriptor : NSObject <NSSecureCoding>
{
    _Bool _isIndexed;
    unsigned char _doubleSidedFlag;
    unsigned char _windingOrderIsCCW;
    unsigned int _indexPayloadOffset;
    unsigned int _indexCount;
    unsigned int _vertexCount;
    unsigned int _materialIndex;
    NSString *_name;
    unsigned long long _indexType;
    NSDictionary *_coreAttributes;
    NSDictionary *_customAttributes;
    MISSING_TYPE *_boundingBoxMin;
    MISSING_TYPE *_boundingBoxMax;
    CDStruct_14d5dc5e _transform;
}

+ (id)coreAttributeNames;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_14d5dc5e transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) unsigned char windingOrderIsCCW; // @synthesize windingOrderIsCCW=_windingOrderIsCCW;
@property(readonly, nonatomic) unsigned char doubleSidedFlag; // @synthesize doubleSidedFlag=_doubleSidedFlag;
@property(readonly, nonatomic) MISSING_TYPE *boundingBoxMax; // @synthesize boundingBoxMax=_boundingBoxMax;
@property(readonly, nonatomic) MISSING_TYPE *boundingBoxMin; // @synthesize boundingBoxMin=_boundingBoxMin;
@property(readonly, nonatomic) unsigned int materialIndex; // @synthesize materialIndex=_materialIndex;
@property(readonly, nonatomic) NSDictionary *customAttributes; // @synthesize customAttributes=_customAttributes;
@property(readonly, nonatomic) NSDictionary *coreAttributes; // @synthesize coreAttributes=_coreAttributes;
@property(readonly, nonatomic) unsigned int vertexCount; // @synthesize vertexCount=_vertexCount;
@property(readonly, nonatomic) unsigned long long indexType; // @synthesize indexType=_indexType;
@property(readonly, nonatomic) _Bool isIndexed; // @synthesize isIndexed=_isIndexed;
@property(readonly, nonatomic) unsigned int indexCount; // @synthesize indexCount=_indexCount;
@property(readonly, nonatomic) unsigned int indexPayloadOffset; // @synthesize indexPayloadOffset=_indexPayloadOffset;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long indexBufferSize;
- (_Bool)validateWithPayloadSize:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)validateAttribute:(id)arg1 payloadSize:(unsigned long long)arg2 required:(_Bool)arg3 error:(id *)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 vertexCount:(unsigned int)arg2 indexCount:(unsigned int)arg3 attributes:(id)arg4 materialIndex:(unsigned int)arg5 boundingBoxMin:(unsigned char)arg6 boundingBoxMax:(unsigned char)arg7 doubleSidedFlag:(CDStruct_14d5dc5e)arg8 windingOrderIsCCW:transform: /* Error: Ran out of types for this method. */;
- (struct MeshPart)meshPartWithPayloadBuffer:(const struct Buffer *)arg1;
- (id)initWithResourceDefinition:(const void *)arg1 meshPart:(const void *)arg2 payloadBuilder:(void *)arg3;
- (id)initWithMeshAssetPart:(const void *)arg1 partTransform:(const CDStruct_14d5dc5e *)arg2 payloadBuilder:(void *)arg3;

@end
