//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNClusteringWritable-Protocol.h>

__attribute__((visibility("hidden")))
@interface VNGreedyClusteringReadWrite <VNClusteringWritable>
{
    struct shared_ptr<vision::mod::GreedyClustererFaces> m_ClusteringImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getClustersWithOptions:(id)arg1 error:(id *)arg2;
- (_Bool)cancelClustering:(id *)arg1;
- (long long)_cancellableUpdate:(struct ImageDescriptorBufferFloat32 *)arg1 facesToMove:(vector_22dfb71c *)arg2;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end
