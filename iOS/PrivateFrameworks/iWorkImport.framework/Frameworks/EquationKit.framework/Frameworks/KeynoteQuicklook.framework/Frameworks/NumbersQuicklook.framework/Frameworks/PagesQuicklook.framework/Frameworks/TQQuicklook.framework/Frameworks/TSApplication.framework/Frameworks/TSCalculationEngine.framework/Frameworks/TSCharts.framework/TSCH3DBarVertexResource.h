//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSCH3DBarExtrusionGeometry;

@interface TSCH3DBarVertexResource
{
    TSCH3DBarExtrusionGeometry *mGeometry;
}

- (id)geometry;
- (long long)capOffset;
- (long long)numCapVertices;
- (long long)verticesOffset;
- (long long)numVertices;
- (id)get;
- (void)dealloc;
- (id)initWithGeometry:(id)arg1;

@end
