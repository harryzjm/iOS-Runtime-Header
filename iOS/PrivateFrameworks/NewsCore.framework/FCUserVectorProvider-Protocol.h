//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/NSObject-Protocol.h>

@class NSDictionary, NTPBVersionedPersonalizationVector;
@protocol FCPersonalizationAggregate;

@protocol FCUserVectorProvider <NSObject>
- (NTPBVersionedPersonalizationVector *)computePersonalizationVectorWithBaselineAggregate:(id <FCPersonalizationAggregate>)arg1 allAggregates:(NSDictionary *)arg2;
@end
