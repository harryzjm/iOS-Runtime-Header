//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CHStrokeClassificationResult.h"

@class NSMutableDictionary, NSMutableSet;

@interface CHMutableStrokeClassificationResult : CHStrokeClassificationResult
{
    NSMutableDictionary *_strokeClassificationsByStrokeIdentifier;
    NSMutableDictionary *_scriptClassificationsByStrokeIdentifier;
    NSMutableDictionary *_substrokesByStrokeIdentifier;
    NSMutableSet *_nontextCandidates;
}

- (void).cxx_destruct;
- (struct CGRect)_boundsForStrokeIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateByAddingClutterStroke:(id)arg1;
- (void)updateScriptByAddingNonClutterStroke:(id)arg1 withClassification:(id)arg2;
- (void)updateByAddingNonClutterStroke:(id)arg1 withClassification:(long long)arg2;
- (id)nontextCandidates;
- (id)substrokesByStrokeIdentifier;
- (id)scriptClassificationsByStrokeIdentifier;
- (id)strokeClassificationsByStrokeIdentifier;
- (void)updateNonTextCandidatesSupportFromStroke:(id)arg1;
- (void)updateByAddingNonClutterStroke:(id)arg1 withAllStrokes:(id)arg2 forceText:(_Bool)arg3;
- (void)updateByTransitionedClutterStrokeIdentifier:(id)arg1 withRemovedAndClutterStrokeIDs:(id)arg2;
- (void)updateByRemovingStrokeIdentifier:(id)arg1 withRemovedAndClutterStrokeIDs:(id)arg2;
- (void)updateNonTextCandidatesByRemovingSupportFromStrokeIdentifier:(id)arg1 skippingCandidatesWithStrokeIdentifier:(id)arg2;
- (id)initWithStrokeClassificationsByStrokeIdentifier:(id)arg1 scriptClassificationsByStrokeIdentifier:(id)arg2 substrokesByStrokeIdentifier:(id)arg3 nontextCandidates:(id)arg4;
- (id)init;

@end

