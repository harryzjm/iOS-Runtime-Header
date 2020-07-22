//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PersistentConnection/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol PCGrowthAlgorithm <NSObject>
@property(readonly, nonatomic) int growthStage;
@property(readonly, copy, nonatomic) NSDictionary *cacheInfo;
@property(readonly, nonatomic) unsigned long long countOfGrowthActions;
@property(nonatomic) _Bool minimumIntervalFallbackEnabled;
@property(nonatomic) double lastSuccessfulKeepAliveInterval;
@property(nonatomic) double maximumKeepAliveInterval;
@property(nonatomic) double minimumKeepAliveInterval;
@property(nonatomic) _Bool isServerOriginatedKeepAlive;
@property(readonly, nonatomic) double currentKeepAliveInterval;
- (void)processNextAction:(int)arg1;
- (_Bool)useIntervalIfImprovement:(double)arg1;
- (id)initWithCacheInfo:(NSDictionary *)arg1 loggingIdentifier:(NSString *)arg2 algorithmName:(NSString *)arg3;
@end
