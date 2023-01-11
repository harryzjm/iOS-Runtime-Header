//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSCharts/TSCHUnretainedParent-Protocol.h>

@class TSCHMultiDataChartRep;

@interface TSCHMultiDataChartRepMultiDataBuildStages : NSObject <TSCHUnretainedParent>
{
    TSCHMultiDataChartRep *mRep;
    struct _NSRange mStages;
    double mTotalDuration;
    double mDuration;
    unsigned long long mCurrentStage;
}

+ (id)buildStagesWithRep:(id)arg1 stages:(struct _NSRange)arg2 totalDuration:(double)arg3;
+ (unsigned long long)dataSetIndexForRep:(id)arg1 buildStage:(unsigned long long)arg2;
+ (unsigned long long)numberOfFadingBuildStages;
- (void).cxx_destruct;
@property(readonly, nonatomic) double duration; // @synthesize duration=mDuration;
@property(readonly, nonatomic) unsigned long long currentStage; // @synthesize currentStage=mCurrentStage;
- (_Bool)hasStage;
- (void)advanceStage;
- (unsigned long long)dataSetIndexForStage:(unsigned long long)arg1;
- (_Bool)isFadingInLayers;
- (_Bool)isLastStageBackgroundOnly;
- (_Bool)isBackgroundOnly;
- (_Bool)isBackgroundOnlyStage:(unsigned long long)arg1;
- (id)chartLayout;
- (void)setupLayoutDataSetIndexForNextStage;
- (void)setupLayoutDataSetIndexForCurrentStage;
- (void)clearParent;
- (void)dealloc;
- (id)initWithRep:(id)arg1 stages:(struct _NSRange)arg2 totalDuration:(double)arg3;

@end
