//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class OITSUProgressContext;

__attribute__((visibility("hidden")))
@interface OITSUProgressStage : NSObject
{
    double m_currentPosition;
    double m_totalSteps;
    double m_stepsInParent;
    double m_startInParent;
    double m_nextSubStageParentSize;
    OITSUProgressStage *m_parentStage;
    OITSUProgressContext *m_context;
}

- (id)description;
- (void)setNextSubStageParentSize:(double)arg1;
- (double)nextSubStageParentSize;
- (double)overallProgress;
- (double)currentPosition;
- (id)parentStage;
- (void)end;
- (void)setProgressPercentage:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)advanceProgress:(double)arg1;
- (void)dealloc;
- (id)initWithSteps:(double)arg1 takingSteps:(double)arg2 inContext:(id)arg3;
- (id)initRootStageInContext:(id)arg1;

@end

