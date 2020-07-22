//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class TSCH3Dvec3DataBuffer;

__attribute__((visibility("hidden")))
@interface TSCH3DGeometry : NSObject
{
    TSCH3Dvec3DataBuffer *mVertexBuffer;
    TSCH3Dvec3DataBuffer *mNormalBuffer;
    int mNumVertices;
    box_a3bd9649 mGeometryBounds;
}

+ (id)geometry;
- (id).cxx_construct;
@property(readonly, nonatomic) box_a3bd9649 geometryBounds;
- (id)elementsBoundsPositions;
- (id)selectionKnobPositions;
- (int)capCount;
- (unsigned int)capOffset;
- (int)geometryCount;
- (unsigned int)geometryOffset;
- (void)allocateArrays:(int)arg1;
- (void)transformArrays:(const tmat4x4_3074befe *)arg1;
- (tvec3_17f03ce0 *)normalArrayPointer;
- (tvec3_17f03ce0 *)vertexArrayPointer;
- (vector_45b393db *)normalArray;
- (vector_45b393db *)vertexArray;
- (id)normalBuffer;
- (id)vertexBuffer;
- (void)reset;
- (int)numVertices;
- (void)dealloc;
- (id)init;

@end

