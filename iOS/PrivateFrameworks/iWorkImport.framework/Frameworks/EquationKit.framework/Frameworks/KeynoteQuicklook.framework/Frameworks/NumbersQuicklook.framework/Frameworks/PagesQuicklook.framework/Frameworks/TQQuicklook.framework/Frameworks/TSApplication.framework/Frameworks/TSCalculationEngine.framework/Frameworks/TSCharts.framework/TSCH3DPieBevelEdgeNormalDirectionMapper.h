//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSCH3DPieBevelEdgeNormalDirectionMapper
{
    long long _topMeshOffset;
    long long _angleSteps;
    long long _radiusSteps;
    long long _angleLimit;
    long long _radiusLimit;
}

- (void)mapFromVertexArray:(const void *)arg1 normalArray:(const void *)arg2 normalMatrix:(void *)arg3 numVertices:(long long)arg4 destination:(void *)arg5;
- (id)initWithTopMeshOffset:(long long)arg1 angleSteps:(long long)arg2 radiusSteps:(long long)arg3 angleLimit:(long long)arg4 radiusLimit:(long long)arg5;

@end

