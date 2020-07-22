//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MDLMeshBuffer;

@interface MDLSubmeshTopology : NSObject
{
    id <MDLMeshBuffer> _faceTopology;
    unsigned long long _faceCount;
    id <MDLMeshBuffer> _vertexCreaseIndices;
    id <MDLMeshBuffer> _vertexCreases;
    unsigned long long _vertexCreaseCount;
    id <MDLMeshBuffer> _edgeCreaseIndices;
    id <MDLMeshBuffer> _edgeCreases;
    unsigned long long _edgeCreaseCount;
    id <MDLMeshBuffer> _holes;
    unsigned long long _holeCount;
}

@property(nonatomic) unsigned long long holeCount; // @synthesize holeCount=_holeCount;
@property(retain, nonatomic) id <MDLMeshBuffer> holes; // @synthesize holes=_holes;
@property(nonatomic) unsigned long long edgeCreaseCount; // @synthesize edgeCreaseCount=_edgeCreaseCount;
@property(retain, nonatomic) id <MDLMeshBuffer> edgeCreases; // @synthesize edgeCreases=_edgeCreases;
@property(retain, nonatomic) id <MDLMeshBuffer> edgeCreaseIndices; // @synthesize edgeCreaseIndices=_edgeCreaseIndices;
@property(nonatomic) unsigned long long vertexCreaseCount; // @synthesize vertexCreaseCount=_vertexCreaseCount;
@property(retain, nonatomic) id <MDLMeshBuffer> vertexCreases; // @synthesize vertexCreases=_vertexCreases;
@property(retain, nonatomic) id <MDLMeshBuffer> vertexCreaseIndices; // @synthesize vertexCreaseIndices=_vertexCreaseIndices;
@property(nonatomic) unsigned long long faceCount; // @synthesize faceCount=_faceCount;
@property(retain, nonatomic) id <MDLMeshBuffer> faceTopology; // @synthesize faceTopology=_faceTopology;
- (void).cxx_destruct;
- (id)initWithSubmesh:(id)arg1;

@end

