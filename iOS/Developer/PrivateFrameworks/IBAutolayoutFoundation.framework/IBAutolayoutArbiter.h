//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IBAutolayoutEngine, NSMutableSet, NSSet;

@interface IBAutolayoutArbiter : NSObject
{
    unsigned long long _constraintBreakageStrategy;
    NSMutableSet *_viewsThatHaveHadCandidatesUnconditionallyGeneratedAtLeastOnce;
    NSMutableSet *_temporaryConstraintsForAncestorsOfWhitelistedViews;
    NSMutableSet *_viewsWithAddedTemporaryExplicitConstraints;
    NSMutableSet *_viewsWithGeneratedCandidateConstraints;
    NSSet *_constraintsInDocumentBeforeArbitration;
    NSMutableSet *_viewWhitelistForArbitration;
    NSMutableSet *_constraintsToRemove;
    NSMutableSet *_constraintsToAdd;
    id _arbitrationPerformanceMetric;
    _Bool _updateUnsatisfiedConstraintConstants;
    IBAutolayoutEngine *_engine;
}

+ (_Bool)attemptToSetLayoutFrame:(struct CGRect)arg1 ofView:(id)arg2 byModifyingLayoutEngine:(id)arg3 mutuallyExclusiveConstraintBreakageStrategy:(unsigned long long)arg4 mutableConstraintsToAdd:(id *)arg5 mutableConstraintsToRemove:(id *)arg6;
+ (_Bool)attemptToAddConstraint:(id)arg1 byModifyingLayoutEngine:(id)arg2 mutuallyExclusiveConstraintBreakageStrategy:(unsigned long long)arg3 mutableConstraintsToAdd:(id *)arg4 mutableConstraintsToRemove:(id *)arg5;
+ (unsigned long long)effectiveMutuallyExclusiveConstraintBreakageStrategyForStrategy:(unsigned long long)arg1;
+ (_Bool)canConsiderRemovalOfRedundantConstraint:(id)arg1;
+ (_Bool)canConsiderRemovalOfOverConstrainingConstraint:(id)arg1;
+ (id)arbitrateConstraintsByModifyingLayoutEngine:(id)arg1 options:(id)arg2;
- (void).cxx_destruct;
@property(copy) NSSet *constraintsToAdd; // @synthesize constraintsToAdd=_constraintsToAdd;
@property(copy) NSSet *constraintsToRemove; // @synthesize constraintsToRemove=_constraintsToRemove;
@property(readonly) IBAutolayoutEngine *engine; // @synthesize engine=_engine;
- (id)description;
- (id)arbitrateWithOptions:(id)arg1;
- (void)removeTemporaryConstraintsForAncestorsOfWhitelistedViews;
- (void)resolveMutuallyExclusiveConstraintsRemovedDuringEngineBootstrapping;
- (void)removeRedundantConstraintsWithOptions:(id)arg1;
- (_Bool)addApplicableCandidateConstraints:(id *)arg1;
- (void)_updateUnsatisfiedConstraintConstantsIfNeeded;
- (id)logArbitrationFailureAndReturnMessageForReason:(id)arg1;
- (_Bool)attemptToAddApplicableCandidateConstraintsForViews:(id)arg1 forGenerationType:(unsigned long long)arg2;
- (void)addTemporaryConstraintsToAmbiguousAncestorsIfWhitelisted:(id)arg1;
- (id)addTemporaryExplicitConstraintsForView:(id)arg1;
- (void)addExplicitSizeConstraintsForView:(id)arg1;
- (void)addApplicableCandidatePositionAndSizeConstraintsForView:(id)arg1;
- (void)addApplicableCandidateConstraints:(id)arg1 forView:(id)arg2;
- (void)attemptToAddConstraint:(id)arg1;
- (id)viewsNeedingContinuedArbitrationMappedToReasonString;
- (id)viewsNeedingConstraintsByTypeWithAdditionalViewsRequiringFullArbitration:(id)arg1;
- (unsigned long long)candidateConstraintGenerationTypeForView:(id)arg1;
- (_Bool)viewHasAmbiguousLayoutOrIncorrectFrame:(id)arg1 additionalViewsRequiringFullArbitration:(id)arg2 reasonString:(id *)arg3;
- (_Bool)viewRequiresUnconditionalGenerationOfCandidates:(id)arg1 additionalViewsRequiringFullArbitration:(id)arg2 reason:(id *)arg3;
- (_Bool)verifyAllRealViewsHaveWindow:(id *)arg1;
- (_Bool)viewIsTopMostInEngine:(id)arg1;
- (_Bool)constraintWasInDocumentBeforeArbitration:(id)arg1;
- (id)generateCandidateConstraintsForView:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)layoutInfo;
- (id)initWithMutableLayoutEngine:(id)arg1;

@end

