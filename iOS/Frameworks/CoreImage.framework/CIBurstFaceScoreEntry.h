//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIBurstFaceScoreEntry : NSObject
{
    float maxScore;
    float minScore;
    float sumScores;
    float sumSqScores;
    int numScores;
}

@property int numScores; // @synthesize numScores;
@property float minScore; // @synthesize minScore;
@property float maxScore; // @synthesize maxScore;
- (float)computeStandardDeviation;
- (float)computeAverage;
- (void)addScore:(float)arg1;
- (id)initWithScore:(float)arg1;

@end

