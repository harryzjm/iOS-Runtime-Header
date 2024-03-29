//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString, REMeshBlendShapeModelDescriptor, REMeshSkinningModelDescriptor;

__attribute__((visibility("hidden")))
@interface REMeshModelDescriptor : NSObject
{
    unsigned int _skeletonCount;
    NSString *_name;
    NSArray *_partIndices;
    REMeshSkinningModelDescriptor *_skinningModel;
    REMeshBlendShapeModelDescriptor *_blendShapeModel;
    NSArray *_lods;
    MISSING_TYPE *_boundingBoxMin;
    MISSING_TYPE *_boundingBoxMax;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) MISSING_TYPE *boundingBoxMax; // @synthesize boundingBoxMax=_boundingBoxMax;
@property(readonly, nonatomic) MISSING_TYPE *boundingBoxMin; // @synthesize boundingBoxMin=_boundingBoxMin;
@property(readonly, nonatomic) NSArray *lods; // @synthesize lods=_lods;
@property(readonly, nonatomic) REMeshBlendShapeModelDescriptor *blendShapeModel; // @synthesize blendShapeModel=_blendShapeModel;
@property(readonly, nonatomic) REMeshSkinningModelDescriptor *skinningModel; // @synthesize skinningModel=_skinningModel;
@property(readonly, nonatomic) unsigned int skeletonCount; // @synthesize skeletonCount=_skeletonCount;
@property(readonly, nonatomic) NSArray *partIndices; // @synthesize partIndices=_partIndices;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)validateWithPartCount:(unsigned long long)arg1 payloadSize:(unsigned long long)arg2 error:(id *)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 partIndices:(id)arg2 skeletonCount:(unsigned int)arg3 skinningModel:(id)arg4 blendShapeModel:(id)arg5 lods:(id)arg6 boundingBoxMin:boundingBoxMax: /* Error: Ran out of types for this method. */;
- (struct MeshModel)meshModelWithMeshModelContext:(struct MeshModelContext *)arg1 inverseBindPoseBuffers:(const void *)arg2 allocator:(struct Allocator *)arg3;
- (id)initWithResourceDefinitionModel:(const void *)arg1 inverseBindPoseAttributes:(id)arg2 payloadBuilder:(void *)arg3;
- (id)initWithMeshAssetModel:(const void *)arg1 inverseBindPoseAttributes:(id)arg2 payloadBuilder:(void *)arg3 deformationModelData:(void *)arg4;

@end

