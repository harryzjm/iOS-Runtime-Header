//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface VNGetDistancesRequest
{
    NSArray *_clusterIDs;
}

- (void).cxx_destruct;
- (_Bool)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (id)newDefaultRequestInstance;
@property(readonly, copy, nonatomic) NSArray *clusterIDs; // @synthesize clusterIDs=_clusterIDs;
- (id)initWithFaceObservations:(id)arg1 clusterIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithFaceObservations:(id)arg1 clusterIDs:(id)arg2;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

