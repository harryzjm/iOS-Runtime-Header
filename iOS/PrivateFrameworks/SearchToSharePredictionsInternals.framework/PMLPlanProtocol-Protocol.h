//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchToSharePredictionsInternals/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class NSDictionary, NSString;

@protocol PMLPlanProtocol <PMLPlistAndChunksSerializableProtocol>
@property(readonly, nonatomic) _Bool isSynchronous;
@property(readonly, nonatomic) NSString *planId;
- (NSDictionary *)runWhile:(_Bool (^)(void))arg1 didFinish:(_Bool *)arg2;
@end
