//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAMenstrualAlgorithmsStats, NSArray;

@interface HAMenstrualAlgorithmsAnalysis : NSObject
{
    NSArray *_menstruationPredictions;
    NSArray *_fertilityPredictions;
    HAMenstrualAlgorithmsStats *_stats;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HAMenstrualAlgorithmsStats *stats; // @synthesize stats=_stats;
@property(retain, nonatomic) NSArray *fertilityPredictions; // @synthesize fertilityPredictions=_fertilityPredictions;
@property(retain, nonatomic) NSArray *menstruationPredictions; // @synthesize menstruationPredictions=_menstruationPredictions;

@end
