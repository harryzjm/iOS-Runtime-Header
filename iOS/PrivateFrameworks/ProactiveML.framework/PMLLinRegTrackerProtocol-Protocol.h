//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class PMLSparseMatrix, PMLSparseVector;

@protocol PMLLinRegTrackerProtocol <PMLPlistAndChunksSerializableProtocol>
- (void)trackObjectiveFeatures:(PMLSparseVector *)arg1 featureMatrix:(PMLSparseMatrix *)arg2 minibatchSize:(unsigned long long)arg3 support:(float)arg4;
@end
