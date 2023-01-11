//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface PGMeaningQuestionFactory
{
    NSSet *_meaningLabelsForWhichToGenerateQuestions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *meaningLabelsForWhichToGenerateQuestions; // @synthesize meaningLabelsForWhichToGenerateQuestions=_meaningLabelsForWhichToGenerateQuestions;
- (id)_dateNodesFromStartDate:(id)arg1 toEndDate:(id)arg2;
- (id)_expandedDateNodesFromDateNode:(id)arg1;
- (id)_expandedDateNodesFromDateNodes:(id)arg1;
- (id)_looseCriteriasForCriteria:(id)arg1;
- (id)_looseMeaningLabelsForMomentNode:(id)arg1 fromCandidateLabels:(id)arg2 inGraph:(id)arg3;
- (id)_questionsToAddFromMomentNodes:(id)arg1 useCuratedAssets:(_Bool)arg2 localFactoryScore:(double)arg3 alreadyGeneratedQuestions:(id)arg4 limit:(unsigned long long)arg5 graph:(id)arg6 progressBlock:(CDUnknownBlockType)arg7;
- (id)_meaningLabelsByParentMeaningLabels;
- (void)_updateMeaningQuestionsIfNeededWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (long long)questionOptions;
- (unsigned short)questionType;

@end
