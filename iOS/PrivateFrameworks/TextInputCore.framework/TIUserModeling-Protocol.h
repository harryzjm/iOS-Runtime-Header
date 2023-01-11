//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/TITypingSessionAggregatedEventObserver-Protocol.h>

@class NSArray, NSNumber, NSString, TICAnalyticsMetricsKey;
@protocol TIUserModelValuesProtocol;

@protocol TIUserModeling <TITypingSessionAggregatedEventObserver>
@property(readonly, nonatomic) NSArray *keys;
- (void)addNumberToTransientCounter:(NSNumber *)arg1 forKey:(NSString *)arg2 andCandidateLength:(int)arg3 andContext:(TICAnalyticsMetricsKey *)arg4;
- (void)addToTransientCounter:(int)arg1 forKey:(NSString *)arg2 andCandidateLength:(int)arg3 andContext:(TICAnalyticsMetricsKey *)arg4;
- (void)addToDurableCounter:(int)arg1 forKey:(NSString *)arg2;
- (id <TIUserModelValuesProtocol>)valuesForKey:(TICAnalyticsMetricsKey *)arg1;
@end
