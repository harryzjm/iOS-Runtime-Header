//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NUVideoCacheNode
{
}

- (id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id *)arg2;
- (id)persistentURL;
- (id)outputSettings:(out id *)arg1;
- (_Bool)tryLoadPersistentURL:(id)arg1 error:(out id *)arg2;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;

@end
